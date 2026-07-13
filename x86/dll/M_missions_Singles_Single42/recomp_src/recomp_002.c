#include "recomp.h"

/* FUN_1000db50 @ 0x1172db50 (178 bytes, 56 insns) */
void f_1172db50(void) {
  FTRACE(0x1172db50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172db50 push ebp */
  push32((uint32_t)(EBP));
  /* 1172db51 mov ebp, esp */
  EBP = (ESP);
  /* 1172db53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172db56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172db59 push eax */
  push32((uint32_t)(EAX));
  /* 1172db5a call 0x1172e710 */
  push32(0x1172db5fu); f_1172e710();
  /* 1172db5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172db62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172db65 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172db69 jne 0x1172db7e */
  if (!C.zf) goto L_1172db7e;
  /* 1172db6b call 0x1172d580 */
  push32(0x1172db70u); f_1172d580();
  /* 1172db70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172db76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172db79 jmp 0x1172dbfe */
  goto L_1172dbfe;
L_1172db7e:;
  /* 1172db7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172db81 push ecx */
  push32((uint32_t)(ECX));
  /* 1172db82 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172db84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172db87 push edx */
  push32((uint32_t)(EDX));
  /* 1172db88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172db8b push eax */
  push32((uint32_t)(EAX));
  /* 1172db8c call dword ptr [0x117552ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552ac))), 0x1172db92u);
  /* 1172db92 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172db95 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172db99 jne 0x1172dba6 */
  if (!C.zf) goto L_1172dba6;
  /* 1172db9b call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172dba1u);
  /* 1172dba1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172dba4 jmp 0x1172dbad */
  goto L_1172dbad;
L_1172dba6:;
  /* 1172dba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172dbad:;
  /* 1172dbad cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dbb1 je 0x1172dbc4 */
  if (C.zf) goto L_1172dbc4;
  /* 1172dbb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dbb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1172dbb7 call 0x1172d4e0 */
  push32(0x1172dbbcu); f_1172d4e0();
  /* 1172dbbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dbbf or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172dbc2 jmp 0x1172dbfe */
  goto L_1172dbfe;
L_1172dbc4:;
  /* 1172dbc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dbc7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1172dbca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dbcd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1172dbd0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dbd3 mov ecx, dword ptr [edx*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172dbda mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1172dbde and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1172dbe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dbe4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172dbe7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dbea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172dbed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dbf0 mov eax, dword ptr [eax*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172dbf7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1172dbfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1172dbfe:;
  /* 1172dbfe mov esp, ebp */
  ESP = (EBP);
  /* 1172dc00 pop ebp */
  EBP = (pop32());
  /* 1172dc01 ret  */
  ESPCHK(0x1172db50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc10 @ 0x1172dc10 (130 bytes, 43 insns) */
void f_1172dc10(void) {
  FTRACE(0x1172dc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172dc10 push ebp */
  push32((uint32_t)(EBP));
  /* 1172dc11 mov ebp, esp */
  EBP = (ESP);
  /* 1172dc13 push ecx */
  push32((uint32_t)(ECX));
  /* 1172dc14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc17 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dc1d jae 0x1172dc41 */
  if (!C.cf) goto L_1172dc41;
  /* 1172dc1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc22 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172dc25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc28 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172dc2b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dc2e mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172dc35 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172dc3a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172dc3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172dc3f jne 0x1172dc5c */
  if (!C.zf) goto L_1172dc5c;
L_1172dc41:;
  /* 1172dc41 call 0x1172d580 */
  push32(0x1172dc46u); f_1172d580();
  /* 1172dc46 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172dc4c call 0x1172d590 */
  push32(0x1172dc51u); f_1172d590();
  /* 1172dc51 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172dc57 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172dc5a jmp 0x1172dc8e */
  goto L_1172dc8e;
L_1172dc5c:;
  /* 1172dc5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc5f push edx */
  push32((uint32_t)(EDX));
  /* 1172dc60 call 0x1172e890 */
  push32(0x1172dc65u); f_1172e890();
  /* 1172dc65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dc68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172dc6b push eax */
  push32((uint32_t)(EAX));
  /* 1172dc6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172dc6f push ecx */
  push32((uint32_t)(ECX));
  /* 1172dc70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc73 push edx */
  push32((uint32_t)(EDX));
  /* 1172dc74 call 0x1172dca0 */
  push32(0x1172dc79u); f_1172dca0();
  /* 1172dc79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dc7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172dc7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dc82 push eax */
  push32((uint32_t)(EAX));
  /* 1172dc83 call 0x1172e920 */
  push32(0x1172dc88u); f_1172e920();
  /* 1172dc88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172dc8e:;
  /* 1172dc8e mov esp, ebp */
  ESP = (EBP);
  /* 1172dc90 pop ebp */
  EBP = (pop32());
  /* 1172dc91 ret  */
  ESPCHK(0x1172dc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dca0 @ 0x1172dca0 (627 bytes, 182 insns) */
void f_1172dca0(void) {
  FTRACE(0x1172dca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172dca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172dca1 mov ebp, esp */
  EBP = (ESP);
  /* 1172dca3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172dca9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1172dcb0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172dcb3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1172dcb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dcbd jne 0x1172dcc6 */
  if (!C.zf) goto L_1172dcc6;
  /* 1172dcbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172dcc1 jmp 0x1172df0f */
  goto L_1172df0f;
L_1172dcc6:;
  /* 1172dcc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dcc9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172dccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dccf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172dcd2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dcd5 mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172dcdc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172dce1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1172dce4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172dce6 je 0x1172dcf8 */
  if (C.zf) goto L_1172dcf8;
  /* 1172dce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172dcea push 0 */
  push32((uint32_t)(0x0u));
  /* 1172dcec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dcef push edx */
  push32((uint32_t)(EDX));
  /* 1172dcf0 call 0x1172db50 */
  push32(0x1172dcf5u); f_1172db50();
  /* 1172dcf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172dcf8:;
  /* 1172dcf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dcfb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172dcfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dd01 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172dd04 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dd07 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172dd0e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1172dd13 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1172dd18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172dd1a je 0x1172de2c */
  if (C.zf) goto L_1172de2c;
  /* 1172dd20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172dd23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172dd26 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1172dd2d:;
  /* 1172dd2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dd30 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172dd33 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dd36 jae 0x1172de2a */
  if (!C.cf) goto L_1172de2a;
  /* 1172dd3c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1172dd42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1172dd45:;
  /* 1172dd45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172dd48 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1172dd4e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172dd50 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dd56 jge 0x1172ddb7 */
  if ((C.sf==C.of)) goto L_1172ddb7;
  /* 1172dd58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dd5b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172dd5e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dd61 jae 0x1172ddb7 */
  if (!C.cf) goto L_1172ddb7;
  /* 1172dd63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dd66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172dd68 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1172dd6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dd71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dd74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172dd77 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1172dd7e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dd81 jne 0x1172dda1 */
  if (!C.zf) goto L_1172dda1;
  /* 1172dd83 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1172dd89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dd8c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1172dd92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172dd95 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1172dd98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172dd9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dd9e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1172dda1:;
  /* 1172dda1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172dda4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1172ddaa mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1172ddac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ddaf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ddb2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172ddb5 jmp 0x1172dd45 */
  goto L_1172dd45;
L_1172ddb7:;
  /* 1172ddb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172ddb9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1172ddbf push edx */
  push32((uint32_t)(EDX));
  /* 1172ddc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ddc3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1172ddc9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ddcb push eax */
  push32((uint32_t)(EAX));
  /* 1172ddcc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1172ddd2 push edx */
  push32((uint32_t)(EDX));
  /* 1172ddd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ddd6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172ddd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dddc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172dddf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dde2 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172dde9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1172ddec push eax */
  push32((uint32_t)(EAX));
  /* 1172dded call dword ptr [0x117552e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e4))), 0x1172ddf3u);
  /* 1172ddf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ddf5 je 0x1172de1a */
  if (C.zf) goto L_1172de1a;
  /* 1172ddf7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ddfa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172de00 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1172de03 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172de06 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1172de0c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172de0e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172de14 jge 0x1172de18 */
  if ((C.sf==C.of)) goto L_1172de18;
  /* 1172de16 jmp 0x1172de2a */
  goto L_1172de2a;
L_1172de18:;
  /* 1172de18 jmp 0x1172de25 */
  goto L_1172de25;
L_1172de1a:;
  /* 1172de1a call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172de20u);
  /* 1172de20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172de23 jmp 0x1172de2a */
  goto L_1172de2a;
L_1172de25:;
  /* 1172de25 jmp 0x1172dd2d */
  goto L_1172dd2d;
L_1172de2a:;
  /* 1172de2a jmp 0x1172de7c */
  goto L_1172de7c;
L_1172de2c:;
  /* 1172de2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172de2e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1172de34 push ecx */
  push32((uint32_t)(ECX));
  /* 1172de35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172de38 push edx */
  push32((uint32_t)(EDX));
  /* 1172de39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172de3c push eax */
  push32((uint32_t)(EAX));
  /* 1172de3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172de40 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172de43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172de46 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172de49 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172de4c mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172de53 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1172de56 push ecx */
  push32((uint32_t)(ECX));
  /* 1172de57 call dword ptr [0x117552e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e4))), 0x1172de5du);
  /* 1172de5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172de5f je 0x1172de73 */
  if (C.zf) goto L_1172de73;
  /* 1172de61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172de68 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1172de6e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172de71 jmp 0x1172de7c */
  goto L_1172de7c;
L_1172de73:;
  /* 1172de73 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172de79u);
  /* 1172de79 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172de7c:;
  /* 1172de7c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172de80 jne 0x1172df06 */
  if (!C.zf) goto L_1172df06;
  /* 1172de86 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172de8a je 0x1172deba */
  if (C.zf) goto L_1172deba;
  /* 1172de8c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172de90 jne 0x1172dea9 */
  if (!C.zf) goto L_1172dea9;
  /* 1172de92 call 0x1172d580 */
  push32(0x1172de97u); f_1172d580();
  /* 1172de97 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172de9d call 0x1172d590 */
  push32(0x1172dea2u); f_1172d590();
  /* 1172dea2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172dea5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172dea7 jmp 0x1172deb5 */
  goto L_1172deb5;
L_1172dea9:;
  /* 1172dea9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172deac push edx */
  push32((uint32_t)(EDX));
  /* 1172dead call 0x1172d4e0 */
  push32(0x1172deb2u); f_1172d4e0();
  /* 1172deb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172deb5:;
  /* 1172deb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172deb8 jmp 0x1172df0f */
  goto L_1172df0f;
L_1172deba:;
  /* 1172deba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172debd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172dec0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dec3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172dec6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dec9 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172ded0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1172ded5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ded8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172deda je 0x1172deeb */
  if (C.zf) goto L_1172deeb;
  /* 1172dedc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172dedf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172dee2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dee5 jne 0x1172deeb */
  if (!C.zf) goto L_1172deeb;
  /* 1172dee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172dee9 jmp 0x1172df0f */
  goto L_1172df0f;
L_1172deeb:;
  /* 1172deeb call 0x1172d580 */
  push32(0x1172def0u); f_1172d580();
  /* 1172def0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1172def6 call 0x1172d590 */
  push32(0x1172defbu); f_1172d590();
  /* 1172defb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172df01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172df04 jmp 0x1172df0f */
  goto L_1172df0f;
L_1172df06:;
  /* 1172df06 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172df09 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1172df0f:;
  /* 1172df0f mov esp, ebp */
  ESP = (EBP);
  /* 1172df11 pop ebp */
  EBP = (pop32());
  /* 1172df12 ret  */
  ESPCHK(0x1172dca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1172df20 (199 bytes, 68 insns) */
void f_1172df20(void) {
  FTRACE(0x1172df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1172df21 mov ebp, esp */
  EBP = (ESP);
  /* 1172df23 push ecx */
  push32((uint32_t)(ECX));
  /* 1172df24 push ebx */
  push32((uint32_t)(EBX));
  /* 1172df25 push esi */
  push32((uint32_t)(ESI));
  /* 1172df26 push edi */
  push32((uint32_t)(EDI));
L_1172df27:;
  /* 1172df27 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172df2b jne 0x1172df4b */
  if (!C.zf) goto L_1172df4b;
  /* 1172df2d push 0x1174df7c */
  push32((uint32_t)(0x1174df7cu));
  /* 1172df32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172df34 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1172df36 push 0x1174e048 */
  push32((uint32_t)(0x1174e048u));
  /* 1172df3b push 2 */
  push32((uint32_t)(0x2u));
  /* 1172df3d call 0x11723380 */
  push32(0x1172df42u); f_11723380();
  /* 1172df42 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172df45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172df48 jne 0x1172df4b */
  if (!C.zf) goto L_1172df4b;
  /* 1172df4a int3  */
  x86_unimpl("int3 @ 0x1172df4a");
L_1172df4b:;
  /* 1172df4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172df4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172df4f jne 0x1172df27 */
  if (!C.zf) goto L_1172df27;
  /* 1172df51 mov ecx, dword ptr [0x11752c20] */
  ECX = (r32((uint32_t)(0x11752c20)));
  /* 1172df57 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172df5a mov dword ptr [0x11752c20], ecx */
  w32((uint32_t)(0x11752c20), (ECX));
  /* 1172df60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172df63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172df66 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1172df68 push 0x1174e048 */
  push32((uint32_t)(0x1174e048u));
  /* 1172df6d push 2 */
  push32((uint32_t)(0x2u));
  /* 1172df6f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1172df74 call 0x11723c00 */
  push32(0x1172df79u); f_11723c00();
  /* 1172df79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172df7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172df7f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1172df82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172df85 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172df89 je 0x1172dfa6 */
  if (C.zf) goto L_1172dfa6;
  /* 1172df8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172df8e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172df91 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1172df94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172df97 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1172df9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172df9d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1172dfa4 jmp 0x1172dfcb */
  goto L_1172dfcb;
L_1172dfa6:;
  /* 1172dfa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfa9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172dfac or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1172dfaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfb2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1172dfb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfb8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172dfbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfbe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1172dfc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfc4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1172dfcb:;
  /* 1172dfcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172dfd4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172dfd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dfd9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1172dfe0 pop edi */
  EDI = (pop32());
  /* 1172dfe1 pop esi */
  ESI = (pop32());
  /* 1172dfe2 pop ebx */
  EBX = (pop32());
  /* 1172dfe3 mov esp, ebp */
  ESP = (EBP);
  /* 1172dfe5 pop ebp */
  EBP = (pop32());
  /* 1172dfe6 ret  */
  ESPCHK(0x1172df20u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1172dff0 (50 bytes, 17 insns) */
void f_1172dff0(void) {
  FTRACE(0x1172dff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172dff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172dff1 mov ebp, esp */
  EBP = (ESP);
  /* 1172dff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dff6 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dffc jb 0x1172e002 */
  if (C.cf) goto L_1172e002;
  /* 1172dffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172e000 jmp 0x1172e020 */
  goto L_1172e020;
L_1172e002:;
  /* 1172e002 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e005 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e008 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e00b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e00e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e011 mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e018 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172e01d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1172e020:;
  /* 1172e020 pop ebp */
  EBP = (pop32());
  /* 1172e021 ret  */
  ESPCHK(0x1172dff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e030 @ 0x1172e030 (300 bytes, 80 insns) */
void f_1172e030(void) {
  FTRACE(0x1172e030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e030 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e031 mov ebp, esp */
  EBP = (ESP);
  /* 1172e033 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e034 cmp dword ptr [0x117540e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117540e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e03b jne 0x1172e049 */
  if (!C.zf) goto L_1172e049;
  /* 1172e03d mov dword ptr [0x117540e0], 0x200 */
  w32((uint32_t)(0x117540e0), (0x200u));
  /* 1172e047 jmp 0x1172e05c */
  goto L_1172e05c;
L_1172e049:;
  /* 1172e049 cmp dword ptr [0x117540e0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x117540e0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e050 jge 0x1172e05c */
  if ((C.sf==C.of)) goto L_1172e05c;
  /* 1172e052 mov dword ptr [0x117540e0], 0x14 */
  w32((uint32_t)(0x117540e0), (0x14u));
L_1172e05c:;
  /* 1172e05c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1172e061 push 0x1174e054 */
  push32((uint32_t)(0x1174e054u));
  /* 1172e066 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172e068 push 4 */
  push32((uint32_t)(0x4u));
  /* 1172e06a mov eax, dword ptr [0x117540e0] */
  EAX = (r32((uint32_t)(0x117540e0)));
  /* 1172e06f push eax */
  push32((uint32_t)(EAX));
  /* 1172e070 call 0x11724010 */
  push32(0x1172e075u); f_11724010();
  /* 1172e075 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e078 mov dword ptr [0x11752d98], eax */
  w32((uint32_t)(0x11752d98), (EAX));
  /* 1172e07d cmp dword ptr [0x11752d98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e084 jne 0x1172e0c5 */
  if (!C.zf) goto L_1172e0c5;
  /* 1172e086 mov dword ptr [0x117540e0], 0x14 */
  w32((uint32_t)(0x117540e0), (0x14u));
  /* 1172e090 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1172e095 push 0x1174e054 */
  push32((uint32_t)(0x1174e054u));
  /* 1172e09a push 2 */
  push32((uint32_t)(0x2u));
  /* 1172e09c push 4 */
  push32((uint32_t)(0x4u));
  /* 1172e09e mov ecx, dword ptr [0x117540e0] */
  ECX = (r32((uint32_t)(0x117540e0)));
  /* 1172e0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e0a5 call 0x11724010 */
  push32(0x1172e0aau); f_11724010();
  /* 1172e0aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e0ad mov dword ptr [0x11752d98], eax */
  w32((uint32_t)(0x11752d98), (EAX));
  /* 1172e0b2 cmp dword ptr [0x11752d98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e0b9 jne 0x1172e0c5 */
  if (!C.zf) goto L_1172e0c5;
  /* 1172e0bb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1172e0bd call 0x11723230 */
  push32(0x1172e0c2u); f_11723230();
  /* 1172e0c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172e0c5:;
  /* 1172e0c5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172e0cc jmp 0x1172e0d7 */
  goto L_1172e0d7;
L_1172e0ce:;
  /* 1172e0ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e0d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e0d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172e0d7:;
  /* 1172e0d7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e0db jge 0x1172e0f6 */
  if ((C.sf==C.of)) goto L_1172e0f6;
  /* 1172e0dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e0e0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e0e3 add eax, 0x11751440 */
  { uint32_t _a=(EAX),_b=(0x11751440u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e0e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e0eb mov edx, dword ptr [0x11752d98] */
  EDX = (r32((uint32_t)(0x11752d98)));
  /* 1172e0f1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1172e0f4 jmp 0x1172e0ce */
  goto L_1172e0ce;
L_1172e0f6:;
  /* 1172e0f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172e0fd jmp 0x1172e108 */
  goto L_1172e108;
L_1172e0ff:;
  /* 1172e0ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e102 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e105 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172e108:;
  /* 1172e108 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e10c jge 0x1172e158 */
  if ((C.sf==C.of)) goto L_1172e158;
  /* 1172e10e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e111 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e114 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e117 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e11a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e11d mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e124 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e128 je 0x1172e146 */
  if (C.zf) goto L_1172e146;
  /* 1172e12a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e12d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e133 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e136 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e139 mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e140 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e144 jne 0x1172e156 */
  if (!C.zf) goto L_1172e156;
L_1172e146:;
  /* 1172e146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e149 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e14c mov dword ptr [ecx + 0x11751450], 0xffffffff */
  w32((uint32_t)(ECX + 0x11751450), (0xffffffffu));
L_1172e156:;
  /* 1172e156 jmp 0x1172e0ff */
  goto L_1172e0ff;
L_1172e158:;
  /* 1172e158 mov esp, ebp */
  ESP = (EBP);
  /* 1172e15a pop ebp */
  EBP = (pop32());
  /* 1172e15b ret  */
  ESPCHK(0x1172e030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x1172e160 (26 bytes, 9 insns) */
void f_1172e160(void) {
  FTRACE(0x1172e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e160 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e161 mov ebp, esp */
  EBP = (ESP);
  /* 1172e163 call 0x1172eb90 */
  push32(0x1172e168u); f_1172eb90();
  /* 1172e168 movsx eax, byte ptr [0x11752aac] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11752aac))));
  /* 1172e16f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172e171 je 0x1172e178 */
  if (C.zf) goto L_1172e178;
  /* 1172e173 call 0x1172e950 */
  push32(0x1172e178u); f_1172e950();
L_1172e178:;
  /* 1172e178 pop ebp */
  EBP = (pop32());
  /* 1172e179 ret  */
  ESPCHK(0x1172e160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e180 @ 0x1172e180 (61 bytes, 20 insns) */
void f_1172e180(void) {
  FTRACE(0x1172e180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e180 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e181 mov ebp, esp */
  EBP = (ESP);
  /* 1172e183 cmp dword ptr [ebp + 8], 0x11751440 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11751440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e18a jb 0x1172e1ae */
  if (C.cf) goto L_1172e1ae;
  /* 1172e18c cmp dword ptr [ebp + 8], 0x117516a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117516a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e193 ja 0x1172e1ae */
  if ((!C.cf&&!C.zf)) goto L_1172e1ae;
  /* 1172e195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e198 sub eax, 0x11751440 */
  { uint32_t _a=(EAX),_b=(0x11751440u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e19d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e1a0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1a3 push eax */
  push32((uint32_t)(EAX));
  /* 1172e1a4 call 0x11723b00 */
  push32(0x1172e1a9u); f_11723b00();
  /* 1172e1a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1ac jmp 0x1172e1bb */
  goto L_1172e1bb;
L_1172e1ae:;
  /* 1172e1ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e1b1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e1b5 call dword ptr [0x11755308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755308))), 0x1172e1bbu);
L_1172e1bb:;
  /* 1172e1bb pop ebp */
  EBP = (pop32());
  /* 1172e1bc ret  */
  ESPCHK(0x1172e180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1c0 @ 0x1172e1c0 (41 bytes, 16 insns) */
void f_1172e1c0(void) {
  FTRACE(0x1172e1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1172e1c3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e1c7 jge 0x1172e1da */
  if ((C.sf==C.of)) goto L_1172e1da;
  /* 1172e1c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e1cc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1cf push eax */
  push32((uint32_t)(EAX));
  /* 1172e1d0 call 0x11723b00 */
  push32(0x1172e1d5u); f_11723b00();
  /* 1172e1d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1d8 jmp 0x1172e1e7 */
  goto L_1172e1e7;
L_1172e1da:;
  /* 1172e1da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e1dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e1e1 call dword ptr [0x11755308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755308))), 0x1172e1e7u);
L_1172e1e7:;
  /* 1172e1e7 pop ebp */
  EBP = (pop32());
  /* 1172e1e8 ret  */
  ESPCHK(0x1172e1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1f0 @ 0x1172e1f0 (61 bytes, 20 insns) */
void f_1172e1f0(void) {
  FTRACE(0x1172e1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1172e1f3 cmp dword ptr [ebp + 8], 0x11751440 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11751440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e1fa jb 0x1172e21e */
  if (C.cf) goto L_1172e21e;
  /* 1172e1fc cmp dword ptr [ebp + 8], 0x117516a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x117516a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e203 ja 0x1172e21e */
  if ((!C.cf&&!C.zf)) goto L_1172e21e;
  /* 1172e205 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e208 sub eax, 0x11751440 */
  { uint32_t _a=(EAX),_b=(0x11751440u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e20d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e210 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e213 push eax */
  push32((uint32_t)(EAX));
  /* 1172e214 call 0x11723ba0 */
  push32(0x1172e219u); f_11723ba0();
  /* 1172e219 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e21c jmp 0x1172e22b */
  goto L_1172e22b;
L_1172e21e:;
  /* 1172e21e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e221 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e224 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e225 call dword ptr [0x1175530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175530c))), 0x1172e22bu);
L_1172e22b:;
  /* 1172e22b pop ebp */
  EBP = (pop32());
  /* 1172e22c ret  */
  ESPCHK(0x1172e1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e230 @ 0x1172e230 (41 bytes, 16 insns) */
void f_1172e230(void) {
  FTRACE(0x1172e230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e230 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e231 mov ebp, esp */
  EBP = (ESP);
  /* 1172e233 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e237 jge 0x1172e24a */
  if ((C.sf==C.of)) goto L_1172e24a;
  /* 1172e239 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e23c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e23f push eax */
  push32((uint32_t)(EAX));
  /* 1172e240 call 0x11723ba0 */
  push32(0x1172e245u); f_11723ba0();
  /* 1172e245 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e248 jmp 0x1172e257 */
  goto L_1172e257;
L_1172e24a:;
  /* 1172e24a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e24d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e250 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e251 call dword ptr [0x1175530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175530c))), 0x1172e257u);
L_1172e257:;
  /* 1172e257 pop ebp */
  EBP = (pop32());
  /* 1172e258 ret  */
  ESPCHK(0x1172e230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e260 @ 0x1172e260 (119 bytes, 34 insns) */
void f_1172e260(void) {
  FTRACE(0x1172e260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e260 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e261 mov ebp, esp */
  EBP = (ESP);
  /* 1172e263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e266 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 1172e26b call dword ptr [0x117552f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f8))), 0x1172e271u);
  /* 1172e271 cmp dword ptr [0x11752d84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e278 je 0x1172e298 */
  if (C.zf) goto L_1172e298;
  /* 1172e27a push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 1172e27f call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x1172e285u);
  /* 1172e285 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172e287 call 0x11723b00 */
  push32(0x1172e28cu); f_11723b00();
  /* 1172e28c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e28f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172e296 jmp 0x1172e29f */
  goto L_1172e29f;
L_1172e298:;
  /* 1172e298 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172e29f:;
  /* 1172e29f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1172e2a3 push eax */
  push32((uint32_t)(EAX));
  /* 1172e2a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e2a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e2a8 call 0x1172e2e0 */
  push32(0x1172e2adu); f_1172e2e0();
  /* 1172e2ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e2b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172e2b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e2b7 je 0x1172e2c5 */
  if (C.zf) goto L_1172e2c5;
  /* 1172e2b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172e2bb call 0x11723ba0 */
  push32(0x1172e2c0u); f_11723ba0();
  /* 1172e2c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e2c3 jmp 0x1172e2d0 */
  goto L_1172e2d0;
L_1172e2c5:;
  /* 1172e2c5 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 1172e2ca call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x1172e2d0u);
L_1172e2d0:;
  /* 1172e2d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e2d3 mov esp, ebp */
  ESP = (EBP);
  /* 1172e2d5 pop ebp */
  EBP = (pop32());
  /* 1172e2d6 ret  */
  ESPCHK(0x1172e260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2e0 @ 0x1172e2e0 (160 bytes, 50 insns) */
void f_1172e2e0(void) {
  FTRACE(0x1172e2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1172e2e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e2e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e2ea jne 0x1172e2f3 */
  if (!C.zf) goto L_1172e2f3;
  /* 1172e2ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172e2ee jmp 0x1172e37c */
  goto L_1172e37c;
L_1172e2f3:;
  /* 1172e2f3 cmp dword ptr [0x11752c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e2fa jne 0x1172e32a */
  if (!C.zf) goto L_1172e32a;
  /* 1172e2fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e2ff and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e304 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e309 jle 0x1172e31b */
  if ((C.zf||C.sf!=C.of)) goto L_1172e31b;
  /* 1172e30b call 0x1172d580 */
  push32(0x1172e310u); f_1172d580();
  /* 1172e310 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1172e316 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e319 jmp 0x1172e37c */
  goto L_1172e37c;
L_1172e31b:;
  /* 1172e31b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e31e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1172e321 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1172e323 mov eax, 1 */
  EAX = (0x1u);
  /* 1172e328 jmp 0x1172e37c */
  goto L_1172e37c;
L_1172e32a:;
  /* 1172e32a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1172e331 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1172e334 push eax */
  push32((uint32_t)(EAX));
  /* 1172e335 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172e337 mov ecx, dword ptr [0x11751144] */
  ECX = (r32((uint32_t)(0x11751144)));
  /* 1172e33d push ecx */
  push32((uint32_t)(ECX));
  /* 1172e33e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e341 push edx */
  push32((uint32_t)(EDX));
  /* 1172e342 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172e344 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1172e347 push eax */
  push32((uint32_t)(EAX));
  /* 1172e348 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1172e34d mov ecx, dword ptr [0x11752c14] */
  ECX = (r32((uint32_t)(0x11752c14)));
  /* 1172e353 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e354 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x1172e35au);
  /* 1172e35a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172e35d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e361 je 0x1172e369 */
  if (C.zf) goto L_1172e369;
  /* 1172e363 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e367 je 0x1172e379 */
  if (C.zf) goto L_1172e379;
L_1172e369:;
  /* 1172e369 call 0x1172d580 */
  push32(0x1172e36eu); f_1172d580();
  /* 1172e36e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1172e374 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e377 jmp 0x1172e37c */
  goto L_1172e37c;
L_1172e379:;
  /* 1172e379 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172e37c:;
  /* 1172e37c mov esp, ebp */
  ESP = (EBP);
  /* 1172e37e pop ebp */
  EBP = (pop32());
  /* 1172e37f ret  */
  ESPCHK(0x1172e2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e380 @ 0x1172e380 (482 bytes, 138 insns) */
void f_1172e380(void) {
  FTRACE(0x1172e380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e380 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e381 mov ebp, esp */
  EBP = (ESP);
  /* 1172e383 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e386 push esi */
  push32((uint32_t)(ESI));
  /* 1172e387 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1172e38e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1172e390 call 0x11723b00 */
  push32(0x1172e395u); f_11723b00();
  /* 1172e395 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e398 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172e39f jmp 0x1172e3aa */
  goto L_1172e3aa;
L_1172e3a1:;
  /* 1172e3a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e3a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e3a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172e3aa:;
  /* 1172e3aa cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e3ae jge 0x1172e550 */
  if ((C.sf==C.of)) goto L_1172e550;
  /* 1172e3b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e3b7 cmp dword ptr [ecx*4 + 0x117543c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x117543c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e3bf je 0x1172e4b6 */
  if (C.zf) goto L_1172e4b6;
  /* 1172e3c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e3c8 mov eax, dword ptr [edx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172e3cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172e3d2 jmp 0x1172e3dd */
  goto L_1172e3dd;
L_1172e3d4:;
  /* 1172e3d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e3d7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e3da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172e3dd:;
  /* 1172e3dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e3e0 mov eax, dword ptr [edx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172e3e7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e3ec cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e3ef jae 0x1172e4a6 */
  if (!C.cf) goto L_1172e4a6;
  /* 1172e3f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e3f8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172e3fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172e3ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172e401 jne 0x1172e4a1 */
  if (!C.zf) goto L_1172e4a1;
  /* 1172e407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e40a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e40e jne 0x1172e449 */
  if (!C.zf) goto L_1172e449;
  /* 1172e410 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1172e412 call 0x11723b00 */
  push32(0x1172e417u); f_11723b00();
  /* 1172e417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e41a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e41d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e421 jne 0x1172e43f */
  if (!C.zf) goto L_1172e43f;
  /* 1172e423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e426 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e429 push edx */
  push32((uint32_t)(EDX));
  /* 1172e42a call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x1172e430u);
  /* 1172e430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e433 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172e436 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e43c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1172e43f:;
  /* 1172e43f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1172e441 call 0x11723ba0 */
  push32(0x1172e446u); f_11723ba0();
  /* 1172e446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172e449:;
  /* 1172e449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e44c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e44f push eax */
  push32((uint32_t)(EAX));
  /* 1172e450 call dword ptr [0x11755308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755308))), 0x1172e456u);
  /* 1172e456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e459 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172e45d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172e460 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172e462 je 0x1172e476 */
  if (C.zf) goto L_1172e476;
  /* 1172e464 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e467 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e46a push eax */
  push32((uint32_t)(EAX));
  /* 1172e46b call dword ptr [0x1175530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175530c))), 0x1172e471u);
  /* 1172e471 jmp 0x1172e3d4 */
  goto L_1172e3d4;
L_1172e476:;
  /* 1172e476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e479 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1172e47f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e482 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e488 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e48b sub eax, dword ptr [edx*4 + 0x117543c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x117543c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e492 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172e493 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1172e498 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172e49a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e49c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172e49f jmp 0x1172e4a6 */
  goto L_1172e4a6;
L_1172e4a1:;
  /* 1172e4a1 jmp 0x1172e3d4 */
  goto L_1172e3d4;
L_1172e4a6:;
  /* 1172e4a6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e4aa je 0x1172e4b1 */
  if (C.zf) goto L_1172e4b1;
  /* 1172e4ac jmp 0x1172e550 */
  goto L_1172e550;
L_1172e4b1:;
  /* 1172e4b1 jmp 0x1172e54b */
  goto L_1172e54b;
L_1172e4b6:;
  /* 1172e4b6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1172e4b8 push 0x1174e05c */
  push32((uint32_t)(0x1174e05cu));
  /* 1172e4bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1172e4bf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1172e4c4 call 0x11723c00 */
  push32(0x1172e4c9u); f_11723c00();
  /* 1172e4c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e4cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172e4cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e4d3 je 0x1172e549 */
  if (C.zf) goto L_1172e549;
  /* 1172e4d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e4d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e4db mov dword ptr [eax*4 + 0x117543c0], ecx */
  w32((uint32_t)(EAX*4 + 0x117543c0), (ECX));
  /* 1172e4e2 mov edx, dword ptr [0x117544fc] */
  EDX = (r32((uint32_t)(0x117544fc)));
  /* 1172e4e8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e4eb mov dword ptr [0x117544fc], edx */
  w32((uint32_t)(0x117544fc), (EDX));
  /* 1172e4f1 jmp 0x1172e4fc */
  goto L_1172e4fc;
L_1172e4f3:;
  /* 1172e4f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e4f6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172e4fc:;
  /* 1172e4fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e4ff mov edx, dword ptr [ecx*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e506 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e50c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e50f jae 0x1172e534 */
  if (!C.cf) goto L_1172e534;
  /* 1172e511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e514 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1172e518 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e51b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1172e521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e524 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1172e528 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e52b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1172e532 jmp 0x1172e4f3 */
  goto L_1172e4f3;
L_1172e534:;
  /* 1172e534 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172e537 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e53a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172e53d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e540 push edx */
  push32((uint32_t)(EDX));
  /* 1172e541 call 0x1172e890 */
  push32(0x1172e546u); f_1172e890();
  /* 1172e546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172e549:;
  /* 1172e549 jmp 0x1172e550 */
  goto L_1172e550;
L_1172e54b:;
  /* 1172e54b jmp 0x1172e3a1 */
  goto L_1172e3a1;
L_1172e550:;
  /* 1172e550 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1172e552 call 0x11723ba0 */
  push32(0x1172e557u); f_11723ba0();
  /* 1172e557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e55a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e55d pop esi */
  ESI = (pop32());
  /* 1172e55e mov esp, ebp */
  ESP = (EBP);
  /* 1172e560 pop ebp */
  EBP = (pop32());
  /* 1172e561 ret  */
  ESPCHK(0x1172e380u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1172e570 (183 bytes, 57 insns) */
void f_1172e570(void) {
  FTRACE(0x1172e570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e570 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e571 mov ebp, esp */
  EBP = (ESP);
  /* 1172e573 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e577 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e57d jae 0x1172e60a */
  if (!C.cf) goto L_1172e60a;
  /* 1172e583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e586 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e58c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e58f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e592 mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e599 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e59d jne 0x1172e60a */
  if (!C.zf) goto L_1172e60a;
  /* 1172e59f cmp dword ptr [0x117529f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e5a6 jne 0x1172e5ea */
  if (!C.zf) goto L_1172e5ea;
  /* 1172e5a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e5ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172e5ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e5b2 je 0x1172e5c2 */
  if (C.zf) goto L_1172e5c2;
  /* 1172e5b4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e5b8 je 0x1172e5d0 */
  if (C.zf) goto L_1172e5d0;
  /* 1172e5ba cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e5be je 0x1172e5de */
  if (C.zf) goto L_1172e5de;
  /* 1172e5c0 jmp 0x1172e5ea */
  goto L_1172e5ea;
L_1172e5c2:;
  /* 1172e5c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e5c5 push edx */
  push32((uint32_t)(EDX));
  /* 1172e5c6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1172e5c8 call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e5ceu);
  /* 1172e5ce jmp 0x1172e5ea */
  goto L_1172e5ea;
L_1172e5d0:;
  /* 1172e5d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e5d3 push eax */
  push32((uint32_t)(EAX));
  /* 1172e5d4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1172e5d6 call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e5dcu);
  /* 1172e5dc jmp 0x1172e5ea */
  goto L_1172e5ea;
L_1172e5de:;
  /* 1172e5de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e5e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e5e2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1172e5e4 call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e5eau);
L_1172e5ea:;
  /* 1172e5ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e5ed sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1172e5f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e5f3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e5f6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e5f9 mov ecx, dword ptr [edx*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172e600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e603 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1172e606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172e608 jmp 0x1172e623 */
  goto L_1172e623;
L_1172e60a:;
  /* 1172e60a call 0x1172d580 */
  push32(0x1172e60fu); f_1172d580();
  /* 1172e60f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172e615 call 0x1172d590 */
  push32(0x1172e61au); f_1172d590();
  /* 1172e61a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172e620 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1172e623:;
  /* 1172e623 mov esp, ebp */
  ESP = (EBP);
  /* 1172e625 pop ebp */
  EBP = (pop32());
  /* 1172e626 ret  */
  ESPCHK(0x1172e570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x1172e630 (216 bytes, 63 insns) */
void f_1172e630(void) {
  FTRACE(0x1172e630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e630 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e631 mov ebp, esp */
  EBP = (ESP);
  /* 1172e633 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e637 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e63d jae 0x1172e6eb */
  if (!C.cf) goto L_1172e6eb;
  /* 1172e643 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e646 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e64c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e64f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e652 mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e659 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172e65e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172e661 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172e663 je 0x1172e6eb */
  if (C.zf) goto L_1172e6eb;
  /* 1172e669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e66c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1172e66f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e672 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e675 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e678 mov ecx, dword ptr [edx*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172e67f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e683 je 0x1172e6eb */
  if (C.zf) goto L_1172e6eb;
  /* 1172e685 cmp dword ptr [0x117529f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e68c jne 0x1172e6ca */
  if (!C.zf) goto L_1172e6ca;
  /* 1172e68e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e691 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172e694 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e698 je 0x1172e6a8 */
  if (C.zf) goto L_1172e6a8;
  /* 1172e69a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e69e je 0x1172e6b4 */
  if (C.zf) goto L_1172e6b4;
  /* 1172e6a0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e6a4 je 0x1172e6c0 */
  if (C.zf) goto L_1172e6c0;
  /* 1172e6a6 jmp 0x1172e6ca */
  goto L_1172e6ca;
L_1172e6a8:;
  /* 1172e6a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172e6aa push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1172e6ac call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e6b2u);
  /* 1172e6b2 jmp 0x1172e6ca */
  goto L_1172e6ca;
L_1172e6b4:;
  /* 1172e6b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172e6b6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1172e6b8 call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e6beu);
  /* 1172e6be jmp 0x1172e6ca */
  goto L_1172e6ca;
L_1172e6c0:;
  /* 1172e6c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172e6c2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1172e6c4 call dword ptr [0x117552b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b4))), 0x1172e6cau);
L_1172e6ca:;
  /* 1172e6ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e6cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e6d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e6d3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172e6d6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e6d9 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172e6e0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1172e6e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172e6e9 jmp 0x1172e704 */
  goto L_1172e704;
L_1172e6eb:;
  /* 1172e6eb call 0x1172d580 */
  push32(0x1172e6f0u); f_1172d580();
  /* 1172e6f0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172e6f6 call 0x1172d590 */
  push32(0x1172e6fbu); f_1172d590();
  /* 1172e6fb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172e701 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1172e704:;
  /* 1172e704 mov esp, ebp */
  ESP = (EBP);
  /* 1172e706 pop ebp */
  EBP = (pop32());
  /* 1172e707 ret  */
  ESPCHK(0x1172e630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e710 @ 0x1172e710 (102 bytes, 30 insns) */
void f_1172e710(void) {
  FTRACE(0x1172e710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e710 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e711 mov ebp, esp */
  EBP = (ESP);
  /* 1172e713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e716 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e71c jae 0x1172e75b */
  if (!C.cf) goto L_1172e75b;
  /* 1172e71e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e721 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172e724 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e727 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172e72a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e72d mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172e734 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172e739 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172e73c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172e73e je 0x1172e75b */
  if (C.zf) goto L_1172e75b;
  /* 1172e740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e743 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1172e746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e749 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e74c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e74f mov ecx, dword ptr [edx*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172e756 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1172e759 jmp 0x1172e774 */
  goto L_1172e774;
L_1172e75b:;
  /* 1172e75b call 0x1172d580 */
  push32(0x1172e760u); f_1172d580();
  /* 1172e760 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172e766 call 0x1172d590 */
  push32(0x1172e76bu); f_1172d590();
  /* 1172e76b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172e771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1172e774:;
  /* 1172e774 pop ebp */
  EBP = (pop32());
  /* 1172e775 ret  */
  ESPCHK(0x1172e710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e780 @ 0x1172e780 (260 bytes, 83 insns) */
void f_1172e780(void) {
  FTRACE(0x1172e780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e780 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e781 mov ebp, esp */
  EBP = (ESP);
  /* 1172e783 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e786 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172e78a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e78d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1172e790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172e792 je 0x1172e79d */
  if (C.zf) goto L_1172e79d;
  /* 1172e794 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e797 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1172e79a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1172e79d:;
  /* 1172e79d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e7a0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1172e7a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172e7a8 je 0x1172e7b2 */
  if (C.zf) goto L_1172e7b2;
  /* 1172e7aa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e7ad or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1172e7af mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1172e7b2:;
  /* 1172e7b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172e7b5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1172e7bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172e7bd je 0x1172e7c8 */
  if (C.zf) goto L_1172e7c8;
  /* 1172e7bf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e7c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1172e7c5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1172e7c8:;
  /* 1172e7c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e7cb push eax */
  push32((uint32_t)(EAX));
  /* 1172e7cc call dword ptr [0x11755350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755350))), 0x1172e7d2u);
  /* 1172e7d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172e7d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e7d9 jne 0x1172e7f2 */
  if (!C.zf) goto L_1172e7f2;
  /* 1172e7db call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172e7e1u);
  /* 1172e7e1 push eax */
  push32((uint32_t)(EAX));
  /* 1172e7e2 call 0x1172d4e0 */
  push32(0x1172e7e7u); f_1172d4e0();
  /* 1172e7e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e7ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e7ed jmp 0x1172e880 */
  goto L_1172e880;
L_1172e7f2:;
  /* 1172e7f2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e7f6 jne 0x1172e803 */
  if (!C.zf) goto L_1172e803;
  /* 1172e7f8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e7fb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1172e7fe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1172e801 jmp 0x1172e812 */
  goto L_1172e812;
L_1172e803:;
  /* 1172e803 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e807 jne 0x1172e812 */
  if (!C.zf) goto L_1172e812;
  /* 1172e809 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e80c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1172e80f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1172e812:;
  /* 1172e812 call 0x1172e380 */
  push32(0x1172e817u); f_1172e380();
  /* 1172e817 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172e81a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e81e jne 0x1172e83b */
  if (!C.zf) goto L_1172e83b;
  /* 1172e820 call 0x1172d580 */
  push32(0x1172e825u); f_1172d580();
  /* 1172e825 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1172e82b call 0x1172d590 */
  push32(0x1172e830u); f_1172d590();
  /* 1172e830 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172e836 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172e839 jmp 0x1172e880 */
  goto L_1172e880;
L_1172e83b:;
  /* 1172e83b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e83e push eax */
  push32((uint32_t)(EAX));
  /* 1172e83f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e842 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e843 call 0x1172e570 */
  push32(0x1172e848u); f_1172e570();
  /* 1172e848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e84b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e84e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1172e851 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1172e854 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e857 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e85a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e85d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172e860 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e863 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172e86a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1172e86d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1172e871 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e874 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e875 call 0x1172e920 */
  push32(0x1172e87au); f_1172e920();
  /* 1172e87a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e87d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1172e880:;
  /* 1172e880 mov esp, ebp */
  ESP = (EBP);
  /* 1172e882 pop ebp */
  EBP = (pop32());
  /* 1172e883 ret  */
  ESPCHK(0x1172e780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e890 @ 0x1172e890 (134 bytes, 44 insns) */
void f_1172e890(void) {
  FTRACE(0x1172e890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e890 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e891 mov ebp, esp */
  EBP = (ESP);
  /* 1172e893 push ecx */
  push32((uint32_t)(ECX));
  /* 1172e894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e897 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e89a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e89d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172e8a0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e8a3 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172e8aa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e8ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172e8af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e8b2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e8b6 jne 0x1172e8f1 */
  if (!C.zf) goto L_1172e8f1;
  /* 1172e8b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1172e8ba call 0x11723b00 */
  push32(0x1172e8bfu); f_11723b00();
  /* 1172e8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e8c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e8c5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e8c9 jne 0x1172e8e7 */
  if (!C.zf) goto L_1172e8e7;
  /* 1172e8cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e8ce add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e8d1 push edx */
  push32((uint32_t)(EDX));
  /* 1172e8d2 call dword ptr [0x11755300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755300))), 0x1172e8d8u);
  /* 1172e8d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e8db mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172e8de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e8e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e8e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1172e8e7:;
  /* 1172e8e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1172e8e9 call 0x11723ba0 */
  push32(0x1172e8eeu); f_11723ba0();
  /* 1172e8ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172e8f1:;
  /* 1172e8f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e8f4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e8f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e8fa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172e8fd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e900 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172e907 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1172e90b push eax */
  push32((uint32_t)(EAX));
  /* 1172e90c call dword ptr [0x11755308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755308))), 0x1172e912u);
  /* 1172e912 mov esp, ebp */
  ESP = (EBP);
  /* 1172e914 pop ebp */
  EBP = (pop32());
  /* 1172e915 ret  */
  ESPCHK(0x1172e890u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1172e920 (38 bytes, 13 insns) */
void f_1172e920(void) {
  FTRACE(0x1172e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e921 mov ebp, esp */
  EBP = (ESP);
  /* 1172e923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e926 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172e929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172e92c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172e92f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172e932 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172e939 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1172e93d push eax */
  push32((uint32_t)(EAX));
  /* 1172e93e call dword ptr [0x1175530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175530c))), 0x1172e944u);
  /* 1172e944 pop ebp */
  EBP = (pop32());
  /* 1172e945 ret  */
  ESPCHK(0x1172e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e950 @ 0x1172e950 (218 bytes, 63 insns) */
void f_1172e950(void) {
  FTRACE(0x1172e950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172e950 push ebp */
  push32((uint32_t)(EBP));
  /* 1172e951 mov ebp, esp */
  EBP = (ESP);
  /* 1172e953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172e956 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172e95d push 2 */
  push32((uint32_t)(0x2u));
  /* 1172e95f call 0x11723b00 */
  push32(0x1172e964u); f_11723b00();
  /* 1172e964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e967 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1172e96e jmp 0x1172e979 */
  goto L_1172e979;
L_1172e970:;
  /* 1172e970 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e973 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e976 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1172e979:;
  /* 1172e979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e97c cmp ecx, dword ptr [0x117540e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117540e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e982 jge 0x1172ea19 */
  if ((C.sf==C.of)) goto L_1172ea19;
  /* 1172e988 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e98b mov eax, dword ptr [0x11752d98] */
  EAX = (r32((uint32_t)(0x11752d98)));
  /* 1172e990 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e994 je 0x1172ea14 */
  if (C.zf) goto L_1172ea14;
  /* 1172e996 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e999 mov edx, dword ptr [0x11752d98] */
  EDX = (r32((uint32_t)(0x11752d98)));
  /* 1172e99f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1172e9a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172e9a5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1172e9ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172e9ad je 0x1172e9d1 */
  if (C.zf) goto L_1172e9d1;
  /* 1172e9af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e9b2 mov eax, dword ptr [0x11752d98] */
  EAX = (r32((uint32_t)(0x11752d98)));
  /* 1172e9b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1172e9ba push ecx */
  push32((uint32_t)(ECX));
  /* 1172e9bb call 0x1172f740 */
  push32(0x1172e9c0u); f_1172f740();
  /* 1172e9c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e9c3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e9c6 je 0x1172e9d1 */
  if (C.zf) goto L_1172e9d1;
  /* 1172e9c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172e9cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e9ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172e9d1:;
  /* 1172e9d1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172e9d5 jl 0x1172ea14 */
  if ((C.sf!=C.of)) goto L_1172ea14;
  /* 1172e9d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e9da mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172e9e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1172e9e3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172e9e6 push edx */
  push32((uint32_t)(EDX));
  /* 1172e9e7 call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x1172e9edu);
  /* 1172e9ed push 2 */
  push32((uint32_t)(0x2u));
  /* 1172e9ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172e9f2 mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172e9f8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1172e9fb push edx */
  push32((uint32_t)(EDX));
  /* 1172e9fc call 0x11724690 */
  push32(0x1172ea01u); f_11724690();
  /* 1172ea01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ea07 mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172ea0d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1172ea14:;
  /* 1172ea14 jmp 0x1172e970 */
  goto L_1172e970;
L_1172ea19:;
  /* 1172ea19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172ea1b call 0x11723ba0 */
  push32(0x1172ea20u); f_11723ba0();
  /* 1172ea20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ea26 mov esp, ebp */
  ESP = (EBP);
  /* 1172ea28 pop ebp */
  EBP = (pop32());
  /* 1172ea29 ret  */
  ESPCHK(0x1172e950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea30 @ 0x1172ea30 (68 bytes, 26 insns) */
void f_1172ea30(void) {
  FTRACE(0x1172ea30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ea30 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ea31 mov ebp, esp */
  EBP = (ESP);
  /* 1172ea33 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ea34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ea38 jne 0x1172ea46 */
  if (!C.zf) goto L_1172ea46;
  /* 1172ea3a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172ea3c call 0x1172eba0 */
  push32(0x1172ea41u); f_1172eba0();
  /* 1172ea41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea44 jmp 0x1172ea70 */
  goto L_1172ea70;
L_1172ea46:;
  /* 1172ea46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ea49 push eax */
  push32((uint32_t)(EAX));
  /* 1172ea4a call 0x1172e180 */
  push32(0x1172ea4fu); f_1172e180();
  /* 1172ea4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ea55 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ea56 call 0x1172ea80 */
  push32(0x1172ea5bu); f_1172ea80();
  /* 1172ea5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172ea61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ea64 push edx */
  push32((uint32_t)(EDX));
  /* 1172ea65 call 0x1172e1f0 */
  push32(0x1172ea6au); f_1172e1f0();
  /* 1172ea6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172ea70:;
  /* 1172ea70 mov esp, ebp */
  ESP = (EBP);
  /* 1172ea72 pop ebp */
  EBP = (pop32());
  /* 1172ea73 ret  */
  ESPCHK(0x1172ea30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea80 @ 0x1172ea80 (65 bytes, 26 insns) */
void f_1172ea80(void) {
  FTRACE(0x1172ea80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ea80 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ea81 mov ebp, esp */
  EBP = (ESP);
  /* 1172ea83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ea86 push eax */
  push32((uint32_t)(EAX));
  /* 1172ea87 call 0x1172ead0 */
  push32(0x1172ea8cu); f_1172ead0();
  /* 1172ea8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ea8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ea91 je 0x1172ea98 */
  if (C.zf) goto L_1172ea98;
  /* 1172ea93 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172ea96 jmp 0x1172eabf */
  goto L_1172eabf;
L_1172ea98:;
  /* 1172ea98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ea9b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172ea9e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1172eaa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172eaa6 je 0x1172eabd */
  if (C.zf) goto L_1172eabd;
  /* 1172eaa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172eaab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172eaae push ecx */
  push32((uint32_t)(ECX));
  /* 1172eaaf call 0x1172f890 */
  push32(0x1172eab4u); f_1172f890();
  /* 1172eab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eab7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172eab9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172eabb jmp 0x1172eabf */
  goto L_1172eabf;
L_1172eabd:;
  /* 1172eabd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172eabf:;
  /* 1172eabf pop ebp */
  EBP = (pop32());
  /* 1172eac0 ret  */
  ESPCHK(0x1172ea80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x1172ead0 (183 bytes, 62 insns) */
void f_1172ead0(void) {
  FTRACE(0x1172ead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ead0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ead1 mov ebp, esp */
  EBP = (ESP);
  /* 1172ead3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ead6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172eadd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172eae0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172eae3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eae6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172eae9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1172eaec cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eaef jne 0x1172eb6b */
  if (!C.zf) goto L_1172eb6b;
  /* 1172eaf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eaf4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172eaf7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1172eafd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172eaff je 0x1172eb6b */
  if (C.zf) goto L_1172eb6b;
  /* 1172eb01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb07 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1172eb09 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172eb0c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172eb0f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eb13 jle 0x1172eb6b */
  if ((C.zf||C.sf!=C.of)) goto L_1172eb6b;
  /* 1172eb15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172eb18 push edx */
  push32((uint32_t)(EDX));
  /* 1172eb19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172eb1f push ecx */
  push32((uint32_t)(ECX));
  /* 1172eb20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb23 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172eb26 push eax */
  push32((uint32_t)(EAX));
  /* 1172eb27 call 0x1172dc10 */
  push32(0x1172eb2cu); f_1172dc10();
  /* 1172eb2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eb2f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eb32 jne 0x1172eb55 */
  if (!C.zf) goto L_1172eb55;
  /* 1172eb34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb37 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172eb3a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1172eb40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172eb42 je 0x1172eb53 */
  if (C.zf) goto L_1172eb53;
  /* 1172eb44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb47 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172eb4a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1172eb4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb50 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1172eb53:;
  /* 1172eb53 jmp 0x1172eb6b */
  goto L_1172eb6b;
L_1172eb55:;
  /* 1172eb55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172eb5b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1172eb5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb61 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1172eb64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172eb6b:;
  /* 1172eb6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb71 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172eb74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1172eb76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172eb79 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1172eb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172eb83 mov esp, ebp */
  ESP = (EBP);
  /* 1172eb85 pop ebp */
  EBP = (pop32());
  /* 1172eb86 ret  */
  ESPCHK(0x1172ead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x1172eb90 (15 bytes, 7 insns) */
void f_1172eb90(void) {
  FTRACE(0x1172eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 1172eb91 mov ebp, esp */
  EBP = (ESP);
  /* 1172eb93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172eb95 call 0x1172eba0 */
  push32(0x1172eb9au); f_1172eba0();
  /* 1172eb9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eb9d pop ebp */
  EBP = (pop32());
  /* 1172eb9e ret  */
  ESPCHK(0x1172eb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eba0 @ 0x1172eba0 (319 bytes, 94 insns) */
void f_1172eba0(void) {
  FTRACE(0x1172eba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172eba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172eba1 mov ebp, esp */
  EBP = (ESP);
  /* 1172eba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172eba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172ebad mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1172ebb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172ebb6 call 0x11723b00 */
  push32(0x1172ebbbu); f_11723b00();
  /* 1172ebbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ebbe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172ebc5 jmp 0x1172ebd0 */
  goto L_1172ebd0;
L_1172ebc7:;
  /* 1172ebc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ebca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ebcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172ebd0:;
  /* 1172ebd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ebd3 cmp ecx, dword ptr [0x117540e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117540e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ebd9 jge 0x1172ecc3 */
  if ((C.sf==C.of)) goto L_1172ecc3;
  /* 1172ebdf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ebe2 mov eax, dword ptr [0x11752d98] */
  EAX = (r32((uint32_t)(0x11752d98)));
  /* 1172ebe7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ebeb je 0x1172ecbe */
  if (C.zf) goto L_1172ecbe;
  /* 1172ebf1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ebf4 mov edx, dword ptr [0x11752d98] */
  EDX = (r32((uint32_t)(0x11752d98)));
  /* 1172ebfa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1172ebfd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172ec00 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1172ec06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172ec08 je 0x1172ecbe */
  if (C.zf) goto L_1172ecbe;
  /* 1172ec0e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec11 mov eax, dword ptr [0x11752d98] */
  EAX = (r32((uint32_t)(0x11752d98)));
  /* 1172ec16 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1172ec19 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ec1a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec1d push edx */
  push32((uint32_t)(EDX));
  /* 1172ec1e call 0x1172e1c0 */
  push32(0x1172ec23u); f_1172e1c0();
  /* 1172ec23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ec26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec29 mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172ec2f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1172ec32 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172ec35 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ec3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ec3c je 0x1172eca5 */
  if (C.zf) goto L_1172eca5;
  /* 1172ec3e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ec42 jne 0x1172ec69 */
  if (!C.zf) goto L_1172ec69;
  /* 1172ec44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec47 mov edx, dword ptr [0x11752d98] */
  EDX = (r32((uint32_t)(0x11752d98)));
  /* 1172ec4d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1172ec50 push eax */
  push32((uint32_t)(EAX));
  /* 1172ec51 call 0x1172ea80 */
  push32(0x1172ec56u); f_1172ea80();
  /* 1172ec56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ec59 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ec5c je 0x1172ec67 */
  if (C.zf) goto L_1172ec67;
  /* 1172ec5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ec61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ec64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172ec67:;
  /* 1172ec67 jmp 0x1172eca5 */
  goto L_1172eca5;
L_1172ec69:;
  /* 1172ec69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ec6d jne 0x1172eca5 */
  if (!C.zf) goto L_1172eca5;
  /* 1172ec6f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec72 mov eax, dword ptr [0x11752d98] */
  EAX = (r32((uint32_t)(0x11752d98)));
  /* 1172ec77 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1172ec7a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172ec7d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1172ec80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172ec82 je 0x1172eca5 */
  if (C.zf) goto L_1172eca5;
  /* 1172ec84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ec87 mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172ec8d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1172ec90 push edx */
  push32((uint32_t)(EDX));
  /* 1172ec91 call 0x1172ea80 */
  push32(0x1172ec96u); f_1172ea80();
  /* 1172ec96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ec99 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ec9c jne 0x1172eca5 */
  if (!C.zf) goto L_1172eca5;
  /* 1172ec9e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1172eca5:;
  /* 1172eca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172eca8 mov ecx, dword ptr [0x11752d98] */
  ECX = (r32((uint32_t)(0x11752d98)));
  /* 1172ecae mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1172ecb1 push edx */
  push32((uint32_t)(EDX));
  /* 1172ecb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ecb5 push eax */
  push32((uint32_t)(EAX));
  /* 1172ecb6 call 0x1172e230 */
  push32(0x1172ecbbu); f_1172e230();
  /* 1172ecbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172ecbe:;
  /* 1172ecbe jmp 0x1172ebc7 */
  goto L_1172ebc7;
L_1172ecc3:;
  /* 1172ecc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172ecc5 call 0x11723ba0 */
  push32(0x1172eccau); f_11723ba0();
  /* 1172ecca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eccd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ecd1 jne 0x1172ecd8 */
  if (!C.zf) goto L_1172ecd8;
  /* 1172ecd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ecd6 jmp 0x1172ecdb */
  goto L_1172ecdb;
L_1172ecd8:;
  /* 1172ecd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1172ecdb:;
  /* 1172ecdb mov esp, ebp */
  ESP = (EBP);
  /* 1172ecdd pop ebp */
  EBP = (pop32());
  /* 1172ecde ret  */
  ESPCHK(0x1172eba0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1172ece0 (15 bytes, 7 insns) */
void f_1172ece0(void) {
  FTRACE(0x1172ece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ece0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ece1 mov ebp, esp */
  EBP = (ESP);
  /* 1172ece3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172ece5 call 0x11723230 */
  push32(0x1172eceau); f_11723230();
  /* 1172ecea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eced pop ebp */
  EBP = (pop32());
  /* 1172ecee ret  */
  ESPCHK(0x1172ece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecf0 @ 0x1172ecf0 (1007 bytes, 269 insns) */
void f_1172ecf0(void) {
  FTRACE(0x1172ecf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ecf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ecf1 mov ebp, esp */
  EBP = (ESP);
  /* 1172ecf3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ecf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ecfd jl 0x1172ed05 */
  if ((C.sf!=C.of)) goto L_1172ed05;
  /* 1172ecff cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ed03 jle 0x1172ed0c */
  if ((C.zf||C.sf!=C.of)) goto L_1172ed0c;
L_1172ed05:;
  /* 1172ed05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ed07 jmp 0x1172f0db */
  goto L_1172f0db;
L_1172ed0c:;
  /* 1172ed0c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172ed0e call 0x11723b00 */
  push32(0x1172ed13u); f_11723b00();
  /* 1172ed13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ed16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172ed1d mov eax, dword ptr [0x11752d84] */
  EAX = (r32((uint32_t)(0x11752d84)));
  /* 1172ed22 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ed25 mov dword ptr [0x11752d84], eax */
  w32((uint32_t)(0x11752d84), (EAX));
L_1172ed2a:;
  /* 1172ed2a cmp dword ptr [0x11752d94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ed31 je 0x1172ed3d */
  if (C.zf) goto L_1172ed3d;
  /* 1172ed33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ed35 call dword ptr [0x117552a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552a4))), 0x1172ed3bu);
  /* 1172ed3b jmp 0x1172ed2a */
  goto L_1172ed2a;
L_1172ed3d:;
  /* 1172ed3d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ed41 je 0x1172ed81 */
  if (C.zf) goto L_1172ed81;
  /* 1172ed43 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ed47 je 0x1172ed61 */
  if (C.zf) goto L_1172ed61;
  /* 1172ed49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172ed4c push ecx */
  push32((uint32_t)(ECX));
  /* 1172ed4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ed50 push edx */
  push32((uint32_t)(EDX));
  /* 1172ed51 call 0x1172f0e0 */
  push32(0x1172ed56u); f_1172f0e0();
  /* 1172ed56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ed59 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1172ed5f jmp 0x1172ed73 */
  goto L_1172ed73;
L_1172ed61:;
  /* 1172ed61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ed64 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172ed67 mov ecx, dword ptr [eax + 0x117517ec] */
  ECX = (r32((uint32_t)(EAX + 0x117517ec)));
  /* 1172ed6d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1172ed73:;
  /* 1172ed73 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1172ed79 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1172ed7c jmp 0x1172f0bb */
  goto L_1172f0bb;
L_1172ed81:;
  /* 1172ed81 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1172ed88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172ed8f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ed93 je 0x1172f0b3 */
  if (C.zf) goto L_1172f0b3;
  /* 1172ed99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172ed9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172ed9f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eda2 jne 0x1172efc4 */
  if (!C.zf) goto L_1172efc4;
  /* 1172eda8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172edab movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1172edaf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172edb2 jne 0x1172efc4 */
  if (!C.zf) goto L_1172efc4;
  /* 1172edb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172edbb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1172edbf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172edc2 jne 0x1172efc4 */
  if (!C.zf) goto L_1172efc4;
  /* 1172edc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172edcb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1172edd1:;
  /* 1172edd1 push 0x1174e0ac */
  push32((uint32_t)(0x1174e0acu));
  /* 1172edd6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1172eddc push ecx */
  push32((uint32_t)(ECX));
  /* 1172eddd call 0x11730eb0 */
  push32(0x1172ede2u); f_11730eb0();
  /* 1172ede2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ede5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1172edeb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172edf2 je 0x1172ee1d */
  if (C.zf) goto L_1172ee1d;
  /* 1172edf4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172edfa sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ee00 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1172ee06 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ee0d je 0x1172ee1d */
  if (C.zf) goto L_1172ee1d;
  /* 1172ee0f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172ee15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172ee18 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ee1b jne 0x1172ee43 */
  if (!C.zf) goto L_1172ee43;
L_1172ee1d:;
  /* 1172ee1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ee21 je 0x1172ee3c */
  if (C.zf) goto L_1172ee3c;
  /* 1172ee23 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172ee25 call 0x11723ba0 */
  push32(0x1172ee2au); f_11723ba0();
  /* 1172ee2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ee2d mov edx, dword ptr [0x11752d84] */
  EDX = (r32((uint32_t)(0x11752d84)));
  /* 1172ee33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ee36 mov dword ptr [0x11752d84], edx */
  w32((uint32_t)(0x11752d84), (EDX));
L_1172ee3c:;
  /* 1172ee3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ee3e jmp 0x1172f0db */
  goto L_1172f0db;
L_1172ee43:;
  /* 1172ee43 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1172ee4a jmp 0x1172ee55 */
  goto L_1172ee55;
L_1172ee4c:;
  /* 1172ee4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ee4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ee52 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1172ee55:;
  /* 1172ee55 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ee59 jg 0x1172eea3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1172eea3;
  /* 1172ee5b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1172ee61 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ee62 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1172ee68 push edx */
  push32((uint32_t)(EDX));
  /* 1172ee69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ee6c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172ee6f mov ecx, dword ptr [eax + 0x117517e8] */
  ECX = (r32((uint32_t)(EAX + 0x117517e8)));
  /* 1172ee75 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ee76 call 0x11730e70 */
  push32(0x1172ee7bu); f_11730e70();
  /* 1172ee7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ee7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ee80 jne 0x1172eea1 */
  if (!C.zf) goto L_1172eea1;
  /* 1172ee82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ee85 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172ee88 mov eax, dword ptr [edx + 0x117517e8] */
  EAX = (r32((uint32_t)(EDX + 0x117517e8)));
  /* 1172ee8e push eax */
  push32((uint32_t)(EAX));
  /* 1172ee8f call 0x117280a0 */
  push32(0x1172ee94u); f_117280a0();
  /* 1172ee94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ee97 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ee9d jne 0x1172eea1 */
  if (!C.zf) goto L_1172eea1;
  /* 1172ee9f jmp 0x1172eea3 */
  goto L_1172eea3;
L_1172eea1:;
  /* 1172eea1 jmp 0x1172ee4c */
  goto L_1172ee4c;
L_1172eea3:;
  /* 1172eea3 push 0x1174e0a8 */
  push32((uint32_t)(0x1174e0a8u));
  /* 1172eea8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172eeae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eeb1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1172eeb7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172eebd push edx */
  push32((uint32_t)(EDX));
  /* 1172eebe call 0x11730e30 */
  push32(0x1172eec3u); f_11730e30();
  /* 1172eec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eec6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1172eecc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eed3 jne 0x1172ef09 */
  if (!C.zf) goto L_1172ef09;
  /* 1172eed5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172eedb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172eede cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eee1 je 0x1172ef09 */
  if (C.zf) goto L_1172ef09;
  /* 1172eee3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172eee7 je 0x1172ef02 */
  if (C.zf) goto L_1172ef02;
  /* 1172eee9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172eeeb call 0x11723ba0 */
  push32(0x1172eef0u); f_11723ba0();
  /* 1172eef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172eef3 mov edx, dword ptr [0x11752d84] */
  EDX = (r32((uint32_t)(0x11752d84)));
  /* 1172eef9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172eefc mov dword ptr [0x11752d84], edx */
  w32((uint32_t)(0x11752d84), (EDX));
L_1172ef02:;
  /* 1172ef02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ef04 jmp 0x1172f0db */
  goto L_1172f0db;
L_1172ef09:;
  /* 1172ef09 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ef0d jg 0x1172ef5a */
  if ((!C.zf&&C.sf==C.of)) goto L_1172ef5a;
  /* 1172ef0f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1172ef15 push eax */
  push32((uint32_t)(EAX));
  /* 1172ef16 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172ef1c push ecx */
  push32((uint32_t)(ECX));
  /* 1172ef1d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1172ef23 push edx */
  push32((uint32_t)(EDX));
  /* 1172ef24 call 0x11728a90 */
  push32(0x1172ef29u); f_11728a90();
  /* 1172ef29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ef2c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1172ef32 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1172ef3a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1172ef40 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ef41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ef44 push edx */
  push32((uint32_t)(EDX));
  /* 1172ef45 call 0x1172f0e0 */
  push32(0x1172ef4au); f_1172f0e0();
  /* 1172ef4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ef4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ef4f je 0x1172ef5a */
  if (C.zf) goto L_1172ef5a;
  /* 1172ef51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ef54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ef57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172ef5a:;
  /* 1172ef5a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172ef60 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ef66 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1172ef6c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1172ef72 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1172ef75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ef77 je 0x1172ef88 */
  if (C.zf) goto L_1172ef88;
  /* 1172ef79 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1172ef7f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ef82 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1172ef88:;
  /* 1172ef88 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1172ef8e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1172ef91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ef93 jne 0x1172edd1 */
  if (!C.zf) goto L_1172edd1;
  /* 1172ef99 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ef9d je 0x1172efac */
  if (C.zf) goto L_1172efac;
  /* 1172ef9f call 0x1172f280 */
  push32(0x1172efa4u); f_1172f280();
  /* 1172efa4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1172efaa jmp 0x1172efb6 */
  goto L_1172efb6;
L_1172efac:;
  /* 1172efac mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1172efb6:;
  /* 1172efb6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1172efbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172efbf jmp 0x1172f0b1 */
  goto L_1172f0b1;
L_1172efc4:;
  /* 1172efc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172efc7 push edx */
  push32((uint32_t)(EDX));
  /* 1172efc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172efca push 0 */
  push32((uint32_t)(0x0u));
  /* 1172efcc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1172efd2 push eax */
  push32((uint32_t)(EAX));
  /* 1172efd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172efd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1172efd7 call 0x1172f380 */
  push32(0x1172efdcu); f_1172f380();
  /* 1172efdc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172efdf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172efe2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172efe6 je 0x1172f0b1 */
  if (C.zf) goto L_1172f0b1;
  /* 1172efec mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1172eff3 jmp 0x1172effe */
  goto L_1172effe;
L_1172eff5:;
  /* 1172eff5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172eff8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172effb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1172effe:;
  /* 1172effe cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f002 jg 0x1172f060 */
  if ((!C.zf&&C.sf==C.of)) goto L_1172f060;
  /* 1172f004 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f008 je 0x1172f05e */
  if (C.zf) goto L_1172f05e;
  /* 1172f00a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172f00d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f010 mov ecx, dword ptr [eax + 0x117517ec] */
  ECX = (r32((uint32_t)(EAX + 0x117517ec)));
  /* 1172f016 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f017 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1172f01d push edx */
  push32((uint32_t)(EDX));
  /* 1172f01e call 0x1172b090 */
  push32(0x1172f023u); f_1172b090();
  /* 1172f023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f026 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f028 je 0x1172f055 */
  if (C.zf) goto L_1172f055;
  /* 1172f02a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1172f030 push eax */
  push32((uint32_t)(EAX));
  /* 1172f031 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172f034 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f035 call 0x1172f0e0 */
  push32(0x1172f03au); f_1172f0e0();
  /* 1172f03a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f03f je 0x1172f04c */
  if (C.zf) goto L_1172f04c;
  /* 1172f041 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f047 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1172f04a jmp 0x1172f053 */
  goto L_1172f053;
L_1172f04c:;
  /* 1172f04c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1172f053:;
  /* 1172f053 jmp 0x1172f05e */
  goto L_1172f05e;
L_1172f055:;
  /* 1172f055 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f058 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f05b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172f05e:;
  /* 1172f05e jmp 0x1172eff5 */
  goto L_1172eff5;
L_1172f060:;
  /* 1172f060 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f064 je 0x1172f08b */
  if (C.zf) goto L_1172f08b;
  /* 1172f066 call 0x1172f280 */
  push32(0x1172f06bu); f_1172f280();
  /* 1172f06b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172f06e push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f070 mov ecx, dword ptr [0x117517ec] */
  ECX = (r32((uint32_t)(0x117517ec)));
  /* 1172f076 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f077 call 0x11724690 */
  push32(0x1172f07cu); f_11724690();
  /* 1172f07c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f07f mov dword ptr [0x117517ec], 0 */
  w32((uint32_t)(0x117517ec), (0x0u));
  /* 1172f089 jmp 0x1172f0b1 */
  goto L_1172f0b1;
L_1172f08b:;
  /* 1172f08b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f08f je 0x1172f09e */
  if (C.zf) goto L_1172f09e;
  /* 1172f091 call 0x1172f280 */
  push32(0x1172f096u); f_1172f280();
  /* 1172f096 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1172f09c jmp 0x1172f0a8 */
  goto L_1172f0a8;
L_1172f09e:;
  /* 1172f09e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1172f0a8:;
  /* 1172f0a8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1172f0ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1172f0b1:;
  /* 1172f0b1 jmp 0x1172f0bb */
  goto L_1172f0bb;
L_1172f0b3:;
  /* 1172f0b3 call 0x1172f280 */
  push32(0x1172f0b8u); f_1172f280();
  /* 1172f0b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1172f0bb:;
  /* 1172f0bb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f0bf je 0x1172f0d8 */
  if (C.zf) goto L_1172f0d8;
  /* 1172f0c1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1172f0c3 call 0x11723ba0 */
  push32(0x1172f0c8u); f_11723ba0();
  /* 1172f0c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f0cb mov eax, dword ptr [0x11752d84] */
  EAX = (r32((uint32_t)(0x11752d84)));
  /* 1172f0d0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f0d3 mov dword ptr [0x11752d84], eax */
  w32((uint32_t)(0x11752d84), (EAX));
L_1172f0d8:;
  /* 1172f0d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1172f0db:;
  /* 1172f0db mov esp, ebp */
  ESP = (EBP);
  /* 1172f0dd pop ebp */
  EBP = (pop32());
  /* 1172f0de ret  */
  ESPCHK(0x1172ecf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0e0 @ 0x1172f0e0 (403 bytes, 117 insns) */
void f_1172f0e0(void) {
  FTRACE(0x1172f0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f0e1 mov ebp, esp */
  EBP = (ESP);
  /* 1172f0e3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f0e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f0ec push eax */
  push32((uint32_t)(EAX));
  /* 1172f0ed lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1172f0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f0f4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1172f0fa push edx */
  push32((uint32_t)(EDX));
  /* 1172f0fb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1172f101 push eax */
  push32((uint32_t)(EAX));
  /* 1172f102 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f105 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f106 call 0x1172f380 */
  push32(0x1172f10bu); f_1172f380();
  /* 1172f10b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f10e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f110 jne 0x1172f119 */
  if (!C.zf) goto L_1172f119;
  /* 1172f112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f114 jmp 0x1172f26f */
  goto L_1172f26f;
L_1172f119:;
  /* 1172f119 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1172f11e push 0x1174e0b0 */
  push32((uint32_t)(0x1174e0b0u));
  /* 1172f123 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f125 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1172f12b push edx */
  push32((uint32_t)(EDX));
  /* 1172f12c call 0x117280a0 */
  push32(0x1172f131u); f_117280a0();
  /* 1172f131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f134 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f137 push eax */
  push32((uint32_t)(EAX));
  /* 1172f138 call 0x11723c00 */
  push32(0x1172f13du); f_11723c00();
  /* 1172f13d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f140 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172f143 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f147 jne 0x1172f150 */
  if (!C.zf) goto L_1172f150;
  /* 1172f149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f14b jmp 0x1172f26f */
  goto L_1172f26f;
L_1172f150:;
  /* 1172f150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f153 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f156 mov ecx, dword ptr [eax + 0x117517ec] */
  ECX = (r32((uint32_t)(EAX + 0x117517ec)));
  /* 1172f15c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172f15f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f162 mov eax, dword ptr [edx*4 + 0x11752bfc] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11752bfc)));
  /* 1172f169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f16c push 6 */
  push32((uint32_t)(0x6u));
  /* 1172f16e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f171 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f174 add ecx, 0x11752c4c */
  { uint32_t _a=(ECX),_b=(0x11752c4cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f17a push ecx */
  push32((uint32_t)(ECX));
  /* 1172f17b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1172f17e push edx */
  push32((uint32_t)(EDX));
  /* 1172f17f call 0x1172bf90 */
  push32(0x1172f184u); f_1172bf90();
  /* 1172f184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f187 mov eax, dword ptr [0x11752c14] */
  EAX = (r32((uint32_t)(0x11752c14)));
  /* 1172f18c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1172f18f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1172f195 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f196 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f199 push edx */
  push32((uint32_t)(EDX));
  /* 1172f19a call 0x11728220 */
  push32(0x1172f19fu); f_11728220();
  /* 1172f19f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f1a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f1a5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f1a8 mov dword ptr [ecx + 0x117517ec], eax */
  w32((uint32_t)(ECX + 0x117517ec), (EAX));
  /* 1172f1ae mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1172f1b4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172f1ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f1bd mov dword ptr [eax*4 + 0x11752bfc], edx */
  w32((uint32_t)(EAX*4 + 0x11752bfc), (EDX));
  /* 1172f1c4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1172f1c6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1172f1cc push ecx */
  push32((uint32_t)(ECX));
  /* 1172f1cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f1d0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f1d3 add edx, 0x11752c4c */
  { uint32_t _a=(EDX),_b=(0x11752c4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f1d9 push edx */
  push32((uint32_t)(EDX));
  /* 1172f1da call 0x1172bf90 */
  push32(0x1172f1dfu); f_1172bf90();
  /* 1172f1df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f1e2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f1e6 jne 0x1172f1f3 */
  if (!C.zf) goto L_1172f1f3;
  /* 1172f1e8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172f1ee mov dword ptr [0x11752c14], eax */
  w32((uint32_t)(0x11752c14), (EAX));
L_1172f1f3:;
  /* 1172f1f3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f1f7 jne 0x1172f205 */
  if (!C.zf) goto L_1172f205;
  /* 1172f1f9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1172f1ff mov dword ptr [0x11752c18], ecx */
  w32((uint32_t)(0x11752c18), (ECX));
L_1172f205:;
  /* 1172f205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f208 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f20b call dword ptr [edx + 0x117517f0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x117517f0))), 0x1172f211u);
  /* 1172f211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f213 je 0x1172f24c */
  if (C.zf) goto L_1172f24c;
  /* 1172f215 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f218 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f21b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f21e mov dword ptr [eax + 0x117517ec], ecx */
  w32((uint32_t)(EAX + 0x117517ec), (ECX));
  /* 1172f224 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f226 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f229 push edx */
  push32((uint32_t)(EDX));
  /* 1172f22a call 0x11724690 */
  push32(0x1172f22fu); f_11724690();
  /* 1172f22f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f232 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f235 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f238 mov dword ptr [eax*4 + 0x11752bfc], ecx */
  w32((uint32_t)(EAX*4 + 0x11752bfc), (ECX));
  /* 1172f23f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172f242 mov dword ptr [0x11752c14], edx */
  w32((uint32_t)(0x11752c14), (EDX));
  /* 1172f248 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f24a jmp 0x1172f26f */
  goto L_1172f26f;
L_1172f24c:;
  /* 1172f24c cmp dword ptr [ebp - 0xc], 0x117516d8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x117516d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f253 je 0x1172f263 */
  if (C.zf) goto L_1172f263;
  /* 1172f255 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f25a push eax */
  push32((uint32_t)(EAX));
  /* 1172f25b call 0x11724690 */
  push32(0x1172f260u); f_11724690();
  /* 1172f260 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f263:;
  /* 1172f263 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f266 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f269 mov eax, dword ptr [ecx + 0x117517ec] */
  EAX = (r32((uint32_t)(ECX + 0x117517ec)));
L_1172f26f:;
  /* 1172f26f mov esp, ebp */
  ESP = (EBP);
  /* 1172f271 pop ebp */
  EBP = (pop32());
  /* 1172f272 ret  */
  ESPCHK(0x1172f0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f280 @ 0x1172f280 (256 bytes, 72 insns) */
void f_1172f280(void) {
  FTRACE(0x1172f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f280 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f281 mov ebp, esp */
  EBP = (ESP);
  /* 1172f283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f286 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1172f28d cmp dword ptr [0x117517ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117517ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f294 jne 0x1172f2b4 */
  if (!C.zf) goto L_1172f2b4;
  /* 1172f296 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1172f29b push 0x1174e0b0 */
  push32((uint32_t)(0x1174e0b0u));
  /* 1172f2a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f2a2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1172f2a7 call 0x11723c00 */
  push32(0x1172f2acu); f_11723c00();
  /* 1172f2ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f2af mov dword ptr [0x117517ec], eax */
  w32((uint32_t)(0x117517ec), (EAX));
L_1172f2b4:;
  /* 1172f2b4 mov eax, dword ptr [0x117517ec] */
  EAX = (r32((uint32_t)(0x117517ec)));
  /* 1172f2b9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1172f2bc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172f2c3 jmp 0x1172f2ce */
  goto L_1172f2ce;
L_1172f2c5:;
  /* 1172f2c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f2c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f2cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172f2ce:;
  /* 1172f2ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f2d1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f2d4 mov eax, dword ptr [edx + 0x117517ec] */
  EAX = (r32((uint32_t)(EDX + 0x117517ec)));
  /* 1172f2da push eax */
  push32((uint32_t)(EAX));
  /* 1172f2db push 0x1174e0bc */
  push32((uint32_t)(0x1174e0bcu));
  /* 1172f2e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f2e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f2e6 mov edx, dword ptr [ecx + 0x117517e8] */
  EDX = (r32((uint32_t)(ECX + 0x117517e8)));
  /* 1172f2ec push edx */
  push32((uint32_t)(EDX));
  /* 1172f2ed push 3 */
  push32((uint32_t)(0x3u));
  /* 1172f2ef mov eax, dword ptr [0x117517ec] */
  EAX = (r32((uint32_t)(0x117517ec)));
  /* 1172f2f4 push eax */
  push32((uint32_t)(EAX));
  /* 1172f2f5 call 0x1172f520 */
  push32(0x1172f2fau); f_1172f520();
  /* 1172f2fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f2fd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f301 jge 0x1172f349 */
  if ((C.sf==C.of)) goto L_1172f349;
  /* 1172f303 push 0x1174e0a8 */
  push32((uint32_t)(0x1174e0a8u));
  /* 1172f308 mov ecx, dword ptr [0x117517ec] */
  ECX = (r32((uint32_t)(0x117517ec)));
  /* 1172f30e push ecx */
  push32((uint32_t)(ECX));
  /* 1172f30f call 0x11728230 */
  push32(0x1172f314u); f_11728230();
  /* 1172f314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f317 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f31a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f31d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f320 mov eax, dword ptr [edx + 0x117517ec] */
  EAX = (r32((uint32_t)(EDX + 0x117517ec)));
  /* 1172f326 push eax */
  push32((uint32_t)(EAX));
  /* 1172f327 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f32a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f32d mov edx, dword ptr [ecx + 0x117517ec] */
  EDX = (r32((uint32_t)(ECX + 0x117517ec)));
  /* 1172f333 push edx */
  push32((uint32_t)(EDX));
  /* 1172f334 call 0x1172b090 */
  push32(0x1172f339u); f_1172b090();
  /* 1172f339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f33e je 0x1172f347 */
  if (C.zf) goto L_1172f347;
  /* 1172f340 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1172f347:;
  /* 1172f347 jmp 0x1172f377 */
  goto L_1172f377;
L_1172f349:;
  /* 1172f349 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f34d jne 0x1172f356 */
  if (!C.zf) goto L_1172f356;
  /* 1172f34f mov eax, dword ptr [0x117517ec] */
  EAX = (r32((uint32_t)(0x117517ec)));
  /* 1172f354 jmp 0x1172f37c */
  goto L_1172f37c;
L_1172f356:;
  /* 1172f356 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f358 mov eax, dword ptr [0x117517ec] */
  EAX = (r32((uint32_t)(0x117517ec)));
  /* 1172f35d push eax */
  push32((uint32_t)(EAX));
  /* 1172f35e call 0x11724690 */
  push32(0x1172f363u); f_11724690();
  /* 1172f363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f366 mov dword ptr [0x117517ec], 0 */
  w32((uint32_t)(0x117517ec), (0x0u));
  /* 1172f370 mov eax, dword ptr [0x11751804] */
  EAX = (r32((uint32_t)(0x11751804)));
  /* 1172f375 jmp 0x1172f37c */
  goto L_1172f37c;
L_1172f377:;
  /* 1172f377 jmp 0x1172f2c5 */
  goto L_1172f2c5;
L_1172f37c:;
  /* 1172f37c mov esp, ebp */
  ESP = (EBP);
  /* 1172f37e pop ebp */
  EBP = (pop32());
  /* 1172f37f ret  */
  ESPCHK(0x1172f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f380 @ 0x1172f380 (388 bytes, 115 insns) */
void f_1172f380(void) {
  FTRACE(0x1172f380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f380 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f381 mov ebp, esp */
  EBP = (ESP);
  /* 1172f383 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f389 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f38d jne 0x1172f396 */
  if (!C.zf) goto L_1172f396;
  /* 1172f38f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f391 jmp 0x1172f500 */
  goto L_1172f500;
L_1172f396:;
  /* 1172f396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f399 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172f39c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f39f jne 0x1172f3f0 */
  if (!C.zf) goto L_1172f3f0;
  /* 1172f3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f3a4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1172f3a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f3aa jne 0x1172f3f0 */
  if (!C.zf) goto L_1172f3f0;
  /* 1172f3ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f3af mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1172f3b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f3b5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1172f3b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f3bd je 0x1172f3d9 */
  if (C.zf) goto L_1172f3d9;
  /* 1172f3bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172f3c2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1172f3c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172f3ca mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1172f3d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172f3d3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1172f3d9:;
  /* 1172f3d9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f3dd je 0x1172f3e8 */
  if (C.zf) goto L_1172f3e8;
  /* 1172f3df mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172f3e2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1172f3e8:;
  /* 1172f3e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f3eb jmp 0x1172f500 */
  goto L_1172f500;
L_1172f3f0:;
  /* 1172f3f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f3f4 push 0x11751760 */
  push32((uint32_t)(0x11751760u));
  /* 1172f3f9 call 0x1172b090 */
  push32(0x1172f3feu); f_1172b090();
  /* 1172f3fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f403 je 0x1172f4b8 */
  if (C.zf) goto L_1172f4b8;
  /* 1172f409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f40c push edx */
  push32((uint32_t)(EDX));
  /* 1172f40d push 0x117516dc */
  push32((uint32_t)(0x117516dcu));
  /* 1172f412 call 0x1172b090 */
  push32(0x1172f417u); f_1172b090();
  /* 1172f417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f41a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f41c je 0x1172f4b8 */
  if (C.zf) goto L_1172f4b8;
  /* 1172f422 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f425 push eax */
  push32((uint32_t)(EAX));
  /* 1172f426 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1172f42c push ecx */
  push32((uint32_t)(ECX));
  /* 1172f42d call 0x1172f570 */
  push32(0x1172f432u); f_1172f570();
  /* 1172f432 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f437 je 0x1172f440 */
  if (C.zf) goto L_1172f440;
  /* 1172f439 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f43b jmp 0x1172f500 */
  goto L_1172f500;
L_1172f440:;
  /* 1172f440 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1172f446 push edx */
  push32((uint32_t)(EDX));
  /* 1172f447 push 0x11752c24 */
  push32((uint32_t)(0x11752c24u));
  /* 1172f44c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1172f452 push eax */
  push32((uint32_t)(EAX));
  /* 1172f453 call 0x11730ef0 */
  push32(0x1172f458u); f_11730ef0();
  /* 1172f458 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f45b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f45d jne 0x1172f466 */
  if (!C.zf) goto L_1172f466;
  /* 1172f45f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f461 jmp 0x1172f500 */
  goto L_1172f500;
L_1172f466:;
  /* 1172f466 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172f468 mov cx, word ptr [0x11752c28] */
  CX = (r16((uint32_t)(0x11752c28)));
  /* 1172f46f mov dword ptr [0x11752c2c], ecx */
  w32((uint32_t)(0x11752c2c), (ECX));
  /* 1172f475 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1172f47b push edx */
  push32((uint32_t)(EDX));
  /* 1172f47c push 0x11751760 */
  push32((uint32_t)(0x11751760u));
  /* 1172f481 call 0x1172f6d0 */
  push32(0x1172f486u); f_1172f6d0();
  /* 1172f486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f48c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172f48f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172f491 je 0x1172f4a6 */
  if (C.zf) goto L_1172f4a6;
  /* 1172f493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f496 push edx */
  push32((uint32_t)(EDX));
  /* 1172f497 push 0x117516dc */
  push32((uint32_t)(0x117516dcu));
  /* 1172f49c call 0x11728220 */
  push32(0x1172f4a1u); f_11728220();
  /* 1172f4a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f4a4 jmp 0x1172f4b8 */
  goto L_1172f4b8;
L_1172f4a6:;
  /* 1172f4a6 push 0x11751760 */
  push32((uint32_t)(0x11751760u));
  /* 1172f4ab push 0x117516dc */
  push32((uint32_t)(0x117516dcu));
  /* 1172f4b0 call 0x11728220 */
  push32(0x1172f4b5u); f_11728220();
  /* 1172f4b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f4b8:;
  /* 1172f4b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f4bc je 0x1172f4d1 */
  if (C.zf) goto L_1172f4d1;
  /* 1172f4be push 6 */
  push32((uint32_t)(0x6u));
  /* 1172f4c0 push 0x11752c24 */
  push32((uint32_t)(0x11752c24u));
  /* 1172f4c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172f4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1172f4c9 call 0x1172bf90 */
  push32(0x1172f4ceu); f_1172bf90();
  /* 1172f4ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f4d1:;
  /* 1172f4d1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f4d5 je 0x1172f4ea */
  if (C.zf) goto L_1172f4ea;
  /* 1172f4d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1172f4d9 push 0x11752c2c */
  push32((uint32_t)(0x11752c2cu));
  /* 1172f4de mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172f4e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f4e2 call 0x1172bf90 */
  push32(0x1172f4e7u); f_1172bf90();
  /* 1172f4e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f4ea:;
  /* 1172f4ea push 0x11751760 */
  push32((uint32_t)(0x11751760u));
  /* 1172f4ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f4f2 push edx */
  push32((uint32_t)(EDX));
  /* 1172f4f3 call 0x11728220 */
  push32(0x1172f4f8u); f_11728220();
  /* 1172f4f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f4fb mov eax, 0x11751760 */
  EAX = (0x11751760u);
L_1172f500:;
  /* 1172f500 mov esp, ebp */
  ESP = (EBP);
  /* 1172f502 pop ebp */
  EBP = (pop32());
  /* 1172f503 ret  */
  ESPCHK(0x1172f380u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f510 @ 0x1172f510 (7 bytes, 5 insns) */
void f_1172f510(void) {
  FTRACE(0x1172f510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f510 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f511 mov ebp, esp */
  EBP = (ESP);
  /* 1172f513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f515 pop ebp */
  EBP = (pop32());
  /* 1172f516 ret  */
  ESPCHK(0x1172f510u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1172f520 (79 bytes, 28 insns) */
void f_1172f520(void) {
  FTRACE(0x1172f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f520 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f521 mov ebp, esp */
  EBP = (ESP);
  /* 1172f523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f526 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1172f529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f52c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1172f533 jmp 0x1172f53e */
  goto L_1172f53e;
L_1172f535:;
  /* 1172f535 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f538 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f53b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1172f53e:;
  /* 1172f53e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f541 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f544 jge 0x1172f564 */
  if ((C.sf==C.of)) goto L_1172f564;
  /* 1172f546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f549 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f54c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f54f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f552 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1172f555 push edx */
  push32((uint32_t)(EDX));
  /* 1172f556 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f559 push eax */
  push32((uint32_t)(EAX));
  /* 1172f55a call 0x11728230 */
  push32(0x1172f55fu); f_11728230();
  /* 1172f55f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f562 jmp 0x1172f535 */
  goto L_1172f535;
L_1172f564:;
  /* 1172f564 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172f56b mov esp, ebp */
  ESP = (EBP);
  /* 1172f56d pop ebp */
  EBP = (pop32());
  /* 1172f56e ret  */
  ESPCHK(0x1172f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x1172f570 (349 bytes, 122 insns) */
void f_1172f570(void) {
  FTRACE(0x1172f570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f570 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f571 mov ebp, esp */
  EBP = (ESP);
  /* 1172f573 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f576 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1172f57b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172f57d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f580 push eax */
  push32((uint32_t)(EAX));
  /* 1172f581 call 0x11728c00 */
  push32(0x1172f586u); f_11728c00();
  /* 1172f586 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f589 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f58c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172f58f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172f591 jne 0x1172f59a */
  if (!C.zf) goto L_1172f59a;
  /* 1172f593 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f595 jmp 0x1172f6c9 */
  goto L_1172f6c9;
L_1172f59a:;
  /* 1172f59a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f59d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172f5a0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f5a3 jne 0x1172f5d0 */
  if (!C.zf) goto L_1172f5d0;
  /* 1172f5a5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f5a8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1172f5ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f5ae je 0x1172f5d0 */
  if (C.zf) goto L_1172f5d0;
  /* 1172f5b0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f5b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f5b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f5ba add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f5c0 push edx */
  push32((uint32_t)(EDX));
  /* 1172f5c1 call 0x11728220 */
  push32(0x1172f5c6u); f_11728220();
  /* 1172f5c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f5c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f5cb jmp 0x1172f6c9 */
  goto L_1172f6c9;
L_1172f5d0:;
  /* 1172f5d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172f5d7 jmp 0x1172f5e2 */
  goto L_1172f5e2;
L_1172f5d9:;
  /* 1172f5d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f5dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f5df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172f5e2:;
  /* 1172f5e2 push 0x1174e0c0 */
  push32((uint32_t)(0x1174e0c0u));
  /* 1172f5e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f5ea push ecx */
  push32((uint32_t)(ECX));
  /* 1172f5eb call 0x11730e30 */
  push32(0x1172f5f0u); f_11730e30();
  /* 1172f5f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f5f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172f5f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f5fa jne 0x1172f604 */
  if (!C.zf) goto L_1172f604;
  /* 1172f5fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172f5ff jmp 0x1172f6c9 */
  goto L_1172f6c9;
L_1172f604:;
  /* 1172f604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f607 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f60a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1172f60c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1172f60f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f613 jne 0x1172f63a */
  if (!C.zf) goto L_1172f63a;
  /* 1172f615 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f619 jge 0x1172f63a */
  if ((C.sf==C.of)) goto L_1172f63a;
  /* 1172f61b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f61f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f622 je 0x1172f63a */
  if (C.zf) goto L_1172f63a;
  /* 1172f624 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f627 push edx */
  push32((uint32_t)(EDX));
  /* 1172f628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f62b push eax */
  push32((uint32_t)(EAX));
  /* 1172f62c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f62f push ecx */
  push32((uint32_t)(ECX));
  /* 1172f630 call 0x11728a90 */
  push32(0x1172f635u); f_11728a90();
  /* 1172f635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f638 jmp 0x1172f6a0 */
  goto L_1172f6a0;
L_1172f63a:;
  /* 1172f63a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f63e jne 0x1172f668 */
  if (!C.zf) goto L_1172f668;
  /* 1172f640 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f644 jge 0x1172f668 */
  if ((C.sf==C.of)) goto L_1172f668;
  /* 1172f646 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f64a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f64d je 0x1172f668 */
  if (C.zf) goto L_1172f668;
  /* 1172f64f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f652 push eax */
  push32((uint32_t)(EAX));
  /* 1172f653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f656 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f65a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f65d push edx */
  push32((uint32_t)(EDX));
  /* 1172f65e call 0x11728a90 */
  push32(0x1172f663u); f_11728a90();
  /* 1172f663 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f666 jmp 0x1172f6a0 */
  goto L_1172f6a0;
L_1172f668:;
  /* 1172f668 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f66c jne 0x1172f69b */
  if (!C.zf) goto L_1172f69b;
  /* 1172f66e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f674 je 0x1172f67f */
  if (C.zf) goto L_1172f67f;
  /* 1172f676 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f67a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f67d jne 0x1172f69b */
  if (!C.zf) goto L_1172f69b;
L_1172f67f:;
  /* 1172f67f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f682 push edx */
  push32((uint32_t)(EDX));
  /* 1172f683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f686 push eax */
  push32((uint32_t)(EAX));
  /* 1172f687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f68a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f690 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f691 call 0x11728a90 */
  push32(0x1172f696u); f_11728a90();
  /* 1172f696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f699 jmp 0x1172f6a0 */
  goto L_1172f6a0;
L_1172f69b:;
  /* 1172f69b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172f69e jmp 0x1172f6c9 */
  goto L_1172f6c9;
L_1172f6a0:;
  /* 1172f6a0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f6a4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f6a7 jne 0x1172f6ab */
  if (!C.zf) goto L_1172f6ab;
  /* 1172f6a9 jmp 0x1172f6c7 */
  goto L_1172f6c7;
L_1172f6ab:;
  /* 1172f6ab movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1172f6af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f6b1 jne 0x1172f6b5 */
  if (!C.zf) goto L_1172f6b5;
  /* 1172f6b3 jmp 0x1172f6c7 */
  goto L_1172f6c7;
L_1172f6b5:;
  /* 1172f6b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172f6b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f6bb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1172f6bf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1172f6c2 jmp 0x1172f5d9 */
  goto L_1172f5d9;
L_1172f6c7:;
  /* 1172f6c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172f6c9:;
  /* 1172f6c9 mov esp, ebp */
  ESP = (EBP);
  /* 1172f6cb pop ebp */
  EBP = (pop32());
  /* 1172f6cc ret  */
  ESPCHK(0x1172f570u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1172f6d0 (101 bytes, 36 insns) */
void f_1172f6d0(void) {
  FTRACE(0x1172f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1172f6d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f6d6 push eax */
  push32((uint32_t)(EAX));
  /* 1172f6d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f6da push ecx */
  push32((uint32_t)(ECX));
  /* 1172f6db call 0x11728220 */
  push32(0x1172f6e0u); f_11728220();
  /* 1172f6e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f6e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f6e6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1172f6ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f6ec je 0x1172f708 */
  if (C.zf) goto L_1172f708;
  /* 1172f6ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f6f1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f6f5 push 0x1174e0c8 */
  push32((uint32_t)(0x1174e0c8u));
  /* 1172f6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f6fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f6ff push edx */
  push32((uint32_t)(EDX));
  /* 1172f700 call 0x1172f520 */
  push32(0x1172f705u); f_1172f520();
  /* 1172f705 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f708:;
  /* 1172f708 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f70b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1172f712 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172f714 je 0x1172f733 */
  if (C.zf) goto L_1172f733;
  /* 1172f716 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172f719 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f71f push edx */
  push32((uint32_t)(EDX));
  /* 1172f720 push 0x1174e0c4 */
  push32((uint32_t)(0x1174e0c4u));
  /* 1172f725 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f727 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f72a push eax */
  push32((uint32_t)(EAX));
  /* 1172f72b call 0x1172f520 */
  push32(0x1172f730u); f_1172f520();
  /* 1172f730 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f733:;
  /* 1172f733 pop ebp */
  EBP = (pop32());
  /* 1172f734 ret  */
  ESPCHK(0x1172f6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x1172f740 (130 bytes, 50 insns) */
void f_1172f740(void) {
  FTRACE(0x1172f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f740 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f741 mov ebp, esp */
  EBP = (ESP);
  /* 1172f743 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f744 push ebx */
  push32((uint32_t)(EBX));
  /* 1172f745 push esi */
  push32((uint32_t)(ESI));
  /* 1172f746 push edi */
  push32((uint32_t)(EDI));
  /* 1172f747 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172f74e:;
  /* 1172f74e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f752 jne 0x1172f772 */
  if (!C.zf) goto L_1172f772;
  /* 1172f754 push 0x1174e0d8 */
  push32((uint32_t)(0x1174e0d8u));
  /* 1172f759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172f75b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1172f75d push 0x1174e0cc */
  push32((uint32_t)(0x1174e0ccu));
  /* 1172f762 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f764 call 0x11723380 */
  push32(0x1172f769u); f_11723380();
  /* 1172f769 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f76c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f76f jne 0x1172f772 */
  if (!C.zf) goto L_1172f772;
  /* 1172f771 int3  */
  x86_unimpl("int3 @ 0x1172f771");
L_1172f772:;
  /* 1172f772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172f774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f776 jne 0x1172f74e */
  if (!C.zf) goto L_1172f74e;
  /* 1172f778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f77b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172f77e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1172f781 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172f783 je 0x1172f791 */
  if (C.zf) goto L_1172f791;
  /* 1172f785 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f788 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1172f78f jmp 0x1172f7b8 */
  goto L_1172f7b8;
L_1172f791:;
  /* 1172f791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f794 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f795 call 0x1172e180 */
  push32(0x1172f79au); f_1172e180();
  /* 1172f79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f7a0 push edx */
  push32((uint32_t)(EDX));
  /* 1172f7a1 call 0x1172f7d0 */
  push32(0x1172f7a6u); f_1172f7d0();
  /* 1172f7a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f7a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f7ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f7af push eax */
  push32((uint32_t)(EAX));
  /* 1172f7b0 call 0x1172e1f0 */
  push32(0x1172f7b5u); f_1172e1f0();
  /* 1172f7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172f7b8:;
  /* 1172f7b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f7bb pop edi */
  EDI = (pop32());
  /* 1172f7bc pop esi */
  ESI = (pop32());
  /* 1172f7bd pop ebx */
  EBX = (pop32());
  /* 1172f7be mov esp, ebp */
  ESP = (EBP);
  /* 1172f7c0 pop ebp */
  EBP = (pop32());
  /* 1172f7c1 ret  */
  ESPCHK(0x1172f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1172f7d0 (190 bytes, 67 insns) */
void f_1172f7d0(void) {
  FTRACE(0x1172f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1172f7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172f7d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1172f7d7 push esi */
  push32((uint32_t)(ESI));
  /* 1172f7d8 push edi */
  push32((uint32_t)(EDI));
  /* 1172f7d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172f7e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f7e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1172f7e6:;
  /* 1172f7e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f7ea jne 0x1172f80a */
  if (!C.zf) goto L_1172f80a;
  /* 1172f7ec push 0x1174df7c */
  push32((uint32_t)(0x1174df7cu));
  /* 1172f7f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172f7f3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1172f7f5 push 0x1174e0cc */
  push32((uint32_t)(0x1174e0ccu));
  /* 1172f7fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f7fc call 0x11723380 */
  push32(0x1172f801u); f_11723380();
  /* 1172f801 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f804 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f807 jne 0x1172f80a */
  if (!C.zf) goto L_1172f80a;
  /* 1172f809 int3  */
  x86_unimpl("int3 @ 0x1172f809");
L_1172f80a:;
  /* 1172f80a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172f80c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172f80e jne 0x1172f7e6 */
  if (!C.zf) goto L_1172f7e6;
  /* 1172f810 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f813 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172f816 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1172f81b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f81d je 0x1172f87a */
  if (C.zf) goto L_1172f87a;
  /* 1172f81f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f822 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f823 call 0x1172ead0 */
  push32(0x1172f828u); f_1172ead0();
  /* 1172f828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f82b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f82e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f831 push edx */
  push32((uint32_t)(EDX));
  /* 1172f832 call 0x11731dc0 */
  push32(0x1172f837u); f_11731dc0();
  /* 1172f837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f83a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f83d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172f840 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f841 call 0x11731c90 */
  push32(0x1172f846u); f_11731c90();
  /* 1172f846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f84b jge 0x1172f856 */
  if ((C.sf==C.of)) goto L_1172f856;
  /* 1172f84d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172f854 jmp 0x1172f87a */
  goto L_1172f87a;
L_1172f856:;
  /* 1172f856 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f859 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f85d je 0x1172f87a */
  if (C.zf) goto L_1172f87a;
  /* 1172f85f push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f861 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f864 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1172f867 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f868 call 0x11724690 */
  push32(0x1172f86du); f_11724690();
  /* 1172f86d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f870 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f873 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1172f87a:;
  /* 1172f87a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172f87d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1172f884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f887 pop edi */
  EDI = (pop32());
  /* 1172f888 pop esi */
  ESI = (pop32());
  /* 1172f889 pop ebx */
  EBX = (pop32());
  /* 1172f88a mov esp, ebp */
  ESP = (EBP);
  /* 1172f88c pop ebp */
  EBP = (pop32());
  /* 1172f88d ret  */
  ESPCHK(0x1172f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1172f890 (210 bytes, 63 insns) */
void f_1172f890(void) {
  FTRACE(0x1172f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f891 mov ebp, esp */
  EBP = (ESP);
  /* 1172f893 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f897 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f89d jae 0x1172f8c1 */
  if (!C.cf) goto L_1172f8c1;
  /* 1172f89f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f8a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172f8a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f8a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172f8ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f8ae mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172f8b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172f8ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172f8bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172f8bf jne 0x1172f8d4 */
  if (!C.zf) goto L_1172f8d4;
L_1172f8c1:;
  /* 1172f8c1 call 0x1172d580 */
  push32(0x1172f8c6u); f_1172d580();
  /* 1172f8c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172f8cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172f8cf jmp 0x1172f95e */
  goto L_1172f95e;
L_1172f8d4:;
  /* 1172f8d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f8d7 push edx */
  push32((uint32_t)(EDX));
  /* 1172f8d8 call 0x1172e890 */
  push32(0x1172f8ddu); f_1172e890();
  /* 1172f8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f8e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1172f8e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f8e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172f8ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172f8ef mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 1172f8f6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1172f8fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1172f8fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f900 je 0x1172f93d */
  if (C.zf) goto L_1172f93d;
  /* 1172f902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f905 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f906 call 0x1172e710 */
  push32(0x1172f90bu); f_1172e710();
  /* 1172f90b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f90e push eax */
  push32((uint32_t)(EAX));
  /* 1172f90f call dword ptr [0x117552a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552a0))), 0x1172f915u);
  /* 1172f915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f917 jne 0x1172f924 */
  if (!C.zf) goto L_1172f924;
  /* 1172f919 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172f91fu);
  /* 1172f91f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f922 jmp 0x1172f92b */
  goto L_1172f92b;
L_1172f924:;
  /* 1172f924 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172f92b:;
  /* 1172f92b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f92f jne 0x1172f933 */
  if (!C.zf) goto L_1172f933;
  /* 1172f931 jmp 0x1172f94f */
  goto L_1172f94f;
L_1172f933:;
  /* 1172f933 call 0x1172d590 */
  push32(0x1172f938u); f_1172d590();
  /* 1172f938 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f93b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1172f93d:;
  /* 1172f93d call 0x1172d580 */
  push32(0x1172f942u); f_1172d580();
  /* 1172f942 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172f948 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172f94f:;
  /* 1172f94f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172f952 push eax */
  push32((uint32_t)(EAX));
  /* 1172f953 call 0x1172e920 */
  push32(0x1172f958u); f_1172e920();
  /* 1172f958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f95b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172f95e:;
  /* 1172f95e mov esp, ebp */
  ESP = (EBP);
  /* 1172f960 pop ebp */
  EBP = (pop32());
  /* 1172f961 ret  */
  ESPCHK(0x1172f890u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1172f970 (219 bytes, 64 insns) */
void f_1172f970(void) {
  FTRACE(0x1172f970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172f970 push ebp */
  push32((uint32_t)(EBP));
  /* 1172f971 mov ebp, esp */
  EBP = (ESP);
  /* 1172f973 push ecx */
  push32((uint32_t)(ECX));
  /* 1172f974 cmp dword ptr [0x11752c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f97b je 0x1172fa11 */
  if (C.zf) goto L_1172fa11;
  /* 1172f981 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1172f983 push 0x1174e0e8 */
  push32((uint32_t)(0x1174e0e8u));
  /* 1172f988 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f98a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1172f98f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172f991 call 0x11724010 */
  push32(0x1172f996u); f_11724010();
  /* 1172f996 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172f99c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172f9a0 jne 0x1172f9ac */
  if (!C.zf) goto L_1172f9ac;
  /* 1172f9a2 mov eax, 1 */
  EAX = (0x1u);
  /* 1172f9a7 jmp 0x1172fa47 */
  goto L_1172fa47;
L_1172f9ac:;
  /* 1172f9ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f9af push eax */
  push32((uint32_t)(EAX));
  /* 1172f9b0 call 0x1172fa50 */
  push32(0x1172f9b5u); f_1172fa50();
  /* 1172f9b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f9b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172f9ba je 0x1172f9dd */
  if (C.zf) goto L_1172f9dd;
  /* 1172f9bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f9bf push ecx */
  push32((uint32_t)(ECX));
  /* 1172f9c0 call 0x1172ffe0 */
  push32(0x1172f9c5u); f_1172ffe0();
  /* 1172f9c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f9c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f9ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f9cd push edx */
  push32((uint32_t)(EDX));
  /* 1172f9ce call 0x11724690 */
  push32(0x1172f9d3u); f_11724690();
  /* 1172f9d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f9d6 mov eax, 1 */
  EAX = (0x1u);
  /* 1172f9db jmp 0x1172fa47 */
  goto L_1172fa47;
L_1172f9dd:;
  /* 1172f9dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172f9e0 mov dword ptr [0x11751fa8], eax */
  w32((uint32_t)(0x11751fa8), (EAX));
  /* 1172f9e5 mov ecx, dword ptr [0x11752c30] */
  ECX = (r32((uint32_t)(0x11752c30)));
  /* 1172f9eb push ecx */
  push32((uint32_t)(ECX));
  /* 1172f9ec call 0x1172ffe0 */
  push32(0x1172f9f1u); f_1172ffe0();
  /* 1172f9f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172f9f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172f9f6 mov edx, dword ptr [0x11752c30] */
  EDX = (r32((uint32_t)(0x11752c30)));
  /* 1172f9fc push edx */
  push32((uint32_t)(EDX));
  /* 1172f9fd call 0x11724690 */
  push32(0x1172fa02u); f_11724690();
  /* 1172fa02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fa05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fa08 mov dword ptr [0x11752c30], eax */
  w32((uint32_t)(0x11752c30), (EAX));
  /* 1172fa0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172fa0f jmp 0x1172fa47 */
  goto L_1172fa47;
L_1172fa11:;
  /* 1172fa11 mov dword ptr [0x11751fa8], 0x11751fb0 */
  w32((uint32_t)(0x11751fa8), (0x11751fb0u));
  /* 1172fa1b mov ecx, dword ptr [0x11752c30] */
  ECX = (r32((uint32_t)(0x11752c30)));
  /* 1172fa21 push ecx */
  push32((uint32_t)(ECX));
  /* 1172fa22 call 0x1172ffe0 */
  push32(0x1172fa27u); f_1172ffe0();
  /* 1172fa27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fa2a push 2 */
  push32((uint32_t)(0x2u));
  /* 1172fa2c mov edx, dword ptr [0x11752c30] */
  EDX = (r32((uint32_t)(0x11752c30)));
  /* 1172fa32 push edx */
  push32((uint32_t)(EDX));
  /* 1172fa33 call 0x11724690 */
  push32(0x1172fa38u); f_11724690();
  /* 1172fa38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fa3b mov dword ptr [0x11752c30], 0 */
  w32((uint32_t)(0x11752c30), (0x0u));
  /* 1172fa45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172fa47:;
  /* 1172fa47 mov esp, ebp */
  ESP = (EBP);
  /* 1172fa49 pop ebp */
  EBP = (pop32());
  /* 1172fa4a ret  */
  ESPCHK(0x1172f970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x1172fa50 (1423 bytes, 533 insns) */
void f_1172fa50(void) {
  FTRACE(0x1172fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1172fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1172fa53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172fa56 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172fa5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172fa5f mov ax, word ptr [0x11752c6a] */
  AX = (r16((uint32_t)(0x11752c6a)));
  /* 1172fa65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172fa68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fa6a mov cx, word ptr [0x11752c6c] */
  CX = (r16((uint32_t)(0x11752c6c)));
  /* 1172fa71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172fa74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172fa78 jne 0x1172fa82 */
  if (!C.zf) goto L_1172fa82;
  /* 1172fa7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172fa7d jmp 0x1172ffdb */
  goto L_1172ffdb;
L_1172fa82:;
  /* 1172fa82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fa85 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fa88 push edx */
  push32((uint32_t)(EDX));
  /* 1172fa89 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1172fa8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1172fa8f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fa91 call 0x117332d0 */
  push32(0x1172fa96u); f_117332d0();
  /* 1172fa96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fa99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fa9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fa9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172faa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172faa4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172faa7 push edx */
  push32((uint32_t)(EDX));
  /* 1172faa8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1172faaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172faad push eax */
  push32((uint32_t)(EAX));
  /* 1172faae push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fab0 call 0x117332d0 */
  push32(0x1172fab5u); f_117332d0();
  /* 1172fab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fac3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fac6 push edx */
  push32((uint32_t)(EDX));
  /* 1172fac7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1172fac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172facc push eax */
  push32((uint32_t)(EAX));
  /* 1172facd push 1 */
  push32((uint32_t)(0x1u));
  /* 1172facf call 0x117332d0 */
  push32(0x1172fad4u); f_117332d0();
  /* 1172fad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fae2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fae5 push edx */
  push32((uint32_t)(EDX));
  /* 1172fae6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1172fae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172faeb push eax */
  push32((uint32_t)(EAX));
  /* 1172faec push 1 */
  push32((uint32_t)(0x1u));
  /* 1172faee call 0x117332d0 */
  push32(0x1172faf3u); f_117332d0();
  /* 1172faf3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172faf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172faf9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fafb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fafe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb01 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb04 push edx */
  push32((uint32_t)(EDX));
  /* 1172fb05 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1172fb07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fb0a push eax */
  push32((uint32_t)(EAX));
  /* 1172fb0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fb0d call 0x117332d0 */
  push32(0x1172fb12u); f_117332d0();
  /* 1172fb12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fb18 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fb1a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fb1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb20 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb23 push edx */
  push32((uint32_t)(EDX));
  /* 1172fb24 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1172fb26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fb29 push eax */
  push32((uint32_t)(EAX));
  /* 1172fb2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fb2c call 0x117332d0 */
  push32(0x1172fb31u); f_117332d0();
  /* 1172fb31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fb37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fb39 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fb3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb3f push edx */
  push32((uint32_t)(EDX));
  /* 1172fb40 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1172fb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fb45 push eax */
  push32((uint32_t)(EAX));
  /* 1172fb46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fb48 call 0x117332d0 */
  push32(0x1172fb4du); f_117332d0();
  /* 1172fb4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fb53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fb55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fb58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb5b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb5e push edx */
  push32((uint32_t)(EDX));
  /* 1172fb5f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1172fb61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fb64 push eax */
  push32((uint32_t)(EAX));
  /* 1172fb65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fb67 call 0x117332d0 */
  push32(0x1172fb6cu); f_117332d0();
  /* 1172fb6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fb72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fb74 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fb77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb7a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb7d push edx */
  push32((uint32_t)(EDX));
  /* 1172fb7e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1172fb80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fb83 push eax */
  push32((uint32_t)(EAX));
  /* 1172fb84 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fb86 call 0x117332d0 */
  push32(0x1172fb8bu); f_117332d0();
  /* 1172fb8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fb91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fb93 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fb96 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fb99 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fb9c push edx */
  push32((uint32_t)(EDX));
  /* 1172fb9d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1172fb9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fba2 push eax */
  push32((uint32_t)(EAX));
  /* 1172fba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fba5 call 0x117332d0 */
  push32(0x1172fbaau); f_117332d0();
  /* 1172fbaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fbb0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fbb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fbb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fbb8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbbb push edx */
  push32((uint32_t)(EDX));
  /* 1172fbbc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1172fbbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fbc1 push eax */
  push32((uint32_t)(EAX));
  /* 1172fbc2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fbc4 call 0x117332d0 */
  push32(0x1172fbc9u); f_117332d0();
  /* 1172fbc9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fbcf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fbd1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fbd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fbd7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbda push edx */
  push32((uint32_t)(EDX));
  /* 1172fbdb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1172fbdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fbe0 push eax */
  push32((uint32_t)(EAX));
  /* 1172fbe1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fbe3 call 0x117332d0 */
  push32(0x1172fbe8u); f_117332d0();
  /* 1172fbe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbeb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fbee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fbf0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fbf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fbf6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fbf9 push edx */
  push32((uint32_t)(EDX));
  /* 1172fbfa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1172fbfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fbff push eax */
  push32((uint32_t)(EAX));
  /* 1172fc00 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc02 call 0x117332d0 */
  push32(0x1172fc07u); f_117332d0();
  /* 1172fc07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fc0d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fc0f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fc12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fc15 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc18 push edx */
  push32((uint32_t)(EDX));
  /* 1172fc19 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1172fc1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fc1e push eax */
  push32((uint32_t)(EAX));
  /* 1172fc1f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc21 call 0x117332d0 */
  push32(0x1172fc26u); f_117332d0();
  /* 1172fc26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc29 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fc2c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fc2e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fc31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fc34 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc37 push edx */
  push32((uint32_t)(EDX));
  /* 1172fc38 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1172fc3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fc3d push eax */
  push32((uint32_t)(EAX));
  /* 1172fc3e push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc40 call 0x117332d0 */
  push32(0x1172fc45u); f_117332d0();
  /* 1172fc45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fc4b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fc4d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fc50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fc53 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc56 push edx */
  push32((uint32_t)(EDX));
  /* 1172fc57 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1172fc59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fc5c push eax */
  push32((uint32_t)(EAX));
  /* 1172fc5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc5f call 0x117332d0 */
  push32(0x1172fc64u); f_117332d0();
  /* 1172fc64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fc6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fc6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fc6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fc72 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc75 push edx */
  push32((uint32_t)(EDX));
  /* 1172fc76 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1172fc78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fc7b push eax */
  push32((uint32_t)(EAX));
  /* 1172fc7c push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc7e call 0x117332d0 */
  push32(0x1172fc83u); f_117332d0();
  /* 1172fc83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fc89 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fc8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fc8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fc91 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fc94 push edx */
  push32((uint32_t)(EDX));
  /* 1172fc95 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1172fc97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fc9a push eax */
  push32((uint32_t)(EAX));
  /* 1172fc9b push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fc9d call 0x117332d0 */
  push32(0x1172fca2u); f_117332d0();
  /* 1172fca2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fca5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fca8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fcaa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fcad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fcb0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fcb3 push edx */
  push32((uint32_t)(EDX));
  /* 1172fcb4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1172fcb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fcb9 push eax */
  push32((uint32_t)(EAX));
  /* 1172fcba push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fcbc call 0x117332d0 */
  push32(0x1172fcc1u); f_117332d0();
  /* 1172fcc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fcc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fcc7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fcc9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fccf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fcd2 push edx */
  push32((uint32_t)(EDX));
  /* 1172fcd3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1172fcd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fcd8 push eax */
  push32((uint32_t)(EAX));
  /* 1172fcd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fcdb call 0x117332d0 */
  push32(0x1172fce0u); f_117332d0();
  /* 1172fce0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fce3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fce6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fce8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fceb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fcee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fcf1 push edx */
  push32((uint32_t)(EDX));
  /* 1172fcf2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1172fcf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fcf7 push eax */
  push32((uint32_t)(EAX));
  /* 1172fcf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fcfa call 0x117332d0 */
  push32(0x1172fcffu); f_117332d0();
  /* 1172fcff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd02 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fd05 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fd07 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fd0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fd0d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd10 push edx */
  push32((uint32_t)(EDX));
  /* 1172fd11 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1172fd13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fd16 push eax */
  push32((uint32_t)(EAX));
  /* 1172fd17 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fd19 call 0x117332d0 */
  push32(0x1172fd1eu); f_117332d0();
  /* 1172fd1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fd24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fd26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fd29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fd2c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd2f push edx */
  push32((uint32_t)(EDX));
  /* 1172fd30 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1172fd32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fd35 push eax */
  push32((uint32_t)(EAX));
  /* 1172fd36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fd38 call 0x117332d0 */
  push32(0x1172fd3du); f_117332d0();
  /* 1172fd3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fd43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fd45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fd48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fd4b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd4e push edx */
  push32((uint32_t)(EDX));
  /* 1172fd4f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1172fd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fd54 push eax */
  push32((uint32_t)(EAX));
  /* 1172fd55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fd57 call 0x117332d0 */
  push32(0x1172fd5cu); f_117332d0();
  /* 1172fd5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fd62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fd64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fd67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fd6a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd6d push edx */
  push32((uint32_t)(EDX));
  /* 1172fd6e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1172fd70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fd73 push eax */
  push32((uint32_t)(EAX));
  /* 1172fd74 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fd76 call 0x117332d0 */
  push32(0x1172fd7bu); f_117332d0();
  /* 1172fd7b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fd81 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fd83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fd86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fd89 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd8c push edx */
  push32((uint32_t)(EDX));
  /* 1172fd8d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1172fd8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fd92 push eax */
  push32((uint32_t)(EAX));
  /* 1172fd93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fd95 call 0x117332d0 */
  push32(0x1172fd9au); f_117332d0();
  /* 1172fd9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fd9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fda0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fda2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fda5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fda8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fdab push edx */
  push32((uint32_t)(EDX));
  /* 1172fdac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1172fdae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fdb1 push eax */
  push32((uint32_t)(EAX));
  /* 1172fdb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fdb4 call 0x117332d0 */
  push32(0x1172fdb9u); f_117332d0();
  /* 1172fdb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fdbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fdbf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fdc1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fdc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fdc7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fdca push edx */
  push32((uint32_t)(EDX));
  /* 1172fdcb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1172fdcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fdd0 push eax */
  push32((uint32_t)(EAX));
  /* 1172fdd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fdd3 call 0x117332d0 */
  push32(0x1172fdd8u); f_117332d0();
  /* 1172fdd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fddb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fdde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fde0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fde3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fde6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fde9 push edx */
  push32((uint32_t)(EDX));
  /* 1172fdea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1172fdec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fdef push eax */
  push32((uint32_t)(EAX));
  /* 1172fdf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fdf2 call 0x117332d0 */
  push32(0x1172fdf7u); f_117332d0();
  /* 1172fdf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fdfa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fdfd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fdff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fe02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fe05 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe08 push edx */
  push32((uint32_t)(EDX));
  /* 1172fe09 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1172fe0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fe0e push eax */
  push32((uint32_t)(EAX));
  /* 1172fe0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fe11 call 0x117332d0 */
  push32(0x1172fe16u); f_117332d0();
  /* 1172fe16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe19 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fe1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fe1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fe21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fe24 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe27 push edx */
  push32((uint32_t)(EDX));
  /* 1172fe28 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1172fe2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fe2d push eax */
  push32((uint32_t)(EAX));
  /* 1172fe2e push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fe30 call 0x117332d0 */
  push32(0x1172fe35u); f_117332d0();
  /* 1172fe35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fe3b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fe3d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fe40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fe43 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe46 push edx */
  push32((uint32_t)(EDX));
  /* 1172fe47 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1172fe49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fe4c push eax */
  push32((uint32_t)(EAX));
  /* 1172fe4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fe4f call 0x117332d0 */
  push32(0x1172fe54u); f_117332d0();
  /* 1172fe54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fe5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fe5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fe5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fe62 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe68 push edx */
  push32((uint32_t)(EDX));
  /* 1172fe69 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1172fe6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fe6e push eax */
  push32((uint32_t)(EAX));
  /* 1172fe6f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fe71 call 0x117332d0 */
  push32(0x1172fe76u); f_117332d0();
  /* 1172fe76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fe7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fe7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fe81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fe84 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe8a push edx */
  push32((uint32_t)(EDX));
  /* 1172fe8b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1172fe8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fe90 push eax */
  push32((uint32_t)(EAX));
  /* 1172fe91 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fe93 call 0x117332d0 */
  push32(0x1172fe98u); f_117332d0();
  /* 1172fe98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fe9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fe9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fea0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fea3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fea6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172feac push edx */
  push32((uint32_t)(EDX));
  /* 1172fead push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1172feaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172feb2 push eax */
  push32((uint32_t)(EAX));
  /* 1172feb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172feb5 call 0x117332d0 */
  push32(0x1172febau); f_117332d0();
  /* 1172feba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172febd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fec0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fec2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fec5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fec8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fece push edx */
  push32((uint32_t)(EDX));
  /* 1172fecf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1172fed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fed4 push eax */
  push32((uint32_t)(EAX));
  /* 1172fed5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fed7 call 0x117332d0 */
  push32(0x1172fedcu); f_117332d0();
  /* 1172fedc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fedf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172fee2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172fee4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172fee7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172feea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172fef0 push edx */
  push32((uint32_t)(EDX));
  /* 1172fef1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1172fef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172fef6 push eax */
  push32((uint32_t)(EAX));
  /* 1172fef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172fef9 call 0x117332d0 */
  push32(0x1172fefeu); f_117332d0();
  /* 1172fefe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff01 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ff04 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ff06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ff09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ff0c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff12 push edx */
  push32((uint32_t)(EDX));
  /* 1172ff13 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1172ff15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ff18 push eax */
  push32((uint32_t)(EAX));
  /* 1172ff19 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ff1b call 0x117332d0 */
  push32(0x1172ff20u); f_117332d0();
  /* 1172ff20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ff26 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ff28 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ff2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ff2e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff34 push edx */
  push32((uint32_t)(EDX));
  /* 1172ff35 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1172ff37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ff3a push eax */
  push32((uint32_t)(EAX));
  /* 1172ff3b push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ff3d call 0x117332d0 */
  push32(0x1172ff42u); f_117332d0();
  /* 1172ff42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ff48 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ff4a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ff4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ff50 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff56 push edx */
  push32((uint32_t)(EDX));
  /* 1172ff57 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1172ff59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ff5c push eax */
  push32((uint32_t)(EAX));
  /* 1172ff5d push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ff5f call 0x117332d0 */
  push32(0x1172ff64u); f_117332d0();
  /* 1172ff64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ff6a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ff6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ff6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ff72 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff78 push edx */
  push32((uint32_t)(EDX));
  /* 1172ff79 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1172ff7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ff7e push eax */
  push32((uint32_t)(EAX));
  /* 1172ff7f push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ff81 call 0x117332d0 */
  push32(0x1172ff86u); f_117332d0();
  /* 1172ff86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff89 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ff8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ff8e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ff91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ff94 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ff9a push edx */
  push32((uint32_t)(EDX));
  /* 1172ff9b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1172ff9d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ffa0 push eax */
  push32((uint32_t)(EAX));
  /* 1172ffa1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ffa3 call 0x117332d0 */
  push32(0x1172ffa8u); f_117332d0();
  /* 1172ffa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ffab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ffae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ffb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ffb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ffb6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ffbc push edx */
  push32((uint32_t)(EDX));
  /* 1172ffbd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1172ffc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ffc5 push eax */
  push32((uint32_t)(EAX));
  /* 1172ffc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172ffc8 call 0x117332d0 */
  push32(0x1172ffcdu); f_117332d0();
  /* 1172ffcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ffd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ffd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ffd5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172ffd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1172ffdb:;
  /* 1172ffdb mov esp, ebp */
  ESP = (EBP);
  /* 1172ffdd pop ebp */
  EBP = (pop32());
  /* 1172ffde ret  */
  ESPCHK(0x1172fa50u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1172ffe0 (779 bytes, 265 insns) */
void f_1172ffe0(void) {
  FTRACE(0x1172ffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ffe1 mov ebp, esp */
  EBP = (ESP);
  /* 1172ffe3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ffe7 jne 0x1172ffee */
  if (!C.zf) goto L_1172ffee;
  /* 1172ffe9 jmp 0x117302e9 */
  goto L_117302e9;
L_1172ffee:;
  /* 1172ffee push 2 */
  push32((uint32_t)(0x2u));
  /* 1172fff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172fff3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172fff6 push ecx */
  push32((uint32_t)(ECX));
  /* 1172fff7 call 0x11724690 */
  push32(0x1172fffcu); f_11724690();
  /* 1172fffc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ffff push 2 */
  push32((uint32_t)(0x2u));
  /* 11730001 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730004 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11730007 push eax */
  push32((uint32_t)(EAX));
  /* 11730008 call 0x11724690 */
  push32(0x1173000du); f_11724690();
  /* 1173000d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730010 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730015 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11730018 push edx */
  push32((uint32_t)(EDX));
  /* 11730019 call 0x11724690 */
  push32(0x1173001eu); f_11724690();
  /* 1173001e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730021 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730026 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11730029 push ecx */
  push32((uint32_t)(ECX));
  /* 1173002a call 0x11724690 */
  push32(0x1173002fu); f_11724690();
  /* 1173002f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730032 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730037 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1173003a push eax */
  push32((uint32_t)(EAX));
  /* 1173003b call 0x11724690 */
  push32(0x11730040u); f_11724690();
  /* 11730040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730043 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730048 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1173004b push edx */
  push32((uint32_t)(EDX));
  /* 1173004c call 0x11724690 */
  push32(0x11730051u); f_11724690();
  /* 11730051 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730054 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1173005b push ecx */
  push32((uint32_t)(ECX));
  /* 1173005c call 0x11724690 */
  push32(0x11730061u); f_11724690();
  /* 11730061 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730064 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730066 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730069 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1173006c push eax */
  push32((uint32_t)(EAX));
  /* 1173006d call 0x11724690 */
  push32(0x11730072u); f_11724690();
  /* 11730072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173007a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1173007d push edx */
  push32((uint32_t)(EDX));
  /* 1173007e call 0x11724690 */
  push32(0x11730083u); f_11724690();
  /* 11730083 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730086 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173008b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1173008e push ecx */
  push32((uint32_t)(ECX));
  /* 1173008f call 0x11724690 */
  push32(0x11730094u); f_11724690();
  /* 11730094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730097 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173009c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1173009f push eax */
  push32((uint32_t)(EAX));
  /* 117300a0 call 0x11724690 */
  push32(0x117300a5u); f_11724690();
  /* 117300a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117300aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117300ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 117300b0 push edx */
  push32((uint32_t)(EDX));
  /* 117300b1 call 0x11724690 */
  push32(0x117300b6u); f_11724690();
  /* 117300b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117300bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117300be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 117300c1 push ecx */
  push32((uint32_t)(ECX));
  /* 117300c2 call 0x11724690 */
  push32(0x117300c7u); f_11724690();
  /* 117300c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300ca push 2 */
  push32((uint32_t)(0x2u));
  /* 117300cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117300cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117300d2 push eax */
  push32((uint32_t)(EAX));
  /* 117300d3 call 0x11724690 */
  push32(0x117300d8u); f_11724690();
  /* 117300d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300db push 2 */
  push32((uint32_t)(0x2u));
  /* 117300dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117300e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 117300e3 push edx */
  push32((uint32_t)(EDX));
  /* 117300e4 call 0x11724690 */
  push32(0x117300e9u); f_11724690();
  /* 117300e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300ec push 2 */
  push32((uint32_t)(0x2u));
  /* 117300ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117300f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 117300f4 push ecx */
  push32((uint32_t)(ECX));
  /* 117300f5 call 0x11724690 */
  push32(0x117300fau); f_11724690();
  /* 117300fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117300fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117300ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730102 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11730105 push eax */
  push32((uint32_t)(EAX));
  /* 11730106 call 0x11724690 */
  push32(0x1173010bu); f_11724690();
  /* 1173010b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173010e push 2 */
  push32((uint32_t)(0x2u));
  /* 11730110 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730113 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11730116 push edx */
  push32((uint32_t)(EDX));
  /* 11730117 call 0x11724690 */
  push32(0x1173011cu); f_11724690();
  /* 1173011c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173011f push 2 */
  push32((uint32_t)(0x2u));
  /* 11730121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730124 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11730127 push ecx */
  push32((uint32_t)(ECX));
  /* 11730128 call 0x11724690 */
  push32(0x1173012du); f_11724690();
  /* 1173012d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730130 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730132 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730135 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11730138 push eax */
  push32((uint32_t)(EAX));
  /* 11730139 call 0x11724690 */
  push32(0x1173013eu); f_11724690();
  /* 1173013e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730141 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730143 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730146 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11730149 push edx */
  push32((uint32_t)(EDX));
  /* 1173014a call 0x11724690 */
  push32(0x1173014fu); f_11724690();
  /* 1173014f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730152 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730157 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1173015a push ecx */
  push32((uint32_t)(ECX));
  /* 1173015b call 0x11724690 */
  push32(0x11730160u); f_11724690();
  /* 11730160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730163 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730168 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1173016b push eax */
  push32((uint32_t)(EAX));
  /* 1173016c call 0x11724690 */
  push32(0x11730171u); f_11724690();
  /* 11730171 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730174 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730179 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1173017c push edx */
  push32((uint32_t)(EDX));
  /* 1173017d call 0x11724690 */
  push32(0x11730182u); f_11724690();
  /* 11730182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730185 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173018a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1173018d push ecx */
  push32((uint32_t)(ECX));
  /* 1173018e call 0x11724690 */
  push32(0x11730193u); f_11724690();
  /* 11730193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730196 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173019b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1173019e push eax */
  push32((uint32_t)(EAX));
  /* 1173019f call 0x11724690 */
  push32(0x117301a4u); f_11724690();
  /* 117301a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117301a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117301ac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 117301af push edx */
  push32((uint32_t)(EDX));
  /* 117301b0 call 0x11724690 */
  push32(0x117301b5u); f_11724690();
  /* 117301b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117301ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117301bd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 117301c0 push ecx */
  push32((uint32_t)(ECX));
  /* 117301c1 call 0x11724690 */
  push32(0x117301c6u); f_11724690();
  /* 117301c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117301cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117301ce mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 117301d1 push eax */
  push32((uint32_t)(EAX));
  /* 117301d2 call 0x11724690 */
  push32(0x117301d7u); f_11724690();
  /* 117301d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301da push 2 */
  push32((uint32_t)(0x2u));
  /* 117301dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117301df mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 117301e2 push edx */
  push32((uint32_t)(EDX));
  /* 117301e3 call 0x11724690 */
  push32(0x117301e8u); f_11724690();
  /* 117301e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301eb push 2 */
  push32((uint32_t)(0x2u));
  /* 117301ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117301f0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 117301f3 push ecx */
  push32((uint32_t)(ECX));
  /* 117301f4 call 0x11724690 */
  push32(0x117301f9u); f_11724690();
  /* 117301f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117301fc push 2 */
  push32((uint32_t)(0x2u));
  /* 117301fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730201 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11730204 push eax */
  push32((uint32_t)(EAX));
  /* 11730205 call 0x11724690 */
  push32(0x1173020au); f_11724690();
  /* 1173020a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173020d push 2 */
  push32((uint32_t)(0x2u));
  /* 1173020f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730212 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11730218 push edx */
  push32((uint32_t)(EDX));
  /* 11730219 call 0x11724690 */
  push32(0x1173021eu); f_11724690();
  /* 1173021e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730221 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730226 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1173022c push ecx */
  push32((uint32_t)(ECX));
  /* 1173022d call 0x11724690 */
  push32(0x11730232u); f_11724690();
  /* 11730232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730235 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173023a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11730240 push eax */
  push32((uint32_t)(EAX));
  /* 11730241 call 0x11724690 */
  push32(0x11730246u); f_11724690();
  /* 11730246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730249 push 2 */
  push32((uint32_t)(0x2u));
  /* 1173024b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173024e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11730254 push edx */
  push32((uint32_t)(EDX));
  /* 11730255 call 0x11724690 */
  push32(0x1173025au); f_11724690();
  /* 1173025a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173025d push 2 */
  push32((uint32_t)(0x2u));
  /* 1173025f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730262 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11730268 push ecx */
  push32((uint32_t)(ECX));
  /* 11730269 call 0x11724690 */
  push32(0x1173026eu); f_11724690();
  /* 1173026e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730271 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730273 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730276 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1173027c push eax */
  push32((uint32_t)(EAX));
  /* 1173027d call 0x11724690 */
  push32(0x11730282u); f_11724690();
  /* 11730282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730285 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173028a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11730290 push edx */
  push32((uint32_t)(EDX));
  /* 11730291 call 0x11724690 */
  push32(0x11730296u); f_11724690();
  /* 11730296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1173029b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173029e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 117302a4 push ecx */
  push32((uint32_t)(ECX));
  /* 117302a5 call 0x11724690 */
  push32(0x117302aau); f_11724690();
  /* 117302aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117302ad push 2 */
  push32((uint32_t)(0x2u));
  /* 117302af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117302b2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 117302b8 push eax */
  push32((uint32_t)(EAX));
  /* 117302b9 call 0x11724690 */
  push32(0x117302beu); f_11724690();
  /* 117302be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117302c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117302c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117302c6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 117302cc push edx */
  push32((uint32_t)(EDX));
  /* 117302cd call 0x11724690 */
  push32(0x117302d2u); f_11724690();
  /* 117302d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117302d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117302d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117302da mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 117302e0 push ecx */
  push32((uint32_t)(ECX));
  /* 117302e1 call 0x11724690 */
  push32(0x117302e6u); f_11724690();
  /* 117302e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117302e9:;
  /* 117302e9 pop ebp */
  EBP = (pop32());
  /* 117302ea ret  */
  ESPCHK(0x1172ffe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x117302f0 (678 bytes, 180 insns) */
void f_117302f0(void) {
  FTRACE(0x117302f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117302f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117302f1 mov ebp, esp */
  EBP = (ESP);
  /* 117302f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117302f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117302fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117302ff mov ax, word ptr [0x11752c66] */
  AX = (r16((uint32_t)(0x11752c66)));
  /* 11730305 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11730308 cmp dword ptr [0x11752c0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173030f je 0x1173046a */
  if (C.zf) goto L_1173046a;
  /* 11730315 push 0x11752c34 */
  push32((uint32_t)(0x11752c34u));
  /* 1173031a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1173031c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173031f push ecx */
  push32((uint32_t)(ECX));
  /* 11730320 push 1 */
  push32((uint32_t)(0x1u));
  /* 11730322 call 0x117332d0 */
  push32(0x11730327u); f_117332d0();
  /* 11730327 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173032a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173032d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1173032f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11730332 push 0x11752c38 */
  push32((uint32_t)(0x11752c38u));
  /* 11730337 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11730339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173033c push eax */
  push32((uint32_t)(EAX));
  /* 1173033d push 1 */
  push32((uint32_t)(0x1u));
  /* 1173033f call 0x117332d0 */
  push32(0x11730344u); f_117332d0();
  /* 11730344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730347 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173034a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1173034c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173034f push 0x11752c3c */
  push32((uint32_t)(0x11752c3cu));
  /* 11730354 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11730356 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730359 push edx */
  push32((uint32_t)(EDX));
  /* 1173035a push 1 */
  push32((uint32_t)(0x1u));
  /* 1173035c call 0x117332d0 */
  push32(0x11730361u); f_117332d0();
  /* 11730361 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730364 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730367 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730369 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173036c mov edx, dword ptr [0x11752c3c] */
  EDX = (r32((uint32_t)(0x11752c3c)));
  /* 11730372 push edx */
  push32((uint32_t)(EDX));
  /* 11730373 call 0x117305a0 */
  push32(0x11730378u); f_117305a0();
  /* 11730378 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173037b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173037f je 0x117303d9 */
  if (C.zf) goto L_117303d9;
  /* 11730381 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730383 mov eax, dword ptr [0x11752c34] */
  EAX = (r32((uint32_t)(0x11752c34)));
  /* 11730388 push eax */
  push32((uint32_t)(EAX));
  /* 11730389 call 0x11724690 */
  push32(0x1173038eu); f_11724690();
  /* 1173038e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730391 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730393 mov ecx, dword ptr [0x11752c38] */
  ECX = (r32((uint32_t)(0x11752c38)));
  /* 11730399 push ecx */
  push32((uint32_t)(ECX));
  /* 1173039a call 0x11724690 */
  push32(0x1173039fu); f_11724690();
  /* 1173039f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117303a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117303a4 mov edx, dword ptr [0x11752c3c] */
  EDX = (r32((uint32_t)(0x11752c3c)));
  /* 117303aa push edx */
  push32((uint32_t)(EDX));
  /* 117303ab call 0x11724690 */
  push32(0x117303b0u); f_11724690();
  /* 117303b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117303b3 mov dword ptr [0x11752c34], 0 */
  w32((uint32_t)(0x11752c34), (0x0u));
  /* 117303bd mov dword ptr [0x11752c38], 0 */
  w32((uint32_t)(0x11752c38), (0x0u));
  /* 117303c7 mov dword ptr [0x11752c3c], 0 */
  w32((uint32_t)(0x11752c3c), (0x0u));
  /* 117303d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117303d4 jmp 0x11730592 */
  goto L_11730592;
L_117303d9:;
  /* 117303d9 mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 117303de cmp dword ptr [eax], 0x11752060 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11752060u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117303e4 je 0x11730420 */
  if (C.zf) goto L_11730420;
  /* 117303e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117303e8 mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 117303ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117303f0 push edx */
  push32((uint32_t)(EDX));
  /* 117303f1 call 0x11724690 */
  push32(0x117303f6u); f_11724690();
  /* 117303f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117303f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 117303fb mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 11730400 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11730403 push ecx */
  push32((uint32_t)(ECX));
  /* 11730404 call 0x11724690 */
  push32(0x11730409u); f_11724690();
  /* 11730409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173040c push 2 */
  push32((uint32_t)(0x2u));
  /* 1173040e mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 11730414 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11730417 push eax */
  push32((uint32_t)(EAX));
  /* 11730418 call 0x11724690 */
  push32(0x1173041du); f_11724690();
  /* 1173041d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730420:;
  /* 11730420 mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 11730426 mov edx, dword ptr [0x11752c34] */
  EDX = (r32((uint32_t)(0x11752c34)));
  /* 1173042c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1173042e mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 11730433 mov ecx, dword ptr [0x11752c38] */
  ECX = (r32((uint32_t)(0x11752c38)));
  /* 11730439 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1173043c mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 11730442 mov eax, dword ptr [0x11752c3c] */
  EAX = (r32((uint32_t)(0x11752c3c)));
  /* 11730447 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1173044a mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 11730450 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11730452 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11730454 mov byte ptr [0x11751148], al */
  w8((uint32_t)(0x11751148), (AL));
  /* 11730459 mov dword ptr [0x1175114c], 1 */
  w32((uint32_t)(0x1175114c), (0x1u));
  /* 11730463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730465 jmp 0x11730592 */
  goto L_11730592;
L_1173046a:;
  /* 1173046a push 2 */
  push32((uint32_t)(0x2u));
  /* 1173046c mov ecx, dword ptr [0x11752c34] */
  ECX = (r32((uint32_t)(0x11752c34)));
  /* 11730472 push ecx */
  push32((uint32_t)(ECX));
  /* 11730473 call 0x11724690 */
  push32(0x11730478u); f_11724690();
  /* 11730478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173047b push 2 */
  push32((uint32_t)(0x2u));
  /* 1173047d mov edx, dword ptr [0x11752c38] */
  EDX = (r32((uint32_t)(0x11752c38)));
  /* 11730483 push edx */
  push32((uint32_t)(EDX));
  /* 11730484 call 0x11724690 */
  push32(0x11730489u); f_11724690();
  /* 11730489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173048c push 2 */
  push32((uint32_t)(0x2u));
  /* 1173048e mov eax, dword ptr [0x11752c3c] */
  EAX = (r32((uint32_t)(0x11752c3c)));
  /* 11730493 push eax */
  push32((uint32_t)(EAX));
  /* 11730494 call 0x11724690 */
  push32(0x11730499u); f_11724690();
  /* 11730499 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173049c mov dword ptr [0x11752c34], 0 */
  w32((uint32_t)(0x11752c34), (0x0u));
  /* 117304a6 mov dword ptr [0x11752c38], 0 */
  w32((uint32_t)(0x11752c38), (0x0u));
  /* 117304b0 mov dword ptr [0x11752c3c], 0 */
  w32((uint32_t)(0x11752c3c), (0x0u));
  /* 117304ba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 117304bf push 0x1174e0f4 */
  push32((uint32_t)(0x1174e0f4u));
  /* 117304c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117304c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117304c8 call 0x11723c00 */
  push32(0x117304cdu); f_11723c00();
  /* 117304cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117304d0 mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 117304d6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117304d8 mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 117304de cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117304e1 jne 0x117304eb */
  if (!C.zf) goto L_117304eb;
  /* 117304e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117304e6 jmp 0x11730592 */
  goto L_11730592;
L_117304eb:;
  /* 117304eb push 0x1174e0c4 */
  push32((uint32_t)(0x1174e0c4u));
  /* 117304f0 mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 117304f5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117304f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117304f8 call 0x11728220 */
  push32(0x117304fdu); f_11728220();
  /* 117304fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730500 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11730505 push 0x1174e0f4 */
  push32((uint32_t)(0x1174e0f4u));
  /* 1173050a push 2 */
  push32((uint32_t)(0x2u));
  /* 1173050c push 2 */
  push32((uint32_t)(0x2u));
  /* 1173050e call 0x11723c00 */
  push32(0x11730513u); f_11723c00();
  /* 11730513 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730516 mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 1173051c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1173051f mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 11730524 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730528 jne 0x1173052f */
  if (!C.zf) goto L_1173052f;
  /* 1173052a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173052d jmp 0x11730592 */
  goto L_11730592;
L_1173052f:;
  /* 1173052f mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 11730535 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11730538 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1173053b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11730540 push 0x1174e0f4 */
  push32((uint32_t)(0x1174e0f4u));
  /* 11730545 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730547 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730549 call 0x11723c00 */
  push32(0x1173054eu); f_11723c00();
  /* 1173054e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730551 mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 11730557 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1173055a mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 11730560 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730564 jne 0x1173056b */
  if (!C.zf) goto L_1173056b;
  /* 11730566 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11730569 jmp 0x11730592 */
  goto L_11730592;
L_1173056b:;
  /* 1173056b mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 11730570 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11730573 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11730576 mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 1173057c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1173057e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11730580 mov byte ptr [0x11751148], cl */
  w8((uint32_t)(0x11751148), (CL));
  /* 11730586 mov dword ptr [0x1175114c], 1 */
  w32((uint32_t)(0x1175114c), (0x1u));
  /* 11730590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11730592:;
  /* 11730592 mov esp, ebp */
  ESP = (EBP);
  /* 11730594 pop ebp */
  EBP = (pop32());
  /* 11730595 ret  */
  ESPCHK(0x117302f0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x117305a0 (125 bytes, 49 insns) */
void f_117305a0(void) {
  FTRACE(0x117305a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117305a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117305a1 mov ebp, esp */
  EBP = (ESP);
  /* 117305a3 push ecx */
  push32((uint32_t)(ECX));
L_117305a4:;
  /* 117305a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305a7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117305aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117305ac je 0x11730619 */
  if (C.zf) goto L_11730619;
  /* 117305ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305b1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117305b4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117305b7 jl 0x117305dd */
  if ((C.sf!=C.of)) goto L_117305dd;
  /* 117305b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305bc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117305bf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117305c2 jg 0x117305dd */
  if ((!C.zf&&C.sf==C.of)) goto L_117305dd;
  /* 117305c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117305ca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117305cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305d0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 117305d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117305d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117305db jmp 0x11730617 */
  goto L_11730617;
L_117305dd:;
  /* 117305dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117305e3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117305e6 jne 0x1173060e */
  if (!C.zf) goto L_1173060e;
  /* 117305e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117305eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117305ee:;
  /* 117305ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117305f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117305f4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117305f7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117305f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117305fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117305ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11730602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730605 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11730608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173060a jne 0x117305ee */
  if (!C.zf) goto L_117305ee;
  /* 1173060c jmp 0x11730617 */
  goto L_11730617;
L_1173060e:;
  /* 1173060e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730611 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730614 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11730617:;
  /* 11730617 jmp 0x117305a4 */
  goto L_117305a4;
L_11730619:;
  /* 11730619 mov esp, ebp */
  ESP = (EBP);
  /* 1173061b pop ebp */
  EBP = (pop32());
  /* 1173061c ret  */
  ESPCHK(0x117305a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010620 @ 0x11730620 (304 bytes, 85 insns) */
void f_11730620(void) {
  FTRACE(0x11730620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730620 push ebp */
  push32((uint32_t)(EBP));
  /* 11730621 mov ebp, esp */
  EBP = (ESP);
  /* 11730623 push ecx */
  push32((uint32_t)(ECX));
  /* 11730624 cmp dword ptr [0x11752c08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173062b je 0x117306ec */
  if (C.zf) goto L_117306ec;
  /* 11730631 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11730633 push 0x1174e100 */
  push32((uint32_t)(0x1174e100u));
  /* 11730638 push 2 */
  push32((uint32_t)(0x2u));
  /* 1173063a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1173063c push 1 */
  push32((uint32_t)(0x1u));
  /* 1173063e call 0x11724010 */
  push32(0x11730643u); f_11724010();
  /* 11730643 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730646 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11730649 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173064d jne 0x11730659 */
  if (!C.zf) goto L_11730659;
  /* 1173064f mov eax, 1 */
  EAX = (0x1u);
  /* 11730654 jmp 0x1173074c */
  goto L_1173074c;
L_11730659:;
  /* 11730659 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173065c push eax */
  push32((uint32_t)(EAX));
  /* 1173065d call 0x11730750 */
  push32(0x11730662u); f_11730750();
  /* 11730662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730667 je 0x1173068d */
  if (C.zf) goto L_1173068d;
  /* 11730669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173066c push ecx */
  push32((uint32_t)(ECX));
  /* 1173066d call 0x117309e0 */
  push32(0x11730672u); f_117309e0();
  /* 11730672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730675 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173067a push edx */
  push32((uint32_t)(EDX));
  /* 1173067b call 0x11724690 */
  push32(0x11730680u); f_11724690();
  /* 11730680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730683 mov eax, 1 */
  EAX = (0x1u);
  /* 11730688 jmp 0x1173074c */
  goto L_1173074c;
L_1173068d:;
  /* 1173068d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730690 mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 11730696 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11730698 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1173069a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173069d mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 117306a3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117306a6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117306a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117306ac mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 117306b2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117306b5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 117306b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117306bb mov dword ptr [0x11752098], eax */
  w32((uint32_t)(0x11752098), (EAX));
  /* 117306c0 mov ecx, dword ptr [0x11752c40] */
  ECX = (r32((uint32_t)(0x11752c40)));
  /* 117306c6 push ecx */
  push32((uint32_t)(ECX));
  /* 117306c7 call 0x117309e0 */
  push32(0x117306ccu); f_117309e0();
  /* 117306cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117306cf push 2 */
  push32((uint32_t)(0x2u));
  /* 117306d1 mov edx, dword ptr [0x11752c40] */
  EDX = (r32((uint32_t)(0x11752c40)));
  /* 117306d7 push edx */
  push32((uint32_t)(EDX));
  /* 117306d8 call 0x11724690 */
  push32(0x117306ddu); f_11724690();
  /* 117306dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117306e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117306e3 mov dword ptr [0x11752c40], eax */
  w32((uint32_t)(0x11752c40), (EAX));
  /* 117306e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117306ea jmp 0x1173074c */
  goto L_1173074c;
L_117306ec:;
  /* 117306ec mov ecx, dword ptr [0x11752098] */
  ECX = (r32((uint32_t)(0x11752098)));
  /* 117306f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117306f4 mov dword ptr [0x11752068], edx */
  w32((uint32_t)(0x11752068), (EDX));
  /* 117306fa mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 117306ff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11730702 mov dword ptr [0x1175206c], ecx */
  w32((uint32_t)(0x1175206c), (ECX));
  /* 11730708 mov edx, dword ptr [0x11752098] */
  EDX = (r32((uint32_t)(0x11752098)));
  /* 1173070e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11730711 mov dword ptr [0x11752070], eax */
  w32((uint32_t)(0x11752070), (EAX));
  /* 11730716 mov dword ptr [0x11752098], 0x11752068 */
  w32((uint32_t)(0x11752098), (0x11752068u));
  /* 11730720 mov ecx, dword ptr [0x11752c40] */
  ECX = (r32((uint32_t)(0x11752c40)));
  /* 11730726 push ecx */
  push32((uint32_t)(ECX));
  /* 11730727 call 0x117309e0 */
  push32(0x1173072cu); f_117309e0();
  /* 1173072c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173072f push 2 */
  push32((uint32_t)(0x2u));
  /* 11730731 mov edx, dword ptr [0x11752c40] */
  EDX = (r32((uint32_t)(0x11752c40)));
  /* 11730737 push edx */
  push32((uint32_t)(EDX));
  /* 11730738 call 0x11724690 */
  push32(0x1173073du); f_11724690();
  /* 1173073d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730740 mov dword ptr [0x11752c40], 0 */
  w32((uint32_t)(0x11752c40), (0x0u));
  /* 1173074a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1173074c:;
  /* 1173074c mov esp, ebp */
  ESP = (EBP);
  /* 1173074e pop ebp */
  EBP = (pop32());
  /* 1173074f ret  */
  ESPCHK(0x11730620u, _esp0);
  ESP += 4; return;
}

/* FUN_10010750 @ 0x11730750 (525 bytes, 200 insns) */
void f_11730750(void) {
  FTRACE(0x11730750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730750 push ebp */
  push32((uint32_t)(EBP));
  /* 11730751 mov ebp, esp */
  EBP = (ESP);
  /* 11730753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11730756 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1173075d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173075f mov ax, word ptr [0x11752c60] */
  AX = (r16((uint32_t)(0x11752c60)));
  /* 11730765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11730768 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173076c jne 0x11730776 */
  if (!C.zf) goto L_11730776;
  /* 1173076e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11730771 jmp 0x11730959 */
  goto L_11730959;
L_11730776:;
  /* 11730776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730779 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173077c push ecx */
  push32((uint32_t)(ECX));
  /* 1173077d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1173077f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730782 push edx */
  push32((uint32_t)(EDX));
  /* 11730783 push 1 */
  push32((uint32_t)(0x1u));
  /* 11730785 call 0x117332d0 */
  push32(0x1173078au); f_117332d0();
  /* 1173078a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173078d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730790 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730792 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11730795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730798 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173079b push edx */
  push32((uint32_t)(EDX));
  /* 1173079c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1173079e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117307a1 push eax */
  push32((uint32_t)(EAX));
  /* 117307a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 117307a4 call 0x117332d0 */
  push32(0x117307a9u); f_117332d0();
  /* 117307a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117307ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117307af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117307b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117307b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117307b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117307ba push edx */
  push32((uint32_t)(EDX));
  /* 117307bb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 117307bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117307c0 push eax */
  push32((uint32_t)(EAX));
  /* 117307c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117307c3 call 0x117332d0 */
  push32(0x117307c8u); f_117332d0();
  /* 117307c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117307cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117307ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117307d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117307d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117307d6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117307d9 push edx */
  push32((uint32_t)(EDX));
  /* 117307da push 0x17 */
  push32((uint32_t)(0x17u));
  /* 117307dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117307df push eax */
  push32((uint32_t)(EAX));
  /* 117307e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117307e2 call 0x117332d0 */
  push32(0x117307e7u); f_117332d0();
  /* 117307e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117307ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117307ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117307ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117307f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117307f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117307f8 push edx */
  push32((uint32_t)(EDX));
  /* 117307f9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117307fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117307fe push eax */
  push32((uint32_t)(EAX));
  /* 117307ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11730801 call 0x117332d0 */
  push32(0x11730806u); f_117332d0();
  /* 11730806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730809 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173080c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1173080e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11730811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730814 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11730817 push eax */
  push32((uint32_t)(EAX));
  /* 11730818 call 0x11730960 */
  push32(0x1173081du); f_11730960();
  /* 1173081d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730823 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730826 push ecx */
  push32((uint32_t)(ECX));
  /* 11730827 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11730829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173082c push edx */
  push32((uint32_t)(EDX));
  /* 1173082d push 1 */
  push32((uint32_t)(0x1u));
  /* 1173082f call 0x117332d0 */
  push32(0x11730834u); f_117332d0();
  /* 11730834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730837 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173083a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1173083c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173083f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730842 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730845 push edx */
  push32((uint32_t)(EDX));
  /* 11730846 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11730848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173084b push eax */
  push32((uint32_t)(EAX));
  /* 1173084c push 1 */
  push32((uint32_t)(0x1u));
  /* 1173084e call 0x117332d0 */
  push32(0x11730853u); f_117332d0();
  /* 11730853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730856 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730859 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1173085b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173085e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730861 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730864 push edx */
  push32((uint32_t)(EDX));
  /* 11730865 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11730867 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173086a push eax */
  push32((uint32_t)(EAX));
  /* 1173086b push 0 */
  push32((uint32_t)(0x0u));
  /* 1173086d call 0x117332d0 */
  push32(0x11730872u); f_117332d0();
  /* 11730872 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730878 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1173087a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173087d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730880 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730883 push edx */
  push32((uint32_t)(EDX));
  /* 11730884 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11730886 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730889 push eax */
  push32((uint32_t)(EAX));
  /* 1173088a push 0 */
  push32((uint32_t)(0x0u));
  /* 1173088c call 0x117332d0 */
  push32(0x11730891u); f_117332d0();
  /* 11730891 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730894 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730897 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730899 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173089c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173089f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117308a2 push edx */
  push32((uint32_t)(EDX));
  /* 117308a3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 117308a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117308a8 push eax */
  push32((uint32_t)(EAX));
  /* 117308a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117308ab call 0x117332d0 */
  push32(0x117308b0u); f_117332d0();
  /* 117308b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117308b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117308b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117308b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117308bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117308be add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117308c1 push edx */
  push32((uint32_t)(EDX));
  /* 117308c2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 117308c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117308c7 push eax */
  push32((uint32_t)(EAX));
  /* 117308c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117308ca call 0x117332d0 */
  push32(0x117308cfu); f_117332d0();
  /* 117308cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117308d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117308d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117308d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117308da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117308dd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117308e0 push edx */
  push32((uint32_t)(EDX));
  /* 117308e1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 117308e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117308e6 push eax */
  push32((uint32_t)(EAX));
  /* 117308e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117308e9 call 0x117332d0 */
  push32(0x117308eeu); f_117332d0();
  /* 117308ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117308f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117308f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117308f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117308f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117308fc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117308ff push edx */
  push32((uint32_t)(EDX));
  /* 11730900 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11730902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730905 push eax */
  push32((uint32_t)(EAX));
  /* 11730906 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730908 call 0x117332d0 */
  push32(0x1173090du); f_117332d0();
  /* 1173090d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730910 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730913 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730915 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11730918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173091b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173091e push edx */
  push32((uint32_t)(EDX));
  /* 1173091f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11730921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730924 push eax */
  push32((uint32_t)(EAX));
  /* 11730925 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730927 call 0x117332d0 */
  push32(0x1173092cu); f_117332d0();
  /* 1173092c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173092f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730932 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730934 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11730937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173093a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173093d push edx */
  push32((uint32_t)(EDX));
  /* 1173093e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11730940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11730943 push eax */
  push32((uint32_t)(EAX));
  /* 11730944 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730946 call 0x117332d0 */
  push32(0x1173094bu); f_117332d0();
  /* 1173094b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173094e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730951 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11730953 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11730956 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11730959:;
  /* 11730959 mov esp, ebp */
  ESP = (EBP);
  /* 1173095b pop ebp */
  EBP = (pop32());
  /* 1173095c ret  */
  ESPCHK(0x11730750u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11730960 (125 bytes, 49 insns) */
void f_11730960(void) {
  FTRACE(0x11730960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730960 push ebp */
  push32((uint32_t)(EBP));
  /* 11730961 mov ebp, esp */
  EBP = (ESP);
  /* 11730963 push ecx */
  push32((uint32_t)(ECX));
L_11730964:;
  /* 11730964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730967 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1173096a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1173096c je 0x117309d9 */
  if (C.zf) goto L_117309d9;
  /* 1173096e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730971 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11730974 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730977 jl 0x1173099d */
  if ((C.sf!=C.of)) goto L_1173099d;
  /* 11730979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173097c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1173097f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730982 jg 0x1173099d */
  if ((!C.zf&&C.sf==C.of)) goto L_1173099d;
  /* 11730984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730987 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1173098a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173098d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730990 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11730992 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730995 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730998 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173099b jmp 0x117309d7 */
  goto L_117309d7;
L_1173099d:;
  /* 1173099d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117309a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117309a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117309a6 jne 0x117309ce */
  if (!C.zf) goto L_117309ce;
  /* 117309a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117309ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117309ae:;
  /* 117309ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117309b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117309b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117309b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117309b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117309bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117309bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117309c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117309c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117309c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117309ca jne 0x117309ae */
  if (!C.zf) goto L_117309ae;
  /* 117309cc jmp 0x117309d7 */
  goto L_117309d7;
L_117309ce:;
  /* 117309ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117309d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117309d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_117309d7:;
  /* 117309d7 jmp 0x11730964 */
  goto L_11730964;
L_117309d9:;
  /* 117309d9 mov esp, ebp */
  ESP = (EBP);
  /* 117309db pop ebp */
  EBP = (pop32());
  /* 117309dc ret  */
  ESPCHK(0x11730960u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x117309e0 (147 bytes, 52 insns) */
void f_117309e0(void) {
  FTRACE(0x117309e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117309e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117309e1 mov ebp, esp */
  EBP = (ESP);
  /* 117309e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117309e7 jne 0x117309ee */
  if (!C.zf) goto L_117309ee;
  /* 117309e9 jmp 0x11730a71 */
  goto L_11730a71;
L_117309ee:;
  /* 117309ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117309f1 cmp dword ptr [eax + 0xc], 0x11752c9c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11752c9cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117309f8 je 0x11730a71 */
  if (C.zf) goto L_11730a71;
  /* 117309fa push 2 */
  push32((uint32_t)(0x2u));
  /* 117309fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117309ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11730a02 push edx */
  push32((uint32_t)(EDX));
  /* 11730a03 call 0x11724690 */
  push32(0x11730a08u); f_11724690();
  /* 11730a08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a10 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11730a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11730a14 call 0x11724690 */
  push32(0x11730a19u); f_11724690();
  /* 11730a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11730a24 push eax */
  push32((uint32_t)(EAX));
  /* 11730a25 call 0x11724690 */
  push32(0x11730a2au); f_11724690();
  /* 11730a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a32 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11730a35 push edx */
  push32((uint32_t)(EDX));
  /* 11730a36 call 0x11724690 */
  push32(0x11730a3bu); f_11724690();
  /* 11730a3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a43 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11730a46 push ecx */
  push32((uint32_t)(ECX));
  /* 11730a47 call 0x11724690 */
  push32(0x11730a4cu); f_11724690();
  /* 11730a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a54 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11730a57 push eax */
  push32((uint32_t)(EAX));
  /* 11730a58 call 0x11724690 */
  push32(0x11730a5du); f_11724690();
  /* 11730a5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730a62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730a65 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11730a68 push edx */
  push32((uint32_t)(EDX));
  /* 11730a69 call 0x11724690 */
  push32(0x11730a6eu); f_11724690();
  /* 11730a6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730a71:;
  /* 11730a71 pop ebp */
  EBP = (pop32());
  /* 11730a72 ret  */
  ESPCHK(0x117309e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x11730a80 (928 bytes, 284 insns) */
void f_11730a80(void) {
  FTRACE(0x11730a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11730a81 mov ebp, esp */
  EBP = (ESP);
  /* 11730a83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11730a86 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11730a8d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11730a94 cmp dword ptr [0x11752c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730a9b je 0x11730dd1 */
  if (C.zf) goto L_11730dd1;
  /* 11730aa1 cmp dword ptr [0x11752c14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730aa8 jne 0x11730ad0 */
  if (!C.zf) goto L_11730ad0;
  /* 11730aaa push 0x11752c14 */
  push32((uint32_t)(0x11752c14u));
  /* 11730aaf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11730ab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730ab6 mov ax, word ptr [0x11752c58] */
  AX = (r16((uint32_t)(0x11752c58)));
  /* 11730abc push eax */
  push32((uint32_t)(EAX));
  /* 11730abd push 0 */
  push32((uint32_t)(0x0u));
  /* 11730abf call 0x117332d0 */
  push32(0x11730ac4u); f_117332d0();
  /* 11730ac4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730ac7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730ac9 je 0x11730ad0 */
  if (C.zf) goto L_11730ad0;
  /* 11730acb jmp 0x11730d92 */
  goto L_11730d92;
L_11730ad0:;
  /* 11730ad0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11730ad2 push 0x1174e10c */
  push32((uint32_t)(0x1174e10cu));
  /* 11730ad7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730ad9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11730ade call 0x11723c00 */
  push32(0x11730ae3u); f_11723c00();
  /* 11730ae3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730ae6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11730ae9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11730aeb push 0x1174e10c */
  push32((uint32_t)(0x1174e10cu));
  /* 11730af0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730af2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11730af7 call 0x11723c00 */
  push32(0x11730afcu); f_11723c00();
  /* 11730afc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730aff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11730b02 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11730b04 push 0x1174e10c */
  push32((uint32_t)(0x1174e10cu));
  /* 11730b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730b0b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11730b10 call 0x11723c00 */
  push32(0x11730b15u); f_11723c00();
  /* 11730b15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730b18 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11730b1b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11730b1d push 0x1174e10c */
  push32((uint32_t)(0x1174e10cu));
  /* 11730b22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730b24 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11730b29 call 0x11723c00 */
  push32(0x11730b2eu); f_11723c00();
  /* 11730b2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730b31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11730b34 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730b38 je 0x11730b4c */
  if (C.zf) goto L_11730b4c;
  /* 11730b3a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730b3e je 0x11730b4c */
  if (C.zf) goto L_11730b4c;
  /* 11730b40 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730b44 je 0x11730b4c */
  if (C.zf) goto L_11730b4c;
  /* 11730b46 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730b4a jne 0x11730b51 */
  if (!C.zf) goto L_11730b51;
L_11730b4c:;
  /* 11730b4c jmp 0x11730d92 */
  goto L_11730d92;
L_11730b51:;
  /* 11730b51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11730b54 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11730b57 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11730b5e jmp 0x11730b69 */
  goto L_11730b69;
L_11730b60:;
  /* 11730b60 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11730b63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730b66 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11730b69:;
  /* 11730b69 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730b70 jge 0x11730b85 */
  if ((C.sf==C.of)) goto L_11730b85;
  /* 11730b72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730b75 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11730b78 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11730b7a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730b7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730b80 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11730b83 jmp 0x11730b60 */
  goto L_11730b60;
L_11730b85:;
  /* 11730b85 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11730b88 push eax */
  push32((uint32_t)(EAX));
  /* 11730b89 mov ecx, dword ptr [0x11752c14] */
  ECX = (r32((uint32_t)(0x11752c14)));
  /* 11730b8f push ecx */
  push32((uint32_t)(ECX));
  /* 11730b90 call dword ptr [0x11755380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755380))), 0x11730b96u);
  /* 11730b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730b98 jne 0x11730b9f */
  if (!C.zf) goto L_11730b9f;
  /* 11730b9a jmp 0x11730d92 */
  goto L_11730d92;
L_11730b9f:;
  /* 11730b9f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730ba3 jbe 0x11730baa */
  if ((C.cf||C.zf)) goto L_11730baa;
  /* 11730ba5 jmp 0x11730d92 */
  goto L_11730d92;
L_11730baa:;
  /* 11730baa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11730bad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11730bb3 mov dword ptr [0x11751144], edx */
  w32((uint32_t)(0x11751144), (EDX));
  /* 11730bb9 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730bc0 jle 0x11730c19 */
  if ((C.zf||C.sf!=C.of)) goto L_11730c19;
  /* 11730bc2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11730bc5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11730bc8 jmp 0x11730bd3 */
  goto L_11730bd3;
L_11730bca:;
  /* 11730bca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730bcd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730bd0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11730bd3:;
  /* 11730bd3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730bd8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11730bda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730bdc je 0x11730c19 */
  if (C.zf) goto L_11730c19;
  /* 11730bde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730be1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11730be3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11730be6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11730be8 je 0x11730c19 */
  if (C.zf) goto L_11730c19;
  /* 11730bea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730bed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11730bef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11730bf1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11730bf4 jmp 0x11730bff */
  goto L_11730bff;
L_11730bf6:;
  /* 11730bf6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11730bf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730bfc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11730bff:;
  /* 11730bff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730c02 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11730c04 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11730c07 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730c0a jg 0x11730c17 */
  if ((!C.zf&&C.sf==C.of)) goto L_11730c17;
  /* 11730c0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11730c0f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c12 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11730c15 jmp 0x11730bf6 */
  goto L_11730bf6;
L_11730c17:;
  /* 11730c17 jmp 0x11730bca */
  goto L_11730bca;
L_11730c19:;
  /* 11730c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11730c1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11730c1f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730c22 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c25 push eax */
  push32((uint32_t)(EAX));
  /* 11730c26 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11730c2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11730c2e push ecx */
  push32((uint32_t)(ECX));
  /* 11730c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11730c31 call 0x1172d5a0 */
  push32(0x11730c36u); f_1172d5a0();
  /* 11730c36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730c3b jne 0x11730c42 */
  if (!C.zf) goto L_11730c42;
  /* 11730c3d jmp 0x11730d92 */
  goto L_11730d92;
L_11730c42:;
  /* 11730c42 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730c45 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 11730c4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11730c4d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11730c50 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11730c57 jmp 0x11730c62 */
  goto L_11730c62;
L_11730c59:;
  /* 11730c59 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11730c5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c5f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11730c62:;
  /* 11730c62 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730c69 jge 0x11730c80 */
  if ((C.sf==C.of)) goto L_11730c80;
  /* 11730c6b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11730c6e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11730c72 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11730c75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11730c78 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c7b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11730c7e jmp 0x11730c59 */
  goto L_11730c59;
L_11730c80:;
  /* 11730c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11730c84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11730c87 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c8a push edx */
  push32((uint32_t)(EDX));
  /* 11730c8b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11730c90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11730c93 push eax */
  push32((uint32_t)(EAX));
  /* 11730c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11730c96 call 0x11733570 */
  push32(0x11730c9bu); f_11733570();
  /* 11730c9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730ca0 jne 0x11730ca7 */
  if (!C.zf) goto L_11730ca7;
  /* 11730ca2 jmp 0x11730d92 */
  goto L_11730d92;
L_11730ca7:;
  /* 11730ca7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11730caa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11730caf cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730cb6 jle 0x11730d13 */
  if ((C.zf||C.sf!=C.of)) goto L_11730d13;
  /* 11730cb8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 11730cbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11730cbe jmp 0x11730cc9 */
  goto L_11730cc9;
L_11730cc0:;
  /* 11730cc0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730cc3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730cc6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11730cc9:;
  /* 11730cc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730ccc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11730cce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11730cd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11730cd2 je 0x11730d13 */
  if (C.zf) goto L_11730d13;
  /* 11730cd4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730cd7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11730cd9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11730cdc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11730cde je 0x11730d13 */
  if (C.zf) goto L_11730d13;
  /* 11730ce0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730ce5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11730ce7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11730cea jmp 0x11730cf5 */
  goto L_11730cf5;
L_11730cec:;
  /* 11730cec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11730cef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730cf2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11730cf5:;
  /* 11730cf5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11730cf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730cfa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11730cfd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730d00 jg 0x11730d11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11730d11;
  /* 11730d02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11730d05 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730d08 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 11730d0f jmp 0x11730cec */
  goto L_11730cec;
L_11730d11:;
  /* 11730d11 jmp 0x11730cc0 */
  goto L_11730cc0;
L_11730d13:;
  /* 11730d13 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730d16 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730d19 mov dword ptr [0x11750f38], eax */
  w32((uint32_t)(0x11750f38), (EAX));
  /* 11730d1e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11730d21 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730d24 mov dword ptr [0x11750f3c], ecx */
  w32((uint32_t)(0x11750f3c), (ECX));
  /* 11730d2a cmp dword ptr [0x11752c44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730d31 je 0x11730d44 */
  if (C.zf) goto L_11730d44;
  /* 11730d33 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730d35 mov edx, dword ptr [0x11752c44] */
  EDX = (r32((uint32_t)(0x11752c44)));
  /* 11730d3b push edx */
  push32((uint32_t)(EDX));
  /* 11730d3c call 0x11724690 */
  push32(0x11730d41u); f_11724690();
  /* 11730d41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730d44:;
  /* 11730d44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730d47 mov dword ptr [0x11752c44], eax */
  w32((uint32_t)(0x11752c44), (EAX));
  /* 11730d4c cmp dword ptr [0x11752c48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730d53 je 0x11730d66 */
  if (C.zf) goto L_11730d66;
  /* 11730d55 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730d57 mov ecx, dword ptr [0x11752c48] */
  ECX = (r32((uint32_t)(0x11752c48)));
  /* 11730d5d push ecx */
  push32((uint32_t)(ECX));
  /* 11730d5e call 0x11724690 */
  push32(0x11730d63u); f_11724690();
  /* 11730d63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730d66:;
  /* 11730d66 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11730d69 mov dword ptr [0x11752c48], edx */
  w32((uint32_t)(0x11752c48), (EDX));
  /* 11730d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11730d71 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11730d74 push eax */
  push32((uint32_t)(EAX));
  /* 11730d75 call 0x11724690 */
  push32(0x11730d7au); f_11724690();
  /* 11730d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11730d7f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11730d82 push ecx */
  push32((uint32_t)(ECX));
  /* 11730d83 call 0x11724690 */
  push32(0x11730d88u); f_11724690();
  /* 11730d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730d8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730d8d jmp 0x11730e1c */
  goto L_11730e1c;
L_11730d92:;
  /* 11730d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730d94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11730d97 push edx */
  push32((uint32_t)(EDX));
  /* 11730d98 call 0x11724690 */
  push32(0x11730d9du); f_11724690();
  /* 11730d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730da2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11730da5 push eax */
  push32((uint32_t)(EAX));
  /* 11730da6 call 0x11724690 */
  push32(0x11730dabu); f_11724690();
  /* 11730dab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730dae push 2 */
  push32((uint32_t)(0x2u));
  /* 11730db0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11730db3 push ecx */
  push32((uint32_t)(ECX));
  /* 11730db4 call 0x11724690 */
  push32(0x11730db9u); f_11724690();
  /* 11730db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730dbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11730dbe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11730dc1 push edx */
  push32((uint32_t)(EDX));
  /* 11730dc2 call 0x11724690 */
  push32(0x11730dc7u); f_11724690();
  /* 11730dc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730dca mov eax, 1 */
  EAX = (0x1u);
  /* 11730dcf jmp 0x11730e1c */
  goto L_11730e1c;
L_11730dd1:;
  /* 11730dd1 mov dword ptr [0x11750f38], 0x11750f42 */
  w32((uint32_t)(0x11750f38), (0x11750f42u));
  /* 11730ddb mov dword ptr [0x11750f3c], 0x11750f42 */
  w32((uint32_t)(0x11750f3c), (0x11750f42u));
  /* 11730de5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730de7 mov eax, dword ptr [0x11752c44] */
  EAX = (r32((uint32_t)(0x11752c44)));
  /* 11730dec push eax */
  push32((uint32_t)(EAX));
  /* 11730ded call 0x11724690 */
  push32(0x11730df2u); f_11724690();
  /* 11730df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730df5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11730df7 mov ecx, dword ptr [0x11752c48] */
  ECX = (r32((uint32_t)(0x11752c48)));
  /* 11730dfd push ecx */
  push32((uint32_t)(ECX));
  /* 11730dfe call 0x11724690 */
  push32(0x11730e03u); f_11724690();
  /* 11730e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730e06 mov dword ptr [0x11752c44], 0 */
  w32((uint32_t)(0x11752c44), (0x0u));
  /* 11730e10 mov dword ptr [0x11752c48], 0 */
  w32((uint32_t)(0x11752c48), (0x0u));
  /* 11730e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11730e1c:;
  /* 11730e1c mov esp, ebp */
  ESP = (EBP);
  /* 11730e1e pop ebp */
  EBP = (pop32());
  /* 11730e1f ret  */
  ESPCHK(0x11730a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x11730e20 (7 bytes, 5 insns) */
void f_11730e20(void) {
  FTRACE(0x11730e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11730e21 mov ebp, esp */
  EBP = (ESP);
  /* 11730e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730e25 pop ebp */
  EBP = (pop32());
  /* 11730e26 ret  */
  ESPCHK(0x11730e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x11730e30 (62 bytes, 35 insns) */
void f_11730e30(void) {
  FTRACE(0x11730e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11730e31 mov ebp, esp */
  EBP = (ESP);
  /* 11730e33 push esi */
  push32((uint32_t)(ESI));
  /* 11730e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730e36 push eax */
  push32((uint32_t)(EAX));
  /* 11730e37 push eax */
  push32((uint32_t)(EAX));
  /* 11730e38 push eax */
  push32((uint32_t)(EAX));
  /* 11730e39 push eax */
  push32((uint32_t)(EAX));
  /* 11730e3a push eax */
  push32((uint32_t)(EAX));
  /* 11730e3b push eax */
  push32((uint32_t)(EAX));
  /* 11730e3c push eax */
  push32((uint32_t)(EAX));
  /* 11730e3d push eax */
  push32((uint32_t)(EAX));
  /* 11730e3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11730e41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11730e44:;
  /* 11730e44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11730e46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11730e48 je 0x11730e51 */
  if (C.zf) goto L_11730e51;
  /* 11730e4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11730e4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11730e4b");
  /* 11730e4f jmp 0x11730e44 */
  goto L_11730e44;
L_11730e51:;
  /* 11730e51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11730e54 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11730e57 nop  */
  /* nop */
L_11730e58:;
  /* 11730e58 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11730e59 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11730e5b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11730e5d je 0x11730e66 */
  if (C.zf) goto L_11730e66;
  /* 11730e5f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11730e60 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11730e60");
  /* 11730e64 jae 0x11730e58 */
  if (!C.cf) goto L_11730e58;
L_11730e66:;
  /* 11730e66 mov eax, ecx */
  EAX = (ECX);
  /* 11730e68 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730e6b pop esi */
  ESI = (pop32());
  /* 11730e6c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11730e6d ret  */
  ESPCHK(0x11730e30u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11730e70 (56 bytes, 31 insns) */
void f_11730e70(void) {
  FTRACE(0x11730e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11730e71 mov ebp, esp */
  EBP = (ESP);
  /* 11730e73 push edi */
  push32((uint32_t)(EDI));
  /* 11730e74 push esi */
  push32((uint32_t)(ESI));
  /* 11730e75 push ebx */
  push32((uint32_t)(EBX));
  /* 11730e76 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11730e79 jecxz 0x11730ea1 */
  x86_unimpl("jecxz @ 0x11730e79");
  /* 11730e7b mov ebx, ecx */
  EBX = (ECX);
  /* 11730e7d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11730e80 mov esi, edi */
  ESI = (EDI);
  /* 11730e82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730e84 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11730e86 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11730e88 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730e8a mov edi, esi */
  EDI = (ESI);
  /* 11730e8c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11730e8f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11730e91 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11730e94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11730e96 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11730e99 ja 0x11730e9f */
  if ((!C.cf&&!C.zf)) goto L_11730e9f;
  /* 11730e9b je 0x11730ea1 */
  if (C.zf) goto L_11730ea1;
  /* 11730e9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11730e9e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11730e9f:;
  /* 11730e9f not ecx */
  ECX = (~(ECX));
L_11730ea1:;
  /* 11730ea1 mov eax, ecx */
  EAX = (ECX);
  /* 11730ea3 pop ebx */
  EBX = (pop32());
  /* 11730ea4 pop esi */
  ESI = (pop32());
  /* 11730ea5 pop edi */
  EDI = (pop32());
  /* 11730ea6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11730ea7 ret  */
  ESPCHK(0x11730e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010eb0 @ 0x11730eb0 (58 bytes, 32 insns) */
void f_11730eb0(void) {
  FTRACE(0x11730eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11730eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11730eb3 push esi */
  push32((uint32_t)(ESI));
  /* 11730eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11730eb6 push eax */
  push32((uint32_t)(EAX));
  /* 11730eb7 push eax */
  push32((uint32_t)(EAX));
  /* 11730eb8 push eax */
  push32((uint32_t)(EAX));
  /* 11730eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11730eba push eax */
  push32((uint32_t)(EAX));
  /* 11730ebb push eax */
  push32((uint32_t)(EAX));
  /* 11730ebc push eax */
  push32((uint32_t)(EAX));
  /* 11730ebd push eax */
  push32((uint32_t)(EAX));
  /* 11730ebe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11730ec1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11730ec4:;
  /* 11730ec4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11730ec6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11730ec8 je 0x11730ed1 */
  if (C.zf) goto L_11730ed1;
  /* 11730eca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11730ecb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11730ecb");
  /* 11730ecf jmp 0x11730ec4 */
  goto L_11730ec4;
L_11730ed1:;
  /* 11730ed1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11730ed4:;
  /* 11730ed4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11730ed6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11730ed8 je 0x11730ee4 */
  if (C.zf) goto L_11730ee4;
  /* 11730eda inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11730edb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11730edb");
  /* 11730edf jae 0x11730ed4 */
  if (!C.cf) goto L_11730ed4;
  /* 11730ee1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11730ee4:;
  /* 11730ee4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11730ee7 pop esi */
  ESI = (pop32());
  /* 11730ee8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11730ee9 ret  */
  ESPCHK(0x11730eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ef0 @ 0x11730ef0 (512 bytes, 147 insns) */
void f_11730ef0(void) {
  FTRACE(0x11730ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11730ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 11730ef1 mov ebp, esp */
  EBP = (ESP);
  /* 11730ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11730ef6 cmp dword ptr [0x11752c90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730efd jne 0x11730f22 */
  if (!C.zf) goto L_11730f22;
  /* 11730eff call 0x117319c0 */
  push32(0x11730f04u); f_117319c0();
  /* 11730f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730f06 je 0x11730f12 */
  if (C.zf) goto L_11730f12;
  /* 11730f08 mov eax, dword ptr [0x11755294] */
  EAX = (r32((uint32_t)(0x11755294)));
  /* 11730f0d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11730f10 jmp 0x11730f19 */
  goto L_11730f19;
L_11730f12:;
  /* 11730f12 mov dword ptr [ebp - 8], 0x11731a10 */
  w32((uint32_t)(EBP + -0x8), (0x11731a10u));
L_11730f19:;
  /* 11730f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11730f1c mov dword ptr [0x11752c90], ecx */
  w32((uint32_t)(0x11752c90), (ECX));
L_11730f22:;
  /* 11730f22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730f26 jne 0x11730f32 */
  if (!C.zf) goto L_11730f32;
  /* 11730f28 call 0x11731810 */
  push32(0x11730f2du); f_11731810();
  /* 11730f2d jmp 0x11730ffe */
  goto L_11730ffe;
L_11730f32:;
  /* 11730f32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730f35 mov dword ptr [0x11752c80], edx */
  w32((uint32_t)(0x11752c80), (EDX));
  /* 11730f3b cmp dword ptr [0x11752c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730f42 je 0x11730f64 */
  if (C.zf) goto L_11730f64;
  /* 11730f44 mov eax, dword ptr [0x11752c80] */
  EAX = (r32((uint32_t)(0x11752c80)));
  /* 11730f49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11730f4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11730f4e je 0x11730f64 */
  if (C.zf) goto L_11730f64;
  /* 11730f50 push 0x11752c80 */
  push32((uint32_t)(0x11752c80u));
  /* 11730f55 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11730f57 push 0x11751da0 */
  push32((uint32_t)(0x11751da0u));
  /* 11730f5c call 0x117310f0 */
  push32(0x11730f61u); f_117310f0();
  /* 11730f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730f64:;
  /* 11730f64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11730f67 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11730f6a mov dword ptr [0x11752c84], edx */
  w32((uint32_t)(0x11752c84), (EDX));
  /* 11730f70 cmp dword ptr [0x11752c84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730f77 je 0x11730f99 */
  if (C.zf) goto L_11730f99;
  /* 11730f79 mov eax, dword ptr [0x11752c84] */
  EAX = (r32((uint32_t)(0x11752c84)));
  /* 11730f7e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11730f81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11730f83 je 0x11730f99 */
  if (C.zf) goto L_11730f99;
  /* 11730f85 push 0x11752c84 */
  push32((uint32_t)(0x11752c84u));
  /* 11730f8a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11730f8c push 0x11751ce8 */
  push32((uint32_t)(0x11751ce8u));
  /* 11730f91 call 0x117310f0 */
  push32(0x11730f96u); f_117310f0();
  /* 11730f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11730f99:;
  /* 11730f99 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 11730fa3 cmp dword ptr [0x11752c80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730faa je 0x11730fdd */
  if (C.zf) goto L_11730fdd;
  /* 11730fac mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 11730fb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11730fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11730fb7 je 0x11730fdd */
  if (C.zf) goto L_11730fdd;
  /* 11730fb9 cmp dword ptr [0x11752c84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730fc0 je 0x11730fd6 */
  if (C.zf) goto L_11730fd6;
  /* 11730fc2 mov ecx, dword ptr [0x11752c84] */
  ECX = (r32((uint32_t)(0x11752c84)));
  /* 11730fc8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11730fcb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11730fcd je 0x11730fd6 */
  if (C.zf) goto L_11730fd6;
  /* 11730fcf call 0x11731180 */
  push32(0x11730fd4u); f_11731180();
  /* 11730fd4 jmp 0x11730fdb */
  goto L_11730fdb;
L_11730fd6:;
  /* 11730fd6 call 0x11731570 */
  push32(0x11730fdbu); f_11731570();
L_11730fdb:;
  /* 11730fdb jmp 0x11730ffe */
  goto L_11730ffe;
L_11730fdd:;
  /* 11730fdd cmp dword ptr [0x11752c84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11730fe4 je 0x11730ff9 */
  if (C.zf) goto L_11730ff9;
  /* 11730fe6 mov eax, dword ptr [0x11752c84] */
  EAX = (r32((uint32_t)(0x11752c84)));
  /* 11730feb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11730fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11730ff0 je 0x11730ff9 */
  if (C.zf) goto L_11730ff9;
  /* 11730ff2 call 0x11731710 */
  push32(0x11730ff7u); f_11731710();
  /* 11730ff7 jmp 0x11730ffe */
  goto L_11730ffe;
L_11730ff9:;
  /* 11730ff9 call 0x11731810 */
  push32(0x11730ffeu); f_11731810();
L_11730ffe:;
  /* 11730ffe cmp dword ptr [0x11752c88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731005 jne 0x1173100e */
  if (!C.zf) goto L_1173100e;
  /* 11731007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11731009 jmp 0x117310ec */
  goto L_117310ec;
L_1173100e:;
  /* 1173100e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731011 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731017 push edx */
  push32((uint32_t)(EDX));
  /* 11731018 call 0x11731840 */
  push32(0x1173101du); f_11731840();
  /* 1173101d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731023 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731027 je 0x1173103c */
  if (C.zf) goto L_1173103c;
  /* 11731029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173102c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731031 push eax */
  push32((uint32_t)(EAX));
  /* 11731032 call dword ptr [0x11755298] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755298))), 0x11731038u);
  /* 11731038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173103a jne 0x11731043 */
  if (!C.zf) goto L_11731043;
L_1173103c:;
  /* 1173103c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173103e jmp 0x117310ec */
  goto L_117310ec;
L_11731043:;
  /* 11731043 push 1 */
  push32((uint32_t)(0x1u));
  /* 11731045 mov ecx, dword ptr [0x11752c70] */
  ECX = (r32((uint32_t)(0x11752c70)));
  /* 1173104b push ecx */
  push32((uint32_t)(ECX));
  /* 1173104c call dword ptr [0x117552a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552a8))), 0x11731052u);
  /* 11731052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731054 jne 0x1173105d */
  if (!C.zf) goto L_1173105d;
  /* 11731056 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11731058 jmp 0x117310ec */
  goto L_117310ec;
L_1173105d:;
  /* 1173105d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731061 je 0x11731088 */
  if (C.zf) goto L_11731088;
  /* 11731063 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11731066 mov ax, word ptr [0x11752c70] */
  AX = (r16((uint32_t)(0x11752c70)));
  /* 1173106c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1173106f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11731072 mov dx, word ptr [0x11752c8c] */
  DX = (r16((uint32_t)(0x11752c8c)));
  /* 11731079 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1173107d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11731080 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11731084 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11731088:;
  /* 11731088 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173108c je 0x117310e7 */
  if (C.zf) goto L_117310e7;
  /* 1173108e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11731090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11731093 push edx */
  push32((uint32_t)(EDX));
  /* 11731094 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11731099 mov eax, dword ptr [0x11752c70] */
  EAX = (r32((uint32_t)(0x11752c70)));
  /* 1173109e push eax */
  push32((uint32_t)(EAX));
  /* 1173109f call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x117310a5u);
  /* 117310a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117310a7 jne 0x117310ad */
  if (!C.zf) goto L_117310ad;
  /* 117310a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117310ab jmp 0x117310ec */
  goto L_117310ec;
L_117310ad:;
  /* 117310ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117310af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117310b2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117310b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117310b6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 117310bb mov edx, dword ptr [0x11752c8c] */
  EDX = (r32((uint32_t)(0x11752c8c)));
  /* 117310c1 push edx */
  push32((uint32_t)(EDX));
  /* 117310c2 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x117310c8u);
  /* 117310c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117310ca jne 0x117310d0 */
  if (!C.zf) goto L_117310d0;
  /* 117310cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117310ce jmp 0x117310ec */
  goto L_117310ec;
L_117310d0:;
  /* 117310d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 117310d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117310d5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117310da push eax */
  push32((uint32_t)(EAX));
  /* 117310db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117310de push ecx */
  push32((uint32_t)(ECX));
  /* 117310df call 0x11727db0 */
  push32(0x117310e4u); f_11727db0();
  /* 117310e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117310e7:;
  /* 117310e7 mov eax, 1 */
  EAX = (0x1u);
L_117310ec:;
  /* 117310ec mov esp, ebp */
  ESP = (EBP);
  /* 117310ee pop ebp */
  EBP = (pop32());
  /* 117310ef ret  */
  ESPCHK(0x11730ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x117310f0 (130 bytes, 47 insns) */
void f_117310f0(void) {
  FTRACE(0x117310f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117310f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117310f1 mov ebp, esp */
  EBP = (ESP);
  /* 117310f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117310f6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117310fd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11731104:;
  /* 11731104 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731107 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173110a jg 0x1173116e */
  if ((!C.zf&&C.sf==C.of)) goto L_1173116e;
  /* 1173110c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731110 je 0x1173116e */
  if (C.zf) goto L_1173116e;
  /* 11731112 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731115 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731118 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11731119 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173111b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1173111d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731120 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731126 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11731129 push eax */
  push32((uint32_t)(EAX));
  /* 1173112a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173112d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1173112f push edx */
  push32((uint32_t)(EDX));
  /* 11731130 call 0x117337e0 */
  push32(0x11731135u); f_117337e0();
  /* 11731135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731138 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1173113b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173113f jne 0x11731152 */
  if (!C.zf) goto L_11731152;
  /* 11731141 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731144 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731147 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1173114b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173114e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11731150 jmp 0x1173116c */
  goto L_1173116c;
L_11731152:;
  /* 11731152 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731156 jge 0x11731163 */
  if ((C.sf==C.of)) goto L_11731163;
  /* 11731158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173115b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173115e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11731161 jmp 0x1173116c */
  goto L_1173116c;
L_11731163:;
  /* 11731163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731166 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731169 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1173116c:;
  /* 1173116c jmp 0x11731104 */
  goto L_11731104;
L_1173116e:;
  /* 1173116e mov esp, ebp */
  ESP = (EBP);
  /* 11731170 pop ebp */
  EBP = (pop32());
  /* 11731171 ret  */
  ESPCHK(0x117310f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011180 @ 0x11731180 (186 bytes, 50 insns) */
void f_11731180(void) {
  FTRACE(0x11731180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731180 push ebp */
  push32((uint32_t)(EBP));
  /* 11731181 mov ebp, esp */
  EBP = (ESP);
  /* 11731183 push ecx */
  push32((uint32_t)(ECX));
  /* 11731184 mov eax, dword ptr [0x11752c80] */
  EAX = (r32((uint32_t)(0x11752c80)));
  /* 11731189 push eax */
  push32((uint32_t)(EAX));
  /* 1173118a call 0x117280a0 */
  push32(0x1173118fu); f_117280a0();
  /* 1173118f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11731194 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731197 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1173119a mov dword ptr [0x11752c7c], ecx */
  w32((uint32_t)(0x11752c7c), (ECX));
  /* 117311a0 mov edx, dword ptr [0x11752c84] */
  EDX = (r32((uint32_t)(0x11752c84)));
  /* 117311a6 push edx */
  push32((uint32_t)(EDX));
  /* 117311a7 call 0x117280a0 */
  push32(0x117311acu); f_117280a0();
  /* 117311ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117311af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117311b1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117311b4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 117311b7 mov dword ptr [0x11752c74], ecx */
  w32((uint32_t)(0x11752c74), (ECX));
  /* 117311bd mov dword ptr [0x11752c70], 0 */
  w32((uint32_t)(0x11752c70), (0x0u));
  /* 117311c7 cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117311ce je 0x117311d9 */
  if (C.zf) goto L_117311d9;
  /* 117311d0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117311d7 jmp 0x117311eb */
  goto L_117311eb;
L_117311d9:;
  /* 117311d9 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 117311df push edx */
  push32((uint32_t)(EDX));
  /* 117311e0 call 0x11731c20 */
  push32(0x117311e5u); f_11731c20();
  /* 117311e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117311e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117311eb:;
  /* 117311eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117311ee mov dword ptr [0x11752c78], eax */
  w32((uint32_t)(0x11752c78), (EAX));
  /* 117311f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117311f5 push 0x11731240 */
  push32((uint32_t)(0x11731240u));
  /* 117311fa call dword ptr [0x1175529c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175529c))), 0x11731200u);
  /* 11731200 mov ecx, dword ptr [0x11752c88] */
  ECX = (r32((uint32_t)(0x11752c88)));
  /* 11731206 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1173120c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1173120e je 0x1173122c */
  if (C.zf) goto L_1173122c;
  /* 11731210 mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 11731216 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1173121c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1173121e je 0x1173122c */
  if (C.zf) goto L_1173122c;
  /* 11731220 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731225 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11731228 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173122a jne 0x11731236 */
  if (!C.zf) goto L_11731236;
L_1173122c:;
  /* 1173122c mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
L_11731236:;
  /* 11731236 mov esp, ebp */
  ESP = (EBP);
  /* 11731238 pop ebp */
  EBP = (pop32());
  /* 11731239 ret  */
  ESPCHK(0x11731180u, _esp0);
  ESP += 4; return;
}

/* FUN_10011240 @ 0x11731240 (804 bytes, 220 insns) */
void f_11731240(void) {
  FTRACE(0x11731240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731240 push ebp */
  push32((uint32_t)(EBP));
  /* 11731241 mov ebp, esp */
  EBP = (ESP);
  /* 11731243 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731249 push eax */
  push32((uint32_t)(EAX));
  /* 1173124a call 0x11731ba0 */
  push32(0x1173124fu); f_11731ba0();
  /* 1173124f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731252 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11731255 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11731257 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1173125a push ecx */
  push32((uint32_t)(ECX));
  /* 1173125b mov edx, dword ptr [0x11752c74] */
  EDX = (r32((uint32_t)(0x11752c74)));
  /* 11731261 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11731263 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731265 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1173126b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731271 push edx */
  push32((uint32_t)(EDX));
  /* 11731272 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731275 push eax */
  push32((uint32_t)(EAX));
  /* 11731276 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x1173127cu);
  /* 1173127c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173127e jne 0x11731294 */
  if (!C.zf) goto L_11731294;
  /* 11731280 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 1173128a mov eax, 1 */
  EAX = (0x1u);
  /* 1173128f jmp 0x1173155e */
  goto L_1173155e;
L_11731294:;
  /* 11731294 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11731297 push ecx */
  push32((uint32_t)(ECX));
  /* 11731298 mov edx, dword ptr [0x11752c84] */
  EDX = (r32((uint32_t)(0x11752c84)));
  /* 1173129e push edx */
  push32((uint32_t)(EDX));
  /* 1173129f call 0x117337e0 */
  push32(0x117312a4u); f_117337e0();
  /* 117312a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117312a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117312a9 jne 0x117313cf */
  if (!C.zf) goto L_117313cf;
  /* 117312af push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117312b1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117312b4 push eax */
  push32((uint32_t)(EAX));
  /* 117312b5 mov ecx, dword ptr [0x11752c7c] */
  ECX = (r32((uint32_t)(0x11752c7c)));
  /* 117312bb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117312bd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117312bf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 117312c5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117312cb push ecx */
  push32((uint32_t)(ECX));
  /* 117312cc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117312cf push edx */
  push32((uint32_t)(EDX));
  /* 117312d0 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x117312d6u);
  /* 117312d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117312d8 jne 0x117312ee */
  if (!C.zf) goto L_117312ee;
  /* 117312da mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 117312e4 mov eax, 1 */
  EAX = (0x1u);
  /* 117312e9 jmp 0x1173155e */
  goto L_1173155e;
L_117312ee:;
  /* 117312ee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117312f1 push eax */
  push32((uint32_t)(EAX));
  /* 117312f2 mov ecx, dword ptr [0x11752c80] */
  ECX = (r32((uint32_t)(0x11752c80)));
  /* 117312f8 push ecx */
  push32((uint32_t)(ECX));
  /* 117312f9 call 0x117337e0 */
  push32(0x117312feu); f_117337e0();
  /* 117312fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731303 jne 0x11731330 */
  if (!C.zf) goto L_11731330;
  /* 11731305 mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 1173130b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11731311 mov dword ptr [0x11752c88], edx */
  w32((uint32_t)(0x11752c88), (EDX));
  /* 11731317 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1173131a mov dword ptr [0x11752c8c], eax */
  w32((uint32_t)(0x11752c8c), (EAX));
  /* 1173131f mov ecx, dword ptr [0x11752c8c] */
  ECX = (r32((uint32_t)(0x11752c8c)));
  /* 11731325 mov dword ptr [0x11752c70], ecx */
  w32((uint32_t)(0x11752c70), (ECX));
  /* 1173132b jmp 0x117313cf */
  goto L_117313cf;
L_11731330:;
  /* 11731330 mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 11731336 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11731339 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1173133b jne 0x117313cf */
  if (!C.zf) goto L_117313cf;
  /* 11731341 cmp dword ptr [0x11752c78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731348 je 0x1173139d */
  if (C.zf) goto L_1173139d;
  /* 1173134a mov eax, dword ptr [0x11752c78] */
  EAX = (r32((uint32_t)(0x11752c78)));
  /* 1173134f push eax */
  push32((uint32_t)(EAX));
  /* 11731350 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11731353 push ecx */
  push32((uint32_t)(ECX));
  /* 11731354 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 1173135a push edx */
  push32((uint32_t)(EDX));
  /* 1173135b call 0x117338b0 */
  push32(0x11731360u); f_117338b0();
  /* 11731360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731365 jne 0x1173139d */
  if (!C.zf) goto L_1173139d;
  /* 11731367 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 1173136c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1173136e mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 11731373 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731376 mov dword ptr [0x11752c8c], ecx */
  w32((uint32_t)(0x11752c8c), (ECX));
  /* 1173137c mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 11731382 push edx */
  push32((uint32_t)(EDX));
  /* 11731383 call 0x117280a0 */
  push32(0x11731388u); f_117280a0();
  /* 11731388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173138b cmp eax, dword ptr [0x11752c78] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752c78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731391 jne 0x1173139b */
  if (!C.zf) goto L_1173139b;
  /* 11731393 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731396 mov dword ptr [0x11752c70], eax */
  w32((uint32_t)(0x11752c70), (EAX));
L_1173139b:;
  /* 1173139b jmp 0x117313cf */
  goto L_117313cf;
L_1173139d:;
  /* 1173139d mov ecx, dword ptr [0x11752c88] */
  ECX = (r32((uint32_t)(0x11752c88)));
  /* 117313a3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117313a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117313a8 jne 0x117313cf */
  if (!C.zf) goto L_117313cf;
  /* 117313aa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117313ad push edx */
  push32((uint32_t)(EDX));
  /* 117313ae call 0x117318e0 */
  push32(0x117313b3u); f_117318e0();
  /* 117313b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117313b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117313b8 je 0x117313cf */
  if (C.zf) goto L_117313cf;
  /* 117313ba mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 117313bf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 117313c1 mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 117313c6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117313c9 mov dword ptr [0x11752c8c], ecx */
  w32((uint32_t)(0x11752c8c), (ECX));
L_117313cf:;
  /* 117313cf mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 117313d5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 117313db cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117313e1 je 0x11731551 */
  if (C.zf) goto L_11731551;
  /* 117313e7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 117313e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 117313ec push eax */
  push32((uint32_t)(EAX));
  /* 117313ed mov ecx, dword ptr [0x11752c7c] */
  ECX = (r32((uint32_t)(0x11752c7c)));
  /* 117313f3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117313f5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117313f7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 117313fd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731403 push ecx */
  push32((uint32_t)(ECX));
  /* 11731404 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731407 push edx */
  push32((uint32_t)(EDX));
  /* 11731408 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x1173140eu);
  /* 1173140e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731410 jne 0x11731426 */
  if (!C.zf) goto L_11731426;
  /* 11731412 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 1173141c mov eax, 1 */
  EAX = (0x1u);
  /* 11731421 jmp 0x1173155e */
  goto L_1173155e;
L_11731426:;
  /* 11731426 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11731429 push eax */
  push32((uint32_t)(EAX));
  /* 1173142a mov ecx, dword ptr [0x11752c80] */
  ECX = (r32((uint32_t)(0x11752c80)));
  /* 11731430 push ecx */
  push32((uint32_t)(ECX));
  /* 11731431 call 0x117337e0 */
  push32(0x11731436u); f_117337e0();
  /* 11731436 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173143b jne 0x117314f0 */
  if (!C.zf) goto L_117314f0;
  /* 11731441 mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 11731447 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1173144a mov dword ptr [0x11752c88], edx */
  w32((uint32_t)(0x11752c88), (EDX));
  /* 11731450 cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731457 je 0x1173147a */
  if (C.zf) goto L_1173147a;
  /* 11731459 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 1173145e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11731461 mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 11731466 cmp dword ptr [0x11752c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173146d jne 0x11731478 */
  if (!C.zf) goto L_11731478;
  /* 1173146f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731472 mov dword ptr [0x11752c70], ecx */
  w32((uint32_t)(0x11752c70), (ECX));
L_11731478:;
  /* 11731478 jmp 0x117314ee */
  goto L_117314ee;
L_1173147a:;
  /* 1173147a cmp dword ptr [0x11752c78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731481 je 0x117314cf */
  if (C.zf) goto L_117314cf;
  /* 11731483 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 11731489 push edx */
  push32((uint32_t)(EDX));
  /* 1173148a call 0x117280a0 */
  push32(0x1173148fu); f_117280a0();
  /* 1173148f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731492 cmp eax, dword ptr [0x11752c78] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752c78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731498 jne 0x117314cf */
  if (!C.zf) goto L_117314cf;
  /* 1173149a push 1 */
  push32((uint32_t)(0x1u));
  /* 1173149c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1173149f push eax */
  push32((uint32_t)(EAX));
  /* 117314a0 call 0x11731930 */
  push32(0x117314a5u); f_11731930();
  /* 117314a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117314a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117314aa je 0x117314cd */
  if (C.zf) goto L_117314cd;
  /* 117314ac mov ecx, dword ptr [0x11752c88] */
  ECX = (r32((uint32_t)(0x11752c88)));
  /* 117314b2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117314b5 mov dword ptr [0x11752c88], ecx */
  w32((uint32_t)(0x11752c88), (ECX));
  /* 117314bb cmp dword ptr [0x11752c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117314c2 jne 0x117314cd */
  if (!C.zf) goto L_117314cd;
  /* 117314c4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117314c7 mov dword ptr [0x11752c70], edx */
  w32((uint32_t)(0x11752c70), (EDX));
L_117314cd:;
  /* 117314cd jmp 0x117314ee */
  goto L_117314ee;
L_117314cf:;
  /* 117314cf mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 117314d4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 117314d7 mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 117314dc cmp dword ptr [0x11752c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117314e3 jne 0x117314ee */
  if (!C.zf) goto L_117314ee;
  /* 117314e5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117314e8 mov dword ptr [0x11752c70], ecx */
  w32((uint32_t)(0x11752c70), (ECX));
L_117314ee:;
  /* 117314ee jmp 0x11731551 */
  goto L_11731551;
L_117314f0:;
  /* 117314f0 cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117314f7 jne 0x11731551 */
  if (!C.zf) goto L_11731551;
  /* 117314f9 cmp dword ptr [0x11752c78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731500 je 0x11731551 */
  if (C.zf) goto L_11731551;
  /* 11731502 mov edx, dword ptr [0x11752c78] */
  EDX = (r32((uint32_t)(0x11752c78)));
  /* 11731508 push edx */
  push32((uint32_t)(EDX));
  /* 11731509 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1173150c push eax */
  push32((uint32_t)(EAX));
  /* 1173150d mov ecx, dword ptr [0x11752c80] */
  ECX = (r32((uint32_t)(0x11752c80)));
  /* 11731513 push ecx */
  push32((uint32_t)(ECX));
  /* 11731514 call 0x117338b0 */
  push32(0x11731519u); f_117338b0();
  /* 11731519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173151c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173151e jne 0x11731551 */
  if (!C.zf) goto L_11731551;
  /* 11731520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11731522 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731525 push edx */
  push32((uint32_t)(EDX));
  /* 11731526 call 0x11731930 */
  push32(0x1173152bu); f_11731930();
  /* 1173152b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173152e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731530 je 0x11731551 */
  if (C.zf) goto L_11731551;
  /* 11731532 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731537 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1173153a mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 1173153f cmp dword ptr [0x11752c70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731546 jne 0x11731551 */
  if (!C.zf) goto L_11731551;
  /* 11731548 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1173154b mov dword ptr [0x11752c70], ecx */
  w32((uint32_t)(0x11752c70), (ECX));
L_11731551:;
  /* 11731551 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731556 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11731559 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1173155b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173155d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1173155e:;
  /* 1173155e mov esp, ebp */
  ESP = (EBP);
  /* 11731560 pop ebp */
  EBP = (pop32());
  /* 11731561 ret 4 */
  ESPCHK(0x11731240u, _esp0);
  ESP += 8; return;
}

/* FUN_10011570 @ 0x11731570 (116 bytes, 33 insns) */
void f_11731570(void) {
  FTRACE(0x11731570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731570 push ebp */
  push32((uint32_t)(EBP));
  /* 11731571 mov ebp, esp */
  EBP = (ESP);
  /* 11731573 push ecx */
  push32((uint32_t)(ECX));
  /* 11731574 mov eax, dword ptr [0x11752c80] */
  EAX = (r32((uint32_t)(0x11752c80)));
  /* 11731579 push eax */
  push32((uint32_t)(EAX));
  /* 1173157a call 0x117280a0 */
  push32(0x1173157fu); f_117280a0();
  /* 1173157f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731582 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11731584 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731587 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1173158a mov dword ptr [0x11752c7c], ecx */
  w32((uint32_t)(0x11752c7c), (ECX));
  /* 11731590 cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731597 je 0x117315a2 */
  if (C.zf) goto L_117315a2;
  /* 11731599 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 117315a0 jmp 0x117315b4 */
  goto L_117315b4;
L_117315a2:;
  /* 117315a2 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 117315a8 push edx */
  push32((uint32_t)(EDX));
  /* 117315a9 call 0x11731c20 */
  push32(0x117315aeu); f_11731c20();
  /* 117315ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117315b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117315b4:;
  /* 117315b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117315b7 mov dword ptr [0x11752c78], eax */
  w32((uint32_t)(0x11752c78), (EAX));
  /* 117315bc push 1 */
  push32((uint32_t)(0x1u));
  /* 117315be push 0x117315f0 */
  push32((uint32_t)(0x117315f0u));
  /* 117315c3 call dword ptr [0x1175529c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175529c))), 0x117315c9u);
  /* 117315c9 mov ecx, dword ptr [0x11752c88] */
  ECX = (r32((uint32_t)(0x11752c88)));
  /* 117315cf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117315d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117315d4 jne 0x117315e0 */
  if (!C.zf) goto L_117315e0;
  /* 117315d6 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
L_117315e0:;
  /* 117315e0 mov esp, ebp */
  ESP = (EBP);
  /* 117315e2 pop ebp */
  EBP = (pop32());
  /* 117315e3 ret  */
  ESPCHK(0x11731570u, _esp0);
  ESP += 4; return;
}

/* FUN_100115f0 @ 0x117315f0 (287 bytes, 86 insns) */
void f_117315f0(void) {
  FTRACE(0x117315f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117315f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117315f1 mov ebp, esp */
  EBP = (ESP);
  /* 117315f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117315f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117315f9 push eax */
  push32((uint32_t)(EAX));
  /* 117315fa call 0x11731ba0 */
  push32(0x117315ffu); f_11731ba0();
  /* 117315ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731602 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11731605 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11731607 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1173160a push ecx */
  push32((uint32_t)(ECX));
  /* 1173160b mov edx, dword ptr [0x11752c7c] */
  EDX = (r32((uint32_t)(0x11752c7c)));
  /* 11731611 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11731613 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731615 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1173161b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731621 push edx */
  push32((uint32_t)(EDX));
  /* 11731622 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731625 push eax */
  push32((uint32_t)(EAX));
  /* 11731626 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x1173162cu);
  /* 1173162c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173162e jne 0x11731644 */
  if (!C.zf) goto L_11731644;
  /* 11731630 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 1173163a mov eax, 1 */
  EAX = (0x1u);
  /* 1173163f jmp 0x11731709 */
  goto L_11731709;
L_11731644:;
  /* 11731644 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11731647 push ecx */
  push32((uint32_t)(ECX));
  /* 11731648 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 1173164e push edx */
  push32((uint32_t)(EDX));
  /* 1173164f call 0x117337e0 */
  push32(0x11731654u); f_117337e0();
  /* 11731654 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731659 jne 0x11731699 */
  if (!C.zf) goto L_11731699;
  /* 1173165b cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731662 jne 0x11731676 */
  if (!C.zf) goto L_11731676;
  /* 11731664 push 1 */
  push32((uint32_t)(0x1u));
  /* 11731666 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731669 push eax */
  push32((uint32_t)(EAX));
  /* 1173166a call 0x11731930 */
  push32(0x1173166fu); f_11731930();
  /* 1173166f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731674 je 0x11731697 */
  if (C.zf) goto L_11731697;
L_11731676:;
  /* 11731676 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731679 mov dword ptr [0x11752c8c], ecx */
  w32((uint32_t)(0x11752c8c), (ECX));
  /* 1173167f mov edx, dword ptr [0x11752c8c] */
  EDX = (r32((uint32_t)(0x11752c8c)));
  /* 11731685 mov dword ptr [0x11752c70], edx */
  w32((uint32_t)(0x11752c70), (EDX));
  /* 1173168b mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731690 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11731692 mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
L_11731697:;
  /* 11731697 jmp 0x117316fc */
  goto L_117316fc;
L_11731699:;
  /* 11731699 cmp dword ptr [0x11752c7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117316a0 jne 0x117316fc */
  if (!C.zf) goto L_117316fc;
  /* 117316a2 cmp dword ptr [0x11752c78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117316a9 je 0x117316fc */
  if (C.zf) goto L_117316fc;
  /* 117316ab mov ecx, dword ptr [0x11752c78] */
  ECX = (r32((uint32_t)(0x11752c78)));
  /* 117316b1 push ecx */
  push32((uint32_t)(ECX));
  /* 117316b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 117316b5 push edx */
  push32((uint32_t)(EDX));
  /* 117316b6 mov eax, dword ptr [0x11752c80] */
  EAX = (r32((uint32_t)(0x11752c80)));
  /* 117316bb push eax */
  push32((uint32_t)(EAX));
  /* 117316bc call 0x117338b0 */
  push32(0x117316c1u); f_117338b0();
  /* 117316c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117316c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117316c6 jne 0x117316fc */
  if (!C.zf) goto L_117316fc;
  /* 117316c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117316ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117316cd push ecx */
  push32((uint32_t)(ECX));
  /* 117316ce call 0x11731930 */
  push32(0x117316d3u); f_11731930();
  /* 117316d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117316d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117316d8 je 0x117316fc */
  if (C.zf) goto L_117316fc;
  /* 117316da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117316dd mov dword ptr [0x11752c8c], edx */
  w32((uint32_t)(0x11752c8c), (EDX));
  /* 117316e3 mov eax, dword ptr [0x11752c8c] */
  EAX = (r32((uint32_t)(0x11752c8c)));
  /* 117316e8 mov dword ptr [0x11752c70], eax */
  w32((uint32_t)(0x11752c70), (EAX));
  /* 117316ed mov ecx, dword ptr [0x11752c88] */
  ECX = (r32((uint32_t)(0x11752c88)));
  /* 117316f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117316f6 mov dword ptr [0x11752c88], ecx */
  w32((uint32_t)(0x11752c88), (ECX));
L_117316fc:;
  /* 117316fc mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731701 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11731704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11731706 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731708 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11731709:;
  /* 11731709 mov esp, ebp */
  ESP = (EBP);
  /* 1173170b pop ebp */
  EBP = (pop32());
  /* 1173170c ret 4 */
  ESPCHK(0x117315f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011710 @ 0x11731710 (69 bytes, 20 insns) */
void f_11731710(void) {
  FTRACE(0x11731710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731710 push ebp */
  push32((uint32_t)(EBP));
  /* 11731711 mov ebp, esp */
  EBP = (ESP);
  /* 11731713 mov eax, dword ptr [0x11752c84] */
  EAX = (r32((uint32_t)(0x11752c84)));
  /* 11731718 push eax */
  push32((uint32_t)(EAX));
  /* 11731719 call 0x117280a0 */
  push32(0x1173171eu); f_117280a0();
  /* 1173171e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731721 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11731723 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731726 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11731729 mov dword ptr [0x11752c74], ecx */
  w32((uint32_t)(0x11752c74), (ECX));
  /* 1173172f push 1 */
  push32((uint32_t)(0x1u));
  /* 11731731 push 0x11731760 */
  push32((uint32_t)(0x11731760u));
  /* 11731736 call dword ptr [0x1175529c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175529c))), 0x1173173cu);
  /* 1173173c mov edx, dword ptr [0x11752c88] */
  EDX = (r32((uint32_t)(0x11752c88)));
  /* 11731742 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11731745 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11731747 jne 0x11731753 */
  if (!C.zf) goto L_11731753;
  /* 11731749 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
L_11731753:;
  /* 11731753 pop ebp */
  EBP = (pop32());
  /* 11731754 ret  */
  ESPCHK(0x11731710u, _esp0);
  ESP += 4; return;
}

/* FUN_10011760 @ 0x11731760 (172 bytes, 54 insns) */
void f_11731760(void) {
  FTRACE(0x11731760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731760 push ebp */
  push32((uint32_t)(EBP));
  /* 11731761 mov ebp, esp */
  EBP = (ESP);
  /* 11731763 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731769 push eax */
  push32((uint32_t)(EAX));
  /* 1173176a call 0x11731ba0 */
  push32(0x1173176fu); f_11731ba0();
  /* 1173176f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731772 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11731775 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11731777 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1173177a push ecx */
  push32((uint32_t)(ECX));
  /* 1173177b mov edx, dword ptr [0x11752c74] */
  EDX = (r32((uint32_t)(0x11752c74)));
  /* 11731781 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11731783 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731785 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1173178b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731791 push edx */
  push32((uint32_t)(EDX));
  /* 11731792 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11731795 push eax */
  push32((uint32_t)(EAX));
  /* 11731796 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x1173179cu);
  /* 1173179c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173179e jne 0x117317b1 */
  if (!C.zf) goto L_117317b1;
  /* 117317a0 mov dword ptr [0x11752c88], 0 */
  w32((uint32_t)(0x11752c88), (0x0u));
  /* 117317aa mov eax, 1 */
  EAX = (0x1u);
  /* 117317af jmp 0x11731806 */
  goto L_11731806;
L_117317b1:;
  /* 117317b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 117317b4 push ecx */
  push32((uint32_t)(ECX));
  /* 117317b5 mov edx, dword ptr [0x11752c84] */
  EDX = (r32((uint32_t)(0x11752c84)));
  /* 117317bb push edx */
  push32((uint32_t)(EDX));
  /* 117317bc call 0x117337e0 */
  push32(0x117317c1u); f_117337e0();
  /* 117317c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117317c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117317c6 jne 0x117317f9 */
  if (!C.zf) goto L_117317f9;
  /* 117317c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117317cb push eax */
  push32((uint32_t)(EAX));
  /* 117317cc call 0x117318e0 */
  push32(0x117317d1u); f_117318e0();
  /* 117317d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117317d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117317d6 je 0x117317f9 */
  if (C.zf) goto L_117317f9;
  /* 117317d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 117317db mov dword ptr [0x11752c8c], ecx */
  w32((uint32_t)(0x11752c8c), (ECX));
  /* 117317e1 mov edx, dword ptr [0x11752c8c] */
  EDX = (r32((uint32_t)(0x11752c8c)));
  /* 117317e7 mov dword ptr [0x11752c70], edx */
  w32((uint32_t)(0x11752c70), (EDX));
  /* 117317ed mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 117317f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 117317f4 mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
L_117317f9:;
  /* 117317f9 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 117317fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11731801 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11731803 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731805 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11731806:;
  /* 11731806 mov esp, ebp */
  ESP = (EBP);
  /* 11731808 pop ebp */
  EBP = (pop32());
  /* 11731809 ret 4 */
  ESPCHK(0x11731760u, _esp0);
  ESP += 8; return;
}

/* FUN_10011810 @ 0x11731810 (43 bytes, 11 insns) */
void f_11731810(void) {
  FTRACE(0x11731810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731810 push ebp */
  push32((uint32_t)(EBP));
  /* 11731811 mov ebp, esp */
  EBP = (ESP);
  /* 11731813 mov eax, dword ptr [0x11752c88] */
  EAX = (r32((uint32_t)(0x11752c88)));
  /* 11731818 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1173181d mov dword ptr [0x11752c88], eax */
  w32((uint32_t)(0x11752c88), (EAX));
  /* 11731822 call dword ptr [0x1175528c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175528c))), 0x11731828u);
  /* 11731828 mov dword ptr [0x11752c8c], eax */
  w32((uint32_t)(0x11752c8c), (EAX));
  /* 1173182d mov ecx, dword ptr [0x11752c8c] */
  ECX = (r32((uint32_t)(0x11752c8c)));
  /* 11731833 mov dword ptr [0x11752c70], ecx */
  w32((uint32_t)(0x11752c70), (ECX));
  /* 11731839 pop ebp */
  EBP = (pop32());
  /* 1173183a ret  */
  ESPCHK(0x11731810u, _esp0);
  ESP += 4; return;
}

/* FUN_10011840 @ 0x11731840 (155 bytes, 57 insns) */
void f_11731840(void) {
  FTRACE(0x11731840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731840 push ebp */
  push32((uint32_t)(EBP));
  /* 11731841 mov ebp, esp */
  EBP = (ESP);
  /* 11731843 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173184a je 0x1173186b */
  if (C.zf) goto L_1173186b;
  /* 1173184c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173184f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11731852 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11731854 je 0x1173186b */
  if (C.zf) goto L_1173186b;
  /* 11731856 push 0x1174e79c */
  push32((uint32_t)(0x1174e79cu));
  /* 1173185b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173185e push edx */
  push32((uint32_t)(EDX));
  /* 1173185f call 0x1172b090 */
  push32(0x11731864u); f_1172b090();
  /* 11731864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731869 jne 0x11731893 */
  if (!C.zf) goto L_11731893;
L_1173186b:;
  /* 1173186b push 8 */
  push32((uint32_t)(0x8u));
  /* 1173186d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11731870 push eax */
  push32((uint32_t)(EAX));
  /* 11731871 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11731876 mov ecx, dword ptr [0x11752c8c] */
  ECX = (r32((uint32_t)(0x11752c8c)));
  /* 1173187c push ecx */
  push32((uint32_t)(ECX));
  /* 1173187d call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x11731883u);
  /* 11731883 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731885 jne 0x1173188b */
  if (!C.zf) goto L_1173188b;
  /* 11731887 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11731889 jmp 0x117318d7 */
  goto L_117318d7;
L_1173188b:;
  /* 1173188b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1173188e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11731891 jmp 0x117318cb */
  goto L_117318cb;
L_11731893:;
  /* 11731893 push 0x1174e798 */
  push32((uint32_t)(0x1174e798u));
  /* 11731898 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173189b push eax */
  push32((uint32_t)(EAX));
  /* 1173189c call 0x1172b090 */
  push32(0x117318a1u); f_1172b090();
  /* 117318a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117318a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117318a6 jne 0x117318cb */
  if (!C.zf) goto L_117318cb;
  /* 117318a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 117318aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 117318ad push ecx */
  push32((uint32_t)(ECX));
  /* 117318ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 117318b0 mov edx, dword ptr [0x11752c8c] */
  EDX = (r32((uint32_t)(0x11752c8c)));
  /* 117318b6 push edx */
  push32((uint32_t)(EDX));
  /* 117318b7 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x117318bdu);
  /* 117318bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117318bf jne 0x117318c5 */
  if (!C.zf) goto L_117318c5;
  /* 117318c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117318c3 jmp 0x117318d7 */
  goto L_117318d7;
L_117318c5:;
  /* 117318c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117318c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117318cb:;
  /* 117318cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117318ce push ecx */
  push32((uint32_t)(ECX));
  /* 117318cf call 0x117339c0 */
  push32(0x117318d4u); f_117339c0();
  /* 117318d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117318d7:;
  /* 117318d7 mov esp, ebp */
  ESP = (EBP);
  /* 117318d9 pop ebp */
  EBP = (pop32());
  /* 117318da ret  */
  ESPCHK(0x11731840u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x117318e0 (79 bytes, 26 insns) */
void f_117318e0(void) {
  FTRACE(0x117318e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117318e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117318e1 mov ebp, esp */
  EBP = (ESP);
  /* 117318e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117318e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 117318ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 117318ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117318f5 jmp 0x11731900 */
  goto L_11731900;
L_117318f7:;
  /* 117318f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117318fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117318fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11731900:;
  /* 11731900 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731904 jae 0x11731926 */
  if (!C.cf) goto L_11731926;
  /* 11731906 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731909 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1173190f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731912 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11731914 mov cx, word ptr [eax*2 + 0x11751cd4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11751cd4)));
  /* 1173191c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173191e jne 0x11731924 */
  if (!C.zf) goto L_11731924;
  /* 11731920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11731922 jmp 0x1173192b */
  goto L_1173192b;
L_11731924:;
  /* 11731924 jmp 0x117318f7 */
  goto L_117318f7;
L_11731926:;
  /* 11731926 mov eax, 1 */
  EAX = (0x1u);
L_1173192b:;
  /* 1173192b mov esp, ebp */
  ESP = (EBP);
  /* 1173192d pop ebp */
  EBP = (pop32());
  /* 1173192e ret  */
  ESPCHK(0x117318e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011930 @ 0x11731930 (135 bytes, 48 insns) */
void f_11731930(void) {
  FTRACE(0x11731930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731930 push ebp */
  push32((uint32_t)(EBP));
  /* 11731931 mov ebp, esp */
  EBP = (ESP);
  /* 11731933 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731936 push esi */
  push32((uint32_t)(ESI));
  /* 11731937 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173193a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173193f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731944 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731949 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1173194c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731954 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11731956 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11731959 push ecx */
  push32((uint32_t)(ECX));
  /* 1173195a push 1 */
  push32((uint32_t)(0x1u));
  /* 1173195c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173195f push edx */
  push32((uint32_t)(EDX));
  /* 11731960 call dword ptr [0x11752c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752c90))), 0x11731966u);
  /* 11731966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731968 jne 0x1173196e */
  if (!C.zf) goto L_1173196e;
  /* 1173196a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173196c jmp 0x117319b2 */
  goto L_117319b2;
L_1173196e:;
  /* 1173196e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11731971 push eax */
  push32((uint32_t)(EAX));
  /* 11731972 call 0x11731ba0 */
  push32(0x11731977u); f_11731ba0();
  /* 11731977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173197a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173197d je 0x117319ad */
  if (C.zf) goto L_117319ad;
  /* 1173197f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731983 je 0x117319ad */
  if (C.zf) goto L_117319ad;
  /* 11731985 mov ecx, dword ptr [0x11752c80] */
  ECX = (r32((uint32_t)(0x11752c80)));
  /* 1173198b push ecx */
  push32((uint32_t)(ECX));
  /* 1173198c call 0x11731c20 */
  push32(0x11731991u); f_11731c20();
  /* 11731991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731994 mov esi, eax */
  ESI = (EAX);
  /* 11731996 mov edx, dword ptr [0x11752c80] */
  EDX = (r32((uint32_t)(0x11752c80)));
  /* 1173199c push edx */
  push32((uint32_t)(EDX));
  /* 1173199d call 0x117280a0 */
  push32(0x117319a2u); f_117280a0();
  /* 117319a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117319a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117319a7 jne 0x117319ad */
  if (!C.zf) goto L_117319ad;
  /* 117319a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117319ab jmp 0x117319b2 */
  goto L_117319b2;
L_117319ad:;
  /* 117319ad mov eax, 1 */
  EAX = (0x1u);
L_117319b2:;
  /* 117319b2 pop esi */
  ESI = (pop32());
  /* 117319b3 mov esp, ebp */
  ESP = (EBP);
  /* 117319b5 pop ebp */
  EBP = (pop32());
  /* 117319b6 ret  */
  ESPCHK(0x11731930u, _esp0);
  ESP += 4; return;
}

/* FUN_100119c0 @ 0x117319c0 (77 bytes, 18 insns) */
void f_117319c0(void) {
  FTRACE(0x117319c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117319c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117319c1 mov ebp, esp */
  EBP = (ESP);
  /* 117319c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117319c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 117319d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 117319d9 push eax */
  push32((uint32_t)(EAX));
  /* 117319da call dword ptr [0x11755288] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755288))), 0x117319e0u);
  /* 117319e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117319e2 je 0x117319f9 */
  if (C.zf) goto L_117319f9;
  /* 117319e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117319eb jne 0x117319f9 */
  if (!C.zf) goto L_117319f9;
  /* 117319ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 117319f7 jmp 0x11731a03 */
  goto L_11731a03;
L_117319f9:;
  /* 117319f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11731a03:;
  /* 11731a03 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11731a09 mov esp, ebp */
  ESP = (EBP);
  /* 11731a0b pop ebp */
  EBP = (pop32());
  /* 11731a0c ret  */
  ESPCHK(0x117319c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11731a10 (388 bytes, 118 insns) */
void f_11731a10(void) {
  FTRACE(0x11731a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11731a11 mov ebp, esp */
  EBP = (ESP);
  /* 11731a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731a16 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11731a1d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11731a24 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11731a2b:;
  /* 11731a2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731a2e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a31 jg 0x11731b78 */
  if ((!C.zf&&C.sf==C.of)) goto L_11731b78;
  /* 11731a37 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731a3a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731a3d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11731a3e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731a40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11731a42 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11731a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731a48 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731a4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731a4e cmp edx, dword ptr [ecx + 0x11751830] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11751830))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a54 jne 0x11731b4e */
  if (!C.zf) goto L_11731b4e;
  /* 11731a5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11731a5d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11731a60 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a64 ja 0x11731a87 */
  if ((!C.cf&&!C.zf)) goto L_11731a87;
  /* 11731a66 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a6a je 0x11731af9 */
  if (C.zf) goto L_11731af9;
  /* 11731a70 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a74 je 0x11731aa4 */
  if (C.zf) goto L_11731aa4;
  /* 11731a76 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a7a je 0x11731ac6 */
  if (C.zf) goto L_11731ac6;
  /* 11731a7c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a80 je 0x11731ae8 */
  if (C.zf) goto L_11731ae8;
  /* 11731a82 jmp 0x11731b18 */
  goto L_11731b18;
L_11731a87:;
  /* 11731a87 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a8e je 0x11731ab5 */
  if (C.zf) goto L_11731ab5;
  /* 11731a90 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731a97 je 0x11731ad7 */
  if (C.zf) goto L_11731ad7;
  /* 11731a99 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731aa0 je 0x11731b0a */
  if (C.zf) goto L_11731b0a;
  /* 11731aa2 jmp 0x11731b18 */
  goto L_11731b18;
L_11731aa4:;
  /* 11731aa4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731aa7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731aaa add ecx, 0x11751834 */
  { uint32_t _a=(ECX),_b=(0x11751834u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ab0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11731ab3 jmp 0x11731b18 */
  goto L_11731b18;
L_11731ab5:;
  /* 11731ab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731ab8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731abb mov eax, dword ptr [edx + 0x1175183c] */
  EAX = (r32((uint32_t)(EDX + 0x1175183c)));
  /* 11731ac1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11731ac4 jmp 0x11731b18 */
  goto L_11731b18;
L_11731ac6:;
  /* 11731ac6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731ac9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731acc add ecx, 0x11751840 */
  { uint32_t _a=(ECX),_b=(0x11751840u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ad2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11731ad5 jmp 0x11731b18 */
  goto L_11731b18;
L_11731ad7:;
  /* 11731ad7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731ada imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731add mov eax, dword ptr [edx + 0x11751844] */
  EAX = (r32((uint32_t)(EDX + 0x11751844)));
  /* 11731ae3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11731ae6 jmp 0x11731b18 */
  goto L_11731b18;
L_11731ae8:;
  /* 11731ae8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731aeb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731aee add ecx, 0x11751848 */
  { uint32_t _a=(ECX),_b=(0x11751848u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731af4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11731af7 jmp 0x11731b18 */
  goto L_11731b18;
L_11731af9:;
  /* 11731af9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731afc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731aff add edx, 0x1175184c */
  { uint32_t _a=(EDX),_b=(0x1175184cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731b05 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11731b08 jmp 0x11731b18 */
  goto L_11731b18;
L_11731b0a:;
  /* 11731b0a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731b0d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731b10 add eax, 0x11751854 */
  { uint32_t _a=(EAX),_b=(0x11751854u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731b15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11731b18:;
  /* 11731b18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731b1c je 0x11731b24 */
  if (C.zf) goto L_11731b24;
  /* 11731b1e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731b22 jge 0x11731b26 */
  if ((C.sf==C.of)) goto L_11731b26;
L_11731b24:;
  /* 11731b24 jmp 0x11731b78 */
  goto L_11731b78;
L_11731b26:;
  /* 11731b26 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11731b29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731b2c push ecx */
  push32((uint32_t)(ECX));
  /* 11731b2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731b30 push edx */
  push32((uint32_t)(EDX));
  /* 11731b31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11731b34 push eax */
  push32((uint32_t)(EAX));
  /* 11731b35 call 0x11728a90 */
  push32(0x11731b3au); f_11728a90();
  /* 11731b3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731b3d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11731b40 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731b43 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11731b47 mov eax, 1 */
  EAX = (0x1u);
  /* 11731b4c jmp 0x11731b8e */
  goto L_11731b8e;
L_11731b4e:;
  /* 11731b4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731b51 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731b57 cmp eax, dword ptr [edx + 0x11751830] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11751830))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731b5d jae 0x11731b6a */
  if (!C.cf) goto L_11731b6a;
  /* 11731b5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731b62 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731b65 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11731b68 jmp 0x11731b73 */
  goto L_11731b73;
L_11731b6a:;
  /* 11731b6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731b6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731b70 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11731b73:;
  /* 11731b73 jmp 0x11731a2b */
  goto L_11731a2b;
L_11731b78:;
  /* 11731b78 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11731b7b push eax */
  push32((uint32_t)(EAX));
  /* 11731b7c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11731b7f push ecx */
  push32((uint32_t)(ECX));
  /* 11731b80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11731b83 push edx */
  push32((uint32_t)(EDX));
  /* 11731b84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731b87 push eax */
  push32((uint32_t)(EAX));
  /* 11731b88 call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x11731b8eu);
L_11731b8e:;
  /* 11731b8e mov esp, ebp */
  ESP = (EBP);
  /* 11731b90 pop ebp */
  EBP = (pop32());
  /* 11731b91 ret 0x10 */
  ESPCHK(0x11731a10u, _esp0);
  ESP += 20; return;
}

/* FUN_10011ba0 @ 0x11731ba0 (118 bytes, 42 insns) */
void f_11731ba0(void) {
  FTRACE(0x11731ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11731ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11731ba3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731ba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11731bad:;
  /* 11731bad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731bb0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11731bb2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11731bb5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731bb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731bbc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731bbf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11731bc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11731bc4 je 0x11731c0f */
  if (C.zf) goto L_11731c0f;
  /* 11731bc6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731bca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731bcd jl 0x11731be2 */
  if ((C.sf!=C.of)) goto L_11731be2;
  /* 11731bcf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731bd3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731bd6 jg 0x11731be2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11731be2;
  /* 11731bd8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11731bdb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11731bdd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11731be0 jmp 0x11731bfc */
  goto L_11731bfc;
L_11731be2:;
  /* 11731be2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731be6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731be9 jl 0x11731bfc */
  if ((C.sf!=C.of)) goto L_11731bfc;
  /* 11731beb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731bef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731bf2 jg 0x11731bfc */
  if ((!C.zf&&C.sf==C.of)) goto L_11731bfc;
  /* 11731bf4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11731bf7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11731bf9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11731bfc:;
  /* 11731bfc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731bff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11731c02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11731c06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11731c0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731c0d jmp 0x11731bad */
  goto L_11731bad;
L_11731c0f:;
  /* 11731c0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731c12 mov esp, ebp */
  ESP = (EBP);
  /* 11731c14 pop ebp */
  EBP = (pop32());
  /* 11731c15 ret  */
  ESPCHK(0x11731ba0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11731c20 (101 bytes, 36 insns) */
void f_11731c20(void) {
  FTRACE(0x11731c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11731c21 mov ebp, esp */
  EBP = (ESP);
  /* 11731c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731c26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11731c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731c30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11731c32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11731c35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731c38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731c3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11731c3e:;
  /* 11731c3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11731c42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731c45 jl 0x11731c50 */
  if ((C.sf!=C.of)) goto L_11731c50;
  /* 11731c47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11731c4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731c4e jle 0x11731c62 */
  if ((C.zf||C.sf!=C.of)) goto L_11731c62;
L_11731c50:;
  /* 11731c50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11731c54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731c57 jl 0x11731c7e */
  if ((C.sf!=C.of)) goto L_11731c7e;
  /* 11731c59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11731c5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731c60 jg 0x11731c7e */
  if ((!C.zf&&C.sf==C.of)) goto L_11731c7e;
L_11731c62:;
  /* 11731c62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731c65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731c68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11731c6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731c6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11731c70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11731c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731c76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731c79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11731c7c jmp 0x11731c3e */
  goto L_11731c3e;
L_11731c7e:;
  /* 11731c7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731c81 mov esp, ebp */
  ESP = (EBP);
  /* 11731c83 pop ebp */
  EBP = (pop32());
  /* 11731c84 ret  */
  ESPCHK(0x11731c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c90 @ 0x11731c90 (122 bytes, 39 insns) */
void f_11731c90(void) {
  FTRACE(0x11731c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11731c91 mov ebp, esp */
  EBP = (ESP);
  /* 11731c93 push ecx */
  push32((uint32_t)(ECX));
  /* 11731c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731c97 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731c9d jae 0x11731cc1 */
  if (!C.cf) goto L_11731cc1;
  /* 11731c9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731ca2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11731ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731ca8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11731cab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731cae mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 11731cb5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11731cba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11731cbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11731cbf jne 0x11731cdc */
  if (!C.zf) goto L_11731cdc;
L_11731cc1:;
  /* 11731cc1 call 0x1172d580 */
  push32(0x11731cc6u); f_1172d580();
  /* 11731cc6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11731ccc call 0x1172d590 */
  push32(0x11731cd1u); f_1172d590();
  /* 11731cd1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11731cd7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731cda jmp 0x11731d06 */
  goto L_11731d06;
L_11731cdc:;
  /* 11731cdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731cdf push edx */
  push32((uint32_t)(EDX));
  /* 11731ce0 call 0x1172e890 */
  push32(0x11731ce5u); f_1172e890();
  /* 11731ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ce8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731ceb push eax */
  push32((uint32_t)(EAX));
  /* 11731cec call 0x11731d10 */
  push32(0x11731cf1u); f_11731d10();
  /* 11731cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731cf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731cfa push ecx */
  push32((uint32_t)(ECX));
  /* 11731cfb call 0x1172e920 */
  push32(0x11731d00u); f_1172e920();
  /* 11731d00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11731d06:;
  /* 11731d06 mov esp, ebp */
  ESP = (EBP);
  /* 11731d08 pop ebp */
  EBP = (pop32());
  /* 11731d09 ret  */
  ESPCHK(0x11731c90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11731d10 (170 bytes, 59 insns) */
void f_11731d10(void) {
  FTRACE(0x11731d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11731d11 mov ebp, esp */
  EBP = (ESP);
  /* 11731d13 push ecx */
  push32((uint32_t)(ECX));
  /* 11731d14 push esi */
  push32((uint32_t)(ESI));
  /* 11731d15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731d18 push eax */
  push32((uint32_t)(EAX));
  /* 11731d19 call 0x1172e710 */
  push32(0x11731d1eu); f_1172e710();
  /* 11731d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731d24 je 0x11731d63 */
  if (C.zf) goto L_11731d63;
  /* 11731d26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731d2a je 0x11731d32 */
  if (C.zf) goto L_11731d32;
  /* 11731d2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731d30 jne 0x11731d4c */
  if (!C.zf) goto L_11731d4c;
L_11731d32:;
  /* 11731d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11731d34 call 0x1172e710 */
  push32(0x11731d39u); f_1172e710();
  /* 11731d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d3c mov esi, eax */
  ESI = (EAX);
  /* 11731d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11731d40 call 0x1172e710 */
  push32(0x11731d45u); f_1172e710();
  /* 11731d45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731d4a je 0x11731d63 */
  if (C.zf) goto L_11731d63;
L_11731d4c:;
  /* 11731d4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731d4f push ecx */
  push32((uint32_t)(ECX));
  /* 11731d50 call 0x1172e710 */
  push32(0x11731d55u); f_1172e710();
  /* 11731d55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d58 push eax */
  push32((uint32_t)(EAX));
  /* 11731d59 call dword ptr [0x11755290] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755290))), 0x11731d5fu);
  /* 11731d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731d61 je 0x11731d6c */
  if (C.zf) goto L_11731d6c;
L_11731d63:;
  /* 11731d63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11731d6a jmp 0x11731d75 */
  goto L_11731d75;
L_11731d6c:;
  /* 11731d6c call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x11731d72u);
  /* 11731d72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11731d75:;
  /* 11731d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731d78 push edx */
  push32((uint32_t)(EDX));
  /* 11731d79 call 0x1172e630 */
  push32(0x11731d7eu); f_1172e630();
  /* 11731d7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731d81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731d84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11731d87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731d8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11731d8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11731d90 mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 11731d97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11731d9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731da0 je 0x11731db3 */
  if (C.zf) goto L_11731db3;
  /* 11731da2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731da5 push eax */
  push32((uint32_t)(EAX));
  /* 11731da6 call 0x1172d4e0 */
  push32(0x11731dabu); f_1172d4e0();
  /* 11731dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731dae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11731db1 jmp 0x11731db5 */
  goto L_11731db5;
L_11731db3:;
  /* 11731db3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11731db5:;
  /* 11731db5 pop esi */
  ESI = (pop32());
  /* 11731db6 mov esp, ebp */
  ESP = (EBP);
  /* 11731db8 pop ebp */
  EBP = (pop32());
  /* 11731db9 ret  */
  ESPCHK(0x11731d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x11731dc0 (146 bytes, 52 insns) */
void f_11731dc0(void) {
  FTRACE(0x11731dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11731dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11731dc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11731dc4 push esi */
  push32((uint32_t)(ESI));
  /* 11731dc5 push edi */
  push32((uint32_t)(EDI));
L_11731dc6:;
  /* 11731dc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731dca jne 0x11731dea */
  if (!C.zf) goto L_11731dea;
  /* 11731dcc push 0x1174e0d8 */
  push32((uint32_t)(0x1174e0d8u));
  /* 11731dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11731dd3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11731dd5 push 0x1174e7a0 */
  push32((uint32_t)(0x1174e7a0u));
  /* 11731dda push 2 */
  push32((uint32_t)(0x2u));
  /* 11731ddc call 0x11723380 */
  push32(0x11731de1u); f_11723380();
  /* 11731de1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731de4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731de7 jne 0x11731dea */
  if (!C.zf) goto L_11731dea;
  /* 11731de9 int3  */
  x86_unimpl("int3 @ 0x11731de9");
L_11731dea:;
  /* 11731dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11731dec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11731dee jne 0x11731dc6 */
  if (!C.zf) goto L_11731dc6;
  /* 11731df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731df3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11731df6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11731dfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11731dfe je 0x11731e4d */
  if (C.zf) goto L_11731e4d;
  /* 11731e00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11731e06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11731e09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11731e0b je 0x11731e4d */
  if (C.zf) goto L_11731e4d;
  /* 11731e0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11731e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11731e15 push eax */
  push32((uint32_t)(EAX));
  /* 11731e16 call 0x11724690 */
  push32(0x11731e1bu); f_11724690();
  /* 11731e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11731e24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11731e2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11731e30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11731e39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11731e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11731e46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11731e4d:;
  /* 11731e4d pop edi */
  EDI = (pop32());
  /* 11731e4e pop esi */
  ESI = (pop32());
  /* 11731e4f pop ebx */
  EBX = (pop32());
  /* 11731e50 pop ebp */
  EBP = (pop32());
  /* 11731e51 ret  */
  ESPCHK(0x11731dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x11731e60 (289 bytes, 97 insns) */
void f_11731e60(void) {
  FTRACE(0x11731e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11731e61 mov ebp, esp */
  EBP = (ESP);
  /* 11731e63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731e66 push esi */
  push32((uint32_t)(ESI));
  /* 11731e67 mov eax, dword ptr [0x11751fa8] */
  EAX = (r32((uint32_t)(0x11751fa8)));
  /* 11731e6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11731e6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11731e76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11731e7d jmp 0x11731e88 */
  goto L_11731e88;
L_11731e7f:;
  /* 11731e7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731e85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11731e88:;
  /* 11731e88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731e8c jae 0x11731ec1 */
  if (!C.cf) goto L_11731ec1;
  /* 11731e8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731e91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731e94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11731e97 push ecx */
  push32((uint32_t)(ECX));
  /* 11731e98 call 0x117280a0 */
  push32(0x11731e9du); f_117280a0();
  /* 11731e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ea0 mov esi, eax */
  ESI = (EAX);
  /* 11731ea2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731ea5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731ea8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11731eac push ecx */
  push32((uint32_t)(ECX));
  /* 11731ead call 0x117280a0 */
  push32(0x11731eb2u); f_117280a0();
  /* 11731eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731eb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731eb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11731ebc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11731ebf jmp 0x11731e7f */
  goto L_11731e7f;
L_11731ec1:;
  /* 11731ec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731ec4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ec7 push eax */
  push32((uint32_t)(EAX));
  /* 11731ec8 call 0x11723be0 */
  push32(0x11731ecdu); f_11723be0();
  /* 11731ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ed0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11731ed3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731ed7 je 0x11731f79 */
  if (C.zf) goto L_11731f79;
  /* 11731edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731ee0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11731ee3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11731eea jmp 0x11731ef5 */
  goto L_11731ef5;
L_11731eec:;
  /* 11731eec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731eef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ef2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11731ef5:;
  /* 11731ef5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731ef9 jae 0x11731f6a */
  if (!C.cf) goto L_11731f6a;
  /* 11731efb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731efe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11731f01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11731f0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731f0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731f10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11731f13 push ecx */
  push32((uint32_t)(ECX));
  /* 11731f14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f17 push edx */
  push32((uint32_t)(EDX));
  /* 11731f18 call 0x11728220 */
  push32(0x11731f1du); f_11728220();
  /* 11731f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f20 push eax */
  push32((uint32_t)(EAX));
  /* 11731f21 call 0x117280a0 */
  push32(0x11731f26u); f_117280a0();
  /* 11731f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11731f31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11731f37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11731f40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731f43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731f46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11731f4a push eax */
  push32((uint32_t)(EAX));
  /* 11731f4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f4e push ecx */
  push32((uint32_t)(ECX));
  /* 11731f4f call 0x11728220 */
  push32(0x11731f54u); f_11728220();
  /* 11731f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f57 push eax */
  push32((uint32_t)(EAX));
  /* 11731f58 call 0x117280a0 */
  push32(0x11731f5du); f_117280a0();
  /* 11731f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11731f68 jmp 0x11731eec */
  goto L_11731eec;
L_11731f6a:;
  /* 11731f6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11731f70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11731f73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731f76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11731f79:;
  /* 11731f79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11731f7c pop esi */
  ESI = (pop32());
  /* 11731f7d mov esp, ebp */
  ESP = (EBP);
  /* 11731f7f pop ebp */
  EBP = (pop32());
  /* 11731f80 ret  */
  ESPCHK(0x11731e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x11731f90 (291 bytes, 97 insns) */
void f_11731f90(void) {
  FTRACE(0x11731f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11731f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11731f91 mov ebp, esp */
  EBP = (ESP);
  /* 11731f93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11731f96 push esi */
  push32((uint32_t)(ESI));
  /* 11731f97 mov eax, dword ptr [0x11751fa8] */
  EAX = (r32((uint32_t)(0x11751fa8)));
  /* 11731f9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11731f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11731fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11731fad jmp 0x11731fb8 */
  goto L_11731fb8;
L_11731faf:;
  /* 11731faf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731fb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11731fb8:;
  /* 11731fb8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11731fbc jae 0x11731ff2 */
  if (!C.cf) goto L_11731ff2;
  /* 11731fbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731fc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731fc4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11731fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11731fc9 call 0x117280a0 */
  push32(0x11731fceu); f_117280a0();
  /* 11731fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731fd1 mov esi, eax */
  ESI = (EAX);
  /* 11731fd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11731fd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11731fd9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11731fdd push ecx */
  push32((uint32_t)(ECX));
  /* 11731fde call 0x117280a0 */
  push32(0x11731fe3u); f_117280a0();
  /* 11731fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11731fe6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731fe9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11731fed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11731ff0 jmp 0x11731faf */
  goto L_11731faf;
L_11731ff2:;
  /* 11731ff2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11731ff5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11731ff8 push eax */
  push32((uint32_t)(EAX));
  /* 11731ff9 call 0x11723be0 */
  push32(0x11731ffeu); f_11723be0();
  /* 11731ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732001 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11732004 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732008 je 0x117320ab */
  if (C.zf) goto L_117320ab;
  /* 1173200e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732011 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11732014 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1173201b jmp 0x11732026 */
  goto L_11732026;
L_1173201d:;
  /* 1173201d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732020 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732023 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11732026:;
  /* 11732026 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173202a jae 0x1173209c */
  if (!C.cf) goto L_1173209c;
  /* 1173202c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173202f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11732032 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732038 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1173203b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173203e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732041 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11732045 push ecx */
  push32((uint32_t)(ECX));
  /* 11732046 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732049 push edx */
  push32((uint32_t)(EDX));
  /* 1173204a call 0x11728220 */
  push32(0x1173204fu); f_11728220();
  /* 1173204f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732052 push eax */
  push32((uint32_t)(EAX));
  /* 11732053 call 0x117280a0 */
  push32(0x11732058u); f_117280a0();
  /* 11732058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173205b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173205e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732060 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11732063 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732066 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11732069 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173206c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173206f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11732072 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732075 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732078 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1173207c push eax */
  push32((uint32_t)(EAX));
  /* 1173207d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732080 push ecx */
  push32((uint32_t)(ECX));
  /* 11732081 call 0x11728220 */
  push32(0x11732086u); f_11728220();
  /* 11732086 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732089 push eax */
  push32((uint32_t)(EAX));
  /* 1173208a call 0x117280a0 */
  push32(0x1173208fu); f_117280a0();
  /* 1173208f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732092 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732095 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732097 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1173209a jmp 0x1173201d */
  goto L_1173201d;
L_1173209c:;
  /* 1173209c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173209f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117320a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117320a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117320a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117320ab:;
  /* 117320ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117320ae pop esi */
  ESI = (pop32());
  /* 117320af mov esp, ebp */
  ESP = (EBP);
  /* 117320b1 pop ebp */
  EBP = (pop32());
  /* 117320b2 ret  */
  ESPCHK(0x11731f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100120c0 @ 0x117320c0 (878 bytes, 273 insns) */
void f_117320c0(void) {
  FTRACE(0x117320c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117320c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117320c1 mov ebp, esp */
  EBP = (ESP);
  /* 117320c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117320c6 push esi */
  push32((uint32_t)(ESI));
  /* 117320c7 mov eax, dword ptr [0x11751fa8] */
  EAX = (r32((uint32_t)(0x11751fa8)));
  /* 117320cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117320cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117320d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117320dd jmp 0x117320e8 */
  goto L_117320e8;
L_117320df:;
  /* 117320df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117320e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117320e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117320e8:;
  /* 117320e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117320ec jae 0x11732121 */
  if (!C.cf) goto L_11732121;
  /* 117320ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117320f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117320f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 117320f7 push ecx */
  push32((uint32_t)(ECX));
  /* 117320f8 call 0x117280a0 */
  push32(0x117320fdu); f_117280a0();
  /* 117320fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732100 mov esi, eax */
  ESI = (EAX);
  /* 11732102 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732105 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732108 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1173210c push ecx */
  push32((uint32_t)(ECX));
  /* 1173210d call 0x117280a0 */
  push32(0x11732112u); f_117280a0();
  /* 11732112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732115 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732118 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1173211c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1173211f jmp 0x117320df */
  goto L_117320df;
L_11732121:;
  /* 11732121 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11732128 jmp 0x11732133 */
  goto L_11732133;
L_1173212a:;
  /* 1173212a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173212d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732130 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11732133:;
  /* 11732133 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732137 jae 0x1173216d */
  if (!C.cf) goto L_1173216d;
  /* 11732139 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173213c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173213f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11732143 push eax */
  push32((uint32_t)(EAX));
  /* 11732144 call 0x117280a0 */
  push32(0x11732149u); f_117280a0();
  /* 11732149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173214c mov esi, eax */
  ESI = (EAX);
  /* 1173214e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732151 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732154 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11732158 push eax */
  push32((uint32_t)(EAX));
  /* 11732159 call 0x117280a0 */
  push32(0x1173215eu); f_117280a0();
  /* 1173215e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732161 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732164 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11732168 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1173216b jmp 0x1173212a */
  goto L_1173212a;
L_1173216d:;
  /* 1173216d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732170 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11732176 push eax */
  push32((uint32_t)(EAX));
  /* 11732177 call 0x117280a0 */
  push32(0x1173217cu); f_117280a0();
  /* 1173217c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173217f mov esi, eax */
  ESI = (EAX);
  /* 11732181 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732184 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1173218a push edx */
  push32((uint32_t)(EDX));
  /* 1173218b call 0x117280a0 */
  push32(0x11732190u); f_117280a0();
  /* 11732190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732193 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732196 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1173219a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1173219d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117321a0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 117321a6 push edx */
  push32((uint32_t)(EDX));
  /* 117321a7 call 0x117280a0 */
  push32(0x117321acu); f_117280a0();
  /* 117321ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117321af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117321b2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117321b6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117321b9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117321bc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 117321c2 push ecx */
  push32((uint32_t)(ECX));
  /* 117321c3 call 0x117280a0 */
  push32(0x117321c8u); f_117280a0();
  /* 117321c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117321cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117321ce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117321d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117321d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117321d8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 117321de push edx */
  push32((uint32_t)(EDX));
  /* 117321df call 0x117280a0 */
  push32(0x117321e4u); f_117280a0();
  /* 117321e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117321e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117321ea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117321ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117321f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117321f4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117321f9 push eax */
  push32((uint32_t)(EAX));
  /* 117321fa call 0x11723be0 */
  push32(0x117321ffu); f_11723be0();
  /* 117321ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732202 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11732205 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732209 je 0x11732426 */
  if (C.zf) goto L_11732426;
  /* 1173220f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732212 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11732215 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732218 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173221e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11732221 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11732226 mov eax, dword ptr [0x11751fa8] */
  EAX = (r32((uint32_t)(0x11751fa8)));
  /* 1173222b push eax */
  push32((uint32_t)(EAX));
  /* 1173222c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173222f push ecx */
  push32((uint32_t)(ECX));
  /* 11732230 call 0x1172bf90 */
  push32(0x11732235u); f_1172bf90();
  /* 11732235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732238 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1173223f jmp 0x1173224a */
  goto L_1173224a;
L_11732241:;
  /* 11732241 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732244 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732247 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1173224a:;
  /* 1173224a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173224e jae 0x117322be */
  if (!C.cf) goto L_117322be;
  /* 11732250 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732253 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11732256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732259 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1173225c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173225f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732262 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11732265 push edx */
  push32((uint32_t)(EDX));
  /* 11732266 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732269 push eax */
  push32((uint32_t)(EAX));
  /* 1173226a call 0x11728220 */
  push32(0x1173226fu); f_11728220();
  /* 1173226f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732272 push eax */
  push32((uint32_t)(EAX));
  /* 11732273 call 0x117280a0 */
  push32(0x11732278u); f_117280a0();
  /* 11732278 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173227b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173227e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11732282 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11732285 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732288 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1173228b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173228e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11732292 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732298 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1173229c push edx */
  push32((uint32_t)(EDX));
  /* 1173229d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117322a0 push eax */
  push32((uint32_t)(EAX));
  /* 117322a1 call 0x11728220 */
  push32(0x117322a6u); f_11728220();
  /* 117322a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117322a9 push eax */
  push32((uint32_t)(EAX));
  /* 117322aa call 0x117280a0 */
  push32(0x117322afu); f_117280a0();
  /* 117322af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117322b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117322b5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117322b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117322bc jmp 0x11732241 */
  goto L_11732241;
L_117322be:;
  /* 117322be mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117322c5 jmp 0x117322d0 */
  goto L_117322d0;
L_117322c7:;
  /* 117322c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117322ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117322cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117322d0:;
  /* 117322d0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117322d4 jae 0x11732346 */
  if (!C.cf) goto L_11732346;
  /* 117322d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117322d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117322dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117322df mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 117322e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117322e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117322e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 117322ed push eax */
  push32((uint32_t)(EAX));
  /* 117322ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117322f1 push ecx */
  push32((uint32_t)(ECX));
  /* 117322f2 call 0x11728220 */
  push32(0x117322f7u); f_11728220();
  /* 117322f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117322fa push eax */
  push32((uint32_t)(EAX));
  /* 117322fb call 0x117280a0 */
  push32(0x11732300u); f_117280a0();
  /* 11732300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732303 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732306 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1173230a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1173230d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11732310 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11732313 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732316 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1173231a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173231d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732320 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11732324 push eax */
  push32((uint32_t)(EAX));
  /* 11732325 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732328 push ecx */
  push32((uint32_t)(ECX));
  /* 11732329 call 0x11728220 */
  push32(0x1173232eu); f_11728220();
  /* 1173232e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732331 push eax */
  push32((uint32_t)(EAX));
  /* 11732332 call 0x117280a0 */
  push32(0x11732337u); f_117280a0();
  /* 11732337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173233a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173233d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11732341 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11732344 jmp 0x117322c7 */
  goto L_117322c7;
L_11732346:;
  /* 11732346 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11732349 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173234c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11732352 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732355 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1173235b push ecx */
  push32((uint32_t)(ECX));
  /* 1173235c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1173235f push edx */
  push32((uint32_t)(EDX));
  /* 11732360 call 0x11728220 */
  push32(0x11732365u); f_11728220();
  /* 11732365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732368 push eax */
  push32((uint32_t)(EAX));
  /* 11732369 call 0x117280a0 */
  push32(0x1173236eu); f_117280a0();
  /* 1173236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732371 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732374 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11732378 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1173237b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1173237e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732381 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11732387 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173238a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11732390 push eax */
  push32((uint32_t)(EAX));
  /* 11732391 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732394 push ecx */
  push32((uint32_t)(ECX));
  /* 11732395 call 0x11728220 */
  push32(0x1173239au); f_11728220();
  /* 1173239a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173239d push eax */
  push32((uint32_t)(EAX));
  /* 1173239e call 0x117280a0 */
  push32(0x117323a3u); f_117280a0();
  /* 117323a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117323a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323a9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 117323ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117323b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117323b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323b6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 117323bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117323bf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 117323c5 push ecx */
  push32((uint32_t)(ECX));
  /* 117323c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323c9 push edx */
  push32((uint32_t)(EDX));
  /* 117323ca call 0x11728220 */
  push32(0x117323cfu); f_11728220();
  /* 117323cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117323d2 push eax */
  push32((uint32_t)(EAX));
  /* 117323d3 call 0x117280a0 */
  push32(0x117323d8u); f_117280a0();
  /* 117323d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117323db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 117323e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117323e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117323e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323eb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 117323f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117323f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 117323fa push eax */
  push32((uint32_t)(EAX));
  /* 117323fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117323fe push ecx */
  push32((uint32_t)(ECX));
  /* 117323ff call 0x11728220 */
  push32(0x11732404u); f_11728220();
  /* 11732404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732407 push eax */
  push32((uint32_t)(EAX));
  /* 11732408 call 0x117280a0 */
  push32(0x1173240du); f_117280a0();
  /* 1173240d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732410 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732413 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11732417 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1173241a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1173241d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732420 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11732426:;
  /* 11732426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732429 pop esi */
  ESI = (pop32());
  /* 1173242a mov esp, ebp */
  ESP = (EBP);
  /* 1173242c pop ebp */
  EBP = (pop32());
  /* 1173242d ret  */
  ESPCHK(0x117320c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x11732430 (31 bytes, 15 insns) */
void f_11732430(void) {
  FTRACE(0x11732430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732430 push ebp */
  push32((uint32_t)(EBP));
  /* 11732431 mov ebp, esp */
  EBP = (ESP);
  /* 11732433 push 0 */
  push32((uint32_t)(0x0u));
  /* 11732435 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732438 push eax */
  push32((uint32_t)(EAX));
  /* 11732439 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173243c push ecx */
  push32((uint32_t)(ECX));
  /* 1173243d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732440 push edx */
  push32((uint32_t)(EDX));
  /* 11732441 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732444 push eax */
  push32((uint32_t)(EAX));
  /* 11732445 call 0x11732450 */
  push32(0x1173244au); f_11732450();
  /* 1173244a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173244d pop ebp */
  EBP = (pop32());
  /* 1173244e ret  */
  ESPCHK(0x11732430u, _esp0);
  ESP += 4; return;
}

/* FUN_10012450 @ 0x11732450 (393 bytes, 123 insns) */
void f_11732450(void) {
  FTRACE(0x11732450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732450 push ebp */
  push32((uint32_t)(EBP));
  /* 11732451 mov ebp, esp */
  EBP = (ESP);
  /* 11732453 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732456 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173245a jne 0x11732466 */
  if (!C.zf) goto L_11732466;
  /* 1173245c mov eax, dword ptr [0x11751fa8] */
  EAX = (r32((uint32_t)(0x11751fa8)));
  /* 11732461 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11732464 jmp 0x1173246c */
  goto L_1173246c;
L_11732466:;
  /* 11732466 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732469 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1173246c:;
  /* 1173246c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173246f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11732472 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732475 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11732478 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 1173247d call dword ptr [0x117552f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f8))), 0x11732483u);
  /* 11732483 cmp dword ptr [0x11752d84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173248a je 0x117324aa */
  if (C.zf) goto L_117324aa;
  /* 1173248c push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 11732491 call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x11732497u);
  /* 11732497 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11732499 call 0x11723b00 */
  push32(0x1173249eu); f_11723b00();
  /* 1173249e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117324a1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117324a8 jmp 0x117324b1 */
  goto L_117324b1;
L_117324aa:;
  /* 117324aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117324b1:;
  /* 117324b1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117324b5 jbe 0x117325a2 */
  if ((C.cf||C.zf)) goto L_117325a2;
  /* 117324bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117324be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117324c0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 117324c3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117324c7 je 0x117324d1 */
  if (C.zf) goto L_117324d1;
  /* 117324c9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117324cd je 0x117324d6 */
  if (C.zf) goto L_117324d6;
  /* 117324cf jmp 0x11732530 */
  goto L_11732530;
L_117324d1:;
  /* 117324d1 jmp 0x117325a2 */
  goto L_117325a2;
L_117324d6:;
  /* 117324d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117324d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117324dc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 117324df mov dword ptr [0x11752d70], 0 */
  w32((uint32_t)(0x11752d70), (0x0u));
  /* 117324e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117324ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117324ef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117324f2 jne 0x11732507 */
  if (!C.zf) goto L_11732507;
  /* 117324f4 mov dword ptr [0x11752d70], 1 */
  w32((uint32_t)(0x11752d70), (0x1u));
  /* 117324fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732501 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732504 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11732507:;
  /* 11732507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173250a push ecx */
  push32((uint32_t)(ECX));
  /* 1173250b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1173250e push edx */
  push32((uint32_t)(EDX));
  /* 1173250f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11732512 push eax */
  push32((uint32_t)(EAX));
  /* 11732513 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732516 push ecx */
  push32((uint32_t)(ECX));
  /* 11732517 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173251a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1173251c push eax */
  push32((uint32_t)(EAX));
  /* 1173251d call 0x117325e0 */
  push32(0x11732522u); f_117325e0();
  /* 11732522 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732525 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173252b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1173252e jmp 0x1173259d */
  goto L_1173259d;
L_11732530:;
  /* 11732530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11732535 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11732537 mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 1173253d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1173253f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11732543 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11732549 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1173254b je 0x11732578 */
  if (C.zf) goto L_11732578;
  /* 1173254d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732551 jbe 0x11732578 */
  if ((C.cf||C.zf)) goto L_11732578;
  /* 11732553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732556 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732559 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1173255b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1173255d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732563 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11732566 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732569 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173256c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1173256f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732572 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732575 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11732578:;
  /* 11732578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173257b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173257e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11732580 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11732582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732585 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732588 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173258b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173258e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732591 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11732594 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732597 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173259a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1173259d:;
  /* 1173259d jmp 0x117324b1 */
  goto L_117324b1;
L_117325a2:;
  /* 117325a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117325a6 je 0x117325b4 */
  if (C.zf) goto L_117325b4;
  /* 117325a8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117325aa call 0x11723ba0 */
  push32(0x117325afu); f_11723ba0();
  /* 117325af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117325b2 jmp 0x117325bf */
  goto L_117325bf;
L_117325b4:;
  /* 117325b4 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 117325b9 call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x117325bfu);
L_117325bf:;
  /* 117325bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117325c3 jbe 0x117325d3 */
  if ((C.cf||C.zf)) goto L_117325d3;
  /* 117325c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117325c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117325cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117325ce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117325d1 jmp 0x117325d5 */
  goto L_117325d5;
L_117325d3:;
  /* 117325d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117325d5:;
  /* 117325d5 mov esp, ebp */
  ESP = (EBP);
  /* 117325d7 pop ebp */
  EBP = (pop32());
  /* 117325d8 ret  */
  ESPCHK(0x11732450u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x117325e0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_117325e0(void) {
  FTRACE(0x117325e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117325e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117325e1 mov ebp, esp */
  EBP = (ESP);
  /* 117325e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117325e6 push esi */
  push32((uint32_t)(ESI));
  /* 117325e7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 117325eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117325ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117325f1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117325f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117325f7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117325fb ja 0x11732b48 */
  if ((!C.cf&&!C.zf)) goto L_11732b48;
  /* 11732601 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732604 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11732606 mov dl, byte ptr [eax + 0x11732ba9] */
  DL = (r8((uint32_t)(EAX + 0x11732ba9)));
  /* 1173260c jmp dword ptr [edx*4 + 0x11732b4d] */
  switch (EDX) {
    case 0: goto L_11732b26;
    case 1: goto L_11732635;
    case 2: goto L_1173267b;
    case 3: goto L_117327c8;
    case 4: goto L_117327f0;
    case 5: goto L_1173288f;
    case 6: goto L_117328fb;
    case 7: goto L_11732924;
    case 8: goto L_11732965;
    case 9: goto L_11732a47;
    case 10: goto L_11732aae;
    case 11: goto L_11732afb;
    case 12: goto L_11732613;
    case 13: goto L_11732658;
    case 14: goto L_1173269e;
    case 15: goto L_1173279e;
    case 16: goto L_11732835;
    case 17: goto L_11732862;
    case 18: goto L_117328b7;
    case 19: goto L_1173293b;
    case 20: goto L_117329e9;
    case 21: goto L_11732a78;
    case 22: goto L_11732b48;
    default: x86_unimpl("switch@0x1173260c out of table"); return;
  }
L_11732613:;
  /* 11732613 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732616 push ecx */
  push32((uint32_t)(ECX));
  /* 11732617 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173261a push edx */
  push32((uint32_t)(EDX));
  /* 1173261b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173261e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11732621 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732624 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11732627 push eax */
  push32((uint32_t)(EAX));
  /* 11732628 call 0x11732c00 */
  push32(0x1173262du); f_11732c00();
  /* 1173262d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732630 jmp 0x11732b48 */
  goto L_11732b48;
L_11732635:;
  /* 11732635 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732638 push ecx */
  push32((uint32_t)(ECX));
  /* 11732639 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173263c push edx */
  push32((uint32_t)(EDX));
  /* 1173263d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732640 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11732643 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732646 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1173264a push eax */
  push32((uint32_t)(EAX));
  /* 1173264b call 0x11732c00 */
  push32(0x11732650u); f_11732c00();
  /* 11732650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732653 jmp 0x11732b48 */
  goto L_11732b48;
L_11732658:;
  /* 11732658 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173265b push ecx */
  push32((uint32_t)(ECX));
  /* 1173265c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173265f push edx */
  push32((uint32_t)(EDX));
  /* 11732660 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732663 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11732666 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732669 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1173266d push eax */
  push32((uint32_t)(EAX));
  /* 1173266e call 0x11732c00 */
  push32(0x11732673u); f_11732c00();
  /* 11732673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732676 jmp 0x11732b48 */
  goto L_11732b48;
L_1173267b:;
  /* 1173267b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173267e push ecx */
  push32((uint32_t)(ECX));
  /* 1173267f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732682 push edx */
  push32((uint32_t)(EDX));
  /* 11732683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732686 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11732689 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173268c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11732690 push eax */
  push32((uint32_t)(EAX));
  /* 11732691 call 0x11732c00 */
  push32(0x11732696u); f_11732c00();
  /* 11732696 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732699 jmp 0x11732b48 */
  goto L_11732b48;
L_1173269e:;
  /* 1173269e cmp dword ptr [0x11752d70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117326a5 je 0x11732726 */
  if (C.zf) goto L_11732726;
  /* 117326a7 mov dword ptr [0x11752d70], 0 */
  w32((uint32_t)(0x11752d70), (0x0u));
  /* 117326b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117326b4 push ecx */
  push32((uint32_t)(ECX));
  /* 117326b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117326b8 push edx */
  push32((uint32_t)(EDX));
  /* 117326b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117326bc push eax */
  push32((uint32_t)(EAX));
  /* 117326bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117326c0 push ecx */
  push32((uint32_t)(ECX));
  /* 117326c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117326c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 117326ca push eax */
  push32((uint32_t)(EAX));
  /* 117326cb call 0x11732db0 */
  push32(0x117326d0u); f_11732db0();
  /* 117326d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117326d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117326d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117326d9 jne 0x117326e0 */
  if (!C.zf) goto L_117326e0;
  /* 117326db jmp 0x11732b48 */
  goto L_11732b48;
L_117326e0:;
  /* 117326e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117326e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117326e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 117326e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117326eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117326ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117326f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117326f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117326f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117326f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117326fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117326fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732700 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11732702 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732705 push ecx */
  push32((uint32_t)(ECX));
  /* 11732706 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732709 push edx */
  push32((uint32_t)(EDX));
  /* 1173270a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173270d push eax */
  push32((uint32_t)(EAX));
  /* 1173270e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732711 push ecx */
  push32((uint32_t)(ECX));
  /* 11732712 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732715 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1173271b push eax */
  push32((uint32_t)(EAX));
  /* 1173271c call 0x11732db0 */
  push32(0x11732721u); f_11732db0();
  /* 11732721 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732724 jmp 0x11732799 */
  goto L_11732799;
L_11732726:;
  /* 11732726 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732729 push ecx */
  push32((uint32_t)(ECX));
  /* 1173272a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173272d push edx */
  push32((uint32_t)(EDX));
  /* 1173272e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732731 push eax */
  push32((uint32_t)(EAX));
  /* 11732732 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732735 push ecx */
  push32((uint32_t)(ECX));
  /* 11732736 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732739 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1173273f push eax */
  push32((uint32_t)(EAX));
  /* 11732740 call 0x11732db0 */
  push32(0x11732745u); f_11732db0();
  /* 11732745 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732748 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173274b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173274e jne 0x11732755 */
  if (!C.zf) goto L_11732755;
  /* 11732750 jmp 0x11732b48 */
  goto L_11732b48;
L_11732755:;
  /* 11732755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732758 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1173275a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1173275d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732760 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11732762 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732765 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732768 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1173276a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173276d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1173276f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732772 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732775 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11732777 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173277a push ecx */
  push32((uint32_t)(ECX));
  /* 1173277b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173277e push edx */
  push32((uint32_t)(EDX));
  /* 1173277f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732782 push eax */
  push32((uint32_t)(EAX));
  /* 11732783 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732786 push ecx */
  push32((uint32_t)(ECX));
  /* 11732787 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173278a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11732790 push eax */
  push32((uint32_t)(EAX));
  /* 11732791 call 0x11732db0 */
  push32(0x11732796u); f_11732db0();
  /* 11732796 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11732799:;
  /* 11732799 jmp 0x11732b48 */
  goto L_11732b48;
L_1173279e:;
  /* 1173279e mov ecx, dword ptr [0x11752d70] */
  ECX = (r32((uint32_t)(0x11752d70)));
  /* 117327a4 mov dword ptr [0x11752d80], ecx */
  w32((uint32_t)(0x11752d80), (ECX));
  /* 117327aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117327ad push edx */
  push32((uint32_t)(EDX));
  /* 117327ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117327b1 push eax */
  push32((uint32_t)(EAX));
  /* 117327b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117327b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117327b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117327ba push edx */
  push32((uint32_t)(EDX));
  /* 117327bb call 0x11732c50 */
  push32(0x117327c0u); f_11732c50();
  /* 117327c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117327c3 jmp 0x11732b48 */
  goto L_11732b48;
L_117327c8:;
  /* 117327c8 mov eax, dword ptr [0x11752d70] */
  EAX = (r32((uint32_t)(0x11752d70)));
  /* 117327cd mov dword ptr [0x11752d80], eax */
  w32((uint32_t)(0x11752d80), (EAX));
  /* 117327d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117327d5 push ecx */
  push32((uint32_t)(ECX));
  /* 117327d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117327d9 push edx */
  push32((uint32_t)(EDX));
  /* 117327da push 2 */
  push32((uint32_t)(0x2u));
  /* 117327dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117327df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117327e2 push ecx */
  push32((uint32_t)(ECX));
  /* 117327e3 call 0x11732c50 */
  push32(0x117327e8u); f_11732c50();
  /* 117327e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117327eb jmp 0x11732b48 */
  goto L_11732b48;
L_117327f0:;
  /* 117327f0 mov edx, dword ptr [0x11752d70] */
  EDX = (r32((uint32_t)(0x11752d70)));
  /* 117327f6 mov dword ptr [0x11752d80], edx */
  w32((uint32_t)(0x11752d80), (EDX));
  /* 117327fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117327ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11732802 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732803 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11732808 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1173280a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1173280d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732811 jne 0x1173281a */
  if (!C.zf) goto L_1173281a;
  /* 11732813 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1173281a:;
  /* 1173281a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173281d push edx */
  push32((uint32_t)(EDX));
  /* 1173281e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732821 push eax */
  push32((uint32_t)(EAX));
  /* 11732822 push 2 */
  push32((uint32_t)(0x2u));
  /* 11732824 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732827 push ecx */
  push32((uint32_t)(ECX));
  /* 11732828 call 0x11732c50 */
  push32(0x1173282du); f_11732c50();
  /* 1173282d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732830 jmp 0x11732b48 */
  goto L_11732b48;
L_11732835:;
  /* 11732835 mov edx, dword ptr [0x11752d70] */
  EDX = (r32((uint32_t)(0x11752d70)));
  /* 1173283b mov dword ptr [0x11752d80], edx */
  w32((uint32_t)(0x11752d80), (EDX));
  /* 11732841 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732844 push eax */
  push32((uint32_t)(EAX));
  /* 11732845 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732848 push ecx */
  push32((uint32_t)(ECX));
  /* 11732849 push 3 */
  push32((uint32_t)(0x3u));
  /* 1173284b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173284e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11732851 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732854 push eax */
  push32((uint32_t)(EAX));
  /* 11732855 call 0x11732c50 */
  push32(0x1173285au); f_11732c50();
  /* 1173285a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173285d jmp 0x11732b48 */
  goto L_11732b48;
L_11732862:;
  /* 11732862 mov ecx, dword ptr [0x11752d70] */
  ECX = (r32((uint32_t)(0x11752d70)));
  /* 11732868 mov dword ptr [0x11752d80], ecx */
  w32((uint32_t)(0x11752d80), (ECX));
  /* 1173286e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732871 push edx */
  push32((uint32_t)(EDX));
  /* 11732872 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732875 push eax */
  push32((uint32_t)(EAX));
  /* 11732876 push 2 */
  push32((uint32_t)(0x2u));
  /* 11732878 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173287b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1173287e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732881 push edx */
  push32((uint32_t)(EDX));
  /* 11732882 call 0x11732c50 */
  push32(0x11732887u); f_11732c50();
  /* 11732887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173288a jmp 0x11732b48 */
  goto L_11732b48;
L_1173288f:;
  /* 1173288f mov eax, dword ptr [0x11752d70] */
  EAX = (r32((uint32_t)(0x11752d70)));
  /* 11732894 mov dword ptr [0x11752d80], eax */
  w32((uint32_t)(0x11752d80), (EAX));
  /* 11732899 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173289c push ecx */
  push32((uint32_t)(ECX));
  /* 1173289d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117328a0 push edx */
  push32((uint32_t)(EDX));
  /* 117328a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 117328a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117328a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117328a9 push ecx */
  push32((uint32_t)(ECX));
  /* 117328aa call 0x11732c50 */
  push32(0x117328afu); f_11732c50();
  /* 117328af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117328b2 jmp 0x11732b48 */
  goto L_11732b48;
L_117328b7:;
  /* 117328b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117328ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117328be jg 0x117328dc */
  if ((!C.zf&&C.sf==C.of)) goto L_117328dc;
  /* 117328c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117328c3 push eax */
  push32((uint32_t)(EAX));
  /* 117328c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117328c7 push ecx */
  push32((uint32_t)(ECX));
  /* 117328c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117328cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 117328d1 push eax */
  push32((uint32_t)(EAX));
  /* 117328d2 call 0x11732c00 */
  push32(0x117328d7u); f_11732c00();
  /* 117328d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117328da jmp 0x117328f6 */
  goto L_117328f6;
L_117328dc:;
  /* 117328dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117328df push ecx */
  push32((uint32_t)(ECX));
  /* 117328e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117328e3 push edx */
  push32((uint32_t)(EDX));
  /* 117328e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117328e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 117328ed push ecx */
  push32((uint32_t)(ECX));
  /* 117328ee call 0x11732c00 */
  push32(0x117328f3u); f_11732c00();
  /* 117328f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117328f6:;
  /* 117328f6 jmp 0x11732b48 */
  goto L_11732b48;
L_117328fb:;
  /* 117328fb mov edx, dword ptr [0x11752d70] */
  EDX = (r32((uint32_t)(0x11752d70)));
  /* 11732901 mov dword ptr [0x11752d80], edx */
  w32((uint32_t)(0x11752d80), (EDX));
  /* 11732907 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173290a push eax */
  push32((uint32_t)(EAX));
  /* 1173290b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173290e push ecx */
  push32((uint32_t)(ECX));
  /* 1173290f push 2 */
  push32((uint32_t)(0x2u));
  /* 11732911 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732914 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11732916 push eax */
  push32((uint32_t)(EAX));
  /* 11732917 call 0x11732c50 */
  push32(0x1173291cu); f_11732c50();
  /* 1173291c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173291f jmp 0x11732b48 */
  goto L_11732b48;
L_11732924:;
  /* 11732924 mov ecx, dword ptr [0x11752d70] */
  ECX = (r32((uint32_t)(0x11752d70)));
  /* 1173292a mov dword ptr [0x11752d80], ecx */
  w32((uint32_t)(0x11752d80), (ECX));
  /* 11732930 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732933 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11732936 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11732939 jmp 0x1173298d */
  goto L_1173298d;
L_1173293b:;
  /* 1173293b mov ecx, dword ptr [0x11752d70] */
  ECX = (r32((uint32_t)(0x11752d70)));
  /* 11732941 mov dword ptr [0x11752d80], ecx */
  w32((uint32_t)(0x11752d80), (ECX));
  /* 11732947 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173294a push edx */
  push32((uint32_t)(EDX));
  /* 1173294b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173294e push eax */
  push32((uint32_t)(EAX));
  /* 1173294f push 1 */
  push32((uint32_t)(0x1u));
  /* 11732951 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732954 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11732957 push edx */
  push32((uint32_t)(EDX));
  /* 11732958 call 0x11732c50 */
  push32(0x1173295du); f_11732c50();
  /* 1173295d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732960 jmp 0x11732b48 */
  goto L_11732b48;
L_11732965:;
  /* 11732965 mov eax, dword ptr [0x11752d70] */
  EAX = (r32((uint32_t)(0x11752d70)));
  /* 1173296a mov dword ptr [0x11752d80], eax */
  w32((uint32_t)(0x11752d80), (EAX));
  /* 1173296f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732972 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732976 jne 0x11732981 */
  if (!C.zf) goto L_11732981;
  /* 11732978 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1173297f jmp 0x1173298d */
  goto L_1173298d;
L_11732981:;
  /* 11732981 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732984 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11732987 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173298a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1173298d:;
  /* 1173298d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732990 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11732993 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732996 jge 0x117329a1 */
  if ((C.sf==C.of)) goto L_117329a1;
  /* 11732998 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1173299f jmp 0x117329ce */
  goto L_117329ce;
L_117329a1:;
  /* 117329a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117329a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 117329a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117329a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 117329ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117329af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117329b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117329b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117329b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117329b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 117329be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117329c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117329c3 jl 0x117329ce */
  if ((C.sf!=C.of)) goto L_117329ce;
  /* 117329c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117329c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117329cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117329ce:;
  /* 117329ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117329d1 push eax */
  push32((uint32_t)(EAX));
  /* 117329d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117329d5 push ecx */
  push32((uint32_t)(ECX));
  /* 117329d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117329d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117329db push edx */
  push32((uint32_t)(EDX));
  /* 117329dc call 0x11732c50 */
  push32(0x117329e1u); f_11732c50();
  /* 117329e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117329e4 jmp 0x11732b48 */
  goto L_11732b48;
L_117329e9:;
  /* 117329e9 cmp dword ptr [0x11752d70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117329f0 je 0x11732a20 */
  if (C.zf) goto L_11732a20;
  /* 117329f2 mov dword ptr [0x11752d70], 0 */
  w32((uint32_t)(0x11752d70), (0x0u));
  /* 117329fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117329ff push eax */
  push32((uint32_t)(EAX));
  /* 11732a00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732a03 push ecx */
  push32((uint32_t)(ECX));
  /* 11732a04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732a07 push edx */
  push32((uint32_t)(EDX));
  /* 11732a08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732a0b push eax */
  push32((uint32_t)(EAX));
  /* 11732a0c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732a0f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11732a15 push edx */
  push32((uint32_t)(EDX));
  /* 11732a16 call 0x11732db0 */
  push32(0x11732a1bu); f_11732db0();
  /* 11732a1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732a1e jmp 0x11732a42 */
  goto L_11732a42;
L_11732a20:;
  /* 11732a20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732a23 push eax */
  push32((uint32_t)(EAX));
  /* 11732a24 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732a27 push ecx */
  push32((uint32_t)(ECX));
  /* 11732a28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732a2b push edx */
  push32((uint32_t)(EDX));
  /* 11732a2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732a2f push eax */
  push32((uint32_t)(EAX));
  /* 11732a30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732a33 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11732a39 push edx */
  push32((uint32_t)(EDX));
  /* 11732a3a call 0x11732db0 */
  push32(0x11732a3fu); f_11732db0();
  /* 11732a3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11732a42:;
  /* 11732a42 jmp 0x11732b48 */
  goto L_11732b48;
L_11732a47:;
  /* 11732a47 mov dword ptr [0x11752d70], 0 */
  w32((uint32_t)(0x11752d70), (0x0u));
  /* 11732a51 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732a54 push eax */
  push32((uint32_t)(EAX));
  /* 11732a55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732a58 push ecx */
  push32((uint32_t)(ECX));
  /* 11732a59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732a5c push edx */
  push32((uint32_t)(EDX));
  /* 11732a5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732a60 push eax */
  push32((uint32_t)(EAX));
  /* 11732a61 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732a64 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11732a6a push edx */
  push32((uint32_t)(EDX));
  /* 11732a6b call 0x11732db0 */
  push32(0x11732a70u); f_11732db0();
  /* 11732a70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732a73 jmp 0x11732b48 */
  goto L_11732b48;
L_11732a78:;
  /* 11732a78 mov eax, dword ptr [0x11752d70] */
  EAX = (r32((uint32_t)(0x11752d70)));
  /* 11732a7d mov dword ptr [0x11752d80], eax */
  w32((uint32_t)(0x11752d80), (EAX));
  /* 11732a82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732a85 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11732a88 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732a89 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11732a8e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732a90 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11732a93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732a96 push edx */
  push32((uint32_t)(EDX));
  /* 11732a97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732a9a push eax */
  push32((uint32_t)(EAX));
  /* 11732a9b push 2 */
  push32((uint32_t)(0x2u));
  /* 11732a9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 11732aa1 call 0x11732c50 */
  push32(0x11732aa6u); f_11732c50();
  /* 11732aa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732aa9 jmp 0x11732b48 */
  goto L_11732b48;
L_11732aae:;
  /* 11732aae mov edx, dword ptr [0x11752d70] */
  EDX = (r32((uint32_t)(0x11752d70)));
  /* 11732ab4 mov dword ptr [0x11752d80], edx */
  w32((uint32_t)(0x11752d80), (EDX));
  /* 11732aba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732abd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11732ac0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732ac1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11732ac6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732ac8 mov ecx, eax */
  ECX = (EAX);
  /* 11732aca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732acd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11732ad0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732ad3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11732ad6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732ad7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11732adc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732ade add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732ae0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11732ae3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732ae6 push eax */
  push32((uint32_t)(EAX));
  /* 11732ae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732aea push ecx */
  push32((uint32_t)(ECX));
  /* 11732aeb push 4 */
  push32((uint32_t)(0x4u));
  /* 11732aed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732af0 push edx */
  push32((uint32_t)(EDX));
  /* 11732af1 call 0x11732c50 */
  push32(0x11732af6u); f_11732c50();
  /* 11732af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732af9 jmp 0x11732b48 */
  goto L_11732b48;
L_11732afb:;
  /* 11732afb call 0x11733c10 */
  push32(0x11732b00u); f_11733c10();
  /* 11732b00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732b03 push eax */
  push32((uint32_t)(EAX));
  /* 11732b04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732b07 push ecx */
  push32((uint32_t)(ECX));
  /* 11732b08 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11732b0d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732b11 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11732b14 mov ecx, dword ptr [eax*4 + 0x1175212c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1175212c)));
  /* 11732b1b push ecx */
  push32((uint32_t)(ECX));
  /* 11732b1c call 0x11732c00 */
  push32(0x11732b21u); f_11732c00();
  /* 11732b21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732b24 jmp 0x11732b48 */
  goto L_11732b48;
L_11732b26:;
  /* 11732b26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732b29 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11732b2b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11732b2e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732b31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11732b33 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732b39 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11732b3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732b3e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11732b40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732b43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732b46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11732b48:;
  /* 11732b48 pop esi */
  ESI = (pop32());
  /* 11732b49 mov esp, ebp */
  ESP = (EBP);
  /* 11732b4b pop ebp */
  EBP = (pop32());
  /* 11732b4c ret  */
  ESPCHK(0x117325e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11732c00 (72 bytes, 30 insns) */
void f_11732c00(void) {
  FTRACE(0x11732c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732c00 push ebp */
  push32((uint32_t)(EBP));
  /* 11732c01 mov ebp, esp */
  EBP = (ESP);
L_11732c03:;
  /* 11732c03 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732c06 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732c09 je 0x11732c46 */
  if (C.zf) goto L_11732c46;
  /* 11732c0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732c0e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11732c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11732c13 je 0x11732c46 */
  if (C.zf) goto L_11732c46;
  /* 11732c15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732c1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732c1d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11732c1f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11732c21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11732c26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732c29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c2c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11732c2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732c31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732c34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11732c37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732c3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11732c3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732c3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732c42 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11732c44 jmp 0x11732c03 */
  goto L_11732c03;
L_11732c46:;
  /* 11732c46 pop ebp */
  EBP = (pop32());
  /* 11732c47 ret  */
  ESPCHK(0x11732c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c50 @ 0x11732c50 (173 bytes, 64 insns) */
void f_11732c50(void) {
  FTRACE(0x11732c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11732c51 mov ebp, esp */
  EBP = (ESP);
  /* 11732c53 push ecx */
  push32((uint32_t)(ECX));
  /* 11732c54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11732c5b cmp dword ptr [0x11752d80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732c62 je 0x11732c7a */
  if (C.zf) goto L_11732c7a;
  /* 11732c64 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732c67 push eax */
  push32((uint32_t)(EAX));
  /* 11732c68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732c6b push ecx */
  push32((uint32_t)(ECX));
  /* 11732c6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732c6f push edx */
  push32((uint32_t)(EDX));
  /* 11732c70 call 0x11732d00 */
  push32(0x11732c75u); f_11732d00();
  /* 11732c75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732c78 jmp 0x11732cf9 */
  goto L_11732cf9;
L_11732c7a:;
  /* 11732c7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732c7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c80 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732c82 jae 0x11732cf0 */
  if (!C.cf) goto L_11732cf0;
  /* 11732c84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732c8a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11732c8d jmp 0x11732c98 */
  goto L_11732c98;
L_11732c8f:;
  /* 11732c8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732c95 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11732c98:;
  /* 11732c98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732c9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732c9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11732ca0 je 0x11732cd4 */
  if (C.zf) goto L_11732cd4;
  /* 11732ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732ca5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732ca6 mov ecx, 0xa */
  ECX = (0xau);
  /* 11732cab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732cad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732cb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732cb3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732cb5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732cb8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11732cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732cbe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732cbf mov ecx, 0xa */
  ECX = (0xau);
  /* 11732cc4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732cc6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11732cc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732ccc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732ccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11732cd2 jmp 0x11732c8f */
  goto L_11732c8f;
L_11732cd4:;
  /* 11732cd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732cd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732cd9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732cdc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732cdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11732ce1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732ce4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732ce6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732ce9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732cec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11732cee jmp 0x11732cf9 */
  goto L_11732cf9;
L_11732cf0:;
  /* 11732cf0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732cf3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11732cf9:;
  /* 11732cf9 mov esp, ebp */
  ESP = (EBP);
  /* 11732cfb pop ebp */
  EBP = (pop32());
  /* 11732cfc ret  */
  ESPCHK(0x11732c50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11732d00 (172 bytes, 65 insns) */
void f_11732d00(void) {
  FTRACE(0x11732d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11732d01 mov ebp, esp */
  EBP = (ESP);
  /* 11732d03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732d06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732d09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732d0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11732d0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732d11 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732d14 jbe 0x11732d5b */
  if ((C.cf||C.zf)) goto L_11732d5b;
L_11732d16:;
  /* 11732d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732d19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732d1a mov ecx, 0xa */
  ECX = (0xau);
  /* 11732d1f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732d21 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11732d29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732d2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11732d32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732d35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11732d37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732d3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732d3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11732d3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732d42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11732d43 mov ecx, 0xa */
  ECX = (0xau);
  /* 11732d48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11732d4a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11732d4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732d51 jle 0x11732d5b */
  if ((C.zf||C.sf!=C.of)) goto L_11732d5b;
  /* 11732d53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11732d56 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732d59 ja 0x11732d16 */
  if ((!C.cf&&!C.zf)) goto L_11732d16;
L_11732d5b:;
  /* 11732d5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732d5e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11732d60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11732d63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732d66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11732d6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d6e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732d71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11732d74:;
  /* 11732d74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d77 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11732d79 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11732d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11732d82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11732d84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11732d86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732d89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732d8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11732d8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11732d92 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11732d95 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11732d97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11732d9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732d9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11732da0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11732da3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732da6 jb 0x11732d74 */
  if (C.cf) goto L_11732d74;
  /* 11732da8 mov esp, ebp */
  ESP = (EBP);
  /* 11732daa pop ebp */
  EBP = (pop32());
  /* 11732dab ret  */
  ESPCHK(0x11732d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012db0 @ 0x11732db0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11732db0(void) {
  FTRACE(0x11732db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11732db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11732db1 mov ebp, esp */
  EBP = (ESP);
  /* 11732db3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11732db6:;
  /* 11732db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732db9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11732dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11732dbe je 0x1173322c */
  if (C.zf) goto L_1173322c;
  /* 11732dc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732dc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732dca je 0x1173322c */
  if (C.zf) goto L_1173322c;
  /* 11732dd0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11732dd4 mov dword ptr [0x11752d80], 0 */
  w32((uint32_t)(0x11752d80), (0x0u));
  /* 11732dde mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11732de5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732de8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11732deb jmp 0x11732df6 */
  goto L_11732df6;
L_11732ded:;
  /* 11732ded mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732df0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732df3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11732df6:;
  /* 11732df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732df9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11732dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732dff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11732e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732e08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11732e0b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732e0d jne 0x11732e11 */
  if (!C.zf) goto L_11732e11;
  /* 11732e0f jmp 0x11732ded */
  goto L_11732ded;
L_11732e11:;
  /* 11732e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11732e14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732e17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11732e1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732e1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11732e20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11732e23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732e26 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732e29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11732e2c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732e30 ja 0x11733180 */
  if ((!C.cf&&!C.zf)) goto L_11733180;
  /* 11732e36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11732e39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11732e3b mov al, byte ptr [ecx + 0x1173325c] */
  AL = (r8((uint32_t)(ECX + 0x1173325c)));
  /* 11732e41 jmp dword ptr [eax*4 + 0x11733230] */
  switch (EAX) {
    case 0: goto L_1173309f;
    case 1: goto L_11732f83;
    case 2: goto L_11732f0e;
    case 3: goto L_11732e48;
    case 4: goto L_11732e86;
    case 5: goto L_11732ee7;
    case 6: goto L_11732f35;
    case 7: goto L_11732f5c;
    case 8: goto L_11732fca;
    case 9: goto L_11732ec4;
    case 10: goto L_11733180;
    default: x86_unimpl("switch@0x11732e41 out of table"); return;
  }
L_11732e48:;
  /* 11732e48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732e4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11732e4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11732e51 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732e54 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11732e57 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732e5b ja 0x11732e81 */
  if ((!C.cf&&!C.zf)) goto L_11732e81;
  /* 11732e5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11732e60 jmp dword ptr [ecx*4 + 0x117332af] */
  switch (ECX) {
    case 0: goto L_11732e67;
    case 1: goto L_11732e71;
    case 2: goto L_11732e77;
    case 3: goto L_11732e7d;
    case 4: goto L_11732ea5;
    case 5: goto L_11732eaf;
    case 6: goto L_11732eb5;
    case 7: goto L_11732ebb;
    default: x86_unimpl("switch@0x11732e60 out of table"); return;
  }
L_11732e67:;
  /* 11732e67 mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732e71:;
  /* 11732e71 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11732e75 jmp 0x11732e81 */
  goto L_11732e81;
L_11732e77:;
  /* 11732e77 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11732e7b jmp 0x11732e81 */
  goto L_11732e81;
L_11732e7d:;
  /* 11732e7d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11732e81:;
  /* 11732e81 jmp 0x11733180 */
  goto L_11733180;
L_11732e86:;
  /* 11732e86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732e89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11732e8c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11732e8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11732e92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11732e95 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732e99 ja 0x11732ebf */
  if ((!C.cf&&!C.zf)) goto L_11732ebf;
  /* 11732e9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11732e9e jmp dword ptr [ecx*4 + 0x117332bf] */
  switch (ECX) {
    case 0: goto L_11732ea5;
    case 1: goto L_11732eaf;
    case 2: goto L_11732eb5;
    case 3: goto L_11732ebb;
    default: x86_unimpl("switch@0x11732e9e out of table"); return;
  }
L_11732ea5:;
  /* 11732ea5 mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732eaf:;
  /* 11732eaf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11732eb3 jmp 0x11732ebf */
  goto L_11732ebf;
L_11732eb5:;
  /* 11732eb5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11732eb9 jmp 0x11732ebf */
  goto L_11732ebf;
L_11732ebb:;
  /* 11732ebb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11732ebf:;
  /* 11732ebf jmp 0x11733180 */
  goto L_11733180;
L_11732ec4:;
  /* 11732ec4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732ec7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11732eca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ece je 0x11732ed8 */
  if (C.zf) goto L_11732ed8;
  /* 11732ed0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ed4 je 0x11732ede */
  if (C.zf) goto L_11732ede;
  /* 11732ed6 jmp 0x11732ee2 */
  goto L_11732ee2;
L_11732ed8:;
  /* 11732ed8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11732edc jmp 0x11732ee2 */
  goto L_11732ee2;
L_11732ede:;
  /* 11732ede mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11732ee2:;
  /* 11732ee2 jmp 0x11733180 */
  goto L_11733180;
L_11732ee7:;
  /* 11732ee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732eea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11732eed cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ef1 je 0x11732efb */
  if (C.zf) goto L_11732efb;
  /* 11732ef3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ef7 je 0x11732f05 */
  if (C.zf) goto L_11732f05;
  /* 11732ef9 jmp 0x11732f09 */
  goto L_11732f09;
L_11732efb:;
  /* 11732efb mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732f05:;
  /* 11732f05 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11732f09:;
  /* 11732f09 jmp 0x11733180 */
  goto L_11733180;
L_11732f0e:;
  /* 11732f0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732f11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11732f14 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f18 je 0x11732f22 */
  if (C.zf) goto L_11732f22;
  /* 11732f1a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f1e je 0x11732f2c */
  if (C.zf) goto L_11732f2c;
  /* 11732f20 jmp 0x11732f30 */
  goto L_11732f30;
L_11732f22:;
  /* 11732f22 mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732f2c:;
  /* 11732f2c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11732f30:;
  /* 11732f30 jmp 0x11733180 */
  goto L_11733180;
L_11732f35:;
  /* 11732f35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732f38 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11732f3b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f3f je 0x11732f49 */
  if (C.zf) goto L_11732f49;
  /* 11732f41 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f45 je 0x11732f53 */
  if (C.zf) goto L_11732f53;
  /* 11732f47 jmp 0x11732f57 */
  goto L_11732f57;
L_11732f49:;
  /* 11732f49 mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732f53:;
  /* 11732f53 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11732f57:;
  /* 11732f57 jmp 0x11733180 */
  goto L_11733180;
L_11732f5c:;
  /* 11732f5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11732f5f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11732f62 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f66 je 0x11732f70 */
  if (C.zf) goto L_11732f70;
  /* 11732f68 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732f6c je 0x11732f7a */
  if (C.zf) goto L_11732f7a;
  /* 11732f6e jmp 0x11732f7e */
  goto L_11732f7e;
L_11732f70:;
  /* 11732f70 mov dword ptr [0x11752d80], 1 */
  w32((uint32_t)(0x11752d80), (0x1u));
L_11732f7a:;
  /* 11732f7a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11732f7e:;
  /* 11732f7e jmp 0x11733180 */
  goto L_11733180;
L_11732f83:;
  /* 11732f83 push 0x1174e8d4 */
  push32((uint32_t)(0x1174e8d4u));
  /* 11732f88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732f8b push ecx */
  push32((uint32_t)(ECX));
  /* 11732f8c call 0x117337e0 */
  push32(0x11732f91u); f_117337e0();
  /* 11732f91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732f94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11732f96 jne 0x11732fa3 */
  if (!C.zf) goto L_11732fa3;
  /* 11732f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732f9b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11732fa1 jmp 0x11732fc1 */
  goto L_11732fc1;
L_11732fa3:;
  /* 11732fa3 push 0x1174e8d0 */
  push32((uint32_t)(0x1174e8d0u));
  /* 11732fa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732fab push eax */
  push32((uint32_t)(EAX));
  /* 11732fac call 0x117337e0 */
  push32(0x11732fb1u); f_117337e0();
  /* 11732fb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11732fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11732fb6 jne 0x11732fc1 */
  if (!C.zf) goto L_11732fc1;
  /* 11732fb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11732fbb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11732fbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11732fc1:;
  /* 11732fc1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11732fc5 jmp 0x11733180 */
  goto L_11733180;
L_11732fca:;
  /* 11732fca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11732fcd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732fd1 jg 0x11732fe1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11732fe1;
  /* 11732fd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732fd6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11732fdc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11732fdf jmp 0x11732fed */
  goto L_11732fed;
L_11732fe1:;
  /* 11732fe1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11732fe4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11732fea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11732fed:;
  /* 11732fed cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ff1 jle 0x11733094 */
  if ((C.zf||C.sf!=C.of)) goto L_11733094;
  /* 11732ff7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11732ffa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11732ffd jbe 0x11733094 */
  if ((C.cf||C.zf)) goto L_11733094;
  /* 11733003 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11733006 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733008 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1173300a mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 11733010 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733012 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11733016 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1173301c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1173301e je 0x11733057 */
  if (C.zf) goto L_11733057;
  /* 11733020 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733023 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733026 jbe 0x11733057 */
  if ((C.cf||C.zf)) goto L_11733057;
  /* 11733028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173302b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1173302d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11733030 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11733032 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11733034 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733037 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11733039 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173303c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173303f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11733041 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11733044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733047 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1173304a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173304d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1173304f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733052 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733055 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11733057:;
  /* 11733057 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173305a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1173305c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173305f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11733061 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11733063 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733066 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11733068 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173306b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173306e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11733070 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11733073 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733076 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11733079 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173307c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1173307e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733081 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733084 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11733086 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733089 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173308c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1173308f jmp 0x11732fed */
  goto L_11732fed;
L_11733094:;
  /* 11733094 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733097 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173309a jmp 0x11732db6 */
  goto L_11732db6;
L_1173309f:;
  /* 1173309f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117330a2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117330a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117330a7 je 0x11733172 */
  if (C.zf) goto L_11733172;
  /* 117330ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117330b0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117330b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_117330b6:;
  /* 117330b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117330b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117330bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117330be je 0x11733170 */
  if (C.zf) goto L_11733170;
  /* 117330c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117330c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117330ca je 0x11733170 */
  if (C.zf) goto L_11733170;
  /* 117330d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117330d3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117330d6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117330d9 jne 0x117330e9 */
  if (!C.zf) goto L_117330e9;
  /* 117330db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117330de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117330e1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117330e4 jmp 0x11733170 */
  goto L_11733170;
L_117330e9:;
  /* 117330e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117330ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117330ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117330f0 mov edx, dword ptr [0x11750f38] */
  EDX = (r32((uint32_t)(0x11750f38)));
  /* 117330f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117330f8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117330fc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11733101 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733103 je 0x1173313c */
  if (C.zf) goto L_1173313c;
  /* 11733105 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733108 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173310b jbe 0x1173313c */
  if ((C.cf||C.zf)) goto L_1173313c;
  /* 1173310d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733110 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11733112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733115 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11733117 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11733119 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173311c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1173311e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733121 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733124 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11733126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733129 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173312c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173312f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733132 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11733134 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733137 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173313a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1173313c:;
  /* 1173313c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173313f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11733141 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733144 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11733146 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11733148 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173314b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1173314d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733150 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733153 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11733155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733158 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173315b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1173315e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733161 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11733163 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733166 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733169 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1173316b jmp 0x117330b6 */
  goto L_117330b6;
L_11733170:;
  /* 11733170 jmp 0x1173317b */
  goto L_1173317b;
L_11733172:;
  /* 11733172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733175 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733178 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1173317b:;
  /* 1173317b jmp 0x11732db6 */
  goto L_11732db6;
L_11733180:;
  /* 11733180 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11733184 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11733186 je 0x117331ac */
  if (C.zf) goto L_117331ac;
  /* 11733188 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173318b push edx */
  push32((uint32_t)(EDX));
  /* 1173318c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173318f push eax */
  push32((uint32_t)(EAX));
  /* 11733190 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733193 push ecx */
  push32((uint32_t)(ECX));
  /* 11733194 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11733197 push edx */
  push32((uint32_t)(EDX));
  /* 11733198 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1173319b push eax */
  push32((uint32_t)(EAX));
  /* 1173319c call 0x117325e0 */
  push32(0x117331a1u); f_117325e0();
  /* 117331a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117331a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117331a7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117331aa jmp 0x11733227 */
  goto L_11733227;
L_117331ac:;
  /* 117331ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117331af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117331b1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117331b3 mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 117331b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117331bb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117331bf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117331c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117331c7 je 0x117331f8 */
  if (C.zf) goto L_117331f8;
  /* 117331c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117331cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117331ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117331d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117331d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117331d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117331d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117331da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117331dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117331e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117331e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117331e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117331e8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117331eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117331ee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117331f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117331f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117331f6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117331f8:;
  /* 117331f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117331fb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117331fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733200 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11733202 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11733204 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733207 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11733209 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173320c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173320f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11733211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733214 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733217 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173321a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173321d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1173321f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733222 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733225 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11733227:;
  /* 11733227 jmp 0x11732db6 */
  goto L_11732db6;
L_1173322c:;
  /* 1173322c mov esp, ebp */
  ESP = (EBP);
  /* 1173322e pop ebp */
  EBP = (pop32());
  /* 1173322f ret  */
  ESPCHK(0x11732db0u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x117332d0 (650 bytes, 178 insns) */
void f_117332d0(void) {
  FTRACE(0x117332d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117332d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117332d1 mov ebp, esp */
  EBP = (ESP);
  /* 117332d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117332d9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117332dd jne 0x11733439 */
  if (!C.zf) goto L_11733439;
  /* 117332e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117332e6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 117332ec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 117332f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117332f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117332fc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11733306 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733308 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1173330e push edx */
  push32((uint32_t)(EDX));
  /* 1173330f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733312 push eax */
  push32((uint32_t)(EAX));
  /* 11733313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733316 push ecx */
  push32((uint32_t)(ECX));
  /* 11733317 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173331a push edx */
  push32((uint32_t)(EDX));
  /* 1173331b call 0x117346f0 */
  push32(0x11733320u); f_117346f0();
  /* 11733320 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733323 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11733326 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173332a jne 0x117333bf */
  if (!C.zf) goto L_117333bf;
  /* 11733330 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x11733336u);
  /* 11733336 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733339 je 0x11733340 */
  if (C.zf) goto L_11733340;
  /* 1173333b jmp 0x1173341d */
  goto L_1173341d;
L_11733340:;
  /* 11733340 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733342 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733344 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733346 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733349 push eax */
  push32((uint32_t)(EAX));
  /* 1173334a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173334d push ecx */
  push32((uint32_t)(ECX));
  /* 1173334e call 0x117346f0 */
  push32(0x11733353u); f_117346f0();
  /* 11733353 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733356 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1173335c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733363 jne 0x1173336a */
  if (!C.zf) goto L_1173336a;
  /* 11733365 jmp 0x1173341d */
  goto L_1173341d;
L_1173336a:;
  /* 1173336a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1173336c push 0x1174e8dc */
  push32((uint32_t)(0x1174e8dcu));
  /* 11733371 push 2 */
  push32((uint32_t)(0x2u));
  /* 11733373 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11733379 push edx */
  push32((uint32_t)(EDX));
  /* 1173337a call 0x11723c00 */
  push32(0x1173337fu); f_11723c00();
  /* 1173337f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11733385 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733389 jne 0x11733390 */
  if (!C.zf) goto L_11733390;
  /* 1173338b jmp 0x1173341d */
  goto L_1173341d;
L_11733390:;
  /* 11733390 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11733397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733399 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1173339f push eax */
  push32((uint32_t)(EAX));
  /* 117333a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117333a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117333a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117333a7 push edx */
  push32((uint32_t)(EDX));
  /* 117333a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117333ab push eax */
  push32((uint32_t)(EAX));
  /* 117333ac call 0x117346f0 */
  push32(0x117333b1u); f_117346f0();
  /* 117333b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117333b4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117333b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117333bb jne 0x117333bf */
  if (!C.zf) goto L_117333bf;
  /* 117333bd jmp 0x1173341d */
  goto L_1173341d;
L_117333bf:;
  /* 117333bf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 117333c1 push 0x1174e8dc */
  push32((uint32_t)(0x1174e8dcu));
  /* 117333c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117333c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117333cb push ecx */
  push32((uint32_t)(ECX));
  /* 117333cc call 0x11723c00 */
  push32(0x117333d1u); f_11723c00();
  /* 117333d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117333d4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 117333da mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117333dc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 117333e2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117333e5 jne 0x117333e9 */
  if (!C.zf) goto L_117333e9;
  /* 117333e7 jmp 0x1173341d */
  goto L_1173341d;
L_117333e9:;
  /* 117333e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117333ec push ecx */
  push32((uint32_t)(ECX));
  /* 117333ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117333f0 push edx */
  push32((uint32_t)(EDX));
  /* 117333f1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 117333f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117333f9 push ecx */
  push32((uint32_t)(ECX));
  /* 117333fa call 0x11728a90 */
  push32(0x117333ffu); f_11728a90();
  /* 117333ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733402 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733406 je 0x11733416 */
  if (C.zf) goto L_11733416;
  /* 11733408 push 2 */
  push32((uint32_t)(0x2u));
  /* 1173340a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173340d push edx */
  push32((uint32_t)(EDX));
  /* 1173340e call 0x11724690 */
  push32(0x11733413u); f_11724690();
  /* 11733413 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11733416:;
  /* 11733416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733418 jmp 0x11733556 */
  goto L_11733556;
L_1173341d:;
  /* 1173341d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733421 je 0x11733431 */
  if (C.zf) goto L_11733431;
  /* 11733423 push 2 */
  push32((uint32_t)(0x2u));
  /* 11733425 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733428 push eax */
  push32((uint32_t)(EAX));
  /* 11733429 call 0x11724690 */
  push32(0x1173342eu); f_11724690();
  /* 1173342e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11733431:;
  /* 11733431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11733434 jmp 0x11733556 */
  goto L_11733556;
L_11733439:;
  /* 11733439 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173343d jne 0x11733553 */
  if (!C.zf) goto L_11733553;
  /* 11733443 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1173344d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11733450 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11733456 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733458 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1173345e push edx */
  push32((uint32_t)(EDX));
  /* 1173345f push 0x11752c94 */
  push32((uint32_t)(0x11752c94u));
  /* 11733464 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733467 push eax */
  push32((uint32_t)(EAX));
  /* 11733468 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173346b push ecx */
  push32((uint32_t)(ECX));
  /* 1173346c call 0x11734550 */
  push32(0x11733471u); f_11734550();
  /* 11733471 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733476 jne 0x11733480 */
  if (!C.zf) goto L_11733480;
  /* 11733478 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173347b jmp 0x11733556 */
  goto L_11733556;
L_11733480:;
  /* 11733480 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11733486 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11733489 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11733493 jmp 0x117334a4 */
  goto L_117334a4;
L_11733495:;
  /* 11733495 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1173349b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173349e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_117334a4:;
  /* 117334a4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117334ab jge 0x1173354f */
  if ((C.sf==C.of)) goto L_1173354f;
  /* 117334b1 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117334b8 jle 0x117334eb */
  if ((C.zf||C.sf!=C.of)) goto L_117334eb;
  /* 117334ba push 4 */
  push32((uint32_t)(0x4u));
  /* 117334bc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117334c2 mov dl, byte ptr [ecx*2 + 0x11752c94] */
  DL = (r8((uint32_t)(ECX*2 + 0x11752c94)));
  /* 117334c9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 117334cf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 117334d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117334da push eax */
  push32((uint32_t)(EAX));
  /* 117334db call 0x1172aea0 */
  push32(0x117334e0u); f_1172aea0();
  /* 117334e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117334e3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 117334e9 jmp 0x1173351e */
  goto L_1173351e;
L_117334eb:;
  /* 117334eb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 117334f1 mov dl, byte ptr [ecx*2 + 0x11752c94] */
  DL = (r8((uint32_t)(ECX*2 + 0x11752c94)));
  /* 117334f8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 117334fe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11733504 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11733509 mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 1173350f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733511 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11733515 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11733518 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1173351e:;
  /* 1173351e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733525 je 0x11733548 */
  if (C.zf) goto L_11733548;
  /* 11733527 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1173352d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11733530 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733533 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1173353a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1173353e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11733544 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11733546 jmp 0x1173354a */
  goto L_1173354a;
L_11733548:;
  /* 11733548 jmp 0x1173354f */
  goto L_1173354f;
L_1173354a:;
  /* 1173354a jmp 0x11733495 */
  goto L_11733495;
L_1173354f:;
  /* 1173354f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733551 jmp 0x11733556 */
  goto L_11733556;
L_11733553:;
  /* 11733553 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11733556:;
  /* 11733556 mov esp, ebp */
  ESP = (EBP);
  /* 11733558 pop ebp */
  EBP = (pop32());
  /* 11733559 ret  */
  ESPCHK(0x117332d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013560 @ 0x11733560 (10 bytes, 5 insns) */
void f_11733560(void) {
  FTRACE(0x11733560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733560 push ebp */
  push32((uint32_t)(EBP));
  /* 11733561 mov ebp, esp */
  EBP = (ESP);
  /* 11733563 mov eax, dword ptr [0x11752098] */
  EAX = (r32((uint32_t)(0x11752098)));
  /* 11733568 pop ebp */
  EBP = (pop32());
  /* 11733569 ret  */
  ESPCHK(0x11733560u, _esp0);
  ESP += 4; return;
}

/* FUN_10013570 @ 0x11733570 (575 bytes, 196 insns) */
void f_11733570(void) {
  FTRACE(0x11733570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733570 push ebp */
  push32((uint32_t)(EBP));
  /* 11733571 mov ebp, esp */
  EBP = (ESP);
  /* 11733573 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11733575 push 0x1174e8e8 */
  push32((uint32_t)(0x1174e8e8u));
  /* 1173357a push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 1173357f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11733585 push eax */
  push32((uint32_t)(EAX));
  /* 11733586 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1173358d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733590 push ebx */
  push32((uint32_t)(EBX));
  /* 11733591 push esi */
  push32((uint32_t)(ESI));
  /* 11733592 push edi */
  push32((uint32_t)(EDI));
  /* 11733593 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11733596 cmp dword ptr [0x11752ca0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752ca0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173359d jne 0x117335ee */
  if (!C.zf) goto L_117335ee;
  /* 1173359f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117335a2 push eax */
  push32((uint32_t)(EAX));
  /* 117335a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117335a5 push 0x1174e01c */
  push32((uint32_t)(0x1174e01cu));
  /* 117335aa push 1 */
  push32((uint32_t)(0x1u));
  /* 117335ac call dword ptr [0x117552b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b8))), 0x117335b2u);
  /* 117335b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117335b4 je 0x117335c2 */
  if (C.zf) goto L_117335c2;
  /* 117335b6 mov dword ptr [0x11752ca0], 1 */
  w32((uint32_t)(0x11752ca0), (0x1u));
  /* 117335c0 jmp 0x117335ee */
  goto L_117335ee;
L_117335c2:;
  /* 117335c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 117335c5 push ecx */
  push32((uint32_t)(ECX));
  /* 117335c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117335c8 push 0x1174e018 */
  push32((uint32_t)(0x1174e018u));
  /* 117335cd push 1 */
  push32((uint32_t)(0x1u));
  /* 117335cf push 0 */
  push32((uint32_t)(0x0u));
  /* 117335d1 call dword ptr [0x117552bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552bc))), 0x117335d7u);
  /* 117335d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117335d9 je 0x117335e7 */
  if (C.zf) goto L_117335e7;
  /* 117335db mov dword ptr [0x11752ca0], 2 */
  w32((uint32_t)(0x11752ca0), (0x2u));
  /* 117335e5 jmp 0x117335ee */
  goto L_117335ee;
L_117335e7:;
  /* 117335e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117335e9 jmp 0x117337c9 */
  goto L_117337c9;
L_117335ee:;
  /* 117335ee cmp dword ptr [0x11752ca0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752ca0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117335f5 jne 0x11733612 */
  if (!C.zf) goto L_11733612;
  /* 117335f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117335fa push edx */
  push32((uint32_t)(EDX));
  /* 117335fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117335fe push eax */
  push32((uint32_t)(EAX));
  /* 117335ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11733602 push ecx */
  push32((uint32_t)(ECX));
  /* 11733603 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733606 push edx */
  push32((uint32_t)(EDX));
  /* 11733607 call dword ptr [0x117552b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b8))), 0x1173360du);
  /* 1173360d jmp 0x117337c9 */
  goto L_117337c9;
L_11733612:;
  /* 11733612 cmp dword ptr [0x11752ca0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752ca0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733619 jne 0x117337c7 */
  if (!C.zf) goto L_117337c7;
  /* 1173361f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733623 jne 0x1173362d */
  if (!C.zf) goto L_1173362d;
  /* 11733625 mov eax, dword ptr [0x11752c14] */
  EAX = (r32((uint32_t)(0x11752c14)));
  /* 1173362a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1173362d:;
  /* 1173362d push 0 */
  push32((uint32_t)(0x0u));
  /* 1173362f push 0 */
  push32((uint32_t)(0x0u));
  /* 11733631 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733633 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733635 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733638 push ecx */
  push32((uint32_t)(ECX));
  /* 11733639 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173363c push edx */
  push32((uint32_t)(EDX));
  /* 1173363d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11733642 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11733645 push eax */
  push32((uint32_t)(EAX));
  /* 11733646 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x1173364cu);
  /* 1173364c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1173364f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733653 jne 0x1173365c */
  if (!C.zf) goto L_1173365c;
  /* 11733655 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733657 jmp 0x117337c9 */
  goto L_117337c9;
L_1173365c:;
  /* 1173365c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11733663 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11733666 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733669 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1173366b call 0x11728410 */
  push32(0x11733670u); f_11728410();
  /* 11733670 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11733673 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11733676 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11733679 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1173367c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1173367f push edx */
  push32((uint32_t)(EDX));
  /* 11733680 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733682 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11733685 push eax */
  push32((uint32_t)(EAX));
  /* 11733686 call 0x11728c00 */
  push32(0x1173368bu); f_11728c00();
  /* 1173368b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173368e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11733695 jmp 0x117336ae */
  goto L_117336ae;
  /* 11733697 mov eax, 1 */
  EAX = (0x1u);
  /* 1173369c ret  */
  ESPCHK(0x11733570u, _esp0);
  ESP += 4; return;
  /* 1173369d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117336a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 117336a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117336ae:;
  /* 117336ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117336b2 jne 0x117336bb */
  if (!C.zf) goto L_117336bb;
  /* 117336b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117336b6 jmp 0x117337c9 */
  goto L_117337c9;
L_117336bb:;
  /* 117336bb push 0 */
  push32((uint32_t)(0x0u));
  /* 117336bd push 0 */
  push32((uint32_t)(0x0u));
  /* 117336bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117336c2 push ecx */
  push32((uint32_t)(ECX));
  /* 117336c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117336c6 push edx */
  push32((uint32_t)(EDX));
  /* 117336c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117336ca push eax */
  push32((uint32_t)(EAX));
  /* 117336cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117336ce push ecx */
  push32((uint32_t)(ECX));
  /* 117336cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117336d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117336d7 push edx */
  push32((uint32_t)(EDX));
  /* 117336d8 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x117336deu);
  /* 117336de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117336e0 jne 0x117336e9 */
  if (!C.zf) goto L_117336e9;
  /* 117336e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117336e4 jmp 0x117337c9 */
  goto L_117337c9;
L_117336e9:;
  /* 117336e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117336f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117336f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 117336f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117336fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117336fc call 0x11728410 */
  push32(0x11733701u); f_11728410();
  /* 11733701 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11733704 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11733707 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1173370a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1173370d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11733714 jmp 0x1173372d */
  goto L_1173372d;
  /* 11733716 mov eax, 1 */
  EAX = (0x1u);
  /* 1173371b ret  */
  ESPCHK(0x11733570u, _esp0);
  ESP += 4; return;
  /* 1173371c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1173371f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11733726 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1173372d:;
  /* 1173372d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733731 jne 0x1173373a */
  if (!C.zf) goto L_1173373a;
  /* 11733733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733735 jmp 0x117337c9 */
  goto L_117337c9;
L_1173373a:;
  /* 1173373a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173373e jne 0x11733749 */
  if (!C.zf) goto L_11733749;
  /* 11733740 mov edx, dword ptr [0x11752c04] */
  EDX = (r32((uint32_t)(0x11752c04)));
  /* 11733746 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11733749:;
  /* 11733749 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173374c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1173374f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11733755 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733758 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1173375b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11733762 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11733765 push ecx */
  push32((uint32_t)(ECX));
  /* 11733766 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11733769 push edx */
  push32((uint32_t)(EDX));
  /* 1173376a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1173376d push eax */
  push32((uint32_t)(EAX));
  /* 1173376e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733771 push ecx */
  push32((uint32_t)(ECX));
  /* 11733772 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11733775 push edx */
  push32((uint32_t)(EDX));
  /* 11733776 call dword ptr [0x117552bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552bc))), 0x1173377cu);
  /* 1173377c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1173377f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733782 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11733785 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733787 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1173378c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733792 je 0x117337a8 */
  if (C.zf) goto L_117337a8;
  /* 11733794 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11733797 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1173379a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1173379c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117337a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117337a6 je 0x117337ac */
  if (C.zf) goto L_117337ac;
L_117337a8:;
  /* 117337a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117337aa jmp 0x117337c9 */
  goto L_117337c9;
L_117337ac:;
  /* 117337ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117337af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117337b1 push eax */
  push32((uint32_t)(EAX));
  /* 117337b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117337b5 push ecx */
  push32((uint32_t)(ECX));
  /* 117337b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117337b9 push edx */
  push32((uint32_t)(EDX));
  /* 117337ba call 0x1172b200 */
  push32(0x117337bfu); f_1172b200();
  /* 117337bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117337c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117337c5 jmp 0x117337c9 */
  goto L_117337c9;
L_117337c7:;
  /* 117337c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117337c9:;
  /* 117337c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 117337cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117337cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117337d6 pop edi */
  EDI = (pop32());
  /* 117337d7 pop esi */
  ESI = (pop32());
  /* 117337d8 pop ebx */
  EBX = (pop32());
  /* 117337d9 mov esp, ebp */
  ESP = (EBP);
  /* 117337db pop ebp */
  EBP = (pop32());
  /* 117337dc ret  */
  ESPCHK(0x11733570u, _esp0);
  ESP += 4; return;
}

/* FUN_100137e0 @ 0x117337e0 (208 bytes, 85 insns) */
void f_117337e0(void) {
  FTRACE(0x117337e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117337e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117337e1 mov ebp, esp */
  EBP = (ESP);
  /* 117337e3 push edi */
  push32((uint32_t)(EDI));
  /* 117337e4 push esi */
  push32((uint32_t)(ESI));
  /* 117337e5 push ebx */
  push32((uint32_t)(EBX));
  /* 117337e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117337e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117337ec lea eax, [0x11752bfc] */
  EAX = ((uint32_t)(0x11752bfc));
  /* 117337f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117337f6 jne 0x11733833 */
  if (!C.zf) goto L_11733833;
  /* 117337f8 mov al, 0xff */
  AL = (0xffu);
  /* 117337fa mov edi, edi */
  EDI = (EDI);
L_117337fc:;
  /* 117337fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117337fe je 0x1173382e */
  if (C.zf) goto L_1173382e;
  /* 11733800 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11733802 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11733803 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11733805 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11733806 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733808 je 0x117337fc */
  if (C.zf) goto L_117337fc;
  /* 1173380a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1173380c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1173380e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11733810 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11733813 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11733815 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11733817 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11733819 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1173381b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1173381d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1173381f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11733822 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11733824 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11733826 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733828 je 0x117337fc */
  if (C.zf) goto L_117337fc;
  /* 1173382a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1173382c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1173382e:;
  /* 1173382e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11733831 jmp 0x117338ab */
  goto L_117338ab;
L_11733833:;
  /* 11733833 lock inc dword ptr [0x11752d94] */
  x86_unimpl("lock inc @ 0x11733833");
  /* 1173383a cmp dword ptr [0x11752d84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733841 jg 0x11733847 */
  if ((!C.zf&&C.sf==C.of)) goto L_11733847;
  /* 11733843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733845 jmp 0x1173385c */
  goto L_1173385c;
L_11733847:;
  /* 11733847 lock dec dword ptr [0x11752d94] */
  x86_unimpl("lock dec @ 0x11733847");
  /* 1173384e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11733850 call 0x11723b00 */
  push32(0x11733855u); f_11723b00();
  /* 11733855 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1173385c:;
  /* 1173385c mov eax, 0xff */
  EAX = (0xffu);
  /* 11733861 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11733863 nop  */
  /* nop */
L_11733864:;
  /* 11733864 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11733866 je 0x1173388f */
  if (C.zf) goto L_1173388f;
  /* 11733868 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1173386a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1173386b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1173386d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1173386e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733870 je 0x11733864 */
  if (C.zf) goto L_11733864;
  /* 11733872 push eax */
  push32((uint32_t)(EAX));
  /* 11733873 push ebx */
  push32((uint32_t)(EBX));
  /* 11733874 call 0x11734950 */
  push32(0x11733879u); f_11734950();
  /* 11733879 mov ebx, eax */
  EBX = (EAX);
  /* 1173387b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173387e call 0x11734950 */
  push32(0x11733883u); f_11734950();
  /* 11733883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733886 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733888 je 0x11733864 */
  if (C.zf) goto L_11733864;
  /* 1173388a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173388c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1173388f:;
  /* 1173388f mov ebx, eax */
  EBX = (EAX);
  /* 11733891 pop eax */
  EAX = (pop32());
  /* 11733892 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733894 jne 0x1173389f */
  if (!C.zf) goto L_1173389f;
  /* 11733896 lock dec dword ptr [0x11752d94] */
  x86_unimpl("lock dec @ 0x11733896");
  /* 1173389d jmp 0x117338a9 */
  goto L_117338a9;
L_1173389f:;
  /* 1173389f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117338a1 call 0x11723ba0 */
  push32(0x117338a6u); f_11723ba0();
  /* 117338a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117338a9:;
  /* 117338a9 mov eax, ebx */
  EAX = (EBX);
L_117338ab:;
  /* 117338ab pop ebx */
  EBX = (pop32());
  /* 117338ac pop esi */
  ESI = (pop32());
  /* 117338ad pop edi */
  EDI = (pop32());
  /* 117338ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117338af ret  */
  ESPCHK(0x117337e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x117338b0 (257 bytes, 103 insns) */
void f_117338b0(void) {
  FTRACE(0x117338b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117338b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117338b1 mov ebp, esp */
  EBP = (ESP);
  /* 117338b3 push edi */
  push32((uint32_t)(EDI));
  /* 117338b4 push esi */
  push32((uint32_t)(ESI));
  /* 117338b5 push ebx */
  push32((uint32_t)(EBX));
  /* 117338b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117338b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117338bb je 0x117339aa */
  if (C.zf) goto L_117339aa;
  /* 117338c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 117338c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 117338c7 lea eax, [0x11752bfc] */
  EAX = ((uint32_t)(0x11752bfc));
  /* 117338cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117338d1 jne 0x11733921 */
  if (!C.zf) goto L_11733921;
  /* 117338d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 117338d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 117338d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 117338d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117338dc:;
  /* 117338dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 117338de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 117338e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 117338e2 je 0x11733905 */
  if (C.zf) goto L_11733905;
  /* 117338e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 117338e6 je 0x11733905 */
  if (C.zf) goto L_11733905;
  /* 117338e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117338e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117338ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117338ec jb 0x117338f4 */
  if (C.cf) goto L_117338f4;
  /* 117338ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117338f0 ja 0x117338f4 */
  if ((!C.cf&&!C.zf)) goto L_117338f4;
  /* 117338f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_117338f4:;
  /* 117338f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117338f6 jb 0x117338fe */
  if (C.cf) goto L_117338fe;
  /* 117338f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117338fa ja 0x117338fe */
  if ((!C.cf&&!C.zf)) goto L_117338fe;
  /* 117338fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_117338fe:;
  /* 117338fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733900 jne 0x1173390f */
  if (!C.zf) goto L_1173390f;
  /* 11733902 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11733903 jne 0x117338dc */
  if (!C.zf) goto L_117338dc;
L_11733905:;
  /* 11733905 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11733907 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11733909 je 0x117339aa */
  if (C.zf) goto L_117339aa;
L_1173390f:;
  /* 1173390f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11733914 jb 0x117339aa */
  if (C.cf) goto L_117339aa;
  /* 1173391a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1173391c jmp 0x117339aa */
  goto L_117339aa;
L_11733921:;
  /* 11733921 lock inc dword ptr [0x11752d94] */
  x86_unimpl("lock inc @ 0x11733921");
  /* 11733928 cmp dword ptr [0x11752d84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173392f jg 0x11733935 */
  if ((!C.zf&&C.sf==C.of)) goto L_11733935;
  /* 11733931 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733933 jmp 0x1173394e */
  goto L_1173394e;
L_11733935:;
  /* 11733935 lock dec dword ptr [0x11752d94] */
  x86_unimpl("lock dec @ 0x11733935");
  /* 1173393c mov ebx, ecx */
  EBX = (ECX);
  /* 1173393e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11733940 call 0x11723b00 */
  push32(0x11733945u); f_11723b00();
  /* 11733945 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1173394c mov ecx, ebx */
  ECX = (EBX);
L_1173394e:;
  /* 1173394e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733950 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11733952 mov edi, edi */
  EDI = (EDI);
L_11733954:;
  /* 11733954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11733956 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733958 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1173395a je 0x1173397f */
  if (C.zf) goto L_1173397f;
  /* 1173395c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1173395e je 0x1173397f */
  if (C.zf) goto L_1173397f;
  /* 11733960 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11733961 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11733962 push ecx */
  push32((uint32_t)(ECX));
  /* 11733963 push eax */
  push32((uint32_t)(EAX));
  /* 11733964 push ebx */
  push32((uint32_t)(EBX));
  /* 11733965 call 0x11734950 */
  push32(0x1173396au); f_11734950();
  /* 1173396a mov ebx, eax */
  EBX = (EAX);
  /* 1173396c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173396f call 0x11734950 */
  push32(0x11733974u); f_11734950();
  /* 11733974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733977 pop ecx */
  ECX = (pop32());
  /* 11733978 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173397a jne 0x11733985 */
  if (!C.zf) goto L_11733985;
  /* 1173397c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1173397d jne 0x11733954 */
  if (!C.zf) goto L_11733954;
L_1173397f:;
  /* 1173397f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11733981 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733983 je 0x1173398e */
  if (C.zf) goto L_1173398e;
L_11733985:;
  /* 11733985 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1173398a jb 0x1173398e */
  if (C.cf) goto L_1173398e;
  /* 1173398c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1173398e:;
  /* 1173398e pop eax */
  EAX = (pop32());
  /* 1173398f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733991 jne 0x1173399c */
  if (!C.zf) goto L_1173399c;
  /* 11733993 lock dec dword ptr [0x11752d94] */
  x86_unimpl("lock dec @ 0x11733993");
  /* 1173399a jmp 0x117339aa */
  goto L_117339aa;
L_1173399c:;
  /* 1173399c mov ebx, ecx */
  EBX = (ECX);
  /* 1173399e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117339a0 call 0x11723ba0 */
  push32(0x117339a5u); f_11723ba0();
  /* 117339a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117339a8 mov ecx, ebx */
  ECX = (EBX);
L_117339aa:;
  /* 117339aa mov eax, ecx */
  EAX = (ECX);
  /* 117339ac pop ebx */
  EBX = (pop32());
  /* 117339ad pop esi */
  ESI = (pop32());
  /* 117339ae pop edi */
  EDI = (pop32());
  /* 117339af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117339b0 ret  */
  ESPCHK(0x117338b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100139c0 @ 0x117339c0 (255 bytes, 88 insns) */
void f_117339c0(void) {
  FTRACE(0x117339c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117339c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117339c1 mov ebp, esp */
  EBP = (ESP);
  /* 117339c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_117339c6:;
  /* 117339c6 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117339cd jle 0x117339e6 */
  if ((C.zf||C.sf!=C.of)) goto L_117339e6;
  /* 117339cf push 8 */
  push32((uint32_t)(0x8u));
  /* 117339d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117339d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117339d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117339d8 push ecx */
  push32((uint32_t)(ECX));
  /* 117339d9 call 0x1172aea0 */
  push32(0x117339deu); f_1172aea0();
  /* 117339de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117339e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117339e4 jmp 0x117339ff */
  goto L_117339ff;
L_117339e6:;
  /* 117339e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117339e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117339eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117339ed mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 117339f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117339f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 117339f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117339fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_117339ff:;
  /* 117339ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733a03 je 0x11733a10 */
  if (C.zf) goto L_11733a10;
  /* 11733a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733a0b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11733a0e jmp 0x117339c6 */
  goto L_117339c6;
L_11733a10:;
  /* 11733a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733a15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11733a17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11733a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733a20 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11733a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733a26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733a29 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733a2d je 0x11733a35 */
  if (C.zf) goto L_11733a35;
  /* 11733a2f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733a33 jne 0x11733a48 */
  if (!C.zf) goto L_11733a48;
L_11733a35:;
  /* 11733a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733a3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11733a3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11733a3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733a45 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11733a48:;
  /* 11733a48 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11733a4f:;
  /* 11733a4f cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733a56 jle 0x11733a6b */
  if ((C.zf||C.sf!=C.of)) goto L_11733a6b;
  /* 11733a58 push 4 */
  push32((uint32_t)(0x4u));
  /* 11733a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733a5d push edx */
  push32((uint32_t)(EDX));
  /* 11733a5e call 0x1172aea0 */
  push32(0x11733a63u); f_1172aea0();
  /* 11733a63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733a66 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11733a69 jmp 0x11733a80 */
  goto L_11733a80;
L_11733a6b:;
  /* 11733a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733a6e mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 11733a74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733a76 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11733a7a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11733a7d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11733a80:;
  /* 11733a80 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733a84 je 0x11733aab */
  if (C.zf) goto L_11733aab;
  /* 11733a86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11733a89 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733a8f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11733a93 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11733a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733a99 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11733a9b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11733a9d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11733aa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733aa3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733aa6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11733aa9 jmp 0x11733a4f */
  goto L_11733a4f;
L_11733aab:;
  /* 11733aab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733aaf jne 0x11733ab8 */
  if (!C.zf) goto L_11733ab8;
  /* 11733ab1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11733ab4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11733ab6 jmp 0x11733abb */
  goto L_11733abb;
L_11733ab8:;
  /* 11733ab8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11733abb:;
  /* 11733abb mov esp, ebp */
  ESP = (EBP);
  /* 11733abd pop ebp */
  EBP = (pop32());
  /* 11733abe ret  */
  ESPCHK(0x117339c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ac0 @ 0x11733ac0 (17 bytes, 8 insns) */
void f_11733ac0(void) {
  FTRACE(0x11733ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11733ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11733ac3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733ac6 push eax */
  push32((uint32_t)(EAX));
  /* 11733ac7 call 0x117339c0 */
  push32(0x11733accu); f_117339c0();
  /* 11733acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733acf pop ebp */
  EBP = (pop32());
  /* 11733ad0 ret  */
  ESPCHK(0x11733ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ae0 @ 0x11733ae0 (297 bytes, 106 insns) */
void f_11733ae0(void) {
  FTRACE(0x11733ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11733ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11733ae3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733ae6 push esi */
  push32((uint32_t)(ESI));
L_11733ae7:;
  /* 11733ae7 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733aee jle 0x11733b07 */
  if ((C.zf||C.sf!=C.of)) goto L_11733b07;
  /* 11733af0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11733af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11733af7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11733af9 push ecx */
  push32((uint32_t)(ECX));
  /* 11733afa call 0x1172aea0 */
  push32(0x11733affu); f_1172aea0();
  /* 11733aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733b02 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11733b05 jmp 0x11733b20 */
  goto L_11733b20;
L_11733b07:;
  /* 11733b07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733b0c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11733b0e mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 11733b14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733b16 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11733b1a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11733b1d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11733b20:;
  /* 11733b20 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733b24 je 0x11733b31 */
  if (C.zf) goto L_11733b31;
  /* 11733b26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733b2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11733b2f jmp 0x11733ae7 */
  goto L_11733ae7;
L_11733b31:;
  /* 11733b31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733b36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11733b38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11733b3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733b41 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11733b44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733b47 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11733b4a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733b4e je 0x11733b56 */
  if (C.zf) goto L_11733b56;
  /* 11733b50 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733b54 jne 0x11733b69 */
  if (!C.zf) goto L_11733b69;
L_11733b56:;
  /* 11733b56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733b5b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11733b5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11733b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733b63 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733b66 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11733b69:;
  /* 11733b69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11733b70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11733b77:;
  /* 11733b77 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733b7e jle 0x11733b93 */
  if ((C.zf||C.sf!=C.of)) goto L_11733b93;
  /* 11733b80 push 4 */
  push32((uint32_t)(0x4u));
  /* 11733b82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733b85 push edx */
  push32((uint32_t)(EDX));
  /* 11733b86 call 0x1172aea0 */
  push32(0x11733b8bu); f_1172aea0();
  /* 11733b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733b8e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11733b91 jmp 0x11733ba8 */
  goto L_11733ba8;
L_11733b93:;
  /* 11733b93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733b96 mov ecx, dword ptr [0x11750f38] */
  ECX = (r32((uint32_t)(0x11750f38)));
  /* 11733b9c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733b9e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11733ba2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11733ba5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11733ba8:;
  /* 11733ba8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733bac je 0x11733be9 */
  if (C.zf) goto L_11733be9;
  /* 11733bae push 0 */
  push32((uint32_t)(0x0u));
  /* 11733bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11733bb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11733bb5 push eax */
  push32((uint32_t)(EAX));
  /* 11733bb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11733bba call 0x11734a80 */
  push32(0x11733bbfu); f_11734a80();
  /* 11733bbf mov ecx, eax */
  ECX = (EAX);
  /* 11733bc1 mov esi, edx */
  ESI = (EDX);
  /* 11733bc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733bc6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733bc9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11733bca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733bcc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11733bce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733bd1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11733bd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11733bd9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11733bdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11733bde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11733be1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733be4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11733be7 jmp 0x11733b77 */
  goto L_11733b77;
L_11733be9:;
  /* 11733be9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733bed jne 0x11733bfe */
  if (!C.zf) goto L_11733bfe;
  /* 11733bef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733bf2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11733bf4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11733bf7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733bfa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11733bfc jmp 0x11733c04 */
  goto L_11733c04;
L_11733bfe:;
  /* 11733bfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733c01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11733c04:;
  /* 11733c04 pop esi */
  ESI = (pop32());
  /* 11733c05 mov esp, ebp */
  ESP = (EBP);
  /* 11733c07 pop ebp */
  EBP = (pop32());
  /* 11733c08 ret  */
  ESPCHK(0x11733ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c10 @ 0x11733c10 (61 bytes, 18 insns) */
void f_11733c10(void) {
  FTRACE(0x11733c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11733c11 mov ebp, esp */
  EBP = (ESP);
  /* 11733c13 cmp dword ptr [0x11752d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733c1a jne 0x11733c4b */
  if (!C.zf) goto L_11733c4b;
  /* 11733c1c push 0xb */
  push32((uint32_t)(0xbu));
  /* 11733c1e call 0x11723b00 */
  push32(0x11733c23u); f_11723b00();
  /* 11733c23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733c26 cmp dword ptr [0x11752d60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733c2d jne 0x11733c41 */
  if (!C.zf) goto L_11733c41;
  /* 11733c2f call 0x11733c70 */
  push32(0x11733c34u); f_11733c70();
  /* 11733c34 mov eax, dword ptr [0x11752d60] */
  EAX = (r32((uint32_t)(0x11752d60)));
  /* 11733c39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733c3c mov dword ptr [0x11752d60], eax */
  w32((uint32_t)(0x11752d60), (EAX));
L_11733c41:;
  /* 11733c41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11733c43 call 0x11723ba0 */
  push32(0x11733c48u); f_11723ba0();
  /* 11733c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11733c4b:;
  /* 11733c4b pop ebp */
  EBP = (pop32());
  /* 11733c4c ret  */
  ESPCHK(0x11733c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c50 @ 0x11733c50 (30 bytes, 11 insns) */
void f_11733c50(void) {
  FTRACE(0x11733c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11733c51 mov ebp, esp */
  EBP = (ESP);
  /* 11733c53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11733c55 call 0x11723b00 */
  push32(0x11733c5au); f_11723b00();
  /* 11733c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733c5d call 0x11733c70 */
  push32(0x11733c62u); f_11733c70();
  /* 11733c62 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11733c64 call 0x11723ba0 */
  push32(0x11733c69u); f_11723ba0();
  /* 11733c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733c6c pop ebp */
  EBP = (pop32());
  /* 11733c6d ret  */
  ESPCHK(0x11733c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x11733c70 (939 bytes, 266 insns) */
void f_11733c70(void) {
  FTRACE(0x11733c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11733c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11733c71 mov ebp, esp */
  EBP = (ESP);
  /* 11733c73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733c76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11733c7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11733c7f call 0x11723b00 */
  push32(0x11733c84u); f_11723b00();
  /* 11733c84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733c87 mov dword ptr [0x11752ca8], 0 */
  w32((uint32_t)(0x11752ca8), (0x0u));
  /* 11733c91 mov dword ptr [0x11752148], 0xffffffff */
  w32((uint32_t)(0x11752148), (0xffffffffu));
  /* 11733c9b mov eax, dword ptr [0x11752148] */
  EAX = (r32((uint32_t)(0x11752148)));
  /* 11733ca0 mov dword ptr [0x11752138], eax */
  w32((uint32_t)(0x11752138), (EAX));
  /* 11733ca5 push 0x1174e948 */
  push32((uint32_t)(0x1174e948u));
  /* 11733caa call 0x11734af0 */
  push32(0x11733cafu); f_11734af0();
  /* 11733caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733cb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11733cb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733cb9 jne 0x11733df3 */
  if (!C.zf) goto L_11733df3;
  /* 11733cbf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11733cc1 call 0x11723ba0 */
  push32(0x11733cc6u); f_11723ba0();
  /* 11733cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733cc9 push 0x11752cb0 */
  push32((uint32_t)(0x11752cb0u));
  /* 11733cce call dword ptr [0x11755280] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755280))), 0x11733cd4u);
  /* 11733cd4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733cd7 je 0x11733dee */
  if (C.zf) goto L_11733dee;
  /* 11733cdd mov dword ptr [0x11752ca8], 1 */
  w32((uint32_t)(0x11752ca8), (0x1u));
  /* 11733ce7 mov ecx, dword ptr [0x11752cb0] */
  ECX = (r32((uint32_t)(0x11752cb0)));
  /* 11733ced imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733cf0 mov dword ptr [0x117520a0], ecx */
  w32((uint32_t)(0x117520a0), (ECX));
  /* 11733cf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733cf8 mov dx, word ptr [0x11752cf6] */
  DX = (r16((uint32_t)(0x11752cf6)));
  /* 11733cff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11733d01 je 0x11733d19 */
  if (C.zf) goto L_11733d19;
  /* 11733d03 mov eax, dword ptr [0x11752d04] */
  EAX = (r32((uint32_t)(0x11752d04)));
  /* 11733d08 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733d0b mov ecx, dword ptr [0x117520a0] */
  ECX = (r32((uint32_t)(0x117520a0)));
  /* 11733d11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733d13 mov dword ptr [0x117520a0], ecx */
  w32((uint32_t)(0x117520a0), (ECX));
L_11733d19:;
  /* 11733d19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11733d1b mov dx, word ptr [0x11752d4a] */
  DX = (r16((uint32_t)(0x11752d4a)));
  /* 11733d22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11733d24 je 0x11733d4e */
  if (C.zf) goto L_11733d4e;
  /* 11733d26 cmp dword ptr [0x11752d58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733d2d je 0x11733d4e */
  if (C.zf) goto L_11733d4e;
  /* 11733d2f mov dword ptr [0x117520a4], 1 */
  w32((uint32_t)(0x117520a4), (0x1u));
  /* 11733d39 mov eax, dword ptr [0x11752d58] */
  EAX = (r32((uint32_t)(0x11752d58)));
  /* 11733d3e sub eax, dword ptr [0x11752d04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752d04))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11733d44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733d47 mov dword ptr [0x117520a8], eax */
  w32((uint32_t)(0x117520a8), (EAX));
  /* 11733d4c jmp 0x11733d62 */
  goto L_11733d62;
L_11733d4e:;
  /* 11733d4e mov dword ptr [0x117520a4], 0 */
  w32((uint32_t)(0x117520a4), (0x0u));
  /* 11733d58 mov dword ptr [0x117520a8], 0 */
  w32((uint32_t)(0x117520a8), (0x0u));
L_11733d62:;
  /* 11733d62 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11733d65 push ecx */
  push32((uint32_t)(ECX));
  /* 11733d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11733d68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11733d6a mov edx, dword ptr [0x1175212c] */
  EDX = (r32((uint32_t)(0x1175212c)));
  /* 11733d70 push edx */
  push32((uint32_t)(EDX));
  /* 11733d71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11733d73 push 0x11752cb4 */
  push32((uint32_t)(0x11752cb4u));
  /* 11733d78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11733d7d mov eax, dword ptr [0x11752c14] */
  EAX = (r32((uint32_t)(0x11752c14)));
  /* 11733d82 push eax */
  push32((uint32_t)(EAX));
  /* 11733d83 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11733d89u);
  /* 11733d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733d8b je 0x11733d9f */
  if (C.zf) goto L_11733d9f;
  /* 11733d8d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733d91 jne 0x11733d9f */
  if (!C.zf) goto L_11733d9f;
  /* 11733d93 mov ecx, dword ptr [0x1175212c] */
  ECX = (r32((uint32_t)(0x1175212c)));
  /* 11733d99 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 11733d9d jmp 0x11733da8 */
  goto L_11733da8;
L_11733d9f:;
  /* 11733d9f mov edx, dword ptr [0x1175212c] */
  EDX = (r32((uint32_t)(0x1175212c)));
  /* 11733da5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11733da8:;
  /* 11733da8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11733dab push eax */
  push32((uint32_t)(EAX));
  /* 11733dac push 0 */
  push32((uint32_t)(0x0u));
  /* 11733dae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11733db0 mov ecx, dword ptr [0x11752130] */
  ECX = (r32((uint32_t)(0x11752130)));
  /* 11733db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11733db7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11733db9 push 0x11752d08 */
  push32((uint32_t)(0x11752d08u));
  /* 11733dbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11733dc3 mov edx, dword ptr [0x11752c14] */
  EDX = (r32((uint32_t)(0x11752c14)));
  /* 11733dc9 push edx */
  push32((uint32_t)(EDX));
  /* 11733dca call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11733dd0u);
  /* 11733dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733dd2 je 0x11733de5 */
  if (C.zf) goto L_11733de5;
  /* 11733dd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733dd8 jne 0x11733de5 */
  if (!C.zf) goto L_11733de5;
  /* 11733dda mov eax, dword ptr [0x11752130] */
  EAX = (r32((uint32_t)(0x11752130)));
  /* 11733ddf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 11733de3 jmp 0x11733dee */
  goto L_11733dee;
L_11733de5:;
  /* 11733de5 mov ecx, dword ptr [0x11752130] */
  ECX = (r32((uint32_t)(0x11752130)));
  /* 11733deb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11733dee:;
  /* 11733dee jmp 0x11734017 */
  goto L_11734017;
L_11733df3:;
  /* 11733df3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733df6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733dfb je 0x11733e1d */
  if (C.zf) goto L_11733e1d;
  /* 11733dfd cmp dword ptr [0x11752d5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733e04 je 0x11733e2c */
  if (C.zf) goto L_11733e2c;
  /* 11733e06 mov ecx, dword ptr [0x11752d5c] */
  ECX = (r32((uint32_t)(0x11752d5c)));
  /* 11733e0c push ecx */
  push32((uint32_t)(ECX));
  /* 11733e0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733e10 push edx */
  push32((uint32_t)(EDX));
  /* 11733e11 call 0x1172b090 */
  push32(0x11733e16u); f_1172b090();
  /* 11733e16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11733e1b jne 0x11733e2c */
  if (!C.zf) goto L_11733e2c;
L_11733e1d:;
  /* 11733e1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11733e1f call 0x11723ba0 */
  push32(0x11733e24u); f_11723ba0();
  /* 11733e24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e27 jmp 0x11734017 */
  goto L_11734017;
L_11733e2c:;
  /* 11733e2c push 2 */
  push32((uint32_t)(0x2u));
  /* 11733e2e mov eax, dword ptr [0x11752d5c] */
  EAX = (r32((uint32_t)(0x11752d5c)));
  /* 11733e33 push eax */
  push32((uint32_t)(EAX));
  /* 11733e34 call 0x11724690 */
  push32(0x11733e39u); f_11724690();
  /* 11733e39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e3c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 11733e41 push 0x1174e940 */
  push32((uint32_t)(0x1174e940u));
  /* 11733e46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11733e48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733e4b push ecx */
  push32((uint32_t)(ECX));
  /* 11733e4c call 0x117280a0 */
  push32(0x11733e51u); f_117280a0();
  /* 11733e51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e57 push eax */
  push32((uint32_t)(EAX));
  /* 11733e58 call 0x11723c00 */
  push32(0x11733e5du); f_11723c00();
  /* 11733e5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e60 mov dword ptr [0x11752d5c], eax */
  w32((uint32_t)(0x11752d5c), (EAX));
  /* 11733e65 cmp dword ptr [0x11752d5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733e6c jne 0x11733e7d */
  if (!C.zf) goto L_11733e7d;
  /* 11733e6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11733e70 call 0x11723ba0 */
  push32(0x11733e75u); f_11723ba0();
  /* 11733e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e78 jmp 0x11734017 */
  goto L_11734017;
L_11733e7d:;
  /* 11733e7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733e80 push edx */
  push32((uint32_t)(EDX));
  /* 11733e81 mov eax, dword ptr [0x11752d5c] */
  EAX = (r32((uint32_t)(0x11752d5c)));
  /* 11733e86 push eax */
  push32((uint32_t)(EAX));
  /* 11733e87 call 0x11728220 */
  push32(0x11733e8cu); f_11728220();
  /* 11733e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 11733e91 call 0x11723ba0 */
  push32(0x11733e96u); f_11723ba0();
  /* 11733e96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733e99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11733e9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733e9e push ecx */
  push32((uint32_t)(ECX));
  /* 11733e9f mov edx, dword ptr [0x1175212c] */
  EDX = (r32((uint32_t)(0x1175212c)));
  /* 11733ea5 push edx */
  push32((uint32_t)(EDX));
  /* 11733ea6 call 0x11728a90 */
  push32(0x11733eabu); f_11728a90();
  /* 11733eab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733eae mov eax, dword ptr [0x1175212c] */
  EAX = (r32((uint32_t)(0x1175212c)));
  /* 11733eb3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 11733eb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733eba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733ebd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733ec0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733ec3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733ec6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733ec9 jne 0x11733edd */
  if (!C.zf) goto L_11733edd;
  /* 11733ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11733ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733ed1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11733ed4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733ed7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733eda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11733edd:;
  /* 11733edd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11733ee1 call 0x117339c0 */
  push32(0x11733ee6u); f_117339c0();
  /* 11733ee6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733ee9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733eef mov dword ptr [0x117520a0], eax */
  w32((uint32_t)(0x117520a0), (EAX));
L_11733ef4:;
  /* 11733ef4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733ef7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11733efa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733efd je 0x11733f15 */
  if (C.zf) goto L_11733f15;
  /* 11733eff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11733f05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f08 jl 0x11733f20 */
  if ((C.sf!=C.of)) goto L_11733f20;
  /* 11733f0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733f10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f13 jg 0x11733f20 */
  if ((!C.zf&&C.sf==C.of)) goto L_11733f20;
L_11733f15:;
  /* 11733f15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733f1e jmp 0x11733ef4 */
  goto L_11733ef4;
L_11733f20:;
  /* 11733f20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733f26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f29 jne 0x11733fc5 */
  if (!C.zf) goto L_11733fc5;
  /* 11733f2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733f38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f3b push edx */
  push32((uint32_t)(EDX));
  /* 11733f3c call 0x117339c0 */
  push32(0x11733f41u); f_117339c0();
  /* 11733f41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11733f47 mov ecx, dword ptr [0x117520a0] */
  ECX = (r32((uint32_t)(0x117520a0)));
  /* 11733f4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f4f mov dword ptr [0x117520a0], ecx */
  w32((uint32_t)(0x117520a0), (ECX));
L_11733f55:;
  /* 11733f55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733f5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f5e jl 0x11733f76 */
  if ((C.sf!=C.of)) goto L_11733f76;
  /* 11733f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11733f66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f69 jg 0x11733f76 */
  if ((!C.zf&&C.sf==C.of)) goto L_11733f76;
  /* 11733f6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11733f74 jmp 0x11733f55 */
  goto L_11733f55;
L_11733f76:;
  /* 11733f76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11733f7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733f7f jne 0x11733fc5 */
  if (!C.zf) goto L_11733fc5;
  /* 11733f81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11733f8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733f8d push ecx */
  push32((uint32_t)(ECX));
  /* 11733f8e call 0x117339c0 */
  push32(0x11733f93u); f_117339c0();
  /* 11733f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f96 mov edx, dword ptr [0x117520a0] */
  EDX = (r32((uint32_t)(0x117520a0)));
  /* 11733f9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733f9e mov dword ptr [0x117520a0], edx */
  w32((uint32_t)(0x117520a0), (EDX));
L_11733fa4:;
  /* 11733fa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733fa7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11733faa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733fad jl 0x11733fc5 */
  if ((C.sf!=C.of)) goto L_11733fc5;
  /* 11733faf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733fb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11733fb5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733fb8 jg 0x11733fc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11733fc5;
  /* 11733fba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733fbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11733fc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11733fc3 jmp 0x11733fa4 */
  goto L_11733fa4;
L_11733fc5:;
  /* 11733fc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733fc9 je 0x11733fd9 */
  if (C.zf) goto L_11733fd9;
  /* 11733fcb mov edx, dword ptr [0x117520a0] */
  EDX = (r32((uint32_t)(0x117520a0)));
  /* 11733fd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11733fd3 mov dword ptr [0x117520a0], edx */
  w32((uint32_t)(0x117520a0), (EDX));
L_11733fd9:;
  /* 11733fd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733fdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11733fdf mov dword ptr [0x117520a4], ecx */
  w32((uint32_t)(0x117520a4), (ECX));
  /* 11733fe5 cmp dword ptr [0x117520a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117520a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11733fec je 0x1173400e */
  if (C.zf) goto L_1173400e;
  /* 11733fee push 3 */
  push32((uint32_t)(0x3u));
  /* 11733ff0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11733ff3 push edx */
  push32((uint32_t)(EDX));
  /* 11733ff4 mov eax, dword ptr [0x11752130] */
  EAX = (r32((uint32_t)(0x11752130)));
  /* 11733ff9 push eax */
  push32((uint32_t)(EAX));
  /* 11733ffa call 0x11728a90 */
  push32(0x11733fffu); f_11728a90();
  /* 11733fff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734002 mov ecx, dword ptr [0x11752130] */
  ECX = (r32((uint32_t)(0x11752130)));
  /* 11734008 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 1173400c jmp 0x11734017 */
  goto L_11734017;
L_1173400e:;
  /* 1173400e mov edx, dword ptr [0x11752130] */
  EDX = (r32((uint32_t)(0x11752130)));
  /* 11734014 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_11734017:;
  /* 11734017 mov esp, ebp */
  ESP = (EBP);
  /* 11734019 pop ebp */
  EBP = (pop32());
  /* 1173401a ret  */
  ESPCHK(0x11733c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014020 @ 0x11734020 (46 bytes, 18 insns) */
void f_11734020(void) {
  FTRACE(0x11734020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734020 push ebp */
  push32((uint32_t)(EBP));
  /* 11734021 mov ebp, esp */
  EBP = (ESP);
  /* 11734023 push ecx */
  push32((uint32_t)(ECX));
  /* 11734024 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11734026 call 0x11723b00 */
  push32(0x1173402bu); f_11723b00();
  /* 1173402b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173402e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734031 push eax */
  push32((uint32_t)(EAX));
  /* 11734032 call 0x11734050 */
  push32(0x11734037u); f_11734050();
  /* 11734037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173403a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1173403d push 0xb */
  push32((uint32_t)(0xbu));
  /* 1173403f call 0x11723ba0 */
  push32(0x11734044u); f_11723ba0();
  /* 11734044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173404a mov esp, ebp */
  ESP = (EBP);
  /* 1173404c pop ebp */
  EBP = (pop32());
  /* 1173404d ret  */
  ESPCHK(0x11734020u, _esp0);
  ESP += 4; return;
}

/* FUN_10014050 @ 0x11734050 (762 bytes, 246 insns) */
void f_11734050(void) {
  FTRACE(0x11734050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734050 push ebp */
  push32((uint32_t)(EBP));
  /* 11734051 mov ebp, esp */
  EBP = (ESP);
  /* 11734053 push ecx */
  push32((uint32_t)(ECX));
  /* 11734054 cmp dword ptr [0x117520a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117520a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173405b jne 0x11734064 */
  if (!C.zf) goto L_11734064;
  /* 1173405d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173405f jmp 0x11734346 */
  goto L_11734346;
L_11734064:;
  /* 11734064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734067 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1173406a cmp ecx, dword ptr [0x11752138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11752138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734070 jne 0x11734084 */
  if (!C.zf) goto L_11734084;
  /* 11734072 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734075 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11734078 cmp eax, dword ptr [0x11752148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173407e je 0x1173424b */
  if (C.zf) goto L_1173424b;
L_11734084:;
  /* 11734084 cmp dword ptr [0x11752ca8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752ca8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173408b je 0x11734205 */
  if (C.zf) goto L_11734205;
  /* 11734091 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11734093 mov cx, word ptr [0x11752d48] */
  CX = (r16((uint32_t)(0x11752d48)));
  /* 1173409a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1173409c jne 0x117340f9 */
  if (!C.zf) goto L_117340f9;
  /* 1173409e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117340a0 mov dx, word ptr [0x11752d56] */
  DX = (r16((uint32_t)(0x11752d56)));
  /* 117340a7 push edx */
  push32((uint32_t)(EDX));
  /* 117340a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117340aa mov ax, word ptr [0x11752d54] */
  AX = (r16((uint32_t)(0x11752d54)));
  /* 117340b0 push eax */
  push32((uint32_t)(EAX));
  /* 117340b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117340b3 mov cx, word ptr [0x11752d52] */
  CX = (r16((uint32_t)(0x11752d52)));
  /* 117340ba push ecx */
  push32((uint32_t)(ECX));
  /* 117340bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117340bd mov dx, word ptr [0x11752d50] */
  DX = (r16((uint32_t)(0x11752d50)));
  /* 117340c4 push edx */
  push32((uint32_t)(EDX));
  /* 117340c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117340c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117340c9 mov ax, word ptr [0x11752d4c] */
  AX = (r16((uint32_t)(0x11752d4c)));
  /* 117340cf push eax */
  push32((uint32_t)(EAX));
  /* 117340d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117340d2 mov cx, word ptr [0x11752d4e] */
  CX = (r16((uint32_t)(0x11752d4e)));
  /* 117340d9 push ecx */
  push32((uint32_t)(ECX));
  /* 117340da xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117340dc mov dx, word ptr [0x11752d4a] */
  DX = (r16((uint32_t)(0x11752d4a)));
  /* 117340e3 push edx */
  push32((uint32_t)(EDX));
  /* 117340e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117340e7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117340ea push ecx */
  push32((uint32_t)(ECX));
  /* 117340eb push 1 */
  push32((uint32_t)(0x1u));
  /* 117340ed push 1 */
  push32((uint32_t)(0x1u));
  /* 117340ef call 0x11734350 */
  push32(0x117340f4u); f_11734350();
  /* 117340f4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117340f7 jmp 0x1173414a */
  goto L_1173414a;
L_117340f9:;
  /* 117340f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117340fb mov dx, word ptr [0x11752d56] */
  DX = (r16((uint32_t)(0x11752d56)));
  /* 11734102 push edx */
  push32((uint32_t)(EDX));
  /* 11734103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734105 mov ax, word ptr [0x11752d54] */
  AX = (r16((uint32_t)(0x11752d54)));
  /* 1173410b push eax */
  push32((uint32_t)(EAX));
  /* 1173410c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1173410e mov cx, word ptr [0x11752d52] */
  CX = (r16((uint32_t)(0x11752d52)));
  /* 11734115 push ecx */
  push32((uint32_t)(ECX));
  /* 11734116 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734118 mov dx, word ptr [0x11752d50] */
  DX = (r16((uint32_t)(0x11752d50)));
  /* 1173411f push edx */
  push32((uint32_t)(EDX));
  /* 11734120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734122 mov ax, word ptr [0x11752d4e] */
  AX = (r16((uint32_t)(0x11752d4e)));
  /* 11734128 push eax */
  push32((uint32_t)(EAX));
  /* 11734129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1173412b push 0 */
  push32((uint32_t)(0x0u));
  /* 1173412d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1173412f mov cx, word ptr [0x11752d4a] */
  CX = (r16((uint32_t)(0x11752d4a)));
  /* 11734136 push ecx */
  push32((uint32_t)(ECX));
  /* 11734137 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173413a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1173413d push eax */
  push32((uint32_t)(EAX));
  /* 1173413e push 0 */
  push32((uint32_t)(0x0u));
  /* 11734140 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734142 call 0x11734350 */
  push32(0x11734147u); f_11734350();
  /* 11734147 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1173414a:;
  /* 1173414a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1173414c mov cx, word ptr [0x11752cf4] */
  CX = (r16((uint32_t)(0x11752cf4)));
  /* 11734153 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11734155 jne 0x117341b2 */
  if (!C.zf) goto L_117341b2;
  /* 11734157 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734159 mov dx, word ptr [0x11752d02] */
  DX = (r16((uint32_t)(0x11752d02)));
  /* 11734160 push edx */
  push32((uint32_t)(EDX));
  /* 11734161 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734163 mov ax, word ptr [0x11752d00] */
  AX = (r16((uint32_t)(0x11752d00)));
  /* 11734169 push eax */
  push32((uint32_t)(EAX));
  /* 1173416a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1173416c mov cx, word ptr [0x11752cfe] */
  CX = (r16((uint32_t)(0x11752cfe)));
  /* 11734173 push ecx */
  push32((uint32_t)(ECX));
  /* 11734174 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734176 mov dx, word ptr [0x11752cfc] */
  DX = (r16((uint32_t)(0x11752cfc)));
  /* 1173417d push edx */
  push32((uint32_t)(EDX));
  /* 1173417e push 0 */
  push32((uint32_t)(0x0u));
  /* 11734180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734182 mov ax, word ptr [0x11752cf8] */
  AX = (r16((uint32_t)(0x11752cf8)));
  /* 11734188 push eax */
  push32((uint32_t)(EAX));
  /* 11734189 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1173418b mov cx, word ptr [0x11752cfa] */
  CX = (r16((uint32_t)(0x11752cfa)));
  /* 11734192 push ecx */
  push32((uint32_t)(ECX));
  /* 11734193 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734195 mov dx, word ptr [0x11752cf6] */
  DX = (r16((uint32_t)(0x11752cf6)));
  /* 1173419c push edx */
  push32((uint32_t)(EDX));
  /* 1173419d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117341a0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 117341a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117341a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117341a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117341a8 call 0x11734350 */
  push32(0x117341adu); f_11734350();
  /* 117341ad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117341b0 jmp 0x11734203 */
  goto L_11734203;
L_117341b2:;
  /* 117341b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117341b4 mov dx, word ptr [0x11752d02] */
  DX = (r16((uint32_t)(0x11752d02)));
  /* 117341bb push edx */
  push32((uint32_t)(EDX));
  /* 117341bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117341be mov ax, word ptr [0x11752d00] */
  AX = (r16((uint32_t)(0x11752d00)));
  /* 117341c4 push eax */
  push32((uint32_t)(EAX));
  /* 117341c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117341c7 mov cx, word ptr [0x11752cfe] */
  CX = (r16((uint32_t)(0x11752cfe)));
  /* 117341ce push ecx */
  push32((uint32_t)(ECX));
  /* 117341cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117341d1 mov dx, word ptr [0x11752cfc] */
  DX = (r16((uint32_t)(0x11752cfc)));
  /* 117341d8 push edx */
  push32((uint32_t)(EDX));
  /* 117341d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117341db mov ax, word ptr [0x11752cfa] */
  AX = (r16((uint32_t)(0x11752cfa)));
  /* 117341e1 push eax */
  push32((uint32_t)(EAX));
  /* 117341e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117341e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117341e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117341e8 mov cx, word ptr [0x11752cf6] */
  CX = (r16((uint32_t)(0x11752cf6)));
  /* 117341ef push ecx */
  push32((uint32_t)(ECX));
  /* 117341f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117341f3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 117341f6 push eax */
  push32((uint32_t)(EAX));
  /* 117341f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117341f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117341fb call 0x11734350 */
  push32(0x11734200u); f_11734350();
  /* 11734200 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11734203:;
  /* 11734203 jmp 0x1173424b */
  goto L_1173424b;
L_11734205:;
  /* 11734205 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734207 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734209 push 0 */
  push32((uint32_t)(0x0u));
  /* 1173420b push 2 */
  push32((uint32_t)(0x2u));
  /* 1173420d push 0 */
  push32((uint32_t)(0x0u));
  /* 1173420f push 0 */
  push32((uint32_t)(0x0u));
  /* 11734211 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734213 push 4 */
  push32((uint32_t)(0x4u));
  /* 11734215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734218 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1173421b push edx */
  push32((uint32_t)(EDX));
  /* 1173421c push 1 */
  push32((uint32_t)(0x1u));
  /* 1173421e push 1 */
  push32((uint32_t)(0x1u));
  /* 11734220 call 0x11734350 */
  push32(0x11734225u); f_11734350();
  /* 11734225 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1173422a push 0 */
  push32((uint32_t)(0x0u));
  /* 1173422c push 0 */
  push32((uint32_t)(0x0u));
  /* 1173422e push 2 */
  push32((uint32_t)(0x2u));
  /* 11734230 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734232 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734234 push 5 */
  push32((uint32_t)(0x5u));
  /* 11734236 push 0xa */
  push32((uint32_t)(0xau));
  /* 11734238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173423b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1173423e push ecx */
  push32((uint32_t)(ECX));
  /* 1173423f push 1 */
  push32((uint32_t)(0x1u));
  /* 11734241 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734243 call 0x11734350 */
  push32(0x11734248u); f_11734350();
  /* 11734248 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1173424b:;
  /* 1173424b mov edx, dword ptr [0x1175213c] */
  EDX = (r32((uint32_t)(0x1175213c)));
  /* 11734251 cmp edx, dword ptr [0x1175214c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1175214c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734257 jge 0x117342a4 */
  if ((C.sf==C.of)) goto L_117342a4;
  /* 11734259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173425c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1173425f cmp ecx, dword ptr [0x1175213c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175213c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734265 jl 0x11734275 */
  if ((C.sf!=C.of)) goto L_11734275;
  /* 11734267 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173426a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1173426d cmp eax, dword ptr [0x1175214c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1175214c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734273 jle 0x1173427c */
  if ((C.zf||C.sf!=C.of)) goto L_1173427c;
L_11734275:;
  /* 11734275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734277 jmp 0x11734346 */
  goto L_11734346;
L_1173427c:;
  /* 1173427c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173427f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11734282 cmp edx, dword ptr [0x1175213c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1175213c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734288 jle 0x117342a2 */
  if ((C.zf||C.sf!=C.of)) goto L_117342a2;
  /* 1173428a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173428d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11734290 cmp ecx, dword ptr [0x1175214c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175214c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734296 jge 0x117342a2 */
  if ((C.sf==C.of)) goto L_117342a2;
  /* 11734298 mov eax, 1 */
  EAX = (0x1u);
  /* 1173429d jmp 0x11734346 */
  goto L_11734346;
L_117342a2:;
  /* 117342a2 jmp 0x117342e7 */
  goto L_117342e7;
L_117342a4:;
  /* 117342a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117342aa cmp eax, dword ptr [0x1175214c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1175214c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117342b0 jl 0x117342c0 */
  if ((C.sf!=C.of)) goto L_117342c0;
  /* 117342b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117342b8 cmp edx, dword ptr [0x1175213c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1175213c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117342be jle 0x117342c7 */
  if ((C.zf||C.sf!=C.of)) goto L_117342c7;
L_117342c0:;
  /* 117342c0 mov eax, 1 */
  EAX = (0x1u);
  /* 117342c5 jmp 0x11734346 */
  goto L_11734346;
L_117342c7:;
  /* 117342c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 117342cd cmp ecx, dword ptr [0x1175214c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175214c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117342d3 jle 0x117342e7 */
  if ((C.zf||C.sf!=C.of)) goto L_117342e7;
  /* 117342d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 117342db cmp eax, dword ptr [0x1175213c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1175213c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117342e1 jge 0x117342e7 */
  if ((C.sf==C.of)) goto L_117342e7;
  /* 117342e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117342e5 jmp 0x11734346 */
  goto L_11734346;
L_117342e7:;
  /* 117342e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117342ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117342f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117342f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117342f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117342fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117342fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11734303 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734305 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1173430b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1173430e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734311 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11734314 cmp edx, dword ptr [0x1175213c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1175213c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173431a jne 0x11734332 */
  if (!C.zf) goto L_11734332;
  /* 1173431c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173431f cmp eax, dword ptr [0x11752140] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752140))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734325 jl 0x1173432e */
  if ((C.sf!=C.of)) goto L_1173432e;
  /* 11734327 mov eax, 1 */
  EAX = (0x1u);
  /* 1173432c jmp 0x11734346 */
  goto L_11734346;
L_1173432e:;
  /* 1173432e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734330 jmp 0x11734346 */
  goto L_11734346;
L_11734332:;
  /* 11734332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734335 cmp ecx, dword ptr [0x11752150] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11752150))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173433b jge 0x11734344 */
  if ((C.sf==C.of)) goto L_11734344;
  /* 1173433d mov eax, 1 */
  EAX = (0x1u);
  /* 11734342 jmp 0x11734346 */
  goto L_11734346;
L_11734344:;
  /* 11734344 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11734346:;
  /* 11734346 mov esp, ebp */
  ESP = (EBP);
  /* 11734348 pop ebp */
  EBP = (pop32());
  /* 11734349 ret  */
  ESPCHK(0x11734050u, _esp0);
  ESP += 4; return;
}

/* FUN_10014350 @ 0x11734350 (504 bytes, 145 insns) */
void f_11734350(void) {
  FTRACE(0x11734350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734350 push ebp */
  push32((uint32_t)(EBP));
  /* 11734351 mov ebp, esp */
  EBP = (ESP);
  /* 11734353 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734356 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173435a jne 0x1173442c */
  if (!C.zf) goto L_1173442c;
  /* 11734360 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734363 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11734366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734368 jne 0x11734379 */
  if (!C.zf) goto L_11734379;
  /* 1173436a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173436d mov edx, dword ptr [ecx*4 + 0x1175215c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1175215c)));
  /* 11734374 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11734377 jmp 0x11734386 */
  goto L_11734386;
L_11734379:;
  /* 11734379 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173437c mov ecx, dword ptr [eax*4 + 0x11752190] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11752190)));
  /* 11734383 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11734386:;
  /* 11734386 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11734389 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173438c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1173438f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734392 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734395 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1173439b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173439e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117343a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117343a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117343a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 117343a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 117343ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117343ae mov ecx, 7 */
  ECX = (0x7u);
  /* 117343b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117343b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117343b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117343bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117343be jge 0x117343d9 */
  if ((C.sf==C.of)) goto L_117343d9;
  /* 117343c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117343c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117343c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117343c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117343cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117343cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117343d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117343d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117343d7 jmp 0x117343ed */
  goto L_117343ed;
L_117343d9:;
  /* 117343d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117343dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117343df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117343e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117343e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117343e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117343ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117343ed:;
  /* 117343ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117343f1 jne 0x1173442a */
  if (!C.zf) goto L_1173442a;
  /* 117343f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117343f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 117343f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117343fb jne 0x1173440c */
  if (!C.zf) goto L_1173440c;
  /* 117343fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734400 mov eax, dword ptr [edx*4 + 0x11752160] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11752160)));
  /* 11734407 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1173440a jmp 0x11734419 */
  goto L_11734419;
L_1173440c:;
  /* 1173440c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173440f mov edx, dword ptr [ecx*4 + 0x11752194] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11752194)));
  /* 11734416 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11734419:;
  /* 11734419 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173441c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173441f jle 0x1173442a */
  if ((C.zf||C.sf!=C.of)) goto L_1173442a;
  /* 11734421 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734424 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734427 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1173442a:;
  /* 1173442a jmp 0x11734461 */
  goto L_11734461;
L_1173442c:;
  /* 1173442c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173442f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11734432 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11734434 jne 0x11734445 */
  if (!C.zf) goto L_11734445;
  /* 11734436 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734439 mov ecx, dword ptr [eax*4 + 0x1175215c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1175215c)));
  /* 11734440 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11734443 jmp 0x11734452 */
  goto L_11734452;
L_11734445:;
  /* 11734445 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734448 mov eax, dword ptr [edx*4 + 0x11752190] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11752190)));
  /* 1173444f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11734452:;
  /* 11734452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11734455 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11734458 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173445b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173445e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11734461:;
  /* 11734461 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734465 jne 0x117344a1 */
  if (!C.zf) goto L_117344a1;
  /* 11734467 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173446a mov dword ptr [0x1175213c], eax */
  w32((uint32_t)(0x1175213c), (EAX));
  /* 1173446f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11734472 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11734475 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11734478 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173447a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1173447d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11734480 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734482 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11734488 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1173448b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173448d mov dword ptr [0x11752140], ecx */
  w32((uint32_t)(0x11752140), (ECX));
  /* 11734493 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734496 mov dword ptr [0x11752138], edx */
  w32((uint32_t)(0x11752138), (EDX));
  /* 1173449c jmp 0x11734544 */
  goto L_11734544;
L_117344a1:;
  /* 117344a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117344a4 mov dword ptr [0x1175214c], eax */
  w32((uint32_t)(0x1175214c), (EAX));
  /* 117344a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 117344ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117344af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 117344b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117344b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117344b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 117344ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117344bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117344c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 117344c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117344c7 mov dword ptr [0x11752150], ecx */
  w32((uint32_t)(0x11752150), (ECX));
  /* 117344cd mov edx, dword ptr [0x117520a8] */
  EDX = (r32((uint32_t)(0x117520a8)));
  /* 117344d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117344d9 mov eax, dword ptr [0x11752150] */
  EAX = (r32((uint32_t)(0x11752150)));
  /* 117344de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117344e0 mov dword ptr [0x11752150], eax */
  w32((uint32_t)(0x11752150), (EAX));
  /* 117344e5 cmp dword ptr [0x11752150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117344ec jge 0x11734511 */
  if ((C.sf==C.of)) goto L_11734511;
  /* 117344ee mov ecx, dword ptr [0x11752150] */
  ECX = (r32((uint32_t)(0x11752150)));
  /* 117344f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117344fa mov dword ptr [0x11752150], ecx */
  w32((uint32_t)(0x11752150), (ECX));
  /* 11734500 mov edx, dword ptr [0x1175214c] */
  EDX = (r32((uint32_t)(0x1175214c)));
  /* 11734506 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734509 mov dword ptr [0x1175214c], edx */
  w32((uint32_t)(0x1175214c), (EDX));
  /* 1173450f jmp 0x1173453b */
  goto L_1173453b;
L_11734511:;
  /* 11734511 cmp dword ptr [0x11752150], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x11752150))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173451b jl 0x1173453b */
  if ((C.sf!=C.of)) goto L_1173453b;
  /* 1173451d mov eax, dword ptr [0x11752150] */
  EAX = (r32((uint32_t)(0x11752150)));
  /* 11734522 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734527 mov dword ptr [0x11752150], eax */
  w32((uint32_t)(0x11752150), (EAX));
  /* 1173452c mov ecx, dword ptr [0x1175214c] */
  ECX = (r32((uint32_t)(0x1175214c)));
  /* 11734532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734535 mov dword ptr [0x1175214c], ecx */
  w32((uint32_t)(0x1175214c), (ECX));
L_1173453b:;
  /* 1173453b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1173453e mov dword ptr [0x11752148], edx */
  w32((uint32_t)(0x11752148), (EDX));
L_11734544:;
  /* 11734544 mov esp, ebp */
  ESP = (EBP);
  /* 11734546 pop ebp */
  EBP = (pop32());
  /* 11734547 ret  */
  ESPCHK(0x11734350u, _esp0);
  ESP += 4; return;
}

/* FUN_10014550 @ 0x11734550 (382 bytes, 135 insns) */
void f_11734550(void) {
  FTRACE(0x11734550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734550 push ebp */
  push32((uint32_t)(EBP));
  /* 11734551 mov ebp, esp */
  EBP = (ESP);
  /* 11734553 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734555 push 0x1174e950 */
  push32((uint32_t)(0x1174e950u));
  /* 1173455a push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 1173455f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11734565 push eax */
  push32((uint32_t)(EAX));
  /* 11734566 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1173456d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734570 push ebx */
  push32((uint32_t)(EBX));
  /* 11734571 push esi */
  push32((uint32_t)(ESI));
  /* 11734572 push edi */
  push32((uint32_t)(EDI));
  /* 11734573 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11734576 cmp dword ptr [0x11752d64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173457d jne 0x117345c2 */
  if (!C.zf) goto L_117345c2;
  /* 1173457f push 0 */
  push32((uint32_t)(0x0u));
  /* 11734581 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734583 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734585 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734587 call dword ptr [0x1175527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175527c))), 0x1173458du);
  /* 1173458d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173458f je 0x1173459d */
  if (C.zf) goto L_1173459d;
  /* 11734591 mov dword ptr [0x11752d64], 1 */
  w32((uint32_t)(0x11752d64), (0x1u));
  /* 1173459b jmp 0x117345c2 */
  goto L_117345c2;
L_1173459d:;
  /* 1173459d push 0 */
  push32((uint32_t)(0x0u));
  /* 1173459f push 0 */
  push32((uint32_t)(0x0u));
  /* 117345a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117345a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117345a5 call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x117345abu);
  /* 117345ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117345ad je 0x117345bb */
  if (C.zf) goto L_117345bb;
  /* 117345af mov dword ptr [0x11752d64], 2 */
  w32((uint32_t)(0x11752d64), (0x2u));
  /* 117345b9 jmp 0x117345c2 */
  goto L_117345c2;
L_117345bb:;
  /* 117345bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117345bd jmp 0x117346d1 */
  goto L_117346d1;
L_117345c2:;
  /* 117345c2 cmp dword ptr [0x11752d64], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752d64))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117345c9 jne 0x117345e6 */
  if (!C.zf) goto L_117345e6;
  /* 117345cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117345ce push eax */
  push32((uint32_t)(EAX));
  /* 117345cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117345d2 push ecx */
  push32((uint32_t)(ECX));
  /* 117345d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117345d6 push edx */
  push32((uint32_t)(EDX));
  /* 117345d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117345da push eax */
  push32((uint32_t)(EAX));
  /* 117345db call dword ptr [0x1175527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175527c))), 0x117345e1u);
  /* 117345e1 jmp 0x117346d1 */
  goto L_117346d1;
L_117345e6:;
  /* 117345e6 cmp dword ptr [0x11752d64], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752d64))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117345ed jne 0x117346cf */
  if (!C.zf) goto L_117346cf;
  /* 117345f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117345f7 jne 0x11734602 */
  if (!C.zf) goto L_11734602;
  /* 117345f9 mov ecx, dword ptr [0x11752c14] */
  ECX = (r32((uint32_t)(0x11752c14)));
  /* 117345ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11734602:;
  /* 11734602 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734604 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734606 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11734609 push edx */
  push32((uint32_t)(EDX));
  /* 1173460a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173460d push eax */
  push32((uint32_t)(EAX));
  /* 1173460e call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x11734614u);
  /* 11734614 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11734617 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173461b jne 0x11734624 */
  if (!C.zf) goto L_11734624;
  /* 1173461d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173461f jmp 0x117346d1 */
  goto L_117346d1;
L_11734624:;
  /* 11734624 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1173462b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1173462e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734631 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11734633 call 0x11728410 */
  push32(0x11734638u); f_11728410();
  /* 11734638 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1173463b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1173463e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11734641 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11734644 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1173464b jmp 0x11734664 */
  goto L_11734664;
  /* 1173464d mov eax, 1 */
  EAX = (0x1u);
  /* 11734652 ret  */
  ESPCHK(0x11734550u, _esp0);
  ESP += 4; return;
  /* 11734653 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11734656 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1173465d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11734664:;
  /* 11734664 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734668 jne 0x1173466e */
  if (!C.zf) goto L_1173466e;
  /* 1173466a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173466c jmp 0x117346d1 */
  goto L_117346d1;
L_1173466e:;
  /* 1173466e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11734671 push edx */
  push32((uint32_t)(EDX));
  /* 11734672 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11734675 push eax */
  push32((uint32_t)(EAX));
  /* 11734676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11734679 push ecx */
  push32((uint32_t)(ECX));
  /* 1173467a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173467d push edx */
  push32((uint32_t)(EDX));
  /* 1173467e call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x11734684u);
  /* 11734684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734686 jne 0x1173468c */
  if (!C.zf) goto L_1173468c;
  /* 11734688 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173468a jmp 0x117346d1 */
  goto L_117346d1;
L_1173468c:;
  /* 1173468c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734690 jne 0x117346ad */
  if (!C.zf) goto L_117346ad;
  /* 11734692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734694 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734696 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734698 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1173469b push eax */
  push32((uint32_t)(EAX));
  /* 1173469c push 1 */
  push32((uint32_t)(0x1u));
  /* 1173469e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117346a1 push ecx */
  push32((uint32_t)(ECX));
  /* 117346a2 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x117346a8u);
  /* 117346a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117346ab jmp 0x117346ca */
  goto L_117346ca;
L_117346ad:;
  /* 117346ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117346b0 push edx */
  push32((uint32_t)(EDX));
  /* 117346b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117346b4 push eax */
  push32((uint32_t)(EAX));
  /* 117346b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117346b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117346ba push ecx */
  push32((uint32_t)(ECX));
  /* 117346bb push 1 */
  push32((uint32_t)(0x1u));
  /* 117346bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117346c0 push edx */
  push32((uint32_t)(EDX));
  /* 117346c1 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x117346c7u);
  /* 117346c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117346ca:;
  /* 117346ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117346cd jmp 0x117346d1 */
  goto L_117346d1;
L_117346cf:;
  /* 117346cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117346d1:;
  /* 117346d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 117346d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117346d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117346de pop edi */
  EDI = (pop32());
  /* 117346df pop esi */
  ESI = (pop32());
  /* 117346e0 pop ebx */
  EBX = (pop32());
  /* 117346e1 mov esp, ebp */
  ESP = (EBP);
  /* 117346e3 pop ebp */
  EBP = (pop32());
  /* 117346e4 ret  */
  ESPCHK(0x11734550u, _esp0);
  ESP += 4; return;
}

/* FUN_100146f0 @ 0x117346f0 (398 bytes, 140 insns) */
void f_117346f0(void) {
  FTRACE(0x117346f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117346f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117346f1 mov ebp, esp */
  EBP = (ESP);
  /* 117346f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117346f5 push 0x1174e960 */
  push32((uint32_t)(0x1174e960u));
  /* 117346fa push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 117346ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11734705 push eax */
  push32((uint32_t)(EAX));
  /* 11734706 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1173470d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734710 push ebx */
  push32((uint32_t)(EBX));
  /* 11734711 push esi */
  push32((uint32_t)(ESI));
  /* 11734712 push edi */
  push32((uint32_t)(EDI));
  /* 11734713 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11734716 cmp dword ptr [0x11752d68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173471d jne 0x11734762 */
  if (!C.zf) goto L_11734762;
  /* 1173471f push 0 */
  push32((uint32_t)(0x0u));
  /* 11734721 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734723 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734725 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734727 call dword ptr [0x1175527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175527c))), 0x1173472du);
  /* 1173472d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173472f je 0x1173473d */
  if (C.zf) goto L_1173473d;
  /* 11734731 mov dword ptr [0x11752d68], 1 */
  w32((uint32_t)(0x11752d68), (0x1u));
  /* 1173473b jmp 0x11734762 */
  goto L_11734762;
L_1173473d:;
  /* 1173473d push 0 */
  push32((uint32_t)(0x0u));
  /* 1173473f push 0 */
  push32((uint32_t)(0x0u));
  /* 11734741 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734745 call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x1173474bu);
  /* 1173474b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173474d je 0x1173475b */
  if (C.zf) goto L_1173475b;
  /* 1173474f mov dword ptr [0x11752d68], 2 */
  w32((uint32_t)(0x11752d68), (0x2u));
  /* 11734759 jmp 0x11734762 */
  goto L_11734762;
L_1173475b:;
  /* 1173475b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173475d jmp 0x11734881 */
  goto L_11734881;
L_11734762:;
  /* 11734762 cmp dword ptr [0x11752d68], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752d68))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734769 jne 0x11734786 */
  if (!C.zf) goto L_11734786;
  /* 1173476b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173476e push eax */
  push32((uint32_t)(EAX));
  /* 1173476f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734772 push ecx */
  push32((uint32_t)(ECX));
  /* 11734773 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11734776 push edx */
  push32((uint32_t)(EDX));
  /* 11734777 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173477a push eax */
  push32((uint32_t)(EAX));
  /* 1173477b call dword ptr [0x11755294] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755294))), 0x11734781u);
  /* 11734781 jmp 0x11734881 */
  goto L_11734881;
L_11734786:;
  /* 11734786 cmp dword ptr [0x11752d68], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752d68))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173478d jne 0x1173487f */
  if (!C.zf) goto L_1173487f;
  /* 11734793 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734797 jne 0x117347a2 */
  if (!C.zf) goto L_117347a2;
  /* 11734799 mov ecx, dword ptr [0x11752c14] */
  ECX = (r32((uint32_t)(0x11752c14)));
  /* 1173479f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_117347a2:;
  /* 117347a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117347a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117347a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117347a9 push edx */
  push32((uint32_t)(EDX));
  /* 117347aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117347ad push eax */
  push32((uint32_t)(EAX));
  /* 117347ae call dword ptr [0x1175527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175527c))), 0x117347b4u);
  /* 117347b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117347b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117347bb jne 0x117347c4 */
  if (!C.zf) goto L_117347c4;
  /* 117347bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117347bf jmp 0x11734881 */
  goto L_11734881;
L_117347c4:;
  /* 117347c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117347cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117347ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117347d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117347d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117347d5 call 0x11728410 */
  push32(0x117347dau); f_11728410();
  /* 117347da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 117347dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117347e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117347e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117347e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117347ed jmp 0x11734806 */
  goto L_11734806;
  /* 117347ef mov eax, 1 */
  EAX = (0x1u);
  /* 117347f4 ret  */
  ESPCHK(0x117346f0u, _esp0);
  ESP += 4; return;
  /* 117347f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117347f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117347ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11734806:;
  /* 11734806 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173480a jne 0x11734810 */
  if (!C.zf) goto L_11734810;
  /* 1173480c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173480e jmp 0x11734881 */
  goto L_11734881;
L_11734810:;
  /* 11734810 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11734813 push edx */
  push32((uint32_t)(EDX));
  /* 11734814 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11734817 push eax */
  push32((uint32_t)(EAX));
  /* 11734818 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1173481b push ecx */
  push32((uint32_t)(ECX));
  /* 1173481c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173481f push edx */
  push32((uint32_t)(EDX));
  /* 11734820 call dword ptr [0x1175527c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175527c))), 0x11734826u);
  /* 11734826 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734828 jne 0x1173482e */
  if (!C.zf) goto L_1173482e;
  /* 1173482a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173482c jmp 0x11734881 */
  goto L_11734881;
L_1173482e:;
  /* 1173482e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734832 jne 0x11734856 */
  if (!C.zf) goto L_11734856;
  /* 11734834 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1173483a push 0 */
  push32((uint32_t)(0x0u));
  /* 1173483c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1173483e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11734841 push eax */
  push32((uint32_t)(EAX));
  /* 11734842 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11734847 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173484a push ecx */
  push32((uint32_t)(ECX));
  /* 1173484b call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11734851u);
  /* 11734851 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11734854 jmp 0x1173487a */
  goto L_1173487a;
L_11734856:;
  /* 11734856 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1173485a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1173485d push edx */
  push32((uint32_t)(EDX));
  /* 1173485e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734861 push eax */
  push32((uint32_t)(EAX));
  /* 11734862 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734864 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11734867 push ecx */
  push32((uint32_t)(ECX));
  /* 11734868 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1173486d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734870 push edx */
  push32((uint32_t)(EDX));
  /* 11734871 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11734877u);
  /* 11734877 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1173487a:;
  /* 1173487a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1173487d jmp 0x11734881 */
  goto L_11734881;
L_1173487f:;
  /* 1173487f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11734881:;
  /* 11734881 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11734884 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11734887 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1173488e pop edi */
  EDI = (pop32());
  /* 1173488f pop esi */
  ESI = (pop32());
  /* 11734890 pop ebx */
  EBX = (pop32());
  /* 11734891 mov esp, ebp */
  ESP = (EBP);
  /* 11734893 pop ebp */
  EBP = (pop32());
  /* 11734894 ret  */
  ESPCHK(0x117346f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148a0 @ 0x117348a0 (11 bytes, 6 insns) */
void f_117348a0(void) {
  FTRACE(0x117348a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117348a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117348a1 mov ebp, esp */
  EBP = (ESP);
  /* 117348a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117348a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117348a9 pop ebp */
  EBP = (pop32());
  /* 117348aa ret  */
  ESPCHK(0x117348a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148b0 @ 0x117348b0 (147 bytes, 43 insns) */
void f_117348b0(void) {
  FTRACE(0x117348b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117348b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117348b1 mov ebp, esp */
  EBP = (ESP);
  /* 117348b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117348b4 cmp dword ptr [0x11752c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117348bb jne 0x117348d7 */
  if (!C.zf) goto L_117348d7;
  /* 117348bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117348c1 jl 0x117348d2 */
  if ((C.sf!=C.of)) goto L_117348d2;
  /* 117348c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117348c7 jg 0x117348d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_117348d2;
  /* 117348c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117348cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117348cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117348d2:;
  /* 117348d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117348d5 jmp 0x1173493f */
  goto L_1173493f;
L_117348d7:;
  /* 117348d7 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 117348dc call dword ptr [0x117552f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f8))), 0x117348e2u);
  /* 117348e2 cmp dword ptr [0x11752d84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117348e9 je 0x11734909 */
  if (C.zf) goto L_11734909;
  /* 117348eb push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 117348f0 call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x117348f6u);
  /* 117348f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117348f8 call 0x11723b00 */
  push32(0x117348fdu); f_11723b00();
  /* 117348fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734900 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11734907 jmp 0x11734910 */
  goto L_11734910;
L_11734909:;
  /* 11734909 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11734910:;
  /* 11734910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734913 push ecx */
  push32((uint32_t)(ECX));
  /* 11734914 call 0x11734950 */
  push32(0x11734919u); f_11734950();
  /* 11734919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173491c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1173491f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734923 je 0x11734931 */
  if (C.zf) goto L_11734931;
  /* 11734925 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11734927 call 0x11723ba0 */
  push32(0x1173492cu); f_11723ba0();
  /* 1173492c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173492f jmp 0x1173493c */
  goto L_1173493c;
L_11734931:;
  /* 11734931 push 0x11752d94 */
  push32((uint32_t)(0x11752d94u));
  /* 11734936 call dword ptr [0x117552e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e8))), 0x1173493cu);
L_1173493c:;
  /* 1173493c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1173493f:;
  /* 1173493f mov esp, ebp */
  ESP = (EBP);
  /* 11734941 pop ebp */
  EBP = (pop32());
  /* 11734942 ret  */
  ESPCHK(0x117348b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014950 @ 0x11734950 (299 bytes, 91 insns) */
void f_11734950(void) {
  FTRACE(0x11734950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734950 push ebp */
  push32((uint32_t)(EBP));
  /* 11734951 mov ebp, esp */
  EBP = (ESP);
  /* 11734953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734956 cmp dword ptr [0x11752c04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173495d jne 0x1173497c */
  if (!C.zf) goto L_1173497c;
  /* 1173495f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734963 jl 0x11734974 */
  if ((C.sf!=C.of)) goto L_11734974;
  /* 11734965 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734969 jg 0x11734974 */
  if ((!C.zf&&C.sf==C.of)) goto L_11734974;
  /* 1173496b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173496e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734971 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11734974:;
  /* 11734974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734977 jmp 0x11734a77 */
  goto L_11734a77;
L_1173497c:;
  /* 1173497c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734983 jge 0x117349c3 */
  if ((C.sf==C.of)) goto L_117349c3;
  /* 11734985 cmp dword ptr [0x11751144], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11751144))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173498c jle 0x117349a1 */
  if ((C.zf||C.sf!=C.of)) goto L_117349a1;
  /* 1173498e push 1 */
  push32((uint32_t)(0x1u));
  /* 11734990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734993 push ecx */
  push32((uint32_t)(ECX));
  /* 11734994 call 0x1172aea0 */
  push32(0x11734999u); f_1172aea0();
  /* 11734999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173499c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1173499f jmp 0x117349b5 */
  goto L_117349b5;
L_117349a1:;
  /* 117349a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117349a4 mov eax, dword ptr [0x11750f38] */
  EAX = (r32((uint32_t)(0x11750f38)));
  /* 117349a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117349ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117349af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117349b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_117349b5:;
  /* 117349b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117349b9 jne 0x117349c3 */
  if (!C.zf) goto L_117349c3;
  /* 117349bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117349be jmp 0x11734a77 */
  goto L_11734a77;
L_117349c3:;
  /* 117349c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117349c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117349c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117349cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117349d5 mov eax, dword ptr [0x11750f38] */
  EAX = (r32((uint32_t)(0x11750f38)));
  /* 117349da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117349dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117349e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 117349e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117349e8 je 0x11734a0c */
  if (C.zf) goto L_11734a0c;
  /* 117349ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117349ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117349f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117349f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 117349f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117349fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 117349ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11734a03 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11734a0a jmp 0x11734a1d */
  goto L_11734a1d;
L_11734a0c:;
  /* 11734a0c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11734a0f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11734a12 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11734a16 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11734a1d:;
  /* 11734a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11734a1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11734a21 push 3 */
  push32((uint32_t)(0x3u));
  /* 11734a23 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11734a26 push edx */
  push32((uint32_t)(EDX));
  /* 11734a27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734a2a push eax */
  push32((uint32_t)(EAX));
  /* 11734a2b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11734a2e push ecx */
  push32((uint32_t)(ECX));
  /* 11734a2f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11734a34 mov edx, dword ptr [0x11752c04] */
  EDX = (r32((uint32_t)(0x11752c04)));
  /* 11734a3a push edx */
  push32((uint32_t)(EDX));
  /* 11734a3b call 0x1172d760 */
  push32(0x11734a40u); f_1172d760();
  /* 11734a40 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11734a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734a4a jne 0x11734a51 */
  if (!C.zf) goto L_11734a51;
  /* 11734a4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734a4f jmp 0x11734a77 */
  goto L_11734a77;
L_11734a51:;
  /* 11734a51 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734a55 jne 0x11734a61 */
  if (!C.zf) goto L_11734a61;
  /* 11734a57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11734a5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11734a5f jmp 0x11734a77 */
  goto L_11734a77;
L_11734a61:;
  /* 11734a61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11734a64 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11734a69 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11734a6c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11734a72 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11734a75 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11734a77:;
  /* 11734a77 mov esp, ebp */
  ESP = (EBP);
  /* 11734a79 pop ebp */
  EBP = (pop32());
  /* 11734a7a ret  */
  ESPCHK(0x11734950u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11734a80 (52 bytes, 19 insns) */
void f_11734a80(void) {
  FTRACE(0x11734a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734a80 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11734a84 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11734a88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11734a8a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11734a8e jne 0x11734a99 */
  if (!C.zf) goto L_11734a99;
  /* 11734a90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11734a94 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11734a96 ret 0x10 */
  ESPCHK(0x11734a80u, _esp0);
  ESP += 20; return;
L_11734a99:;
  /* 11734a99 push ebx */
  push32((uint32_t)(EBX));
  /* 11734a9a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11734a9c mov ebx, eax */
  EBX = (EAX);
  /* 11734a9e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11734aa2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11734aa6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734aa8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11734aac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11734aae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ab0 pop ebx */
  EBX = (pop32());
  /* 11734ab1 ret 0x10 */
  ESPCHK(0x11734a80u, _esp0);
  ESP += 20; return;
}

/* FUN_10014ac0 @ 0x11734ac0 (46 bytes, 18 insns) */
void f_11734ac0(void) {
  FTRACE(0x11734ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11734ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11734ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11734ac4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11734ac6 call 0x11723b00 */
  push32(0x11734acbu); f_11723b00();
  /* 11734acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11734ad2 call 0x11734af0 */
  push32(0x11734ad7u); f_11734af0();
  /* 11734ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11734add push 0xc */
  push32((uint32_t)(0xcu));
  /* 11734adf call 0x11723ba0 */
  push32(0x11734ae4u); f_11723ba0();
  /* 11734ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ae7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734aea mov esp, ebp */
  ESP = (EBP);
  /* 11734aec pop ebp */
  EBP = (pop32());
  /* 11734aed ret  */
  ESPCHK(0x11734ac0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11734af0 (198 bytes, 69 insns) */
void f_11734af0(void) {
  FTRACE(0x11734af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734af0 push ebp */
  push32((uint32_t)(EBP));
  /* 11734af1 mov ebp, esp */
  EBP = (ESP);
  /* 11734af3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734af6 mov eax, dword ptr [0x11752a94] */
  EAX = (r32((uint32_t)(0x11752a94)));
  /* 11734afb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11734afe cmp dword ptr [0x11754500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b05 jne 0x11734b0e */
  if (!C.zf) goto L_11734b0e;
  /* 11734b07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734b09 jmp 0x11734bb2 */
  goto L_11734bb2;
L_11734b0e:;
  /* 11734b0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b12 jne 0x11734b36 */
  if (!C.zf) goto L_11734b36;
  /* 11734b14 cmp dword ptr [0x11752a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b1b je 0x11734b36 */
  if (C.zf) goto L_11734b36;
  /* 11734b1d call 0x11734c10 */
  push32(0x11734b22u); f_11734c10();
  /* 11734b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734b24 je 0x11734b2d */
  if (C.zf) goto L_11734b2d;
  /* 11734b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734b28 jmp 0x11734bb2 */
  goto L_11734bb2;
L_11734b2d:;
  /* 11734b2d mov ecx, dword ptr [0x11752a94] */
  ECX = (r32((uint32_t)(0x11752a94)));
  /* 11734b33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11734b36:;
  /* 11734b36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b3a je 0x11734bb0 */
  if (C.zf) goto L_11734bb0;
  /* 11734b3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b40 je 0x11734bb0 */
  if (C.zf) goto L_11734bb0;
  /* 11734b42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734b45 push edx */
  push32((uint32_t)(EDX));
  /* 11734b46 call 0x117280a0 */
  push32(0x11734b4bu); f_117280a0();
  /* 11734b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734b4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11734b51:;
  /* 11734b51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734b54 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b57 je 0x11734bb0 */
  if (C.zf) goto L_11734bb0;
  /* 11734b59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734b5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11734b5e push edx */
  push32((uint32_t)(EDX));
  /* 11734b5f call 0x117280a0 */
  push32(0x11734b64u); f_117280a0();
  /* 11734b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734b67 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b6a jbe 0x11734ba5 */
  if ((C.cf||C.zf)) goto L_11734ba5;
  /* 11734b6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734b6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11734b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734b74 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11734b78 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734b7b jne 0x11734ba5 */
  if (!C.zf) goto L_11734ba5;
  /* 11734b7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734b80 push ecx */
  push32((uint32_t)(ECX));
  /* 11734b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734b84 push edx */
  push32((uint32_t)(EDX));
  /* 11734b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734b88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11734b8a push ecx */
  push32((uint32_t)(ECX));
  /* 11734b8b call 0x11734bc0 */
  push32(0x11734b90u); f_11734bc0();
  /* 11734b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734b95 jne 0x11734ba5 */
  if (!C.zf) goto L_11734ba5;
  /* 11734b97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734b9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11734b9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734b9f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11734ba3 jmp 0x11734bb2 */
  goto L_11734bb2;
L_11734ba5:;
  /* 11734ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734ba8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734bab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11734bae jmp 0x11734b51 */
  goto L_11734b51;
L_11734bb0:;
  /* 11734bb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11734bb2:;
  /* 11734bb2 mov esp, ebp */
  ESP = (EBP);
  /* 11734bb4 pop ebp */
  EBP = (pop32());
  /* 11734bb5 ret  */
  ESPCHK(0x11734af0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11734bc0 (79 bytes, 32 insns) */
void f_11734bc0(void) {
  FTRACE(0x11734bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11734bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11734bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11734bc4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734bc8 jne 0x11734bce */
  if (!C.zf) goto L_11734bce;
  /* 11734bca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734bcc jmp 0x11734c0b */
  goto L_11734c0b;
L_11734bce:;
  /* 11734bce mov eax, dword ptr [0x117540e4] */
  EAX = (r32((uint32_t)(0x117540e4)));
  /* 11734bd3 push eax */
  push32((uint32_t)(EAX));
  /* 11734bd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11734bd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11734bdb push edx */
  push32((uint32_t)(EDX));
  /* 11734bdc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734bdf push eax */
  push32((uint32_t)(EAX));
  /* 11734be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734be3 push ecx */
  push32((uint32_t)(ECX));
  /* 11734be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734be6 mov edx, dword ptr [0x11754384] */
  EDX = (r32((uint32_t)(0x11754384)));
  /* 11734bec push edx */
  push32((uint32_t)(EDX));
  /* 11734bed call 0x11734cc0 */
  push32(0x11734bf2u); f_11734cc0();
  /* 11734bf2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734bf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11734bf8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734bfc jne 0x11734c05 */
  if (!C.zf) goto L_11734c05;
  /* 11734bfe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11734c03 jmp 0x11734c0b */
  goto L_11734c0b;
L_11734c05:;
  /* 11734c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734c08 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11734c0b:;
  /* 11734c0b mov esp, ebp */
  ESP = (EBP);
  /* 11734c0d pop ebp */
  EBP = (pop32());
  /* 11734c0e ret  */
  ESPCHK(0x11734bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c10 @ 0x11734c10 (174 bytes, 66 insns) */
void f_11734c10(void) {
  FTRACE(0x11734c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11734c11 mov ebp, esp */
  EBP = (ESP);
  /* 11734c13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11734c16 mov eax, dword ptr [0x11752a9c] */
  EAX = (r32((uint32_t)(0x11752a9c)));
  /* 11734c1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11734c1e:;
  /* 11734c1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734c21 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734c24 je 0x11734cb8 */
  if (C.zf) goto L_11734cb8;
  /* 11734c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734c34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734c37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11734c39 push eax */
  push32((uint32_t)(EAX));
  /* 11734c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 11734c3e call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11734c44u);
  /* 11734c44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11734c47 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734c4b jne 0x11734c52 */
  if (!C.zf) goto L_11734c52;
  /* 11734c4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11734c50 jmp 0x11734cba */
  goto L_11734cba;
L_11734c52:;
  /* 11734c52 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11734c54 push 0x1174e96c */
  push32((uint32_t)(0x1174e96cu));
  /* 11734c59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11734c5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11734c5e push ecx */
  push32((uint32_t)(ECX));
  /* 11734c5f call 0x11723c00 */
  push32(0x11734c64u); f_11723c00();
  /* 11734c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734c67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11734c6a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734c6e jne 0x11734c75 */
  if (!C.zf) goto L_11734c75;
  /* 11734c70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11734c73 jmp 0x11734cba */
  goto L_11734cba;
L_11734c75:;
  /* 11734c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11734c7c push edx */
  push32((uint32_t)(EDX));
  /* 11734c7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734c80 push eax */
  push32((uint32_t)(EAX));
  /* 11734c81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734c86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11734c88 push edx */
  push32((uint32_t)(EDX));
  /* 11734c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c8b push 1 */
  push32((uint32_t)(0x1u));
  /* 11734c8d call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11734c93u);
  /* 11734c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734c95 jne 0x11734c9c */
  if (!C.zf) goto L_11734c9c;
  /* 11734c97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11734c9a jmp 0x11734cba */
  goto L_11734cba;
L_11734c9c:;
  /* 11734c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11734c9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11734ca1 push eax */
  push32((uint32_t)(EAX));
  /* 11734ca2 call 0x11735110 */
  push32(0x11734ca7u); f_11735110();
  /* 11734ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11734cad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734cb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11734cb3 jmp 0x11734c1e */
  goto L_11734c1e;
L_11734cb8:;
  /* 11734cb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11734cba:;
  /* 11734cba mov esp, ebp */
  ESP = (EBP);
  /* 11734cbc pop ebp */
  EBP = (pop32());
  /* 11734cbd ret  */
  ESPCHK(0x11734c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014cc0 @ 0x11734cc0 (970 bytes, 340 insns) */
void f_11734cc0(void) {
  FTRACE(0x11734cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11734cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11734cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11734cc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11734cc5 push 0x1174e9c0 */
  push32((uint32_t)(0x1174e9c0u));
  /* 11734cca push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 11734ccf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11734cd5 push eax */
  push32((uint32_t)(EAX));
  /* 11734cd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11734cdd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ce0 push ebx */
  push32((uint32_t)(EBX));
  /* 11734ce1 push esi */
  push32((uint32_t)(ESI));
  /* 11734ce2 push edi */
  push32((uint32_t)(EDI));
  /* 11734ce3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11734ce6 cmp dword ptr [0x11752d6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752d6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734ced jne 0x11734d46 */
  if (!C.zf) goto L_11734d46;
  /* 11734cef push 1 */
  push32((uint32_t)(0x1u));
  /* 11734cf1 push 0x1174e01c */
  push32((uint32_t)(0x1174e01cu));
  /* 11734cf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734cf8 push 0x1174e01c */
  push32((uint32_t)(0x1174e01cu));
  /* 11734cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11734cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11734d01 call dword ptr [0x11755278] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755278))), 0x11734d07u);
  /* 11734d07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734d09 je 0x11734d17 */
  if (C.zf) goto L_11734d17;
  /* 11734d0b mov dword ptr [0x11752d6c], 1 */
  w32((uint32_t)(0x11752d6c), (0x1u));
  /* 11734d15 jmp 0x11734d46 */
  goto L_11734d46;
L_11734d17:;
  /* 11734d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734d19 push 0x1174e018 */
  push32((uint32_t)(0x1174e018u));
  /* 11734d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 11734d20 push 0x1174e018 */
  push32((uint32_t)(0x1174e018u));
  /* 11734d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734d29 call dword ptr [0x11755284] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755284))), 0x11734d2fu);
  /* 11734d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734d31 je 0x11734d3f */
  if (C.zf) goto L_11734d3f;
  /* 11734d33 mov dword ptr [0x11752d6c], 2 */
  w32((uint32_t)(0x11752d6c), (0x2u));
  /* 11734d3d jmp 0x11734d46 */
  goto L_11734d46;
L_11734d3f:;
  /* 11734d3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734d41 jmp 0x117350a4 */
  goto L_117350a4;
L_11734d46:;
  /* 11734d46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734d4a jle 0x11734d5f */
  if ((C.zf||C.sf!=C.of)) goto L_11734d5f;
  /* 11734d4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734d4f push eax */
  push32((uint32_t)(EAX));
  /* 11734d50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734d53 push ecx */
  push32((uint32_t)(ECX));
  /* 11734d54 call 0x117350c0 */
  push32(0x11734d59u); f_117350c0();
  /* 11734d59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734d5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11734d5f:;
  /* 11734d5f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734d63 jle 0x11734d78 */
  if ((C.zf||C.sf!=C.of)) goto L_11734d78;
  /* 11734d65 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11734d68 push edx */
  push32((uint32_t)(EDX));
  /* 11734d69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734d6c push eax */
  push32((uint32_t)(EAX));
  /* 11734d6d call 0x117350c0 */
  push32(0x11734d72u); f_117350c0();
  /* 11734d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734d75 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11734d78:;
  /* 11734d78 cmp dword ptr [0x11752d6c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752d6c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734d7f jne 0x11734da4 */
  if (!C.zf) goto L_11734da4;
  /* 11734d81 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11734d84 push ecx */
  push32((uint32_t)(ECX));
  /* 11734d85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734d88 push edx */
  push32((uint32_t)(EDX));
  /* 11734d89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734d8c push eax */
  push32((uint32_t)(EAX));
  /* 11734d8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734d90 push ecx */
  push32((uint32_t)(ECX));
  /* 11734d91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11734d94 push edx */
  push32((uint32_t)(EDX));
  /* 11734d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11734d98 push eax */
  push32((uint32_t)(EAX));
  /* 11734d99 call dword ptr [0x11755284] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755284))), 0x11734d9fu);
  /* 11734d9f jmp 0x117350a4 */
  goto L_117350a4;
L_11734da4:;
  /* 11734da4 cmp dword ptr [0x11752d6c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752d6c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734dab jne 0x117350a2 */
  if (!C.zf) goto L_117350a2;
  /* 11734db1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734db5 jne 0x11734dc0 */
  if (!C.zf) goto L_11734dc0;
  /* 11734db7 mov ecx, dword ptr [0x11752c14] */
  ECX = (r32((uint32_t)(0x11752c14)));
  /* 11734dbd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_11734dc0:;
  /* 11734dc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734dc4 je 0x11734dd0 */
  if (C.zf) goto L_11734dd0;
  /* 11734dc6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734dca jne 0x11734f4c */
  if (!C.zf) goto L_11734f4c;
L_11734dd0:;
  /* 11734dd0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734dd3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734dd6 jne 0x11734de2 */
  if (!C.zf) goto L_11734de2;
  /* 11734dd8 mov eax, 2 */
  EAX = (0x2u);
  /* 11734ddd jmp 0x117350a4 */
  goto L_117350a4;
L_11734de2:;
  /* 11734de2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734de6 jle 0x11734df2 */
  if ((C.zf||C.sf!=C.of)) goto L_11734df2;
  /* 11734de8 mov eax, 1 */
  EAX = (0x1u);
  /* 11734ded jmp 0x117350a4 */
  goto L_117350a4;
L_11734df2:;
  /* 11734df2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734df6 jle 0x11734e02 */
  if ((C.zf||C.sf!=C.of)) goto L_11734e02;
  /* 11734df8 mov eax, 3 */
  EAX = (0x3u);
  /* 11734dfd jmp 0x117350a4 */
  goto L_117350a4;
L_11734e02:;
  /* 11734e02 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11734e05 push eax */
  push32((uint32_t)(EAX));
  /* 11734e06 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11734e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11734e0a call dword ptr [0x11755380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755380))), 0x11734e10u);
  /* 11734e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734e12 jne 0x11734e1b */
  if (!C.zf) goto L_11734e1b;
  /* 11734e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734e16 jmp 0x117350a4 */
  goto L_117350a4;
L_11734e1b:;
  /* 11734e1b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e1f jne 0x11734e27 */
  if (!C.zf) goto L_11734e27;
  /* 11734e21 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e25 je 0x11734e54 */
  if (C.zf) goto L_11734e54;
L_11734e27:;
  /* 11734e27 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e2b jne 0x11734e33 */
  if (!C.zf) goto L_11734e33;
  /* 11734e2d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e31 je 0x11734e54 */
  if (C.zf) goto L_11734e54;
L_11734e33:;
  /* 11734e33 push 0x1174e980 */
  push32((uint32_t)(0x1174e980u));
  /* 11734e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11734e3a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11734e3f push 0x1174e978 */
  push32((uint32_t)(0x1174e978u));
  /* 11734e44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11734e46 call 0x11723380 */
  push32(0x11734e4bu); f_11723380();
  /* 11734e4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11734e4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e51 jne 0x11734e54 */
  if (!C.zf) goto L_11734e54;
  /* 11734e53 int3  */
  x86_unimpl("int3 @ 0x11734e53");
L_11734e54:;
  /* 11734e54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11734e58 jne 0x11734e1b */
  if (!C.zf) goto L_11734e1b;
  /* 11734e5a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e5e jle 0x11734ed3 */
  if ((C.zf||C.sf!=C.of)) goto L_11734ed3;
  /* 11734e60 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734e64 jae 0x11734e70 */
  if (!C.cf) goto L_11734e70;
  /* 11734e66 mov eax, 3 */
  EAX = (0x3u);
  /* 11734e6b jmp 0x117350a4 */
  goto L_117350a4;
L_11734e70:;
  /* 11734e70 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11734e73 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11734e76 jmp 0x11734e81 */
  goto L_11734e81;
L_11734e78:;
  /* 11734e78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734e7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734e7e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_11734e81:;
  /* 11734e81 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734e86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11734e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734e8a je 0x11734ec9 */
  if (C.zf) goto L_11734ec9;
  /* 11734e8c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734e8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734e91 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11734e94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11734e96 je 0x11734ec9 */
  if (C.zf) goto L_11734ec9;
  /* 11734e98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734e9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11734e9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11734e9f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734ea4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11734ea6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734ea8 jl 0x11734ec7 */
  if ((C.sf!=C.of)) goto L_11734ec7;
  /* 11734eaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734ead xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734eaf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11734eb1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734eb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11734eb6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11734eb9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734ebb jg 0x11734ec7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11734ec7;
  /* 11734ebd mov eax, 2 */
  EAX = (0x2u);
  /* 11734ec2 jmp 0x117350a4 */
  goto L_117350a4;
L_11734ec7:;
  /* 11734ec7 jmp 0x11734e78 */
  goto L_11734e78;
L_11734ec9:;
  /* 11734ec9 mov eax, 3 */
  EAX = (0x3u);
  /* 11734ece jmp 0x117350a4 */
  goto L_117350a4;
L_11734ed3:;
  /* 11734ed3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734ed7 jle 0x11734f4c */
  if ((C.zf||C.sf!=C.of)) goto L_11734f4c;
  /* 11734ed9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734edd jae 0x11734ee9 */
  if (!C.cf) goto L_11734ee9;
  /* 11734edf mov eax, 1 */
  EAX = (0x1u);
  /* 11734ee4 jmp 0x117350a4 */
  goto L_117350a4;
L_11734ee9:;
  /* 11734ee9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 11734eec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 11734eef jmp 0x11734efa */
  goto L_11734efa;
L_11734ef1:;
  /* 11734ef1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734ef4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734ef7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_11734efa:;
  /* 11734efa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734efd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734eff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11734f01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11734f03 je 0x11734f42 */
  if (C.zf) goto L_11734f42;
  /* 11734f05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734f08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11734f0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11734f0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11734f0f je 0x11734f42 */
  if (C.zf) goto L_11734f42;
  /* 11734f11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734f14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734f16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11734f18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734f1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11734f1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11734f1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734f21 jl 0x11734f40 */
  if ((C.sf!=C.of)) goto L_11734f40;
  /* 11734f23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734f26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11734f28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11734f2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 11734f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734f2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11734f32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734f34 jg 0x11734f40 */
  if ((!C.zf&&C.sf==C.of)) goto L_11734f40;
  /* 11734f36 mov eax, 2 */
  EAX = (0x2u);
  /* 11734f3b jmp 0x117350a4 */
  goto L_117350a4;
L_11734f40:;
  /* 11734f40 jmp 0x11734ef1 */
  goto L_11734ef1;
L_11734f42:;
  /* 11734f42 mov eax, 1 */
  EAX = (0x1u);
  /* 11734f47 jmp 0x117350a4 */
  goto L_117350a4;
L_11734f4c:;
  /* 11734f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 11734f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11734f50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11734f54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734f57 push edx */
  push32((uint32_t)(EDX));
  /* 11734f58 push 9 */
  push32((uint32_t)(0x9u));
  /* 11734f5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11734f5d push eax */
  push32((uint32_t)(EAX));
  /* 11734f5e call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x11734f64u);
  /* 11734f64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11734f67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734f6b jne 0x11734f74 */
  if (!C.zf) goto L_11734f74;
  /* 11734f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734f6f jmp 0x117350a4 */
  goto L_117350a4;
L_11734f74:;
  /* 11734f74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11734f7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11734f7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11734f80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11734f83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11734f85 call 0x11728410 */
  push32(0x11734f8au); f_11728410();
  /* 11734f8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 11734f8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11734f90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11734f93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11734f96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11734f9d jmp 0x11734fb6 */
  goto L_11734fb6;
  /* 11734f9f mov eax, 1 */
  EAX = (0x1u);
  /* 11734fa4 ret  */
  ESPCHK(0x11734cc0u, _esp0);
  ESP += 4; return;
  /* 11734fa5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11734fa8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11734faf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11734fb6:;
  /* 11734fb6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11734fba jne 0x11734fc3 */
  if (!C.zf) goto L_11734fc3;
  /* 11734fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734fbe jmp 0x117350a4 */
  goto L_117350a4;
L_11734fc3:;
  /* 11734fc3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11734fc6 push edx */
  push32((uint32_t)(EDX));
  /* 11734fc7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11734fca push eax */
  push32((uint32_t)(EAX));
  /* 11734fcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11734fce push ecx */
  push32((uint32_t)(ECX));
  /* 11734fcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11734fd2 push edx */
  push32((uint32_t)(EDX));
  /* 11734fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11734fd5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11734fd8 push eax */
  push32((uint32_t)(EAX));
  /* 11734fd9 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x11734fdfu);
  /* 11734fdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11734fe1 jne 0x11734fea */
  if (!C.zf) goto L_11734fea;
  /* 11734fe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11734fe5 jmp 0x117350a4 */
  goto L_117350a4;
L_11734fea:;
  /* 11734fea push 0 */
  push32((uint32_t)(0x0u));
  /* 11734fec push 0 */
  push32((uint32_t)(0x0u));
  /* 11734fee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11734ff1 push ecx */
  push32((uint32_t)(ECX));
  /* 11734ff2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11734ff5 push edx */
  push32((uint32_t)(EDX));
  /* 11734ff6 push 9 */
  push32((uint32_t)(0x9u));
  /* 11734ff8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11734ffb push eax */
  push32((uint32_t)(EAX));
  /* 11734ffc call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x11735002u);
  /* 11735002 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11735005 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735009 jne 0x11735012 */
  if (!C.zf) goto L_11735012;
  /* 1173500b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173500d jmp 0x117350a4 */
  goto L_117350a4;
L_11735012:;
  /* 11735012 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11735019 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1173501c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1173501e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735021 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11735023 call 0x11728410 */
  push32(0x11735028u); f_11728410();
  /* 11735028 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 1173502b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1173502e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11735031 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11735034 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1173503b jmp 0x11735054 */
  goto L_11735054;
  /* 1173503d mov eax, 1 */
  EAX = (0x1u);
  /* 11735042 ret  */
  ESPCHK(0x11734cc0u, _esp0);
  ESP += 4; return;
  /* 11735043 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11735046 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1173504d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11735054:;
  /* 11735054 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735058 jne 0x1173505e */
  if (!C.zf) goto L_1173505e;
  /* 1173505a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173505c jmp 0x117350a4 */
  goto L_117350a4;
L_1173505e:;
  /* 1173505e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11735061 push edx */
  push32((uint32_t)(EDX));
  /* 11735062 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11735065 push eax */
  push32((uint32_t)(EAX));
  /* 11735066 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11735069 push ecx */
  push32((uint32_t)(ECX));
  /* 1173506a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1173506d push edx */
  push32((uint32_t)(EDX));
  /* 1173506e push 1 */
  push32((uint32_t)(0x1u));
  /* 11735070 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11735073 push eax */
  push32((uint32_t)(EAX));
  /* 11735074 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x1173507au);
  /* 1173507a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1173507c jne 0x11735082 */
  if (!C.zf) goto L_11735082;
  /* 1173507e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11735080 jmp 0x117350a4 */
  goto L_117350a4;
L_11735082:;
  /* 11735082 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11735085 push ecx */
  push32((uint32_t)(ECX));
  /* 11735086 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11735089 push edx */
  push32((uint32_t)(EDX));
  /* 1173508a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1173508d push eax */
  push32((uint32_t)(EAX));
  /* 1173508e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11735091 push ecx */
  push32((uint32_t)(ECX));
  /* 11735092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11735095 push edx */
  push32((uint32_t)(EDX));
  /* 11735096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735099 push eax */
  push32((uint32_t)(EAX));
  /* 1173509a call dword ptr [0x11755278] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755278))), 0x117350a0u);
  /* 117350a0 jmp 0x117350a4 */
  goto L_117350a4;
L_117350a2:;
  /* 117350a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117350a4:;
  /* 117350a4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 117350a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117350aa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117350b1 pop edi */
  EDI = (pop32());
  /* 117350b2 pop esi */
  ESI = (pop32());
  /* 117350b3 pop ebx */
  EBX = (pop32());
  /* 117350b4 mov esp, ebp */
  ESP = (EBP);
  /* 117350b6 pop ebp */
  EBP = (pop32());
  /* 117350b7 ret  */
  ESPCHK(0x11734cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150c0 @ 0x117350c0 (80 bytes, 32 insns) */
void f_117350c0(void) {
  FTRACE(0x117350c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117350c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117350c1 mov ebp, esp */
  EBP = (ESP);
  /* 117350c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117350c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117350c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117350cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117350cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117350d2:;
  /* 117350d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117350d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117350d8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117350db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117350de test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117350e0 je 0x117350f7 */
  if (C.zf) goto L_117350f7;
  /* 117350e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117350e5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117350e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117350ea je 0x117350f7 */
  if (C.zf) goto L_117350f7;
  /* 117350ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117350ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117350f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117350f5 jmp 0x117350d2 */
  goto L_117350d2;
L_117350f7:;
  /* 117350f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117350fa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117350fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117350ff jne 0x11735109 */
  if (!C.zf) goto L_11735109;
  /* 11735101 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11735104 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735107 jmp 0x1173510c */
  goto L_1173510c;
L_11735109:;
  /* 11735109 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1173510c:;
  /* 1173510c mov esp, ebp */
  ESP = (EBP);
  /* 1173510e pop ebp */
  EBP = (pop32());
  /* 1173510f ret  */
  ESPCHK(0x117350c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015110 @ 0x11735110 (736 bytes, 224 insns) */
void f_11735110(void) {
  FTRACE(0x11735110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11735110 push ebp */
  push32((uint32_t)(EBP));
  /* 11735111 mov ebp, esp */
  EBP = (ESP);
  /* 11735113 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735116 push esi */
  push32((uint32_t)(ESI));
  /* 11735117 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173511b je 0x1173513c */
  if (C.zf) goto L_1173513c;
  /* 1173511d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1173511f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735122 push eax */
  push32((uint32_t)(EAX));
  /* 11735123 call 0x11735560 */
  push32(0x11735128u); f_11735560();
  /* 11735128 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173512b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1173512e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735132 je 0x1173513c */
  if (C.zf) goto L_1173513c;
  /* 11735134 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735137 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173513a jne 0x11735144 */
  if (!C.zf) goto L_11735144;
L_1173513c:;
  /* 1173513c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173513f jmp 0x117353eb */
  goto L_117353eb;
L_11735144:;
  /* 11735144 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11735147 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1173514b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1173514d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1173514f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11735150 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11735153 mov ecx, dword ptr [0x11752a94] */
  ECX = (r32((uint32_t)(0x11752a94)));
  /* 11735159 cmp ecx, dword ptr [0x11752a98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11752a98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173515f jne 0x11735175 */
  if (!C.zf) goto L_11735175;
  /* 11735161 mov edx, dword ptr [0x11752a94] */
  EDX = (r32((uint32_t)(0x11752a94)));
  /* 11735167 push edx */
  push32((uint32_t)(EDX));
  /* 11735168 call 0x11735470 */
  push32(0x1173516du); f_11735470();
  /* 1173516d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735170 mov dword ptr [0x11752a94], eax */
  w32((uint32_t)(0x11752a94), (EAX));
L_11735175:;
  /* 11735175 cmp dword ptr [0x11752a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173517c jne 0x11735235 */
  if (!C.zf) goto L_11735235;
  /* 11735182 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735186 je 0x117351a7 */
  if (C.zf) goto L_117351a7;
  /* 11735188 cmp dword ptr [0x11752a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173518f je 0x117351a7 */
  if (C.zf) goto L_117351a7;
  /* 11735191 call 0x11734c10 */
  push32(0x11735196u); f_11734c10();
  /* 11735196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11735198 je 0x117351a2 */
  if (C.zf) goto L_117351a2;
  /* 1173519a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173519d jmp 0x117353eb */
  goto L_117353eb;
L_117351a2:;
  /* 117351a2 jmp 0x11735235 */
  goto L_11735235;
L_117351a7:;
  /* 117351a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117351ab je 0x117351b4 */
  if (C.zf) goto L_117351b4;
  /* 117351ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117351af jmp 0x117353eb */
  goto L_117353eb;
L_117351b4:;
  /* 117351b4 cmp dword ptr [0x11752a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117351bb jne 0x117351f4 */
  if (!C.zf) goto L_117351f4;
  /* 117351bd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 117351c2 push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 117351c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117351c9 push 4 */
  push32((uint32_t)(0x4u));
  /* 117351cb call 0x11723c00 */
  push32(0x117351d0u); f_11723c00();
  /* 117351d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117351d3 mov dword ptr [0x11752a94], eax */
  w32((uint32_t)(0x11752a94), (EAX));
  /* 117351d8 cmp dword ptr [0x11752a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117351df jne 0x117351e9 */
  if (!C.zf) goto L_117351e9;
  /* 117351e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117351e4 jmp 0x117353eb */
  goto L_117353eb;
L_117351e9:;
  /* 117351e9 mov eax, dword ptr [0x11752a94] */
  EAX = (r32((uint32_t)(0x11752a94)));
  /* 117351ee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117351f4:;
  /* 117351f4 cmp dword ptr [0x11752a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117351fb jne 0x11735235 */
  if (!C.zf) goto L_11735235;
  /* 117351fd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 11735202 push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 11735207 push 2 */
  push32((uint32_t)(0x2u));
  /* 11735209 push 4 */
  push32((uint32_t)(0x4u));
  /* 1173520b call 0x11723c00 */
  push32(0x11735210u); f_11723c00();
  /* 11735210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735213 mov dword ptr [0x11752a9c], eax */
  w32((uint32_t)(0x11752a9c), (EAX));
  /* 11735218 cmp dword ptr [0x11752a9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173521f jne 0x11735229 */
  if (!C.zf) goto L_11735229;
  /* 11735221 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11735224 jmp 0x117353eb */
  goto L_117353eb;
L_11735229:;
  /* 11735229 mov ecx, dword ptr [0x11752a9c] */
  ECX = (r32((uint32_t)(0x11752a9c)));
  /* 1173522f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_11735235:;
  /* 11735235 mov edx, dword ptr [0x11752a94] */
  EDX = (r32((uint32_t)(0x11752a94)));
  /* 1173523b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1173523e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11735241 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735244 push eax */
  push32((uint32_t)(EAX));
  /* 11735245 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735248 push ecx */
  push32((uint32_t)(ECX));
  /* 11735249 call 0x117353f0 */
  push32(0x1173524eu); f_117353f0();
  /* 1173524e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735251 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11735254 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735258 jl 0x117352f1 */
  if ((C.sf!=C.of)) goto L_117352f1;
  /* 1173525e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735261 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735264 je 0x117352f1 */
  if (C.zf) goto L_117352f1;
  /* 1173526a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173526e je 0x117352e3 */
  if (C.zf) goto L_117352e3;
  /* 11735270 push 2 */
  push32((uint32_t)(0x2u));
  /* 11735272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735278 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1173527b push edx */
  push32((uint32_t)(EDX));
  /* 1173527c call 0x11724690 */
  push32(0x11735281u); f_11724690();
  /* 11735281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735284 jmp 0x1173528f */
  goto L_1173528f;
L_11735286:;
  /* 11735286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735289 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173528c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1173528f:;
  /* 1173528f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735292 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735295 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735299 je 0x117352b0 */
  if (C.zf) goto L_117352b0;
  /* 1173529b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173529e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117352a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117352a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117352a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 117352ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 117352ae jmp 0x11735286 */
  goto L_11735286;
L_117352b0:;
  /* 117352b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 117352b5 push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 117352ba push 2 */
  push32((uint32_t)(0x2u));
  /* 117352bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117352bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117352c2 push eax */
  push32((uint32_t)(EAX));
  /* 117352c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117352c6 push ecx */
  push32((uint32_t)(ECX));
  /* 117352c7 call 0x11724090 */
  push32(0x117352ccu); f_11724090();
  /* 117352cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117352cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117352d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117352d6 je 0x117352e1 */
  if (C.zf) goto L_117352e1;
  /* 117352d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117352db mov dword ptr [0x11752a94], edx */
  w32((uint32_t)(0x11752a94), (EDX));
L_117352e1:;
  /* 117352e1 jmp 0x117352ef */
  goto L_117352ef;
L_117352e3:;
  /* 117352e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117352e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117352e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117352ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_117352ef:;
  /* 117352ef jmp 0x11735364 */
  goto L_11735364;
L_117352f1:;
  /* 117352f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117352f5 jne 0x1173535d */
  if (!C.zf) goto L_1173535d;
  /* 117352f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117352fb jge 0x11735305 */
  if ((C.sf==C.of)) goto L_11735305;
  /* 117352fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735300 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11735302 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11735305:;
  /* 11735305 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1173530a push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 1173530f push 2 */
  push32((uint32_t)(0x2u));
  /* 11735311 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735314 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1173531b push edx */
  push32((uint32_t)(EDX));
  /* 1173531c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173531f push eax */
  push32((uint32_t)(EAX));
  /* 11735320 call 0x11724090 */
  push32(0x11735325u); f_11724090();
  /* 11735325 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735328 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1173532b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173532f jne 0x11735339 */
  if (!C.zf) goto L_11735339;
  /* 11735331 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11735334 jmp 0x117353eb */
  goto L_117353eb;
L_11735339:;
  /* 11735339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173533c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173533f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735342 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11735345 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735348 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173534b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 11735353 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735356 mov dword ptr [0x11752a94], eax */
  w32((uint32_t)(0x11752a94), (EAX));
  /* 1173535b jmp 0x11735364 */
  goto L_11735364;
L_1173535d:;
  /* 1173535d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173535f jmp 0x117353eb */
  goto L_117353eb;
L_11735364:;
  /* 11735364 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735368 je 0x117353e9 */
  if (C.zf) goto L_117353e9;
  /* 1173536a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1173536f push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 11735374 push 2 */
  push32((uint32_t)(0x2u));
  /* 11735376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735379 push ecx */
  push32((uint32_t)(ECX));
  /* 1173537a call 0x117280a0 */
  push32(0x1173537fu); f_117280a0();
  /* 1173537f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735382 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735385 push eax */
  push32((uint32_t)(EAX));
  /* 11735386 call 0x11723c00 */
  push32(0x1173538bu); f_11723c00();
  /* 1173538b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173538e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11735391 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735395 je 0x117353e9 */
  if (C.zf) goto L_117353e9;
  /* 11735397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173539a push edx */
  push32((uint32_t)(EDX));
  /* 1173539b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1173539e push eax */
  push32((uint32_t)(EAX));
  /* 1173539f call 0x11728220 */
  push32(0x117353a4u); f_11728220();
  /* 117353a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117353a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117353aa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117353ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117353b0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117353b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117353b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117353b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117353bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117353be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117353c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117353c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117353c7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117353c9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117353cb not edx */
  EDX = (~(EDX));
  /* 117353cd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 117353d0 push edx */
  push32((uint32_t)(EDX));
  /* 117353d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117353d4 push eax */
  push32((uint32_t)(EAX));
  /* 117353d5 call dword ptr [0x11755274] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755274))), 0x117353dbu);
  /* 117353db push 2 */
  push32((uint32_t)(0x2u));
  /* 117353dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117353e0 push ecx */
  push32((uint32_t)(ECX));
  /* 117353e1 call 0x11724690 */
  push32(0x117353e6u); f_11724690();
  /* 117353e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117353e9:;
  /* 117353e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117353eb:;
  /* 117353eb pop esi */
  ESI = (pop32());
  /* 117353ec mov esp, ebp */
  ESP = (EBP);
  /* 117353ee pop ebp */
  EBP = (pop32());
  /* 117353ef ret  */
  ESPCHK(0x11735110u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x117353f0 (124 bytes, 47 insns) */
void f_117353f0(void) {
  FTRACE(0x117353f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117353f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117353f1 mov ebp, esp */
  EBP = (ESP);
  /* 117353f3 push ecx */
  push32((uint32_t)(ECX));
  /* 117353f4 mov eax, dword ptr [0x11752a94] */
  EAX = (r32((uint32_t)(0x11752a94)));
  /* 117353f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117353fc jmp 0x11735407 */
  goto L_11735407;
L_117353fe:;
  /* 117353fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11735401 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735404 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11735407:;
  /* 11735407 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173540a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173540d je 0x1173545a */
  if (C.zf) goto L_1173545a;
  /* 1173540f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11735412 push eax */
  push32((uint32_t)(EAX));
  /* 11735413 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11735416 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11735418 push edx */
  push32((uint32_t)(EDX));
  /* 11735419 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173541c push eax */
  push32((uint32_t)(EAX));
  /* 1173541d call 0x11734bc0 */
  push32(0x11735422u); f_11734bc0();
  /* 11735422 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735425 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11735427 jne 0x11735458 */
  if (!C.zf) goto L_11735458;
  /* 11735429 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173542c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1173542e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11735431 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 11735435 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735438 je 0x1173544a */
  if (C.zf) goto L_1173544a;
  /* 1173543a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173543d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1173543f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11735442 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 11735446 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11735448 jne 0x11735458 */
  if (!C.zf) goto L_11735458;
L_1173544a:;
  /* 1173544a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173544d sub eax, dword ptr [0x11752a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752a94))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735453 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11735456 jmp 0x11735468 */
  goto L_11735468;
L_11735458:;
  /* 11735458 jmp 0x117353fe */
  goto L_117353fe;
L_1173545a:;
  /* 1173545a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1173545d sub eax, dword ptr [0x11752a94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11752a94))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735463 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11735466 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11735468:;
  /* 11735468 mov esp, ebp */
  ESP = (EBP);
  /* 1173546a pop ebp */
  EBP = (pop32());
  /* 1173546b ret  */
  ESPCHK(0x117353f0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x11735470 (238 bytes, 80 insns) */
void f_11735470(void) {
  FTRACE(0x11735470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11735470 push ebp */
  push32((uint32_t)(EBP));
  /* 11735471 mov ebp, esp */
  EBP = (ESP);
  /* 11735473 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735476 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1173547d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735480 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11735483 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735487 jne 0x11735490 */
  if (!C.zf) goto L_11735490;
  /* 11735489 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1173548b jmp 0x1173555a */
  goto L_1173555a;
L_11735490:;
  /* 11735490 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735493 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11735495 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735498 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1173549b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1173549e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117354a0 je 0x117354ad */
  if (C.zf) goto L_117354ad;
  /* 117354a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117354a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117354a8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117354ab jmp 0x11735490 */
  goto L_11735490;
L_117354ad:;
  /* 117354ad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 117354b2 push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 117354b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117354b9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117354bc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 117354c3 push eax */
  push32((uint32_t)(EAX));
  /* 117354c4 call 0x11723c00 */
  push32(0x117354c9u); f_11723c00();
  /* 117354c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117354cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117354cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117354d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117354d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117354d9 jne 0x117354e5 */
  if (!C.zf) goto L_117354e5;
  /* 117354db push 9 */
  push32((uint32_t)(0x9u));
  /* 117354dd call 0x11723230 */
  push32(0x117354e2u); f_11723230();
  /* 117354e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117354e5:;
  /* 117354e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117354e8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117354eb:;
  /* 117354eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117354ee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117354f1 je 0x1173554e */
  if (C.zf) goto L_1173554e;
  /* 117354f3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 117354f8 push 0x1174e9d8 */
  push32((uint32_t)(0x1174e9d8u));
  /* 117354fd push 2 */
  push32((uint32_t)(0x2u));
  /* 117354ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735502 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11735504 push edx */
  push32((uint32_t)(EDX));
  /* 11735505 call 0x117280a0 */
  push32(0x1173550au); f_117280a0();
  /* 1173550a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173550d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735510 push eax */
  push32((uint32_t)(EAX));
  /* 11735511 call 0x11723c00 */
  push32(0x11735516u); f_11723c00();
  /* 11735516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735519 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173551c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1173551e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735521 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735524 je 0x1173553a */
  if (C.zf) goto L_1173553a;
  /* 11735526 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11735529 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1173552b push ecx */
  push32((uint32_t)(ECX));
  /* 1173552c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1173552f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11735531 push eax */
  push32((uint32_t)(EAX));
  /* 11735532 call 0x11728220 */
  push32(0x11735537u); f_11728220();
  /* 11735537 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1173553a:;
  /* 1173553a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1173553d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735540 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11735543 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735546 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735549 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1173554c jmp 0x117354eb */
  goto L_117354eb;
L_1173554e:;
  /* 1173554e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11735551 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11735557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1173555a:;
  /* 1173555a mov esp, ebp */
  ESP = (EBP);
  /* 1173555c pop ebp */
  EBP = (pop32());
  /* 1173555d ret  */
  ESPCHK(0x11735470u, _esp0);
  ESP += 4; return;
}

/* FUN_10015560 @ 0x11735560 (237 bytes, 81 insns) */
void f_11735560(void) {
  FTRACE(0x11735560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11735560 push ebp */
  push32((uint32_t)(EBP));
  /* 11735561 mov ebp, esp */
  EBP = (ESP);
  /* 11735563 push ecx */
  push32((uint32_t)(ECX));
  /* 11735564 cmp dword ptr [0x1175416c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1175416c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1173556b jne 0x11735582 */
  if (!C.zf) goto L_11735582;
  /* 1173556d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11735570 push eax */
  push32((uint32_t)(EAX));
  /* 11735571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735574 push ecx */
  push32((uint32_t)(ECX));
  /* 11735575 call 0x11735660 */
  push32(0x1173557au); f_11735660();
  /* 1173557a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173557d jmp 0x11735649 */
  goto L_11735649;
L_11735582:;
  /* 11735582 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11735584 call 0x11723b00 */
  push32(0x11735589u); f_11723b00();
  /* 11735589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173558c jmp 0x11735597 */
  goto L_11735597;
L_1173558e:;
  /* 1173558e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735591 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11735594 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11735597:;
  /* 11735597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173559a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1173559e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 117355a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117355a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117355ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117355ad je 0x1173562b */
  if (C.zf) goto L_1173562b;
  /* 117355af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117355b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117355b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117355b9 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 117355bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117355c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117355c4 je 0x11735616 */
  if (C.zf) goto L_11735616;
  /* 117355c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117355c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117355cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 117355cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117355d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117355d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117355d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117355d8 jne 0x117355e8 */
  if (!C.zf) goto L_117355e8;
  /* 117355da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117355dc call 0x11723ba0 */
  push32(0x117355e1u); f_11723ba0();
  /* 117355e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117355e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117355e6 jmp 0x11735649 */
  goto L_11735649;
L_117355e8:;
  /* 117355e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117355eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117355f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 117355f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117355f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117355f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117355fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117355fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735600 jne 0x11735614 */
  if (!C.zf) goto L_11735614;
  /* 11735602 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11735604 call 0x11723ba0 */
  push32(0x11735609u); f_11723ba0();
  /* 11735609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1173560c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1173560f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11735612 jmp 0x11735649 */
  goto L_11735649;
L_11735614:;
  /* 11735614 jmp 0x11735626 */
  goto L_11735626;
L_11735616:;
  /* 11735616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11735619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1173561f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735622 jne 0x11735626 */
  if (!C.zf) goto L_11735626;
  /* 11735624 jmp 0x1173562b */
  goto L_1173562b;
L_11735626:;
  /* 11735626 jmp 0x1173558e */
  goto L_1173558e;
L_1173562b:;
  /* 1173562b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1173562d call 0x11723ba0 */
  push32(0x11735632u); f_11723ba0();
  /* 11735632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11735635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11735638 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1173563d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11735640 jne 0x11735647 */
  if (!C.zf) goto L_11735647;
  /* 11735642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11735645 jmp 0x11735649 */
  goto L_11735649;
L_11735647:;
  /* 11735647 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11735649:;
  /* 11735649 mov esp, ebp */
  ESP = (EBP);
  /* 1173564b pop ebp */
  EBP = (pop32());
  /* 1173564c ret  */
  ESPCHK(0x11735560u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11735660 (193 bytes, 87 insns) */
void f_11735660(void) {
  FTRACE(0x11735660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11735660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11735662 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11735666 push ebx */
  push32((uint32_t)(EBX));
  /* 11735667 mov ebx, eax */
  EBX = (EAX);
  /* 11735669 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1173566c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11735670 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11735676 je 0x1173568b */
  if (C.zf) goto L_1173568b;
L_11735678:;
  /* 11735678 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1173567a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1173567b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1173567d je 0x11735650 */
  if (C.zf) { jmp_ind(0x11735650u); return; }
  /* 1173567f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11735681 je 0x117356d4 */
  if (C.zf) goto L_117356d4;
  /* 11735683 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11735689 jne 0x11735678 */
  if (!C.zf) goto L_11735678;
L_1173568b:;
  /* 1173568b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1173568d push edi */
  push32((uint32_t)(EDI));
  /* 1173568e mov eax, ebx */
  EAX = (EBX);
  /* 11735690 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11735693 push esi */
  push32((uint32_t)(ESI));
  /* 11735694 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11735696:;
  /* 11735696 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11735698 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1173569d mov eax, ecx */
  EAX = (ECX);
  /* 1173569f mov esi, edi */
  ESI = (EDI);
  /* 117356a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 117356a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117356a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117356a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 117356aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117356ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117356af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 117356b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117356b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 117356ba jne 0x117356d8 */
  if (!C.zf) goto L_117356d8;
  /* 117356bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 117356c1 je 0x11735696 */
  if (C.zf) goto L_11735696;
  /* 117356c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 117356c8 jne 0x117356d2 */
  if (!C.zf) goto L_117356d2;
  /* 117356ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 117356d0 jne 0x11735696 */
  if (!C.zf) goto L_11735696;
L_117356d2:;
  /* 117356d2 pop esi */
  ESI = (pop32());
  /* 117356d3 pop edi */
  EDI = (pop32());
L_117356d4:;
  /* 117356d4 pop ebx */
  EBX = (pop32());
  /* 117356d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117356d7 ret  */
  ESPCHK(0x11735660u, _esp0);
  ESP += 4; return;
L_117356d8:;
  /* 117356d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 117356db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117356dd je 0x11735715 */
  if (C.zf) goto L_11735715;
  /* 117356df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117356e1 je 0x117356d2 */
  if (C.zf) goto L_117356d2;
  /* 117356e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117356e5 je 0x1173570e */
  if (C.zf) goto L_1173570e;
  /* 117356e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117356e9 je 0x117356d2 */
  if (C.zf) goto L_117356d2;
  /* 117356eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 117356ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117356f0 je 0x11735707 */
  if (C.zf) goto L_11735707;
  /* 117356f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117356f4 je 0x117356d2 */
  if (C.zf) goto L_117356d2;
  /* 117356f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117356f8 je 0x11735700 */
  if (C.zf) goto L_11735700;
  /* 117356fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117356fc je 0x117356d2 */
  if (C.zf) goto L_117356d2;
  /* 117356fe jmp 0x11735696 */
  goto L_11735696;
L_11735700:;
  /* 11735700 pop esi */
  ESI = (pop32());
  /* 11735701 pop edi */
  EDI = (pop32());
  /* 11735702 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11735705 pop ebx */
  EBX = (pop32());
  /* 11735706 ret  */
  ESPCHK(0x11735660u, _esp0);
  ESP += 4; return;
L_11735707:;
  /* 11735707 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1173570a pop esi */
  ESI = (pop32());
  /* 1173570b pop edi */
  EDI = (pop32());
  /* 1173570c pop ebx */
  EBX = (pop32());
  /* 1173570d ret  */
  ESPCHK(0x11735660u, _esp0);
  ESP += 4; return;
L_1173570e:;
  /* 1173570e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11735711 pop esi */
  ESI = (pop32());
  /* 11735712 pop edi */
  EDI = (pop32());
  /* 11735713 pop ebx */
  EBX = (pop32());
  /* 11735714 ret  */
  ESPCHK(0x11735660u, _esp0);
  ESP += 4; return;
L_11735715:;
  /* 11735715 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11735718 pop esi */
  ESI = (pop32());
  /* 11735719 pop edi */
  EDI = (pop32());
  /* 1173571a pop ebx */
  EBX = (pop32());
  /* 1173571b ret  */
  ESPCHK(0x11735660u, _esp0);
  ESP += 4; return;
  /* 1173571e rcl byte ptr [edx + 0x75] */
  { uint32_t _v=(r8((uint32_t)(EDX + 0x75)))&0xffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=(_v>>7)&1; _v=((_v<<1)|_cf)&0xffu; _cf=_b; } w8((uint32_t)(EDX + 0x75), (_v)); C.cf=_cf; }
}

/* RtlUnwind @ 0x1173571c (6 bytes, 1 insns) */
void f_1173571c(void) {
  FTRACE(0x1173571cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1173571c jmp dword ptr [0x117552d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x117552d0)))); return;
}

/* Unwind@1001b500 @ 0x1173b500 (11 bytes, 5 insns) */
void f_1173b500(void) {
  FTRACE(0x1173b500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1173b500 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1173b503 push eax */
  push32((uint32_t)(EAX));
  /* 1173b504 call 0x11722920 */
  push32(0x1173b509u); f_11722920();
  /* 1173b509 pop ecx */
  ECX = (pop32());
  /* 1173b50a ret  */
  ESPCHK(0x1173b500u, _esp0);
  ESP += 4; return;
}

