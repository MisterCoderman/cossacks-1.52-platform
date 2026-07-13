#include "recomp.h"

/* _memset @ 0x1139acc0 (88 bytes, 40 insns) */
void f_1139acc0(void) {
  FTRACE(0x1139acc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139acc0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1139acc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1139acc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139acca je 0x1139ad13 */
  if (C.zf) goto L_1139ad13;
  /* 1139accc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139acce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1139acd2 push edi */
  push32((uint32_t)(EDI));
  /* 1139acd3 mov edi, ecx */
  EDI = (ECX);
  /* 1139acd5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139acd8 jb 0x1139ad07 */
  if (C.cf) goto L_1139ad07;
  /* 1139acda neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139acdc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1139acdf je 0x1139ace9 */
  if (C.zf) goto L_1139ace9;
  /* 1139ace1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1139ace3:;
  /* 1139ace3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139ace5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1139ace6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1139ace7 jne 0x1139ace3 */
  if (!C.zf) goto L_1139ace3;
L_1139ace9:;
  /* 1139ace9 mov ecx, eax */
  ECX = (EAX);
  /* 1139aceb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1139acee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139acf0 mov ecx, eax */
  ECX = (EAX);
  /* 1139acf2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1139acf5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139acf7 mov ecx, edx */
  ECX = (EDX);
  /* 1139acf9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139acfc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139acff je 0x1139ad07 */
  if (C.zf) goto L_1139ad07;
  /* 1139ad01 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1139ad03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ad05 je 0x1139ad0d */
  if (C.zf) goto L_1139ad0d;
L_1139ad07:;
  /* 1139ad07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139ad09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1139ad0a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1139ad0b jne 0x1139ad07 */
  if (!C.zf) goto L_1139ad07;
L_1139ad0d:;
  /* 1139ad0d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1139ad11 pop edi */
  EDI = (pop32());
  /* 1139ad12 ret  */
  ESPCHK(0x1139acc0u, _esp0);
  ESP += 4; return;
L_1139ad13:;
  /* 1139ad13 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1139ad17 ret  */
  ESPCHK(0x1139acc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad20 @ 0x1139ad20 (23 bytes, 10 insns) */
void f_1139ad20(void) {
  FTRACE(0x1139ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ad20 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ad21 mov ebp, esp */
  EBP = (ESP);
  /* 1139ad23 mov eax, dword ptr [0x113c29dc] */
  EAX = (r32((uint32_t)(0x113c29dc)));
  /* 1139ad28 push eax */
  push32((uint32_t)(EAX));
  /* 1139ad29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ad2c push ecx */
  push32((uint32_t)(ECX));
  /* 1139ad2d call 0x1139ad40 */
  push32(0x1139ad32u); f_1139ad40();
  /* 1139ad32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ad35 pop ebp */
  EBP = (pop32());
  /* 1139ad36 ret  */
  ESPCHK(0x1139ad20u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1139ad40 (87 bytes, 34 insns) */
void f_1139ad40(void) {
  FTRACE(0x1139ad40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ad40 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ad41 mov ebp, esp */
  EBP = (ESP);
  /* 1139ad43 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ad44 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ad48 jbe 0x1139ad4e */
  if ((C.cf||C.zf)) goto L_1139ad4e;
  /* 1139ad4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ad4c jmp 0x1139ad93 */
  goto L_1139ad93;
L_1139ad4e:;
  /* 1139ad4e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ad52 ja 0x1139ad65 */
  if ((!C.cf&&!C.zf)) goto L_1139ad65;
  /* 1139ad54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ad57 push eax */
  push32((uint32_t)(EAX));
  /* 1139ad58 call 0x1139ada0 */
  push32(0x1139ad5du); f_1139ada0();
  /* 1139ad5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ad60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139ad63 jmp 0x1139ad6c */
  goto L_1139ad6c;
L_1139ad65:;
  /* 1139ad65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1139ad6c:;
  /* 1139ad6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ad70 jne 0x1139ad78 */
  if (!C.zf) goto L_1139ad78;
  /* 1139ad72 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ad76 jne 0x1139ad7d */
  if (!C.zf) goto L_1139ad7d;
L_1139ad78:;
  /* 1139ad78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ad7b jmp 0x1139ad93 */
  goto L_1139ad93;
L_1139ad7d:;
  /* 1139ad7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ad80 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ad81 call 0x1139ac90 */
  push32(0x1139ad86u); f_1139ac90();
  /* 1139ad86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ad89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139ad8b jne 0x1139ad91 */
  if (!C.zf) goto L_1139ad91;
  /* 1139ad8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ad8f jmp 0x1139ad93 */
  goto L_1139ad93;
L_1139ad91:;
  /* 1139ad91 jmp 0x1139ad4e */
  goto L_1139ad4e;
L_1139ad93:;
  /* 1139ad93 mov esp, ebp */
  ESP = (EBP);
  /* 1139ad95 pop ebp */
  EBP = (pop32());
  /* 1139ad96 ret  */
  ESPCHK(0x1139ad40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x1139ada0 (109 bytes, 37 insns) */
void f_1139ada0(void) {
  FTRACE(0x1139ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1139ada3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ada4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ada7 cmp eax, dword ptr [0x113c0db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139adad ja 0x1139addd */
  if ((!C.cf&&!C.zf)) goto L_1139addd;
  /* 1139adaf push 9 */
  push32((uint32_t)(0x9u));
  /* 1139adb1 call 0x1139a010 */
  push32(0x1139adb6u); f_1139a010();
  /* 1139adb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139adb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139adbc push ecx */
  push32((uint32_t)(ECX));
  /* 1139adbd call 0x1139b8e0 */
  push32(0x1139adc2u); f_1139b8e0();
  /* 1139adc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139adc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139adc8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139adca call 0x1139a0b0 */
  push32(0x1139adcfu); f_1139a0b0();
  /* 1139adcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139add2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139add6 je 0x1139addd */
  if (C.zf) goto L_1139addd;
  /* 1139add8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139addb jmp 0x1139ae09 */
  goto L_1139ae09;
L_1139addd:;
  /* 1139addd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ade1 jne 0x1139adea */
  if (!C.zf) goto L_1139adea;
  /* 1139ade3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1139adea:;
  /* 1139adea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139aded add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139adf0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1139adf3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1139adf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139adf9 push eax */
  push32((uint32_t)(EAX));
  /* 1139adfa push 0 */
  push32((uint32_t)(0x0u));
  /* 1139adfc mov ecx, dword ptr [0x113c40ec] */
  ECX = (r32((uint32_t)(0x113c40ec)));
  /* 1139ae02 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ae03 call dword ptr [0x113c5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5348))), 0x1139ae09u);
L_1139ae09:;
  /* 1139ae09 mov esp, ebp */
  ESP = (EBP);
  /* 1139ae0b pop ebp */
  EBP = (pop32());
  /* 1139ae0c ret  */
  ESPCHK(0x1139ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x1139ae10 (10 bytes, 5 insns) */
void f_1139ae10(void) {
  FTRACE(0x1139ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ae10 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ae11 mov ebp, esp */
  EBP = (ESP);
  /* 1139ae13 mov eax, 1 */
  EAX = (0x1u);
  /* 1139ae18 pop ebp */
  EBP = (pop32());
  /* 1139ae19 ret  */
  ESPCHK(0x1139ae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae20 @ 0x1139ae20 (173 bytes, 59 insns) */
void f_1139ae20(void) {
  FTRACE(0x1139ae20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ae20 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ae21 mov ebp, esp */
  EBP = (ESP);
  /* 1139ae23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ae26 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ae2a jbe 0x1139ae33 */
  if ((C.cf||C.zf)) goto L_1139ae33;
  /* 1139ae2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ae2e jmp 0x1139aec9 */
  goto L_1139aec9;
L_1139ae33:;
  /* 1139ae33 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139ae35 call 0x1139a010 */
  push32(0x1139ae3au); f_1139a010();
  /* 1139ae3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ae3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ae40 push eax */
  push32((uint32_t)(EAX));
  /* 1139ae41 call 0x1139b250 */
  push32(0x1139ae46u); f_1139b250();
  /* 1139ae46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ae49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139ae4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ae50 je 0x1139ae91 */
  if (C.zf) goto L_1139ae91;
  /* 1139ae52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139ae59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ae5c cmp ecx, dword ptr [0x113c0db4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c0db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ae62 ja 0x1139ae82 */
  if ((!C.cf&&!C.zf)) goto L_1139ae82;
  /* 1139ae64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ae67 push edx */
  push32((uint32_t)(EDX));
  /* 1139ae68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ae6b push eax */
  push32((uint32_t)(EAX));
  /* 1139ae6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ae6f push ecx */
  push32((uint32_t)(ECX));
  /* 1139ae70 call 0x1139c120 */
  push32(0x1139ae75u); f_1139c120();
  /* 1139ae75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ae78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139ae7a je 0x1139ae82 */
  if (C.zf) goto L_1139ae82;
  /* 1139ae7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ae7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139ae82:;
  /* 1139ae82 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139ae84 call 0x1139a0b0 */
  push32(0x1139ae89u); f_1139a0b0();
  /* 1139ae89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ae8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ae8f jmp 0x1139aec9 */
  goto L_1139aec9;
L_1139ae91:;
  /* 1139ae91 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139ae93 call 0x1139a0b0 */
  push32(0x1139ae98u); f_1139a0b0();
  /* 1139ae98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ae9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ae9f jne 0x1139aea8 */
  if (!C.zf) goto L_1139aea8;
  /* 1139aea1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1139aea8:;
  /* 1139aea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139aeab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aeae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1139aeb0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1139aeb3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139aeb6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139aeb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139aeba push edx */
  push32((uint32_t)(EDX));
  /* 1139aebb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1139aebd mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 1139aec2 push eax */
  push32((uint32_t)(EAX));
  /* 1139aec3 call dword ptr [0x113c5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5344))), 0x1139aec9u);
L_1139aec9:;
  /* 1139aec9 mov esp, ebp */
  ESP = (EBP);
  /* 1139aecb pop ebp */
  EBP = (pop32());
  /* 1139aecc ret  */
  ESPCHK(0x1139ae20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aed0 @ 0x1139aed0 (490 bytes, 165 insns) */
void f_1139aed0(void) {
  FTRACE(0x1139aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139aed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139aed1 mov ebp, esp */
  EBP = (ESP);
  /* 1139aed3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139aed6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aeda jne 0x1139aeed */
  if (!C.zf) goto L_1139aeed;
  /* 1139aedc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139aedf push eax */
  push32((uint32_t)(EAX));
  /* 1139aee0 call 0x1139ad20 */
  push32(0x1139aee5u); f_1139ad20();
  /* 1139aee5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aee8 jmp 0x1139b0b6 */
  goto L_1139b0b6;
L_1139aeed:;
  /* 1139aeed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aef1 jne 0x1139af06 */
  if (!C.zf) goto L_1139af06;
  /* 1139aef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139aef6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139aef7 call 0x1139b0c0 */
  push32(0x1139aefcu); f_1139b0c0();
  /* 1139aefc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139aeff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139af01 jmp 0x1139b0b6 */
  goto L_1139b0b6;
L_1139af06:;
  /* 1139af06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1139af0d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139af11 ja 0x1139b089 */
  if ((!C.cf&&!C.zf)) goto L_1139b089;
  /* 1139af17 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139af19 call 0x1139a010 */
  push32(0x1139af1eu); f_1139a010();
  /* 1139af1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139af21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139af24 push edx */
  push32((uint32_t)(EDX));
  /* 1139af25 call 0x1139b250 */
  push32(0x1139af2au); f_1139b250();
  /* 1139af2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139af2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139af30 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139af34 je 0x1139b04c */
  if (C.zf) goto L_1139b04c;
  /* 1139af3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139af3d cmp eax, dword ptr [0x113c0db4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c0db4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139af43 ja 0x1139afc0 */
  if ((!C.cf&&!C.zf)) goto L_1139afc0;
  /* 1139af45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139af48 push ecx */
  push32((uint32_t)(ECX));
  /* 1139af49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139af4c push edx */
  push32((uint32_t)(EDX));
  /* 1139af4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139af50 push eax */
  push32((uint32_t)(EAX));
  /* 1139af51 call 0x1139c120 */
  push32(0x1139af56u); f_1139c120();
  /* 1139af56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139af59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139af5b je 0x1139af65 */
  if (C.zf) goto L_1139af65;
  /* 1139af5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139af60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139af63 jmp 0x1139afc0 */
  goto L_1139afc0;
L_1139af65:;
  /* 1139af65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139af68 push edx */
  push32((uint32_t)(EDX));
  /* 1139af69 call 0x1139b8e0 */
  push32(0x1139af6eu); f_1139b8e0();
  /* 1139af6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139af71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139af74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139af78 je 0x1139afc0 */
  if (C.zf) goto L_1139afc0;
  /* 1139af7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139af7d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1139af80 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139af83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139af86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139af89 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139af8c jae 0x1139af96 */
  if (!C.cf) goto L_1139af96;
  /* 1139af8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139af91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139af94 jmp 0x1139af9c */
  goto L_1139af9c;
L_1139af96:;
  /* 1139af96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139af99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1139af9c:;
  /* 1139af9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139af9f push edx */
  push32((uint32_t)(EDX));
  /* 1139afa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139afa3 push eax */
  push32((uint32_t)(EAX));
  /* 1139afa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139afa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1139afa8 call 0x1139d830 */
  push32(0x1139afadu); f_1139d830();
  /* 1139afad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139afb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139afb3 push edx */
  push32((uint32_t)(EDX));
  /* 1139afb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139afb7 push eax */
  push32((uint32_t)(EAX));
  /* 1139afb8 call 0x1139b310 */
  push32(0x1139afbdu); f_1139b310();
  /* 1139afbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139afc0:;
  /* 1139afc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139afc4 jne 0x1139b040 */
  if (!C.zf) goto L_1139b040;
  /* 1139afc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139afca jne 0x1139afd3 */
  if (!C.zf) goto L_1139afd3;
  /* 1139afcc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1139afd3:;
  /* 1139afd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139afd6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139afd9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1139afdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1139afdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139afe2 push edx */
  push32((uint32_t)(EDX));
  /* 1139afe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139afe5 mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 1139afea push eax */
  push32((uint32_t)(EAX));
  /* 1139afeb call dword ptr [0x113c5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5348))), 0x1139aff1u);
  /* 1139aff1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139aff4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139aff8 je 0x1139b040 */
  if (C.zf) goto L_1139b040;
  /* 1139affa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139affd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1139b000 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b003 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139b006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b009 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b00c jae 0x1139b016 */
  if (!C.cf) goto L_1139b016;
  /* 1139b00e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b011 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1139b014 jmp 0x1139b01c */
  goto L_1139b01c;
L_1139b016:;
  /* 1139b016 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b019 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1139b01c:;
  /* 1139b01c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139b01f push eax */
  push32((uint32_t)(EAX));
  /* 1139b020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b023 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b024 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b027 push edx */
  push32((uint32_t)(EDX));
  /* 1139b028 call 0x1139d830 */
  push32(0x1139b02du); f_1139d830();
  /* 1139b02d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b033 push eax */
  push32((uint32_t)(EAX));
  /* 1139b034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139b037 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b038 call 0x1139b310 */
  push32(0x1139b03du); f_1139b310();
  /* 1139b03d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139b040:;
  /* 1139b040 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b042 call 0x1139a0b0 */
  push32(0x1139b047u); f_1139a0b0();
  /* 1139b047 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b04a jmp 0x1139b089 */
  goto L_1139b089;
L_1139b04c:;
  /* 1139b04c push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b04e call 0x1139a0b0 */
  push32(0x1139b053u); f_1139a0b0();
  /* 1139b053 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b056 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b05a jne 0x1139b063 */
  if (!C.zf) goto L_1139b063;
  /* 1139b05c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1139b063:;
  /* 1139b063 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b066 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b069 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1139b06c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1139b06f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b072 push eax */
  push32((uint32_t)(EAX));
  /* 1139b073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b076 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b077 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b079 mov edx, dword ptr [0x113c40ec] */
  EDX = (r32((uint32_t)(0x113c40ec)));
  /* 1139b07f push edx */
  push32((uint32_t)(EDX));
  /* 1139b080 call dword ptr [0x113c5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5344))), 0x1139b086u);
  /* 1139b086 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1139b089:;
  /* 1139b089 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b08d jne 0x1139b098 */
  if (!C.zf) goto L_1139b098;
  /* 1139b08f cmp dword ptr [0x113c29dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b096 jne 0x1139b09d */
  if (!C.zf) goto L_1139b09d;
L_1139b098:;
  /* 1139b098 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b09b jmp 0x1139b0b6 */
  goto L_1139b0b6;
L_1139b09d:;
  /* 1139b09d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b0a0 push eax */
  push32((uint32_t)(EAX));
  /* 1139b0a1 call 0x1139ac90 */
  push32(0x1139b0a6u); f_1139ac90();
  /* 1139b0a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b0a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139b0ab jne 0x1139b0b1 */
  if (!C.zf) goto L_1139b0b1;
  /* 1139b0ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b0af jmp 0x1139b0b6 */
  goto L_1139b0b6;
L_1139b0b1:;
  /* 1139b0b1 jmp 0x1139af06 */
  goto L_1139af06;
L_1139b0b6:;
  /* 1139b0b6 mov esp, ebp */
  ESP = (EBP);
  /* 1139b0b8 pop ebp */
  EBP = (pop32());
  /* 1139b0b9 ret  */
  ESPCHK(0x1139aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0c0 @ 0x1139b0c0 (104 bytes, 38 insns) */
void f_1139b0c0(void) {
  FTRACE(0x1139b0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b0c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b0c8 jne 0x1139b0cc */
  if (!C.zf) goto L_1139b0cc;
  /* 1139b0ca jmp 0x1139b124 */
  goto L_1139b124;
L_1139b0cc:;
  /* 1139b0cc push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b0ce call 0x1139a010 */
  push32(0x1139b0d3u); f_1139a010();
  /* 1139b0d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b0d9 push eax */
  push32((uint32_t)(EAX));
  /* 1139b0da call 0x1139b250 */
  push32(0x1139b0dfu); f_1139b250();
  /* 1139b0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b0e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139b0e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b0e9 je 0x1139b107 */
  if (C.zf) goto L_1139b107;
  /* 1139b0eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b0ee push ecx */
  push32((uint32_t)(ECX));
  /* 1139b0ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b0f2 push edx */
  push32((uint32_t)(EDX));
  /* 1139b0f3 call 0x1139b310 */
  push32(0x1139b0f8u); f_1139b310();
  /* 1139b0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b0fb push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b0fd call 0x1139a0b0 */
  push32(0x1139b102u); f_1139a0b0();
  /* 1139b102 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b105 jmp 0x1139b124 */
  goto L_1139b124;
L_1139b107:;
  /* 1139b107 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b109 call 0x1139a0b0 */
  push32(0x1139b10eu); f_1139a0b0();
  /* 1139b10e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b114 push eax */
  push32((uint32_t)(EAX));
  /* 1139b115 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b117 mov ecx, dword ptr [0x113c40ec] */
  ECX = (r32((uint32_t)(0x113c40ec)));
  /* 1139b11d push ecx */
  push32((uint32_t)(ECX));
  /* 1139b11e call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x1139b124u);
L_1139b124:;
  /* 1139b124 mov esp, ebp */
  ESP = (EBP);
  /* 1139b126 pop ebp */
  EBP = (pop32());
  /* 1139b127 ret  */
  ESPCHK(0x1139b0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x1139b130 (116 bytes, 34 insns) */
void f_1139b130(void) {
  FTRACE(0x1139b130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b130 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b131 mov ebp, esp */
  EBP = (ESP);
  /* 1139b133 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b134 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1139b13b push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b13d call 0x1139a010 */
  push32(0x1139b142u); f_1139a010();
  /* 1139b142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b145 call 0x1139c840 */
  push32(0x1139b14au); f_1139c840();
  /* 1139b14a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139b14c jge 0x1139b155 */
  if ((C.sf==C.of)) goto L_1139b155;
  /* 1139b14e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1139b155:;
  /* 1139b155 push 9 */
  push32((uint32_t)(0x9u));
  /* 1139b157 call 0x1139a0b0 */
  push32(0x1139b15cu); f_1139a0b0();
  /* 1139b15c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b15f push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b161 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b163 mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 1139b168 push eax */
  push32((uint32_t)(EAX));
  /* 1139b169 call dword ptr [0x113c5388] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5388))), 0x1139b16fu);
  /* 1139b16f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139b171 jne 0x1139b19d */
  if (!C.zf) goto L_1139b19d;
  /* 1139b173 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x1139b179u);
  /* 1139b179 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b17c jne 0x1139b196 */
  if (!C.zf) goto L_1139b196;
  /* 1139b17e call 0x1139ee30 */
  push32(0x1139b183u); f_1139ee30();
  /* 1139b183 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1139b189 call 0x1139ee20 */
  push32(0x1139b18eu); f_1139ee20();
  /* 1139b18e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1139b194 jmp 0x1139b19d */
  goto L_1139b19d;
L_1139b196:;
  /* 1139b196 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1139b19d:;
  /* 1139b19d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b1a0 mov esp, ebp */
  ESP = (EBP);
  /* 1139b1a2 pop ebp */
  EBP = (pop32());
  /* 1139b1a3 ret  */
  ESPCHK(0x1139b130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1b0 @ 0x1139b1b0 (10 bytes, 5 insns) */
void f_1139b1b0(void) {
  FTRACE(0x1139b1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b1b3 call 0x1139b130 */
  push32(0x1139b1b8u); f_1139b130();
  /* 1139b1b8 pop ebp */
  EBP = (pop32());
  /* 1139b1b9 ret  */
  ESPCHK(0x1139b1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x1139b1c0 (10 bytes, 5 insns) */
void f_1139b1c0(void) {
  FTRACE(0x1139b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b1c3 mov eax, dword ptr [0x113c0db4] */
  EAX = (r32((uint32_t)(0x113c0db4)));
  /* 1139b1c8 pop ebp */
  EBP = (pop32());
  /* 1139b1c9 ret  */
  ESPCHK(0x1139b1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x1139b1d0 (31 bytes, 11 insns) */
void f_1139b1d0(void) {
  FTRACE(0x1139b1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b1d3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b1da jbe 0x1139b1e0 */
  if ((C.cf||C.zf)) goto L_1139b1e0;
  /* 1139b1dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b1de jmp 0x1139b1ed */
  goto L_1139b1ed;
L_1139b1e0:;
  /* 1139b1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b1e3 mov dword ptr [0x113c0db4], eax */
  w32((uint32_t)(0x113c0db4), (EAX));
  /* 1139b1e8 mov eax, 1 */
  EAX = (0x1u);
L_1139b1ed:;
  /* 1139b1ed pop ebp */
  EBP = (pop32());
  /* 1139b1ee ret  */
  ESPCHK(0x1139b1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x1139b1f0 (89 bytes, 20 insns) */
void f_1139b1f0(void) {
  FTRACE(0x1139b1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b1f3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1139b1f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b1fa mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 1139b1ff push eax */
  push32((uint32_t)(EAX));
  /* 1139b200 call dword ptr [0x113c5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5348))), 0x1139b206u);
  /* 1139b206 mov dword ptr [0x113c40e8], eax */
  w32((uint32_t)(0x113c40e8), (EAX));
  /* 1139b20b cmp dword ptr [0x113c40e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c40e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b212 jne 0x1139b218 */
  if (!C.zf) goto L_1139b218;
  /* 1139b214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b216 jmp 0x1139b247 */
  goto L_1139b247;
L_1139b218:;
  /* 1139b218 mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b21e mov dword ptr [0x113c40dc], ecx */
  w32((uint32_t)(0x113c40dc), (ECX));
  /* 1139b224 mov dword ptr [0x113c40e0], 0 */
  w32((uint32_t)(0x113c40e0), (0x0u));
  /* 1139b22e mov dword ptr [0x113c40e4], 0 */
  w32((uint32_t)(0x113c40e4), (0x0u));
  /* 1139b238 mov dword ptr [0x113c40c8], 0x10 */
  w32((uint32_t)(0x113c40c8), (0x10u));
  /* 1139b242 mov eax, 1 */
  EAX = (0x1u);
L_1139b247:;
  /* 1139b247 pop ebp */
  EBP = (pop32());
  /* 1139b248 ret  */
  ESPCHK(0x1139b1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x1139b250 (85 bytes, 29 insns) */
void f_1139b250(void) {
  FTRACE(0x1139b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b250 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b251 mov ebp, esp */
  EBP = (ESP);
  /* 1139b253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b256 mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139b25b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139b25e mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b264 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b266 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139b269 mov edx, dword ptr [0x113c40e8] */
  EDX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b26f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139b272:;
  /* 1139b272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b275 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b278 jae 0x1139b29f */
  if (!C.cf) goto L_1139b29f;
  /* 1139b27a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b27d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b280 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b283 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139b286 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b28d jae 0x1139b294 */
  if (!C.cf) goto L_1139b294;
  /* 1139b28f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b292 jmp 0x1139b2a1 */
  goto L_1139b2a1;
L_1139b294:;
  /* 1139b294 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b297 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b29a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139b29d jmp 0x1139b272 */
  goto L_1139b272;
L_1139b29f:;
  /* 1139b29f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139b2a1:;
  /* 1139b2a1 mov esp, ebp */
  ESP = (EBP);
  /* 1139b2a3 pop ebp */
  EBP = (pop32());
  /* 1139b2a4 ret  */
  ESPCHK(0x1139b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2b0 @ 0x1139b2b0 (95 bytes, 33 insns) */
void f_1139b2b0(void) {
  FTRACE(0x1139b2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b2b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b2bc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b2bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139b2c2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b2c5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1139b2c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139b2cb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b2d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b2d3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b2d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b2d8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139b2db and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139b2dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139b2df jne 0x1139b301 */
  if (!C.zf) goto L_1139b301;
  /* 1139b2e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b2e4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1139b2e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139b2e9 jne 0x1139b301 */
  if (!C.zf) goto L_1139b301;
  /* 1139b2eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b2ee and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139b2f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b2f6 je 0x1139b301 */
  if (C.zf) goto L_1139b301;
  /* 1139b2f8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1139b2ff jmp 0x1139b308 */
  goto L_1139b308;
L_1139b301:;
  /* 1139b301 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1139b308:;
  /* 1139b308 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139b30b mov esp, ebp */
  ESP = (EBP);
  /* 1139b30d pop ebp */
  EBP = (pop32());
  /* 1139b30e ret  */
  ESPCHK(0x1139b2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b310 @ 0x1139b310 (1485 bytes, 453 insns) */
void f_1139b310(void) {
  FTRACE(0x1139b310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b310 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b311 mov ebp, esp */
  EBP = (ESP);
  /* 1139b313 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b316 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b319 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139b31c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1139b31f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b322 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b325 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b328 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139b32b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139b32e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1139b331 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139b334 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b337 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139b33d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b340 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1139b347 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139b34a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139b34d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b350 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1139b353 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b356 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139b358 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b35b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1139b35e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b361 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b364 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1139b367 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b36a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139b36c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1139b36f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b372 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1139b375 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139b378 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139b37b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139b37e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b380 jne 0x1139b4a8 */
  if (!C.zf) goto L_1139b4a8;
  /* 1139b386 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139b389 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139b38c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b38f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139b392 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b396 jbe 0x1139b39f */
  if ((C.cf||C.zf)) goto L_1139b39f;
  /* 1139b398 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1139b39f:;
  /* 1139b39f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b3a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b3a5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139b3a8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b3ab jne 0x1139b481 */
  if (!C.zf) goto L_1139b481;
  /* 1139b3b1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b3b5 jae 0x1139b416 */
  if (!C.cf) goto L_1139b416;
  /* 1139b3b7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b3bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b3bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b3c1 not eax */
  EAX = (~(EAX));
  /* 1139b3c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b3c6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b3c9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1139b3cd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b3cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b3d2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b3d5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1139b3d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b3dc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b3df mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1139b3e2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139b3e5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b3e8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b3eb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1139b3ee mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b3f1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b3f4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139b3f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139b3fa jne 0x1139b414 */
  if (!C.zf) goto L_1139b414;
  /* 1139b3fc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b401 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b404 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b406 not eax */
  EAX = (~(EAX));
  /* 1139b408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b40b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139b40d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139b40f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b412 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1139b414:;
  /* 1139b414 jmp 0x1139b481 */
  goto L_1139b481;
L_1139b416:;
  /* 1139b416 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b419 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b41c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b421 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b423 not edx */
  EDX = (~(EDX));
  /* 1139b425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b428 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b42b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1139b432 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b434 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b437 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b43a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1139b441 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b444 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b447 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139b44a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139b44d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b450 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b453 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1139b456 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b459 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b45c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139b460 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b462 jne 0x1139b481 */
  if (!C.zf) goto L_1139b481;
  /* 1139b464 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b467 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b46a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b46f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b471 not edx */
  EDX = (~(EDX));
  /* 1139b473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b476 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139b479 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b47b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b47e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1139b481:;
  /* 1139b481 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b484 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139b487 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b48a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139b48d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1139b490 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b493 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b496 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139b499 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139b49c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139b49f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b4a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b4a5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1139b4a8:;
  /* 1139b4a8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b4ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1139b4ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b4b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139b4b4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b4b8 jbe 0x1139b4c1 */
  if ((C.cf||C.zf)) goto L_1139b4c1;
  /* 1139b4ba mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1139b4c1:;
  /* 1139b4c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139b4c4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139b4c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b4c9 jne 0x1139b625 */
  if (!C.zf) goto L_1139b625;
  /* 1139b4cf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b4d2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b4d5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1139b4d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139b4db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1139b4de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b4e1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1139b4e4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b4e8 jbe 0x1139b4f1 */
  if ((C.cf||C.zf)) goto L_1139b4f1;
  /* 1139b4ea mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1139b4f1:;
  /* 1139b4f1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b4f4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b4f7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1139b4fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b4fd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139b500 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b503 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1139b506 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b50a jbe 0x1139b513 */
  if ((C.cf||C.zf)) goto L_1139b513;
  /* 1139b50c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1139b513:;
  /* 1139b513 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b516 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b519 je 0x1139b61f */
  if (C.zf) goto L_1139b61f;
  /* 1139b51f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b522 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b525 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b528 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b52b jne 0x1139b601 */
  if (!C.zf) goto L_1139b601;
  /* 1139b531 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b535 jae 0x1139b596 */
  if (!C.cf) goto L_1139b596;
  /* 1139b537 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b53c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b53f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b541 not edx */
  EDX = (~(EDX));
  /* 1139b543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b546 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b549 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1139b54d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b54f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b552 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b555 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1139b559 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b55c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b55f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139b562 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139b565 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b568 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b56b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1139b56e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b571 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b574 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139b578 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b57a jne 0x1139b594 */
  if (!C.zf) goto L_1139b594;
  /* 1139b57c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b581 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b586 not edx */
  EDX = (~(EDX));
  /* 1139b588 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b58b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139b58d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b58f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b592 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1139b594:;
  /* 1139b594 jmp 0x1139b601 */
  goto L_1139b601;
L_1139b596:;
  /* 1139b596 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b599 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b59c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b5a1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b5a3 not eax */
  EAX = (~(EAX));
  /* 1139b5a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b5a8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b5ab mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1139b5b2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b5b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b5b7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b5ba mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1139b5c1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b5c4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b5c7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1139b5ca sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139b5cd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b5d0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b5d3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1139b5d6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b5d9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b5dc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139b5e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139b5e2 jne 0x1139b601 */
  if (!C.zf) goto L_1139b601;
  /* 1139b5e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b5e7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b5ea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b5ef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b5f1 not eax */
  EAX = (~(EAX));
  /* 1139b5f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b5f6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b5f9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139b5fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b5fe mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139b601:;
  /* 1139b601 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b604 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139b607 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b60a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139b60d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139b610 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b613 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139b616 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b619 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139b61c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1139b61f:;
  /* 1139b61f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b622 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1139b625:;
  /* 1139b625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139b628 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139b62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b62d jne 0x1139b63b */
  if (!C.zf) goto L_1139b63b;
  /* 1139b62f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139b632 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b635 je 0x1139b74b */
  if (C.zf) goto L_1139b74b;
L_1139b63b:;
  /* 1139b63b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b63e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b641 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1139b644 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139b647 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b64a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139b64d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b650 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139b653 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b656 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139b659 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1139b65c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139b65f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b662 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1139b665 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b668 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b66b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b66e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139b671 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b674 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b677 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139b67a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b67d jne 0x1139b74b */
  if (!C.zf) goto L_1139b74b;
  /* 1139b683 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b687 jae 0x1139b6e4 */
  if (!C.cf) goto L_1139b6e4;
  /* 1139b689 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b68c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b68f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139b693 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b696 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b699 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139b69c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139b69f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6a2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b6a5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1139b6a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139b6aa jne 0x1139b6c2 */
  if (!C.zf) goto L_1139b6c2;
  /* 1139b6ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b6b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b6b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b6b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b6b9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139b6bb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b6bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b6c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1139b6c2:;
  /* 1139b6c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b6c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b6ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b6cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b6cf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1139b6d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b6d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b6db mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1139b6e2 jmp 0x1139b74b */
  goto L_1139b74b;
L_1139b6e4:;
  /* 1139b6e4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6e7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b6ea movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139b6ee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6f1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b6f4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139b6f7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139b6fa mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b6fd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b700 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1139b703 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139b705 jne 0x1139b722 */
  if (!C.zf) goto L_1139b722;
  /* 1139b707 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b70a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b70d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b712 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b717 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139b71a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b71c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b71f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1139b722:;
  /* 1139b722 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b725 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b728 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139b72d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b72f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b732 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b735 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1139b73c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b73e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b741 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1139b744 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1139b74b:;
  /* 1139b74b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b74e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b751 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1139b753 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139b756 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b759 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139b75c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1139b75f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b762 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139b764 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b767 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b76a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1139b76c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139b76f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b772 jne 0x1139b8d9 */
  if (!C.zf) goto L_1139b8d9;
  /* 1139b778 cmp dword ptr [0x113c40e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c40e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b77f je 0x1139b8c8 */
  if (C.zf) goto L_1139b8c8;
  /* 1139b785 mov eax, dword ptr [0x113c40d8] */
  EAX = (r32((uint32_t)(0x113c40d8)));
  /* 1139b78a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1139b78d mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b793 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139b796 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b798 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1139b79b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1139b7a0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1139b7a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b7a8 push eax */
  push32((uint32_t)(EAX));
  /* 1139b7a9 call dword ptr [0x113c5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5364))), 0x1139b7afu);
  /* 1139b7af mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139b7b4 mov ecx, dword ptr [0x113c40d8] */
  ECX = (r32((uint32_t)(0x113c40d8)));
  /* 1139b7ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b7bc mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b7c1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139b7c4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b7c6 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b7cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139b7cf mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b7d4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139b7d7 mov edx, dword ptr [0x113c40d8] */
  EDX = (r32((uint32_t)(0x113c40d8)));
  /* 1139b7dd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1139b7e8 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b7ed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139b7f0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1139b7f3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139b7f6 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b7fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139b7fe mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1139b801 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b807 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139b80a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1139b80e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b810 jne 0x1139b826 */
  if (!C.zf) goto L_1139b826;
  /* 1139b812 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139b81b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1139b81d mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b823 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1139b826:;
  /* 1139b826 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b82c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b830 jne 0x1139b8c8 */
  if (!C.zf) goto L_1139b8c8;
  /* 1139b836 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1139b83b push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b83d mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b842 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139b845 push ecx */
  push32((uint32_t)(ECX));
  /* 1139b846 call dword ptr [0x113c5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5364))), 0x1139b84cu);
  /* 1139b84c mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b852 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139b855 push eax */
  push32((uint32_t)(EAX));
  /* 1139b856 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139b858 mov ecx, dword ptr [0x113c40ec] */
  ECX = (r32((uint32_t)(0x113c40ec)));
  /* 1139b85e push ecx */
  push32((uint32_t)(ECX));
  /* 1139b85f call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x1139b865u);
  /* 1139b865 mov edx, dword ptr [0x113c40e4] */
  EDX = (r32((uint32_t)(0x113c40e4)));
  /* 1139b86b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139b86e mov eax, dword ptr [0x113c40e8] */
  EAX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b873 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b875 mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b87b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b87e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b880 push eax */
  push32((uint32_t)(EAX));
  /* 1139b881 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b887 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b88a push edx */
  push32((uint32_t)(EDX));
  /* 1139b88b mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139b890 push eax */
  push32((uint32_t)(EAX));
  /* 1139b891 call 0x1139f220 */
  push32(0x1139b896u); f_1139f220();
  /* 1139b896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b899 mov ecx, dword ptr [0x113c40e4] */
  ECX = (r32((uint32_t)(0x113c40e4)));
  /* 1139b89f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b8a2 mov dword ptr [0x113c40e4], ecx */
  w32((uint32_t)(0x113c40e4), (ECX));
  /* 1139b8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b8ab cmp edx, dword ptr [0x113c40e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x113c40e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b8b1 jbe 0x1139b8bc */
  if ((C.cf||C.zf)) goto L_1139b8bc;
  /* 1139b8b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b8b6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b8b9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1139b8bc:;
  /* 1139b8bc mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b8c2 mov dword ptr [0x113c40dc], ecx */
  w32((uint32_t)(0x113c40dc), (ECX));
L_1139b8c8:;
  /* 1139b8c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b8cb mov dword ptr [0x113c40e0], edx */
  w32((uint32_t)(0x113c40e0), (EDX));
  /* 1139b8d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139b8d4 mov dword ptr [0x113c40d8], eax */
  w32((uint32_t)(0x113c40d8), (EAX));
L_1139b8d9:;
  /* 1139b8d9 mov esp, ebp */
  ESP = (EBP);
  /* 1139b8db pop ebp */
  EBP = (pop32());
  /* 1139b8dc ret  */
  ESPCHK(0x1139b310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x1139b8e0 (1334 bytes, 427 insns) */
void f_1139b8e0(void) {
  FTRACE(0x1139b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1139b8e3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b8e6 push esi */
  push32((uint32_t)(ESI));
  /* 1139b8e7 mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139b8ec imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139b8ef mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b8f5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b8f7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1139b8fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139b8fd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b900 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1139b903 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1139b906 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139b909 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1139b90c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b90f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139b912 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b916 jge 0x1139b92c */
  if ((C.sf==C.of)) goto L_1139b92c;
  /* 1139b918 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1139b91b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139b91e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139b920 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139b923 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1139b92a jmp 0x1139b941 */
  goto L_1139b941;
L_1139b92c:;
  /* 1139b92c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139b933 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139b936 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139b939 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139b93c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139b93e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1139b941:;
  /* 1139b941 mov ecx, dword ptr [0x113c40dc] */
  ECX = (r32((uint32_t)(0x113c40dc)));
  /* 1139b947 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1139b94a:;
  /* 1139b94a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b94d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b950 jae 0x1139b976 */
  if (!C.cf) goto L_1139b976;
  /* 1139b952 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b955 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b958 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1139b95a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b95d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b960 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1139b963 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139b965 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139b967 je 0x1139b96b */
  if (C.zf) goto L_1139b96b;
  /* 1139b969 jmp 0x1139b976 */
  goto L_1139b976;
L_1139b96b:;
  /* 1139b96b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b96e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b971 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1139b974 jmp 0x1139b94a */
  goto L_1139b94a;
L_1139b976:;
  /* 1139b976 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b979 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b97c jne 0x1139ba5d */
  if (!C.zf) goto L_1139ba5d;
  /* 1139b982 mov eax, dword ptr [0x113c40e8] */
  EAX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b987 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1139b98a:;
  /* 1139b98a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b98d cmp ecx, dword ptr [0x113c40dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b993 jae 0x1139b9b9 */
  if (!C.cf) goto L_1139b9b9;
  /* 1139b995 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b998 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139b99b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1139b99d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9a0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139b9a3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1139b9a6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139b9a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139b9aa je 0x1139b9ae */
  if (C.zf) goto L_1139b9ae;
  /* 1139b9ac jmp 0x1139b9b9 */
  goto L_1139b9b9;
L_1139b9ae:;
  /* 1139b9ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9b1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b9b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139b9b7 jmp 0x1139b98a */
  goto L_1139b98a;
L_1139b9b9:;
  /* 1139b9b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9bc cmp ecx, dword ptr [0x113c40dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b9c2 jne 0x1139ba5d */
  if (!C.zf) goto L_1139ba5d;
L_1139b9c8:;
  /* 1139b9c8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9cb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b9ce jae 0x1139b9e6 */
  if (!C.cf) goto L_1139b9e6;
  /* 1139b9d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9d3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b9d7 je 0x1139b9db */
  if (C.zf) goto L_1139b9db;
  /* 1139b9d9 jmp 0x1139b9e6 */
  goto L_1139b9e6;
L_1139b9db:;
  /* 1139b9db mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139b9e1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1139b9e4 jmp 0x1139b9c8 */
  goto L_1139b9c8;
L_1139b9e6:;
  /* 1139b9e6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9e9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b9ec jne 0x1139ba37 */
  if (!C.zf) goto L_1139ba37;
  /* 1139b9ee mov eax, dword ptr [0x113c40e8] */
  EAX = (r32((uint32_t)(0x113c40e8)));
  /* 1139b9f3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1139b9f6:;
  /* 1139b9f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139b9f9 cmp ecx, dword ptr [0x113c40dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139b9ff jae 0x1139ba17 */
  if (!C.cf) goto L_1139ba17;
  /* 1139ba01 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba04 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ba08 je 0x1139ba0c */
  if (C.zf) goto L_1139ba0c;
  /* 1139ba0a jmp 0x1139ba17 */
  goto L_1139ba17;
L_1139ba0c:;
  /* 1139ba0c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba0f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ba12 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139ba15 jmp 0x1139b9f6 */
  goto L_1139b9f6;
L_1139ba17:;
  /* 1139ba17 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba1a cmp ecx, dword ptr [0x113c40dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ba20 jne 0x1139ba37 */
  if (!C.zf) goto L_1139ba37;
  /* 1139ba22 call 0x1139be20 */
  push32(0x1139ba27u); f_1139be20();
  /* 1139ba27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139ba2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ba2e jne 0x1139ba37 */
  if (!C.zf) goto L_1139ba37;
  /* 1139ba30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ba32 jmp 0x1139be11 */
  goto L_1139be11;
L_1139ba37:;
  /* 1139ba37 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba3a push edx */
  push32((uint32_t)(EDX));
  /* 1139ba3b call 0x1139bf30 */
  push32(0x1139ba40u); f_1139bf30();
  /* 1139ba40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ba43 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba46 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1139ba49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1139ba4b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba4e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139ba51 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ba54 jne 0x1139ba5d */
  if (!C.zf) goto L_1139ba5d;
  /* 1139ba56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ba58 jmp 0x1139be11 */
  goto L_1139be11;
L_1139ba5d:;
  /* 1139ba5d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba60 mov dword ptr [0x113c40dc], edx */
  w32((uint32_t)(0x113c40dc), (EDX));
  /* 1139ba66 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ba69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139ba6c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1139ba6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139ba72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139ba74 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1139ba77 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ba7b je 0x1139baa0 */
  if (C.zf) goto L_1139baa0;
  /* 1139ba7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139ba80 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139ba83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139ba86 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1139ba8a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139ba8d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139ba90 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1139ba93 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1139ba9a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1139ba9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139ba9e jne 0x1139bad5 */
  if (!C.zf) goto L_1139bad5;
L_1139baa0:;
  /* 1139baa0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1139baa7:;
  /* 1139baa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139baaa mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139baad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139bab0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1139bab4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bab7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139baba mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1139babd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1139bac4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1139bac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139bac8 jne 0x1139bad5 */
  if (!C.zf) goto L_1139bad5;
  /* 1139baca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bacd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bad0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1139bad3 jmp 0x1139baa7 */
  goto L_1139baa7;
L_1139bad5:;
  /* 1139bad5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bad8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139bade mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bae1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1139bae8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139baeb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1139baf2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139baf5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139baf8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139bafb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1139baff mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1139bb02 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb06 jne 0x1139bb22 */
  if (!C.zf) goto L_1139bb22;
  /* 1139bb08 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1139bb0f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bb12 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bb15 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139bb18 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1139bb1f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1139bb22:;
  /* 1139bb22 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb26 jl 0x1139bb3b */
  if ((C.sf!=C.of)) goto L_1139bb3b;
  /* 1139bb28 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139bb2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1139bb2d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1139bb30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bb33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bb36 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1139bb39 jmp 0x1139bb22 */
  goto L_1139bb22;
L_1139bb3b:;
  /* 1139bb3b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bb3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bb41 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1139bb45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139bb48 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bb4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139bb4d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bb50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139bb53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139bb56 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1139bb59 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bb5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1139bb5f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb63 jle 0x1139bb6c */
  if ((C.zf||C.sf!=C.of)) goto L_1139bb6c;
  /* 1139bb65 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1139bb6c:;
  /* 1139bb6c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bb6f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb72 je 0x1139bd90 */
  if (C.zf) goto L_1139bd90;
  /* 1139bb78 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bb7b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bb7e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139bb81 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb84 jne 0x1139bc5a */
  if (!C.zf) goto L_1139bc5a;
  /* 1139bb8a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bb8e jge 0x1139bbef */
  if ((C.sf==C.of)) goto L_1139bbef;
  /* 1139bb90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139bb95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bb98 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139bb9a not eax */
  EAX = (~(EAX));
  /* 1139bb9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bb9f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bba2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1139bba6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139bba8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bbab mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bbae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1139bbb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bbb5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bbb8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1139bbbb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139bbbe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bbc1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bbc4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1139bbc7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bbca add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bbcd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139bbd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139bbd3 jne 0x1139bbed */
  if (!C.zf) goto L_1139bbed;
  /* 1139bbd5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139bbda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bbdd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139bbdf not eax */
  EAX = (~(EAX));
  /* 1139bbe1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bbe4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139bbe6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139bbe8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bbeb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1139bbed:;
  /* 1139bbed jmp 0x1139bc5a */
  goto L_1139bc5a;
L_1139bbef:;
  /* 1139bbef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bbf2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bbf5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139bbfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139bbfc not edx */
  EDX = (~(EDX));
  /* 1139bbfe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bc01 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bc04 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1139bc0b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139bc0d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bc10 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bc13 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1139bc1a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bc1d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bc20 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139bc23 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139bc26 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bc29 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bc2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1139bc2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bc32 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bc35 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139bc39 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139bc3b jne 0x1139bc5a */
  if (!C.zf) goto L_1139bc5a;
  /* 1139bc3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bc40 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bc43 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139bc48 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139bc4a not edx */
  EDX = (~(EDX));
  /* 1139bc4c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bc4f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139bc52 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139bc54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bc57 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1139bc5a:;
  /* 1139bc5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc5d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139bc60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc63 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139bc66 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1139bc69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc6c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139bc6f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc72 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139bc75 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139bc78 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bc7c je 0x1139bd90 */
  if (C.zf) goto L_1139bd90;
  /* 1139bc82 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bc85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bc88 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1139bc8b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139bc8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139bc94 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139bc97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139bc9a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bc9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139bca0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139bca3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139bca6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bca9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1139bcac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bcaf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139bcb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bcb5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1139bcb8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bcbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bcbe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139bcc1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bcc4 jne 0x1139bd90 */
  if (!C.zf) goto L_1139bd90;
  /* 1139bcca cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bcce jge 0x1139bd2a */
  if ((C.sf==C.of)) goto L_1139bd2a;
  /* 1139bcd0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bcd3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bcd6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139bcda mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bcdd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bce0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1139bce3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139bce5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bce8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bceb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1139bcee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139bcf0 jne 0x1139bd08 */
  if (!C.zf) goto L_1139bd08;
  /* 1139bcf2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139bcf7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bcfa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139bcfc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bcff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139bd01 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139bd03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bd06 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1139bd08:;
  /* 1139bd08 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139bd0d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bd10 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139bd12 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bd15 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd18 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1139bd1c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139bd1e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bd21 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd24 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1139bd28 jmp 0x1139bd90 */
  goto L_1139bd90;
L_1139bd2a:;
  /* 1139bd2a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd2d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bd30 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139bd34 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd37 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bd3a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1139bd3d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139bd3f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd42 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bd45 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1139bd48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139bd4a jne 0x1139bd67 */
  if (!C.zf) goto L_1139bd67;
  /* 1139bd4c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bd4f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bd52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139bd57 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139bd59 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bd5c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139bd5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139bd61 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bd64 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139bd67:;
  /* 1139bd67 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139bd6a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bd6d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139bd72 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139bd74 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bd77 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd7a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1139bd81 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139bd83 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bd86 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139bd89 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1139bd90:;
  /* 1139bd90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bd94 je 0x1139bdaa */
  if (C.zf) goto L_1139bdaa;
  /* 1139bd96 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bd99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139bd9c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139bd9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bda1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bda4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139bda7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1139bdaa:;
  /* 1139bdaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bdad add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bdb0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139bdb3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139bdb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bdb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bdbc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1139bdbe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139bdc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bdc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bdc7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bdca mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1139bdcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bdd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139bdd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bdd5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139bdd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bdda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bddd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1139bddf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139bde1 jne 0x1139be03 */
  if (!C.zf) goto L_1139be03;
  /* 1139bde3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bde6 cmp eax, dword ptr [0x113c40e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c40e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bdec jne 0x1139be03 */
  if (!C.zf) goto L_1139be03;
  /* 1139bdee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139bdf1 cmp ecx, dword ptr [0x113c40d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bdf7 jne 0x1139be03 */
  if (!C.zf) goto L_1139be03;
  /* 1139bdf9 mov dword ptr [0x113c40e0], 0 */
  w32((uint32_t)(0x113c40e0), (0x0u));
L_1139be03:;
  /* 1139be03 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1139be06 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139be09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1139be0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139be0e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1139be11:;
  /* 1139be11 pop esi */
  ESI = (pop32());
  /* 1139be12 mov esp, ebp */
  ESP = (EBP);
  /* 1139be14 pop ebp */
  EBP = (pop32());
  /* 1139be15 ret  */
  ESPCHK(0x1139b8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x1139be20 (271 bytes, 78 insns) */
void f_1139be20(void) {
  FTRACE(0x1139be20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139be20 push ebp */
  push32((uint32_t)(EBP));
  /* 1139be21 mov ebp, esp */
  EBP = (ESP);
  /* 1139be23 push ecx */
  push32((uint32_t)(ECX));
  /* 1139be24 mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139be29 cmp eax, dword ptr [0x113c40c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c40c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139be2f jne 0x1139be7b */
  if (!C.zf) goto L_1139be7b;
  /* 1139be31 mov ecx, dword ptr [0x113c40c8] */
  ECX = (r32((uint32_t)(0x113c40c8)));
  /* 1139be37 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139be3a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139be3d push ecx */
  push32((uint32_t)(ECX));
  /* 1139be3e mov edx, dword ptr [0x113c40e8] */
  EDX = (r32((uint32_t)(0x113c40e8)));
  /* 1139be44 push edx */
  push32((uint32_t)(EDX));
  /* 1139be45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139be47 mov eax, dword ptr [0x113c40ec] */
  EAX = (r32((uint32_t)(0x113c40ec)));
  /* 1139be4c push eax */
  push32((uint32_t)(EAX));
  /* 1139be4d call dword ptr [0x113c5344] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5344))), 0x1139be53u);
  /* 1139be53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139be56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139be5a jne 0x1139be63 */
  if (!C.zf) goto L_1139be63;
  /* 1139be5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139be5e jmp 0x1139bf2b */
  goto L_1139bf2b;
L_1139be63:;
  /* 1139be63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139be66 mov dword ptr [0x113c40e8], ecx */
  w32((uint32_t)(0x113c40e8), (ECX));
  /* 1139be6c mov edx, dword ptr [0x113c40c8] */
  EDX = (r32((uint32_t)(0x113c40c8)));
  /* 1139be72 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139be75 mov dword ptr [0x113c40c8], edx */
  w32((uint32_t)(0x113c40c8), (EDX));
L_1139be7b:;
  /* 1139be7b mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139be80 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139be83 mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139be89 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139be8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139be8e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1139be93 push 8 */
  push32((uint32_t)(0x8u));
  /* 1139be95 mov edx, dword ptr [0x113c40ec] */
  EDX = (r32((uint32_t)(0x113c40ec)));
  /* 1139be9b push edx */
  push32((uint32_t)(EDX));
  /* 1139be9c call dword ptr [0x113c5348] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5348))), 0x1139bea2u);
  /* 1139bea2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bea5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1139bea8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139beab cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139beaf jne 0x1139beb5 */
  if (!C.zf) goto L_1139beb5;
  /* 1139beb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139beb3 jmp 0x1139bf2b */
  goto L_1139bf2b;
L_1139beb5:;
  /* 1139beb5 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139beb7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1139bebc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1139bec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139bec3 call dword ptr [0x113c5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5340))), 0x1139bec9u);
  /* 1139bec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139becc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1139becf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bed2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bed6 jne 0x1139bef2 */
  if (!C.zf) goto L_1139bef2;
  /* 1139bed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bedb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139bede push ecx */
  push32((uint32_t)(ECX));
  /* 1139bedf push 0 */
  push32((uint32_t)(0x0u));
  /* 1139bee1 mov edx, dword ptr [0x113c40ec] */
  EDX = (r32((uint32_t)(0x113c40ec)));
  /* 1139bee7 push edx */
  push32((uint32_t)(EDX));
  /* 1139bee8 call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x1139beeeu);
  /* 1139beee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139bef0 jmp 0x1139bf2b */
  goto L_1139bf2b;
L_1139bef2:;
  /* 1139bef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bef5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1139befb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139befe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1139bf05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bf08 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1139bf0f mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139bf14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bf17 mov dword ptr [0x113c40e4], eax */
  w32((uint32_t)(0x113c40e4), (EAX));
  /* 1139bf1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bf1f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1139bf22 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1139bf28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139bf2b:;
  /* 1139bf2b mov esp, ebp */
  ESP = (EBP);
  /* 1139bf2d pop ebp */
  EBP = (pop32());
  /* 1139bf2e ret  */
  ESPCHK(0x1139be20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf30 @ 0x1139bf30 (494 bytes, 149 insns) */
void f_1139bf30(void) {
  FTRACE(0x1139bf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139bf30 push ebp */
  push32((uint32_t)(EBP));
  /* 1139bf31 mov ebp, esp */
  EBP = (ESP);
  /* 1139bf33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139bf36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139bf39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139bf3c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1139bf3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139bf42 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139bf45 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139bf48 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1139bf4f:;
  /* 1139bf4f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bf53 jl 0x1139bf68 */
  if ((C.sf!=C.of)) goto L_1139bf68;
  /* 1139bf55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139bf58 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1139bf5a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139bf5d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139bf60 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bf63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1139bf66 jmp 0x1139bf4f */
  goto L_1139bf4f;
L_1139bf68:;
  /* 1139bf68 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139bf6b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139bf71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139bf74 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1139bf7b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1139bf7e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1139bf85 jmp 0x1139bf90 */
  goto L_1139bf90;
L_1139bf87:;
  /* 1139bf87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bf8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bf8d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1139bf90:;
  /* 1139bf90 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139bf94 jge 0x1139bfb6 */
  if ((C.sf==C.of)) goto L_1139bfb6;
  /* 1139bf96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139bf99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139bf9c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1139bf9f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139bfa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bfa5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bfa8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1139bfab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bfae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139bfb1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1139bfb4 jmp 0x1139bf87 */
  goto L_1139bf87;
L_1139bfb6:;
  /* 1139bfb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139bfb9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1139bfbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139bfbf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139bfc2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bfc4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139bfc7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139bfc9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1139bfce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1139bfd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bfd6 push edx */
  push32((uint32_t)(EDX));
  /* 1139bfd7 call dword ptr [0x113c5340] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5340))), 0x1139bfddu);
  /* 1139bfdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139bfdf jne 0x1139bfe9 */
  if (!C.zf) goto L_1139bfe9;
  /* 1139bfe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139bfe4 jmp 0x1139c11a */
  goto L_1139c11a;
L_1139bfe9:;
  /* 1139bfe9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bfec add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139bff1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1139bff4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139bff7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139bffa jmp 0x1139c008 */
  goto L_1139c008;
L_1139bffc:;
  /* 1139bffc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139bfff add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c005 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139c008:;
  /* 1139c008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c00b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c00e ja 0x1139c06d */
  if ((!C.cf&&!C.zf)) goto L_1139c06d;
  /* 1139c010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c013 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1139c01a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c01d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1139c027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c02a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c02d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139c030 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c033 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1139c039 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c03c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c042 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c045 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139c048 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c04b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c051 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c054 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139c057 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c05a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c05f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1139c062 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c065 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1139c06b jmp 0x1139bffc */
  goto L_1139bffc;
L_1139c06d:;
  /* 1139c06d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139c070 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c076 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1139c079 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c07c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c07f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c082 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1139c085 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c088 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139c08b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139c08e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c091 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c094 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1139c097 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c09a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c09d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c0a0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1139c0a3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c0a6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139c0a9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139c0ac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c0af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c0b2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1139c0b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c0b8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c0bb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1139c0c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c0c6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c0c9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1139c0d4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c0d7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1139c0db mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c0de mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1139c0e1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139c0e4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c0e7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1139c0ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c0ec jne 0x1139c0fd */
  if (!C.zf) goto L_1139c0fd;
  /* 1139c0ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c0f1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c0f4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1139c0f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c0fa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139c0fd:;
  /* 1139c0fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c102 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c105 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c107 not edx */
  EDX = (~(EDX));
  /* 1139c109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c10c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139c10f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c114 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139c117 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1139c11a:;
  /* 1139c11a mov esp, ebp */
  ESP = (EBP);
  /* 1139c11c pop ebp */
  EBP = (pop32());
  /* 1139c11d ret  */
  ESPCHK(0x1139bf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x1139c120 (1515 bytes, 489 insns) */
void f_1139c120(void) {
  FTRACE(0x1139c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139c120 push ebp */
  push32((uint32_t)(EBP));
  /* 1139c121 mov ebp, esp */
  EBP = (ESP);
  /* 1139c123 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c126 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139c129 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c12c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1139c12e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1139c131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c134 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1139c137 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1139c13a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c13d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139c140 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c143 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139c146 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139c149 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1139c14c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139c14f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c152 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139c158 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c15b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1139c162 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1139c165 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139c168 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c16b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1139c16e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c171 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139c173 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c176 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1139c179 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c17c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c17f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1139c182 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c185 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139c187 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1139c18a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c18d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c190 jle 0x1139c446 */
  if ((C.zf||C.sf!=C.of)) goto L_1139c446;
  /* 1139c196 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c199 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139c19c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c19e jne 0x1139c1ab */
  if (!C.zf) goto L_1139c1ab;
  /* 1139c1a0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c1a3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c1a6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c1a9 jle 0x1139c1b2 */
  if ((C.zf||C.sf!=C.of)) goto L_1139c1b2;
L_1139c1ab:;
  /* 1139c1ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139c1ad jmp 0x1139c707 */
  goto L_1139c707;
L_1139c1b2:;
  /* 1139c1b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c1b5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1139c1b8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c1bb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139c1be cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c1c2 jbe 0x1139c1cb */
  if ((C.cf||C.zf)) goto L_1139c1cb;
  /* 1139c1c4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1139c1cb:;
  /* 1139c1cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c1ce mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c1d1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c1d4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c1d7 jne 0x1139c2ad */
  if (!C.zf) goto L_1139c2ad;
  /* 1139c1dd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c1e1 jae 0x1139c242 */
  if (!C.cf) goto L_1139c242;
  /* 1139c1e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c1e8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c1eb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c1ed not edx */
  EDX = (~(EDX));
  /* 1139c1ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c1f2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c1f5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1139c1f9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139c1fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c1fe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c201 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1139c205 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c208 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c20b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139c20e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139c211 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c214 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c217 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1139c21a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c21d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c220 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139c224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c226 jne 0x1139c240 */
  if (!C.zf) goto L_1139c240;
  /* 1139c228 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c22d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c230 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c232 not edx */
  EDX = (~(EDX));
  /* 1139c234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c237 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139c239 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c23b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c23e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1139c240:;
  /* 1139c240 jmp 0x1139c2ad */
  goto L_1139c2ad;
L_1139c242:;
  /* 1139c242 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c245 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c248 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c24d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c24f not eax */
  EAX = (~(EAX));
  /* 1139c251 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c254 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c257 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1139c25e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c260 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c263 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c266 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1139c26d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c270 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c273 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1139c276 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139c279 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c27c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c27f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1139c282 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c285 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c288 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139c28c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c28e jne 0x1139c2ad */
  if (!C.zf) goto L_1139c2ad;
  /* 1139c290 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c293 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c296 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c29b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c29d not eax */
  EAX = (~(EAX));
  /* 1139c29f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c2a2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c2a5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139c2a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c2aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139c2ad:;
  /* 1139c2ad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c2b0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139c2b3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c2b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c2b9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139c2bc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c2bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139c2c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c2c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139c2c8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1139c2cb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c2ce add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c2d1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c2d4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139c2d7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c2db jle 0x1139c427 */
  if ((C.zf||C.sf!=C.of)) goto L_1139c427;
  /* 1139c2e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c2e4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c2e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1139c2ea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c2ed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139c2f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c2f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139c2f6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c2fa jbe 0x1139c303 */
  if ((C.cf||C.zf)) goto L_1139c303;
  /* 1139c2fc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1139c303:;
  /* 1139c303 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139c309 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1139c30c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1139c30f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c312 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c315 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c318 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139c31b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c31e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c321 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1139c324 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c327 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c32a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1139c32d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c330 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c333 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c336 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139c339 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c33c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c33f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c342 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c345 jne 0x1139c413 */
  if (!C.zf) goto L_1139c413;
  /* 1139c34b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c34f jae 0x1139c3ac */
  if (!C.cf) goto L_1139c3ac;
  /* 1139c351 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c354 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c357 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139c35b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c35e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c361 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139c364 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139c367 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c36a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c36d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1139c370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c372 jne 0x1139c38a */
  if (!C.zf) goto L_1139c38a;
  /* 1139c374 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c379 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c37c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c37e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c381 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139c383 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c388 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1139c38a:;
  /* 1139c38a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c38f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c392 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c397 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c39a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1139c39e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c3a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c3a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c3a6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1139c3aa jmp 0x1139c413 */
  goto L_1139c413;
L_1139c3ac:;
  /* 1139c3ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c3af add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c3b2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139c3b6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c3b9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c3bc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139c3bf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139c3c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c3c5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c3c8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1139c3cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c3cd jne 0x1139c3ea */
  if (!C.zf) goto L_1139c3ea;
  /* 1139c3cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c3d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c3d5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c3da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c3dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c3df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c3e2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c3e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c3e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1139c3ea:;
  /* 1139c3ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c3ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c3f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c3f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c3f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c3fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c3fd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1139c404 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c406 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c409 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c40c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1139c413:;
  /* 1139c413 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c416 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c419 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1139c41b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c41e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c421 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c424 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1139c427:;
  /* 1139c427 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c42a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c42d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c430 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1139c432 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c435 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c438 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c43b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c43e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1139c441 jmp 0x1139c702 */
  goto L_1139c702;
L_1139c446:;
  /* 1139c446 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c449 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c44c jge 0x1139c702 */
  if ((C.sf==C.of)) goto L_1139c702;
  /* 1139c452 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c458 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c45b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1139c45d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139c460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c463 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c466 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c469 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1139c46c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c46f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c472 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1139c475 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c478 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c47b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139c47e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c481 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1139c484 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c487 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1139c48a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c48e jbe 0x1139c497 */
  if ((C.cf||C.zf)) goto L_1139c497;
  /* 1139c490 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1139c497:;
  /* 1139c497 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c49a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1139c49d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c49f jne 0x1139c5e0 */
  if (!C.zf) goto L_1139c5e0;
  /* 1139c4a5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139c4a8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1139c4ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c4ae mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139c4b1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c4b5 jbe 0x1139c4be */
  if ((C.cf||C.zf)) goto L_1139c4be;
  /* 1139c4b7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1139c4be:;
  /* 1139c4be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c4c1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c4c4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c4c7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c4ca jne 0x1139c5a0 */
  if (!C.zf) goto L_1139c5a0;
  /* 1139c4d0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c4d4 jae 0x1139c535 */
  if (!C.cf) goto L_1139c535;
  /* 1139c4d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c4db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c4de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c4e0 not edx */
  EDX = (~(EDX));
  /* 1139c4e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c4e5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c4e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1139c4ec and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139c4ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c4f1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c4f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1139c4f8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c4fb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c4fe mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1139c501 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139c504 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c507 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c50a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1139c50d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c510 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c513 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139c517 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c519 jne 0x1139c533 */
  if (!C.zf) goto L_1139c533;
  /* 1139c51b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c520 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c523 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c525 not edx */
  EDX = (~(EDX));
  /* 1139c527 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c52a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139c52c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c52e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c531 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1139c533:;
  /* 1139c533 jmp 0x1139c5a0 */
  goto L_1139c5a0;
L_1139c535:;
  /* 1139c535 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c538 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c53b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c540 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c542 not eax */
  EAX = (~(EAX));
  /* 1139c544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c547 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c54a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1139c551 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c556 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c559 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1139c560 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c563 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c566 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1139c569 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139c56c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c56f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c572 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1139c575 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c578 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c57b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1139c57f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139c581 jne 0x1139c5a0 */
  if (!C.zf) goto L_1139c5a0;
  /* 1139c583 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139c586 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c589 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c58e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c590 not eax */
  EAX = (~(EAX));
  /* 1139c592 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c595 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c598 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139c59a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c59d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139c5a0:;
  /* 1139c5a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c5a3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139c5a6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c5a9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c5ac mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139c5af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c5b2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139c5b5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139c5b8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139c5bb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1139c5be mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c5c1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c5c4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139c5c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c5ca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1139c5cd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c5d0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1139c5d3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c5d7 jbe 0x1139c5e0 */
  if ((C.cf||C.zf)) goto L_1139c5e0;
  /* 1139c5d9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1139c5e0:;
  /* 1139c5e0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c5e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139c5e6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1139c5e9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1139c5ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c5ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c5f2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c5f5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139c5f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c5fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c5fe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139c601 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139c604 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c607 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1139c60a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c60d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c610 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c613 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1139c616 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c619 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c61c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139c61f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c622 jne 0x1139c6ee */
  if (!C.zf) goto L_1139c6ee;
  /* 1139c628 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c62c jae 0x1139c688 */
  if (!C.cf) goto L_1139c688;
  /* 1139c62e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c631 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c634 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139c638 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c63b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c63e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1139c641 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139c643 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c646 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c649 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1139c64c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c64e jne 0x1139c666 */
  if (!C.zf) goto L_1139c666;
  /* 1139c650 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c655 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c658 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c65a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c65d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139c65f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139c661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c664 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1139c666:;
  /* 1139c666 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c66b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c66e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c673 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c676 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1139c67a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139c67c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c67f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c682 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1139c686 jmp 0x1139c6ee */
  goto L_1139c6ee;
L_1139c688:;
  /* 1139c688 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c68b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c68e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1139c692 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c695 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c698 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1139c69b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139c69d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c6a0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c6a3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1139c6a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c6a8 jne 0x1139c6c5 */
  if (!C.zf) goto L_1139c6c5;
  /* 1139c6aa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c6ad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c6b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1139c6b5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1139c6b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c6ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139c6bd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1139c6bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139c6c2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1139c6c5:;
  /* 1139c6c5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139c6c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c6cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c6d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c6d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c6d5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c6d8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1139c6df or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139c6e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c6e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139c6e7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1139c6ee:;
  /* 1139c6ee mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c6f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c6f4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139c6f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139c6f9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c6fc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139c6ff mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1139c702:;
  /* 1139c702 mov eax, 1 */
  EAX = (0x1u);
L_1139c707:;
  /* 1139c707 mov esp, ebp */
  ESP = (EBP);
  /* 1139c709 pop ebp */
  EBP = (pop32());
  /* 1139c70a ret  */
  ESPCHK(0x1139c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x1139c710 (304 bytes, 79 insns) */
void f_1139c710(void) {
  FTRACE(0x1139c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139c710 push ebp */
  push32((uint32_t)(EBP));
  /* 1139c711 mov ebp, esp */
  EBP = (ESP);
  /* 1139c713 push ecx */
  push32((uint32_t)(ECX));
  /* 1139c714 cmp dword ptr [0x113c40e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c40e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c71b je 0x1139c83c */
  if (C.zf) goto L_1139c83c;
  /* 1139c721 mov eax, dword ptr [0x113c40d8] */
  EAX = (r32((uint32_t)(0x113c40d8)));
  /* 1139c726 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1139c729 mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c72f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139c732 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c734 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139c737 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1139c73c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1139c741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139c744 push eax */
  push32((uint32_t)(EAX));
  /* 1139c745 call dword ptr [0x113c5364] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5364))), 0x1139c74bu);
  /* 1139c74b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139c750 mov ecx, dword ptr [0x113c40d8] */
  ECX = (r32((uint32_t)(0x113c40d8)));
  /* 1139c756 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139c758 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c75d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1139c760 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1139c762 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c768 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139c76b mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c770 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139c773 mov edx, dword ptr [0x113c40d8] */
  EDX = (r32((uint32_t)(0x113c40d8)));
  /* 1139c779 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1139c784 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c789 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139c78c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1139c78f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1139c792 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c797 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139c79a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1139c79d mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139c7a6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1139c7aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139c7ac jne 0x1139c7c2 */
  if (!C.zf) goto L_1139c7c2;
  /* 1139c7ae mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c7b4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139c7b7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1139c7b9 mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c7bf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1139c7c2:;
  /* 1139c7c2 mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c7c8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c7cc jne 0x1139c832 */
  if (!C.zf) goto L_1139c832;
  /* 1139c7ce cmp dword ptr [0x113c40e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c40e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c7d5 jle 0x1139c832 */
  if ((C.zf||C.sf!=C.of)) goto L_1139c832;
  /* 1139c7d7 mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c7dc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1139c7df push ecx */
  push32((uint32_t)(ECX));
  /* 1139c7e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139c7e2 mov edx, dword ptr [0x113c40ec] */
  EDX = (r32((uint32_t)(0x113c40ec)));
  /* 1139c7e8 push edx */
  push32((uint32_t)(EDX));
  /* 1139c7e9 call dword ptr [0x113c5368] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5368))), 0x1139c7efu);
  /* 1139c7ef mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139c7f4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139c7f7 mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139c7fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c7ff mov edx, dword ptr [0x113c40e0] */
  EDX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c805 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c808 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c80a push ecx */
  push32((uint32_t)(ECX));
  /* 1139c80b mov eax, dword ptr [0x113c40e0] */
  EAX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c810 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c813 push eax */
  push32((uint32_t)(EAX));
  /* 1139c814 mov ecx, dword ptr [0x113c40e0] */
  ECX = (r32((uint32_t)(0x113c40e0)));
  /* 1139c81a push ecx */
  push32((uint32_t)(ECX));
  /* 1139c81b call 0x1139f220 */
  push32(0x1139c820u); f_1139f220();
  /* 1139c820 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c823 mov edx, dword ptr [0x113c40e4] */
  EDX = (r32((uint32_t)(0x113c40e4)));
  /* 1139c829 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c82c mov dword ptr [0x113c40e4], edx */
  w32((uint32_t)(0x113c40e4), (EDX));
L_1139c832:;
  /* 1139c832 mov dword ptr [0x113c40e0], 0 */
  w32((uint32_t)(0x113c40e0), (0x0u));
L_1139c83c:;
  /* 1139c83c mov esp, ebp */
  ESP = (EBP);
  /* 1139c83e pop ebp */
  EBP = (pop32());
  /* 1139c83f ret  */
  ESPCHK(0x1139c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c840 @ 0x1139c840 (1565 bytes, 343 insns) */
void f_1139c840(void) {
  FTRACE(0x1139c840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139c840 push ebp */
  push32((uint32_t)(EBP));
  /* 1139c841 mov ebp, esp */
  EBP = (ESP);
  /* 1139c843 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139c849 mov eax, dword ptr [0x113c40e4] */
  EAX = (r32((uint32_t)(0x113c40e4)));
  /* 1139c84e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139c851 push eax */
  push32((uint32_t)(EAX));
  /* 1139c852 mov ecx, dword ptr [0x113c40e8] */
  ECX = (r32((uint32_t)(0x113c40e8)));
  /* 1139c858 push ecx */
  push32((uint32_t)(ECX));
  /* 1139c859 call dword ptr [0x113c5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5390))), 0x1139c85fu);
  /* 1139c85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139c861 je 0x1139c86b */
  if (C.zf) goto L_1139c86b;
  /* 1139c863 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139c866 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139c86b:;
  /* 1139c86b mov edx, dword ptr [0x113c40e8] */
  EDX = (r32((uint32_t)(0x113c40e8)));
  /* 1139c871 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1139c877 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1139c881 jmp 0x1139c892 */
  goto L_1139c892;
L_1139c883:;
  /* 1139c883 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1139c889 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c88c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1139c892:;
  /* 1139c892 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1139c898 cmp ecx, dword ptr [0x113c40e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c40e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c89e jge 0x1139ce57 */
  if ((C.sf==C.of)) goto L_1139ce57;
  /* 1139c8a4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139c8aa mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139c8ad mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1139c8b3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1139c8b8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1139c8be push ecx */
  push32((uint32_t)(ECX));
  /* 1139c8bf call dword ptr [0x113c5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5390))), 0x1139c8c5u);
  /* 1139c8c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139c8c7 je 0x1139c8d3 */
  if (C.zf) goto L_1139c8d3;
  /* 1139c8c9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1139c8ce jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139c8d3:;
  /* 1139c8d3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139c8d9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1139c8dc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1139c8e2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1139c8e8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c8ee mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1139c8f1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139c8f7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139c8fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139c8fd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1139c907 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1139c911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139c918 jmp 0x1139c923 */
  goto L_1139c923;
L_1139c91a:;
  /* 1139c91a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139c91d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c920 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1139c923:;
  /* 1139c923 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c927 jge 0x1139ce1b */
  if ((C.sf==C.of)) goto L_1139ce1b;
  /* 1139c92d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1139c937 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1139c941 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1139c94b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1139c955 jmp 0x1139c966 */
  goto L_1139c966;
L_1139c957:;
  /* 1139c957 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1139c95d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c960 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1139c966:;
  /* 1139c966 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c96d jge 0x1139c982 */
  if ((C.sf==C.of)) goto L_1139c982;
  /* 1139c96f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1139c975 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1139c980 jmp 0x1139c957 */
  goto L_1139c957;
L_1139c982:;
  /* 1139c982 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c986 jl 0x1139cdbd */
  if ((C.sf!=C.of)) goto L_1139cdbd;
  /* 1139c98c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1139c991 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1139c997 push ecx */
  push32((uint32_t)(ECX));
  /* 1139c998 call dword ptr [0x113c5390] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5390))), 0x1139c99eu);
  /* 1139c99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139c9a0 je 0x1139c9ac */
  if (C.zf) goto L_1139c9ac;
  /* 1139c9a2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1139c9a7 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139c9ac:;
  /* 1139c9ac mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1139c9b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1139c9b5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1139c9bf jmp 0x1139c9d0 */
  goto L_1139c9d0;
L_1139c9c1:;
  /* 1139c9c1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1139c9c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c9ca mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1139c9d0:;
  /* 1139c9d0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139c9d7 jge 0x1139cb54 */
  if ((C.sf==C.of)) goto L_1139cb54;
  /* 1139c9dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139c9e0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c9e3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1139c9e9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139c9ef add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139c9f5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1139c9fb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139ca01 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ca05 jne 0x1139ca12 */
  if (!C.zf) goto L_1139ca12;
  /* 1139ca07 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1139ca0d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ca10 je 0x1139ca1c */
  if (C.zf) goto L_1139ca1c;
L_1139ca12:;
  /* 1139ca12 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1139ca17 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139ca1c:;
  /* 1139ca1c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139ca22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139ca24 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1139ca2a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1139ca30 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1139ca36 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1139ca3c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ca3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ca41 je 0x1139ca79 */
  if (C.zf) goto L_1139ca79;
  /* 1139ca43 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1139ca49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ca4c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1139ca52 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ca5c jle 0x1139ca68 */
  if ((C.zf||C.sf!=C.of)) goto L_1139ca68;
  /* 1139ca5e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1139ca63 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139ca68:;
  /* 1139ca68 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1139ca6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ca71 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1139ca77 jmp 0x1139cabb */
  goto L_1139cabb;
L_1139ca79:;
  /* 1139ca79 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1139ca7f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139ca82 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ca85 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1139ca8b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ca92 jle 0x1139ca9e */
  if ((C.zf||C.sf!=C.of)) goto L_1139ca9e;
  /* 1139ca94 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1139ca9e:;
  /* 1139ca9e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1139caa4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1139caab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139caae mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1139cab4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1139cabb:;
  /* 1139cabb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cac2 jl 0x1139cadd */
  if ((C.sf!=C.of)) goto L_1139cadd;
  /* 1139cac4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1139caca and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1139cacd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139cacf jne 0x1139cadd */
  if (!C.zf) goto L_1139cadd;
  /* 1139cad1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cadb jle 0x1139cae7 */
  if ((C.zf||C.sf!=C.of)) goto L_1139cae7;
L_1139cadd:;
  /* 1139cadd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1139cae2 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cae7:;
  /* 1139cae7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139caed add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139caf3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1139caf6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cafc je 0x1139cb08 */
  if (C.zf) goto L_1139cb08;
  /* 1139cafe mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1139cb03 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cb08:;
  /* 1139cb08 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139cb0e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cb14 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1139cb1a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139cb20 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cb26 jb 0x1139ca1c */
  if (C.cf) goto L_1139ca1c;
  /* 1139cb2c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139cb32 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cb38 je 0x1139cb44 */
  if (C.zf) goto L_1139cb44;
  /* 1139cb3a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1139cb3f jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cb44:;
  /* 1139cb44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139cb47 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cb4c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139cb4f jmp 0x1139c9c1 */
  goto L_1139c9c1;
L_1139cb54:;
  /* 1139cb54 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139cb57 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139cb59 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cb5f je 0x1139cb6b */
  if (C.zf) goto L_1139cb6b;
  /* 1139cb61 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1139cb66 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cb6b:;
  /* 1139cb6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139cb6e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1139cb74 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1139cb7b jmp 0x1139cb86 */
  goto L_1139cb86;
L_1139cb7d:;
  /* 1139cb7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cb80 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cb83 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1139cb86:;
  /* 1139cb86 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cb8a jge 0x1139cdbd */
  if ((C.sf==C.of)) goto L_1139cdbd;
  /* 1139cb90 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1139cb9a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1139cba0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1139cba6:;
  /* 1139cba6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139cbac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139cbaf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1139cbb5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139cbbb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cbc1 je 0x1139ccea */
  if (C.zf) goto L_1139ccea;
  /* 1139cbc7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cbca mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1139cbd0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cbd7 je 0x1139ccea */
  if (C.zf) goto L_1139ccea;
  /* 1139cbdd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139cbe3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cbe9 jb 0x1139cbfe */
  if (C.cf) goto L_1139cbfe;
  /* 1139cbeb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1139cbf1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cbf6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cbfc jb 0x1139cc08 */
  if (C.cf) goto L_1139cc08;
L_1139cbfe:;
  /* 1139cbfe mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1139cc03 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cc08:;
  /* 1139cc08 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139cc0e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1139cc14 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1139cc1a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1139cc20 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cc23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1139cc26 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc29 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cc2e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1139cc34:;
  /* 1139cc34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc37 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cc3d je 0x1139cc5e */
  if (C.zf) goto L_1139cc5e;
  /* 1139cc3f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc42 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cc48 jne 0x1139cc4c */
  if (!C.zf) goto L_1139cc4c;
  /* 1139cc4a jmp 0x1139cc5e */
  goto L_1139cc5e;
L_1139cc4c:;
  /* 1139cc4c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139cc51 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1139cc54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc57 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cc59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1139cc5c jmp 0x1139cc34 */
  goto L_1139cc34;
L_1139cc5e:;
  /* 1139cc5e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139cc61 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cc67 jne 0x1139cc73 */
  if (!C.zf) goto L_1139cc73;
  /* 1139cc69 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1139cc6e jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cc73:;
  /* 1139cc73 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139cc79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139cc7b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139cc7e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139cc81 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1139cc87 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cc8e jle 0x1139cc9a */
  if ((C.zf||C.sf!=C.of)) goto L_1139cc9a;
  /* 1139cc90 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1139cc9a:;
  /* 1139cc9a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1139cca0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cca3 je 0x1139ccaf */
  if (C.zf) goto L_1139ccaf;
  /* 1139cca5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1139ccaa jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139ccaf:;
  /* 1139ccaf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139ccb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139ccb8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ccbe je 0x1139ccca */
  if (C.zf) goto L_1139ccca;
  /* 1139ccc0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1139ccc5 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139ccca:;
  /* 1139ccca mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1139ccd0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1139ccd6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1139ccdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ccdf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1139cce5 jmp 0x1139cba6 */
  goto L_1139cba6;
L_1139ccea:;
  /* 1139ccea cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ccf1 je 0x1139cd61 */
  if (C.zf) goto L_1139cd61;
  /* 1139ccf3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ccf7 jge 0x1139cd2b */
  if ((C.sf==C.of)) goto L_1139cd2b;
  /* 1139ccf9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139ccfe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cd01 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139cd03 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1139cd09 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cd0b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1139cd11 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139cd16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cd19 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139cd1b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1139cd21 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cd23 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1139cd29 jmp 0x1139cd61 */
  goto L_1139cd61;
L_1139cd2b:;
  /* 1139cd2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cd2e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139cd31 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139cd36 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139cd38 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1139cd3e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cd40 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1139cd46 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cd49 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139cd4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1139cd51 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1139cd53 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1139cd59 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cd5b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1139cd61:;
  /* 1139cd61 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1139cd67 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139cd6a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cd70 jne 0x1139cd84 */
  if (!C.zf) goto L_1139cd84;
  /* 1139cd72 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139cd75 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1139cd7b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cd82 je 0x1139cd8e */
  if (C.zf) goto L_1139cd8e;
L_1139cd84:;
  /* 1139cd84 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1139cd89 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cd8e:;
  /* 1139cd8e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1139cd94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139cd97 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cd9d je 0x1139cda9 */
  if (C.zf) goto L_1139cda9;
  /* 1139cd9f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1139cda4 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cda9:;
  /* 1139cda9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1139cdaf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cdb2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1139cdb8 jmp 0x1139cb7d */
  goto L_1139cb7d;
L_1139cdbd:;
  /* 1139cdbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139cdc0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1139cdc6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1139cdcc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cdd0 jne 0x1139cdea */
  if (!C.zf) goto L_1139cdea;
  /* 1139cdd2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139cdd5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1139cddb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1139cde1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cde8 je 0x1139cdf1 */
  if (C.zf) goto L_1139cdf1;
L_1139cdea:;
  /* 1139cdea mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1139cdef jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139cdf1:;
  /* 1139cdf1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1139cdf7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cdfd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1139ce03 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139ce06 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ce0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139ce0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ce11 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1139ce13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139ce16 jmp 0x1139c91a */
  goto L_1139c91a;
L_1139ce1b:;
  /* 1139ce1b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139ce21 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1139ce27 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ce29 jne 0x1139ce3c */
  if (!C.zf) goto L_1139ce3c;
  /* 1139ce2b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139ce31 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1139ce37 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ce3a je 0x1139ce43 */
  if (C.zf) goto L_1139ce43;
L_1139ce3c:;
  /* 1139ce3c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1139ce41 jmp 0x1139ce59 */
  goto L_1139ce59;
L_1139ce43:;
  /* 1139ce43 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1139ce49 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ce4c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1139ce52 jmp 0x1139c883 */
  goto L_1139c883;
L_1139ce57:;
  /* 1139ce57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139ce59:;
  /* 1139ce59 mov esp, ebp */
  ESP = (EBP);
  /* 1139ce5b pop ebp */
  EBP = (pop32());
  /* 1139ce5c ret  */
  ESPCHK(0x1139c840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x1139ce60 (250 bytes, 92 insns) */
void f_1139ce60(void) {
  FTRACE(0x1139ce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ce60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ce61 mov ebp, esp */
  EBP = (ESP);
  /* 1139ce63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ce66 push ebx */
  push32((uint32_t)(EBX));
  /* 1139ce67 push esi */
  push32((uint32_t)(ESI));
  /* 1139ce68 push edi */
  push32((uint32_t)(EDI));
  /* 1139ce69 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1139ce6c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1139ce6f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1139ce72 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1139ce75:;
  /* 1139ce75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ce79 jne 0x1139ce99 */
  if (!C.zf) goto L_1139ce99;
  /* 1139ce7b push 0x113be1f0 */
  push32((uint32_t)(0x113be1f0u));
  /* 1139ce80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139ce82 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1139ce84 push 0x113be1e4 */
  push32((uint32_t)(0x113be1e4u));
  /* 1139ce89 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139ce8b call 0x113955e0 */
  push32(0x1139ce90u); f_113955e0();
  /* 1139ce90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ce93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ce96 jne 0x1139ce99 */
  if (!C.zf) goto L_1139ce99;
  /* 1139ce98 int3  */
  x86_unimpl("int3 @ 0x1139ce98");
L_1139ce99:;
  /* 1139ce99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139ce9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ce9d jne 0x1139ce75 */
  if (!C.zf) goto L_1139ce75;
L_1139ce9f:;
  /* 1139ce9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cea3 jne 0x1139cec3 */
  if (!C.zf) goto L_1139cec3;
  /* 1139cea5 push 0x113be1d4 */
  push32((uint32_t)(0x113be1d4u));
  /* 1139ceaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1139ceac push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1139ceae push 0x113be1e4 */
  push32((uint32_t)(0x113be1e4u));
  /* 1139ceb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139ceb5 call 0x113955e0 */
  push32(0x1139cebau); f_113955e0();
  /* 1139ceba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cec0 jne 0x1139cec3 */
  if (!C.zf) goto L_1139cec3;
  /* 1139cec2 int3  */
  x86_unimpl("int3 @ 0x1139cec2");
L_1139cec3:;
  /* 1139cec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139cec7 jne 0x1139ce9f */
  if (!C.zf) goto L_1139ce9f;
  /* 1139cec9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cecc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1139ced3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139ced6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ced9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1139cedc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139cee2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1139cee4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cee7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1139ceee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139cef1 push ecx */
  push32((uint32_t)(ECX));
  /* 1139cef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139cef5 push edx */
  push32((uint32_t)(EDX));
  /* 1139cef6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cef9 push eax */
  push32((uint32_t)(EAX));
  /* 1139cefa call 0x1139dee0 */
  push32(0x1139ceffu); f_1139dee0();
  /* 1139ceff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cf02 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139cf05 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139cf0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139cf0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139cf14 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf17 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cf1b jl 0x1139cf3f */
  if ((C.sf!=C.of)) goto L_1139cf3f;
  /* 1139cf1d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf20 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139cf22 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1139cf25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139cf27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139cf2d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1139cf30 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139cf35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cf38 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf3b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1139cf3d jmp 0x1139cf50 */
  goto L_1139cf50;
L_1139cf3f:;
  /* 1139cf3f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139cf42 push edx */
  push32((uint32_t)(EDX));
  /* 1139cf43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139cf45 call 0x1139dc60 */
  push32(0x1139cf4au); f_1139dc60();
  /* 1139cf4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cf4d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1139cf50:;
  /* 1139cf50 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139cf53 pop edi */
  EDI = (pop32());
  /* 1139cf54 pop esi */
  ESI = (pop32());
  /* 1139cf55 pop ebx */
  EBX = (pop32());
  /* 1139cf56 mov esp, ebp */
  ESP = (EBP);
  /* 1139cf58 pop ebp */
  EBP = (pop32());
  /* 1139cf59 ret  */
  ESPCHK(0x1139ce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf60 @ 0x1139cf60 (183 bytes, 58 insns) */
void f_1139cf60(void) {
  FTRACE(0x1139cf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139cf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139cf61 mov ebp, esp */
  EBP = (ESP);
  /* 1139cf63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139cf66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139cf69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139cf6c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139cf71 ja 0x1139cf8a */
  if ((!C.cf&&!C.zf)) goto L_1139cf8a;
  /* 1139cf73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139cf76 mov edx, dword ptr [0x113c0db8] */
  EDX = (r32((uint32_t)(0x113c0db8)));
  /* 1139cf7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cf7e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1139cf82 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1139cf85 jmp 0x1139d013 */
  goto L_1139d013;
L_1139cf8a:;
  /* 1139cf8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139cf8d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1139cf90 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139cf96 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139cf9c mov edx, dword ptr [0x113c0db8] */
  EDX = (r32((uint32_t)(0x113c0db8)));
  /* 1139cfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139cfa4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1139cfa8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1139cfad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139cfaf je 0x1139cfd3 */
  if (C.zf) goto L_1139cfd3;
  /* 1139cfb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139cfb4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1139cfb7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139cfbd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1139cfc0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1139cfc3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1139cfc6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1139cfca mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1139cfd1 jmp 0x1139cfe4 */
  goto L_1139cfe4;
L_1139cfd3:;
  /* 1139cfd3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1139cfd6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1139cfd9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1139cfdd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1139cfe4:;
  /* 1139cfe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139cfe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139cfe8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139cfea lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1139cfed push ecx */
  push32((uint32_t)(ECX));
  /* 1139cfee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139cff1 push edx */
  push32((uint32_t)(EDX));
  /* 1139cff2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1139cff5 push eax */
  push32((uint32_t)(EAX));
  /* 1139cff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139cff8 call 0x1139f560 */
  push32(0x1139cffdu); f_1139f560();
  /* 1139cffd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d000 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139d002 jne 0x1139d008 */
  if (!C.zf) goto L_1139d008;
  /* 1139d004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d006 jmp 0x1139d013 */
  goto L_1139d013;
L_1139d008:;
  /* 1139d008 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d00b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139d010 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1139d013:;
  /* 1139d013 mov esp, ebp */
  ESP = (EBP);
  /* 1139d015 pop ebp */
  EBP = (pop32());
  /* 1139d016 ret  */
  ESPCHK(0x1139cf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d020 @ 0x1139d020 (836 bytes, 238 insns) */
void f_1139d020(void) {
  FTRACE(0x1139d020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d020 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d021 mov ebp, esp */
  EBP = (ESP);
  /* 1139d023 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139d026 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d028 call 0x1139a010 */
  push32(0x1139d02du); f_1139a010();
  /* 1139d02d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d033 push eax */
  push32((uint32_t)(EAX));
  /* 1139d034 call 0x1139d370 */
  push32(0x1139d039u); f_1139d370();
  /* 1139d039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d03c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1139d03f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d042 cmp ecx, dword ptr [0x113c3e24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c3e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d048 jne 0x1139d05b */
  if (!C.zf) goto L_1139d05b;
  /* 1139d04a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d04c call 0x1139a0b0 */
  push32(0x1139d051u); f_1139a0b0();
  /* 1139d051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d056 jmp 0x1139d360 */
  goto L_1139d360;
L_1139d05b:;
  /* 1139d05b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d05f jne 0x1139d07c */
  if (!C.zf) goto L_1139d07c;
  /* 1139d061 call 0x1139d450 */
  push32(0x1139d066u); f_1139d450();
  /* 1139d066 call 0x1139d4d0 */
  push32(0x1139d06bu); f_1139d4d0();
  /* 1139d06b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d06d call 0x1139a0b0 */
  push32(0x1139d072u); f_1139a0b0();
  /* 1139d072 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d077 jmp 0x1139d360 */
  goto L_1139d360;
L_1139d07c:;
  /* 1139d07c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139d083 jmp 0x1139d08e */
  goto L_1139d08e;
L_1139d085:;
  /* 1139d085 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d088 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d08b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139d08e:;
  /* 1139d08e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d092 jae 0x1139d1df */
  if (!C.cf) goto L_1139d1df;
  /* 1139d098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d09b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139d09e mov ecx, dword ptr [eax + 0x113c0fd8] */
  ECX = (r32((uint32_t)(EAX + 0x113c0fd8)));
  /* 1139d0a4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d0a7 jne 0x1139d1da */
  if (!C.zf) goto L_1139d1da;
  /* 1139d0ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139d0b4 jmp 0x1139d0bf */
  goto L_1139d0bf;
L_1139d0b6:;
  /* 1139d0b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d0b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d0bc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1139d0bf:;
  /* 1139d0bf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d0c6 jae 0x1139d0d4 */
  if (!C.cf) goto L_1139d0d4;
  /* 1139d0c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d0cb mov byte ptr [eax + 0x113c3fc0], 0 */
  w8((uint32_t)(EAX + 0x113c3fc0), (0x0u));
  /* 1139d0d2 jmp 0x1139d0b6 */
  goto L_1139d0b6;
L_1139d0d4:;
  /* 1139d0d4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139d0db jmp 0x1139d0e6 */
  goto L_1139d0e6;
L_1139d0dd:;
  /* 1139d0dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d0e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d0e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1139d0e6:;
  /* 1139d0e6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d0ea jae 0x1139d167 */
  if (!C.cf) goto L_1139d167;
  /* 1139d0ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d0ef imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139d0f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d0f5 lea ecx, [edx + eax*8 + 0x113c0fe8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x113c0fe8));
  /* 1139d0fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139d0ff jmp 0x1139d10a */
  goto L_1139d10a;
L_1139d101:;
  /* 1139d101 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139d104 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d107 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1139d10a:;
  /* 1139d10a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139d10d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139d10f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139d111 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139d113 je 0x1139d162 */
  if (C.zf) goto L_1139d162;
  /* 1139d115 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139d118 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d11a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1139d11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139d11f je 0x1139d162 */
  if (C.zf) goto L_1139d162;
  /* 1139d121 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139d124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d126 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139d128 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139d12b jmp 0x1139d136 */
  goto L_1139d136;
L_1139d12d:;
  /* 1139d12d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d130 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d133 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1139d136:;
  /* 1139d136 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139d139 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d13b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1139d13e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d141 ja 0x1139d160 */
  if ((!C.cf&&!C.zf)) goto L_1139d160;
  /* 1139d143 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d146 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d149 mov dl, byte ptr [eax + 0x113c3fc1] */
  DL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 1139d14f or dl, byte ptr [ecx + 0x113c0fd0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x113c0fd0))); DL = (_r); fl_logic(_r,8); }
  /* 1139d155 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d158 mov byte ptr [eax + 0x113c3fc1], dl */
  w8((uint32_t)(EAX + 0x113c3fc1), (DL));
  /* 1139d15e jmp 0x1139d12d */
  goto L_1139d12d;
L_1139d160:;
  /* 1139d160 jmp 0x1139d101 */
  goto L_1139d101;
L_1139d162:;
  /* 1139d162 jmp 0x1139d0dd */
  goto L_1139d0dd;
L_1139d167:;
  /* 1139d167 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d16a mov dword ptr [0x113c3e24], ecx */
  w32((uint32_t)(0x113c3e24), (ECX));
  /* 1139d170 mov dword ptr [0x113c3eac], 1 */
  w32((uint32_t)(0x113c3eac), (0x1u));
  /* 1139d17a mov edx, dword ptr [0x113c3e24] */
  EDX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d180 push edx */
  push32((uint32_t)(EDX));
  /* 1139d181 call 0x1139d3d0 */
  push32(0x1139d186u); f_1139d3d0();
  /* 1139d186 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d189 mov dword ptr [0x113c40c4], eax */
  w32((uint32_t)(0x113c40c4), (EAX));
  /* 1139d18e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139d195 jmp 0x1139d1a0 */
  goto L_1139d1a0;
L_1139d197:;
  /* 1139d197 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d19a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d19d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1139d1a0:;
  /* 1139d1a0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d1a4 jae 0x1139d1c4 */
  if (!C.cf) goto L_1139d1c4;
  /* 1139d1a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d1a9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139d1ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d1af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d1b2 mov cx, word ptr [ecx + eax*2 + 0x113c0fdc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x113c0fdc)));
  /* 1139d1ba mov word ptr [edx*2 + 0x113c3ea0], cx */
  w16((uint32_t)(EDX*2 + 0x113c3ea0), (CX));
  /* 1139d1c2 jmp 0x1139d197 */
  goto L_1139d197;
L_1139d1c4:;
  /* 1139d1c4 call 0x1139d4d0 */
  push32(0x1139d1c9u); f_1139d4d0();
  /* 1139d1c9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d1cb call 0x1139a0b0 */
  push32(0x1139d1d0u); f_1139a0b0();
  /* 1139d1d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d1d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d1d5 jmp 0x1139d360 */
  goto L_1139d360;
L_1139d1da:;
  /* 1139d1da jmp 0x1139d085 */
  goto L_1139d085;
L_1139d1df:;
  /* 1139d1df lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1139d1e2 push edx */
  push32((uint32_t)(EDX));
  /* 1139d1e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d1e6 push eax */
  push32((uint32_t)(EAX));
  /* 1139d1e7 call dword ptr [0x113c533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c533c))), 0x1139d1edu);
  /* 1139d1ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d1f0 jne 0x1139d332 */
  if (!C.zf) goto L_1139d332;
  /* 1139d1f6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139d1fd jmp 0x1139d208 */
  goto L_1139d208;
L_1139d1ff:;
  /* 1139d1ff mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d202 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d205 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1139d208:;
  /* 1139d208 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d20f jae 0x1139d21d */
  if (!C.cf) goto L_1139d21d;
  /* 1139d211 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d214 mov byte ptr [edx + 0x113c3fc0], 0 */
  w8((uint32_t)(EDX + 0x113c3fc0), (0x0u));
  /* 1139d21b jmp 0x1139d1ff */
  goto L_1139d1ff;
L_1139d21d:;
  /* 1139d21d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d220 mov dword ptr [0x113c3e24], eax */
  w32((uint32_t)(0x113c3e24), (EAX));
  /* 1139d225 mov dword ptr [0x113c40c4], 0 */
  w32((uint32_t)(0x113c40c4), (0x0u));
  /* 1139d22f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d233 jbe 0x1139d2ee */
  if ((C.cf||C.zf)) goto L_1139d2ee;
  /* 1139d239 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1139d23c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1139d23f jmp 0x1139d24a */
  goto L_1139d24a;
L_1139d241:;
  /* 1139d241 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139d244 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d247 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1139d24a:;
  /* 1139d24a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139d24d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139d24f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139d251 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139d253 je 0x1139d29c */
  if (C.zf) goto L_1139d29c;
  /* 1139d255 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139d258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d25a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1139d25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139d25f je 0x1139d29c */
  if (C.zf) goto L_1139d29c;
  /* 1139d261 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139d264 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d266 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139d268 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139d26b jmp 0x1139d276 */
  goto L_1139d276;
L_1139d26d:;
  /* 1139d26d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d270 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d273 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1139d276:;
  /* 1139d276 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139d279 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d27b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1139d27e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d281 ja 0x1139d29a */
  if ((!C.cf&&!C.zf)) goto L_1139d29a;
  /* 1139d283 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d286 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 1139d28c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1139d28f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d292 mov byte ptr [edx + 0x113c3fc1], cl */
  w8((uint32_t)(EDX + 0x113c3fc1), (CL));
  /* 1139d298 jmp 0x1139d26d */
  goto L_1139d26d;
L_1139d29a:;
  /* 1139d29a jmp 0x1139d241 */
  goto L_1139d241;
L_1139d29c:;
  /* 1139d29c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1139d2a3 jmp 0x1139d2ae */
  goto L_1139d2ae;
L_1139d2a5:;
  /* 1139d2a5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d2a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d2ab mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1139d2ae:;
  /* 1139d2ae cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d2b5 jae 0x1139d2ce */
  if (!C.cf) goto L_1139d2ce;
  /* 1139d2b7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d2ba mov dl, byte ptr [ecx + 0x113c3fc1] */
  DL = (r8((uint32_t)(ECX + 0x113c3fc1)));
  /* 1139d2c0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1139d2c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139d2c6 mov byte ptr [eax + 0x113c3fc1], dl */
  w8((uint32_t)(EAX + 0x113c3fc1), (DL));
  /* 1139d2cc jmp 0x1139d2a5 */
  goto L_1139d2a5;
L_1139d2ce:;
  /* 1139d2ce mov ecx, dword ptr [0x113c3e24] */
  ECX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d2d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d2d5 call 0x1139d3d0 */
  push32(0x1139d2dau); f_1139d3d0();
  /* 1139d2da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d2dd mov dword ptr [0x113c40c4], eax */
  w32((uint32_t)(0x113c40c4), (EAX));
  /* 1139d2e2 mov dword ptr [0x113c3eac], 1 */
  w32((uint32_t)(0x113c3eac), (0x1u));
  /* 1139d2ec jmp 0x1139d2f8 */
  goto L_1139d2f8;
L_1139d2ee:;
  /* 1139d2ee mov dword ptr [0x113c3eac], 0 */
  w32((uint32_t)(0x113c3eac), (0x0u));
L_1139d2f8:;
  /* 1139d2f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139d2ff jmp 0x1139d30a */
  goto L_1139d30a;
L_1139d301:;
  /* 1139d301 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d304 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d307 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1139d30a:;
  /* 1139d30a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d30e jae 0x1139d31f */
  if (!C.cf) goto L_1139d31f;
  /* 1139d310 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139d313 mov word ptr [eax*2 + 0x113c3ea0], 0 */
  w16((uint32_t)(EAX*2 + 0x113c3ea0), (0x0u));
  /* 1139d31d jmp 0x1139d301 */
  goto L_1139d301;
L_1139d31f:;
  /* 1139d31f call 0x1139d4d0 */
  push32(0x1139d324u); f_1139d4d0();
  /* 1139d324 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d326 call 0x1139a0b0 */
  push32(0x1139d32bu); f_1139a0b0();
  /* 1139d32b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d32e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d330 jmp 0x1139d360 */
  goto L_1139d360;
L_1139d332:;
  /* 1139d332 cmp dword ptr [0x113c29e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d339 je 0x1139d353 */
  if (C.zf) goto L_1139d353;
  /* 1139d33b call 0x1139d450 */
  push32(0x1139d340u); f_1139d450();
  /* 1139d340 call 0x1139d4d0 */
  push32(0x1139d345u); f_1139d4d0();
  /* 1139d345 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d347 call 0x1139a0b0 */
  push32(0x1139d34cu); f_1139a0b0();
  /* 1139d34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d34f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139d351 jmp 0x1139d360 */
  goto L_1139d360;
L_1139d353:;
  /* 1139d353 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1139d355 call 0x1139a0b0 */
  push32(0x1139d35au); f_1139a0b0();
  /* 1139d35a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d35d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1139d360:;
  /* 1139d360 mov esp, ebp */
  ESP = (EBP);
  /* 1139d362 pop ebp */
  EBP = (pop32());
  /* 1139d363 ret  */
  ESPCHK(0x1139d020u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1139d370 (89 bytes, 21 insns) */
void f_1139d370(void) {
  FTRACE(0x1139d370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d370 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d371 mov ebp, esp */
  EBP = (ESP);
  /* 1139d373 mov dword ptr [0x113c29e4], 0 */
  w32((uint32_t)(0x113c29e4), (0x0u));
  /* 1139d37d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d381 jne 0x1139d395 */
  if (!C.zf) goto L_1139d395;
  /* 1139d383 mov dword ptr [0x113c29e4], 1 */
  w32((uint32_t)(0x113c29e4), (0x1u));
  /* 1139d38d call dword ptr [0x113c5334] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5334))), 0x1139d393u);
  /* 1139d393 jmp 0x1139d3c7 */
  goto L_1139d3c7;
L_1139d395:;
  /* 1139d395 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d399 jne 0x1139d3ad */
  if (!C.zf) goto L_1139d3ad;
  /* 1139d39b mov dword ptr [0x113c29e4], 1 */
  w32((uint32_t)(0x113c29e4), (0x1u));
  /* 1139d3a5 call dword ptr [0x113c5338] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5338))), 0x1139d3abu);
  /* 1139d3ab jmp 0x1139d3c7 */
  goto L_1139d3c7;
L_1139d3ad:;
  /* 1139d3ad cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d3b1 jne 0x1139d3c4 */
  if (!C.zf) goto L_1139d3c4;
  /* 1139d3b3 mov dword ptr [0x113c29e4], 1 */
  w32((uint32_t)(0x113c29e4), (0x1u));
  /* 1139d3bd mov eax, dword ptr [0x113c2a00] */
  EAX = (r32((uint32_t)(0x113c2a00)));
  /* 1139d3c2 jmp 0x1139d3c7 */
  goto L_1139d3c7;
L_1139d3c4:;
  /* 1139d3c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1139d3c7:;
  /* 1139d3c7 pop ebp */
  EBP = (pop32());
  /* 1139d3c8 ret  */
  ESPCHK(0x1139d370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3d0 @ 0x1139d3d0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1139d3d0(void) {
  FTRACE(0x1139d3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d3d1 mov ebp, esp */
  EBP = (ESP);
  /* 1139d3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d3d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d3d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139d3da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d3dd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139d3e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139d3e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d3ea ja 0x1139d41a */
  if ((!C.cf&&!C.zf)) goto L_1139d41a;
  /* 1139d3ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d3ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d3f1 mov dl, byte ptr [eax + 0x1139d434] */
  DL = (r8((uint32_t)(EAX + 0x1139d434)));
  /* 1139d3f7 jmp dword ptr [edx*4 + 0x1139d420] */
  switch (EDX) {
    case 0: goto L_1139d3fe;
    case 1: goto L_1139d405;
    case 2: goto L_1139d40c;
    case 3: goto L_1139d413;
    case 4: goto L_1139d41a;
    default: x86_unimpl("switch@0x1139d3f7 out of table"); return;
  }
L_1139d3fe:;
  /* 1139d3fe mov eax, 0x411 */
  EAX = (0x411u);
  /* 1139d403 jmp 0x1139d41c */
  goto L_1139d41c;
L_1139d405:;
  /* 1139d405 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1139d40a jmp 0x1139d41c */
  goto L_1139d41c;
L_1139d40c:;
  /* 1139d40c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1139d411 jmp 0x1139d41c */
  goto L_1139d41c;
L_1139d413:;
  /* 1139d413 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1139d418 jmp 0x1139d41c */
  goto L_1139d41c;
L_1139d41a:;
  /* 1139d41a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139d41c:;
  /* 1139d41c mov esp, ebp */
  ESP = (EBP);
  /* 1139d41e pop ebp */
  EBP = (pop32());
  /* 1139d41f ret  */
  ESPCHK(0x1139d3d0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1139d450 (116 bytes, 29 insns) */
void f_1139d450(void) {
  FTRACE(0x1139d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d450 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d451 mov ebp, esp */
  EBP = (ESP);
  /* 1139d453 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d454 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139d45b jmp 0x1139d466 */
  goto L_1139d466;
L_1139d45d:;
  /* 1139d45d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d463 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139d466:;
  /* 1139d466 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d46d jge 0x1139d47b */
  if ((C.sf==C.of)) goto L_1139d47b;
  /* 1139d46f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d472 mov byte ptr [ecx + 0x113c3fc0], 0 */
  w8((uint32_t)(ECX + 0x113c3fc0), (0x0u));
  /* 1139d479 jmp 0x1139d45d */
  goto L_1139d45d;
L_1139d47b:;
  /* 1139d47b mov dword ptr [0x113c3e24], 0 */
  w32((uint32_t)(0x113c3e24), (0x0u));
  /* 1139d485 mov dword ptr [0x113c3eac], 0 */
  w32((uint32_t)(0x113c3eac), (0x0u));
  /* 1139d48f mov dword ptr [0x113c40c4], 0 */
  w32((uint32_t)(0x113c40c4), (0x0u));
  /* 1139d499 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139d4a0 jmp 0x1139d4ab */
  goto L_1139d4ab;
L_1139d4a2:;
  /* 1139d4a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d4a5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d4a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139d4ab:;
  /* 1139d4ab cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d4af jge 0x1139d4c0 */
  if ((C.sf==C.of)) goto L_1139d4c0;
  /* 1139d4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d4b4 mov word ptr [eax*2 + 0x113c3ea0], 0 */
  w16((uint32_t)(EAX*2 + 0x113c3ea0), (0x0u));
  /* 1139d4be jmp 0x1139d4a2 */
  goto L_1139d4a2;
L_1139d4c0:;
  /* 1139d4c0 mov esp, ebp */
  ESP = (EBP);
  /* 1139d4c2 pop ebp */
  EBP = (pop32());
  /* 1139d4c3 ret  */
  ESPCHK(0x1139d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4d0 @ 0x1139d4d0 (770 bytes, 175 insns) */
void f_1139d4d0(void) {
  FTRACE(0x1139d4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1139d4d3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139d4d9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1139d4df push eax */
  push32((uint32_t)(EAX));
  /* 1139d4e0 mov ecx, dword ptr [0x113c3e24] */
  ECX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d4e7 call dword ptr [0x113c533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c533c))), 0x1139d4edu);
  /* 1139d4ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d4f0 jne 0x1139d709 */
  if (!C.zf) goto L_1139d709;
  /* 1139d4f6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1139d500 jmp 0x1139d511 */
  goto L_1139d511;
L_1139d502:;
  /* 1139d502 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d508 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d50b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1139d511:;
  /* 1139d511 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d51b jae 0x1139d532 */
  if (!C.cf) goto L_1139d532;
  /* 1139d51d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d523 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1139d529 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1139d530 jmp 0x1139d502 */
  goto L_1139d502;
L_1139d532:;
  /* 1139d532 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1139d539 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1139d53f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139d542 jmp 0x1139d54d */
  goto L_1139d54d;
L_1139d544:;
  /* 1139d544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d547 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d54a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139d54d:;
  /* 1139d54d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d550 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d552 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139d554 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139d556 je 0x1139d598 */
  if (C.zf) goto L_1139d598;
  /* 1139d558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d55b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139d55d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139d55f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1139d565 jmp 0x1139d576 */
  goto L_1139d576;
L_1139d567:;
  /* 1139d567 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d56d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d570 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1139d576:;
  /* 1139d576 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139d579 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139d57b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1139d57e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d584 ja 0x1139d596 */
  if ((!C.cf&&!C.zf)) goto L_1139d596;
  /* 1139d586 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d58c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1139d594 jmp 0x1139d567 */
  goto L_1139d567;
L_1139d596:;
  /* 1139d596 jmp 0x1139d544 */
  goto L_1139d544;
L_1139d598:;
  /* 1139d598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139d59a mov eax, dword ptr [0x113c40c4] */
  EAX = (r32((uint32_t)(0x113c40c4)));
  /* 1139d59f push eax */
  push32((uint32_t)(EAX));
  /* 1139d5a0 mov ecx, dword ptr [0x113c3e24] */
  ECX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d5a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d5a7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1139d5ad push edx */
  push32((uint32_t)(EDX));
  /* 1139d5ae push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d5b3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1139d5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1139d5ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1139d5bc call 0x1139f560 */
  push32(0x1139d5c1u); f_1139f560();
  /* 1139d5c1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139d5c6 mov ecx, dword ptr [0x113c3e24] */
  ECX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d5cc push ecx */
  push32((uint32_t)(ECX));
  /* 1139d5cd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d5d2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1139d5d8 push edx */
  push32((uint32_t)(EDX));
  /* 1139d5d9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d5de lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1139d5e4 push eax */
  push32((uint32_t)(EAX));
  /* 1139d5e5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d5ea mov ecx, dword ptr [0x113c40c4] */
  ECX = (r32((uint32_t)(0x113c40c4)));
  /* 1139d5f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d5f1 call 0x1139f720 */
  push32(0x1139d5f6u); f_1139f720();
  /* 1139d5f6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d5f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139d5fb mov edx, dword ptr [0x113c3e24] */
  EDX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d601 push edx */
  push32((uint32_t)(EDX));
  /* 1139d602 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d607 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1139d60d push eax */
  push32((uint32_t)(EAX));
  /* 1139d60e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139d613 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1139d619 push ecx */
  push32((uint32_t)(ECX));
  /* 1139d61a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1139d61f mov edx, dword ptr [0x113c40c4] */
  EDX = (r32((uint32_t)(0x113c40c4)));
  /* 1139d625 push edx */
  push32((uint32_t)(EDX));
  /* 1139d626 call 0x1139f720 */
  push32(0x1139d62bu); f_1139f720();
  /* 1139d62b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d62e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1139d638 jmp 0x1139d649 */
  goto L_1139d649;
L_1139d63a:;
  /* 1139d63a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d643 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1139d649:;
  /* 1139d649 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d653 jae 0x1139d704 */
  if (!C.cf) goto L_1139d704;
  /* 1139d659 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d65f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d661 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1139d669 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1139d66c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139d66e je 0x1139d6a6 */
  if (C.zf) goto L_1139d6a6;
  /* 1139d670 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d676 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 1139d67c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1139d67f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d685 mov byte ptr [edx + 0x113c3fc1], cl */
  w8((uint32_t)(EDX + 0x113c3fc1), (CL));
  /* 1139d68b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d691 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d697 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1139d69e mov byte ptr [eax + 0x113c3ec0], dl */
  w8((uint32_t)(EAX + 0x113c3ec0), (DL));
  /* 1139d6a4 jmp 0x1139d6ff */
  goto L_1139d6ff;
L_1139d6a6:;
  /* 1139d6a6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139d6ae mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1139d6b6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1139d6b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139d6bb je 0x1139d6f2 */
  if (C.zf) goto L_1139d6f2;
  /* 1139d6bd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6c3 mov al, byte ptr [edx + 0x113c3fc1] */
  AL = (r8((uint32_t)(EDX + 0x113c3fc1)));
  /* 1139d6c9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1139d6cb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6d1 mov byte ptr [ecx + 0x113c3fc1], al */
  w8((uint32_t)(ECX + 0x113c3fc1), (AL));
  /* 1139d6d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6e3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1139d6ea mov byte ptr [edx + 0x113c3ec0], cl */
  w8((uint32_t)(EDX + 0x113c3ec0), (CL));
  /* 1139d6f0 jmp 0x1139d6ff */
  goto L_1139d6ff;
L_1139d6f2:;
  /* 1139d6f2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d6f8 mov byte ptr [edx + 0x113c3ec0], 0 */
  w8((uint32_t)(EDX + 0x113c3ec0), (0x0u));
L_1139d6ff:;
  /* 1139d6ff jmp 0x1139d63a */
  goto L_1139d63a;
L_1139d704:;
  /* 1139d704 jmp 0x1139d7ce */
  goto L_1139d7ce;
L_1139d709:;
  /* 1139d709 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1139d713 jmp 0x1139d724 */
  goto L_1139d724;
L_1139d715:;
  /* 1139d715 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d71b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d71e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1139d724:;
  /* 1139d724 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d72e jae 0x1139d7ce */
  if (!C.cf) goto L_1139d7ce;
  /* 1139d734 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d73b jb 0x1139d778 */
  if (C.cf) goto L_1139d778;
  /* 1139d73d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d744 ja 0x1139d778 */
  if ((!C.cf&&!C.zf)) goto L_1139d778;
  /* 1139d746 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d74c mov dl, byte ptr [ecx + 0x113c3fc1] */
  DL = (r8((uint32_t)(ECX + 0x113c3fc1)));
  /* 1139d752 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1139d755 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d75b mov byte ptr [eax + 0x113c3fc1], dl */
  w8((uint32_t)(EAX + 0x113c3fc1), (DL));
  /* 1139d761 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d767 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d76a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d770 mov byte ptr [edx + 0x113c3ec0], cl */
  w8((uint32_t)(EDX + 0x113c3ec0), (CL));
  /* 1139d776 jmp 0x1139d7c9 */
  goto L_1139d7c9;
L_1139d778:;
  /* 1139d778 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d77f jb 0x1139d7bc */
  if (C.cf) goto L_1139d7bc;
  /* 1139d781 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d788 ja 0x1139d7bc */
  if ((!C.cf&&!C.zf)) goto L_1139d7bc;
  /* 1139d78a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d790 mov cl, byte ptr [eax + 0x113c3fc1] */
  CL = (r8((uint32_t)(EAX + 0x113c3fc1)));
  /* 1139d796 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1139d799 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d79f mov byte ptr [edx + 0x113c3fc1], cl */
  w8((uint32_t)(EDX + 0x113c3fc1), (CL));
  /* 1139d7a5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d7ab sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139d7ae mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d7b4 mov byte ptr [ecx + 0x113c3ec0], al */
  w8((uint32_t)(ECX + 0x113c3ec0), (AL));
  /* 1139d7ba jmp 0x1139d7c9 */
  goto L_1139d7c9;
L_1139d7bc:;
  /* 1139d7bc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1139d7c2 mov byte ptr [edx + 0x113c3ec0], 0 */
  w8((uint32_t)(EDX + 0x113c3ec0), (0x0u));
L_1139d7c9:;
  /* 1139d7c9 jmp 0x1139d715 */
  goto L_1139d715;
L_1139d7ce:;
  /* 1139d7ce mov esp, ebp */
  ESP = (EBP);
  /* 1139d7d0 pop ebp */
  EBP = (pop32());
  /* 1139d7d1 ret  */
  ESPCHK(0x1139d4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x1139d7e0 (23 bytes, 9 insns) */
void f_1139d7e0(void) {
  FTRACE(0x1139d7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d7e1 mov ebp, esp */
  EBP = (ESP);
  /* 1139d7e3 cmp dword ptr [0x113c3eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c3eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d7ea je 0x1139d7f3 */
  if (C.zf) goto L_1139d7f3;
  /* 1139d7ec mov eax, dword ptr [0x113c3e24] */
  EAX = (r32((uint32_t)(0x113c3e24)));
  /* 1139d7f1 jmp 0x1139d7f5 */
  goto L_1139d7f5;
L_1139d7f3:;
  /* 1139d7f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139d7f5:;
  /* 1139d7f5 pop ebp */
  EBP = (pop32());
  /* 1139d7f6 ret  */
  ESPCHK(0x1139d7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x1139d800 (34 bytes, 10 insns) */
void f_1139d800(void) {
  FTRACE(0x1139d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d800 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d801 mov ebp, esp */
  EBP = (ESP);
  /* 1139d803 cmp dword ptr [0x113c4270], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4270))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d80a jne 0x1139d820 */
  if (!C.zf) goto L_1139d820;
  /* 1139d80c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1139d80e call 0x1139d020 */
  push32(0x1139d813u); f_1139d020();
  /* 1139d813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d816 mov dword ptr [0x113c4270], 1 */
  w32((uint32_t)(0x113c4270), (0x1u));
L_1139d820:;
  /* 1139d820 pop ebp */
  EBP = (pop32());
  /* 1139d821 ret  */
  ESPCHK(0x1139d800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1139d830 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1139d830(void) {
  FTRACE(0x1139d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1139d831 mov ebp, esp */
  EBP = (ESP);
  /* 1139d833 push edi */
  push32((uint32_t)(EDI));
  /* 1139d834 push esi */
  push32((uint32_t)(ESI));
  /* 1139d835 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1139d838 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139d83b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d83e mov eax, ecx */
  EAX = (ECX);
  /* 1139d840 mov edx, ecx */
  EDX = (ECX);
  /* 1139d842 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d844 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d846 jbe 0x1139d850 */
  if ((C.cf||C.zf)) goto L_1139d850;
  /* 1139d848 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d84a jb 0x1139d9c8 */
  if (C.cf) goto L_1139d9c8;
L_1139d850:;
  /* 1139d850 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1139d856 jne 0x1139d86c */
  if (!C.zf) goto L_1139d86c;
  /* 1139d858 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139d85b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139d85e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d861 jb 0x1139d88c */
  if (C.cf) goto L_1139d88c;
  /* 1139d863 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139d865 jmp dword ptr [edx*4 + 0x1139d978] */
  switch (EDX) {
    case 0: goto L_1139d988;
    case 1: goto L_1139d990;
    case 2: goto L_1139d99c;
    case 3: goto L_1139d9b0;
    default: x86_unimpl("switch@0x1139d865 out of table"); return;
  }
L_1139d86c:;
  /* 1139d86c mov eax, edi */
  EAX = (EDI);
  /* 1139d86e mov edx, 3 */
  EDX = (0x3u);
  /* 1139d873 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139d876 jb 0x1139d884 */
  if (C.cf) goto L_1139d884;
  /* 1139d878 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1139d87b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d87d jmp dword ptr [eax*4 + 0x1139d890] */
  switch (EAX) {
    case 1: goto L_1139d8a0;
    case 2: goto L_1139d8cc;
    case 3: goto L_1139d8f0;
    default: x86_unimpl("switch@0x1139d87d out of table"); return;
  }
L_1139d884:;
  /* 1139d884 jmp dword ptr [ecx*4 + 0x1139d988] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1139d988)))); return;
  /* 1139d88b nop  */
  /* nop */
L_1139d88c:;
  /* 1139d88c jmp dword ptr [ecx*4 + 0x1139d90c] */
  switch (ECX) {
    case 0: goto L_1139d96f;
    case 1: goto L_1139d95c;
    case 2: goto L_1139d954;
    case 3: goto L_1139d94c;
    case 4: goto L_1139d944;
    case 5: goto L_1139d93c;
    case 6: goto L_1139d934;
    case 7: goto L_1139d92c;
    default: x86_unimpl("switch@0x1139d88c out of table"); return;
  }
  /* 1139d893 nop  */
  /* nop */
L_1139d8a0:;
  /* 1139d8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d8a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139d8a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139d8ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139d8af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139d8b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139d8b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d8b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d8bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d8be jb 0x1139d88c */
  if (C.cf) goto L_1139d88c;
  /* 1139d8c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139d8c2 jmp dword ptr [edx*4 + 0x1139d978] */
  switch (EDX) {
    case 0: goto L_1139d988;
    case 1: goto L_1139d990;
    case 2: goto L_1139d99c;
    case 3: goto L_1139d9b0;
    default: x86_unimpl("switch@0x1139d8c2 out of table"); return;
  }
  /* 1139d8c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139d8cc:;
  /* 1139d8cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d8ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d8d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d8d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139d8d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139d8d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139d8db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d8de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d8e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d8e4 jb 0x1139d88c */
  if (C.cf) goto L_1139d88c;
  /* 1139d8e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139d8e8 jmp dword ptr [edx*4 + 0x1139d978] */
  switch (EDX) {
    case 0: goto L_1139d988;
    case 1: goto L_1139d990;
    case 2: goto L_1139d99c;
    case 3: goto L_1139d9b0;
    default: x86_unimpl("switch@0x1139d8e8 out of table"); return;
  }
  /* 1139d8ef nop  */
  /* nop */
L_1139d8f0:;
  /* 1139d8f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139d8f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d8f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d8f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1139d8f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139d8fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1139d8fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d8fe jb 0x1139d88c */
  if (C.cf) goto L_1139d88c;
  /* 1139d900 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139d902 jmp dword ptr [edx*4 + 0x1139d978] */
  switch (EDX) {
    case 0: goto L_1139d988;
    case 1: goto L_1139d990;
    case 2: goto L_1139d99c;
    case 3: goto L_1139d9b0;
    default: x86_unimpl("switch@0x1139d902 out of table"); return;
  }
  /* 1139d909 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139d92c:;
  /* 1139d92c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1139d930 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1139d934:;
  /* 1139d934 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1139d938 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1139d93c:;
  /* 1139d93c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1139d940 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1139d944:;
  /* 1139d944 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1139d948 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1139d94c:;
  /* 1139d94c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1139d950 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1139d954:;
  /* 1139d954 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1139d958 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1139d95c:;
  /* 1139d95c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1139d960 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1139d964 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1139d96b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139d96d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1139d96f:;
  /* 1139d96f jmp dword ptr [edx*4 + 0x1139d978] */
  switch (EDX) {
    case 0: goto L_1139d988;
    case 1: goto L_1139d990;
    case 2: goto L_1139d99c;
    case 3: goto L_1139d9b0;
    default: x86_unimpl("switch@0x1139d96f out of table"); return;
  }
  /* 1139d976 mov edi, edi */
  EDI = (EDI);
L_1139d988:;
  /* 1139d988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d98b pop esi */
  ESI = (pop32());
  /* 1139d98c pop edi */
  EDI = (pop32());
  /* 1139d98d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139d98e ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139d98f nop  */
  /* nop */
L_1139d990:;
  /* 1139d990 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d997 pop esi */
  ESI = (pop32());
  /* 1139d998 pop edi */
  EDI = (pop32());
  /* 1139d999 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139d99a ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139d99b nop  */
  /* nop */
L_1139d99c:;
  /* 1139d99c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d99e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d9a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139d9a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139d9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d9a9 pop esi */
  ESI = (pop32());
  /* 1139d9aa pop edi */
  EDI = (pop32());
  /* 1139d9ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139d9ac ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139d9ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139d9b0:;
  /* 1139d9b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139d9b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139d9b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139d9b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139d9ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139d9bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139d9c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139d9c3 pop esi */
  ESI = (pop32());
  /* 1139d9c4 pop edi */
  EDI = (pop32());
  /* 1139d9c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139d9c6 ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139d9c7 nop  */
  /* nop */
L_1139d9c8:;
  /* 1139d9c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1139d9cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1139d9d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1139d9d6 jne 0x1139d9fc */
  if (!C.zf) goto L_1139d9fc;
  /* 1139d9d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139d9db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139d9de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139d9e1 jb 0x1139d9f0 */
  if (C.cf) goto L_1139d9f0;
  /* 1139d9e3 std  */
  C.df=1;
  /* 1139d9e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139d9e6 cld  */
  C.df=0;
  /* 1139d9e7 jmp dword ptr [edx*4 + 0x1139db10] */
  switch (EDX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139d9e7 out of table"); return;
  }
  /* 1139d9ee mov edi, edi */
  EDI = (EDI);
L_1139d9f0:;
  /* 1139d9f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139d9f2 jmp dword ptr [ecx*4 + 0x1139dac0] */
  switch (ECX) {
    case 0: goto L_1139db07;
    default: x86_unimpl("switch@0x1139d9f2 out of table"); return;
  }
  /* 1139d9f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139d9fc:;
  /* 1139d9fc mov eax, edi */
  EAX = (EDI);
  /* 1139d9fe mov edx, 3 */
  EDX = (0x3u);
  /* 1139da03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139da06 jb 0x1139da14 */
  if (C.cf) goto L_1139da14;
  /* 1139da08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1139da0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139da0d jmp dword ptr [eax*4 + 0x1139da18] */
  switch (EAX) {
    case 1: goto L_1139da28;
    case 2: goto L_1139da48;
    case 3: goto L_1139da70;
    default: x86_unimpl("switch@0x1139da0d out of table"); return;
  }
L_1139da14:;
  /* 1139da14 jmp dword ptr [ecx*4 + 0x1139db10] */
  switch (ECX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139da14 out of table"); return;
  }
  /* 1139da1b nop  */
  /* nop */
L_1139da28:;
  /* 1139da28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139da2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139da2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139da30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1139da31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139da34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1139da35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139da38 jb 0x1139d9f0 */
  if (C.cf) goto L_1139d9f0;
  /* 1139da3a std  */
  C.df=1;
  /* 1139da3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139da3d cld  */
  C.df=0;
  /* 1139da3e jmp dword ptr [edx*4 + 0x1139db10] */
  switch (EDX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139da3e out of table"); return;
  }
  /* 1139da45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139da48:;
  /* 1139da48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139da4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139da4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139da50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139da53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139da56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139da59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139da5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139da5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139da62 jb 0x1139d9f0 */
  if (C.cf) goto L_1139d9f0;
  /* 1139da64 std  */
  C.df=1;
  /* 1139da65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139da67 cld  */
  C.df=0;
  /* 1139da68 jmp dword ptr [edx*4 + 0x1139db10] */
  switch (EDX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139da68 out of table"); return;
  }
  /* 1139da6f nop  */
  /* nop */
L_1139da70:;
  /* 1139da70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139da73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139da75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139da78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139da7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139da7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139da81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139da84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139da87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139da8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139da8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139da90 jb 0x1139d9f0 */
  if (C.cf) goto L_1139d9f0;
  /* 1139da96 std  */
  C.df=1;
  /* 1139da97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139da99 cld  */
  C.df=0;
  /* 1139da9a jmp dword ptr [edx*4 + 0x1139db10] */
  switch (EDX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139da9a out of table"); return;
  }
  /* 1139daa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1139daa5 fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139daa7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139daa9 fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139daab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139daad fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139daaf adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dab1 fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139dab3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dab5 fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139dab7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dab9 fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139dabb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dabd fidivr dword ptr [ecx] */
  FPU_ST(0) = ((double)(int32_t)r32((uint32_t)(ECX))) / FPU_ST(0);
  /* 1139dac4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1139dac8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1139dacc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1139dad0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1139dad4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1139dad8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1139dadc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1139dae0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1139dae4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1139dae8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1139daec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1139daf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1139daf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1139daf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1139dafc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1139db03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139db05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1139db07:;
  /* 1139db07 jmp dword ptr [edx*4 + 0x1139db10] */
  switch (EDX) {
    case 0: goto L_1139db20;
    case 1: goto L_1139db28;
    case 2: goto L_1139db38;
    case 3: goto L_1139db4c;
    default: x86_unimpl("switch@0x1139db07 out of table"); return;
  }
  /* 1139db0e mov edi, edi */
  EDI = (EDI);
L_1139db20:;
  /* 1139db20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139db23 pop esi */
  ESI = (pop32());
  /* 1139db24 pop edi */
  EDI = (pop32());
  /* 1139db25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139db26 ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139db27 nop  */
  /* nop */
L_1139db28:;
  /* 1139db28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139db2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139db2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139db31 pop esi */
  ESI = (pop32());
  /* 1139db32 pop edi */
  EDI = (pop32());
  /* 1139db33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139db34 ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139db35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139db38:;
  /* 1139db38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139db3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139db3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139db41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139db44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139db47 pop esi */
  ESI = (pop32());
  /* 1139db48 pop edi */
  EDI = (pop32());
  /* 1139db49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139db4a ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
  /* 1139db4b nop  */
  /* nop */
L_1139db4c:;
  /* 1139db4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139db4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139db52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139db55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139db58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139db5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139db5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139db61 pop esi */
  ESI = (pop32());
  /* 1139db62 pop edi */
  EDI = (pop32());
  /* 1139db63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139db64 ret  */
  ESPCHK(0x1139d830u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1139db70 (104 bytes, 43 insns) */
void f_1139db70(void) {
  FTRACE(0x1139db70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139db70 push ebx */
  push32((uint32_t)(EBX));
  /* 1139db71 push esi */
  push32((uint32_t)(ESI));
  /* 1139db72 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1139db76 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139db78 jne 0x1139db92 */
  if (!C.zf) goto L_1139db92;
  /* 1139db7a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1139db7e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1139db82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139db84 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139db86 mov ebx, eax */
  EBX = (EAX);
  /* 1139db88 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1139db8c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139db8e mov edx, ebx */
  EDX = (EBX);
  /* 1139db90 jmp 0x1139dbd3 */
  goto L_1139dbd3;
L_1139db92:;
  /* 1139db92 mov ecx, eax */
  ECX = (EAX);
  /* 1139db94 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1139db98 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1139db9c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1139dba0:;
  /* 1139dba0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1139dba2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1139dba4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1139dba6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1139dba8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139dbaa jne 0x1139dba0 */
  if (!C.zf) goto L_1139dba0;
  /* 1139dbac div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139dbae mov esi, eax */
  ESI = (EAX);
  /* 1139dbb0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1139dbb4 mov ecx, eax */
  ECX = (EAX);
  /* 1139dbb6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1139dbba mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1139dbbc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dbbe jb 0x1139dbce */
  if (C.cf) goto L_1139dbce;
  /* 1139dbc0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dbc4 ja 0x1139dbce */
  if ((!C.cf&&!C.zf)) goto L_1139dbce;
  /* 1139dbc6 jb 0x1139dbcf */
  if (C.cf) goto L_1139dbcf;
  /* 1139dbc8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dbcc jbe 0x1139dbcf */
  if ((C.cf||C.zf)) goto L_1139dbcf;
L_1139dbce:;
  /* 1139dbce dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1139dbcf:;
  /* 1139dbcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139dbd1 mov eax, esi */
  EAX = (ESI);
L_1139dbd3:;
  /* 1139dbd3 pop esi */
  ESI = (pop32());
  /* 1139dbd4 pop ebx */
  EBX = (pop32());
  /* 1139dbd5 ret 0x10 */
  ESPCHK(0x1139db70u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1139dbe0 (117 bytes, 44 insns) */
void f_1139dbe0(void) {
  FTRACE(0x1139dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139dbe0 push ebx */
  push32((uint32_t)(EBX));
  /* 1139dbe1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1139dbe5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139dbe7 jne 0x1139dc01 */
  if (!C.zf) goto L_1139dc01;
  /* 1139dbe9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1139dbed mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1139dbf1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139dbf3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139dbf5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1139dbf9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139dbfb mov eax, edx */
  EAX = (EDX);
  /* 1139dbfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139dbff jmp 0x1139dc51 */
  goto L_1139dc51;
L_1139dc01:;
  /* 1139dc01 mov ecx, eax */
  ECX = (EAX);
  /* 1139dc03 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1139dc07 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1139dc0b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1139dc0f:;
  /* 1139dc0f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1139dc11 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1139dc13 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1139dc15 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1139dc17 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139dc19 jne 0x1139dc0f */
  if (!C.zf) goto L_1139dc0f;
  /* 1139dc1b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1139dc1d mov ecx, eax */
  ECX = (EAX);
  /* 1139dc1f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1139dc23 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1139dc24 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1139dc28 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dc2a jb 0x1139dc3a */
  if (C.cf) goto L_1139dc3a;
  /* 1139dc2c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dc30 ja 0x1139dc3a */
  if ((!C.cf&&!C.zf)) goto L_1139dc3a;
  /* 1139dc32 jb 0x1139dc42 */
  if (C.cf) goto L_1139dc42;
  /* 1139dc34 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dc38 jbe 0x1139dc42 */
  if ((C.cf||C.zf)) goto L_1139dc42;
L_1139dc3a:;
  /* 1139dc3a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139dc3e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1139dc42:;
  /* 1139dc42 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139dc46 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139dc4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139dc4c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139dc4e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1139dc51:;
  /* 1139dc51 pop ebx */
  EBX = (pop32());
  /* 1139dc52 ret 0x10 */
  ESPCHK(0x1139dbe0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000dc60 @ 0x1139dc60 (628 bytes, 214 insns) */
void f_1139dc60(void) {
  FTRACE(0x1139dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139dc61 mov ebp, esp */
  EBP = (ESP);
  /* 1139dc63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139dc66 push ebx */
  push32((uint32_t)(EBX));
  /* 1139dc67 push esi */
  push32((uint32_t)(ESI));
  /* 1139dc68 push edi */
  push32((uint32_t)(EDI));
L_1139dc69:;
  /* 1139dc69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dc6d jne 0x1139dc8d */
  if (!C.zf) goto L_1139dc8d;
  /* 1139dc6f push 0x113be2e8 */
  push32((uint32_t)(0x113be2e8u));
  /* 1139dc74 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139dc76 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1139dc78 push 0x113be2dc */
  push32((uint32_t)(0x113be2dcu));
  /* 1139dc7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1139dc7f call 0x113955e0 */
  push32(0x1139dc84u); f_113955e0();
  /* 1139dc84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dc87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dc8a jne 0x1139dc8d */
  if (!C.zf) goto L_1139dc8d;
  /* 1139dc8c int3  */
  x86_unimpl("int3 @ 0x1139dc8c");
L_1139dc8d:;
  /* 1139dc8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139dc8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139dc91 jne 0x1139dc69 */
  if (!C.zf) goto L_1139dc69;
  /* 1139dc93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139dc96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139dc99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dc9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1139dc9f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139dca2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dca5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dca8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1139dcae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139dcb0 je 0x1139dcbf */
  if (C.zf) goto L_1139dcbf;
  /* 1139dcb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcb5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139dcb8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1139dcbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139dcbd je 0x1139dcd5 */
  if (C.zf) goto L_1139dcd5;
L_1139dcbf:;
  /* 1139dcbf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcc2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1139dcc5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1139dcc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcca mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1139dccd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139dcd0 jmp 0x1139decd */
  goto L_1139decd;
L_1139dcd5:;
  /* 1139dcd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcd8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1139dcdb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1139dcde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139dce0 je 0x1139dd2c */
  if (C.zf) goto L_1139dd2c;
  /* 1139dce2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dce5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1139dcec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcef mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1139dcf2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1139dcf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139dcf7 je 0x1139dd15 */
  if (C.zf) goto L_1139dd15;
  /* 1139dcf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcfc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dcff mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139dd02 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1139dd04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dd0a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1139dd0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd10 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1139dd13 jmp 0x1139dd2c */
  goto L_1139dd2c;
L_1139dd15:;
  /* 1139dd15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd18 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dd1b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1139dd1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd21 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1139dd24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139dd27 jmp 0x1139decd */
  goto L_1139decd;
L_1139dd2c:;
  /* 1139dd2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd2f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dd32 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1139dd35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd38 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1139dd3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd3e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dd41 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1139dd44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd47 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1139dd4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd4d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1139dd54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139dd5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139dd5e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1139dd61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd64 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139dd67 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1139dd6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139dd6f jne 0x1139dd9f */
  if (!C.zf) goto L_1139dd9f;
  /* 1139dd71 cmp dword ptr [ebp - 8], 0x113c1260 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x113c1260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dd78 je 0x1139dd83 */
  if (C.zf) goto L_1139dd83;
  /* 1139dd7a cmp dword ptr [ebp - 8], 0x113c1280 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x113c1280u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dd81 jne 0x1139dd93 */
  if (!C.zf) goto L_1139dd93;
L_1139dd83:;
  /* 1139dd83 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139dd86 push edx */
  push32((uint32_t)(EDX));
  /* 1139dd87 call 0x1139ffb0 */
  push32(0x1139dd8cu); f_1139ffb0();
  /* 1139dd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dd8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139dd91 jne 0x1139dd9f */
  if (!C.zf) goto L_1139dd9f;
L_1139dd93:;
  /* 1139dd93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dd96 push eax */
  push32((uint32_t)(EAX));
  /* 1139dd97 call 0x1139fee0 */
  push32(0x1139dd9cu); f_1139fee0();
  /* 1139dd9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139dd9f:;
  /* 1139dd9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139dda2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139dda5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ddab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ddad je 0x1139de8b */
  if (C.zf) goto L_1139de8b;
L_1139ddb3:;
  /* 1139ddb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ddb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ddb9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1139ddbb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ddbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ddc0 jge 0x1139dde3 */
  if ((C.sf==C.of)) goto L_1139dde3;
  /* 1139ddc2 push 0x113be29c */
  push32((uint32_t)(0x113be29cu));
  /* 1139ddc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139ddc9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1139ddce push 0x113be2dc */
  push32((uint32_t)(0x113be2dcu));
  /* 1139ddd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139ddd5 call 0x113955e0 */
  push32(0x1139dddau); f_113955e0();
  /* 1139ddda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dddd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139dde0 jne 0x1139dde3 */
  if (!C.zf) goto L_1139dde3;
  /* 1139dde2 int3  */
  x86_unimpl("int3 @ 0x1139dde2");
L_1139dde3:;
  /* 1139dde3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139dde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139dde7 jne 0x1139ddb3 */
  if (!C.zf) goto L_1139ddb3;
  /* 1139dde9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ddec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ddef mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1139ddf1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ddf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139ddf7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ddfa mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1139ddfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139de00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139de03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1139de05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139de08 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1139de0b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139de0e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139de11 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1139de14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139de18 jle 0x1139de36 */
  if ((C.zf||C.sf!=C.of)) goto L_1139de36;
  /* 1139de1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139de1d push ecx */
  push32((uint32_t)(ECX));
  /* 1139de1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139de21 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139de24 push eax */
  push32((uint32_t)(EAX));
  /* 1139de25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139de28 push ecx */
  push32((uint32_t)(ECX));
  /* 1139de29 call 0x1139fbd0 */
  push32(0x1139de2eu); f_1139fbd0();
  /* 1139de2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139de31 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139de34 jmp 0x1139de7e */
  goto L_1139de7e;
L_1139de36:;
  /* 1139de36 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139de3a je 0x1139de59 */
  if (C.zf) goto L_1139de59;
  /* 1139de3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139de3f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1139de42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139de45 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1139de48 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139de4b mov ecx, dword ptr [edx*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 1139de52 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139de54 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1139de57 jmp 0x1139de60 */
  goto L_1139de60;
L_1139de59:;
  /* 1139de59 mov dword ptr [ebp - 0x14], 0x113c0a60 */
  w32((uint32_t)(EBP + -0x14), (0x113c0a60u));
L_1139de60:;
  /* 1139de60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1139de63 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1139de67 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1139de6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139de6c je 0x1139de7e */
  if (C.zf) goto L_1139de7e;
  /* 1139de6e push 2 */
  push32((uint32_t)(0x2u));
  /* 1139de70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139de72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139de75 push ecx */
  push32((uint32_t)(ECX));
  /* 1139de76 call 0x1139fa80 */
  push32(0x1139de7bu); f_1139fa80();
  /* 1139de7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139de7e:;
  /* 1139de7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139de81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139de84 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1139de87 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1139de89 jmp 0x1139dea9 */
  goto L_1139dea9;
L_1139de8b:;
  /* 1139de8b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1139de92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139de95 push edx */
  push32((uint32_t)(EDX));
  /* 1139de96 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1139de99 push eax */
  push32((uint32_t)(EAX));
  /* 1139de9a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139de9d push ecx */
  push32((uint32_t)(ECX));
  /* 1139de9e call 0x1139fbd0 */
  push32(0x1139dea3u); f_1139fbd0();
  /* 1139dea3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dea6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1139dea9:;
  /* 1139dea9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139deac cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139deaf je 0x1139dec5 */
  if (C.zf) goto L_1139dec5;
  /* 1139deb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139deb4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139deb7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1139deba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139debd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1139dec0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139dec3 jmp 0x1139decd */
  goto L_1139decd;
L_1139dec5:;
  /* 1139dec5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139dec8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1139decd:;
  /* 1139decd pop edi */
  EDI = (pop32());
  /* 1139dece pop esi */
  ESI = (pop32());
  /* 1139decf pop ebx */
  EBX = (pop32());
  /* 1139ded0 mov esp, ebp */
  ESP = (EBP);
  /* 1139ded2 pop ebp */
  EBP = (pop32());
  /* 1139ded3 ret  */
  ESPCHK(0x1139dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dee0 @ 0x1139dee0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1139dee0(void) {
  FTRACE(0x1139dee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139dee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139dee1 mov ebp, esp */
  EBP = (ESP);
  /* 1139dee3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139dee9 push ebx */
  push32((uint32_t)(EBX));
  /* 1139deea push esi */
  push32((uint32_t)(ESI));
  /* 1139deeb push edi */
  push32((uint32_t)(EDI));
  /* 1139deec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139def3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1139defd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1139df04:;
  /* 1139df04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139df07 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139df09 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1139df0c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139df10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139df13 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139df16 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1139df19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139df1b je 0x1139eaf7 */
  if (C.zf) goto L_1139eaf7;
  /* 1139df21 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139df28 jl 0x1139eaf7 */
  if ((C.sf!=C.of)) goto L_1139eaf7;
  /* 1139df2e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139df32 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139df35 jl 0x1139df56 */
  if ((C.sf!=C.of)) goto L_1139df56;
  /* 1139df37 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139df3b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139df3e jg 0x1139df56 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139df56;
  /* 1139df40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139df44 movsx ecx, byte ptr [eax + 0x113be2d4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x113be2d4))));
  /* 1139df4b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1139df4e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1139df54 jmp 0x1139df60 */
  goto L_1139df60;
L_1139df56:;
  /* 1139df56 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1139df60:;
  /* 1139df60 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1139df66 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1139df69 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139df6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139df6f movsx edx, byte ptr [ecx + eax*8 + 0x113be2f4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x113be2f4))));
  /* 1139df77 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1139df7a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1139df7d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1139df80 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1139df86 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139df8d ja 0x1139eaf2 */
  if ((!C.cf&&!C.zf)) goto L_1139eaf2;
  /* 1139df93 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1139df99 jmp dword ptr [ecx*4 + 0x1139eb04] */
  switch (ECX) {
    case 0: goto L_1139dfa0;
    case 1: goto L_1139e03a;
    case 2: goto L_1139e07c;
    case 3: goto L_1139e0eb;
    case 4: goto L_1139e143;
    case 5: goto L_1139e152;
    case 6: goto L_1139e19e;
    case 7: goto L_1139e231;
    case 8: goto L_1139e0c8;
    case 9: goto L_1139e0d3;
    case 10: goto L_1139e0be;
    case 11: goto L_1139e0b3;
    case 12: goto L_1139e0de;
    case 13: goto L_1139e0e6;
    default: x86_unimpl("switch@0x1139df99 out of table"); return;
  }
L_1139dfa0:;
  /* 1139dfa0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1139dfa7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139dfaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1139dfb0 mov eax, dword ptr [0x113c0db8] */
  EAX = (r32((uint32_t)(0x113c0db8)));
  /* 1139dfb5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139dfb7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1139dfbb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1139dfc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139dfc3 je 0x1139e01d */
  if (C.zf) goto L_1139e01d;
  /* 1139dfc5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1139dfcb push edx */
  push32((uint32_t)(EDX));
  /* 1139dfcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139dfcf push eax */
  push32((uint32_t)(EAX));
  /* 1139dfd0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139dfd4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139dfd5 call 0x1139ec10 */
  push32(0x1139dfdau); f_1139ec10();
  /* 1139dfda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dfdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139dfe0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139dfe2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1139dfe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139dfe8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139dfeb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1139dfee:;
  /* 1139dfee movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139dff2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139dff4 jne 0x1139e017 */
  if (!C.zf) goto L_1139e017;
  /* 1139dff6 push 0x113be374 */
  push32((uint32_t)(0x113be374u));
  /* 1139dffb push 0 */
  push32((uint32_t)(0x0u));
  /* 1139dffd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1139e002 push 0x113be368 */
  push32((uint32_t)(0x113be368u));
  /* 1139e007 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139e009 call 0x113955e0 */
  push32(0x1139e00eu); f_113955e0();
  /* 1139e00e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e011 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e014 jne 0x1139e017 */
  if (!C.zf) goto L_1139e017;
  /* 1139e016 int3  */
  x86_unimpl("int3 @ 0x1139e016");
L_1139e017:;
  /* 1139e017 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139e019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e01b jne 0x1139dfee */
  if (!C.zf) goto L_1139dfee;
L_1139e01d:;
  /* 1139e01d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1139e023 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139e027 push edx */
  push32((uint32_t)(EDX));
  /* 1139e028 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e02c push eax */
  push32((uint32_t)(EAX));
  /* 1139e02d call 0x1139ec10 */
  push32(0x1139e032u); f_1139ec10();
  /* 1139e032 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e035 jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e03a:;
  /* 1139e03a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1139e041 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139e044 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1139e04a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1139e050 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1139e056 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1139e05c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139e05f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139e066 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1139e070 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1139e077 jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e07c:;
  /* 1139e07c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e080 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1139e086 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1139e08c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e08f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1139e095 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e09c ja 0x1139e0e6 */
  if ((!C.cf&&!C.zf)) goto L_1139e0e6;
  /* 1139e09e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1139e0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139e0a6 mov al, byte ptr [ecx + 0x1139eb3c] */
  AL = (r8((uint32_t)(ECX + 0x1139eb3c)));
  /* 1139e0ac jmp dword ptr [eax*4 + 0x1139eb24] */
  switch (EAX) {
    case 0: goto L_1139e0c8;
    case 1: goto L_1139e0d3;
    case 2: goto L_1139e0be;
    case 3: goto L_1139e0b3;
    case 4: goto L_1139e0de;
    case 5: goto L_1139e0e6;
    default: x86_unimpl("switch@0x1139e0ac out of table"); return;
  }
L_1139e0b3:;
  /* 1139e0b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e0b6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e0b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139e0bc jmp 0x1139e0e6 */
  goto L_1139e0e6;
L_1139e0be:;
  /* 1139e0be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e0c1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1139e0c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139e0c6 jmp 0x1139e0e6 */
  goto L_1139e0e6;
L_1139e0c8:;
  /* 1139e0c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e0cb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e0ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139e0d1 jmp 0x1139e0e6 */
  goto L_1139e0e6;
L_1139e0d3:;
  /* 1139e0d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e0d6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1139e0d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139e0dc jmp 0x1139e0e6 */
  goto L_1139e0e6;
L_1139e0de:;
  /* 1139e0de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e0e1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1139e0e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139e0e6:;
  /* 1139e0e6 jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e0eb:;
  /* 1139e0eb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e0ef cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e0f2 jne 0x1139e127 */
  if (!C.zf) goto L_1139e127;
  /* 1139e0f4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1139e0f7 push edx */
  push32((uint32_t)(EDX));
  /* 1139e0f8 call 0x1139ed20 */
  push32(0x1139e0fdu); f_1139ed20();
  /* 1139e0fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e100 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1139e106 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e10d jge 0x1139e125 */
  if ((C.sf==C.of)) goto L_1139e125;
  /* 1139e10f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e112 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1139e114 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139e117 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1139e11d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139e11f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1139e125:;
  /* 1139e125 jmp 0x1139e13e */
  goto L_1139e13e;
L_1139e127:;
  /* 1139e127 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1139e12d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139e130 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e134 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1139e138 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1139e13e:;
  /* 1139e13e jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e143:;
  /* 1139e143 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1139e14d jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e152:;
  /* 1139e152 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e156 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e159 jne 0x1139e182 */
  if (!C.zf) goto L_1139e182;
  /* 1139e15b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1139e15e push eax */
  push32((uint32_t)(EAX));
  /* 1139e15f call 0x1139ed20 */
  push32(0x1139e164u); f_1139ed20();
  /* 1139e164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e167 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1139e16d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e174 jge 0x1139e180 */
  if ((C.sf==C.of)) goto L_1139e180;
  /* 1139e176 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1139e180:;
  /* 1139e180 jmp 0x1139e199 */
  goto L_1139e199;
L_1139e182:;
  /* 1139e182 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1139e188 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139e18b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e18f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1139e193 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1139e199:;
  /* 1139e199 jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e19e:;
  /* 1139e19e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e1a2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1139e1a8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1139e1ae sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e1b1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1139e1b7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e1be ja 0x1139e22c */
  if ((!C.cf&&!C.zf)) goto L_1139e22c;
  /* 1139e1c0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1139e1c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139e1c8 mov al, byte ptr [ecx + 0x1139eb61] */
  AL = (r8((uint32_t)(ECX + 0x1139eb61)));
  /* 1139e1ce jmp dword ptr [eax*4 + 0x1139eb4d] */
  switch (EAX) {
    case 0: goto L_1139e1e0;
    case 1: goto L_1139e219;
    case 2: goto L_1139e1d5;
    case 3: goto L_1139e223;
    case 4: goto L_1139e22c;
    default: x86_unimpl("switch@0x1139e1ce out of table"); return;
  }
L_1139e1d5:;
  /* 1139e1d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e1d8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e1db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139e1de jmp 0x1139e22c */
  goto L_1139e22c;
L_1139e1e0:;
  /* 1139e1e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139e1e3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1139e1e6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e1e9 jne 0x1139e20b */
  if (!C.zf) goto L_1139e20b;
  /* 1139e1eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139e1ee movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1139e1f2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e1f5 jne 0x1139e20b */
  if (!C.zf) goto L_1139e20b;
  /* 1139e1f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139e1fa add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e1fd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1139e200 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e203 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1139e206 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139e209 jmp 0x1139e217 */
  goto L_1139e217;
L_1139e20b:;
  /* 1139e20b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1139e212 jmp 0x1139dfa0 */
  goto L_1139dfa0;
L_1139e217:;
  /* 1139e217 jmp 0x1139e22c */
  goto L_1139e22c;
L_1139e219:;
  /* 1139e219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e21c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1139e21e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139e221 jmp 0x1139e22c */
  goto L_1139e22c;
L_1139e223:;
  /* 1139e223 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e226 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1139e229 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1139e22c:;
  /* 1139e22c jmp 0x1139eaf2 */
  goto L_1139eaf2;
L_1139e231:;
  /* 1139e231 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e235 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1139e23b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1139e241 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e244 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1139e24a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e251 ja 0x1139e917 */
  if ((!C.cf&&!C.zf)) goto L_1139e917;
  /* 1139e257 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1139e25d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139e25f mov cl, byte ptr [edx + 0x1139ebcc] */
  CL = (r8((uint32_t)(EDX + 0x1139ebcc)));
  /* 1139e265 jmp dword ptr [ecx*4 + 0x1139eb90] */
  switch (ECX) {
    case 0: goto L_1139e26c;
    case 1: goto L_1139e500;
    case 2: goto L_1139e390;
    case 3: goto L_1139e639;
    case 4: goto L_1139e2fb;
    case 5: goto L_1139e281;
    case 6: goto L_1139e60b;
    case 7: goto L_1139e510;
    case 8: goto L_1139e4b5;
    case 9: goto L_1139e685;
    case 10: goto L_1139e62f;
    case 11: goto L_1139e3a6;
    case 12: goto L_1139e623;
    case 13: goto L_1139e645;
    case 14: goto L_1139e917;
    default: x86_unimpl("switch@0x1139e265 out of table"); return;
  }
L_1139e26c:;
  /* 1139e26c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e26f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e276 jne 0x1139e281 */
  if (!C.zf) goto L_1139e281;
  /* 1139e278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e27b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1139e27e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1139e281:;
  /* 1139e281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e284 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e28a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e28c je 0x1139e2c7 */
  if (C.zf) goto L_1139e2c7;
  /* 1139e28e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1139e291 push eax */
  push32((uint32_t)(EAX));
  /* 1139e292 call 0x1139ed60 */
  push32(0x1139e297u); f_1139ed60();
  /* 1139e297 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e29a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1139e29e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1139e2a2 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e2a3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1139e2a9 push edx */
  push32((uint32_t)(EDX));
  /* 1139e2aa call 0x113a0220 */
  push32(0x1139e2afu); f_113a0220();
  /* 1139e2af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e2b2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1139e2b5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e2b9 jge 0x1139e2c5 */
  if ((C.sf==C.of)) goto L_1139e2c5;
  /* 1139e2bb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1139e2c5:;
  /* 1139e2c5 jmp 0x1139e2ed */
  goto L_1139e2ed;
L_1139e2c7:;
  /* 1139e2c7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1139e2ca push eax */
  push32((uint32_t)(EAX));
  /* 1139e2cb call 0x1139ed20 */
  push32(0x1139e2d0u); f_1139ed20();
  /* 1139e2d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e2d3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1139e2da mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1139e2e0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1139e2e6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1139e2ed:;
  /* 1139e2ed lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1139e2f3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139e2f6 jmp 0x1139e917 */
  goto L_1139e917;
L_1139e2fb:;
  /* 1139e2fb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1139e2fe push eax */
  push32((uint32_t)(EAX));
  /* 1139e2ff call 0x1139ed20 */
  push32(0x1139e304u); f_1139ed20();
  /* 1139e304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e307 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1139e30d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e314 je 0x1139e322 */
  if (C.zf) goto L_1139e322;
  /* 1139e316 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1139e31c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e320 jne 0x1139e33c */
  if (!C.zf) goto L_1139e33c;
L_1139e322:;
  /* 1139e322 mov edx, dword ptr [0x113c10d0] */
  EDX = (r32((uint32_t)(0x113c10d0)));
  /* 1139e328 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139e32b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e32e push eax */
  push32((uint32_t)(EAX));
  /* 1139e32f call 0x11399440 */
  push32(0x1139e334u); f_11399440();
  /* 1139e334 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e337 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1139e33a jmp 0x1139e38b */
  goto L_1139e38b;
L_1139e33c:;
  /* 1139e33c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e33f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e347 je 0x1139e36c */
  if (C.zf) goto L_1139e36c;
  /* 1139e349 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1139e34f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1139e352 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139e355 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1139e35b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1139e35e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1139e360 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139e363 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1139e36a jmp 0x1139e38b */
  goto L_1139e38b;
L_1139e36c:;
  /* 1139e36c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1139e373 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1139e379 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139e37c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1139e37f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1139e385 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1139e388 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1139e38b:;
  /* 1139e38b jmp 0x1139e917 */
  goto L_1139e917;
L_1139e390:;
  /* 1139e390 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e393 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e399 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e39b jne 0x1139e3a6 */
  if (!C.zf) goto L_1139e3a6;
  /* 1139e39d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e3a0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1139e3a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139e3a6:;
  /* 1139e3a6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e3ad jne 0x1139e3bb */
  if (!C.zf) goto L_1139e3bb;
  /* 1139e3af mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1139e3b9 jmp 0x1139e3c7 */
  goto L_1139e3c7;
L_1139e3bb:;
  /* 1139e3bb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1139e3c1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1139e3c7:;
  /* 1139e3c7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1139e3cd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1139e3d3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1139e3d6 push edx */
  push32((uint32_t)(EDX));
  /* 1139e3d7 call 0x1139ed20 */
  push32(0x1139e3dcu); f_1139ed20();
  /* 1139e3dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e3df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139e3e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e3e5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e3ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e3ec je 0x1139e456 */
  if (C.zf) goto L_1139e456;
  /* 1139e3ee cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e3f2 jne 0x1139e3fd */
  if (!C.zf) goto L_1139e3fd;
  /* 1139e3f4 mov ecx, dword ptr [0x113c10d4] */
  ECX = (r32((uint32_t)(0x113c10d4)));
  /* 1139e3fa mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1139e3fd:;
  /* 1139e3fd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1139e404 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e407 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1139e40d:;
  /* 1139e40d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1139e413 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1139e419 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e41c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1139e422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e424 je 0x1139e446 */
  if (C.zf) goto L_1139e446;
  /* 1139e426 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1139e42c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139e42e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1139e431 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e433 je 0x1139e446 */
  if (C.zf) goto L_1139e446;
  /* 1139e435 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1139e43b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e43e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1139e444 jmp 0x1139e40d */
  goto L_1139e40d;
L_1139e446:;
  /* 1139e446 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1139e44c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e44f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1139e451 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1139e454 jmp 0x1139e4b0 */
  goto L_1139e4b0;
L_1139e456:;
  /* 1139e456 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e45a jne 0x1139e464 */
  if (!C.zf) goto L_1139e464;
  /* 1139e45c mov eax, dword ptr [0x113c10d0] */
  EAX = (r32((uint32_t)(0x113c10d0)));
  /* 1139e461 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1139e464:;
  /* 1139e464 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e467 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1139e46d:;
  /* 1139e46d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1139e473 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1139e479 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e47c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1139e482 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e484 je 0x1139e4a4 */
  if (C.zf) goto L_1139e4a4;
  /* 1139e486 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1139e48c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139e48f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e491 je 0x1139e4a4 */
  if (C.zf) goto L_1139e4a4;
  /* 1139e493 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1139e499 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e49c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1139e4a2 jmp 0x1139e46d */
  goto L_1139e46d;
L_1139e4a4:;
  /* 1139e4a4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1139e4aa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e4ad mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1139e4b0:;
  /* 1139e4b0 jmp 0x1139e917 */
  goto L_1139e917;
L_1139e4b5:;
  /* 1139e4b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1139e4b8 push edx */
  push32((uint32_t)(EDX));
  /* 1139e4b9 call 0x1139ed20 */
  push32(0x1139e4beu); f_1139ed20();
  /* 1139e4be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e4c1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1139e4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e4ca and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e4cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e4cf je 0x1139e4e3 */
  if (C.zf) goto L_1139e4e3;
  /* 1139e4d1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1139e4d7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1139e4de mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1139e4e1 jmp 0x1139e4f1 */
  goto L_1139e4f1;
L_1139e4e3:;
  /* 1139e4e3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1139e4e9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1139e4ef mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1139e4f1:;
  /* 1139e4f1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1139e4fb jmp 0x1139e917 */
  goto L_1139e917;
L_1139e500:;
  /* 1139e500 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1139e507 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1139e50a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1139e50d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1139e510:;
  /* 1139e510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e513 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1139e515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139e518 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1139e51e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1139e521 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e528 jge 0x1139e536 */
  if ((C.sf==C.of)) goto L_1139e536;
  /* 1139e52a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1139e534 jmp 0x1139e552 */
  goto L_1139e552;
L_1139e536:;
  /* 1139e536 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e53d jne 0x1139e552 */
  if (!C.zf) goto L_1139e552;
  /* 1139e53f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e543 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e546 jne 0x1139e552 */
  if (!C.zf) goto L_1139e552;
  /* 1139e548 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1139e552:;
  /* 1139e552 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139e555 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e558 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1139e55b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139e55e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e561 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139e563 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139e566 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1139e56c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1139e572 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139e575 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e576 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1139e57c push edx */
  push32((uint32_t)(EDX));
  /* 1139e57d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e581 push eax */
  push32((uint32_t)(EAX));
  /* 1139e582 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e585 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e586 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1139e58c push edx */
  push32((uint32_t)(EDX));
  /* 1139e58d call dword ptr [0x113c14c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c14c0))), 0x1139e593u);
  /* 1139e593 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e599 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e59e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e5a0 je 0x1139e5b8 */
  if (C.zf) goto L_1139e5b8;
  /* 1139e5a2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e5a9 jne 0x1139e5b8 */
  if (!C.zf) goto L_1139e5b8;
  /* 1139e5ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e5ae push ecx */
  push32((uint32_t)(ECX));
  /* 1139e5af call dword ptr [0x113c14cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c14cc))), 0x1139e5b5u);
  /* 1139e5b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139e5b8:;
  /* 1139e5b8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1139e5bc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e5bf jne 0x1139e5da */
  if (!C.zf) goto L_1139e5da;
  /* 1139e5c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e5c4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e5c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e5cb jne 0x1139e5da */
  if (!C.zf) goto L_1139e5da;
  /* 1139e5cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e5d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e5d1 call dword ptr [0x113c14c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c14c4))), 0x1139e5d7u);
  /* 1139e5d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139e5da:;
  /* 1139e5da mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e5dd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1139e5e0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e5e3 jne 0x1139e5f7 */
  if (!C.zf) goto L_1139e5f7;
  /* 1139e5e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e5e8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1139e5eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139e5ee mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e5f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e5f4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1139e5f7:;
  /* 1139e5f7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e5fa push eax */
  push32((uint32_t)(EAX));
  /* 1139e5fb call 0x11399440 */
  push32(0x1139e600u); f_11399440();
  /* 1139e600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e603 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1139e606 jmp 0x1139e917 */
  goto L_1139e917;
L_1139e60b:;
  /* 1139e60b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e60e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e611 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139e614 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1139e61e jmp 0x1139e6a5 */
  goto L_1139e6a5;
L_1139e623:;
  /* 1139e623 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1139e62d jmp 0x1139e6a5 */
  goto L_1139e6a5;
L_1139e62f:;
  /* 1139e62f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1139e639:;
  /* 1139e639 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1139e643 jmp 0x1139e64f */
  goto L_1139e64f;
L_1139e645:;
  /* 1139e645 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1139e64f:;
  /* 1139e64f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1139e659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e65c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e662 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e664 je 0x1139e683 */
  if (C.zf) goto L_1139e683;
  /* 1139e666 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1139e66d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1139e673 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e676 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1139e67c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1139e683:;
  /* 1139e683 jmp 0x1139e6a5 */
  goto L_1139e6a5;
L_1139e685:;
  /* 1139e685 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1139e68f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e692 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e698 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e69a je 0x1139e6a5 */
  if (C.zf) goto L_1139e6a5;
  /* 1139e69c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e69f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1139e6a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139e6a5:;
  /* 1139e6a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e6a8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e6ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e6af je 0x1139e6ce */
  if (C.zf) goto L_1139e6ce;
  /* 1139e6b1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1139e6b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e6b5 call 0x1139ed40 */
  push32(0x1139e6bau); f_1139ed40();
  /* 1139e6ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e6bd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1139e6c3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1139e6c9 jmp 0x1139e75f */
  goto L_1139e75f;
L_1139e6ce:;
  /* 1139e6ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e6d1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e6d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e6d6 je 0x1139e720 */
  if (C.zf) goto L_1139e720;
  /* 1139e6d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e6db and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e6de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e6e0 je 0x1139e700 */
  if (C.zf) goto L_1139e700;
  /* 1139e6e2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1139e6e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e6e6 call 0x1139ed20 */
  push32(0x1139e6ebu); f_1139ed20();
  /* 1139e6eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e6ee movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1139e6f1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139e6f2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1139e6f8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1139e6fe jmp 0x1139e71e */
  goto L_1139e71e;
L_1139e700:;
  /* 1139e700 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1139e703 push edx */
  push32((uint32_t)(EDX));
  /* 1139e704 call 0x1139ed20 */
  push32(0x1139e709u); f_1139ed20();
  /* 1139e709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e70c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139e711 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139e712 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1139e718 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1139e71e:;
  /* 1139e71e jmp 0x1139e75f */
  goto L_1139e75f;
L_1139e720:;
  /* 1139e720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e723 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e728 je 0x1139e745 */
  if (C.zf) goto L_1139e745;
  /* 1139e72a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1139e72d push ecx */
  push32((uint32_t)(ECX));
  /* 1139e72e call 0x1139ed20 */
  push32(0x1139e733u); f_1139ed20();
  /* 1139e733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e736 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139e737 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1139e73d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1139e743 jmp 0x1139e75f */
  goto L_1139e75f;
L_1139e745:;
  /* 1139e745 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1139e748 push edx */
  push32((uint32_t)(EDX));
  /* 1139e749 call 0x1139ed20 */
  push32(0x1139e74eu); f_1139ed20();
  /* 1139e74e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e751 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139e753 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1139e759 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1139e75f:;
  /* 1139e75f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e762 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e765 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e767 je 0x1139e7a7 */
  if (C.zf) goto L_1139e7a7;
  /* 1139e769 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e770 jg 0x1139e7a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139e7a7;
  /* 1139e772 jl 0x1139e77d */
  if ((C.sf!=C.of)) goto L_1139e77d;
  /* 1139e774 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e77b jae 0x1139e7a7 */
  if (!C.cf) goto L_1139e7a7;
L_1139e77d:;
  /* 1139e77d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1139e783 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139e785 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1139e78b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e78e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139e790 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1139e796 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1139e79c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e79f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1139e7a2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139e7a5 jmp 0x1139e7bf */
  goto L_1139e7bf;
L_1139e7a7:;
  /* 1139e7a7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1139e7ad mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1139e7b3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1139e7b9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1139e7bf:;
  /* 1139e7bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e7c2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e7c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e7ca jne 0x1139e7e7 */
  if (!C.zf) goto L_1139e7e7;
  /* 1139e7cc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1139e7d2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1139e7d8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e7db mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1139e7e1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1139e7e7:;
  /* 1139e7e7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e7ee jge 0x1139e7fc */
  if ((C.sf==C.of)) goto L_1139e7fc;
  /* 1139e7f0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1139e7fa jmp 0x1139e805 */
  goto L_1139e805;
L_1139e7fc:;
  /* 1139e7fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e7ff and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e802 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139e805:;
  /* 1139e805 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1139e80b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1139e811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e813 jne 0x1139e81c */
  if (!C.zf) goto L_1139e81c;
  /* 1139e815 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1139e81c:;
  /* 1139e81c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1139e81f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1139e822:;
  /* 1139e822 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1139e828 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1139e82e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e831 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1139e837 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e839 jg 0x1139e84f */
  if ((!C.zf&&C.sf==C.of)) goto L_1139e84f;
  /* 1139e83b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1139e841 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1139e847 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e849 je 0x1139e8d0 */
  if (C.zf) goto L_1139e8d0;
L_1139e84f:;
  /* 1139e84f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1139e855 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139e856 push edx */
  push32((uint32_t)(EDX));
  /* 1139e857 push eax */
  push32((uint32_t)(EAX));
  /* 1139e858 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1139e85e push edx */
  push32((uint32_t)(EDX));
  /* 1139e85f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1139e865 push eax */
  push32((uint32_t)(EAX));
  /* 1139e866 call 0x1139dbe0 */
  push32(0x1139e86bu); f_1139dbe0();
  /* 1139e86b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e86e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1139e874 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1139e87a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139e87b push edx */
  push32((uint32_t)(EDX));
  /* 1139e87c push eax */
  push32((uint32_t)(EAX));
  /* 1139e87d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1139e883 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e884 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1139e88a push edx */
  push32((uint32_t)(EDX));
  /* 1139e88b call 0x1139db70 */
  push32(0x1139e890u); f_1139db70();
  /* 1139e890 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1139e896 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1139e89c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e8a3 jle 0x1139e8b7 */
  if ((C.zf||C.sf!=C.of)) goto L_1139e8b7;
  /* 1139e8a5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1139e8ab add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e8b1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1139e8b7:;
  /* 1139e8b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e8ba mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1139e8c0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1139e8c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e8c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e8c8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139e8cb jmp 0x1139e822 */
  goto L_1139e822;
L_1139e8d0:;
  /* 1139e8d0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1139e8d3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e8d6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1139e8d9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e8dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e8df mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139e8e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e8e5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e8ec je 0x1139e917 */
  if (C.zf) goto L_1139e917;
  /* 1139e8ee mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e8f1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139e8f4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e8f7 jne 0x1139e8ff */
  if (!C.zf) goto L_1139e8ff;
  /* 1139e8f9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e8fd jne 0x1139e917 */
  if (!C.zf) goto L_1139e917;
L_1139e8ff:;
  /* 1139e8ff mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e902 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e905 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139e908 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139e90b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1139e90e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139e911 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e914 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1139e917:;
  /* 1139e917 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139e91e jne 0x1139eaf2 */
  if (!C.zf) goto L_1139eaf2;
  /* 1139e924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e927 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e92a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e92c je 0x1139e97d */
  if (C.zf) goto L_1139e97d;
  /* 1139e92e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e931 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e937 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e939 je 0x1139e94b */
  if (C.zf) goto L_1139e94b;
  /* 1139e93b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1139e942 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1139e949 jmp 0x1139e97d */
  goto L_1139e97d;
L_1139e94b:;
  /* 1139e94b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e94e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e951 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e953 je 0x1139e965 */
  if (C.zf) goto L_1139e965;
  /* 1139e955 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1139e95c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1139e963 jmp 0x1139e97d */
  goto L_1139e97d;
L_1139e965:;
  /* 1139e965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e968 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1139e96b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139e96d je 0x1139e97d */
  if (C.zf) goto L_1139e97d;
  /* 1139e96f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1139e976 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1139e97d:;
  /* 1139e97d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1139e983 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e986 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139e989 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1139e98f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e992 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1139e995 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e997 jne 0x1139e9b5 */
  if (!C.zf) goto L_1139e9b5;
  /* 1139e999 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1139e99f push eax */
  push32((uint32_t)(EAX));
  /* 1139e9a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139e9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e9a4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1139e9aa push edx */
  push32((uint32_t)(EDX));
  /* 1139e9ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1139e9ad call 0x1139ec90 */
  push32(0x1139e9b2u); f_1139ec90();
  /* 1139e9b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139e9b5:;
  /* 1139e9b5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1139e9bb push eax */
  push32((uint32_t)(EAX));
  /* 1139e9bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139e9bf push ecx */
  push32((uint32_t)(ECX));
  /* 1139e9c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139e9c3 push edx */
  push32((uint32_t)(EDX));
  /* 1139e9c4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1139e9ca push eax */
  push32((uint32_t)(EAX));
  /* 1139e9cb call 0x1139ecd0 */
  push32(0x1139e9d0u); f_1139ecd0();
  /* 1139e9d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139e9d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e9d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1139e9d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139e9db je 0x1139ea03 */
  if (C.zf) goto L_1139ea03;
  /* 1139e9dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139e9e0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139e9e3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139e9e5 jne 0x1139ea03 */
  if (!C.zf) goto L_1139ea03;
  /* 1139e9e7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1139e9ed push eax */
  push32((uint32_t)(EAX));
  /* 1139e9ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139e9f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1139e9f2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1139e9f8 push edx */
  push32((uint32_t)(EDX));
  /* 1139e9f9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1139e9fb call 0x1139ec90 */
  push32(0x1139ea00u); f_1139ec90();
  /* 1139ea00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139ea03:;
  /* 1139ea03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ea07 je 0x1139eab1 */
  if (C.zf) goto L_1139eab1;
  /* 1139ea0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ea11 jle 0x1139eab1 */
  if ((C.zf||C.sf!=C.of)) goto L_1139eab1;
  /* 1139ea17 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139ea1a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1139ea20 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139ea23 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1139ea29:;
  /* 1139ea29 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1139ea2f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1139ea35 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ea38 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1139ea3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ea40 je 0x1139eaaf */
  if (C.zf) goto L_1139eaaf;
  /* 1139ea42 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1139ea48 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1139ea4b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1139ea52 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1139ea59 push eax */
  push32((uint32_t)(EAX));
  /* 1139ea5a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1139ea60 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ea61 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1139ea67 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ea6a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1139ea70 call 0x113a0220 */
  push32(0x1139ea75u); f_113a0220();
  /* 1139ea75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ea78 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1139ea7e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ea85 jg 0x1139ea89 */
  if ((!C.zf&&C.sf==C.of)) goto L_1139ea89;
  /* 1139ea87 jmp 0x1139eaaf */
  goto L_1139eaaf;
L_1139ea89:;
  /* 1139ea89 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1139ea8f push eax */
  push32((uint32_t)(EAX));
  /* 1139ea90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ea93 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ea94 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1139ea9a push edx */
  push32((uint32_t)(EDX));
  /* 1139ea9b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1139eaa1 push eax */
  push32((uint32_t)(EAX));
  /* 1139eaa2 call 0x1139ecd0 */
  push32(0x1139eaa7u); f_1139ecd0();
  /* 1139eaa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139eaaa jmp 0x1139ea29 */
  goto L_1139ea29;
L_1139eaaf:;
  /* 1139eaaf jmp 0x1139eacc */
  goto L_1139eacc;
L_1139eab1:;
  /* 1139eab1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1139eab7 push ecx */
  push32((uint32_t)(ECX));
  /* 1139eab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139eabb push edx */
  push32((uint32_t)(EDX));
  /* 1139eabc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139eabf push eax */
  push32((uint32_t)(EAX));
  /* 1139eac0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139eac3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139eac4 call 0x1139ecd0 */
  push32(0x1139eac9u); f_1139ecd0();
  /* 1139eac9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139eacc:;
  /* 1139eacc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139eacf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ead2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139ead4 je 0x1139eaf2 */
  if (C.zf) goto L_1139eaf2;
  /* 1139ead6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1139eadc push eax */
  push32((uint32_t)(EAX));
  /* 1139eadd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139eae0 push ecx */
  push32((uint32_t)(ECX));
  /* 1139eae1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1139eae7 push edx */
  push32((uint32_t)(EDX));
  /* 1139eae8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1139eaea call 0x1139ec90 */
  push32(0x1139eaefu); f_1139ec90();
  /* 1139eaef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139eaf2:;
  /* 1139eaf2 jmp 0x1139df04 */
  goto L_1139df04;
L_1139eaf7:;
  /* 1139eaf7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1139eafd pop edi */
  EDI = (pop32());
  /* 1139eafe pop esi */
  ESI = (pop32());
  /* 1139eaff pop ebx */
  EBX = (pop32());
  /* 1139eb00 mov esp, ebp */
  ESP = (EBP);
  /* 1139eb02 pop ebp */
  EBP = (pop32());
  /* 1139eb03 ret  */
  ESPCHK(0x1139dee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec10 @ 0x1139ec10 (119 bytes, 44 insns) */
void f_1139ec10(void) {
  FTRACE(0x1139ec10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ec10 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ec11 mov ebp, esp */
  EBP = (ESP);
  /* 1139ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ec14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec17 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1139ec1a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ec1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec20 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1139ec23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec26 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ec2a jl 0x1139ec52 */
  if ((C.sf!=C.of)) goto L_1139ec52;
  /* 1139ec2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec2f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139ec31 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1139ec34 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1139ec36 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1139ec3a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1139ec40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139ec43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec46 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139ec48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ec4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec4e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1139ec50 jmp 0x1139ec65 */
  goto L_1139ec65;
L_1139ec52:;
  /* 1139ec52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec55 push edx */
  push32((uint32_t)(EDX));
  /* 1139ec56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ec59 push eax */
  push32((uint32_t)(EAX));
  /* 1139ec5a call 0x1139dc60 */
  push32(0x1139ec5fu); f_1139dc60();
  /* 1139ec5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ec62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139ec65:;
  /* 1139ec65 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ec69 jne 0x1139ec76 */
  if (!C.zf) goto L_1139ec76;
  /* 1139ec6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ec6e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1139ec74 jmp 0x1139ec83 */
  goto L_1139ec83;
L_1139ec76:;
  /* 1139ec76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ec79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139ec7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ec7e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ec81 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1139ec83:;
  /* 1139ec83 mov esp, ebp */
  ESP = (EBP);
  /* 1139ec85 pop ebp */
  EBP = (pop32());
  /* 1139ec86 ret  */
  ESPCHK(0x1139ec10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec90 @ 0x1139ec90 (53 bytes, 23 insns) */
void f_1139ec90(void) {
  FTRACE(0x1139ec90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ec90 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ec91 mov ebp, esp */
  EBP = (ESP);
L_1139ec93:;
  /* 1139ec93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ec99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ec9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1139ec9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139eca1 jle 0x1139ecc3 */
  if ((C.zf||C.sf!=C.of)) goto L_1139ecc3;
  /* 1139eca3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139eca6 push edx */
  push32((uint32_t)(EDX));
  /* 1139eca7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139ecaa push eax */
  push32((uint32_t)(EAX));
  /* 1139ecab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ecae push ecx */
  push32((uint32_t)(ECX));
  /* 1139ecaf call 0x1139ec10 */
  push32(0x1139ecb4u); f_1139ec10();
  /* 1139ecb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ecb7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ecba cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ecbd jne 0x1139ecc1 */
  if (!C.zf) goto L_1139ecc1;
  /* 1139ecbf jmp 0x1139ecc3 */
  goto L_1139ecc3;
L_1139ecc1:;
  /* 1139ecc1 jmp 0x1139ec93 */
  goto L_1139ec93;
L_1139ecc3:;
  /* 1139ecc3 pop ebp */
  EBP = (pop32());
  /* 1139ecc4 ret  */
  ESPCHK(0x1139ec90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd0 @ 0x1139ecd0 (74 bytes, 31 insns) */
void f_1139ecd0(void) {
  FTRACE(0x1139ecd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ecd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ecd1 mov ebp, esp */
  EBP = (ESP);
  /* 1139ecd3 push ecx */
  push32((uint32_t)(ECX));
L_1139ecd4:;
  /* 1139ecd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ecd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139ecda sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ecdd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1139ece0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139ece2 jle 0x1139ed16 */
  if ((C.zf||C.sf!=C.of)) goto L_1139ed16;
  /* 1139ece4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ece7 push edx */
  push32((uint32_t)(EDX));
  /* 1139ece8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139eceb push eax */
  push32((uint32_t)(EAX));
  /* 1139ecec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ecef movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139ecf2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139ecf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ecf8 push eax */
  push32((uint32_t)(EAX));
  /* 1139ecf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ecfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ecff mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1139ed02 call 0x1139ec10 */
  push32(0x1139ed07u); f_1139ec10();
  /* 1139ed07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ed0a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139ed0d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ed10 jne 0x1139ed14 */
  if (!C.zf) goto L_1139ed14;
  /* 1139ed12 jmp 0x1139ed16 */
  goto L_1139ed16;
L_1139ed14:;
  /* 1139ed14 jmp 0x1139ecd4 */
  goto L_1139ecd4;
L_1139ed16:;
  /* 1139ed16 mov esp, ebp */
  ESP = (EBP);
  /* 1139ed18 pop ebp */
  EBP = (pop32());
  /* 1139ed19 ret  */
  ESPCHK(0x1139ecd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed20 @ 0x1139ed20 (26 bytes, 12 insns) */
void f_1139ed20(void) {
  FTRACE(0x1139ed20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ed20 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ed21 mov ebp, esp */
  EBP = (ESP);
  /* 1139ed23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed28 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ed2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1139ed30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed33 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed35 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1139ed38 pop ebp */
  EBP = (pop32());
  /* 1139ed39 ret  */
  ESPCHK(0x1139ed20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed40 @ 0x1139ed40 (31 bytes, 14 insns) */
void f_1139ed40(void) {
  FTRACE(0x1139ed40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ed40 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ed41 mov ebp, esp */
  EBP = (ESP);
  /* 1139ed43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed48 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ed4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1139ed50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed55 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ed58 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1139ed5a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1139ed5d pop ebp */
  EBP = (pop32());
  /* 1139ed5e ret  */
  ESPCHK(0x1139ed40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x1139ed60 (27 bytes, 12 insns) */
void f_1139ed60(void) {
  FTRACE(0x1139ed60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ed60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ed61 mov ebp, esp */
  EBP = (ESP);
  /* 1139ed63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed68 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ed6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1139ed70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed73 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139ed75 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1139ed79 pop ebp */
  EBP = (pop32());
  /* 1139ed7a ret  */
  ESPCHK(0x1139ed60u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1139ed80 (145 bytes, 42 insns) */
void f_1139ed80(void) {
  FTRACE(0x1139ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ed81 mov ebp, esp */
  EBP = (ESP);
  /* 1139ed83 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ed84 call 0x1139ee30 */
  push32(0x1139ed89u); f_1139ee30();
  /* 1139ed89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ed8c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139ed8e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139ed95 jmp 0x1139eda0 */
  goto L_1139eda0;
L_1139ed97:;
  /* 1139ed97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ed9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ed9d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1139eda0:;
  /* 1139eda0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139eda4 jae 0x1139edca */
  if (!C.cf) goto L_1139edca;
  /* 1139eda6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139eda9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139edac cmp ecx, dword ptr [eax*8 + 0x113c10d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x113c10d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139edb3 jne 0x1139edc8 */
  if (!C.zf) goto L_1139edc8;
  /* 1139edb5 call 0x1139ee20 */
  push32(0x1139edbau); f_1139ee20();
  /* 1139edba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139edbd mov ecx, dword ptr [edx*8 + 0x113c10dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x113c10dc)));
  /* 1139edc4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139edc6 jmp 0x1139ee0d */
  goto L_1139ee0d;
L_1139edc8:;
  /* 1139edc8 jmp 0x1139ed97 */
  goto L_1139ed97;
L_1139edca:;
  /* 1139edca cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139edce jb 0x1139ede3 */
  if (C.cf) goto L_1139ede3;
  /* 1139edd0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139edd4 ja 0x1139ede3 */
  if ((!C.cf&&!C.zf)) goto L_1139ede3;
  /* 1139edd6 call 0x1139ee20 */
  push32(0x1139eddbu); f_1139ee20();
  /* 1139eddb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1139ede1 jmp 0x1139ee0d */
  goto L_1139ee0d;
L_1139ede3:;
  /* 1139ede3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139edea jb 0x1139ee02 */
  if (C.cf) goto L_1139ee02;
  /* 1139edec cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139edf3 ja 0x1139ee02 */
  if ((!C.cf&&!C.zf)) goto L_1139ee02;
  /* 1139edf5 call 0x1139ee20 */
  push32(0x1139edfau); f_1139ee20();
  /* 1139edfa mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1139ee00 jmp 0x1139ee0d */
  goto L_1139ee0d;
L_1139ee02:;
  /* 1139ee02 call 0x1139ee20 */
  push32(0x1139ee07u); f_1139ee20();
  /* 1139ee07 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1139ee0d:;
  /* 1139ee0d mov esp, ebp */
  ESP = (EBP);
  /* 1139ee0f pop ebp */
  EBP = (pop32());
  /* 1139ee10 ret  */
  ESPCHK(0x1139ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee20 @ 0x1139ee20 (13 bytes, 6 insns) */
void f_1139ee20(void) {
  FTRACE(0x1139ee20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ee20 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ee21 mov ebp, esp */
  EBP = (ESP);
  /* 1139ee23 call 0x11395d60 */
  push32(0x1139ee28u); f_11395d60();
  /* 1139ee28 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ee2b pop ebp */
  EBP = (pop32());
  /* 1139ee2c ret  */
  ESPCHK(0x1139ee20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee30 @ 0x1139ee30 (13 bytes, 6 insns) */
void f_1139ee30(void) {
  FTRACE(0x1139ee30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ee30 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ee31 mov ebp, esp */
  EBP = (ESP);
  /* 1139ee33 call 0x11395d60 */
  push32(0x1139ee38u); f_11395d60();
  /* 1139ee38 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ee3b pop ebp */
  EBP = (pop32());
  /* 1139ee3c ret  */
  ESPCHK(0x1139ee30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee40 @ 0x1139ee40 (255 bytes, 88 insns) */
void f_1139ee40(void) {
  FTRACE(0x1139ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ee40 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ee41 mov ebp, esp */
  EBP = (ESP);
  /* 1139ee43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_1139ee46:;
  /* 1139ee46 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ee4d jle 0x1139ee66 */
  if ((C.zf||C.sf!=C.of)) goto L_1139ee66;
  /* 1139ee4f push 8 */
  push32((uint32_t)(0x8u));
  /* 1139ee51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ee54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139ee56 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139ee58 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ee59 call 0x1139cf60 */
  push32(0x1139ee5eu); f_1139cf60();
  /* 1139ee5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ee61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1139ee64 jmp 0x1139ee7f */
  goto L_1139ee7f;
L_1139ee66:;
  /* 1139ee66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ee69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ee6b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139ee6d mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 1139ee73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139ee75 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1139ee79 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ee7c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1139ee7f:;
  /* 1139ee7f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ee83 je 0x1139ee90 */
  if (C.zf) goto L_1139ee90;
  /* 1139ee85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ee88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ee8b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1139ee8e jmp 0x1139ee46 */
  goto L_1139ee46;
L_1139ee90:;
  /* 1139ee90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ee93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139ee95 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139ee97 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139ee9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ee9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139eea0 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1139eea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139eea6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139eea9 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139eead je 0x1139eeb5 */
  if (C.zf) goto L_1139eeb5;
  /* 1139eeaf cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139eeb3 jne 0x1139eec8 */
  if (!C.zf) goto L_1139eec8;
L_1139eeb5:;
  /* 1139eeb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139eeb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139eeba mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139eebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139eebf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139eec2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139eec5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1139eec8:;
  /* 1139eec8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1139eecf:;
  /* 1139eecf cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139eed6 jle 0x1139eeeb */
  if ((C.zf||C.sf!=C.of)) goto L_1139eeeb;
  /* 1139eed8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139eeda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139eedd push edx */
  push32((uint32_t)(EDX));
  /* 1139eede call 0x1139cf60 */
  push32(0x1139eee3u); f_1139cf60();
  /* 1139eee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139eee6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1139eee9 jmp 0x1139ef00 */
  goto L_1139ef00;
L_1139eeeb:;
  /* 1139eeeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139eeee mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 1139eef4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139eef6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1139eefa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139eefd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1139ef00:;
  /* 1139ef00 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ef04 je 0x1139ef2b */
  if (C.zf) goto L_1139ef2b;
  /* 1139ef06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ef09 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139ef0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ef0f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 1139ef13 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1139ef16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ef19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139ef1b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139ef1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139ef20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ef23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ef26 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1139ef29 jmp 0x1139eecf */
  goto L_1139eecf;
L_1139ef2b:;
  /* 1139ef2b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ef2f jne 0x1139ef38 */
  if (!C.zf) goto L_1139ef38;
  /* 1139ef31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139ef34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139ef36 jmp 0x1139ef3b */
  goto L_1139ef3b;
L_1139ef38:;
  /* 1139ef38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1139ef3b:;
  /* 1139ef3b mov esp, ebp */
  ESP = (EBP);
  /* 1139ef3d pop ebp */
  EBP = (pop32());
  /* 1139ef3e ret  */
  ESPCHK(0x1139ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef40 @ 0x1139ef40 (17 bytes, 8 insns) */
void f_1139ef40(void) {
  FTRACE(0x1139ef40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ef40 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ef41 mov ebp, esp */
  EBP = (ESP);
  /* 1139ef43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ef46 push eax */
  push32((uint32_t)(EAX));
  /* 1139ef47 call 0x1139ee40 */
  push32(0x1139ef4cu); f_1139ee40();
  /* 1139ef4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ef4f pop ebp */
  EBP = (pop32());
  /* 1139ef50 ret  */
  ESPCHK(0x1139ef40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef60 @ 0x1139ef60 (297 bytes, 106 insns) */
void f_1139ef60(void) {
  FTRACE(0x1139ef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ef60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ef61 mov ebp, esp */
  EBP = (ESP);
  /* 1139ef63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139ef66 push esi */
  push32((uint32_t)(ESI));
L_1139ef67:;
  /* 1139ef67 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ef6e jle 0x1139ef87 */
  if ((C.zf||C.sf!=C.of)) goto L_1139ef87;
  /* 1139ef70 push 8 */
  push32((uint32_t)(0x8u));
  /* 1139ef72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ef75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1139ef77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1139ef79 push ecx */
  push32((uint32_t)(ECX));
  /* 1139ef7a call 0x1139cf60 */
  push32(0x1139ef7fu); f_1139cf60();
  /* 1139ef7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ef82 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1139ef85 jmp 0x1139efa0 */
  goto L_1139efa0;
L_1139ef87:;
  /* 1139ef87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ef8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ef8c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139ef8e mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 1139ef94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139ef96 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1139ef9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ef9d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1139efa0:;
  /* 1139efa0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139efa4 je 0x1139efb1 */
  if (C.zf) goto L_1139efb1;
  /* 1139efa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139efa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139efac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1139efaf jmp 0x1139ef67 */
  goto L_1139ef67;
L_1139efb1:;
  /* 1139efb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139efb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139efb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139efb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139efbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139efbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139efc1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1139efc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139efc7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139efca cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139efce je 0x1139efd6 */
  if (C.zf) goto L_1139efd6;
  /* 1139efd0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139efd4 jne 0x1139efe9 */
  if (!C.zf) goto L_1139efe9;
L_1139efd6:;
  /* 1139efd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139efd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139efdb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139efdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139efe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139efe3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139efe6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1139efe9:;
  /* 1139efe9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139eff0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1139eff7:;
  /* 1139eff7 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139effe jle 0x1139f013 */
  if ((C.zf||C.sf!=C.of)) goto L_1139f013;
  /* 1139f000 push 4 */
  push32((uint32_t)(0x4u));
  /* 1139f002 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f005 push edx */
  push32((uint32_t)(EDX));
  /* 1139f006 call 0x1139cf60 */
  push32(0x1139f00bu); f_1139cf60();
  /* 1139f00b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f00e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1139f011 jmp 0x1139f028 */
  goto L_1139f028;
L_1139f013:;
  /* 1139f013 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f016 mov ecx, dword ptr [0x113c0db8] */
  ECX = (r32((uint32_t)(0x113c0db8)));
  /* 1139f01c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f01e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1139f022 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f025 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_1139f028:;
  /* 1139f028 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f02c je 0x1139f069 */
  if (C.zf) goto L_1139f069;
  /* 1139f02e push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f030 push 0xa */
  push32((uint32_t)(0xau));
  /* 1139f032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f035 push eax */
  push32((uint32_t)(EAX));
  /* 1139f036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139f039 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f03a call 0x113a0340 */
  push32(0x1139f03fu); f_113a0340();
  /* 1139f03f mov ecx, eax */
  ECX = (EAX);
  /* 1139f041 mov esi, edx */
  ESI = (EDX);
  /* 1139f043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f046 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f049 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1139f04a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f04c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f04e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1139f051 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 1139f054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f059 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139f05b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139f05e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f064 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1139f067 jmp 0x1139eff7 */
  goto L_1139eff7;
L_1139f069:;
  /* 1139f069 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f06d jne 0x1139f07e */
  if (!C.zf) goto L_1139f07e;
  /* 1139f06f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139f072 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139f074 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f077 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f07a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139f07c jmp 0x1139f084 */
  goto L_1139f084;
L_1139f07e:;
  /* 1139f07e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139f081 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_1139f084:;
  /* 1139f084 pop esi */
  ESI = (pop32());
  /* 1139f085 mov esp, ebp */
  ESP = (EBP);
  /* 1139f087 pop ebp */
  EBP = (pop32());
  /* 1139f088 ret  */
  ESPCHK(0x1139ef60u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1139f090 (129 bytes, 56 insns) */
void f_1139f090(void) {
  FTRACE(0x1139f090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f090 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1139f094 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1139f098 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1139f09e jne 0x1139f0dc */
  if (!C.zf) goto L_1139f0dc;
L_1139f0a0:;
  /* 1139f0a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139f0a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f0a4 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f0a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1139f0a8 je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f0aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f0ad jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f0af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1139f0b1 je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f0b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1139f0b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f0b9 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f0bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1139f0bd je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f0bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f0c2 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f0c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f0c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f0ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1139f0cc jne 0x1139f0a0 */
  if (!C.zf) goto L_1139f0a0;
  /* 1139f0ce mov edi, edi */
  EDI = (EDI);
L_1139f0d0:;
  /* 1139f0d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f0d2 ret  */
  ESPCHK(0x1139f090u, _esp0);
  ESP += 4; return;
  /* 1139f0d3 nop  */
  /* nop */
L_1139f0d4:;
  /* 1139f0d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f0d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1139f0d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1139f0d9 ret  */
  ESPCHK(0x1139f090u, _esp0);
  ESP += 4; return;
  /* 1139f0da mov edi, edi */
  EDI = (EDI);
L_1139f0dc:;
  /* 1139f0dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1139f0e2 je 0x1139f0f8 */
  if (C.zf) goto L_1139f0f8;
  /* 1139f0e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1139f0e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1139f0e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f0e9 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f0eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1139f0ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1139f0ee je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f0f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1139f0f6 je 0x1139f0a0 */
  if (C.zf) goto L_1139f0a0;
L_1139f0f8:;
  /* 1139f0f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1139f0fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f0fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f100 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f102 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1139f104 je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f106 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1139f109 jne 0x1139f0d4 */
  if (!C.zf) goto L_1139f0d4;
  /* 1139f10b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1139f10d je 0x1139f0d0 */
  if (C.zf) goto L_1139f0d0;
  /* 1139f10f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f112 jmp 0x1139f0a0 */
  goto L_1139f0a0;
}

/* FUN_1000f120 @ 0x1139f120 (46 bytes, 18 insns) */
void f_1139f120(void) {
  FTRACE(0x1139f120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f120 push ebp */
  push32((uint32_t)(EBP));
  /* 1139f121 mov ebp, esp */
  EBP = (ESP);
  /* 1139f123 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f124 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139f126 call 0x1139a010 */
  push32(0x1139f12bu); f_1139a010();
  /* 1139f12b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f12e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f131 push eax */
  push32((uint32_t)(EAX));
  /* 1139f132 call 0x1139f150 */
  push32(0x1139f137u); f_1139f150();
  /* 1139f137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f13a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139f13d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1139f13f call 0x1139a0b0 */
  push32(0x1139f144u); f_1139a0b0();
  /* 1139f144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f14a mov esp, ebp */
  ESP = (EBP);
  /* 1139f14c pop ebp */
  EBP = (pop32());
  /* 1139f14d ret  */
  ESPCHK(0x1139f120u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x1139f150 (198 bytes, 69 insns) */
void f_1139f150(void) {
  FTRACE(0x1139f150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f150 push ebp */
  push32((uint32_t)(EBP));
  /* 1139f151 mov ebp, esp */
  EBP = (ESP);
  /* 1139f153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f156 mov eax, dword ptr [0x113c2758] */
  EAX = (r32((uint32_t)(0x113c2758)));
  /* 1139f15b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139f15e cmp dword ptr [0x113c4260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c4260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f165 jne 0x1139f16e */
  if (!C.zf) goto L_1139f16e;
  /* 1139f167 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f169 jmp 0x1139f212 */
  goto L_1139f212;
L_1139f16e:;
  /* 1139f16e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f172 jne 0x1139f196 */
  if (!C.zf) goto L_1139f196;
  /* 1139f174 cmp dword ptr [0x113c2760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f17b je 0x1139f196 */
  if (C.zf) goto L_1139f196;
  /* 1139f17d call 0x113a03d0 */
  push32(0x1139f182u); f_113a03d0();
  /* 1139f182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f184 je 0x1139f18d */
  if (C.zf) goto L_1139f18d;
  /* 1139f186 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f188 jmp 0x1139f212 */
  goto L_1139f212;
L_1139f18d:;
  /* 1139f18d mov ecx, dword ptr [0x113c2758] */
  ECX = (r32((uint32_t)(0x113c2758)));
  /* 1139f193 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1139f196:;
  /* 1139f196 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f19a je 0x1139f210 */
  if (C.zf) goto L_1139f210;
  /* 1139f19c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f1a0 je 0x1139f210 */
  if (C.zf) goto L_1139f210;
  /* 1139f1a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f1a5 push edx */
  push32((uint32_t)(EDX));
  /* 1139f1a6 call 0x11399440 */
  push32(0x1139f1abu); f_11399440();
  /* 1139f1ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f1ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1139f1b1:;
  /* 1139f1b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f1b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f1b7 je 0x1139f210 */
  if (C.zf) goto L_1139f210;
  /* 1139f1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f1bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1139f1be push edx */
  push32((uint32_t)(EDX));
  /* 1139f1bf call 0x11399440 */
  push32(0x1139f1c4u); f_11399440();
  /* 1139f1c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f1c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f1ca jbe 0x1139f205 */
  if ((C.cf||C.zf)) goto L_1139f205;
  /* 1139f1cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f1cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139f1d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f1d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 1139f1d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f1db jne 0x1139f205 */
  if (!C.zf) goto L_1139f205;
  /* 1139f1dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f1e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f1e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f1e4 push edx */
  push32((uint32_t)(EDX));
  /* 1139f1e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f1e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1139f1ea push ecx */
  push32((uint32_t)(ECX));
  /* 1139f1eb call 0x113a0380 */
  push32(0x1139f1f0u); f_113a0380();
  /* 1139f1f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f1f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f1f5 jne 0x1139f205 */
  if (!C.zf) goto L_1139f205;
  /* 1139f1f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f1fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1139f1fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139f1ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 1139f203 jmp 0x1139f212 */
  goto L_1139f212;
L_1139f205:;
  /* 1139f205 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139f208 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f20b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1139f20e jmp 0x1139f1b1 */
  goto L_1139f1b1;
L_1139f210:;
  /* 1139f210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139f212:;
  /* 1139f212 mov esp, ebp */
  ESP = (EBP);
  /* 1139f214 pop ebp */
  EBP = (pop32());
  /* 1139f215 ret  */
  ESPCHK(0x1139f150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f220 @ 0x1139f220 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1139f220(void) {
  FTRACE(0x1139f220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f220 push ebp */
  push32((uint32_t)(EBP));
  /* 1139f221 mov ebp, esp */
  EBP = (ESP);
  /* 1139f223 push edi */
  push32((uint32_t)(EDI));
  /* 1139f224 push esi */
  push32((uint32_t)(ESI));
  /* 1139f225 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f228 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f22b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f22e mov eax, ecx */
  EAX = (ECX);
  /* 1139f230 mov edx, ecx */
  EDX = (ECX);
  /* 1139f232 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f234 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f236 jbe 0x1139f240 */
  if ((C.cf||C.zf)) goto L_1139f240;
  /* 1139f238 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f23a jb 0x1139f3b8 */
  if (C.cf) goto L_1139f3b8;
L_1139f240:;
  /* 1139f240 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1139f246 jne 0x1139f25c */
  if (!C.zf) goto L_1139f25c;
  /* 1139f248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f24b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f24e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f251 jb 0x1139f27c */
  if (C.cf) goto L_1139f27c;
  /* 1139f253 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f255 jmp dword ptr [edx*4 + 0x1139f368] */
  switch (EDX) {
    case 0: goto L_1139f378;
    case 1: goto L_1139f380;
    case 2: goto L_1139f38c;
    case 3: goto L_1139f3a0;
    default: x86_unimpl("switch@0x1139f255 out of table"); return;
  }
L_1139f25c:;
  /* 1139f25c mov eax, edi */
  EAX = (EDI);
  /* 1139f25e mov edx, 3 */
  EDX = (0x3u);
  /* 1139f263 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f266 jb 0x1139f274 */
  if (C.cf) goto L_1139f274;
  /* 1139f268 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1139f26b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f26d jmp dword ptr [eax*4 + 0x1139f280] */
  switch (EAX) {
    case 1: goto L_1139f290;
    case 2: goto L_1139f2bc;
    case 3: goto L_1139f2e0;
    default: x86_unimpl("switch@0x1139f26d out of table"); return;
  }
L_1139f274:;
  /* 1139f274 jmp dword ptr [ecx*4 + 0x1139f378] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1139f378)))); return;
  /* 1139f27b nop  */
  /* nop */
L_1139f27c:;
  /* 1139f27c jmp dword ptr [ecx*4 + 0x1139f2fc] */
  switch (ECX) {
    case 0: goto L_1139f35f;
    case 1: goto L_1139f34c;
    case 2: goto L_1139f344;
    case 3: goto L_1139f33c;
    case 4: goto L_1139f334;
    case 5: goto L_1139f32c;
    case 6: goto L_1139f324;
    case 7: goto L_1139f31c;
    default: x86_unimpl("switch@0x1139f27c out of table"); return;
  }
  /* 1139f283 nop  */
  /* nop */
L_1139f290:;
  /* 1139f290 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f292 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f294 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f296 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f299 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f29c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f29f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f2a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f2a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f2a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f2ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f2ae jb 0x1139f27c */
  if (C.cf) goto L_1139f27c;
  /* 1139f2b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f2b2 jmp dword ptr [edx*4 + 0x1139f368] */
  switch (EDX) {
    case 0: goto L_1139f378;
    case 1: goto L_1139f380;
    case 2: goto L_1139f38c;
    case 3: goto L_1139f3a0;
    default: x86_unimpl("switch@0x1139f2b2 out of table"); return;
  }
  /* 1139f2b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f2bc:;
  /* 1139f2bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f2be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f2c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f2c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f2c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f2c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f2cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f2ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f2d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f2d4 jb 0x1139f27c */
  if (C.cf) goto L_1139f27c;
  /* 1139f2d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f2d8 jmp dword ptr [edx*4 + 0x1139f368] */
  switch (EDX) {
    case 0: goto L_1139f378;
    case 1: goto L_1139f380;
    case 2: goto L_1139f38c;
    case 3: goto L_1139f3a0;
    default: x86_unimpl("switch@0x1139f2d8 out of table"); return;
  }
  /* 1139f2df nop  */
  /* nop */
L_1139f2e0:;
  /* 1139f2e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f2e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f2e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f2e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1139f2e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f2ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1139f2eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f2ee jb 0x1139f27c */
  if (C.cf) goto L_1139f27c;
  /* 1139f2f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f2f2 jmp dword ptr [edx*4 + 0x1139f368] */
  switch (EDX) {
    case 0: goto L_1139f378;
    case 1: goto L_1139f380;
    case 2: goto L_1139f38c;
    case 3: goto L_1139f3a0;
    default: x86_unimpl("switch@0x1139f2f2 out of table"); return;
  }
  /* 1139f2f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f31c:;
  /* 1139f31c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1139f320 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1139f324:;
  /* 1139f324 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1139f328 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1139f32c:;
  /* 1139f32c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1139f330 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1139f334:;
  /* 1139f334 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1139f338 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1139f33c:;
  /* 1139f33c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1139f340 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1139f344:;
  /* 1139f344 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1139f348 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1139f34c:;
  /* 1139f34c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1139f350 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1139f354 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1139f35b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f35d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1139f35f:;
  /* 1139f35f jmp dword ptr [edx*4 + 0x1139f368] */
  switch (EDX) {
    case 0: goto L_1139f378;
    case 1: goto L_1139f380;
    case 2: goto L_1139f38c;
    case 3: goto L_1139f3a0;
    default: x86_unimpl("switch@0x1139f35f out of table"); return;
  }
  /* 1139f366 mov edi, edi */
  EDI = (EDI);
L_1139f378:;
  /* 1139f378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f37b pop esi */
  ESI = (pop32());
  /* 1139f37c pop edi */
  EDI = (pop32());
  /* 1139f37d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f37e ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f37f nop  */
  /* nop */
L_1139f380:;
  /* 1139f380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f387 pop esi */
  ESI = (pop32());
  /* 1139f388 pop edi */
  EDI = (pop32());
  /* 1139f389 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f38a ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f38b nop  */
  /* nop */
L_1139f38c:;
  /* 1139f38c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f38e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f390 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f393 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f399 pop esi */
  ESI = (pop32());
  /* 1139f39a pop edi */
  EDI = (pop32());
  /* 1139f39b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f39c ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f39d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f3a0:;
  /* 1139f3a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1139f3a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1139f3a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f3a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f3aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f3ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f3b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f3b3 pop esi */
  ESI = (pop32());
  /* 1139f3b4 pop edi */
  EDI = (pop32());
  /* 1139f3b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f3b6 ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f3b7 nop  */
  /* nop */
L_1139f3b8:;
  /* 1139f3b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1139f3bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1139f3c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1139f3c6 jne 0x1139f3ec */
  if (!C.zf) goto L_1139f3ec;
  /* 1139f3c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f3cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f3ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f3d1 jb 0x1139f3e0 */
  if (C.cf) goto L_1139f3e0;
  /* 1139f3d3 std  */
  C.df=1;
  /* 1139f3d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f3d6 cld  */
  C.df=0;
  /* 1139f3d7 jmp dword ptr [edx*4 + 0x1139f500] */
  switch (EDX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f3d7 out of table"); return;
  }
  /* 1139f3de mov edi, edi */
  EDI = (EDI);
L_1139f3e0:;
  /* 1139f3e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139f3e2 jmp dword ptr [ecx*4 + 0x1139f4b0] */
  switch (ECX) {
    case 0: goto L_1139f4f7;
    default: x86_unimpl("switch@0x1139f3e2 out of table"); return;
  }
  /* 1139f3e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f3ec:;
  /* 1139f3ec mov eax, edi */
  EAX = (EDI);
  /* 1139f3ee mov edx, 3 */
  EDX = (0x3u);
  /* 1139f3f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f3f6 jb 0x1139f404 */
  if (C.cf) goto L_1139f404;
  /* 1139f3f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1139f3fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f3fd jmp dword ptr [eax*4 + 0x1139f408] */
  switch (EAX) {
    case 1: goto L_1139f418;
    case 2: goto L_1139f438;
    case 3: goto L_1139f460;
    default: x86_unimpl("switch@0x1139f3fd out of table"); return;
  }
L_1139f404:;
  /* 1139f404 jmp dword ptr [ecx*4 + 0x1139f500] */
  switch (ECX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f404 out of table"); return;
  }
  /* 1139f40b nop  */
  /* nop */
L_1139f418:;
  /* 1139f418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f41b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f41d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f420 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1139f421 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f424 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1139f425 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f428 jb 0x1139f3e0 */
  if (C.cf) goto L_1139f3e0;
  /* 1139f42a std  */
  C.df=1;
  /* 1139f42b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f42d cld  */
  C.df=0;
  /* 1139f42e jmp dword ptr [edx*4 + 0x1139f500] */
  switch (EDX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f42e out of table"); return;
  }
  /* 1139f435 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f438:;
  /* 1139f438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f43b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f43d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f440 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f443 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f446 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f449 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f44c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f44f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f452 jb 0x1139f3e0 */
  if (C.cf) goto L_1139f3e0;
  /* 1139f454 std  */
  C.df=1;
  /* 1139f455 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f457 cld  */
  C.df=0;
  /* 1139f458 jmp dword ptr [edx*4 + 0x1139f500] */
  switch (EDX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f458 out of table"); return;
  }
  /* 1139f45f nop  */
  /* nop */
L_1139f460:;
  /* 1139f460 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f463 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1139f465 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f468 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f46b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f46e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f471 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1139f474 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f477 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f47a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f47d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f480 jb 0x1139f3e0 */
  if (C.cf) goto L_1139f3e0;
  /* 1139f486 std  */
  C.df=1;
  /* 1139f487 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1139f489 cld  */
  C.df=0;
  /* 1139f48a jmp dword ptr [edx*4 + 0x1139f500] */
  switch (EDX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f48a out of table"); return;
  }
  /* 1139f491 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1139f494 mov ah, 0xf4 */
  AH = (0xf4u);
  /* 1139f496 cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f498 mov esp, 0xc41139f4 */
  ESP = (0xc41139f4u);
  /* 1139f49d hlt  */
  x86_unimpl("hlt @ 0x1139f49d");
  /* 1139f49e cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f4a0 int3  */
  x86_unimpl("int3 @ 0x1139f4a0");
  /* 1139f4a1 hlt  */
  x86_unimpl("hlt @ 0x1139f4a1");
  /* 1139f4a2 cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f4a4 aam 0xf4 */
  x86_unimpl("aam @ 0x1139f4a4");
  /* 1139f4a6 cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f4a8 fdivr st(4), st(0) */
  FPU_ST(4) = FPU_ST(0) / FPU_ST(4);
  /* 1139f4aa cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f4ac in al, 0xf4 */
  x86_unimpl("in @ 0x1139f4ac");
  /* 1139f4ae cmp dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f4b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1139f4b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1139f4bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1139f4c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1139f4c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1139f4c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1139f4cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1139f4d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1139f4d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1139f4d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1139f4dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1139f4e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1139f4e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1139f4e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1139f4ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1139f4f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f4f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1139f4f7:;
  /* 1139f4f7 jmp dword ptr [edx*4 + 0x1139f500] */
  switch (EDX) {
    case 0: goto L_1139f510;
    case 1: goto L_1139f518;
    case 2: goto L_1139f528;
    case 3: goto L_1139f53c;
    default: x86_unimpl("switch@0x1139f4f7 out of table"); return;
  }
  /* 1139f4fe mov edi, edi */
  EDI = (EDI);
L_1139f510:;
  /* 1139f510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f513 pop esi */
  ESI = (pop32());
  /* 1139f514 pop edi */
  EDI = (pop32());
  /* 1139f515 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f516 ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f517 nop  */
  /* nop */
L_1139f518:;
  /* 1139f518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f51b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f51e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f521 pop esi */
  ESI = (pop32());
  /* 1139f522 pop edi */
  EDI = (pop32());
  /* 1139f523 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f524 ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f525 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1139f528:;
  /* 1139f528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f52b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f52e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f531 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f537 pop esi */
  ESI = (pop32());
  /* 1139f538 pop edi */
  EDI = (pop32());
  /* 1139f539 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f53a ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
  /* 1139f53b nop  */
  /* nop */
L_1139f53c:;
  /* 1139f53c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1139f53f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1139f542 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1139f545 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1139f548 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1139f54b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1139f54e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f551 pop esi */
  ESI = (pop32());
  /* 1139f552 pop edi */
  EDI = (pop32());
  /* 1139f553 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1139f554 ret  */
  ESPCHK(0x1139f220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f560 @ 0x1139f560 (421 bytes, 148 insns) */
void f_1139f560(void) {
  FTRACE(0x1139f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1139f561 mov ebp, esp */
  EBP = (ESP);
  /* 1139f563 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1139f565 push 0x113be390 */
  push32((uint32_t)(0x113be390u));
  /* 1139f56a push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 1139f56f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1139f575 push eax */
  push32((uint32_t)(EAX));
  /* 1139f576 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1139f57d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f580 push ebx */
  push32((uint32_t)(EBX));
  /* 1139f581 push esi */
  push32((uint32_t)(ESI));
  /* 1139f582 push edi */
  push32((uint32_t)(EDI));
  /* 1139f583 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1139f586 cmp dword ptr [0x113c2a08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f58d jne 0x1139f5de */
  if (!C.zf) goto L_1139f5de;
  /* 1139f58f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1139f592 push eax */
  push32((uint32_t)(EAX));
  /* 1139f593 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f595 push 0x113be388 */
  push32((uint32_t)(0x113be388u));
  /* 1139f59a push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f59c call dword ptr [0x113c5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5328))), 0x1139f5a2u);
  /* 1139f5a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f5a4 je 0x1139f5b2 */
  if (C.zf) goto L_1139f5b2;
  /* 1139f5a6 mov dword ptr [0x113c2a08], 1 */
  w32((uint32_t)(0x113c2a08), (0x1u));
  /* 1139f5b0 jmp 0x1139f5de */
  goto L_1139f5de;
L_1139f5b2:;
  /* 1139f5b2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1139f5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f5b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f5b8 push 0x113be384 */
  push32((uint32_t)(0x113be384u));
  /* 1139f5bd push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f5bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f5c1 call dword ptr [0x113c532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c532c))), 0x1139f5c7u);
  /* 1139f5c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f5c9 je 0x1139f5d7 */
  if (C.zf) goto L_1139f5d7;
  /* 1139f5cb mov dword ptr [0x113c2a08], 2 */
  w32((uint32_t)(0x113c2a08), (0x2u));
  /* 1139f5d5 jmp 0x1139f5de */
  goto L_1139f5de;
L_1139f5d7:;
  /* 1139f5d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f5d9 jmp 0x1139f708 */
  goto L_1139f708;
L_1139f5de:;
  /* 1139f5de cmp dword ptr [0x113c2a08], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a08))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f5e5 jne 0x1139f615 */
  if (!C.zf) goto L_1139f615;
  /* 1139f5e7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f5eb jne 0x1139f5f6 */
  if (!C.zf) goto L_1139f5f6;
  /* 1139f5ed mov edx, dword ptr [0x113c29f0] */
  EDX = (r32((uint32_t)(0x113c29f0)));
  /* 1139f5f3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1139f5f6:;
  /* 1139f5f6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f5f9 push eax */
  push32((uint32_t)(EAX));
  /* 1139f5fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f5fd push ecx */
  push32((uint32_t)(ECX));
  /* 1139f5fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f601 push edx */
  push32((uint32_t)(EDX));
  /* 1139f602 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f605 push eax */
  push32((uint32_t)(EAX));
  /* 1139f606 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139f609 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f60a call dword ptr [0x113c532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c532c))), 0x1139f610u);
  /* 1139f610 jmp 0x1139f708 */
  goto L_1139f708;
L_1139f615:;
  /* 1139f615 cmp dword ptr [0x113c2a08], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a08))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f61c jne 0x1139f706 */
  if (!C.zf) goto L_1139f706;
  /* 1139f622 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f626 jne 0x1139f631 */
  if (!C.zf) goto L_1139f631;
  /* 1139f628 mov edx, dword ptr [0x113c2a00] */
  EDX = (r32((uint32_t)(0x113c2a00)));
  /* 1139f62e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1139f631:;
  /* 1139f631 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f633 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f635 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f638 push eax */
  push32((uint32_t)(EAX));
  /* 1139f639 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f63c push ecx */
  push32((uint32_t)(ECX));
  /* 1139f63d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1139f640 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139f642 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f644 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f647 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f64a push edx */
  push32((uint32_t)(EDX));
  /* 1139f64b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139f64e push eax */
  push32((uint32_t)(EAX));
  /* 1139f64f call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x1139f655u);
  /* 1139f655 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1139f658 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f65c jne 0x1139f665 */
  if (!C.zf) goto L_1139f665;
  /* 1139f65e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f660 jmp 0x1139f708 */
  goto L_1139f708;
L_1139f665:;
  /* 1139f665 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139f66c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f66f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1139f671 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f674 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1139f676 call 0x113997b0 */
  push32(0x1139f67bu); f_113997b0();
  /* 1139f67b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1139f67e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1139f681 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139f684 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1139f687 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f68a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1139f68c push edx */
  push32((uint32_t)(EDX));
  /* 1139f68d push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f68f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f692 push eax */
  push32((uint32_t)(EAX));
  /* 1139f693 call 0x1139acc0 */
  push32(0x1139f698u); f_1139acc0();
  /* 1139f698 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f69b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1139f6a2 jmp 0x1139f6bb */
  goto L_1139f6bb;
  /* 1139f6a4 mov eax, 1 */
  EAX = (0x1u);
  /* 1139f6a9 ret  */
  ESPCHK(0x1139f560u, _esp0);
  ESP += 4; return;
  /* 1139f6aa mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1139f6ad mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139f6b4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1139f6bb:;
  /* 1139f6bb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f6bf jne 0x1139f6c5 */
  if (!C.zf) goto L_1139f6c5;
  /* 1139f6c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f6c3 jmp 0x1139f708 */
  goto L_1139f708;
L_1139f6c5:;
  /* 1139f6c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f6c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f6c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f6cc push edx */
  push32((uint32_t)(EDX));
  /* 1139f6cd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f6d0 push eax */
  push32((uint32_t)(EAX));
  /* 1139f6d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f6d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f6d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139f6da push edx */
  push32((uint32_t)(EDX));
  /* 1139f6db call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x1139f6e1u);
  /* 1139f6e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139f6e4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f6e8 jne 0x1139f6ee */
  if (!C.zf) goto L_1139f6ee;
  /* 1139f6ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f6ec jmp 0x1139f708 */
  goto L_1139f708;
L_1139f6ee:;
  /* 1139f6ee mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f6f1 push eax */
  push32((uint32_t)(EAX));
  /* 1139f6f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139f6f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f6f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f6f9 push edx */
  push32((uint32_t)(EDX));
  /* 1139f6fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f6fd push eax */
  push32((uint32_t)(EAX));
  /* 1139f6fe call dword ptr [0x113c5328] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5328))), 0x1139f704u);
  /* 1139f704 jmp 0x1139f708 */
  goto L_1139f708;
L_1139f706:;
  /* 1139f706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139f708:;
  /* 1139f708 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1139f70b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139f70e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1139f715 pop edi */
  EDI = (pop32());
  /* 1139f716 pop esi */
  ESI = (pop32());
  /* 1139f717 pop ebx */
  EBX = (pop32());
  /* 1139f718 mov esp, ebp */
  ESP = (EBP);
  /* 1139f71a pop ebp */
  EBP = (pop32());
  /* 1139f71b ret  */
  ESPCHK(0x1139f560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x1139f720 (727 bytes, 263 insns) */
void f_1139f720(void) {
  FTRACE(0x1139f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139f720 push ebp */
  push32((uint32_t)(EBP));
  /* 1139f721 mov ebp, esp */
  EBP = (ESP);
  /* 1139f723 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1139f725 push 0x113be3a0 */
  push32((uint32_t)(0x113be3a0u));
  /* 1139f72a push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 1139f72f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1139f735 push eax */
  push32((uint32_t)(EAX));
  /* 1139f736 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1139f73d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f740 push ebx */
  push32((uint32_t)(EBX));
  /* 1139f741 push esi */
  push32((uint32_t)(ESI));
  /* 1139f742 push edi */
  push32((uint32_t)(EDI));
  /* 1139f743 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1139f746 cmp dword ptr [0x113c2a0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f74d jne 0x1139f7a6 */
  if (!C.zf) goto L_1139f7a6;
  /* 1139f74f push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f751 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f753 push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f755 push 0x113be388 */
  push32((uint32_t)(0x113be388u));
  /* 1139f75a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139f75f push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f761 call dword ptr [0x113c5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5320))), 0x1139f767u);
  /* 1139f767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f769 je 0x1139f777 */
  if (C.zf) goto L_1139f777;
  /* 1139f76b mov dword ptr [0x113c2a0c], 1 */
  w32((uint32_t)(0x113c2a0c), (0x1u));
  /* 1139f775 jmp 0x1139f7a6 */
  goto L_1139f7a6;
L_1139f777:;
  /* 1139f777 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f77b push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f77d push 0x113be384 */
  push32((uint32_t)(0x113be384u));
  /* 1139f782 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1139f787 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f789 call dword ptr [0x113c5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5324))), 0x1139f78fu);
  /* 1139f78f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f791 je 0x1139f79f */
  if (C.zf) goto L_1139f79f;
  /* 1139f793 mov dword ptr [0x113c2a0c], 2 */
  w32((uint32_t)(0x113c2a0c), (0x2u));
  /* 1139f79d jmp 0x1139f7a6 */
  goto L_1139f7a6;
L_1139f79f:;
  /* 1139f79f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f7a1 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f7a6:;
  /* 1139f7a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f7aa jle 0x1139f7bf */
  if ((C.zf||C.sf!=C.of)) goto L_1139f7bf;
  /* 1139f7ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f7af push eax */
  push32((uint32_t)(EAX));
  /* 1139f7b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f7b4 call 0x1139fa30 */
  push32(0x1139f7b9u); f_1139fa30();
  /* 1139f7b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f7bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1139f7bf:;
  /* 1139f7bf cmp dword ptr [0x113c2a0c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a0c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f7c6 jne 0x1139f7eb */
  if (!C.zf) goto L_1139f7eb;
  /* 1139f7c8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139f7cb push edx */
  push32((uint32_t)(EDX));
  /* 1139f7cc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139f7cf push eax */
  push32((uint32_t)(EAX));
  /* 1139f7d0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f7d4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f7d7 push edx */
  push32((uint32_t)(EDX));
  /* 1139f7d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f7db push eax */
  push32((uint32_t)(EAX));
  /* 1139f7dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f7df push ecx */
  push32((uint32_t)(ECX));
  /* 1139f7e0 call dword ptr [0x113c5324] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5324))), 0x1139f7e6u);
  /* 1139f7e6 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f7eb:;
  /* 1139f7eb cmp dword ptr [0x113c2a0c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a0c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f7f2 jne 0x1139fa0f */
  if (!C.zf) goto L_1139fa0f;
  /* 1139f7f8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f7fc jne 0x1139f807 */
  if (!C.zf) goto L_1139f807;
  /* 1139f7fe mov edx, dword ptr [0x113c2a00] */
  EDX = (r32((uint32_t)(0x113c2a00)));
  /* 1139f804 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1139f807:;
  /* 1139f807 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f80b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f80e push eax */
  push32((uint32_t)(EAX));
  /* 1139f80f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f812 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f813 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1139f816 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1139f818 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139f81a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f81d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f820 push edx */
  push32((uint32_t)(EDX));
  /* 1139f821 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1139f824 push eax */
  push32((uint32_t)(EAX));
  /* 1139f825 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x1139f82bu);
  /* 1139f82b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1139f82e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f832 jne 0x1139f83b */
  if (!C.zf) goto L_1139f83b;
  /* 1139f834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f836 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f83b:;
  /* 1139f83b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1139f842 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139f845 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1139f847 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f84a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1139f84c call 0x113997b0 */
  push32(0x1139f851u); f_113997b0();
  /* 1139f851 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1139f854 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1139f857 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1139f85a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1139f85d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1139f864 jmp 0x1139f87d */
  goto L_1139f87d;
  /* 1139f866 mov eax, 1 */
  EAX = (0x1u);
  /* 1139f86b ret  */
  ESPCHK(0x1139f720u, _esp0);
  ESP += 4; return;
  /* 1139f86c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1139f86f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1139f876 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1139f87d:;
  /* 1139f87d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f881 jne 0x1139f88a */
  if (!C.zf) goto L_1139f88a;
  /* 1139f883 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f885 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f88a:;
  /* 1139f88a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139f88d push edx */
  push32((uint32_t)(EDX));
  /* 1139f88e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f891 push eax */
  push32((uint32_t)(EAX));
  /* 1139f892 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1139f895 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f896 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139f899 push edx */
  push32((uint32_t)(EDX));
  /* 1139f89a push 1 */
  push32((uint32_t)(0x1u));
  /* 1139f89c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1139f89f push eax */
  push32((uint32_t)(EAX));
  /* 1139f8a0 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x1139f8a6u);
  /* 1139f8a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f8a8 jne 0x1139f8b1 */
  if (!C.zf) goto L_1139f8b1;
  /* 1139f8aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f8ac jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f8b1:;
  /* 1139f8b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f8b5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139f8b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f8b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f8bc push edx */
  push32((uint32_t)(EDX));
  /* 1139f8bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f8c0 push eax */
  push32((uint32_t)(EAX));
  /* 1139f8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f8c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f8c5 call dword ptr [0x113c5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5320))), 0x1139f8cbu);
  /* 1139f8cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139f8ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f8d2 jne 0x1139f8db */
  if (!C.zf) goto L_1139f8db;
  /* 1139f8d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f8d6 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f8db:;
  /* 1139f8db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f8de and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1139f8e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139f8e6 je 0x1139f92b */
  if (C.zf) goto L_1139f92b;
  /* 1139f8e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f8ec je 0x1139f926 */
  if (C.zf) goto L_1139f926;
  /* 1139f8ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139f8f1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f8f4 jle 0x1139f8fd */
  if ((C.zf||C.sf!=C.of)) goto L_1139f8fd;
  /* 1139f8f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f8f8 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f8fd:;
  /* 1139f8fd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139f900 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f901 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139f904 push edx */
  push32((uint32_t)(EDX));
  /* 1139f905 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139f908 push eax */
  push32((uint32_t)(EAX));
  /* 1139f909 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f90c push ecx */
  push32((uint32_t)(ECX));
  /* 1139f90d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f910 push edx */
  push32((uint32_t)(EDX));
  /* 1139f911 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f914 push eax */
  push32((uint32_t)(EAX));
  /* 1139f915 call dword ptr [0x113c5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5320))), 0x1139f91bu);
  /* 1139f91b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f91d jne 0x1139f926 */
  if (!C.zf) goto L_1139f926;
  /* 1139f91f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f921 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f926:;
  /* 1139f926 jmp 0x1139fa0a */
  goto L_1139fa0a;
L_1139f92b:;
  /* 1139f92b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139f92e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1139f931 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1139f938 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139f93b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1139f93d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139f940 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1139f942 call 0x113997b0 */
  push32(0x1139f947u); f_113997b0();
  /* 1139f947 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1139f94a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1139f94d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1139f950 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1139f953 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1139f95a jmp 0x1139f973 */
  goto L_1139f973;
  /* 1139f95c mov eax, 1 */
  EAX = (0x1u);
  /* 1139f961 ret  */
  ESPCHK(0x1139f720u, _esp0);
  ESP += 4; return;
  /* 1139f962 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1139f965 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1139f96c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1139f973:;
  /* 1139f973 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f977 jne 0x1139f980 */
  if (!C.zf) goto L_1139f980;
  /* 1139f979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f97b jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f980:;
  /* 1139f980 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139f983 push eax */
  push32((uint32_t)(EAX));
  /* 1139f984 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f987 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f988 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1139f98b push edx */
  push32((uint32_t)(EDX));
  /* 1139f98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1139f98f push eax */
  push32((uint32_t)(EAX));
  /* 1139f990 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139f993 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f994 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139f997 push edx */
  push32((uint32_t)(EDX));
  /* 1139f998 call dword ptr [0x113c5320] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5320))), 0x1139f99eu);
  /* 1139f99e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139f9a0 jne 0x1139f9a6 */
  if (!C.zf) goto L_1139f9a6;
  /* 1139f9a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f9a4 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f9a6:;
  /* 1139f9a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f9aa jne 0x1139f9da */
  if (!C.zf) goto L_1139f9da;
  /* 1139f9ac push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9ae push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9b4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139f9b7 push eax */
  push32((uint32_t)(EAX));
  /* 1139f9b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f9bb push ecx */
  push32((uint32_t)(ECX));
  /* 1139f9bc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1139f9c1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1139f9c4 push edx */
  push32((uint32_t)(EDX));
  /* 1139f9c5 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x1139f9cbu);
  /* 1139f9cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139f9ce cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139f9d2 jne 0x1139f9d8 */
  if (!C.zf) goto L_1139f9d8;
  /* 1139f9d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139f9d6 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139f9d8:;
  /* 1139f9d8 jmp 0x1139fa0a */
  goto L_1139fa0a;
L_1139f9da:;
  /* 1139f9da push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9dc push 0 */
  push32((uint32_t)(0x0u));
  /* 1139f9de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1139f9e1 push eax */
  push32((uint32_t)(EAX));
  /* 1139f9e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1139f9e5 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f9e6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1139f9e9 push edx */
  push32((uint32_t)(EDX));
  /* 1139f9ea mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1139f9ed push eax */
  push32((uint32_t)(EAX));
  /* 1139f9ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1139f9f3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1139f9f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1139f9f7 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x1139f9fdu);
  /* 1139f9fd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1139fa00 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fa04 jne 0x1139fa0a */
  if (!C.zf) goto L_1139fa0a;
  /* 1139fa06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139fa08 jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139fa0a:;
  /* 1139fa0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1139fa0d jmp 0x1139fa11 */
  goto L_1139fa11;
L_1139fa0f:;
  /* 1139fa0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1139fa11:;
  /* 1139fa11 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1139fa14 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139fa17 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1139fa1e pop edi */
  EDI = (pop32());
  /* 1139fa1f pop esi */
  ESI = (pop32());
  /* 1139fa20 pop ebx */
  EBX = (pop32());
  /* 1139fa21 mov esp, ebp */
  ESP = (EBP);
  /* 1139fa23 pop ebp */
  EBP = (pop32());
  /* 1139fa24 ret  */
  ESPCHK(0x1139f720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa30 @ 0x1139fa30 (80 bytes, 32 insns) */
void f_1139fa30(void) {
  FTRACE(0x1139fa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fa31 mov ebp, esp */
  EBP = (ESP);
  /* 1139fa33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fa36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fa39 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139fa3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fa3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1139fa42:;
  /* 1139fa42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fa45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fa48 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fa4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139fa4e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139fa50 je 0x1139fa67 */
  if (C.zf) goto L_1139fa67;
  /* 1139fa52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fa55 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139fa58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139fa5a je 0x1139fa67 */
  if (C.zf) goto L_1139fa67;
  /* 1139fa5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fa5f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fa62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139fa65 jmp 0x1139fa42 */
  goto L_1139fa42;
L_1139fa67:;
  /* 1139fa67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fa6a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139fa6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1139fa6f jne 0x1139fa79 */
  if (!C.zf) goto L_1139fa79;
  /* 1139fa71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fa74 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fa77 jmp 0x1139fa7c */
  goto L_1139fa7c;
L_1139fa79:;
  /* 1139fa79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1139fa7c:;
  /* 1139fa7c mov esp, ebp */
  ESP = (EBP);
  /* 1139fa7e pop ebp */
  EBP = (pop32());
  /* 1139fa7f ret  */
  ESPCHK(0x1139fa30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa80 @ 0x1139fa80 (130 bytes, 43 insns) */
void f_1139fa80(void) {
  FTRACE(0x1139fa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fa80 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fa81 mov ebp, esp */
  EBP = (ESP);
  /* 1139fa83 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fa84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fa87 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fa8d jae 0x1139fab1 */
  if (!C.cf) goto L_1139fab1;
  /* 1139fa8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fa92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1139fa95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fa98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1139fa9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fa9e mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139faa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1139faaa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139faad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139faaf jne 0x1139facc */
  if (!C.zf) goto L_1139facc;
L_1139fab1:;
  /* 1139fab1 call 0x1139ee20 */
  push32(0x1139fab6u); f_1139ee20();
  /* 1139fab6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1139fabc call 0x1139ee30 */
  push32(0x1139fac1u); f_1139ee30();
  /* 1139fac1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1139fac7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139faca jmp 0x1139fafe */
  goto L_1139fafe;
L_1139facc:;
  /* 1139facc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139facf push edx */
  push32((uint32_t)(EDX));
  /* 1139fad0 call 0x113a0b60 */
  push32(0x1139fad5u); f_113a0b60();
  /* 1139fad5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fad8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139fadb push eax */
  push32((uint32_t)(EAX));
  /* 1139fadc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fadf push ecx */
  push32((uint32_t)(ECX));
  /* 1139fae0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fae3 push edx */
  push32((uint32_t)(EDX));
  /* 1139fae4 call 0x1139fb10 */
  push32(0x1139fae9u); f_1139fb10();
  /* 1139fae9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139faec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139faef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139faf2 push eax */
  push32((uint32_t)(EAX));
  /* 1139faf3 call 0x113a0bf0 */
  push32(0x1139faf8u); f_113a0bf0();
  /* 1139faf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fafb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139fafe:;
  /* 1139fafe mov esp, ebp */
  ESP = (EBP);
  /* 1139fb00 pop ebp */
  EBP = (pop32());
  /* 1139fb01 ret  */
  ESPCHK(0x1139fa80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x1139fb10 (178 bytes, 56 insns) */
void f_1139fb10(void) {
  FTRACE(0x1139fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fb11 mov ebp, esp */
  EBP = (ESP);
  /* 1139fb13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fb19 push eax */
  push32((uint32_t)(EAX));
  /* 1139fb1a call 0x113a09e0 */
  push32(0x1139fb1fu); f_113a09e0();
  /* 1139fb1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fb22 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139fb25 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fb29 jne 0x1139fb3e */
  if (!C.zf) goto L_1139fb3e;
  /* 1139fb2b call 0x1139ee20 */
  push32(0x1139fb30u); f_1139ee20();
  /* 1139fb30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1139fb36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fb39 jmp 0x1139fbbe */
  goto L_1139fbbe;
L_1139fb3e:;
  /* 1139fb3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139fb41 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fb42 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139fb44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fb47 push edx */
  push32((uint32_t)(EDX));
  /* 1139fb48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139fb4b push eax */
  push32((uint32_t)(EAX));
  /* 1139fb4c call dword ptr [0x113c531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c531c))), 0x1139fb52u);
  /* 1139fb52 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1139fb55 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fb59 jne 0x1139fb66 */
  if (!C.zf) goto L_1139fb66;
  /* 1139fb5b call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x1139fb61u);
  /* 1139fb61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139fb64 jmp 0x1139fb6d */
  goto L_1139fb6d;
L_1139fb66:;
  /* 1139fb66 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1139fb6d:;
  /* 1139fb6d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fb71 je 0x1139fb84 */
  if (C.zf) goto L_1139fb84;
  /* 1139fb73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fb76 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fb77 call 0x1139ed80 */
  push32(0x1139fb7cu); f_1139ed80();
  /* 1139fb7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fb7f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fb82 jmp 0x1139fbbe */
  goto L_1139fbbe;
L_1139fb84:;
  /* 1139fb84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fb87 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1139fb8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fb8d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fb90 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fb93 mov ecx, dword ptr [edx*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 1139fb9a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1139fb9e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1139fba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fba4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1139fba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fbaa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1139fbad imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fbb0 mov eax, dword ptr [eax*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 1139fbb7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1139fbbb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1139fbbe:;
  /* 1139fbbe mov esp, ebp */
  ESP = (EBP);
  /* 1139fbc0 pop ebp */
  EBP = (pop32());
  /* 1139fbc1 ret  */
  ESPCHK(0x1139fb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x1139fbd0 (130 bytes, 43 insns) */
void f_1139fbd0(void) {
  FTRACE(0x1139fbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fbd1 mov ebp, esp */
  EBP = (ESP);
  /* 1139fbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fbd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fbd7 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fbdd jae 0x1139fc01 */
  if (!C.cf) goto L_1139fc01;
  /* 1139fbdf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fbe2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1139fbe5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fbe8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1139fbeb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fbee mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139fbf5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1139fbfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1139fbfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139fbff jne 0x1139fc1c */
  if (!C.zf) goto L_1139fc1c;
L_1139fc01:;
  /* 1139fc01 call 0x1139ee20 */
  push32(0x1139fc06u); f_1139ee20();
  /* 1139fc06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1139fc0c call 0x1139ee30 */
  push32(0x1139fc11u); f_1139ee30();
  /* 1139fc11 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1139fc17 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fc1a jmp 0x1139fc4e */
  goto L_1139fc4e;
L_1139fc1c:;
  /* 1139fc1c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fc1f push edx */
  push32((uint32_t)(EDX));
  /* 1139fc20 call 0x113a0b60 */
  push32(0x1139fc25u); f_113a0b60();
  /* 1139fc25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fc28 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139fc2b push eax */
  push32((uint32_t)(EAX));
  /* 1139fc2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fc2f push ecx */
  push32((uint32_t)(ECX));
  /* 1139fc30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fc33 push edx */
  push32((uint32_t)(EDX));
  /* 1139fc34 call 0x1139fc60 */
  push32(0x1139fc39u); f_1139fc60();
  /* 1139fc39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fc3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139fc3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fc42 push eax */
  push32((uint32_t)(EAX));
  /* 1139fc43 call 0x113a0bf0 */
  push32(0x1139fc48u); f_113a0bf0();
  /* 1139fc48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fc4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1139fc4e:;
  /* 1139fc4e mov esp, ebp */
  ESP = (EBP);
  /* 1139fc50 pop ebp */
  EBP = (pop32());
  /* 1139fc51 ret  */
  ESPCHK(0x1139fbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x1139fc60 (627 bytes, 182 insns) */
void f_1139fc60(void) {
  FTRACE(0x1139fc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fc61 mov ebp, esp */
  EBP = (ESP);
  /* 1139fc63 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fc69 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1139fc70 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139fc73 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1139fc79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fc7d jne 0x1139fc86 */
  if (!C.zf) goto L_1139fc86;
  /* 1139fc7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139fc81 jmp 0x1139fecf */
  goto L_1139fecf;
L_1139fc86:;
  /* 1139fc86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fc89 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1139fc8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fc8f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1139fc92 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fc95 mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139fc9c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1139fca1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1139fca4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1139fca6 je 0x1139fcb8 */
  if (C.zf) goto L_1139fcb8;
  /* 1139fca8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1139fcaa push 0 */
  push32((uint32_t)(0x0u));
  /* 1139fcac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fcaf push edx */
  push32((uint32_t)(EDX));
  /* 1139fcb0 call 0x1139fb10 */
  push32(0x1139fcb5u); f_1139fb10();
  /* 1139fcb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139fcb8:;
  /* 1139fcb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fcbb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1139fcbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fcc1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1139fcc4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fcc7 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 1139fcce movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1139fcd3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1139fcd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139fcda je 0x1139fdec */
  if (C.zf) goto L_1139fdec;
  /* 1139fce0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1139fce6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1139fced:;
  /* 1139fced mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fcf0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fcf3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fcf6 jae 0x1139fdea */
  if (!C.cf) goto L_1139fdea;
  /* 1139fcfc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1139fd02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1139fd05:;
  /* 1139fd05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd08 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1139fd0e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fd10 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fd16 jge 0x1139fd77 */
  if ((C.sf==C.of)) goto L_1139fd77;
  /* 1139fd18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fd1b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fd1e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fd21 jae 0x1139fd77 */
  if (!C.cf) goto L_1139fd77;
  /* 1139fd23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fd26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1139fd28 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1139fd2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139fd31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fd34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1139fd37 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1139fd3e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fd41 jne 0x1139fd61 */
  if (!C.zf) goto L_1139fd61;
  /* 1139fd43 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1139fd49 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fd4c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1139fd52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd55 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1139fd58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd5b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fd5e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1139fd61:;
  /* 1139fd61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd64 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1139fd6a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1139fd6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fd72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1139fd75 jmp 0x1139fd05 */
  goto L_1139fd05;
L_1139fd77:;
  /* 1139fd77 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139fd79 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1139fd7f push edx */
  push32((uint32_t)(EDX));
  /* 1139fd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fd83 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1139fd89 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fd8b push eax */
  push32((uint32_t)(EAX));
  /* 1139fd8c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1139fd92 push edx */
  push32((uint32_t)(EDX));
  /* 1139fd93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fd96 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1139fd99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fd9c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1139fd9f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fda2 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 1139fda9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1139fdac push eax */
  push32((uint32_t)(EAX));
  /* 1139fdad call dword ptr [0x113c53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b4))), 0x1139fdb3u);
  /* 1139fdb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139fdb5 je 0x1139fdda */
  if (C.zf) goto L_1139fdda;
  /* 1139fdb7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139fdba add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139fdc0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1139fdc3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1139fdc6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1139fdcc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1139fdce cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fdd4 jge 0x1139fdd8 */
  if ((C.sf==C.of)) goto L_1139fdd8;
  /* 1139fdd6 jmp 0x1139fdea */
  goto L_1139fdea;
L_1139fdd8:;
  /* 1139fdd8 jmp 0x1139fde5 */
  goto L_1139fde5;
L_1139fdda:;
  /* 1139fdda call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x1139fde0u);
  /* 1139fde0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1139fde3 jmp 0x1139fdea */
  goto L_1139fdea;
L_1139fde5:;
  /* 1139fde5 jmp 0x1139fced */
  goto L_1139fced;
L_1139fdea:;
  /* 1139fdea jmp 0x1139fe3c */
  goto L_1139fe3c;
L_1139fdec:;
  /* 1139fdec push 0 */
  push32((uint32_t)(0x0u));
  /* 1139fdee lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1139fdf4 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fdf5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1139fdf8 push edx */
  push32((uint32_t)(EDX));
  /* 1139fdf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fdfc push eax */
  push32((uint32_t)(EAX));
  /* 1139fdfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fe00 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1139fe03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fe06 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1139fe09 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fe0c mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139fe13 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1139fe16 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fe17 call dword ptr [0x113c53b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b4))), 0x1139fe1du);
  /* 1139fe1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139fe1f je 0x1139fe33 */
  if (C.zf) goto L_1139fe33;
  /* 1139fe21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1139fe28 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1139fe2e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1139fe31 jmp 0x1139fe3c */
  goto L_1139fe3c;
L_1139fe33:;
  /* 1139fe33 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x1139fe39u);
  /* 1139fe39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1139fe3c:;
  /* 1139fe3c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fe40 jne 0x1139fec6 */
  if (!C.zf) goto L_1139fec6;
  /* 1139fe46 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fe4a je 0x1139fe7a */
  if (C.zf) goto L_1139fe7a;
  /* 1139fe4c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fe50 jne 0x1139fe69 */
  if (!C.zf) goto L_1139fe69;
  /* 1139fe52 call 0x1139ee20 */
  push32(0x1139fe57u); f_1139ee20();
  /* 1139fe57 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1139fe5d call 0x1139ee30 */
  push32(0x1139fe62u); f_1139ee30();
  /* 1139fe62 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139fe65 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1139fe67 jmp 0x1139fe75 */
  goto L_1139fe75;
L_1139fe69:;
  /* 1139fe69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1139fe6c push edx */
  push32((uint32_t)(EDX));
  /* 1139fe6d call 0x1139ed80 */
  push32(0x1139fe72u); f_1139ed80();
  /* 1139fe72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1139fe75:;
  /* 1139fe75 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fe78 jmp 0x1139fecf */
  goto L_1139fecf;
L_1139fe7a:;
  /* 1139fe7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fe7d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1139fe80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139fe83 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1139fe86 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139fe89 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 1139fe90 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1139fe95 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1139fe98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139fe9a je 0x1139feab */
  if (C.zf) goto L_1139feab;
  /* 1139fe9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1139fe9f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1139fea2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fea5 jne 0x1139feab */
  if (!C.zf) goto L_1139feab;
  /* 1139fea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139fea9 jmp 0x1139fecf */
  goto L_1139fecf;
L_1139feab:;
  /* 1139feab call 0x1139ee20 */
  push32(0x1139feb0u); f_1139ee20();
  /* 1139feb0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1139feb6 call 0x1139ee30 */
  push32(0x1139febbu); f_1139ee30();
  /* 1139febb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1139fec1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1139fec4 jmp 0x1139fecf */
  goto L_1139fecf;
L_1139fec6:;
  /* 1139fec6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1139fec9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1139fecf:;
  /* 1139fecf mov esp, ebp */
  ESP = (EBP);
  /* 1139fed1 pop ebp */
  EBP = (pop32());
  /* 1139fed2 ret  */
  ESPCHK(0x1139fc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fee0 @ 0x1139fee0 (199 bytes, 68 insns) */
void f_1139fee0(void) {
  FTRACE(0x1139fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fee1 mov ebp, esp */
  EBP = (ESP);
  /* 1139fee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fee4 push ebx */
  push32((uint32_t)(EBX));
  /* 1139fee5 push esi */
  push32((uint32_t)(ESI));
  /* 1139fee6 push edi */
  push32((uint32_t)(EDI));
L_1139fee7:;
  /* 1139fee7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139feeb jne 0x1139ff0b */
  if (!C.zf) goto L_1139ff0b;
  /* 1139feed push 0x113be2e8 */
  push32((uint32_t)(0x113be2e8u));
  /* 1139fef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1139fef4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1139fef6 push 0x113be3b8 */
  push32((uint32_t)(0x113be3b8u));
  /* 1139fefb push 2 */
  push32((uint32_t)(0x2u));
  /* 1139fefd call 0x113955e0 */
  push32(0x1139ff02u); f_113955e0();
  /* 1139ff02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ff05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ff08 jne 0x1139ff0b */
  if (!C.zf) goto L_1139ff0b;
  /* 1139ff0a int3  */
  x86_unimpl("int3 @ 0x1139ff0a");
L_1139ff0b:;
  /* 1139ff0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ff0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1139ff0f jne 0x1139fee7 */
  if (!C.zf) goto L_1139fee7;
  /* 1139ff11 mov ecx, dword ptr [0x113c2a10] */
  ECX = (r32((uint32_t)(0x113c2a10)));
  /* 1139ff17 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ff1a mov dword ptr [0x113c2a10], ecx */
  w32((uint32_t)(0x113c2a10), (ECX));
  /* 1139ff20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ff23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1139ff26 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1139ff28 push 0x113be3b8 */
  push32((uint32_t)(0x113be3b8u));
  /* 1139ff2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1139ff2f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1139ff34 call 0x11396610 */
  push32(0x1139ff39u); f_11396610();
  /* 1139ff39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ff3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff3f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1139ff42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff45 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ff49 je 0x1139ff66 */
  if (C.zf) goto L_1139ff66;
  /* 1139ff4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff4e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1139ff51 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1139ff54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff57 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1139ff5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff5d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1139ff64 jmp 0x1139ff8b */
  goto L_1139ff8b;
L_1139ff66:;
  /* 1139ff66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff69 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1139ff6c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1139ff6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff72 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1139ff75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff78 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1139ff7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff7e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1139ff81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff84 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1139ff8b:;
  /* 1139ff8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1139ff94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1139ff96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1139ff99 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1139ffa0 pop edi */
  EDI = (pop32());
  /* 1139ffa1 pop esi */
  ESI = (pop32());
  /* 1139ffa2 pop ebx */
  EBX = (pop32());
  /* 1139ffa3 mov esp, ebp */
  ESP = (EBP);
  /* 1139ffa5 pop ebp */
  EBP = (pop32());
  /* 1139ffa6 ret  */
  ESPCHK(0x1139fee0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1139ffb0 (50 bytes, 17 insns) */
void f_1139ffb0(void) {
  FTRACE(0x1139ffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139ffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139ffb1 mov ebp, esp */
  EBP = (ESP);
  /* 1139ffb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ffb6 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139ffbc jb 0x1139ffc2 */
  if (C.cf) goto L_1139ffc2;
  /* 1139ffbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1139ffc0 jmp 0x1139ffe0 */
  goto L_1139ffe0;
L_1139ffc2:;
  /* 1139ffc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ffc5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1139ffc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1139ffcb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1139ffce imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1139ffd1 mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 1139ffd8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1139ffdd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1139ffe0:;
  /* 1139ffe0 pop ebp */
  EBP = (pop32());
  /* 1139ffe1 ret  */
  ESPCHK(0x1139ffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fff0 @ 0x1139fff0 (300 bytes, 80 insns) */
void f_1139fff0(void) {
  FTRACE(0x1139fff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1139fff0 push ebp */
  push32((uint32_t)(EBP));
  /* 1139fff1 mov ebp, esp */
  EBP = (ESP);
  /* 1139fff3 push ecx */
  push32((uint32_t)(ECX));
  /* 1139fff4 cmp dword ptr [0x113c3e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c3e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1139fffb jne 0x113a0009 */
  if (!C.zf) goto L_113a0009;
  /* 1139fffd mov dword ptr [0x113c3e20], 0x200 */
  w32((uint32_t)(0x113c3e20), (0x200u));
  /* 113a0007 jmp 0x113a001c */
  goto L_113a001c;
L_113a0009:;
  /* 113a0009 cmp dword ptr [0x113c3e20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x113c3e20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0010 jge 0x113a001c */
  if ((C.sf==C.of)) goto L_113a001c;
  /* 113a0012 mov dword ptr [0x113c3e20], 0x14 */
  w32((uint32_t)(0x113c3e20), (0x14u));
L_113a001c:;
  /* 113a001c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 113a0021 push 0x113be3c4 */
  push32((uint32_t)(0x113be3c4u));
  /* 113a0026 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0028 push 4 */
  push32((uint32_t)(0x4u));
  /* 113a002a mov eax, dword ptr [0x113c3e20] */
  EAX = (r32((uint32_t)(0x113c3e20)));
  /* 113a002f push eax */
  push32((uint32_t)(EAX));
  /* 113a0030 call 0x11396a20 */
  push32(0x113a0035u); f_11396a20();
  /* 113a0035 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0038 mov dword ptr [0x113c2ac8], eax */
  w32((uint32_t)(0x113c2ac8), (EAX));
  /* 113a003d cmp dword ptr [0x113c2ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0044 jne 0x113a0085 */
  if (!C.zf) goto L_113a0085;
  /* 113a0046 mov dword ptr [0x113c3e20], 0x14 */
  w32((uint32_t)(0x113c3e20), (0x14u));
  /* 113a0050 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 113a0055 push 0x113be3c4 */
  push32((uint32_t)(0x113be3c4u));
  /* 113a005a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a005c push 4 */
  push32((uint32_t)(0x4u));
  /* 113a005e mov ecx, dword ptr [0x113c3e20] */
  ECX = (r32((uint32_t)(0x113c3e20)));
  /* 113a0064 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0065 call 0x11396a20 */
  push32(0x113a006au); f_11396a20();
  /* 113a006a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a006d mov dword ptr [0x113c2ac8], eax */
  w32((uint32_t)(0x113c2ac8), (EAX));
  /* 113a0072 cmp dword ptr [0x113c2ac8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ac8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0079 jne 0x113a0085 */
  if (!C.zf) goto L_113a0085;
  /* 113a007b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 113a007d call 0x11395490 */
  push32(0x113a0082u); f_11395490();
  /* 113a0082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a0085:;
  /* 113a0085 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a008c jmp 0x113a0097 */
  goto L_113a0097;
L_113a008e:;
  /* 113a008e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0091 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0094 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113a0097:;
  /* 113a0097 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a009b jge 0x113a00b6 */
  if ((C.sf==C.of)) goto L_113a00b6;
  /* 113a009d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00a0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a00a3 add eax, 0x113c1240 */
  { uint32_t _a=(EAX),_b=(0x113c1240u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a00a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00ab mov edx, dword ptr [0x113c2ac8] */
  EDX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a00b1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 113a00b4 jmp 0x113a008e */
  goto L_113a008e;
L_113a00b6:;
  /* 113a00b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a00bd jmp 0x113a00c8 */
  goto L_113a00c8;
L_113a00bf:;
  /* 113a00bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a00c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a00c8:;
  /* 113a00c8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a00cc jge 0x113a0118 */
  if ((C.sf==C.of)) goto L_113a0118;
  /* 113a00ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00d1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a00d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00d7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a00da imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a00dd mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a00e4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a00e8 je 0x113a0106 */
  if (C.zf) goto L_113a0106;
  /* 113a00ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00ed sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a00f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a00f3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a00f6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a00f9 mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a0100 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0104 jne 0x113a0116 */
  if (!C.zf) goto L_113a0116;
L_113a0106:;
  /* 113a0106 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0109 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a010c mov dword ptr [ecx + 0x113c1250], 0xffffffff */
  w32((uint32_t)(ECX + 0x113c1250), (0xffffffffu));
L_113a0116:;
  /* 113a0116 jmp 0x113a00bf */
  goto L_113a00bf;
L_113a0118:;
  /* 113a0118 mov esp, ebp */
  ESP = (EBP);
  /* 113a011a pop ebp */
  EBP = (pop32());
  /* 113a011b ret  */
  ESPCHK(0x1139fff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010120 @ 0x113a0120 (26 bytes, 9 insns) */
void f_113a0120(void) {
  FTRACE(0x113a0120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0120 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0121 mov ebp, esp */
  EBP = (ESP);
  /* 113a0123 call 0x113a0e60 */
  push32(0x113a0128u); f_113a0e60();
  /* 113a0128 movsx eax, byte ptr [0x113c2770] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x113c2770))));
  /* 113a012f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a0131 je 0x113a0138 */
  if (C.zf) goto L_113a0138;
  /* 113a0133 call 0x113a0c20 */
  push32(0x113a0138u); f_113a0c20();
L_113a0138:;
  /* 113a0138 pop ebp */
  EBP = (pop32());
  /* 113a0139 ret  */
  ESPCHK(0x113a0120u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x113a0140 (61 bytes, 20 insns) */
void f_113a0140(void) {
  FTRACE(0x113a0140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0140 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0141 mov ebp, esp */
  EBP = (ESP);
  /* 113a0143 cmp dword ptr [ebp + 8], 0x113c1240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113c1240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a014a jb 0x113a016e */
  if (C.cf) goto L_113a016e;
  /* 113a014c cmp dword ptr [ebp + 8], 0x113c14a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113c14a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0153 ja 0x113a016e */
  if ((!C.cf&&!C.zf)) goto L_113a016e;
  /* 113a0155 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0158 sub eax, 0x113c1240 */
  { uint32_t _a=(EAX),_b=(0x113c1240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a015d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a0160 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0163 push eax */
  push32((uint32_t)(EAX));
  /* 113a0164 call 0x1139a010 */
  push32(0x113a0169u); f_1139a010();
  /* 113a0169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a016c jmp 0x113a017b */
  goto L_113a017b;
L_113a016e:;
  /* 113a016e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0171 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0174 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0175 call dword ptr [0x113c5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5358))), 0x113a017bu);
L_113a017b:;
  /* 113a017b pop ebp */
  EBP = (pop32());
  /* 113a017c ret  */
  ESPCHK(0x113a0140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x113a0180 (41 bytes, 16 insns) */
void f_113a0180(void) {
  FTRACE(0x113a0180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0180 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0181 mov ebp, esp */
  EBP = (ESP);
  /* 113a0183 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0187 jge 0x113a019a */
  if ((C.sf==C.of)) goto L_113a019a;
  /* 113a0189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a018c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a018f push eax */
  push32((uint32_t)(EAX));
  /* 113a0190 call 0x1139a010 */
  push32(0x113a0195u); f_1139a010();
  /* 113a0195 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0198 jmp 0x113a01a7 */
  goto L_113a01a7;
L_113a019a:;
  /* 113a019a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a019d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a01a0 push ecx */
  push32((uint32_t)(ECX));
  /* 113a01a1 call dword ptr [0x113c5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5358))), 0x113a01a7u);
L_113a01a7:;
  /* 113a01a7 pop ebp */
  EBP = (pop32());
  /* 113a01a8 ret  */
  ESPCHK(0x113a0180u, _esp0);
  ESP += 4; return;
}

/* FUN_100101b0 @ 0x113a01b0 (61 bytes, 20 insns) */
void f_113a01b0(void) {
  FTRACE(0x113a01b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a01b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a01b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a01b3 cmp dword ptr [ebp + 8], 0x113c1240 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113c1240u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a01ba jb 0x113a01de */
  if (C.cf) goto L_113a01de;
  /* 113a01bc cmp dword ptr [ebp + 8], 0x113c14a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x113c14a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a01c3 ja 0x113a01de */
  if ((!C.cf&&!C.zf)) goto L_113a01de;
  /* 113a01c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a01c8 sub eax, 0x113c1240 */
  { uint32_t _a=(EAX),_b=(0x113c1240u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a01cd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a01d0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a01d3 push eax */
  push32((uint32_t)(EAX));
  /* 113a01d4 call 0x1139a0b0 */
  push32(0x113a01d9u); f_1139a0b0();
  /* 113a01d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a01dc jmp 0x113a01eb */
  goto L_113a01eb;
L_113a01de:;
  /* 113a01de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a01e1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a01e4 push ecx */
  push32((uint32_t)(ECX));
  /* 113a01e5 call dword ptr [0x113c5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5354))), 0x113a01ebu);
L_113a01eb:;
  /* 113a01eb pop ebp */
  EBP = (pop32());
  /* 113a01ec ret  */
  ESPCHK(0x113a01b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101f0 @ 0x113a01f0 (41 bytes, 16 insns) */
void f_113a01f0(void) {
  FTRACE(0x113a01f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a01f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a01f1 mov ebp, esp */
  EBP = (ESP);
  /* 113a01f3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a01f7 jge 0x113a020a */
  if ((C.sf==C.of)) goto L_113a020a;
  /* 113a01f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a01fc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a01ff push eax */
  push32((uint32_t)(EAX));
  /* 113a0200 call 0x1139a0b0 */
  push32(0x113a0205u); f_1139a0b0();
  /* 113a0205 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0208 jmp 0x113a0217 */
  goto L_113a0217;
L_113a020a:;
  /* 113a020a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a020d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0210 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0211 call dword ptr [0x113c5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5354))), 0x113a0217u);
L_113a0217:;
  /* 113a0217 pop ebp */
  EBP = (pop32());
  /* 113a0218 ret  */
  ESPCHK(0x113a01f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x113a0220 (119 bytes, 34 insns) */
void f_113a0220(void) {
  FTRACE(0x113a0220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0220 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0221 mov ebp, esp */
  EBP = (ESP);
  /* 113a0223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0226 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a022b call dword ptr [0x113c52dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c52dc))), 0x113a0231u);
  /* 113a0231 cmp dword ptr [0x113c2ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0238 je 0x113a0258 */
  if (C.zf) goto L_113a0258;
  /* 113a023a push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a023f call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a0245u);
  /* 113a0245 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a0247 call 0x1139a010 */
  push32(0x113a024cu); f_1139a010();
  /* 113a024c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a024f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a0256 jmp 0x113a025f */
  goto L_113a025f;
L_113a0258:;
  /* 113a0258 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113a025f:;
  /* 113a025f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 113a0263 push eax */
  push32((uint32_t)(EAX));
  /* 113a0264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0267 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0268 call 0x113a02a0 */
  push32(0x113a026du); f_113a02a0();
  /* 113a026d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0270 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a0273 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0277 je 0x113a0285 */
  if (C.zf) goto L_113a0285;
  /* 113a0279 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a027b call 0x1139a0b0 */
  push32(0x113a0280u); f_1139a0b0();
  /* 113a0280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0283 jmp 0x113a0290 */
  goto L_113a0290;
L_113a0285:;
  /* 113a0285 push 0x113c2ac4 */
  push32((uint32_t)(0x113c2ac4u));
  /* 113a028a call dword ptr [0x113c53b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53b8))), 0x113a0290u);
L_113a0290:;
  /* 113a0290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0293 mov esp, ebp */
  ESP = (EBP);
  /* 113a0295 pop ebp */
  EBP = (pop32());
  /* 113a0296 ret  */
  ESPCHK(0x113a0220u, _esp0);
  ESP += 4; return;
}

/* FUN_100102a0 @ 0x113a02a0 (160 bytes, 50 insns) */
void f_113a02a0(void) {
  FTRACE(0x113a02a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a02a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a02a1 mov ebp, esp */
  EBP = (ESP);
  /* 113a02a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a02a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a02aa jne 0x113a02b3 */
  if (!C.zf) goto L_113a02b3;
  /* 113a02ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a02ae jmp 0x113a033c */
  goto L_113a033c;
L_113a02b3:;
  /* 113a02b3 cmp dword ptr [0x113c29f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a02ba jne 0x113a02ea */
  if (!C.zf) goto L_113a02ea;
  /* 113a02bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a02bf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a02c4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a02c9 jle 0x113a02db */
  if ((C.zf||C.sf!=C.of)) goto L_113a02db;
  /* 113a02cb call 0x1139ee20 */
  push32(0x113a02d0u); f_1139ee20();
  /* 113a02d0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 113a02d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a02d9 jmp 0x113a033c */
  goto L_113a033c;
L_113a02db:;
  /* 113a02db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a02de mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 113a02e1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 113a02e3 mov eax, 1 */
  EAX = (0x1u);
  /* 113a02e8 jmp 0x113a033c */
  goto L_113a033c;
L_113a02ea:;
  /* 113a02ea mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a02f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 113a02f4 push eax */
  push32((uint32_t)(EAX));
  /* 113a02f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a02f7 mov ecx, dword ptr [0x113c0fc4] */
  ECX = (r32((uint32_t)(0x113c0fc4)));
  /* 113a02fd push ecx */
  push32((uint32_t)(ECX));
  /* 113a02fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0301 push edx */
  push32((uint32_t)(EDX));
  /* 113a0302 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a0304 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 113a0307 push eax */
  push32((uint32_t)(EAX));
  /* 113a0308 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 113a030d mov ecx, dword ptr [0x113c2a00] */
  ECX = (r32((uint32_t)(0x113c2a00)));
  /* 113a0313 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0314 call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a031au);
  /* 113a031a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a031d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0321 je 0x113a0329 */
  if (C.zf) goto L_113a0329;
  /* 113a0323 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0327 je 0x113a0339 */
  if (C.zf) goto L_113a0339;
L_113a0329:;
  /* 113a0329 call 0x1139ee20 */
  push32(0x113a032eu); f_1139ee20();
  /* 113a032e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 113a0334 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0337 jmp 0x113a033c */
  goto L_113a033c;
L_113a0339:;
  /* 113a0339 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113a033c:;
  /* 113a033c mov esp, ebp */
  ESP = (EBP);
  /* 113a033e pop ebp */
  EBP = (pop32());
  /* 113a033f ret  */
  ESPCHK(0x113a02a0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x113a0340 (52 bytes, 19 insns) */
void f_113a0340(void) {
  FTRACE(0x113a0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0340 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113a0344 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 113a0348 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a034a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 113a034e jne 0x113a0359 */
  if (!C.zf) goto L_113a0359;
  /* 113a0350 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 113a0354 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113a0356 ret 0x10 */
  ESPCHK(0x113a0340u, _esp0);
  ESP += 20; return;
L_113a0359:;
  /* 113a0359 push ebx */
  push32((uint32_t)(EBX));
  /* 113a035a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113a035c mov ebx, eax */
  EBX = (EAX);
  /* 113a035e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113a0362 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113a0366 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0368 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 113a036c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 113a036e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0370 pop ebx */
  EBX = (pop32());
  /* 113a0371 ret 0x10 */
  ESPCHK(0x113a0340u, _esp0);
  ESP += 20; return;
}

/* __mbsnbicoll @ 0x113a0380 (79 bytes, 32 insns) */
void f_113a0380(void) {
  FTRACE(0x113a0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0380 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0381 mov ebp, esp */
  EBP = (ESP);
  /* 113a0383 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0384 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0388 jne 0x113a038e */
  if (!C.zf) goto L_113a038e;
  /* 113a038a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a038c jmp 0x113a03cb */
  goto L_113a03cb;
L_113a038e:;
  /* 113a038e mov eax, dword ptr [0x113c3e24] */
  EAX = (r32((uint32_t)(0x113c3e24)));
  /* 113a0393 push eax */
  push32((uint32_t)(EAX));
  /* 113a0394 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a0397 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0398 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a039b push edx */
  push32((uint32_t)(EDX));
  /* 113a039c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a039f push eax */
  push32((uint32_t)(EAX));
  /* 113a03a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a03a3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a03a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a03a6 mov edx, dword ptr [0x113c40c4] */
  EDX = (r32((uint32_t)(0x113c40c4)));
  /* 113a03ac push edx */
  push32((uint32_t)(EDX));
  /* 113a03ad call 0x113a1a10 */
  push32(0x113a03b2u); f_113a1a10();
  /* 113a03b2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a03b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a03b8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a03bc jne 0x113a03c5 */
  if (!C.zf) goto L_113a03c5;
  /* 113a03be mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 113a03c3 jmp 0x113a03cb */
  goto L_113a03cb;
L_113a03c5:;
  /* 113a03c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a03c8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_113a03cb:;
  /* 113a03cb mov esp, ebp */
  ESP = (EBP);
  /* 113a03cd pop ebp */
  EBP = (pop32());
  /* 113a03ce ret  */
  ESPCHK(0x113a0380u, _esp0);
  ESP += 4; return;
}

/* FUN_100103d0 @ 0x113a03d0 (174 bytes, 66 insns) */
void f_113a03d0(void) {
  FTRACE(0x113a03d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a03d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a03d1 mov ebp, esp */
  EBP = (ESP);
  /* 113a03d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a03d6 mov eax, dword ptr [0x113c2760] */
  EAX = (r32((uint32_t)(0x113c2760)));
  /* 113a03db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a03de:;
  /* 113a03de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a03e1 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a03e4 je 0x113a0478 */
  if (C.zf) goto L_113a0478;
  /* 113a03ea push 0 */
  push32((uint32_t)(0x0u));
  /* 113a03ec push 0 */
  push32((uint32_t)(0x0u));
  /* 113a03ee push 0 */
  push32((uint32_t)(0x0u));
  /* 113a03f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a03f2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a03f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a03f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a03f9 push eax */
  push32((uint32_t)(EAX));
  /* 113a03fa push 0 */
  push32((uint32_t)(0x0u));
  /* 113a03fc push 1 */
  push32((uint32_t)(0x1u));
  /* 113a03fe call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a0404u);
  /* 113a0404 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a0407 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a040b jne 0x113a0412 */
  if (!C.zf) goto L_113a0412;
  /* 113a040d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0410 jmp 0x113a047a */
  goto L_113a047a;
L_113a0412:;
  /* 113a0412 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113a0414 push 0x113be3cc */
  push32((uint32_t)(0x113be3ccu));
  /* 113a0419 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a041b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a041e push ecx */
  push32((uint32_t)(ECX));
  /* 113a041f call 0x11396610 */
  push32(0x113a0424u); f_11396610();
  /* 113a0424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0427 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a042a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a042e jne 0x113a0435 */
  if (!C.zf) goto L_113a0435;
  /* 113a0430 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0433 jmp 0x113a047a */
  goto L_113a047a;
L_113a0435:;
  /* 113a0435 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0437 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a043c push edx */
  push32((uint32_t)(EDX));
  /* 113a043d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0440 push eax */
  push32((uint32_t)(EAX));
  /* 113a0441 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a0443 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0446 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a0448 push edx */
  push32((uint32_t)(EDX));
  /* 113a0449 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a044b push 1 */
  push32((uint32_t)(0x1u));
  /* 113a044d call dword ptr [0x113c537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c537c))), 0x113a0453u);
  /* 113a0453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a0455 jne 0x113a045c */
  if (!C.zf) goto L_113a045c;
  /* 113a0457 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a045a jmp 0x113a047a */
  goto L_113a047a;
L_113a045c:;
  /* 113a045c push 0 */
  push32((uint32_t)(0x0u));
  /* 113a045e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0461 push eax */
  push32((uint32_t)(EAX));
  /* 113a0462 call 0x113a1e60 */
  push32(0x113a0467u); f_113a1e60();
  /* 113a0467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a046a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a046d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0470 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a0473 jmp 0x113a03de */
  goto L_113a03de;
L_113a0478:;
  /* 113a0478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a047a:;
  /* 113a047a mov esp, ebp */
  ESP = (EBP);
  /* 113a047c pop ebp */
  EBP = (pop32());
  /* 113a047d ret  */
  ESPCHK(0x113a03d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x113a0480 (32 bytes, 18 insns) */
void f_113a0480(void) {
  FTRACE(0x113a0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0480 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0481 mov ebp, esp */
  EBP = (ESP);
  /* 113a0483 push ebx */
  push32((uint32_t)(EBX));
  /* 113a0484 push esi */
  push32((uint32_t)(ESI));
  /* 113a0485 push edi */
  push32((uint32_t)(EDI));
  /* 113a0486 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0487 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0489 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a048b push 0x113a0498 */
  push32((uint32_t)(0x113a0498u));
  /* 113a0490 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 113a0493 call 0x113a6d7e */
  push32(0x113a0498u); f_113a6d7e();
  /* 113a0498 pop ebp */
  EBP = (pop32());
  /* 113a0499 pop edi */
  EDI = (pop32());
  /* 113a049a pop esi */
  ESI = (pop32());
  /* 113a049b pop ebx */
  EBX = (pop32());
  /* 113a049c mov esp, ebp */
  ESP = (EBP);
  /* 113a049e pop ebp */
  EBP = (pop32());
  /* 113a049f ret  */
  ESPCHK(0x113a0480u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x113a04c2 (104 bytes, 33 insns) */
void f_113a04c2(void) {
  FTRACE(0x113a04c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a04c2 push ebx */
  push32((uint32_t)(EBX));
  /* 113a04c3 push esi */
  push32((uint32_t)(ESI));
  /* 113a04c4 push edi */
  push32((uint32_t)(EDI));
  /* 113a04c5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 113a04c9 push eax */
  push32((uint32_t)(EAX));
  /* 113a04ca push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 113a04cc push 0x113a04a0 */
  push32((uint32_t)(0x113a04a0u));
  /* 113a04d1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 113a04d8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_113a04df:;
  /* 113a04df mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 113a04e3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a04e6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 113a04e9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a04ec je 0x113a051c */
  if (C.zf) goto L_113a051c;
  /* 113a04ee cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a04f2 je 0x113a051c */
  if (C.zf) goto L_113a051c;
  /* 113a04f4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 113a04f7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 113a04fa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 113a04fe mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 113a0501 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0506 jne 0x113a051a */
  if (!C.zf) goto L_113a051a;
  /* 113a0508 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 113a050d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 113a0511 call 0x113a0556 */
  push32(0x113a0516u); f_113a0556();
  /* 113a0516 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x113a051au);
L_113a051a:;
  /* 113a051a jmp 0x113a04df */
  goto L_113a04df;
L_113a051c:;
  /* 113a051c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 113a0523 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0526 pop edi */
  EDI = (pop32());
  /* 113a0527 pop esi */
  ESI = (pop32());
  /* 113a0528 pop ebx */
  EBX = (pop32());
  /* 113a0529 ret  */
  ESPCHK(0x113a04c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10010556 @ 0x113a0556 (24 bytes, 10 insns) */
void f_113a0556(void) {
  FTRACE(0x113a0556u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0556 push ebx */
  push32((uint32_t)(EBX));
  /* 113a0557 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0558 mov ebx, 0x113c14e0 */
  EBX = (0x113c14e0u);
  /* 113a055d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0560 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 113a0563 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 113a0566 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 113a0569 pop ecx */
  ECX = (pop32());
  /* 113a056a pop ebx */
  EBX = (pop32());
  /* 113a056b ret 4 */
  ESPCHK(0x113a0556u, _esp0);
  ESP += 8; return;
}

/* FUN_10010635 @ 0x113a0635 (27 bytes, 11 insns) */
void f_113a0635(void) {
  FTRACE(0x113a0635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0635 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0636 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 113a063a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 113a063c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 113a063f push eax */
  push32((uint32_t)(EAX));
  /* 113a0640 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 113a0643 push eax */
  push32((uint32_t)(EAX));
  /* 113a0644 call 0x113a04c2 */
  push32(0x113a0649u); f_113a04c2();
  /* 113a0649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a064c pop ebp */
  EBP = (pop32());
  /* 113a064d ret 4 */
  ESPCHK(0x113a0635u, _esp0);
  ESP += 8; return;
}

/* FUN_10010650 @ 0x113a0650 (482 bytes, 138 insns) */
void f_113a0650(void) {
  FTRACE(0x113a0650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0650 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0651 mov ebp, esp */
  EBP = (ESP);
  /* 113a0653 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0656 push esi */
  push32((uint32_t)(ESI));
  /* 113a0657 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 113a065e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113a0660 call 0x1139a010 */
  push32(0x113a0665u); f_1139a010();
  /* 113a0665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0668 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a066f jmp 0x113a067a */
  goto L_113a067a;
L_113a0671:;
  /* 113a0671 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0677 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113a067a:;
  /* 113a067a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a067e jge 0x113a0820 */
  if ((C.sf==C.of)) goto L_113a0820;
  /* 113a0684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0687 cmp dword ptr [ecx*4 + 0x113c4120], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x113c4120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a068f je 0x113a0786 */
  if (C.zf) goto L_113a0786;
  /* 113a0695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0698 mov eax, dword ptr [edx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 113a069f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a06a2 jmp 0x113a06ad */
  goto L_113a06ad;
L_113a06a4:;
  /* 113a06a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a06a7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a06aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a06ad:;
  /* 113a06ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a06b0 mov eax, dword ptr [edx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 113a06b7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a06bc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a06bf jae 0x113a0776 */
  if (!C.cf) goto L_113a0776;
  /* 113a06c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a06c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113a06cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113a06cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a06d1 jne 0x113a0771 */
  if (!C.zf) goto L_113a0771;
  /* 113a06d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a06da cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a06de jne 0x113a0719 */
  if (!C.zf) goto L_113a0719;
  /* 113a06e0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113a06e2 call 0x1139a010 */
  push32(0x113a06e7u); f_1139a010();
  /* 113a06e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a06ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a06ed cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a06f1 jne 0x113a070f */
  if (!C.zf) goto L_113a070f;
  /* 113a06f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a06f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a06f9 push edx */
  push32((uint32_t)(EDX));
  /* 113a06fa call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x113a0700u);
  /* 113a0700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0703 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a0706 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a070c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_113a070f:;
  /* 113a070f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113a0711 call 0x1139a0b0 */
  push32(0x113a0716u); f_1139a0b0();
  /* 113a0716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a0719:;
  /* 113a0719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a071c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a071f push eax */
  push32((uint32_t)(EAX));
  /* 113a0720 call dword ptr [0x113c5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5358))), 0x113a0726u);
  /* 113a0726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0729 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 113a072d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0730 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a0732 je 0x113a0746 */
  if (C.zf) goto L_113a0746;
  /* 113a0734 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0737 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a073a push eax */
  push32((uint32_t)(EAX));
  /* 113a073b call dword ptr [0x113c5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5354))), 0x113a0741u);
  /* 113a0741 jmp 0x113a06a4 */
  goto L_113a06a4;
L_113a0746:;
  /* 113a0746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0749 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113a074f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0752 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a0755 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a075b sub eax, dword ptr [edx*4 + 0x113c4120] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x113c4120))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0762 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 113a0763 mov esi, 0x24 */
  ESI = (0x24u);
  /* 113a0768 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 113a076a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a076c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a076f jmp 0x113a0776 */
  goto L_113a0776;
L_113a0771:;
  /* 113a0771 jmp 0x113a06a4 */
  goto L_113a06a4;
L_113a0776:;
  /* 113a0776 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a077a je 0x113a0781 */
  if (C.zf) goto L_113a0781;
  /* 113a077c jmp 0x113a0820 */
  goto L_113a0820;
L_113a0781:;
  /* 113a0781 jmp 0x113a081b */
  goto L_113a081b;
L_113a0786:;
  /* 113a0786 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 113a0788 push 0x113be3d8 */
  push32((uint32_t)(0x113be3d8u));
  /* 113a078d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a078f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 113a0794 call 0x11396610 */
  push32(0x113a0799u); f_11396610();
  /* 113a0799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a079c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a079f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a07a3 je 0x113a0819 */
  if (C.zf) goto L_113a0819;
  /* 113a07a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a07a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07ab mov dword ptr [eax*4 + 0x113c4120], ecx */
  w32((uint32_t)(EAX*4 + 0x113c4120), (ECX));
  /* 113a07b2 mov edx, dword ptr [0x113c425c] */
  EDX = (r32((uint32_t)(0x113c425c)));
  /* 113a07b8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a07bb mov dword ptr [0x113c425c], edx */
  w32((uint32_t)(0x113c425c), (EDX));
  /* 113a07c1 jmp 0x113a07cc */
  goto L_113a07cc;
L_113a07c3:;
  /* 113a07c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07c6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a07c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a07cc:;
  /* 113a07cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a07cf mov edx, dword ptr [ecx*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a07d6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a07dc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a07df jae 0x113a0804 */
  if (!C.cf) goto L_113a0804;
  /* 113a07e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07e4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 113a07e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07eb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 113a07f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07f4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 113a07f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a07fb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 113a0802 jmp 0x113a07c3 */
  goto L_113a07c3;
L_113a0804:;
  /* 113a0804 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0807 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a080a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a080d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0810 push edx */
  push32((uint32_t)(EDX));
  /* 113a0811 call 0x113a0b60 */
  push32(0x113a0816u); f_113a0b60();
  /* 113a0816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a0819:;
  /* 113a0819 jmp 0x113a0820 */
  goto L_113a0820;
L_113a081b:;
  /* 113a081b jmp 0x113a0671 */
  goto L_113a0671;
L_113a0820:;
  /* 113a0820 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 113a0822 call 0x1139a0b0 */
  push32(0x113a0827u); f_1139a0b0();
  /* 113a0827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a082a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a082d pop esi */
  ESI = (pop32());
  /* 113a082e mov esp, ebp */
  ESP = (EBP);
  /* 113a0830 pop ebp */
  EBP = (pop32());
  /* 113a0831 ret  */
  ESPCHK(0x113a0650u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x113a0840 (183 bytes, 57 insns) */
void f_113a0840(void) {
  FTRACE(0x113a0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0840 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0841 mov ebp, esp */
  EBP = (ESP);
  /* 113a0843 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0847 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a084d jae 0x113a08da */
  if (!C.cf) goto L_113a08da;
  /* 113a0853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0856 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a0859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a085c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a085f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0862 mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a0869 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a086d jne 0x113a08da */
  if (!C.zf) goto L_113a08da;
  /* 113a086f cmp dword ptr [0x113c2730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0876 jne 0x113a08ba */
  if (!C.zf) goto L_113a08ba;
  /* 113a0878 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a087b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a087e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0882 je 0x113a0892 */
  if (C.zf) goto L_113a0892;
  /* 113a0884 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0888 je 0x113a08a0 */
  if (C.zf) goto L_113a08a0;
  /* 113a088a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a088e je 0x113a08ae */
  if (C.zf) goto L_113a08ae;
  /* 113a0890 jmp 0x113a08ba */
  goto L_113a08ba;
L_113a0892:;
  /* 113a0892 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a0895 push edx */
  push32((uint32_t)(EDX));
  /* 113a0896 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 113a0898 call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a089eu);
  /* 113a089e jmp 0x113a08ba */
  goto L_113a08ba;
L_113a08a0:;
  /* 113a08a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a08a3 push eax */
  push32((uint32_t)(EAX));
  /* 113a08a4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113a08a6 call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a08acu);
  /* 113a08ac jmp 0x113a08ba */
  goto L_113a08ba;
L_113a08ae:;
  /* 113a08ae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a08b1 push ecx */
  push32((uint32_t)(ECX));
  /* 113a08b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113a08b4 call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a08bau);
L_113a08ba:;
  /* 113a08ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a08bd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113a08c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a08c3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113a08c6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a08c9 mov ecx, dword ptr [edx*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 113a08d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a08d3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 113a08d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a08d8 jmp 0x113a08f3 */
  goto L_113a08f3;
L_113a08da:;
  /* 113a08da call 0x1139ee20 */
  push32(0x113a08dfu); f_1139ee20();
  /* 113a08df mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a08e5 call 0x1139ee30 */
  push32(0x113a08eau); f_1139ee30();
  /* 113a08ea mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a08f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113a08f3:;
  /* 113a08f3 mov esp, ebp */
  ESP = (EBP);
  /* 113a08f5 pop ebp */
  EBP = (pop32());
  /* 113a08f6 ret  */
  ESPCHK(0x113a0840u, _esp0);
  ESP += 4; return;
}

/* FUN_10010900 @ 0x113a0900 (216 bytes, 63 insns) */
void f_113a0900(void) {
  FTRACE(0x113a0900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0900 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0901 mov ebp, esp */
  EBP = (ESP);
  /* 113a0903 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0907 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a090d jae 0x113a09bb */
  if (!C.cf) goto L_113a09bb;
  /* 113a0913 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0916 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a0919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a091c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a091f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0922 mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a0929 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113a092e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0931 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0933 je 0x113a09bb */
  if (C.zf) goto L_113a09bb;
  /* 113a0939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a093c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113a093f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0942 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0945 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0948 mov ecx, dword ptr [edx*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 113a094f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0953 je 0x113a09bb */
  if (C.zf) goto L_113a09bb;
  /* 113a0955 cmp dword ptr [0x113c2730], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2730))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a095c jne 0x113a099a */
  if (!C.zf) goto L_113a099a;
  /* 113a095e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0961 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a0964 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0968 je 0x113a0978 */
  if (C.zf) goto L_113a0978;
  /* 113a096a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a096e je 0x113a0984 */
  if (C.zf) goto L_113a0984;
  /* 113a0970 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0974 je 0x113a0990 */
  if (C.zf) goto L_113a0990;
  /* 113a0976 jmp 0x113a099a */
  goto L_113a099a;
L_113a0978:;
  /* 113a0978 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a097a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 113a097c call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a0982u);
  /* 113a0982 jmp 0x113a099a */
  goto L_113a099a;
L_113a0984:;
  /* 113a0984 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0986 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 113a0988 call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a098eu);
  /* 113a098e jmp 0x113a099a */
  goto L_113a099a;
L_113a0990:;
  /* 113a0990 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0992 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 113a0994 call dword ptr [0x113c5314] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5314))), 0x113a099au);
L_113a099a:;
  /* 113a099a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a099d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a09a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a09a3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a09a6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a09a9 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a09b0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 113a09b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a09b9 jmp 0x113a09d4 */
  goto L_113a09d4;
L_113a09bb:;
  /* 113a09bb call 0x1139ee20 */
  push32(0x113a09c0u); f_1139ee20();
  /* 113a09c0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a09c6 call 0x1139ee30 */
  push32(0x113a09cbu); f_1139ee30();
  /* 113a09cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a09d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113a09d4:;
  /* 113a09d4 mov esp, ebp */
  ESP = (EBP);
  /* 113a09d6 pop ebp */
  EBP = (pop32());
  /* 113a09d7 ret  */
  ESPCHK(0x113a0900u, _esp0);
  ESP += 4; return;
}

/* FUN_100109e0 @ 0x113a09e0 (102 bytes, 30 insns) */
void f_113a09e0(void) {
  FTRACE(0x113a09e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a09e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a09e1 mov ebp, esp */
  EBP = (ESP);
  /* 113a09e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a09e6 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a09ec jae 0x113a0a2b */
  if (!C.cf) goto L_113a0a2b;
  /* 113a09ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a09f1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a09f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a09f7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a09fa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a09fd mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a0a04 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113a0a09 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0a0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0a0e je 0x113a0a2b */
  if (C.zf) goto L_113a0a2b;
  /* 113a0a10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0a13 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 113a0a16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0a19 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0a1c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0a1f mov ecx, dword ptr [edx*4 + 0x113c4120] */
  ECX = (r32((uint32_t)(EDX*4 + 0x113c4120)));
  /* 113a0a26 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 113a0a29 jmp 0x113a0a44 */
  goto L_113a0a44;
L_113a0a2b:;
  /* 113a0a2b call 0x1139ee20 */
  push32(0x113a0a30u); f_1139ee20();
  /* 113a0a30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a0a36 call 0x1139ee30 */
  push32(0x113a0a3bu); f_1139ee30();
  /* 113a0a3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a0a41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_113a0a44:;
  /* 113a0a44 pop ebp */
  EBP = (pop32());
  /* 113a0a45 ret  */
  ESPCHK(0x113a09e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x113a0a50 (260 bytes, 83 insns) */
void f_113a0a50(void) {
  FTRACE(0x113a0a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0a50 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0a51 mov ebp, esp */
  EBP = (ESP);
  /* 113a0a53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0a56 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a0a5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a0a5d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 113a0a60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a0a62 je 0x113a0a6d */
  if (C.zf) goto L_113a0a6d;
  /* 113a0a64 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0a67 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 113a0a6a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_113a0a6d:;
  /* 113a0a6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a0a70 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0a76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a0a78 je 0x113a0a82 */
  if (C.zf) goto L_113a0a82;
  /* 113a0a7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0a7d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 113a0a7f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_113a0a82:;
  /* 113a0a82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a0a85 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0a8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0a8d je 0x113a0a98 */
  if (C.zf) goto L_113a0a98;
  /* 113a0a8f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0a92 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 113a0a95 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_113a0a98:;
  /* 113a0a98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0a9b push eax */
  push32((uint32_t)(EAX));
  /* 113a0a9c call dword ptr [0x113c53fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53fc))), 0x113a0aa2u);
  /* 113a0aa2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a0aa5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0aa9 jne 0x113a0ac2 */
  if (!C.zf) goto L_113a0ac2;
  /* 113a0aab call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x113a0ab1u);
  /* 113a0ab1 push eax */
  push32((uint32_t)(EAX));
  /* 113a0ab2 call 0x1139ed80 */
  push32(0x113a0ab7u); f_1139ed80();
  /* 113a0ab7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0aba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0abd jmp 0x113a0b50 */
  goto L_113a0b50;
L_113a0ac2:;
  /* 113a0ac2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0ac6 jne 0x113a0ad3 */
  if (!C.zf) goto L_113a0ad3;
  /* 113a0ac8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0acb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 113a0ace mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 113a0ad1 jmp 0x113a0ae2 */
  goto L_113a0ae2;
L_113a0ad3:;
  /* 113a0ad3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0ad7 jne 0x113a0ae2 */
  if (!C.zf) goto L_113a0ae2;
  /* 113a0ad9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0adc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 113a0adf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_113a0ae2:;
  /* 113a0ae2 call 0x113a0650 */
  push32(0x113a0ae7u); f_113a0650();
  /* 113a0ae7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a0aea cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0aee jne 0x113a0b0b */
  if (!C.zf) goto L_113a0b0b;
  /* 113a0af0 call 0x1139ee20 */
  push32(0x113a0af5u); f_1139ee20();
  /* 113a0af5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 113a0afb call 0x1139ee30 */
  push32(0x113a0b00u); f_1139ee30();
  /* 113a0b00 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a0b06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0b09 jmp 0x113a0b50 */
  goto L_113a0b50;
L_113a0b0b:;
  /* 113a0b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0b0e push eax */
  push32((uint32_t)(EAX));
  /* 113a0b0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0b12 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0b13 call 0x113a0840 */
  push32(0x113a0b18u); f_113a0840();
  /* 113a0b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0b1b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0b1e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 113a0b21 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 113a0b24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0b27 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a0b2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0b2d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a0b30 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0b33 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a0b3a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 113a0b3d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 113a0b41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0b44 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0b45 call 0x113a0bf0 */
  push32(0x113a0b4au); f_113a0bf0();
  /* 113a0b4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0b4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113a0b50:;
  /* 113a0b50 mov esp, ebp */
  ESP = (EBP);
  /* 113a0b52 pop ebp */
  EBP = (pop32());
  /* 113a0b53 ret  */
  ESPCHK(0x113a0a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b60 @ 0x113a0b60 (134 bytes, 44 insns) */
void f_113a0b60(void) {
  FTRACE(0x113a0b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0b60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0b61 mov ebp, esp */
  EBP = (ESP);
  /* 113a0b63 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0b67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a0b6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0b6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a0b70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0b73 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a0b7a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0b7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a0b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0b82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0b86 jne 0x113a0bc1 */
  if (!C.zf) goto L_113a0bc1;
  /* 113a0b88 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113a0b8a call 0x1139a010 */
  push32(0x113a0b8fu); f_1139a010();
  /* 113a0b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0b92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0b95 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0b99 jne 0x113a0bb7 */
  if (!C.zf) goto L_113a0bb7;
  /* 113a0b9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0b9e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0ba1 push edx */
  push32((uint32_t)(EDX));
  /* 113a0ba2 call dword ptr [0x113c535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c535c))), 0x113a0ba8u);
  /* 113a0ba8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0bab mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a0bae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0bb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0bb4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_113a0bb7:;
  /* 113a0bb7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 113a0bb9 call 0x1139a0b0 */
  push32(0x113a0bbeu); f_1139a0b0();
  /* 113a0bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a0bc1:;
  /* 113a0bc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0bc4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a0bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0bca and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a0bcd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0bd0 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a0bd7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 113a0bdb push eax */
  push32((uint32_t)(EAX));
  /* 113a0bdc call dword ptr [0x113c5358] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5358))), 0x113a0be2u);
  /* 113a0be2 mov esp, ebp */
  ESP = (EBP);
  /* 113a0be4 pop ebp */
  EBP = (pop32());
  /* 113a0be5 ret  */
  ESPCHK(0x113a0b60u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x113a0bf0 (38 bytes, 13 insns) */
void f_113a0bf0(void) {
  FTRACE(0x113a0bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0bf1 mov ebp, esp */
  EBP = (ESP);
  /* 113a0bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0bf6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a0bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0bfc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a0bff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a0c02 mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a0c09 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 113a0c0d push eax */
  push32((uint32_t)(EAX));
  /* 113a0c0e call dword ptr [0x113c5354] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5354))), 0x113a0c14u);
  /* 113a0c14 pop ebp */
  EBP = (pop32());
  /* 113a0c15 ret  */
  ESPCHK(0x113a0bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x113a0c20 (218 bytes, 63 insns) */
void f_113a0c20(void) {
  FTRACE(0x113a0c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0c20 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0c21 mov ebp, esp */
  EBP = (ESP);
  /* 113a0c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0c26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a0c2d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0c2f call 0x1139a010 */
  push32(0x113a0c34u); f_1139a010();
  /* 113a0c34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0c37 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 113a0c3e jmp 0x113a0c49 */
  goto L_113a0c49;
L_113a0c40:;
  /* 113a0c40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0c43 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0c46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a0c49:;
  /* 113a0c49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0c4c cmp ecx, dword ptr [0x113c3e20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c3e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0c52 jge 0x113a0ce9 */
  if ((C.sf==C.of)) goto L_113a0ce9;
  /* 113a0c58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0c5b mov eax, dword ptr [0x113c2ac8] */
  EAX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0c60 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0c64 je 0x113a0ce4 */
  if (C.zf) goto L_113a0ce4;
  /* 113a0c66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0c69 mov edx, dword ptr [0x113c2ac8] */
  EDX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0c6f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113a0c72 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a0c75 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0c7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0c7d je 0x113a0ca1 */
  if (C.zf) goto L_113a0ca1;
  /* 113a0c7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0c82 mov eax, dword ptr [0x113c2ac8] */
  EAX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0c87 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a0c8a push ecx */
  push32((uint32_t)(ECX));
  /* 113a0c8b call 0x113a22b0 */
  push32(0x113a0c90u); f_113a22b0();
  /* 113a0c90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0c93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0c96 je 0x113a0ca1 */
  if (C.zf) goto L_113a0ca1;
  /* 113a0c98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0c9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0c9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_113a0ca1:;
  /* 113a0ca1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0ca5 jl 0x113a0ce4 */
  if ((C.sf!=C.of)) goto L_113a0ce4;
  /* 113a0ca7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0caa mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0cb0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a0cb3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0cb6 push edx */
  push32((uint32_t)(EDX));
  /* 113a0cb7 call dword ptr [0x113c5394] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5394))), 0x113a0cbdu);
  /* 113a0cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0cbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0cc2 mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0cc8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a0ccb push edx */
  push32((uint32_t)(EDX));
  /* 113a0ccc call 0x113970a0 */
  push32(0x113a0cd1u); f_113970a0();
  /* 113a0cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0cd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0cd7 mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0cdd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_113a0ce4:;
  /* 113a0ce4 jmp 0x113a0c40 */
  goto L_113a0c40;
L_113a0ce9:;
  /* 113a0ce9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0ceb call 0x1139a0b0 */
  push32(0x113a0cf0u); f_1139a0b0();
  /* 113a0cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0cf3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0cf6 mov esp, ebp */
  ESP = (EBP);
  /* 113a0cf8 pop ebp */
  EBP = (pop32());
  /* 113a0cf9 ret  */
  ESPCHK(0x113a0c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d00 @ 0x113a0d00 (68 bytes, 26 insns) */
void f_113a0d00(void) {
  FTRACE(0x113a0d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0d00 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0d01 mov ebp, esp */
  EBP = (ESP);
  /* 113a0d03 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0d04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0d08 jne 0x113a0d16 */
  if (!C.zf) goto L_113a0d16;
  /* 113a0d0a push 0 */
  push32((uint32_t)(0x0u));
  /* 113a0d0c call 0x113a0e70 */
  push32(0x113a0d11u); f_113a0e70();
  /* 113a0d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d14 jmp 0x113a0d40 */
  goto L_113a0d40;
L_113a0d16:;
  /* 113a0d16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d19 push eax */
  push32((uint32_t)(EAX));
  /* 113a0d1a call 0x113a0140 */
  push32(0x113a0d1fu); f_113a0140();
  /* 113a0d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d25 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0d26 call 0x113a0d50 */
  push32(0x113a0d2bu); f_113a0d50();
  /* 113a0d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a0d31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d34 push edx */
  push32((uint32_t)(EDX));
  /* 113a0d35 call 0x113a01b0 */
  push32(0x113a0d3au); f_113a01b0();
  /* 113a0d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113a0d40:;
  /* 113a0d40 mov esp, ebp */
  ESP = (EBP);
  /* 113a0d42 pop ebp */
  EBP = (pop32());
  /* 113a0d43 ret  */
  ESPCHK(0x113a0d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d50 @ 0x113a0d50 (65 bytes, 26 insns) */
void f_113a0d50(void) {
  FTRACE(0x113a0d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0d50 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0d51 mov ebp, esp */
  EBP = (ESP);
  /* 113a0d53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d56 push eax */
  push32((uint32_t)(EAX));
  /* 113a0d57 call 0x113a0da0 */
  push32(0x113a0d5cu); f_113a0da0();
  /* 113a0d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a0d61 je 0x113a0d68 */
  if (C.zf) goto L_113a0d68;
  /* 113a0d63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a0d66 jmp 0x113a0d8f */
  goto L_113a0d8f;
L_113a0d68:;
  /* 113a0d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d6b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a0d6e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0d74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a0d76 je 0x113a0d8d */
  if (C.zf) goto L_113a0d8d;
  /* 113a0d78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0d7b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a0d7e push ecx */
  push32((uint32_t)(ECX));
  /* 113a0d7f call 0x113a2400 */
  push32(0x113a0d84u); f_113a2400();
  /* 113a0d84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0d87 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a0d89 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0d8b jmp 0x113a0d8f */
  goto L_113a0d8f;
L_113a0d8d:;
  /* 113a0d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a0d8f:;
  /* 113a0d8f pop ebp */
  EBP = (pop32());
  /* 113a0d90 ret  */
  ESPCHK(0x113a0d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10010da0 @ 0x113a0da0 (183 bytes, 62 insns) */
void f_113a0da0(void) {
  FTRACE(0x113a0da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0da0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0da1 mov ebp, esp */
  EBP = (ESP);
  /* 113a0da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0da6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a0dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a0db0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a0db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0db6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a0db9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0dbc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0dbf jne 0x113a0e3b */
  if (!C.zf) goto L_113a0e3b;
  /* 113a0dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0dc4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a0dc7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0dcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0dcf je 0x113a0e3b */
  if (C.zf) goto L_113a0e3b;
  /* 113a0dd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0dd7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 113a0dd9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a0ddf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0de3 jle 0x113a0e3b */
  if ((C.zf||C.sf!=C.of)) goto L_113a0e3b;
  /* 113a0de5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0de8 push edx */
  push32((uint32_t)(EDX));
  /* 113a0de9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0dec mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a0def push ecx */
  push32((uint32_t)(ECX));
  /* 113a0df0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0df3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 113a0df6 push eax */
  push32((uint32_t)(EAX));
  /* 113a0df7 call 0x1139fbd0 */
  push32(0x113a0dfcu); f_1139fbd0();
  /* 113a0dfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0dff cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0e02 jne 0x113a0e25 */
  if (!C.zf) goto L_113a0e25;
  /* 113a0e04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e07 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a0e0a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0e10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a0e12 je 0x113a0e23 */
  if (C.zf) goto L_113a0e23;
  /* 113a0e14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e17 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a0e1a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 113a0e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e20 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_113a0e23:;
  /* 113a0e23 jmp 0x113a0e3b */
  goto L_113a0e3b;
L_113a0e25:;
  /* 113a0e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e28 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a0e2b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0e2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e31 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 113a0e34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a0e3b:;
  /* 113a0e3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e41 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113a0e44 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a0e46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a0e49 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 113a0e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0e53 mov esp, ebp */
  ESP = (EBP);
  /* 113a0e55 pop ebp */
  EBP = (pop32());
  /* 113a0e56 ret  */
  ESPCHK(0x113a0da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e60 @ 0x113a0e60 (15 bytes, 7 insns) */
void f_113a0e60(void) {
  FTRACE(0x113a0e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0e60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0e61 mov ebp, esp */
  EBP = (ESP);
  /* 113a0e63 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a0e65 call 0x113a0e70 */
  push32(0x113a0e6au); f_113a0e70();
  /* 113a0e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0e6d pop ebp */
  EBP = (pop32());
  /* 113a0e6e ret  */
  ESPCHK(0x113a0e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e70 @ 0x113a0e70 (319 bytes, 94 insns) */
void f_113a0e70(void) {
  FTRACE(0x113a0e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0e70 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0e71 mov ebp, esp */
  EBP = (ESP);
  /* 113a0e73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0e76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a0e7d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a0e84 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0e86 call 0x1139a010 */
  push32(0x113a0e8bu); f_1139a010();
  /* 113a0e8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0e8e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a0e95 jmp 0x113a0ea0 */
  goto L_113a0ea0;
L_113a0e97:;
  /* 113a0e97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0e9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0e9d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113a0ea0:;
  /* 113a0ea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0ea3 cmp ecx, dword ptr [0x113c3e20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c3e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0ea9 jge 0x113a0f93 */
  if ((C.sf==C.of)) goto L_113a0f93;
  /* 113a0eaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0eb2 mov eax, dword ptr [0x113c2ac8] */
  EAX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0eb7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0ebb je 0x113a0f8e */
  if (C.zf) goto L_113a0f8e;
  /* 113a0ec1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0ec4 mov edx, dword ptr [0x113c2ac8] */
  EDX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0eca mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113a0ecd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 113a0ed0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 113a0ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a0ed8 je 0x113a0f8e */
  if (C.zf) goto L_113a0f8e;
  /* 113a0ede mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0ee1 mov eax, dword ptr [0x113c2ac8] */
  EAX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0ee6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a0ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 113a0eea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0eed push edx */
  push32((uint32_t)(EDX));
  /* 113a0eee call 0x113a0180 */
  push32(0x113a0ef3u); f_113a0180();
  /* 113a0ef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0ef6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0ef9 mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0eff mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a0f02 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113a0f05 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 113a0f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a0f0c je 0x113a0f75 */
  if (C.zf) goto L_113a0f75;
  /* 113a0f0e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0f12 jne 0x113a0f39 */
  if (!C.zf) goto L_113a0f39;
  /* 113a0f14 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0f17 mov edx, dword ptr [0x113c2ac8] */
  EDX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0f1d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 113a0f20 push eax */
  push32((uint32_t)(EAX));
  /* 113a0f21 call 0x113a0d50 */
  push32(0x113a0f26u); f_113a0d50();
  /* 113a0f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0f29 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0f2c je 0x113a0f37 */
  if (C.zf) goto L_113a0f37;
  /* 113a0f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0f31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0f34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a0f37:;
  /* 113a0f37 jmp 0x113a0f75 */
  goto L_113a0f75;
L_113a0f39:;
  /* 113a0f39 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0f3d jne 0x113a0f75 */
  if (!C.zf) goto L_113a0f75;
  /* 113a0f3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0f42 mov eax, dword ptr [0x113c2ac8] */
  EAX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0f47 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 113a0f4a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a0f4d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 113a0f50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a0f52 je 0x113a0f75 */
  if (C.zf) goto L_113a0f75;
  /* 113a0f54 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0f57 mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0f5d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a0f60 push edx */
  push32((uint32_t)(EDX));
  /* 113a0f61 call 0x113a0d50 */
  push32(0x113a0f66u); f_113a0d50();
  /* 113a0f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0f69 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0f6c jne 0x113a0f75 */
  if (!C.zf) goto L_113a0f75;
  /* 113a0f6e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_113a0f75:;
  /* 113a0f75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0f78 mov ecx, dword ptr [0x113c2ac8] */
  ECX = (r32((uint32_t)(0x113c2ac8)));
  /* 113a0f7e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a0f81 push edx */
  push32((uint32_t)(EDX));
  /* 113a0f82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a0f85 push eax */
  push32((uint32_t)(EAX));
  /* 113a0f86 call 0x113a01f0 */
  push32(0x113a0f8bu); f_113a01f0();
  /* 113a0f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a0f8e:;
  /* 113a0f8e jmp 0x113a0e97 */
  goto L_113a0e97;
L_113a0f93:;
  /* 113a0f93 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0f95 call 0x1139a0b0 */
  push32(0x113a0f9au); f_1139a0b0();
  /* 113a0f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0f9d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0fa1 jne 0x113a0fa8 */
  if (!C.zf) goto L_113a0fa8;
  /* 113a0fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a0fa6 jmp 0x113a0fab */
  goto L_113a0fab;
L_113a0fa8:;
  /* 113a0fa8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113a0fab:;
  /* 113a0fab mov esp, ebp */
  ESP = (EBP);
  /* 113a0fad pop ebp */
  EBP = (pop32());
  /* 113a0fae ret  */
  ESPCHK(0x113a0e70u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x113a0fb0 (15 bytes, 7 insns) */
void f_113a0fb0(void) {
  FTRACE(0x113a0fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0fb1 mov ebp, esp */
  EBP = (ESP);
  /* 113a0fb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a0fb5 call 0x11395490 */
  push32(0x113a0fbau); f_11395490();
  /* 113a0fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0fbd pop ebp */
  EBP = (pop32());
  /* 113a0fbe ret  */
  ESPCHK(0x113a0fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fc0 @ 0x113a0fc0 (1007 bytes, 269 insns) */
void f_113a0fc0(void) {
  FTRACE(0x113a0fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a0fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a0fc1 mov ebp, esp */
  EBP = (ESP);
  /* 113a0fc3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a0fc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0fcd jl 0x113a0fd5 */
  if ((C.sf!=C.of)) goto L_113a0fd5;
  /* 113a0fcf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a0fd3 jle 0x113a0fdc */
  if ((C.zf||C.sf!=C.of)) goto L_113a0fdc;
L_113a0fd5:;
  /* 113a0fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a0fd7 jmp 0x113a13ab */
  goto L_113a13ab;
L_113a0fdc:;
  /* 113a0fdc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a0fde call 0x1139a010 */
  push32(0x113a0fe3u); f_1139a010();
  /* 113a0fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0fe6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a0fed mov eax, dword ptr [0x113c2ab4] */
  EAX = (r32((uint32_t)(0x113c2ab4)));
  /* 113a0ff2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a0ff5 mov dword ptr [0x113c2ab4], eax */
  w32((uint32_t)(0x113c2ab4), (EAX));
L_113a0ffa:;
  /* 113a0ffa cmp dword ptr [0x113c2ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1001 je 0x113a100d */
  if (C.zf) goto L_113a100d;
  /* 113a1003 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1005 call dword ptr [0x113c5310] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5310))), 0x113a100bu);
  /* 113a100b jmp 0x113a0ffa */
  goto L_113a0ffa;
L_113a100d:;
  /* 113a100d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1011 je 0x113a1051 */
  if (C.zf) goto L_113a1051;
  /* 113a1013 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1017 je 0x113a1031 */
  if (C.zf) goto L_113a1031;
  /* 113a1019 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a101c push ecx */
  push32((uint32_t)(ECX));
  /* 113a101d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1020 push edx */
  push32((uint32_t)(EDX));
  /* 113a1021 call 0x113a13b0 */
  push32(0x113a1026u); f_113a13b0();
  /* 113a1026 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1029 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 113a102f jmp 0x113a1043 */
  goto L_113a1043;
L_113a1031:;
  /* 113a1031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1034 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1037 mov ecx, dword ptr [eax + 0x113c1604] */
  ECX = (r32((uint32_t)(EAX + 0x113c1604)));
  /* 113a103d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_113a1043:;
  /* 113a1043 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 113a1049 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a104c jmp 0x113a138b */
  goto L_113a138b;
L_113a1051:;
  /* 113a1051 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 113a1058 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a105f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1063 je 0x113a1383 */
  if (C.zf) goto L_113a1383;
  /* 113a1069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a106c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a106f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1072 jne 0x113a1294 */
  if (!C.zf) goto L_113a1294;
  /* 113a1078 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a107b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113a107f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1082 jne 0x113a1294 */
  if (!C.zf) goto L_113a1294;
  /* 113a1088 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a108b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 113a108f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1092 jne 0x113a1294 */
  if (!C.zf) goto L_113a1294;
  /* 113a1098 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a109b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_113a10a1:;
  /* 113a10a1 push 0x113be428 */
  push32((uint32_t)(0x113be428u));
  /* 113a10a6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a10ac push ecx */
  push32((uint32_t)(ECX));
  /* 113a10ad call 0x113a3a20 */
  push32(0x113a10b2u); f_113a3a20();
  /* 113a10b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a10b5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 113a10bb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a10c2 je 0x113a10ed */
  if (C.zf) goto L_113a10ed;
  /* 113a10c4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a10ca sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a10d0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 113a10d6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a10dd je 0x113a10ed */
  if (C.zf) goto L_113a10ed;
  /* 113a10df mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a10e5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a10e8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a10eb jne 0x113a1113 */
  if (!C.zf) goto L_113a1113;
L_113a10ed:;
  /* 113a10ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a10f1 je 0x113a110c */
  if (C.zf) goto L_113a110c;
  /* 113a10f3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a10f5 call 0x1139a0b0 */
  push32(0x113a10fau); f_1139a0b0();
  /* 113a10fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a10fd mov edx, dword ptr [0x113c2ab4] */
  EDX = (r32((uint32_t)(0x113c2ab4)));
  /* 113a1103 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1106 mov dword ptr [0x113c2ab4], edx */
  w32((uint32_t)(0x113c2ab4), (EDX));
L_113a110c:;
  /* 113a110c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a110e jmp 0x113a13ab */
  goto L_113a13ab;
L_113a1113:;
  /* 113a1113 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 113a111a jmp 0x113a1125 */
  goto L_113a1125;
L_113a111c:;
  /* 113a111c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a111f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1122 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_113a1125:;
  /* 113a1125 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1129 jg 0x113a1173 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a1173;
  /* 113a112b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113a1131 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1132 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a1138 push edx */
  push32((uint32_t)(EDX));
  /* 113a1139 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a113c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a113f mov ecx, dword ptr [eax + 0x113c1600] */
  ECX = (r32((uint32_t)(EAX + 0x113c1600)));
  /* 113a1145 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1146 call 0x113a39e0 */
  push32(0x113a114bu); f_113a39e0();
  /* 113a114b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a114e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1150 jne 0x113a1171 */
  if (!C.zf) goto L_113a1171;
  /* 113a1152 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a1155 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1158 mov eax, dword ptr [edx + 0x113c1600] */
  EAX = (r32((uint32_t)(EDX + 0x113c1600)));
  /* 113a115e push eax */
  push32((uint32_t)(EAX));
  /* 113a115f call 0x11399440 */
  push32(0x113a1164u); f_11399440();
  /* 113a1164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1167 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a116d jne 0x113a1171 */
  if (!C.zf) goto L_113a1171;
  /* 113a116f jmp 0x113a1173 */
  goto L_113a1173;
L_113a1171:;
  /* 113a1171 jmp 0x113a111c */
  goto L_113a111c;
L_113a1173:;
  /* 113a1173 push 0x113be424 */
  push32((uint32_t)(0x113be424u));
  /* 113a1178 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a117e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1181 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 113a1187 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a118d push edx */
  push32((uint32_t)(EDX));
  /* 113a118e call 0x113a39a0 */
  push32(0x113a1193u); f_113a39a0();
  /* 113a1193 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1196 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 113a119c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a11a3 jne 0x113a11d9 */
  if (!C.zf) goto L_113a11d9;
  /* 113a11a5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a11ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a11ae cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a11b1 je 0x113a11d9 */
  if (C.zf) goto L_113a11d9;
  /* 113a11b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a11b7 je 0x113a11d2 */
  if (C.zf) goto L_113a11d2;
  /* 113a11b9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a11bb call 0x1139a0b0 */
  push32(0x113a11c0u); f_1139a0b0();
  /* 113a11c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a11c3 mov edx, dword ptr [0x113c2ab4] */
  EDX = (r32((uint32_t)(0x113c2ab4)));
  /* 113a11c9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a11cc mov dword ptr [0x113c2ab4], edx */
  w32((uint32_t)(0x113c2ab4), (EDX));
L_113a11d2:;
  /* 113a11d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a11d4 jmp 0x113a13ab */
  goto L_113a13ab;
L_113a11d9:;
  /* 113a11d9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a11dd jg 0x113a122a */
  if ((!C.zf&&C.sf==C.of)) goto L_113a122a;
  /* 113a11df mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113a11e5 push eax */
  push32((uint32_t)(EAX));
  /* 113a11e6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a11ec push ecx */
  push32((uint32_t)(ECX));
  /* 113a11ed lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 113a11f3 push edx */
  push32((uint32_t)(EDX));
  /* 113a11f4 call 0x11399e30 */
  push32(0x113a11f9u); f_11399e30();
  /* 113a11f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a11fc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 113a1202 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 113a120a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 113a1210 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1211 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a1214 push edx */
  push32((uint32_t)(EDX));
  /* 113a1215 call 0x113a13b0 */
  push32(0x113a121au); f_113a13b0();
  /* 113a121a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a121d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a121f je 0x113a122a */
  if (C.zf) goto L_113a122a;
  /* 113a1221 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1224 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1227 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113a122a:;
  /* 113a122a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a1230 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1236 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 113a123c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a1242 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a1245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1247 je 0x113a1258 */
  if (C.zf) goto L_113a1258;
  /* 113a1249 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a124f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1252 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_113a1258:;
  /* 113a1258 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 113a125e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a1261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1263 jne 0x113a10a1 */
  if (!C.zf) goto L_113a10a1;
  /* 113a1269 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a126d je 0x113a127c */
  if (C.zf) goto L_113a127c;
  /* 113a126f call 0x113a1550 */
  push32(0x113a1274u); f_113a1550();
  /* 113a1274 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 113a127a jmp 0x113a1286 */
  goto L_113a1286;
L_113a127c:;
  /* 113a127c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_113a1286:;
  /* 113a1286 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 113a128c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a128f jmp 0x113a1381 */
  goto L_113a1381;
L_113a1294:;
  /* 113a1294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1297 push edx */
  push32((uint32_t)(EDX));
  /* 113a1298 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a129a push 0 */
  push32((uint32_t)(0x0u));
  /* 113a129c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 113a12a2 push eax */
  push32((uint32_t)(EAX));
  /* 113a12a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a12a6 push ecx */
  push32((uint32_t)(ECX));
  /* 113a12a7 call 0x113a1650 */
  push32(0x113a12acu); f_113a1650();
  /* 113a12ac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a12af mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a12b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a12b6 je 0x113a1381 */
  if (C.zf) goto L_113a1381;
  /* 113a12bc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a12c3 jmp 0x113a12ce */
  goto L_113a12ce;
L_113a12c5:;
  /* 113a12c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a12c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a12cb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_113a12ce:;
  /* 113a12ce cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a12d2 jg 0x113a1330 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a1330;
  /* 113a12d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a12d8 je 0x113a132e */
  if (C.zf) goto L_113a132e;
  /* 113a12da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a12dd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a12e0 mov ecx, dword ptr [eax + 0x113c1604] */
  ECX = (r32((uint32_t)(EAX + 0x113c1604)));
  /* 113a12e6 push ecx */
  push32((uint32_t)(ECX));
  /* 113a12e7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 113a12ed push edx */
  push32((uint32_t)(EDX));
  /* 113a12ee call 0x1139f090 */
  push32(0x113a12f3u); f_1139f090();
  /* 113a12f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a12f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a12f8 je 0x113a1325 */
  if (C.zf) goto L_113a1325;
  /* 113a12fa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 113a1300 push eax */
  push32((uint32_t)(EAX));
  /* 113a1301 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a1304 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1305 call 0x113a13b0 */
  push32(0x113a130au); f_113a13b0();
  /* 113a130a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a130d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a130f je 0x113a131c */
  if (C.zf) goto L_113a131c;
  /* 113a1311 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1314 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1317 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113a131a jmp 0x113a1323 */
  goto L_113a1323;
L_113a131c:;
  /* 113a131c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_113a1323:;
  /* 113a1323 jmp 0x113a132e */
  goto L_113a132e;
L_113a1325:;
  /* 113a1325 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1328 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a132b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_113a132e:;
  /* 113a132e jmp 0x113a12c5 */
  goto L_113a12c5;
L_113a1330:;
  /* 113a1330 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1334 je 0x113a135b */
  if (C.zf) goto L_113a135b;
  /* 113a1336 call 0x113a1550 */
  push32(0x113a133bu); f_113a1550();
  /* 113a133b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a133e push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1340 mov ecx, dword ptr [0x113c1604] */
  ECX = (r32((uint32_t)(0x113c1604)));
  /* 113a1346 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1347 call 0x113970a0 */
  push32(0x113a134cu); f_113970a0();
  /* 113a134c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a134f mov dword ptr [0x113c1604], 0 */
  w32((uint32_t)(0x113c1604), (0x0u));
  /* 113a1359 jmp 0x113a1381 */
  goto L_113a1381;
L_113a135b:;
  /* 113a135b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a135f je 0x113a136e */
  if (C.zf) goto L_113a136e;
  /* 113a1361 call 0x113a1550 */
  push32(0x113a1366u); f_113a1550();
  /* 113a1366 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 113a136c jmp 0x113a1378 */
  goto L_113a1378;
L_113a136e:;
  /* 113a136e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_113a1378:;
  /* 113a1378 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 113a137e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_113a1381:;
  /* 113a1381 jmp 0x113a138b */
  goto L_113a138b;
L_113a1383:;
  /* 113a1383 call 0x113a1550 */
  push32(0x113a1388u); f_113a1550();
  /* 113a1388 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a138b:;
  /* 113a138b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a138f je 0x113a13a8 */
  if (C.zf) goto L_113a13a8;
  /* 113a1391 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 113a1393 call 0x1139a0b0 */
  push32(0x113a1398u); f_1139a0b0();
  /* 113a1398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a139b mov eax, dword ptr [0x113c2ab4] */
  EAX = (r32((uint32_t)(0x113c2ab4)));
  /* 113a13a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a13a3 mov dword ptr [0x113c2ab4], eax */
  w32((uint32_t)(0x113c2ab4), (EAX));
L_113a13a8:;
  /* 113a13a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113a13ab:;
  /* 113a13ab mov esp, ebp */
  ESP = (EBP);
  /* 113a13ad pop ebp */
  EBP = (pop32());
  /* 113a13ae ret  */
  ESPCHK(0x113a0fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113b0 @ 0x113a13b0 (403 bytes, 117 insns) */
void f_113a13b0(void) {
  FTRACE(0x113a13b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a13b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a13b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a13b3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a13b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a13bc push eax */
  push32((uint32_t)(EAX));
  /* 113a13bd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 113a13c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a13c4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 113a13ca push edx */
  push32((uint32_t)(EDX));
  /* 113a13cb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 113a13d1 push eax */
  push32((uint32_t)(EAX));
  /* 113a13d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a13d5 push ecx */
  push32((uint32_t)(ECX));
  /* 113a13d6 call 0x113a1650 */
  push32(0x113a13dbu); f_113a1650();
  /* 113a13db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a13de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a13e0 jne 0x113a13e9 */
  if (!C.zf) goto L_113a13e9;
  /* 113a13e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a13e4 jmp 0x113a153f */
  goto L_113a153f;
L_113a13e9:;
  /* 113a13e9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 113a13ee push 0x113be42c */
  push32((uint32_t)(0x113be42cu));
  /* 113a13f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a13f5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 113a13fb push edx */
  push32((uint32_t)(EDX));
  /* 113a13fc call 0x11399440 */
  push32(0x113a1401u); f_11399440();
  /* 113a1401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1404 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1407 push eax */
  push32((uint32_t)(EAX));
  /* 113a1408 call 0x11396610 */
  push32(0x113a140du); f_11396610();
  /* 113a140d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1410 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a1413 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1417 jne 0x113a1420 */
  if (!C.zf) goto L_113a1420;
  /* 113a1419 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a141b jmp 0x113a153f */
  goto L_113a153f;
L_113a1420:;
  /* 113a1420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1423 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1426 mov ecx, dword ptr [eax + 0x113c1604] */
  ECX = (r32((uint32_t)(EAX + 0x113c1604)));
  /* 113a142c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a142f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1432 mov eax, dword ptr [edx*4 + 0x113c29e8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x113c29e8)));
  /* 113a1439 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a143c push 6 */
  push32((uint32_t)(0x6u));
  /* 113a143e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1441 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1444 add ecx, 0x113c2a40 */
  { uint32_t _a=(ECX),_b=(0x113c2a40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a144a push ecx */
  push32((uint32_t)(ECX));
  /* 113a144b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 113a144e push edx */
  push32((uint32_t)(EDX));
  /* 113a144f call 0x1139d830 */
  push32(0x113a1454u); f_1139d830();
  /* 113a1454 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1457 mov eax, dword ptr [0x113c2a00] */
  EAX = (r32((uint32_t)(0x113c2a00)));
  /* 113a145c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113a145f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 113a1465 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1466 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1469 push edx */
  push32((uint32_t)(EDX));
  /* 113a146a call 0x113995c0 */
  push32(0x113a146fu); f_113995c0();
  /* 113a146f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1475 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1478 mov dword ptr [ecx + 0x113c1604], eax */
  w32((uint32_t)(ECX + 0x113c1604), (EAX));
  /* 113a147e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 113a1484 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a148a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a148d mov dword ptr [eax*4 + 0x113c29e8], edx */
  w32((uint32_t)(EAX*4 + 0x113c29e8), (EDX));
  /* 113a1494 push 6 */
  push32((uint32_t)(0x6u));
  /* 113a1496 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 113a149c push ecx */
  push32((uint32_t)(ECX));
  /* 113a149d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a14a0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a14a3 add edx, 0x113c2a40 */
  { uint32_t _a=(EDX),_b=(0x113c2a40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a14a9 push edx */
  push32((uint32_t)(EDX));
  /* 113a14aa call 0x1139d830 */
  push32(0x113a14afu); f_1139d830();
  /* 113a14af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a14b2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a14b6 jne 0x113a14c3 */
  if (!C.zf) goto L_113a14c3;
  /* 113a14b8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a14be mov dword ptr [0x113c2a00], eax */
  w32((uint32_t)(0x113c2a00), (EAX));
L_113a14c3:;
  /* 113a14c3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a14c7 jne 0x113a14d5 */
  if (!C.zf) goto L_113a14d5;
  /* 113a14c9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 113a14cf mov dword ptr [0x113c2a04], ecx */
  w32((uint32_t)(0x113c2a04), (ECX));
L_113a14d5:;
  /* 113a14d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a14d8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a14db call dword ptr [edx + 0x113c1608] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x113c1608))), 0x113a14e1u);
  /* 113a14e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a14e3 je 0x113a151c */
  if (C.zf) goto L_113a151c;
  /* 113a14e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a14e8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a14eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a14ee mov dword ptr [eax + 0x113c1604], ecx */
  w32((uint32_t)(EAX + 0x113c1604), (ECX));
  /* 113a14f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a14f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a14f9 push edx */
  push32((uint32_t)(EDX));
  /* 113a14fa call 0x113970a0 */
  push32(0x113a14ffu); f_113970a0();
  /* 113a14ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1508 mov dword ptr [eax*4 + 0x113c29e8], ecx */
  w32((uint32_t)(EAX*4 + 0x113c29e8), (ECX));
  /* 113a150f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a1512 mov dword ptr [0x113c2a00], edx */
  w32((uint32_t)(0x113c2a00), (EDX));
  /* 113a1518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a151a jmp 0x113a153f */
  goto L_113a153f;
L_113a151c:;
  /* 113a151c cmp dword ptr [ebp - 0xc], 0x113c14f0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x113c14f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1523 je 0x113a1533 */
  if (C.zf) goto L_113a1533;
  /* 113a1525 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1527 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a152a push eax */
  push32((uint32_t)(EAX));
  /* 113a152b call 0x113970a0 */
  push32(0x113a1530u); f_113970a0();
  /* 113a1530 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a1533:;
  /* 113a1533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1536 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a1539 mov eax, dword ptr [ecx + 0x113c1604] */
  EAX = (r32((uint32_t)(ECX + 0x113c1604)));
L_113a153f:;
  /* 113a153f mov esp, ebp */
  ESP = (EBP);
  /* 113a1541 pop ebp */
  EBP = (pop32());
  /* 113a1542 ret  */
  ESPCHK(0x113a13b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011550 @ 0x113a1550 (256 bytes, 72 insns) */
void f_113a1550(void) {
  FTRACE(0x113a1550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1550 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1551 mov ebp, esp */
  EBP = (ESP);
  /* 113a1553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1556 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 113a155d cmp dword ptr [0x113c1604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c1604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1564 jne 0x113a1584 */
  if (!C.zf) goto L_113a1584;
  /* 113a1566 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 113a156b push 0x113be42c */
  push32((uint32_t)(0x113be42cu));
  /* 113a1570 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1572 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 113a1577 call 0x11396610 */
  push32(0x113a157cu); f_11396610();
  /* 113a157c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a157f mov dword ptr [0x113c1604], eax */
  w32((uint32_t)(0x113c1604), (EAX));
L_113a1584:;
  /* 113a1584 mov eax, dword ptr [0x113c1604] */
  EAX = (r32((uint32_t)(0x113c1604)));
  /* 113a1589 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113a158c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a1593 jmp 0x113a159e */
  goto L_113a159e;
L_113a1595:;
  /* 113a1595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1598 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a159b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a159e:;
  /* 113a159e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a15a1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a15a4 mov eax, dword ptr [edx + 0x113c1604] */
  EAX = (r32((uint32_t)(EDX + 0x113c1604)));
  /* 113a15aa push eax */
  push32((uint32_t)(EAX));
  /* 113a15ab push 0x113be438 */
  push32((uint32_t)(0x113be438u));
  /* 113a15b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a15b3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a15b6 mov edx, dword ptr [ecx + 0x113c1600] */
  EDX = (r32((uint32_t)(ECX + 0x113c1600)));
  /* 113a15bc push edx */
  push32((uint32_t)(EDX));
  /* 113a15bd push 3 */
  push32((uint32_t)(0x3u));
  /* 113a15bf mov eax, dword ptr [0x113c1604] */
  EAX = (r32((uint32_t)(0x113c1604)));
  /* 113a15c4 push eax */
  push32((uint32_t)(EAX));
  /* 113a15c5 call 0x113a17f0 */
  push32(0x113a15cau); f_113a17f0();
  /* 113a15ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a15cd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a15d1 jge 0x113a1619 */
  if ((C.sf==C.of)) goto L_113a1619;
  /* 113a15d3 push 0x113be424 */
  push32((uint32_t)(0x113be424u));
  /* 113a15d8 mov ecx, dword ptr [0x113c1604] */
  ECX = (r32((uint32_t)(0x113c1604)));
  /* 113a15de push ecx */
  push32((uint32_t)(ECX));
  /* 113a15df call 0x113995d0 */
  push32(0x113a15e4u); f_113995d0();
  /* 113a15e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a15e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a15ea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a15ed imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a15f0 mov eax, dword ptr [edx + 0x113c1604] */
  EAX = (r32((uint32_t)(EDX + 0x113c1604)));
  /* 113a15f6 push eax */
  push32((uint32_t)(EAX));
  /* 113a15f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a15fa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a15fd mov edx, dword ptr [ecx + 0x113c1604] */
  EDX = (r32((uint32_t)(ECX + 0x113c1604)));
  /* 113a1603 push edx */
  push32((uint32_t)(EDX));
  /* 113a1604 call 0x1139f090 */
  push32(0x113a1609u); f_1139f090();
  /* 113a1609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a160c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a160e je 0x113a1617 */
  if (C.zf) goto L_113a1617;
  /* 113a1610 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_113a1617:;
  /* 113a1617 jmp 0x113a1647 */
  goto L_113a1647;
L_113a1619:;
  /* 113a1619 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a161d jne 0x113a1626 */
  if (!C.zf) goto L_113a1626;
  /* 113a161f mov eax, dword ptr [0x113c1604] */
  EAX = (r32((uint32_t)(0x113c1604)));
  /* 113a1624 jmp 0x113a164c */
  goto L_113a164c;
L_113a1626:;
  /* 113a1626 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1628 mov eax, dword ptr [0x113c1604] */
  EAX = (r32((uint32_t)(0x113c1604)));
  /* 113a162d push eax */
  push32((uint32_t)(EAX));
  /* 113a162e call 0x113970a0 */
  push32(0x113a1633u); f_113970a0();
  /* 113a1633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1636 mov dword ptr [0x113c1604], 0 */
  w32((uint32_t)(0x113c1604), (0x0u));
  /* 113a1640 mov eax, dword ptr [0x113c161c] */
  EAX = (r32((uint32_t)(0x113c161c)));
  /* 113a1645 jmp 0x113a164c */
  goto L_113a164c;
L_113a1647:;
  /* 113a1647 jmp 0x113a1595 */
  goto L_113a1595;
L_113a164c:;
  /* 113a164c mov esp, ebp */
  ESP = (EBP);
  /* 113a164e pop ebp */
  EBP = (pop32());
  /* 113a164f ret  */
  ESPCHK(0x113a1550u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x113a1650 (388 bytes, 115 insns) */
void f_113a1650(void) {
  FTRACE(0x113a1650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1650 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1651 mov ebp, esp */
  EBP = (ESP);
  /* 113a1653 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a165d jne 0x113a1666 */
  if (!C.zf) goto L_113a1666;
  /* 113a165f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1661 jmp 0x113a17d0 */
  goto L_113a17d0;
L_113a1666:;
  /* 113a1666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1669 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a166c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a166f jne 0x113a16c0 */
  if (!C.zf) goto L_113a16c0;
  /* 113a1671 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1674 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113a1678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a167a jne 0x113a16c0 */
  if (!C.zf) goto L_113a16c0;
  /* 113a167c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a167f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 113a1682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1685 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 113a1689 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a168d je 0x113a16a9 */
  if (C.zf) goto L_113a16a9;
  /* 113a168f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1692 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 113a1697 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a169a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 113a16a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a16a3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_113a16a9:;
  /* 113a16a9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a16ad je 0x113a16b8 */
  if (C.zf) goto L_113a16b8;
  /* 113a16af mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a16b2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113a16b8:;
  /* 113a16b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a16bb jmp 0x113a17d0 */
  goto L_113a17d0;
L_113a16c0:;
  /* 113a16c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a16c3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a16c4 push 0x113c1578 */
  push32((uint32_t)(0x113c1578u));
  /* 113a16c9 call 0x1139f090 */
  push32(0x113a16ceu); f_1139f090();
  /* 113a16ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a16d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a16d3 je 0x113a1788 */
  if (C.zf) goto L_113a1788;
  /* 113a16d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a16dc push edx */
  push32((uint32_t)(EDX));
  /* 113a16dd push 0x113c14f4 */
  push32((uint32_t)(0x113c14f4u));
  /* 113a16e2 call 0x1139f090 */
  push32(0x113a16e7u); f_1139f090();
  /* 113a16e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a16ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a16ec je 0x113a1788 */
  if (C.zf) goto L_113a1788;
  /* 113a16f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a16f5 push eax */
  push32((uint32_t)(EAX));
  /* 113a16f6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 113a16fc push ecx */
  push32((uint32_t)(ECX));
  /* 113a16fd call 0x113a1840 */
  push32(0x113a1702u); f_113a1840();
  /* 113a1702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1707 je 0x113a1710 */
  if (C.zf) goto L_113a1710;
  /* 113a1709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a170b jmp 0x113a17d0 */
  goto L_113a17d0;
L_113a1710:;
  /* 113a1710 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 113a1716 push edx */
  push32((uint32_t)(EDX));
  /* 113a1717 push 0x113c2a14 */
  push32((uint32_t)(0x113c2a14u));
  /* 113a171c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 113a1722 push eax */
  push32((uint32_t)(EAX));
  /* 113a1723 call 0x113a3a60 */
  push32(0x113a1728u); f_113a3a60();
  /* 113a1728 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a172b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a172d jne 0x113a1736 */
  if (!C.zf) goto L_113a1736;
  /* 113a172f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1731 jmp 0x113a17d0 */
  goto L_113a17d0;
L_113a1736:;
  /* 113a1736 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a1738 mov cx, word ptr [0x113c2a18] */
  CX = (r16((uint32_t)(0x113c2a18)));
  /* 113a173f mov dword ptr [0x113c2a1c], ecx */
  w32((uint32_t)(0x113c2a1c), (ECX));
  /* 113a1745 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 113a174b push edx */
  push32((uint32_t)(EDX));
  /* 113a174c push 0x113c1578 */
  push32((uint32_t)(0x113c1578u));
  /* 113a1751 call 0x113a19a0 */
  push32(0x113a1756u); f_113a19a0();
  /* 113a1756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1759 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a175c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a175f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a1761 je 0x113a1776 */
  if (C.zf) goto L_113a1776;
  /* 113a1763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1766 push edx */
  push32((uint32_t)(EDX));
  /* 113a1767 push 0x113c14f4 */
  push32((uint32_t)(0x113c14f4u));
  /* 113a176c call 0x113995c0 */
  push32(0x113a1771u); f_113995c0();
  /* 113a1771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1774 jmp 0x113a1788 */
  goto L_113a1788;
L_113a1776:;
  /* 113a1776 push 0x113c1578 */
  push32((uint32_t)(0x113c1578u));
  /* 113a177b push 0x113c14f4 */
  push32((uint32_t)(0x113c14f4u));
  /* 113a1780 call 0x113995c0 */
  push32(0x113a1785u); f_113995c0();
  /* 113a1785 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a1788:;
  /* 113a1788 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a178c je 0x113a17a1 */
  if (C.zf) goto L_113a17a1;
  /* 113a178e push 6 */
  push32((uint32_t)(0x6u));
  /* 113a1790 push 0x113c2a14 */
  push32((uint32_t)(0x113c2a14u));
  /* 113a1795 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1798 push eax */
  push32((uint32_t)(EAX));
  /* 113a1799 call 0x1139d830 */
  push32(0x113a179eu); f_1139d830();
  /* 113a179e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a17a1:;
  /* 113a17a1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a17a5 je 0x113a17ba */
  if (C.zf) goto L_113a17ba;
  /* 113a17a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 113a17a9 push 0x113c2a1c */
  push32((uint32_t)(0x113c2a1cu));
  /* 113a17ae mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a17b1 push ecx */
  push32((uint32_t)(ECX));
  /* 113a17b2 call 0x1139d830 */
  push32(0x113a17b7u); f_1139d830();
  /* 113a17b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a17ba:;
  /* 113a17ba push 0x113c1578 */
  push32((uint32_t)(0x113c1578u));
  /* 113a17bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a17c2 push edx */
  push32((uint32_t)(EDX));
  /* 113a17c3 call 0x113995c0 */
  push32(0x113a17c8u); f_113995c0();
  /* 113a17c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a17cb mov eax, 0x113c1578 */
  EAX = (0x113c1578u);
L_113a17d0:;
  /* 113a17d0 mov esp, ebp */
  ESP = (EBP);
  /* 113a17d2 pop ebp */
  EBP = (pop32());
  /* 113a17d3 ret  */
  ESPCHK(0x113a1650u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x113a17e0 (7 bytes, 5 insns) */
void f_113a17e0(void) {
  FTRACE(0x113a17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a17e1 mov ebp, esp */
  EBP = (ESP);
  /* 113a17e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a17e5 pop ebp */
  EBP = (pop32());
  /* 113a17e6 ret  */
  ESPCHK(0x113a17e0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x113a17f0 (79 bytes, 28 insns) */
void f_113a17f0(void) {
  FTRACE(0x113a17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a17f1 mov ebp, esp */
  EBP = (ESP);
  /* 113a17f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a17f6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 113a17f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a17fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a1803 jmp 0x113a180e */
  goto L_113a180e;
L_113a1805:;
  /* 113a1805 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a180b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_113a180e:;
  /* 113a180e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1811 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1814 jge 0x113a1834 */
  if ((C.sf==C.of)) goto L_113a1834;
  /* 113a1816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1819 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a181c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a181f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1822 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 113a1825 push edx */
  push32((uint32_t)(EDX));
  /* 113a1826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1829 push eax */
  push32((uint32_t)(EAX));
  /* 113a182a call 0x113995d0 */
  push32(0x113a182fu); f_113995d0();
  /* 113a182f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1832 jmp 0x113a1805 */
  goto L_113a1805;
L_113a1834:;
  /* 113a1834 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a183b mov esp, ebp */
  ESP = (EBP);
  /* 113a183d pop ebp */
  EBP = (pop32());
  /* 113a183e ret  */
  ESPCHK(0x113a17f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011840 @ 0x113a1840 (349 bytes, 122 insns) */
void f_113a1840(void) {
  FTRACE(0x113a1840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1840 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1841 mov ebp, esp */
  EBP = (ESP);
  /* 113a1843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1846 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 113a184b push 0 */
  push32((uint32_t)(0x0u));
  /* 113a184d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1850 push eax */
  push32((uint32_t)(EAX));
  /* 113a1851 call 0x1139acc0 */
  push32(0x113a1856u); f_1139acc0();
  /* 113a1856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1859 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a185c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a185f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1861 jne 0x113a186a */
  if (!C.zf) goto L_113a186a;
  /* 113a1863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1865 jmp 0x113a1999 */
  goto L_113a1999;
L_113a186a:;
  /* 113a186a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a186d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a1870 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1873 jne 0x113a18a0 */
  if (!C.zf) goto L_113a18a0;
  /* 113a1875 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1878 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113a187c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a187e je 0x113a18a0 */
  if (C.zf) goto L_113a18a0;
  /* 113a1880 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1883 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1886 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a188a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1890 push edx */
  push32((uint32_t)(EDX));
  /* 113a1891 call 0x113995c0 */
  push32(0x113a1896u); f_113995c0();
  /* 113a1896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1899 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a189b jmp 0x113a1999 */
  goto L_113a1999;
L_113a18a0:;
  /* 113a18a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a18a7 jmp 0x113a18b2 */
  goto L_113a18b2;
L_113a18a9:;
  /* 113a18a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a18ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a18af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a18b2:;
  /* 113a18b2 push 0x113be43c */
  push32((uint32_t)(0x113be43cu));
  /* 113a18b7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a18ba push ecx */
  push32((uint32_t)(ECX));
  /* 113a18bb call 0x113a39a0 */
  push32(0x113a18c0u); f_113a39a0();
  /* 113a18c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a18c3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a18c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a18ca jne 0x113a18d4 */
  if (!C.zf) goto L_113a18d4;
  /* 113a18cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a18cf jmp 0x113a1999 */
  goto L_113a1999;
L_113a18d4:;
  /* 113a18d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a18d7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a18da mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a18dc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 113a18df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a18e3 jne 0x113a190a */
  if (!C.zf) goto L_113a190a;
  /* 113a18e5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a18e9 jge 0x113a190a */
  if ((C.sf==C.of)) goto L_113a190a;
  /* 113a18eb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a18ef cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a18f2 je 0x113a190a */
  if (C.zf) goto L_113a190a;
  /* 113a18f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a18f7 push edx */
  push32((uint32_t)(EDX));
  /* 113a18f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a18fb push eax */
  push32((uint32_t)(EAX));
  /* 113a18fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a18ff push ecx */
  push32((uint32_t)(ECX));
  /* 113a1900 call 0x11399e30 */
  push32(0x113a1905u); f_11399e30();
  /* 113a1905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1908 jmp 0x113a1970 */
  goto L_113a1970;
L_113a190a:;
  /* 113a190a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a190e jne 0x113a1938 */
  if (!C.zf) goto L_113a1938;
  /* 113a1910 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1914 jge 0x113a1938 */
  if ((C.sf==C.of)) goto L_113a1938;
  /* 113a1916 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a191a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a191d je 0x113a1938 */
  if (C.zf) goto L_113a1938;
  /* 113a191f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1922 push eax */
  push32((uint32_t)(EAX));
  /* 113a1923 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1926 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a192a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a192d push edx */
  push32((uint32_t)(EDX));
  /* 113a192e call 0x11399e30 */
  push32(0x113a1933u); f_11399e30();
  /* 113a1933 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1936 jmp 0x113a1970 */
  goto L_113a1970;
L_113a1938:;
  /* 113a1938 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a193c jne 0x113a196b */
  if (!C.zf) goto L_113a196b;
  /* 113a193e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a1942 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1944 je 0x113a194f */
  if (C.zf) goto L_113a194f;
  /* 113a1946 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a194a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a194d jne 0x113a196b */
  if (!C.zf) goto L_113a196b;
L_113a194f:;
  /* 113a194f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1952 push edx */
  push32((uint32_t)(EDX));
  /* 113a1953 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1956 push eax */
  push32((uint32_t)(EAX));
  /* 113a1957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a195a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1960 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1961 call 0x11399e30 */
  push32(0x113a1966u); f_11399e30();
  /* 113a1966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1969 jmp 0x113a1970 */
  goto L_113a1970;
L_113a196b:;
  /* 113a196b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a196e jmp 0x113a1999 */
  goto L_113a1999;
L_113a1970:;
  /* 113a1970 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a1974 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1977 jne 0x113a197b */
  if (!C.zf) goto L_113a197b;
  /* 113a1979 jmp 0x113a1997 */
  goto L_113a1997;
L_113a197b:;
  /* 113a197b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 113a197f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1981 jne 0x113a1985 */
  if (!C.zf) goto L_113a1985;
  /* 113a1983 jmp 0x113a1997 */
  goto L_113a1997;
L_113a1985:;
  /* 113a1985 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1988 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a198b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 113a198f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 113a1992 jmp 0x113a18a9 */
  goto L_113a18a9;
L_113a1997:;
  /* 113a1997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a1999:;
  /* 113a1999 mov esp, ebp */
  ESP = (EBP);
  /* 113a199b pop ebp */
  EBP = (pop32());
  /* 113a199c ret  */
  ESPCHK(0x113a1840u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x113a19a0 (101 bytes, 36 insns) */
void f_113a19a0(void) {
  FTRACE(0x113a19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a19a1 mov ebp, esp */
  EBP = (ESP);
  /* 113a19a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a19a6 push eax */
  push32((uint32_t)(EAX));
  /* 113a19a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a19aa push ecx */
  push32((uint32_t)(ECX));
  /* 113a19ab call 0x113995c0 */
  push32(0x113a19b0u); f_113995c0();
  /* 113a19b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a19b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a19b6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 113a19ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a19bc je 0x113a19d8 */
  if (C.zf) goto L_113a19d8;
  /* 113a19be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a19c1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a19c4 push ecx */
  push32((uint32_t)(ECX));
  /* 113a19c5 push 0x113be444 */
  push32((uint32_t)(0x113be444u));
  /* 113a19ca push 2 */
  push32((uint32_t)(0x2u));
  /* 113a19cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a19cf push edx */
  push32((uint32_t)(EDX));
  /* 113a19d0 call 0x113a17f0 */
  push32(0x113a19d5u); f_113a17f0();
  /* 113a19d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a19d8:;
  /* 113a19d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a19db movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 113a19e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a19e4 je 0x113a1a03 */
  if (C.zf) goto L_113a1a03;
  /* 113a19e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a19e9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a19ef push edx */
  push32((uint32_t)(EDX));
  /* 113a19f0 push 0x113be440 */
  push32((uint32_t)(0x113be440u));
  /* 113a19f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a19f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a19fa push eax */
  push32((uint32_t)(EAX));
  /* 113a19fb call 0x113a17f0 */
  push32(0x113a1a00u); f_113a17f0();
  /* 113a1a00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a1a03:;
  /* 113a1a03 pop ebp */
  EBP = (pop32());
  /* 113a1a04 ret  */
  ESPCHK(0x113a19a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x113a1a10 (970 bytes, 340 insns) */
void f_113a1a10(void) {
  FTRACE(0x113a1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1a11 mov ebp, esp */
  EBP = (ESP);
  /* 113a1a13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 113a1a15 push 0x113be490 */
  push32((uint32_t)(0x113be490u));
  /* 113a1a1a push 0x113a0578 */
  push32((uint32_t)(0x113a0578u));
  /* 113a1a1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 113a1a25 push eax */
  push32((uint32_t)(EAX));
  /* 113a1a26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 113a1a2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1a30 push ebx */
  push32((uint32_t)(EBX));
  /* 113a1a31 push esi */
  push32((uint32_t)(ESI));
  /* 113a1a32 push edi */
  push32((uint32_t)(EDI));
  /* 113a1a33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a1a36 cmp dword ptr [0x113c2a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1a3d jne 0x113a1a96 */
  if (!C.zf) goto L_113a1a96;
  /* 113a1a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1a41 push 0x113be388 */
  push32((uint32_t)(0x113be388u));
  /* 113a1a46 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1a48 push 0x113be388 */
  push32((uint32_t)(0x113be388u));
  /* 113a1a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1a51 call dword ptr [0x113c5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5308))), 0x113a1a57u);
  /* 113a1a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1a59 je 0x113a1a67 */
  if (C.zf) goto L_113a1a67;
  /* 113a1a5b mov dword ptr [0x113c2a20], 1 */
  w32((uint32_t)(0x113c2a20), (0x1u));
  /* 113a1a65 jmp 0x113a1a96 */
  goto L_113a1a96;
L_113a1a67:;
  /* 113a1a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1a69 push 0x113be384 */
  push32((uint32_t)(0x113be384u));
  /* 113a1a6e push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1a70 push 0x113be384 */
  push32((uint32_t)(0x113be384u));
  /* 113a1a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1a79 call dword ptr [0x113c530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c530c))), 0x113a1a7fu);
  /* 113a1a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1a81 je 0x113a1a8f */
  if (C.zf) goto L_113a1a8f;
  /* 113a1a83 mov dword ptr [0x113c2a20], 2 */
  w32((uint32_t)(0x113c2a20), (0x2u));
  /* 113a1a8d jmp 0x113a1a96 */
  goto L_113a1a96;
L_113a1a8f:;
  /* 113a1a8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1a91 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1a96:;
  /* 113a1a96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1a9a jle 0x113a1aaf */
  if ((C.zf||C.sf!=C.of)) goto L_113a1aaf;
  /* 113a1a9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a1a9f push eax */
  push32((uint32_t)(EAX));
  /* 113a1aa0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1aa4 call 0x113a1e10 */
  push32(0x113a1aa9u); f_113a1e10();
  /* 113a1aa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1aac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_113a1aaf:;
  /* 113a1aaf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1ab3 jle 0x113a1ac8 */
  if ((C.zf||C.sf!=C.of)) goto L_113a1ac8;
  /* 113a1ab5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113a1ab8 push edx */
  push32((uint32_t)(EDX));
  /* 113a1ab9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1abc push eax */
  push32((uint32_t)(EAX));
  /* 113a1abd call 0x113a1e10 */
  push32(0x113a1ac2u); f_113a1e10();
  /* 113a1ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1ac5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_113a1ac8:;
  /* 113a1ac8 cmp dword ptr [0x113c2a20], 2 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1acf jne 0x113a1af4 */
  if (!C.zf) goto L_113a1af4;
  /* 113a1ad1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113a1ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1ad5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1ad8 push edx */
  push32((uint32_t)(EDX));
  /* 113a1ad9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a1adc push eax */
  push32((uint32_t)(EAX));
  /* 113a1add mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1ae1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1ae4 push edx */
  push32((uint32_t)(EDX));
  /* 113a1ae5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1ae8 push eax */
  push32((uint32_t)(EAX));
  /* 113a1ae9 call dword ptr [0x113c530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c530c))), 0x113a1aefu);
  /* 113a1aef jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1af4:;
  /* 113a1af4 cmp dword ptr [0x113c2a20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1afb jne 0x113a1df2 */
  if (!C.zf) goto L_113a1df2;
  /* 113a1b01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b05 jne 0x113a1b10 */
  if (!C.zf) goto L_113a1b10;
  /* 113a1b07 mov ecx, dword ptr [0x113c2a00] */
  ECX = (r32((uint32_t)(0x113c2a00)));
  /* 113a1b0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_113a1b10:;
  /* 113a1b10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b14 je 0x113a1b20 */
  if (C.zf) goto L_113a1b20;
  /* 113a1b16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b1a jne 0x113a1c9c */
  if (!C.zf) goto L_113a1c9c;
L_113a1b20:;
  /* 113a1b20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a1b23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b26 jne 0x113a1b32 */
  if (!C.zf) goto L_113a1b32;
  /* 113a1b28 mov eax, 2 */
  EAX = (0x2u);
  /* 113a1b2d jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1b32:;
  /* 113a1b32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b36 jle 0x113a1b42 */
  if ((C.zf||C.sf!=C.of)) goto L_113a1b42;
  /* 113a1b38 mov eax, 1 */
  EAX = (0x1u);
  /* 113a1b3d jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1b42:;
  /* 113a1b42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b46 jle 0x113a1b52 */
  if ((C.zf||C.sf!=C.of)) goto L_113a1b52;
  /* 113a1b48 mov eax, 3 */
  EAX = (0x3u);
  /* 113a1b4d jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1b52:;
  /* 113a1b52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 113a1b55 push eax */
  push32((uint32_t)(EAX));
  /* 113a1b56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 113a1b59 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1b5a call dword ptr [0x113c533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c533c))), 0x113a1b60u);
  /* 113a1b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1b62 jne 0x113a1b6b */
  if (!C.zf) goto L_113a1b6b;
  /* 113a1b64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1b66 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1b6b:;
  /* 113a1b6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b6f jne 0x113a1b77 */
  if (!C.zf) goto L_113a1b77;
  /* 113a1b71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b75 je 0x113a1ba4 */
  if (C.zf) goto L_113a1ba4;
L_113a1b77:;
  /* 113a1b77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b7b jne 0x113a1b83 */
  if (!C.zf) goto L_113a1b83;
  /* 113a1b7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1b81 je 0x113a1ba4 */
  if (C.zf) goto L_113a1ba4;
L_113a1b83:;
  /* 113a1b83 push 0x113be450 */
  push32((uint32_t)(0x113be450u));
  /* 113a1b88 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1b8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 113a1b8f push 0x113be448 */
  push32((uint32_t)(0x113be448u));
  /* 113a1b94 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1b96 call 0x113955e0 */
  push32(0x113a1b9bu); f_113955e0();
  /* 113a1b9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1b9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1ba1 jne 0x113a1ba4 */
  if (!C.zf) goto L_113a1ba4;
  /* 113a1ba3 int3  */
  x86_unimpl("int3 @ 0x113a1ba3");
L_113a1ba4:;
  /* 113a1ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a1ba6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1ba8 jne 0x113a1b6b */
  if (!C.zf) goto L_113a1b6b;
  /* 113a1baa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1bae jle 0x113a1c23 */
  if ((C.zf||C.sf!=C.of)) goto L_113a1c23;
  /* 113a1bb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1bb4 jae 0x113a1bc0 */
  if (!C.cf) goto L_113a1bc0;
  /* 113a1bb6 mov eax, 3 */
  EAX = (0x3u);
  /* 113a1bbb jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1bc0:;
  /* 113a1bc0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 113a1bc3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 113a1bc6 jmp 0x113a1bd1 */
  goto L_113a1bd1;
L_113a1bc8:;
  /* 113a1bc8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1bcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1bce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_113a1bd1:;
  /* 113a1bd1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1bd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1bd6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a1bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1bda je 0x113a1c19 */
  if (C.zf) goto L_113a1c19;
  /* 113a1bdc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1bdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a1be1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113a1be4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1be6 je 0x113a1c19 */
  if (C.zf) goto L_113a1c19;
  /* 113a1be8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1beb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a1bed mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a1bef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1bf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1bf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a1bf6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1bf8 jl 0x113a1c17 */
  if ((C.sf!=C.of)) goto L_113a1c17;
  /* 113a1bfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1bfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a1bff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a1c01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a1c06 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113a1c09 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1c0b jg 0x113a1c17 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a1c17;
  /* 113a1c0d mov eax, 2 */
  EAX = (0x2u);
  /* 113a1c12 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1c17:;
  /* 113a1c17 jmp 0x113a1bc8 */
  goto L_113a1bc8;
L_113a1c19:;
  /* 113a1c19 mov eax, 3 */
  EAX = (0x3u);
  /* 113a1c1e jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1c23:;
  /* 113a1c23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1c27 jle 0x113a1c9c */
  if ((C.zf||C.sf!=C.of)) goto L_113a1c9c;
  /* 113a1c29 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1c2d jae 0x113a1c39 */
  if (!C.cf) goto L_113a1c39;
  /* 113a1c2f mov eax, 1 */
  EAX = (0x1u);
  /* 113a1c34 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1c39:;
  /* 113a1c39 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 113a1c3c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 113a1c3f jmp 0x113a1c4a */
  goto L_113a1c4a;
L_113a1c41:;
  /* 113a1c41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c44 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1c47 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_113a1c4a:;
  /* 113a1c4a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a1c4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a1c51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1c53 je 0x113a1c92 */
  if (C.zf) goto L_113a1c92;
  /* 113a1c55 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a1c5a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113a1c5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a1c5f je 0x113a1c92 */
  if (C.zf) goto L_113a1c92;
  /* 113a1c61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1c66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a1c68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a1c6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a1c6f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1c71 jl 0x113a1c90 */
  if ((C.sf!=C.of)) goto L_113a1c90;
  /* 113a1c73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1c76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a1c78 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a1c7a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 113a1c7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1c7f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113a1c82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1c84 jg 0x113a1c90 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a1c90;
  /* 113a1c86 mov eax, 2 */
  EAX = (0x2u);
  /* 113a1c8b jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1c90:;
  /* 113a1c90 jmp 0x113a1c41 */
  goto L_113a1c41;
L_113a1c92:;
  /* 113a1c92 mov eax, 1 */
  EAX = (0x1u);
  /* 113a1c97 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1c9c:;
  /* 113a1c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1ca0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a1ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1ca4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1ca7 push edx */
  push32((uint32_t)(EDX));
  /* 113a1ca8 push 9 */
  push32((uint32_t)(0x9u));
  /* 113a1caa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113a1cad push eax */
  push32((uint32_t)(EAX));
  /* 113a1cae call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a1cb4u);
  /* 113a1cb4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113a1cb7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1cbb jne 0x113a1cc4 */
  if (!C.zf) goto L_113a1cc4;
  /* 113a1cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1cbf jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1cc4:;
  /* 113a1cc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 113a1ccb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a1cce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a1cd0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1cd3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a1cd5 call 0x113997b0 */
  push32(0x113a1cdau); f_113997b0();
  /* 113a1cda mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 113a1cdd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a1ce0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 113a1ce3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113a1ce6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a1ced jmp 0x113a1d06 */
  goto L_113a1d06;
  /* 113a1cef mov eax, 1 */
  EAX = (0x1u);
  /* 113a1cf4 ret  */
  ESPCHK(0x113a1a10u, _esp0);
  ESP += 4; return;
  /* 113a1cf5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a1cf8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 113a1cff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a1d06:;
  /* 113a1d06 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1d0a jne 0x113a1d13 */
  if (!C.zf) goto L_113a1d13;
  /* 113a1d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1d0e jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1d13:;
  /* 113a1d13 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a1d16 push edx */
  push32((uint32_t)(EDX));
  /* 113a1d17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a1d1a push eax */
  push32((uint32_t)(EAX));
  /* 113a1d1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 113a1d1e push ecx */
  push32((uint32_t)(ECX));
  /* 113a1d1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a1d22 push edx */
  push32((uint32_t)(EDX));
  /* 113a1d23 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1d25 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113a1d28 push eax */
  push32((uint32_t)(EAX));
  /* 113a1d29 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a1d2fu);
  /* 113a1d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1d31 jne 0x113a1d3a */
  if (!C.zf) goto L_113a1d3a;
  /* 113a1d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1d35 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1d3a:;
  /* 113a1d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 113a1d3e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113a1d41 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1d42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1d45 push edx */
  push32((uint32_t)(EDX));
  /* 113a1d46 push 9 */
  push32((uint32_t)(0x9u));
  /* 113a1d48 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113a1d4b push eax */
  push32((uint32_t)(EAX));
  /* 113a1d4c call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a1d52u);
  /* 113a1d52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113a1d55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1d59 jne 0x113a1d62 */
  if (!C.zf) goto L_113a1d62;
  /* 113a1d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1d5d jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1d62:;
  /* 113a1d62 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 113a1d69 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a1d6c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 113a1d6e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1d71 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 113a1d73 call 0x113997b0 */
  push32(0x113a1d78u); f_113997b0();
  /* 113a1d78 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 113a1d7b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 113a1d7e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 113a1d81 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 113a1d84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a1d8b jmp 0x113a1da4 */
  goto L_113a1da4;
  /* 113a1d8d mov eax, 1 */
  EAX = (0x1u);
  /* 113a1d92 ret  */
  ESPCHK(0x113a1a10u, _esp0);
  ESP += 4; return;
  /* 113a1d93 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 113a1d96 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 113a1d9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a1da4:;
  /* 113a1da4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1da8 jne 0x113a1dae */
  if (!C.zf) goto L_113a1dae;
  /* 113a1daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1dac jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1dae:;
  /* 113a1dae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a1db1 push edx */
  push32((uint32_t)(EDX));
  /* 113a1db2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a1db5 push eax */
  push32((uint32_t)(EAX));
  /* 113a1db6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 113a1db9 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1dba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 113a1dbd push edx */
  push32((uint32_t)(EDX));
  /* 113a1dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 113a1dc0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 113a1dc3 push eax */
  push32((uint32_t)(EAX));
  /* 113a1dc4 call dword ptr [0x113c5330] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5330))), 0x113a1dcau);
  /* 113a1dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1dcc jne 0x113a1dd2 */
  if (!C.zf) goto L_113a1dd2;
  /* 113a1dce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1dd0 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1dd2:;
  /* 113a1dd2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a1dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1dd6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a1dd9 push edx */
  push32((uint32_t)(EDX));
  /* 113a1dda mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a1ddd push eax */
  push32((uint32_t)(EAX));
  /* 113a1dde mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a1de1 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1de5 push edx */
  push32((uint32_t)(EDX));
  /* 113a1de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1de9 push eax */
  push32((uint32_t)(EAX));
  /* 113a1dea call dword ptr [0x113c5308] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5308))), 0x113a1df0u);
  /* 113a1df0 jmp 0x113a1df4 */
  goto L_113a1df4;
L_113a1df2:;
  /* 113a1df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a1df4:;
  /* 113a1df4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 113a1df7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a1dfa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 113a1e01 pop edi */
  EDI = (pop32());
  /* 113a1e02 pop esi */
  ESI = (pop32());
  /* 113a1e03 pop ebx */
  EBX = (pop32());
  /* 113a1e04 mov esp, ebp */
  ESP = (EBP);
  /* 113a1e06 pop ebp */
  EBP = (pop32());
  /* 113a1e07 ret  */
  ESPCHK(0x113a1a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x113a1e10 (80 bytes, 32 insns) */
void f_113a1e10(void) {
  FTRACE(0x113a1e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1e10 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1e11 mov ebp, esp */
  EBP = (ESP);
  /* 113a1e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1e16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a1e19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a1e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1e1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a1e22:;
  /* 113a1e22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1e28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1e2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a1e2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1e30 je 0x113a1e47 */
  if (C.zf) goto L_113a1e47;
  /* 113a1e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1e35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a1e38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1e3a je 0x113a1e47 */
  if (C.zf) goto L_113a1e47;
  /* 113a1e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1e3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1e42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a1e45 jmp 0x113a1e22 */
  goto L_113a1e22;
L_113a1e47:;
  /* 113a1e47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1e4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a1e4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a1e4f jne 0x113a1e59 */
  if (!C.zf) goto L_113a1e59;
  /* 113a1e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a1e54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1e57 jmp 0x113a1e5c */
  goto L_113a1e5c;
L_113a1e59:;
  /* 113a1e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_113a1e5c:;
  /* 113a1e5c mov esp, ebp */
  ESP = (EBP);
  /* 113a1e5e pop ebp */
  EBP = (pop32());
  /* 113a1e5f ret  */
  ESPCHK(0x113a1e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e60 @ 0x113a1e60 (736 bytes, 224 insns) */
void f_113a1e60(void) {
  FTRACE(0x113a1e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a1e60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a1e61 mov ebp, esp */
  EBP = (ESP);
  /* 113a1e63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1e66 push esi */
  push32((uint32_t)(ESI));
  /* 113a1e67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1e6b je 0x113a1e8c */
  if (C.zf) goto L_113a1e8c;
  /* 113a1e6d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113a1e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1e72 push eax */
  push32((uint32_t)(EAX));
  /* 113a1e73 call 0x113a4800 */
  push32(0x113a1e78u); f_113a4800();
  /* 113a1e78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1e7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113a1e7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1e82 je 0x113a1e8c */
  if (C.zf) goto L_113a1e8c;
  /* 113a1e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1e87 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1e8a jne 0x113a1e94 */
  if (!C.zf) goto L_113a1e94;
L_113a1e8c:;
  /* 113a1e8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a1e8f jmp 0x113a213b */
  goto L_113a213b;
L_113a1e94:;
  /* 113a1e94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a1e97 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 113a1e9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a1e9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1e9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 113a1ea0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 113a1ea3 mov ecx, dword ptr [0x113c2758] */
  ECX = (r32((uint32_t)(0x113c2758)));
  /* 113a1ea9 cmp ecx, dword ptr [0x113c275c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x113c275c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1eaf jne 0x113a1ec5 */
  if (!C.zf) goto L_113a1ec5;
  /* 113a1eb1 mov edx, dword ptr [0x113c2758] */
  EDX = (r32((uint32_t)(0x113c2758)));
  /* 113a1eb7 push edx */
  push32((uint32_t)(EDX));
  /* 113a1eb8 call 0x113a21c0 */
  push32(0x113a1ebdu); f_113a21c0();
  /* 113a1ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1ec0 mov dword ptr [0x113c2758], eax */
  w32((uint32_t)(0x113c2758), (EAX));
L_113a1ec5:;
  /* 113a1ec5 cmp dword ptr [0x113c2758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1ecc jne 0x113a1f85 */
  if (!C.zf) goto L_113a1f85;
  /* 113a1ed2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1ed6 je 0x113a1ef7 */
  if (C.zf) goto L_113a1ef7;
  /* 113a1ed8 cmp dword ptr [0x113c2760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1edf je 0x113a1ef7 */
  if (C.zf) goto L_113a1ef7;
  /* 113a1ee1 call 0x113a03d0 */
  push32(0x113a1ee6u); f_113a03d0();
  /* 113a1ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a1ee8 je 0x113a1ef2 */
  if (C.zf) goto L_113a1ef2;
  /* 113a1eea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a1eed jmp 0x113a213b */
  goto L_113a213b;
L_113a1ef2:;
  /* 113a1ef2 jmp 0x113a1f85 */
  goto L_113a1f85;
L_113a1ef7:;
  /* 113a1ef7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1efb je 0x113a1f04 */
  if (C.zf) goto L_113a1f04;
  /* 113a1efd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a1eff jmp 0x113a213b */
  goto L_113a213b;
L_113a1f04:;
  /* 113a1f04 cmp dword ptr [0x113c2758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1f0b jne 0x113a1f44 */
  if (!C.zf) goto L_113a1f44;
  /* 113a1f0d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 113a1f12 push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a1f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1f19 push 4 */
  push32((uint32_t)(0x4u));
  /* 113a1f1b call 0x11396610 */
  push32(0x113a1f20u); f_11396610();
  /* 113a1f20 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1f23 mov dword ptr [0x113c2758], eax */
  w32((uint32_t)(0x113c2758), (EAX));
  /* 113a1f28 cmp dword ptr [0x113c2758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1f2f jne 0x113a1f39 */
  if (!C.zf) goto L_113a1f39;
  /* 113a1f31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a1f34 jmp 0x113a213b */
  goto L_113a213b;
L_113a1f39:;
  /* 113a1f39 mov eax, dword ptr [0x113c2758] */
  EAX = (r32((uint32_t)(0x113c2758)));
  /* 113a1f3e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_113a1f44:;
  /* 113a1f44 cmp dword ptr [0x113c2760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1f4b jne 0x113a1f85 */
  if (!C.zf) goto L_113a1f85;
  /* 113a1f4d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 113a1f52 push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a1f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1f59 push 4 */
  push32((uint32_t)(0x4u));
  /* 113a1f5b call 0x11396610 */
  push32(0x113a1f60u); f_11396610();
  /* 113a1f60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1f63 mov dword ptr [0x113c2760], eax */
  w32((uint32_t)(0x113c2760), (EAX));
  /* 113a1f68 cmp dword ptr [0x113c2760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1f6f jne 0x113a1f79 */
  if (!C.zf) goto L_113a1f79;
  /* 113a1f71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a1f74 jmp 0x113a213b */
  goto L_113a213b;
L_113a1f79:;
  /* 113a1f79 mov ecx, dword ptr [0x113c2760] */
  ECX = (r32((uint32_t)(0x113c2760)));
  /* 113a1f7f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_113a1f85:;
  /* 113a1f85 mov edx, dword ptr [0x113c2758] */
  EDX = (r32((uint32_t)(0x113c2758)));
  /* 113a1f8b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 113a1f8e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a1f91 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a1f94 push eax */
  push32((uint32_t)(EAX));
  /* 113a1f95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a1f98 push ecx */
  push32((uint32_t)(ECX));
  /* 113a1f99 call 0x113a2140 */
  push32(0x113a1f9eu); f_113a2140();
  /* 113a1f9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1fa1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a1fa4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1fa8 jl 0x113a2041 */
  if ((C.sf!=C.of)) goto L_113a2041;
  /* 113a1fae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1fb1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1fb4 je 0x113a2041 */
  if (C.zf) goto L_113a2041;
  /* 113a1fba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1fbe je 0x113a2033 */
  if (C.zf) goto L_113a2033;
  /* 113a1fc0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a1fc2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1fc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1fc8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 113a1fcb push edx */
  push32((uint32_t)(EDX));
  /* 113a1fcc call 0x113970a0 */
  push32(0x113a1fd1u); f_113970a0();
  /* 113a1fd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1fd4 jmp 0x113a1fdf */
  goto L_113a1fdf;
L_113a1fd6:;
  /* 113a1fd6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1fd9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a1fdc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a1fdf:;
  /* 113a1fdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1fe2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1fe5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a1fe9 je 0x113a2000 */
  if (C.zf) goto L_113a2000;
  /* 113a1feb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1fee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1ff1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a1ff4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 113a1ff7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 113a1ffb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 113a1ffe jmp 0x113a1fd6 */
  goto L_113a1fd6;
L_113a2000:;
  /* 113a2000 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 113a2005 push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a200a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a200c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a200f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113a2012 push eax */
  push32((uint32_t)(EAX));
  /* 113a2013 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2016 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2017 call 0x11396aa0 */
  push32(0x113a201cu); f_11396aa0();
  /* 113a201c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a201f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a2022 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2026 je 0x113a2031 */
  if (C.zf) goto L_113a2031;
  /* 113a2028 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a202b mov dword ptr [0x113c2758], edx */
  w32((uint32_t)(0x113c2758), (EDX));
L_113a2031:;
  /* 113a2031 jmp 0x113a203f */
  goto L_113a203f;
L_113a2033:;
  /* 113a2033 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a203c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_113a203f:;
  /* 113a203f jmp 0x113a20b4 */
  goto L_113a20b4;
L_113a2041:;
  /* 113a2041 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2045 jne 0x113a20ad */
  if (!C.zf) goto L_113a20ad;
  /* 113a2047 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a204b jge 0x113a2055 */
  if ((C.sf==C.of)) goto L_113a2055;
  /* 113a204d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2050 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a2052 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a2055:;
  /* 113a2055 push 0xce */
  push32((uint32_t)(0xceu));
  /* 113a205a push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a205f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2061 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2064 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 113a206b push edx */
  push32((uint32_t)(EDX));
  /* 113a206c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a206f push eax */
  push32((uint32_t)(EAX));
  /* 113a2070 call 0x11396aa0 */
  push32(0x113a2075u); f_11396aa0();
  /* 113a2075 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2078 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a207b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a207f jne 0x113a2089 */
  if (!C.zf) goto L_113a2089;
  /* 113a2081 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a2084 jmp 0x113a213b */
  goto L_113a213b;
L_113a2089:;
  /* 113a2089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a208c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a208f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2092 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 113a2095 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2098 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a209b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 113a20a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a20a6 mov dword ptr [0x113c2758], eax */
  w32((uint32_t)(0x113c2758), (EAX));
  /* 113a20ab jmp 0x113a20b4 */
  goto L_113a20b4;
L_113a20ad:;
  /* 113a20ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a20af jmp 0x113a213b */
  goto L_113a213b;
L_113a20b4:;
  /* 113a20b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a20b8 je 0x113a2139 */
  if (C.zf) goto L_113a2139;
  /* 113a20ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 113a20bf push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a20c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a20c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a20c9 push ecx */
  push32((uint32_t)(ECX));
  /* 113a20ca call 0x11399440 */
  push32(0x113a20cfu); f_11399440();
  /* 113a20cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a20d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a20d5 push eax */
  push32((uint32_t)(EAX));
  /* 113a20d6 call 0x11396610 */
  push32(0x113a20dbu); f_11396610();
  /* 113a20db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a20de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 113a20e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a20e5 je 0x113a2139 */
  if (C.zf) goto L_113a2139;
  /* 113a20e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a20ea push edx */
  push32((uint32_t)(EDX));
  /* 113a20eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a20ee push eax */
  push32((uint32_t)(EAX));
  /* 113a20ef call 0x113995c0 */
  push32(0x113a20f4u); f_113995c0();
  /* 113a20f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a20f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a20fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a20fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a2100 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2102 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 113a2105 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2108 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 113a210b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a210e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2111 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a2114 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a2117 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a2119 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a211b not edx */
  EDX = (~(EDX));
  /* 113a211d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 113a2120 push edx */
  push32((uint32_t)(EDX));
  /* 113a2121 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a2124 push eax */
  push32((uint32_t)(EAX));
  /* 113a2125 call dword ptr [0x113c5304] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5304))), 0x113a212bu);
  /* 113a212b push 2 */
  push32((uint32_t)(0x2u));
  /* 113a212d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a2130 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2131 call 0x113970a0 */
  push32(0x113a2136u); f_113970a0();
  /* 113a2136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a2139:;
  /* 113a2139 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a213b:;
  /* 113a213b pop esi */
  ESI = (pop32());
  /* 113a213c mov esp, ebp */
  ESP = (EBP);
  /* 113a213e pop ebp */
  EBP = (pop32());
  /* 113a213f ret  */
  ESPCHK(0x113a1e60u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x113a2140 (124 bytes, 47 insns) */
void f_113a2140(void) {
  FTRACE(0x113a2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a2140 push ebp */
  push32((uint32_t)(EBP));
  /* 113a2141 mov ebp, esp */
  EBP = (ESP);
  /* 113a2143 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2144 mov eax, dword ptr [0x113c2758] */
  EAX = (r32((uint32_t)(0x113c2758)));
  /* 113a2149 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a214c jmp 0x113a2157 */
  goto L_113a2157;
L_113a214e:;
  /* 113a214e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2151 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2154 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_113a2157:;
  /* 113a2157 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a215a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a215d je 0x113a21aa */
  if (C.zf) goto L_113a21aa;
  /* 113a215f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a2162 push eax */
  push32((uint32_t)(EAX));
  /* 113a2163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2166 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a2168 push edx */
  push32((uint32_t)(EDX));
  /* 113a2169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a216c push eax */
  push32((uint32_t)(EAX));
  /* 113a216d call 0x113a0380 */
  push32(0x113a2172u); f_113a0380();
  /* 113a2172 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a2177 jne 0x113a21a8 */
  if (!C.zf) goto L_113a21a8;
  /* 113a2179 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a217c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a217e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a2181 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 113a2185 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2188 je 0x113a219a */
  if (C.zf) goto L_113a219a;
  /* 113a218a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a218d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a218f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a2192 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 113a2196 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a2198 jne 0x113a21a8 */
  if (!C.zf) goto L_113a21a8;
L_113a219a:;
  /* 113a219a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a219d sub eax, dword ptr [0x113c2758] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c2758))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a21a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113a21a6 jmp 0x113a21b8 */
  goto L_113a21b8;
L_113a21a8:;
  /* 113a21a8 jmp 0x113a214e */
  goto L_113a214e;
L_113a21aa:;
  /* 113a21aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a21ad sub eax, dword ptr [0x113c2758] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c2758))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a21b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 113a21b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_113a21b8:;
  /* 113a21b8 mov esp, ebp */
  ESP = (EBP);
  /* 113a21ba pop ebp */
  EBP = (pop32());
  /* 113a21bb ret  */
  ESPCHK(0x113a2140u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x113a21c0 (238 bytes, 80 insns) */
void f_113a21c0(void) {
  FTRACE(0x113a21c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a21c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a21c1 mov ebp, esp */
  EBP = (ESP);
  /* 113a21c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a21c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 113a21cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a21d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a21d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a21d7 jne 0x113a21e0 */
  if (!C.zf) goto L_113a21e0;
  /* 113a21d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a21db jmp 0x113a22aa */
  goto L_113a22aa;
L_113a21e0:;
  /* 113a21e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a21e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a21e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a21e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a21eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 113a21ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a21f0 je 0x113a21fd */
  if (C.zf) goto L_113a21fd;
  /* 113a21f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a21f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a21f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 113a21fb jmp 0x113a21e0 */
  goto L_113a21e0;
L_113a21fd:;
  /* 113a21fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 113a2202 push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a2207 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2209 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 113a220c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 113a2213 push eax */
  push32((uint32_t)(EAX));
  /* 113a2214 call 0x11396610 */
  push32(0x113a2219u); f_11396610();
  /* 113a2219 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a221c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 113a221f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2222 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a2225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2229 jne 0x113a2235 */
  if (!C.zf) goto L_113a2235;
  /* 113a222b push 9 */
  push32((uint32_t)(0x9u));
  /* 113a222d call 0x11395490 */
  push32(0x113a2232u); f_11395490();
  /* 113a2232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a2235:;
  /* 113a2235 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2238 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_113a223b:;
  /* 113a223b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a223e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2241 je 0x113a229e */
  if (C.zf) goto L_113a229e;
  /* 113a2243 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 113a2248 push 0x113be4a8 */
  push32((uint32_t)(0x113be4a8u));
  /* 113a224d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a224f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2252 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a2254 push edx */
  push32((uint32_t)(EDX));
  /* 113a2255 call 0x11399440 */
  push32(0x113a225au); f_11399440();
  /* 113a225a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a225d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2260 push eax */
  push32((uint32_t)(EAX));
  /* 113a2261 call 0x11396610 */
  push32(0x113a2266u); f_11396610();
  /* 113a2266 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2269 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a226c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a226e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2271 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2274 je 0x113a228a */
  if (C.zf) goto L_113a228a;
  /* 113a2276 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2279 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a227b push ecx */
  push32((uint32_t)(ECX));
  /* 113a227c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a227f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a2281 push eax */
  push32((uint32_t)(EAX));
  /* 113a2282 call 0x113995c0 */
  push32(0x113a2287u); f_113995c0();
  /* 113a2287 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a228a:;
  /* 113a228a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a228d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2290 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2293 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2296 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2299 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a229c jmp 0x113a223b */
  goto L_113a223b;
L_113a229e:;
  /* 113a229e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a22a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 113a22a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113a22aa:;
  /* 113a22aa mov esp, ebp */
  ESP = (EBP);
  /* 113a22ac pop ebp */
  EBP = (pop32());
  /* 113a22ad ret  */
  ESPCHK(0x113a21c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100122b0 @ 0x113a22b0 (130 bytes, 50 insns) */
void f_113a22b0(void) {
  FTRACE(0x113a22b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a22b0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a22b1 mov ebp, esp */
  EBP = (ESP);
  /* 113a22b3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a22b4 push ebx */
  push32((uint32_t)(EBX));
  /* 113a22b5 push esi */
  push32((uint32_t)(ESI));
  /* 113a22b6 push edi */
  push32((uint32_t)(EDI));
  /* 113a22b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a22be:;
  /* 113a22be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a22c2 jne 0x113a22e2 */
  if (!C.zf) goto L_113a22e2;
  /* 113a22c4 push 0x113be4c0 */
  push32((uint32_t)(0x113be4c0u));
  /* 113a22c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a22cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 113a22cd push 0x113be4b4 */
  push32((uint32_t)(0x113be4b4u));
  /* 113a22d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a22d4 call 0x113955e0 */
  push32(0x113a22d9u); f_113955e0();
  /* 113a22d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a22dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a22df jne 0x113a22e2 */
  if (!C.zf) goto L_113a22e2;
  /* 113a22e1 int3  */
  x86_unimpl("int3 @ 0x113a22e1");
L_113a22e2:;
  /* 113a22e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a22e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a22e6 jne 0x113a22be */
  if (!C.zf) goto L_113a22be;
  /* 113a22e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a22eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a22ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 113a22f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a22f3 je 0x113a2301 */
  if (C.zf) goto L_113a2301;
  /* 113a22f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a22f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 113a22ff jmp 0x113a2328 */
  goto L_113a2328;
L_113a2301:;
  /* 113a2301 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2304 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2305 call 0x113a0140 */
  push32(0x113a230au); f_113a0140();
  /* 113a230a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a230d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2310 push edx */
  push32((uint32_t)(EDX));
  /* 113a2311 call 0x113a2340 */
  push32(0x113a2316u); f_113a2340();
  /* 113a2316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2319 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a231c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a231f push eax */
  push32((uint32_t)(EAX));
  /* 113a2320 call 0x113a01b0 */
  push32(0x113a2325u); f_113a01b0();
  /* 113a2325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a2328:;
  /* 113a2328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a232b pop edi */
  EDI = (pop32());
  /* 113a232c pop esi */
  ESI = (pop32());
  /* 113a232d pop ebx */
  EBX = (pop32());
  /* 113a232e mov esp, ebp */
  ESP = (EBP);
  /* 113a2330 pop ebp */
  EBP = (pop32());
  /* 113a2331 ret  */
  ESPCHK(0x113a22b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x113a2340 (190 bytes, 67 insns) */
void f_113a2340(void) {
  FTRACE(0x113a2340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a2340 push ebp */
  push32((uint32_t)(EBP));
  /* 113a2341 mov ebp, esp */
  EBP = (ESP);
  /* 113a2343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a2346 push ebx */
  push32((uint32_t)(EBX));
  /* 113a2347 push esi */
  push32((uint32_t)(ESI));
  /* 113a2348 push edi */
  push32((uint32_t)(EDI));
  /* 113a2349 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a2350 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2353 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_113a2356:;
  /* 113a2356 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a235a jne 0x113a237a */
  if (!C.zf) goto L_113a237a;
  /* 113a235c push 0x113be2e8 */
  push32((uint32_t)(0x113be2e8u));
  /* 113a2361 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a2363 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 113a2365 push 0x113be4b4 */
  push32((uint32_t)(0x113be4b4u));
  /* 113a236a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a236c call 0x113955e0 */
  push32(0x113a2371u); f_113955e0();
  /* 113a2371 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2374 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2377 jne 0x113a237a */
  if (!C.zf) goto L_113a237a;
  /* 113a2379 int3  */
  x86_unimpl("int3 @ 0x113a2379");
L_113a237a:;
  /* 113a237a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a237c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a237e jne 0x113a2356 */
  if (!C.zf) goto L_113a2356;
  /* 113a2380 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2383 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 113a2386 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 113a238b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a238d je 0x113a23ea */
  if (C.zf) goto L_113a23ea;
  /* 113a238f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2392 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2393 call 0x113a0da0 */
  push32(0x113a2398u); f_113a0da0();
  /* 113a2398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a239b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a239e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23a1 push edx */
  push32((uint32_t)(EDX));
  /* 113a23a2 call 0x113a4a20 */
  push32(0x113a23a7u); f_113a4a20();
  /* 113a23a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a23aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a23b0 push ecx */
  push32((uint32_t)(ECX));
  /* 113a23b1 call 0x113a48f0 */
  push32(0x113a23b6u); f_113a48f0();
  /* 113a23b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a23b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a23bb jge 0x113a23c6 */
  if ((C.sf==C.of)) goto L_113a23c6;
  /* 113a23bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 113a23c4 jmp 0x113a23ea */
  goto L_113a23ea;
L_113a23c6:;
  /* 113a23c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a23cd je 0x113a23ea */
  if (C.zf) goto L_113a23ea;
  /* 113a23cf push 2 */
  push32((uint32_t)(0x2u));
  /* 113a23d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113a23d7 push ecx */
  push32((uint32_t)(ECX));
  /* 113a23d8 call 0x113970a0 */
  push32(0x113a23ddu); f_113970a0();
  /* 113a23dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a23e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_113a23ea:;
  /* 113a23ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a23ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 113a23f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a23f7 pop edi */
  EDI = (pop32());
  /* 113a23f8 pop esi */
  ESI = (pop32());
  /* 113a23f9 pop ebx */
  EBX = (pop32());
  /* 113a23fa mov esp, ebp */
  ESP = (EBP);
  /* 113a23fc pop ebp */
  EBP = (pop32());
  /* 113a23fd ret  */
  ESPCHK(0x113a2340u, _esp0);
  ESP += 4; return;
}

/* FUN_10012400 @ 0x113a2400 (210 bytes, 63 insns) */
void f_113a2400(void) {
  FTRACE(0x113a2400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a2400 push ebp */
  push32((uint32_t)(EBP));
  /* 113a2401 mov ebp, esp */
  EBP = (ESP);
  /* 113a2403 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2407 cmp eax, dword ptr [0x113c425c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x113c425c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a240d jae 0x113a2431 */
  if (!C.cf) goto L_113a2431;
  /* 113a240f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2412 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 113a2415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2418 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 113a241b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a241e mov eax, dword ptr [ecx*4 + 0x113c4120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x113c4120)));
  /* 113a2425 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 113a242a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 113a242d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a242f jne 0x113a2444 */
  if (!C.zf) goto L_113a2444;
L_113a2431:;
  /* 113a2431 call 0x1139ee20 */
  push32(0x113a2436u); f_1139ee20();
  /* 113a2436 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a243c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a243f jmp 0x113a24ce */
  goto L_113a24ce;
L_113a2444:;
  /* 113a2444 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2447 push edx */
  push32((uint32_t)(EDX));
  /* 113a2448 call 0x113a0b60 */
  push32(0x113a244du); f_113a0b60();
  /* 113a244d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2453 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 113a2456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2459 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 113a245c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 113a245f mov edx, dword ptr [eax*4 + 0x113c4120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x113c4120)));
  /* 113a2466 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 113a246b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 113a246e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a2470 je 0x113a24ad */
  if (C.zf) goto L_113a24ad;
  /* 113a2472 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2475 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2476 call 0x113a09e0 */
  push32(0x113a247bu); f_113a09e0();
  /* 113a247b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a247e push eax */
  push32((uint32_t)(EAX));
  /* 113a247f call dword ptr [0x113c5300] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c5300))), 0x113a2485u);
  /* 113a2485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a2487 jne 0x113a2494 */
  if (!C.zf) goto L_113a2494;
  /* 113a2489 call dword ptr [0x113c53cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c53cc))), 0x113a248fu);
  /* 113a248f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a2492 jmp 0x113a249b */
  goto L_113a249b;
L_113a2494:;
  /* 113a2494 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_113a249b:;
  /* 113a249b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a249f jne 0x113a24a3 */
  if (!C.zf) goto L_113a24a3;
  /* 113a24a1 jmp 0x113a24bf */
  goto L_113a24bf;
L_113a24a3:;
  /* 113a24a3 call 0x1139ee30 */
  push32(0x113a24a8u); f_1139ee30();
  /* 113a24a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a24ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_113a24ad:;
  /* 113a24ad call 0x1139ee20 */
  push32(0x113a24b2u); f_1139ee20();
  /* 113a24b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 113a24b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_113a24bf:;
  /* 113a24bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a24c2 push eax */
  push32((uint32_t)(EAX));
  /* 113a24c3 call 0x113a0bf0 */
  push32(0x113a24c8u); f_113a0bf0();
  /* 113a24c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a24cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_113a24ce:;
  /* 113a24ce mov esp, ebp */
  ESP = (EBP);
  /* 113a24d0 pop ebp */
  EBP = (pop32());
  /* 113a24d1 ret  */
  ESPCHK(0x113a2400u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x113a24e0 (219 bytes, 64 insns) */
void f_113a24e0(void) {
  FTRACE(0x113a24e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a24e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a24e1 mov ebp, esp */
  EBP = (ESP);
  /* 113a24e3 push ecx */
  push32((uint32_t)(ECX));
  /* 113a24e4 cmp dword ptr [0x113c29fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a24eb je 0x113a2581 */
  if (C.zf) goto L_113a2581;
  /* 113a24f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 113a24f3 push 0x113be4d0 */
  push32((uint32_t)(0x113be4d0u));
  /* 113a24f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a24fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 113a24ff push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2501 call 0x11396a20 */
  push32(0x113a2506u); f_11396a20();
  /* 113a2506 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2509 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a250c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2510 jne 0x113a251c */
  if (!C.zf) goto L_113a251c;
  /* 113a2512 mov eax, 1 */
  EAX = (0x1u);
  /* 113a2517 jmp 0x113a25b7 */
  goto L_113a25b7;
L_113a251c:;
  /* 113a251c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a251f push eax */
  push32((uint32_t)(EAX));
  /* 113a2520 call 0x113a25c0 */
  push32(0x113a2525u); f_113a25c0();
  /* 113a2525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a252a je 0x113a254d */
  if (C.zf) goto L_113a254d;
  /* 113a252c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a252f push ecx */
  push32((uint32_t)(ECX));
  /* 113a2530 call 0x113a2b50 */
  push32(0x113a2535u); f_113a2b50();
  /* 113a2535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2538 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a253a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a253d push edx */
  push32((uint32_t)(EDX));
  /* 113a253e call 0x113970a0 */
  push32(0x113a2543u); f_113970a0();
  /* 113a2543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2546 mov eax, 1 */
  EAX = (0x1u);
  /* 113a254b jmp 0x113a25b7 */
  goto L_113a25b7;
L_113a254d:;
  /* 113a254d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2550 mov dword ptr [0x113c1dc8], eax */
  w32((uint32_t)(0x113c1dc8), (EAX));
  /* 113a2555 mov ecx, dword ptr [0x113c2a24] */
  ECX = (r32((uint32_t)(0x113c2a24)));
  /* 113a255b push ecx */
  push32((uint32_t)(ECX));
  /* 113a255c call 0x113a2b50 */
  push32(0x113a2561u); f_113a2b50();
  /* 113a2561 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2564 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2566 mov edx, dword ptr [0x113c2a24] */
  EDX = (r32((uint32_t)(0x113c2a24)));
  /* 113a256c push edx */
  push32((uint32_t)(EDX));
  /* 113a256d call 0x113970a0 */
  push32(0x113a2572u); f_113970a0();
  /* 113a2572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2578 mov dword ptr [0x113c2a24], eax */
  w32((uint32_t)(0x113c2a24), (EAX));
  /* 113a257d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a257f jmp 0x113a25b7 */
  goto L_113a25b7;
L_113a2581:;
  /* 113a2581 mov dword ptr [0x113c1dc8], 0x113c1dd0 */
  w32((uint32_t)(0x113c1dc8), (0x113c1dd0u));
  /* 113a258b mov ecx, dword ptr [0x113c2a24] */
  ECX = (r32((uint32_t)(0x113c2a24)));
  /* 113a2591 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2592 call 0x113a2b50 */
  push32(0x113a2597u); f_113a2b50();
  /* 113a2597 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a259a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a259c mov edx, dword ptr [0x113c2a24] */
  EDX = (r32((uint32_t)(0x113c2a24)));
  /* 113a25a2 push edx */
  push32((uint32_t)(EDX));
  /* 113a25a3 call 0x113970a0 */
  push32(0x113a25a8u); f_113970a0();
  /* 113a25a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a25ab mov dword ptr [0x113c2a24], 0 */
  w32((uint32_t)(0x113c2a24), (0x0u));
  /* 113a25b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a25b7:;
  /* 113a25b7 mov esp, ebp */
  ESP = (EBP);
  /* 113a25b9 pop ebp */
  EBP = (pop32());
  /* 113a25ba ret  */
  ESPCHK(0x113a24e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x113a25c0 (1423 bytes, 533 insns) */
void f_113a25c0(void) {
  FTRACE(0x113a25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a25c1 mov ebp, esp */
  EBP = (ESP);
  /* 113a25c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a25c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 113a25cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a25cf mov ax, word ptr [0x113c2a5e] */
  AX = (r16((uint32_t)(0x113c2a5e)));
  /* 113a25d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a25d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a25da mov cx, word ptr [0x113c2a60] */
  CX = (r16((uint32_t)(0x113c2a60)));
  /* 113a25e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a25e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a25e8 jne 0x113a25f2 */
  if (!C.zf) goto L_113a25f2;
  /* 113a25ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a25ed jmp 0x113a2b4b */
  goto L_113a2b4b;
L_113a25f2:;
  /* 113a25f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a25f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a25f8 push edx */
  push32((uint32_t)(EDX));
  /* 113a25f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 113a25fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a25fe push eax */
  push32((uint32_t)(EAX));
  /* 113a25ff push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2601 call 0x113a5f30 */
  push32(0x113a2606u); f_113a5f30();
  /* 113a2606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2609 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a260c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a260e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2611 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2614 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2617 push edx */
  push32((uint32_t)(EDX));
  /* 113a2618 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 113a261a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a261d push eax */
  push32((uint32_t)(EAX));
  /* 113a261e push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2620 call 0x113a5f30 */
  push32(0x113a2625u); f_113a5f30();
  /* 113a2625 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2628 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a262b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a262d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2630 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2633 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2636 push edx */
  push32((uint32_t)(EDX));
  /* 113a2637 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 113a2639 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a263c push eax */
  push32((uint32_t)(EAX));
  /* 113a263d push 1 */
  push32((uint32_t)(0x1u));
  /* 113a263f call 0x113a5f30 */
  push32(0x113a2644u); f_113a5f30();
  /* 113a2644 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a264a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a264c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a264f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2652 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2655 push edx */
  push32((uint32_t)(EDX));
  /* 113a2656 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 113a2658 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a265b push eax */
  push32((uint32_t)(EAX));
  /* 113a265c push 1 */
  push32((uint32_t)(0x1u));
  /* 113a265e call 0x113a5f30 */
  push32(0x113a2663u); f_113a5f30();
  /* 113a2663 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2666 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2669 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a266b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a266e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2671 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2674 push edx */
  push32((uint32_t)(EDX));
  /* 113a2675 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 113a2677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a267a push eax */
  push32((uint32_t)(EAX));
  /* 113a267b push 1 */
  push32((uint32_t)(0x1u));
  /* 113a267d call 0x113a5f30 */
  push32(0x113a2682u); f_113a5f30();
  /* 113a2682 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2685 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2688 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a268a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a268d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2690 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2693 push edx */
  push32((uint32_t)(EDX));
  /* 113a2694 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 113a2696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2699 push eax */
  push32((uint32_t)(EAX));
  /* 113a269a push 1 */
  push32((uint32_t)(0x1u));
  /* 113a269c call 0x113a5f30 */
  push32(0x113a26a1u); f_113a5f30();
  /* 113a26a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a26a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a26a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a26ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a26af push edx */
  push32((uint32_t)(EDX));
  /* 113a26b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 113a26b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a26b5 push eax */
  push32((uint32_t)(EAX));
  /* 113a26b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a26b8 call 0x113a5f30 */
  push32(0x113a26bdu); f_113a5f30();
  /* 113a26bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a26c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a26c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a26c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a26cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26ce push edx */
  push32((uint32_t)(EDX));
  /* 113a26cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 113a26d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a26d4 push eax */
  push32((uint32_t)(EAX));
  /* 113a26d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a26d7 call 0x113a5f30 */
  push32(0x113a26dcu); f_113a5f30();
  /* 113a26dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a26e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a26e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a26e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a26ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26ed push edx */
  push32((uint32_t)(EDX));
  /* 113a26ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 113a26f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a26f3 push eax */
  push32((uint32_t)(EAX));
  /* 113a26f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a26f6 call 0x113a5f30 */
  push32(0x113a26fbu); f_113a5f30();
  /* 113a26fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a26fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2701 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2703 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2706 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2709 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a270c push edx */
  push32((uint32_t)(EDX));
  /* 113a270d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 113a270f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2712 push eax */
  push32((uint32_t)(EAX));
  /* 113a2713 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2715 call 0x113a5f30 */
  push32(0x113a271au); f_113a5f30();
  /* 113a271a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a271d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2720 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2722 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2728 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a272b push edx */
  push32((uint32_t)(EDX));
  /* 113a272c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 113a272e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2731 push eax */
  push32((uint32_t)(EAX));
  /* 113a2732 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2734 call 0x113a5f30 */
  push32(0x113a2739u); f_113a5f30();
  /* 113a2739 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a273c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a273f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2741 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2747 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a274a push edx */
  push32((uint32_t)(EDX));
  /* 113a274b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 113a274d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2750 push eax */
  push32((uint32_t)(EAX));
  /* 113a2751 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2753 call 0x113a5f30 */
  push32(0x113a2758u); f_113a5f30();
  /* 113a2758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a275b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a275e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2760 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2766 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2769 push edx */
  push32((uint32_t)(EDX));
  /* 113a276a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 113a276c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a276f push eax */
  push32((uint32_t)(EAX));
  /* 113a2770 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2772 call 0x113a5f30 */
  push32(0x113a2777u); f_113a5f30();
  /* 113a2777 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a277a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a277d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a277f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2785 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2788 push edx */
  push32((uint32_t)(EDX));
  /* 113a2789 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113a278b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a278e push eax */
  push32((uint32_t)(EAX));
  /* 113a278f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2791 call 0x113a5f30 */
  push32(0x113a2796u); f_113a5f30();
  /* 113a2796 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2799 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a279c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a279e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a27a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a27a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27a7 push edx */
  push32((uint32_t)(EDX));
  /* 113a27a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 113a27aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a27ad push eax */
  push32((uint32_t)(EAX));
  /* 113a27ae push 1 */
  push32((uint32_t)(0x1u));
  /* 113a27b0 call 0x113a5f30 */
  push32(0x113a27b5u); f_113a5f30();
  /* 113a27b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a27bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a27bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a27c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a27c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27c6 push edx */
  push32((uint32_t)(EDX));
  /* 113a27c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 113a27c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a27cc push eax */
  push32((uint32_t)(EAX));
  /* 113a27cd push 1 */
  push32((uint32_t)(0x1u));
  /* 113a27cf call 0x113a5f30 */
  push32(0x113a27d4u); f_113a5f30();
  /* 113a27d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a27da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a27dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a27df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a27e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27e5 push edx */
  push32((uint32_t)(EDX));
  /* 113a27e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 113a27e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a27eb push eax */
  push32((uint32_t)(EAX));
  /* 113a27ec push 1 */
  push32((uint32_t)(0x1u));
  /* 113a27ee call 0x113a5f30 */
  push32(0x113a27f3u); f_113a5f30();
  /* 113a27f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a27f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a27f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a27fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a27fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2801 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2804 push edx */
  push32((uint32_t)(EDX));
  /* 113a2805 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 113a2807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a280a push eax */
  push32((uint32_t)(EAX));
  /* 113a280b push 1 */
  push32((uint32_t)(0x1u));
  /* 113a280d call 0x113a5f30 */
  push32(0x113a2812u); f_113a5f30();
  /* 113a2812 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2818 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a281a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a281d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2820 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2823 push edx */
  push32((uint32_t)(EDX));
  /* 113a2824 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 113a2826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2829 push eax */
  push32((uint32_t)(EAX));
  /* 113a282a push 1 */
  push32((uint32_t)(0x1u));
  /* 113a282c call 0x113a5f30 */
  push32(0x113a2831u); f_113a5f30();
  /* 113a2831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2834 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2837 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2839 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a283c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a283f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2842 push edx */
  push32((uint32_t)(EDX));
  /* 113a2843 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 113a2845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2848 push eax */
  push32((uint32_t)(EAX));
  /* 113a2849 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a284b call 0x113a5f30 */
  push32(0x113a2850u); f_113a5f30();
  /* 113a2850 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2853 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2856 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2858 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a285b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a285e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2861 push edx */
  push32((uint32_t)(EDX));
  /* 113a2862 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 113a2864 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2867 push eax */
  push32((uint32_t)(EAX));
  /* 113a2868 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a286a call 0x113a5f30 */
  push32(0x113a286fu); f_113a5f30();
  /* 113a286f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2872 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2875 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2877 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a287a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a287d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2880 push edx */
  push32((uint32_t)(EDX));
  /* 113a2881 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 113a2883 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2886 push eax */
  push32((uint32_t)(EAX));
  /* 113a2887 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2889 call 0x113a5f30 */
  push32(0x113a288eu); f_113a5f30();
  /* 113a288e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2891 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2894 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2896 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2899 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a289c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a289f push edx */
  push32((uint32_t)(EDX));
  /* 113a28a0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 113a28a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a28a5 push eax */
  push32((uint32_t)(EAX));
  /* 113a28a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a28a8 call 0x113a5f30 */
  push32(0x113a28adu); f_113a5f30();
  /* 113a28ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a28b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a28b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a28b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a28bb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28be push edx */
  push32((uint32_t)(EDX));
  /* 113a28bf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 113a28c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a28c4 push eax */
  push32((uint32_t)(EAX));
  /* 113a28c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a28c7 call 0x113a5f30 */
  push32(0x113a28ccu); f_113a5f30();
  /* 113a28cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a28d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a28d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a28d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a28da add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28dd push edx */
  push32((uint32_t)(EDX));
  /* 113a28de push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 113a28e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a28e3 push eax */
  push32((uint32_t)(EAX));
  /* 113a28e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a28e6 call 0x113a5f30 */
  push32(0x113a28ebu); f_113a5f30();
  /* 113a28eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a28f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a28f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a28f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a28f9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a28fc push edx */
  push32((uint32_t)(EDX));
  /* 113a28fd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 113a28ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2902 push eax */
  push32((uint32_t)(EAX));
  /* 113a2903 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2905 call 0x113a5f30 */
  push32(0x113a290au); f_113a5f30();
  /* 113a290a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a290d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2910 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2912 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2918 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a291b push edx */
  push32((uint32_t)(EDX));
  /* 113a291c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 113a291e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2921 push eax */
  push32((uint32_t)(EAX));
  /* 113a2922 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2924 call 0x113a5f30 */
  push32(0x113a2929u); f_113a5f30();
  /* 113a2929 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a292c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a292f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2931 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2937 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a293a push edx */
  push32((uint32_t)(EDX));
  /* 113a293b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 113a293d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2940 push eax */
  push32((uint32_t)(EAX));
  /* 113a2941 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2943 call 0x113a5f30 */
  push32(0x113a2948u); f_113a5f30();
  /* 113a2948 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a294b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a294e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2950 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2956 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2959 push edx */
  push32((uint32_t)(EDX));
  /* 113a295a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 113a295c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a295f push eax */
  push32((uint32_t)(EAX));
  /* 113a2960 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2962 call 0x113a5f30 */
  push32(0x113a2967u); f_113a5f30();
  /* 113a2967 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a296a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a296d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a296f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2972 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2975 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2978 push edx */
  push32((uint32_t)(EDX));
  /* 113a2979 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 113a297b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a297e push eax */
  push32((uint32_t)(EAX));
  /* 113a297f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2981 call 0x113a5f30 */
  push32(0x113a2986u); f_113a5f30();
  /* 113a2986 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2989 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a298c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a298e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2994 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2997 push edx */
  push32((uint32_t)(EDX));
  /* 113a2998 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 113a299a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a299d push eax */
  push32((uint32_t)(EAX));
  /* 113a299e push 1 */
  push32((uint32_t)(0x1u));
  /* 113a29a0 call 0x113a5f30 */
  push32(0x113a29a5u); f_113a5f30();
  /* 113a29a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a29ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a29ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a29b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a29b3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29b6 push edx */
  push32((uint32_t)(EDX));
  /* 113a29b7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 113a29b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a29bc push eax */
  push32((uint32_t)(EAX));
  /* 113a29bd push 1 */
  push32((uint32_t)(0x1u));
  /* 113a29bf call 0x113a5f30 */
  push32(0x113a29c4u); f_113a5f30();
  /* 113a29c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a29ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a29cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a29cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a29d2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29d8 push edx */
  push32((uint32_t)(EDX));
  /* 113a29d9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 113a29db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a29de push eax */
  push32((uint32_t)(EAX));
  /* 113a29df push 1 */
  push32((uint32_t)(0x1u));
  /* 113a29e1 call 0x113a5f30 */
  push32(0x113a29e6u); f_113a5f30();
  /* 113a29e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a29ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a29ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a29f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a29f4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a29fa push edx */
  push32((uint32_t)(EDX));
  /* 113a29fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 113a29fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2a00 push eax */
  push32((uint32_t)(EAX));
  /* 113a2a01 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2a03 call 0x113a5f30 */
  push32(0x113a2a08u); f_113a5f30();
  /* 113a2a08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2a0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2a10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2a13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2a16 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a1c push edx */
  push32((uint32_t)(EDX));
  /* 113a2a1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 113a2a1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2a22 push eax */
  push32((uint32_t)(EAX));
  /* 113a2a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2a25 call 0x113a5f30 */
  push32(0x113a2a2au); f_113a5f30();
  /* 113a2a2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2a30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2a32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2a35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2a38 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a3e push edx */
  push32((uint32_t)(EDX));
  /* 113a2a3f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 113a2a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2a44 push eax */
  push32((uint32_t)(EAX));
  /* 113a2a45 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2a47 call 0x113a5f30 */
  push32(0x113a2a4cu); f_113a5f30();
  /* 113a2a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2a52 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2a54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2a57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2a5a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a60 push edx */
  push32((uint32_t)(EDX));
  /* 113a2a61 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 113a2a63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2a66 push eax */
  push32((uint32_t)(EAX));
  /* 113a2a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2a69 call 0x113a5f30 */
  push32(0x113a2a6eu); f_113a5f30();
  /* 113a2a6e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a71 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2a74 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2a76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2a79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2a7c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a82 push edx */
  push32((uint32_t)(EDX));
  /* 113a2a83 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 113a2a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2a88 push eax */
  push32((uint32_t)(EAX));
  /* 113a2a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2a8b call 0x113a5f30 */
  push32(0x113a2a90u); f_113a5f30();
  /* 113a2a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2a93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2a96 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2a98 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2a9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2a9e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2aa4 push edx */
  push32((uint32_t)(EDX));
  /* 113a2aa5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 113a2aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2aaa push eax */
  push32((uint32_t)(EAX));
  /* 113a2aab push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2aad call 0x113a5f30 */
  push32(0x113a2ab2u); f_113a5f30();
  /* 113a2ab2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ab5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2ab8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2aba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2abd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2ac0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ac6 push edx */
  push32((uint32_t)(EDX));
  /* 113a2ac7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 113a2ac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2acc push eax */
  push32((uint32_t)(EAX));
  /* 113a2acd push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2acf call 0x113a5f30 */
  push32(0x113a2ad4u); f_113a5f30();
  /* 113a2ad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2ada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2adc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2adf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2ae2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ae8 push edx */
  push32((uint32_t)(EDX));
  /* 113a2ae9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 113a2aeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2aee push eax */
  push32((uint32_t)(EAX));
  /* 113a2aef push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2af1 call 0x113a5f30 */
  push32(0x113a2af6u); f_113a5f30();
  /* 113a2af6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2af9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2afc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2afe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b04 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b0a push edx */
  push32((uint32_t)(EDX));
  /* 113a2b0b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 113a2b0d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2b10 push eax */
  push32((uint32_t)(EAX));
  /* 113a2b11 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2b13 call 0x113a5f30 */
  push32(0x113a2b18u); f_113a5f30();
  /* 113a2b18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2b1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2b20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2b23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b26 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b2c push edx */
  push32((uint32_t)(EDX));
  /* 113a2b2d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 113a2b32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2b35 push eax */
  push32((uint32_t)(EAX));
  /* 113a2b36 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2b38 call 0x113a5f30 */
  push32(0x113a2b3du); f_113a5f30();
  /* 113a2b3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 113a2b43 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2b45 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 113a2b48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_113a2b4b:;
  /* 113a2b4b mov esp, ebp */
  ESP = (EBP);
  /* 113a2b4d pop ebp */
  EBP = (pop32());
  /* 113a2b4e ret  */
  ESPCHK(0x113a25c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x113a2b50 (779 bytes, 265 insns) */
void f_113a2b50(void) {
  FTRACE(0x113a2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 113a2b51 mov ebp, esp */
  EBP = (ESP);
  /* 113a2b53 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2b57 jne 0x113a2b5e */
  if (!C.zf) goto L_113a2b5e;
  /* 113a2b59 jmp 0x113a2e59 */
  goto L_113a2e59;
L_113a2b5e:;
  /* 113a2b5e push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2b60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b63 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113a2b66 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2b67 call 0x113970a0 */
  push32(0x113a2b6cu); f_113970a0();
  /* 113a2b6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2b71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b74 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113a2b77 push eax */
  push32((uint32_t)(EAX));
  /* 113a2b78 call 0x113970a0 */
  push32(0x113a2b7du); f_113970a0();
  /* 113a2b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b80 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2b82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b85 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a2b88 push edx */
  push32((uint32_t)(EDX));
  /* 113a2b89 call 0x113970a0 */
  push32(0x113a2b8eu); f_113970a0();
  /* 113a2b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2b91 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2b96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a2b99 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2b9a call 0x113970a0 */
  push32(0x113a2b9fu); f_113970a0();
  /* 113a2b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ba2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2ba4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2ba7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113a2baa push eax */
  push32((uint32_t)(EAX));
  /* 113a2bab call 0x113970a0 */
  push32(0x113a2bb0u); f_113970a0();
  /* 113a2bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2bb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2bb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2bb8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113a2bbb push edx */
  push32((uint32_t)(EDX));
  /* 113a2bbc call 0x113970a0 */
  push32(0x113a2bc1u); f_113970a0();
  /* 113a2bc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2bc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2bc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a2bcb push ecx */
  push32((uint32_t)(ECX));
  /* 113a2bcc call 0x113970a0 */
  push32(0x113a2bd1u); f_113970a0();
  /* 113a2bd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2bd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2bd9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 113a2bdc push eax */
  push32((uint32_t)(EAX));
  /* 113a2bdd call 0x113970a0 */
  push32(0x113a2be2u); f_113970a0();
  /* 113a2be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2be5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2be7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2bea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 113a2bed push edx */
  push32((uint32_t)(EDX));
  /* 113a2bee call 0x113970a0 */
  push32(0x113a2bf3u); f_113970a0();
  /* 113a2bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2bf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2bf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2bfb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 113a2bfe push ecx */
  push32((uint32_t)(ECX));
  /* 113a2bff call 0x113970a0 */
  push32(0x113a2c04u); f_113970a0();
  /* 113a2c04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 113a2c0f push eax */
  push32((uint32_t)(EAX));
  /* 113a2c10 call 0x113970a0 */
  push32(0x113a2c15u); f_113970a0();
  /* 113a2c15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c18 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 113a2c20 push edx */
  push32((uint32_t)(EDX));
  /* 113a2c21 call 0x113970a0 */
  push32(0x113a2c26u); f_113970a0();
  /* 113a2c26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c29 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 113a2c31 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2c32 call 0x113970a0 */
  push32(0x113a2c37u); f_113970a0();
  /* 113a2c37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113a2c42 push eax */
  push32((uint32_t)(EAX));
  /* 113a2c43 call 0x113970a0 */
  push32(0x113a2c48u); f_113970a0();
  /* 113a2c48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 113a2c53 push edx */
  push32((uint32_t)(EDX));
  /* 113a2c54 call 0x113970a0 */
  push32(0x113a2c59u); f_113970a0();
  /* 113a2c59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c5c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 113a2c64 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2c65 call 0x113970a0 */
  push32(0x113a2c6au); f_113970a0();
  /* 113a2c6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c6d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 113a2c75 push eax */
  push32((uint32_t)(EAX));
  /* 113a2c76 call 0x113970a0 */
  push32(0x113a2c7bu); f_113970a0();
  /* 113a2c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c7e push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 113a2c86 push edx */
  push32((uint32_t)(EDX));
  /* 113a2c87 call 0x113970a0 */
  push32(0x113a2c8cu); f_113970a0();
  /* 113a2c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2c8f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2c91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2c94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 113a2c97 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2c98 call 0x113970a0 */
  push32(0x113a2c9du); f_113970a0();
  /* 113a2c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ca0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2ca2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2ca5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 113a2ca8 push eax */
  push32((uint32_t)(EAX));
  /* 113a2ca9 call 0x113970a0 */
  push32(0x113a2caeu); f_113970a0();
  /* 113a2cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2cb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2cb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2cb6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 113a2cb9 push edx */
  push32((uint32_t)(EDX));
  /* 113a2cba call 0x113970a0 */
  push32(0x113a2cbfu); f_113970a0();
  /* 113a2cbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2cc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2cc7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 113a2cca push ecx */
  push32((uint32_t)(ECX));
  /* 113a2ccb call 0x113970a0 */
  push32(0x113a2cd0u); f_113970a0();
  /* 113a2cd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2cd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2cd8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 113a2cdb push eax */
  push32((uint32_t)(EAX));
  /* 113a2cdc call 0x113970a0 */
  push32(0x113a2ce1u); f_113970a0();
  /* 113a2ce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2ce6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2ce9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 113a2cec push edx */
  push32((uint32_t)(EDX));
  /* 113a2ced call 0x113970a0 */
  push32(0x113a2cf2u); f_113970a0();
  /* 113a2cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2cf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2cf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2cfa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 113a2cfd push ecx */
  push32((uint32_t)(ECX));
  /* 113a2cfe call 0x113970a0 */
  push32(0x113a2d03u); f_113970a0();
  /* 113a2d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d06 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 113a2d0e push eax */
  push32((uint32_t)(EAX));
  /* 113a2d0f call 0x113970a0 */
  push32(0x113a2d14u); f_113970a0();
  /* 113a2d14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d17 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 113a2d1f push edx */
  push32((uint32_t)(EDX));
  /* 113a2d20 call 0x113970a0 */
  push32(0x113a2d25u); f_113970a0();
  /* 113a2d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d28 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 113a2d30 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2d31 call 0x113970a0 */
  push32(0x113a2d36u); f_113970a0();
  /* 113a2d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 113a2d41 push eax */
  push32((uint32_t)(EAX));
  /* 113a2d42 call 0x113970a0 */
  push32(0x113a2d47u); f_113970a0();
  /* 113a2d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 113a2d52 push edx */
  push32((uint32_t)(EDX));
  /* 113a2d53 call 0x113970a0 */
  push32(0x113a2d58u); f_113970a0();
  /* 113a2d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d5b push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 113a2d63 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2d64 call 0x113970a0 */
  push32(0x113a2d69u); f_113970a0();
  /* 113a2d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 113a2d74 push eax */
  push32((uint32_t)(EAX));
  /* 113a2d75 call 0x113970a0 */
  push32(0x113a2d7au); f_113970a0();
  /* 113a2d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 113a2d88 push edx */
  push32((uint32_t)(EDX));
  /* 113a2d89 call 0x113970a0 */
  push32(0x113a2d8eu); f_113970a0();
  /* 113a2d8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2d91 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2d93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2d96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 113a2d9c push ecx */
  push32((uint32_t)(ECX));
  /* 113a2d9d call 0x113970a0 */
  push32(0x113a2da2u); f_113970a0();
  /* 113a2da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2da5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2da7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2daa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 113a2db0 push eax */
  push32((uint32_t)(EAX));
  /* 113a2db1 call 0x113970a0 */
  push32(0x113a2db6u); f_113970a0();
  /* 113a2db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2dbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2dbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 113a2dc4 push edx */
  push32((uint32_t)(EDX));
  /* 113a2dc5 call 0x113970a0 */
  push32(0x113a2dcau); f_113970a0();
  /* 113a2dca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2dcd push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2dcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2dd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 113a2dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2dd9 call 0x113970a0 */
  push32(0x113a2ddeu); f_113970a0();
  /* 113a2dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2de1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2de3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2de6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 113a2dec push eax */
  push32((uint32_t)(EAX));
  /* 113a2ded call 0x113970a0 */
  push32(0x113a2df2u); f_113970a0();
  /* 113a2df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2df5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2df7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2dfa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 113a2e00 push edx */
  push32((uint32_t)(EDX));
  /* 113a2e01 call 0x113970a0 */
  push32(0x113a2e06u); f_113970a0();
  /* 113a2e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2e0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2e0e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 113a2e14 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2e15 call 0x113970a0 */
  push32(0x113a2e1au); f_113970a0();
  /* 113a2e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2e1d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2e1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2e22 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 113a2e28 push eax */
  push32((uint32_t)(EAX));
  /* 113a2e29 call 0x113970a0 */
  push32(0x113a2e2eu); f_113970a0();
  /* 113a2e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2e31 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2e33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2e36 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 113a2e3c push edx */
  push32((uint32_t)(EDX));
  /* 113a2e3d call 0x113970a0 */
  push32(0x113a2e42u); f_113970a0();
  /* 113a2e42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2e45 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a2e4a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 113a2e50 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2e51 call 0x113970a0 */
  push32(0x113a2e56u); f_113970a0();
  /* 113a2e56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a2e59:;
  /* 113a2e59 pop ebp */
  EBP = (pop32());
  /* 113a2e5a ret  */
  ESPCHK(0x113a2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e60 @ 0x113a2e60 (678 bytes, 180 insns) */
void f_113a2e60(void) {
  FTRACE(0x113a2e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a2e60 push ebp */
  push32((uint32_t)(EBP));
  /* 113a2e61 mov ebp, esp */
  EBP = (ESP);
  /* 113a2e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a2e66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a2e6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a2e6f mov ax, word ptr [0x113c2a5a] */
  AX = (r16((uint32_t)(0x113c2a5a)));
  /* 113a2e75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a2e78 cmp dword ptr [0x113c29f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2e7f je 0x113a2fda */
  if (C.zf) goto L_113a2fda;
  /* 113a2e85 push 0x113c2a28 */
  push32((uint32_t)(0x113c2a28u));
  /* 113a2e8a push 0xe */
  push32((uint32_t)(0xeu));
  /* 113a2e8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2e8f push ecx */
  push32((uint32_t)(ECX));
  /* 113a2e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2e92 call 0x113a5f30 */
  push32(0x113a2e97u); f_113a5f30();
  /* 113a2e97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2e9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2e9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 113a2e9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 113a2ea2 push 0x113c2a2c */
  push32((uint32_t)(0x113c2a2cu));
  /* 113a2ea7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 113a2ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2eac push eax */
  push32((uint32_t)(EAX));
  /* 113a2ead push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2eaf call 0x113a5f30 */
  push32(0x113a2eb4u); f_113a5f30();
  /* 113a2eb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2eba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2ebc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a2ebf push 0x113c2a30 */
  push32((uint32_t)(0x113c2a30u));
  /* 113a2ec4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 113a2ec6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a2ec9 push edx */
  push32((uint32_t)(EDX));
  /* 113a2eca push 1 */
  push32((uint32_t)(0x1u));
  /* 113a2ecc call 0x113a5f30 */
  push32(0x113a2ed1u); f_113a5f30();
  /* 113a2ed1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ed4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a2ed7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a2ed9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a2edc mov edx, dword ptr [0x113c2a30] */
  EDX = (r32((uint32_t)(0x113c2a30)));
  /* 113a2ee2 push edx */
  push32((uint32_t)(EDX));
  /* 113a2ee3 call 0x113a3110 */
  push32(0x113a2ee8u); f_113a3110();
  /* 113a2ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2eeb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2eef je 0x113a2f49 */
  if (C.zf) goto L_113a2f49;
  /* 113a2ef1 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2ef3 mov eax, dword ptr [0x113c2a28] */
  EAX = (r32((uint32_t)(0x113c2a28)));
  /* 113a2ef8 push eax */
  push32((uint32_t)(EAX));
  /* 113a2ef9 call 0x113970a0 */
  push32(0x113a2efeu); f_113970a0();
  /* 113a2efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2f03 mov ecx, dword ptr [0x113c2a2c] */
  ECX = (r32((uint32_t)(0x113c2a2c)));
  /* 113a2f09 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2f0a call 0x113970a0 */
  push32(0x113a2f0fu); f_113970a0();
  /* 113a2f0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2f12 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2f14 mov edx, dword ptr [0x113c2a30] */
  EDX = (r32((uint32_t)(0x113c2a30)));
  /* 113a2f1a push edx */
  push32((uint32_t)(EDX));
  /* 113a2f1b call 0x113970a0 */
  push32(0x113a2f20u); f_113970a0();
  /* 113a2f20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2f23 mov dword ptr [0x113c2a28], 0 */
  w32((uint32_t)(0x113c2a28), (0x0u));
  /* 113a2f2d mov dword ptr [0x113c2a2c], 0 */
  w32((uint32_t)(0x113c2a2c), (0x0u));
  /* 113a2f37 mov dword ptr [0x113c2a30], 0 */
  w32((uint32_t)(0x113c2a30), (0x0u));
  /* 113a2f41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a2f44 jmp 0x113a3102 */
  goto L_113a3102;
L_113a2f49:;
  /* 113a2f49 mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2f4e cmp dword ptr [eax], 0x113c1e80 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x113c1e80u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a2f54 je 0x113a2f90 */
  if (C.zf) goto L_113a2f90;
  /* 113a2f56 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2f58 mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2f5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a2f60 push edx */
  push32((uint32_t)(EDX));
  /* 113a2f61 call 0x113970a0 */
  push32(0x113a2f66u); f_113970a0();
  /* 113a2f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2f69 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2f6b mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2f70 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113a2f73 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2f74 call 0x113970a0 */
  push32(0x113a2f79u); f_113970a0();
  /* 113a2f79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2f7c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2f7e mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2f84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113a2f87 push eax */
  push32((uint32_t)(EAX));
  /* 113a2f88 call 0x113970a0 */
  push32(0x113a2f8du); f_113970a0();
  /* 113a2f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a2f90:;
  /* 113a2f90 mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2f96 mov edx, dword ptr [0x113c2a28] */
  EDX = (r32((uint32_t)(0x113c2a28)));
  /* 113a2f9c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 113a2f9e mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2fa3 mov ecx, dword ptr [0x113c2a2c] */
  ECX = (r32((uint32_t)(0x113c2a2c)));
  /* 113a2fa9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 113a2fac mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2fb2 mov eax, dword ptr [0x113c2a30] */
  EAX = (r32((uint32_t)(0x113c2a30)));
  /* 113a2fb7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 113a2fba mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a2fc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a2fc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a2fc4 mov byte ptr [0x113c0fc8], al */
  w8((uint32_t)(0x113c0fc8), (AL));
  /* 113a2fc9 mov dword ptr [0x113c0fcc], 1 */
  w32((uint32_t)(0x113c0fcc), (0x1u));
  /* 113a2fd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a2fd5 jmp 0x113a3102 */
  goto L_113a3102;
L_113a2fda:;
  /* 113a2fda push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2fdc mov ecx, dword ptr [0x113c2a28] */
  ECX = (r32((uint32_t)(0x113c2a28)));
  /* 113a2fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 113a2fe3 call 0x113970a0 */
  push32(0x113a2fe8u); f_113970a0();
  /* 113a2fe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2feb push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2fed mov edx, dword ptr [0x113c2a2c] */
  EDX = (r32((uint32_t)(0x113c2a2c)));
  /* 113a2ff3 push edx */
  push32((uint32_t)(EDX));
  /* 113a2ff4 call 0x113970a0 */
  push32(0x113a2ff9u); f_113970a0();
  /* 113a2ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a2ffc push 2 */
  push32((uint32_t)(0x2u));
  /* 113a2ffe mov eax, dword ptr [0x113c2a30] */
  EAX = (r32((uint32_t)(0x113c2a30)));
  /* 113a3003 push eax */
  push32((uint32_t)(EAX));
  /* 113a3004 call 0x113970a0 */
  push32(0x113a3009u); f_113970a0();
  /* 113a3009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a300c mov dword ptr [0x113c2a28], 0 */
  w32((uint32_t)(0x113c2a28), (0x0u));
  /* 113a3016 mov dword ptr [0x113c2a2c], 0 */
  w32((uint32_t)(0x113c2a2c), (0x0u));
  /* 113a3020 mov dword ptr [0x113c2a30], 0 */
  w32((uint32_t)(0x113c2a30), (0x0u));
  /* 113a302a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 113a302f push 0x113be4dc */
  push32((uint32_t)(0x113be4dcu));
  /* 113a3034 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3036 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3038 call 0x11396610 */
  push32(0x113a303du); f_11396610();
  /* 113a303d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3040 mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3046 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 113a3048 mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a304e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3051 jne 0x113a305b */
  if (!C.zf) goto L_113a305b;
  /* 113a3053 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a3056 jmp 0x113a3102 */
  goto L_113a3102;
L_113a305b:;
  /* 113a305b push 0x113be440 */
  push32((uint32_t)(0x113be440u));
  /* 113a3060 mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3065 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 113a3067 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3068 call 0x113995c0 */
  push32(0x113a306du); f_113995c0();
  /* 113a306d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3070 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 113a3075 push 0x113be4dc */
  push32((uint32_t)(0x113be4dcu));
  /* 113a307a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a307c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a307e call 0x11396610 */
  push32(0x113a3083u); f_11396610();
  /* 113a3083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3086 mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a308c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 113a308f mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3094 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3098 jne 0x113a309f */
  if (!C.zf) goto L_113a309f;
  /* 113a309a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a309d jmp 0x113a3102 */
  goto L_113a3102;
L_113a309f:;
  /* 113a309f mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a30a5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113a30a8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113a30ab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 113a30b0 push 0x113be4dc */
  push32((uint32_t)(0x113be4dcu));
  /* 113a30b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a30b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a30b9 call 0x11396610 */
  push32(0x113a30beu); f_11396610();
  /* 113a30be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a30c1 mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a30c7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 113a30ca mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a30d0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a30d4 jne 0x113a30db */
  if (!C.zf) goto L_113a30db;
  /* 113a30d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a30d9 jmp 0x113a3102 */
  goto L_113a3102;
L_113a30db:;
  /* 113a30db mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a30e0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 113a30e3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 113a30e6 mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a30ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 113a30ee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a30f0 mov byte ptr [0x113c0fc8], cl */
  w8((uint32_t)(0x113c0fc8), (CL));
  /* 113a30f6 mov dword ptr [0x113c0fcc], 1 */
  w32((uint32_t)(0x113c0fcc), (0x1u));
  /* 113a3100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a3102:;
  /* 113a3102 mov esp, ebp */
  ESP = (EBP);
  /* 113a3104 pop ebp */
  EBP = (pop32());
  /* 113a3105 ret  */
  ESPCHK(0x113a2e60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x113a3110 (125 bytes, 49 insns) */
void f_113a3110(void) {
  FTRACE(0x113a3110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3110 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3111 mov ebp, esp */
  EBP = (ESP);
  /* 113a3113 push ecx */
  push32((uint32_t)(ECX));
L_113a3114:;
  /* 113a3114 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3117 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a311a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a311c je 0x113a3189 */
  if (C.zf) goto L_113a3189;
  /* 113a311e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3121 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a3124 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3127 jl 0x113a314d */
  if ((C.sf!=C.of)) goto L_113a314d;
  /* 113a3129 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a312c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a312f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3132 jg 0x113a314d */
  if ((!C.zf&&C.sf==C.of)) goto L_113a314d;
  /* 113a3134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3137 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a313a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a313d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3140 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113a3142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3145 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3148 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a314b jmp 0x113a3187 */
  goto L_113a3187;
L_113a314d:;
  /* 113a314d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3150 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a3153 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3156 jne 0x113a317e */
  if (!C.zf) goto L_113a317e;
  /* 113a3158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a315b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a315e:;
  /* 113a315e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3161 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3164 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113a3167 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a3169 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a316c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a316f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a3172 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3175 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a3178 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a317a jne 0x113a315e */
  if (!C.zf) goto L_113a315e;
  /* 113a317c jmp 0x113a3187 */
  goto L_113a3187;
L_113a317e:;
  /* 113a317e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3181 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3184 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113a3187:;
  /* 113a3187 jmp 0x113a3114 */
  goto L_113a3114;
L_113a3189:;
  /* 113a3189 mov esp, ebp */
  ESP = (EBP);
  /* 113a318b pop ebp */
  EBP = (pop32());
  /* 113a318c ret  */
  ESPCHK(0x113a3110u, _esp0);
  ESP += 4; return;
}

/* FUN_10013190 @ 0x113a3190 (304 bytes, 85 insns) */
void f_113a3190(void) {
  FTRACE(0x113a3190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3190 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3191 mov ebp, esp */
  EBP = (ESP);
  /* 113a3193 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3194 cmp dword ptr [0x113c29f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a319b je 0x113a325c */
  if (C.zf) goto L_113a325c;
  /* 113a31a1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 113a31a3 push 0x113be4e8 */
  push32((uint32_t)(0x113be4e8u));
  /* 113a31a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a31aa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 113a31ac push 1 */
  push32((uint32_t)(0x1u));
  /* 113a31ae call 0x11396a20 */
  push32(0x113a31b3u); f_11396a20();
  /* 113a31b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a31b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a31b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a31bd jne 0x113a31c9 */
  if (!C.zf) goto L_113a31c9;
  /* 113a31bf mov eax, 1 */
  EAX = (0x1u);
  /* 113a31c4 jmp 0x113a32bc */
  goto L_113a32bc;
L_113a31c9:;
  /* 113a31c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a31cc push eax */
  push32((uint32_t)(EAX));
  /* 113a31cd call 0x113a32c0 */
  push32(0x113a31d2u); f_113a32c0();
  /* 113a31d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a31d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a31d7 je 0x113a31fd */
  if (C.zf) goto L_113a31fd;
  /* 113a31d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a31dc push ecx */
  push32((uint32_t)(ECX));
  /* 113a31dd call 0x113a3550 */
  push32(0x113a31e2u); f_113a3550();
  /* 113a31e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a31e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a31e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a31ea push edx */
  push32((uint32_t)(EDX));
  /* 113a31eb call 0x113970a0 */
  push32(0x113a31f0u); f_113970a0();
  /* 113a31f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a31f3 mov eax, 1 */
  EAX = (0x1u);
  /* 113a31f8 jmp 0x113a32bc */
  goto L_113a32bc;
L_113a31fd:;
  /* 113a31fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3200 mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3206 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a3208 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 113a320a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a320d mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3213 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 113a3216 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 113a3219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a321c mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3222 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 113a3225 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 113a3228 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a322b mov dword ptr [0x113c1eb8], eax */
  w32((uint32_t)(0x113c1eb8), (EAX));
  /* 113a3230 mov ecx, dword ptr [0x113c2a34] */
  ECX = (r32((uint32_t)(0x113c2a34)));
  /* 113a3236 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3237 call 0x113a3550 */
  push32(0x113a323cu); f_113a3550();
  /* 113a323c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a323f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3241 mov edx, dword ptr [0x113c2a34] */
  EDX = (r32((uint32_t)(0x113c2a34)));
  /* 113a3247 push edx */
  push32((uint32_t)(EDX));
  /* 113a3248 call 0x113970a0 */
  push32(0x113a324du); f_113970a0();
  /* 113a324d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3253 mov dword ptr [0x113c2a34], eax */
  w32((uint32_t)(0x113c2a34), (EAX));
  /* 113a3258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a325a jmp 0x113a32bc */
  goto L_113a32bc;
L_113a325c:;
  /* 113a325c mov ecx, dword ptr [0x113c1eb8] */
  ECX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a3262 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 113a3264 mov dword ptr [0x113c1e88], edx */
  w32((uint32_t)(0x113c1e88), (EDX));
  /* 113a326a mov eax, dword ptr [0x113c1eb8] */
  EAX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a326f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 113a3272 mov dword ptr [0x113c1e8c], ecx */
  w32((uint32_t)(0x113c1e8c), (ECX));
  /* 113a3278 mov edx, dword ptr [0x113c1eb8] */
  EDX = (r32((uint32_t)(0x113c1eb8)));
  /* 113a327e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 113a3281 mov dword ptr [0x113c1e90], eax */
  w32((uint32_t)(0x113c1e90), (EAX));
  /* 113a3286 mov dword ptr [0x113c1eb8], 0x113c1e88 */
  w32((uint32_t)(0x113c1eb8), (0x113c1e88u));
  /* 113a3290 mov ecx, dword ptr [0x113c2a34] */
  ECX = (r32((uint32_t)(0x113c2a34)));
  /* 113a3296 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3297 call 0x113a3550 */
  push32(0x113a329cu); f_113a3550();
  /* 113a329c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a329f push 2 */
  push32((uint32_t)(0x2u));
  /* 113a32a1 mov edx, dword ptr [0x113c2a34] */
  EDX = (r32((uint32_t)(0x113c2a34)));
  /* 113a32a7 push edx */
  push32((uint32_t)(EDX));
  /* 113a32a8 call 0x113970a0 */
  push32(0x113a32adu); f_113970a0();
  /* 113a32ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a32b0 mov dword ptr [0x113c2a34], 0 */
  w32((uint32_t)(0x113c2a34), (0x0u));
  /* 113a32ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a32bc:;
  /* 113a32bc mov esp, ebp */
  ESP = (EBP);
  /* 113a32be pop ebp */
  EBP = (pop32());
  /* 113a32bf ret  */
  ESPCHK(0x113a3190u, _esp0);
  ESP += 4; return;
}

/* FUN_100132c0 @ 0x113a32c0 (525 bytes, 200 insns) */
void f_113a32c0(void) {
  FTRACE(0x113a32c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a32c0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a32c1 mov ebp, esp */
  EBP = (ESP);
  /* 113a32c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a32c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 113a32cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a32cf mov ax, word ptr [0x113c2a54] */
  AX = (r16((uint32_t)(0x113c2a54)));
  /* 113a32d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 113a32d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a32dc jne 0x113a32e6 */
  if (!C.zf) goto L_113a32e6;
  /* 113a32de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 113a32e1 jmp 0x113a34c9 */
  goto L_113a34c9;
L_113a32e6:;
  /* 113a32e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a32e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a32ec push ecx */
  push32((uint32_t)(ECX));
  /* 113a32ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 113a32ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a32f2 push edx */
  push32((uint32_t)(EDX));
  /* 113a32f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a32f5 call 0x113a5f30 */
  push32(0x113a32fau); f_113a5f30();
  /* 113a32fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a32fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3300 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3302 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3305 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3308 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a330b push edx */
  push32((uint32_t)(EDX));
  /* 113a330c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 113a330e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3311 push eax */
  push32((uint32_t)(EAX));
  /* 113a3312 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3314 call 0x113a5f30 */
  push32(0x113a3319u); f_113a5f30();
  /* 113a3319 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a331c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a331f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3321 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3327 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a332a push edx */
  push32((uint32_t)(EDX));
  /* 113a332b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 113a332d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3330 push eax */
  push32((uint32_t)(EAX));
  /* 113a3331 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3333 call 0x113a5f30 */
  push32(0x113a3338u); f_113a5f30();
  /* 113a3338 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a333b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a333e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3340 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3343 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3346 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3349 push edx */
  push32((uint32_t)(EDX));
  /* 113a334a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 113a334c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a334f push eax */
  push32((uint32_t)(EAX));
  /* 113a3350 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3352 call 0x113a5f30 */
  push32(0x113a3357u); f_113a5f30();
  /* 113a3357 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a335a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a335d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a335f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3365 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3368 push edx */
  push32((uint32_t)(EDX));
  /* 113a3369 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 113a336b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a336e push eax */
  push32((uint32_t)(EAX));
  /* 113a336f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3371 call 0x113a5f30 */
  push32(0x113a3376u); f_113a5f30();
  /* 113a3376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3379 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a337c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a337e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3381 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3384 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 113a3387 push eax */
  push32((uint32_t)(EAX));
  /* 113a3388 call 0x113a34d0 */
  push32(0x113a338du); f_113a34d0();
  /* 113a338d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3393 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3396 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3397 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 113a3399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a339c push edx */
  push32((uint32_t)(EDX));
  /* 113a339d push 1 */
  push32((uint32_t)(0x1u));
  /* 113a339f call 0x113a5f30 */
  push32(0x113a33a4u); f_113a5f30();
  /* 113a33a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a33aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a33ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a33af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a33b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33b5 push edx */
  push32((uint32_t)(EDX));
  /* 113a33b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 113a33b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a33bb push eax */
  push32((uint32_t)(EAX));
  /* 113a33bc push 1 */
  push32((uint32_t)(0x1u));
  /* 113a33be call 0x113a5f30 */
  push32(0x113a33c3u); f_113a5f30();
  /* 113a33c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a33c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a33cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a33ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a33d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33d4 push edx */
  push32((uint32_t)(EDX));
  /* 113a33d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 113a33d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a33da push eax */
  push32((uint32_t)(EAX));
  /* 113a33db push 0 */
  push32((uint32_t)(0x0u));
  /* 113a33dd call 0x113a5f30 */
  push32(0x113a33e2u); f_113a5f30();
  /* 113a33e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a33e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a33ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a33ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a33f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a33f3 push edx */
  push32((uint32_t)(EDX));
  /* 113a33f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 113a33f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a33f9 push eax */
  push32((uint32_t)(EAX));
  /* 113a33fa push 0 */
  push32((uint32_t)(0x0u));
  /* 113a33fc call 0x113a5f30 */
  push32(0x113a3401u); f_113a5f30();
  /* 113a3401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3404 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3407 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3409 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a340c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a340f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3412 push edx */
  push32((uint32_t)(EDX));
  /* 113a3413 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 113a3415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3418 push eax */
  push32((uint32_t)(EAX));
  /* 113a3419 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a341b call 0x113a5f30 */
  push32(0x113a3420u); f_113a5f30();
  /* 113a3420 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3426 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3428 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a342b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a342e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3431 push edx */
  push32((uint32_t)(EDX));
  /* 113a3432 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 113a3434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3437 push eax */
  push32((uint32_t)(EAX));
  /* 113a3438 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a343a call 0x113a5f30 */
  push32(0x113a343fu); f_113a5f30();
  /* 113a343f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3445 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3447 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a344a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a344d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3450 push edx */
  push32((uint32_t)(EDX));
  /* 113a3451 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 113a3453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3456 push eax */
  push32((uint32_t)(EAX));
  /* 113a3457 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a3459 call 0x113a5f30 */
  push32(0x113a345eu); f_113a5f30();
  /* 113a345e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3461 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3464 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3466 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3469 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a346c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a346f push edx */
  push32((uint32_t)(EDX));
  /* 113a3470 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 113a3472 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3475 push eax */
  push32((uint32_t)(EAX));
  /* 113a3476 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a3478 call 0x113a5f30 */
  push32(0x113a347du); f_113a5f30();
  /* 113a347d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3480 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a3483 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3485 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a3488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a348b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a348e push edx */
  push32((uint32_t)(EDX));
  /* 113a348f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 113a3491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3494 push eax */
  push32((uint32_t)(EAX));
  /* 113a3495 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a3497 call 0x113a5f30 */
  push32(0x113a349cu); f_113a5f30();
  /* 113a349c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a349f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a34a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a34a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a34a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a34aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a34ad push edx */
  push32((uint32_t)(EDX));
  /* 113a34ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 113a34b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a34b3 push eax */
  push32((uint32_t)(EAX));
  /* 113a34b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a34b6 call 0x113a5f30 */
  push32(0x113a34bbu); f_113a5f30();
  /* 113a34bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a34be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 113a34c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 113a34c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 113a34c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_113a34c9:;
  /* 113a34c9 mov esp, ebp */
  ESP = (EBP);
  /* 113a34cb pop ebp */
  EBP = (pop32());
  /* 113a34cc ret  */
  ESPCHK(0x113a32c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x113a34d0 (125 bytes, 49 insns) */
void f_113a34d0(void) {
  FTRACE(0x113a34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a34d1 mov ebp, esp */
  EBP = (ESP);
  /* 113a34d3 push ecx */
  push32((uint32_t)(ECX));
L_113a34d4:;
  /* 113a34d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a34d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a34da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a34dc je 0x113a3549 */
  if (C.zf) goto L_113a3549;
  /* 113a34de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a34e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a34e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a34e7 jl 0x113a350d */
  if ((C.sf!=C.of)) goto L_113a350d;
  /* 113a34e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a34ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a34ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a34f2 jg 0x113a350d */
  if ((!C.zf&&C.sf==C.of)) goto L_113a350d;
  /* 113a34f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a34f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 113a34fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a34fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3500 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 113a3502 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3505 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3508 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 113a350b jmp 0x113a3547 */
  goto L_113a3547;
L_113a350d:;
  /* 113a350d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3510 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 113a3513 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3516 jne 0x113a353e */
  if (!C.zf) goto L_113a353e;
  /* 113a3518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a351b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_113a351e:;
  /* 113a351e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3524 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113a3527 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 113a3529 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a352c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a352f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 113a3532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 113a3535 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 113a3538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a353a jne 0x113a351e */
  if (!C.zf) goto L_113a351e;
  /* 113a353c jmp 0x113a3547 */
  goto L_113a3547;
L_113a353e:;
  /* 113a353e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3541 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3544 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_113a3547:;
  /* 113a3547 jmp 0x113a34d4 */
  goto L_113a34d4;
L_113a3549:;
  /* 113a3549 mov esp, ebp */
  ESP = (EBP);
  /* 113a354b pop ebp */
  EBP = (pop32());
  /* 113a354c ret  */
  ESPCHK(0x113a34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013550 @ 0x113a3550 (147 bytes, 52 insns) */
void f_113a3550(void) {
  FTRACE(0x113a3550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3550 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3551 mov ebp, esp */
  EBP = (ESP);
  /* 113a3553 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3557 jne 0x113a355e */
  if (!C.zf) goto L_113a355e;
  /* 113a3559 jmp 0x113a35e1 */
  goto L_113a35e1;
L_113a355e:;
  /* 113a355e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3561 cmp dword ptr [eax + 0xc], 0x113c2a90 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x113c2a90u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3568 je 0x113a35e1 */
  if (C.zf) goto L_113a35e1;
  /* 113a356a push 2 */
  push32((uint32_t)(0x2u));
  /* 113a356c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a356f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 113a3572 push edx */
  push32((uint32_t)(EDX));
  /* 113a3573 call 0x113970a0 */
  push32(0x113a3578u); f_113970a0();
  /* 113a3578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a357b push 2 */
  push32((uint32_t)(0x2u));
  /* 113a357d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3580 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 113a3583 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3584 call 0x113970a0 */
  push32(0x113a3589u); f_113970a0();
  /* 113a3589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a358c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a358e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a3591 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 113a3594 push eax */
  push32((uint32_t)(EAX));
  /* 113a3595 call 0x113970a0 */
  push32(0x113a359au); f_113970a0();
  /* 113a359a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a359d push 2 */
  push32((uint32_t)(0x2u));
  /* 113a359f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a35a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 113a35a5 push edx */
  push32((uint32_t)(EDX));
  /* 113a35a6 call 0x113970a0 */
  push32(0x113a35abu); f_113970a0();
  /* 113a35ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a35ae push 2 */
  push32((uint32_t)(0x2u));
  /* 113a35b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a35b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 113a35b6 push ecx */
  push32((uint32_t)(ECX));
  /* 113a35b7 call 0x113970a0 */
  push32(0x113a35bcu); f_113970a0();
  /* 113a35bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a35bf push 2 */
  push32((uint32_t)(0x2u));
  /* 113a35c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a35c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 113a35c7 push eax */
  push32((uint32_t)(EAX));
  /* 113a35c8 call 0x113970a0 */
  push32(0x113a35cdu); f_113970a0();
  /* 113a35cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a35d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a35d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 113a35d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 113a35d8 push edx */
  push32((uint32_t)(EDX));
  /* 113a35d9 call 0x113970a0 */
  push32(0x113a35deu); f_113970a0();
  /* 113a35de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a35e1:;
  /* 113a35e1 pop ebp */
  EBP = (pop32());
  /* 113a35e2 ret  */
  ESPCHK(0x113a3550u, _esp0);
  ESP += 4; return;
}

/* FUN_100135f0 @ 0x113a35f0 (928 bytes, 284 insns) */
void f_113a35f0(void) {
  FTRACE(0x113a35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a35f1 mov ebp, esp */
  EBP = (ESP);
  /* 113a35f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 113a35f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 113a35fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 113a3604 cmp dword ptr [0x113c29f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c29f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a360b je 0x113a3941 */
  if (C.zf) goto L_113a3941;
  /* 113a3611 cmp dword ptr [0x113c2a00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3618 jne 0x113a3640 */
  if (!C.zf) goto L_113a3640;
  /* 113a361a push 0x113c2a00 */
  push32((uint32_t)(0x113c2a00u));
  /* 113a361f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 113a3624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3626 mov ax, word ptr [0x113c2a4c] */
  AX = (r16((uint32_t)(0x113c2a4c)));
  /* 113a362c push eax */
  push32((uint32_t)(EAX));
  /* 113a362d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a362f call 0x113a5f30 */
  push32(0x113a3634u); f_113a5f30();
  /* 113a3634 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3639 je 0x113a3640 */
  if (C.zf) goto L_113a3640;
  /* 113a363b jmp 0x113a3902 */
  goto L_113a3902;
L_113a3640:;
  /* 113a3640 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 113a3642 push 0x113be4f4 */
  push32((uint32_t)(0x113be4f4u));
  /* 113a3647 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3649 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113a364e call 0x11396610 */
  push32(0x113a3653u); f_11396610();
  /* 113a3653 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3656 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 113a3659 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 113a365b push 0x113be4f4 */
  push32((uint32_t)(0x113be4f4u));
  /* 113a3660 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3662 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113a3667 call 0x11396610 */
  push32(0x113a366cu); f_11396610();
  /* 113a366c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a366f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 113a3672 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 113a3674 push 0x113be4f4 */
  push32((uint32_t)(0x113be4f4u));
  /* 113a3679 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a367b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 113a3680 call 0x11396610 */
  push32(0x113a3685u); f_11396610();
  /* 113a3685 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3688 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 113a368b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 113a368d push 0x113be4f4 */
  push32((uint32_t)(0x113be4f4u));
  /* 113a3692 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3694 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 113a3699 call 0x11396610 */
  push32(0x113a369eu); f_11396610();
  /* 113a369e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a36a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 113a36a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a36a8 je 0x113a36bc */
  if (C.zf) goto L_113a36bc;
  /* 113a36aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a36ae je 0x113a36bc */
  if (C.zf) goto L_113a36bc;
  /* 113a36b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a36b4 je 0x113a36bc */
  if (C.zf) goto L_113a36bc;
  /* 113a36b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a36ba jne 0x113a36c1 */
  if (!C.zf) goto L_113a36c1;
L_113a36bc:;
  /* 113a36bc jmp 0x113a3902 */
  goto L_113a3902;
L_113a36c1:;
  /* 113a36c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a36c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 113a36c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113a36ce jmp 0x113a36d9 */
  goto L_113a36d9;
L_113a36d0:;
  /* 113a36d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a36d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a36d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_113a36d9:;
  /* 113a36d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a36e0 jge 0x113a36f5 */
  if ((C.sf==C.of)) goto L_113a36f5;
  /* 113a36e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a36e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 113a36e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 113a36ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a36ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a36f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113a36f3 jmp 0x113a36d0 */
  goto L_113a36d0;
L_113a36f5:;
  /* 113a36f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 113a36f8 push eax */
  push32((uint32_t)(EAX));
  /* 113a36f9 mov ecx, dword ptr [0x113c2a00] */
  ECX = (r32((uint32_t)(0x113c2a00)));
  /* 113a36ff push ecx */
  push32((uint32_t)(ECX));
  /* 113a3700 call dword ptr [0x113c533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x113c533c))), 0x113a3706u);
  /* 113a3706 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3708 jne 0x113a370f */
  if (!C.zf) goto L_113a370f;
  /* 113a370a jmp 0x113a3902 */
  goto L_113a3902;
L_113a370f:;
  /* 113a370f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3713 jbe 0x113a371a */
  if ((C.cf||C.zf)) goto L_113a371a;
  /* 113a3715 jmp 0x113a3902 */
  goto L_113a3902;
L_113a371a:;
  /* 113a371a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 113a371d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 113a3723 mov dword ptr [0x113c0fc4], edx */
  w32((uint32_t)(0x113c0fc4), (EDX));
  /* 113a3729 cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3730 jle 0x113a3789 */
  if ((C.zf||C.sf!=C.of)) goto L_113a3789;
  /* 113a3732 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 113a3735 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 113a3738 jmp 0x113a3743 */
  goto L_113a3743;
L_113a373a:;
  /* 113a373a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a373d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3740 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_113a3743:;
  /* 113a3743 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3748 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a374a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a374c je 0x113a3789 */
  if (C.zf) goto L_113a3789;
  /* 113a374e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3751 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a3753 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 113a3756 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a3758 je 0x113a3789 */
  if (C.zf) goto L_113a3789;
  /* 113a375a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a375d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a375f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 113a3761 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 113a3764 jmp 0x113a376f */
  goto L_113a376f;
L_113a3766:;
  /* 113a3766 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a3769 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a376c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_113a376f:;
  /* 113a376f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3772 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3774 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113a3777 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a377a jg 0x113a3787 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a3787;
  /* 113a377c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a377f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3782 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 113a3785 jmp 0x113a3766 */
  goto L_113a3766;
L_113a3787:;
  /* 113a3787 jmp 0x113a373a */
  goto L_113a373a;
L_113a3789:;
  /* 113a3789 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a378b push 0 */
  push32((uint32_t)(0x0u));
  /* 113a378d push 0 */
  push32((uint32_t)(0x0u));
  /* 113a378f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a3792 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3795 push eax */
  push32((uint32_t)(EAX));
  /* 113a3796 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113a379b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a379e push ecx */
  push32((uint32_t)(ECX));
  /* 113a379f push 1 */
  push32((uint32_t)(0x1u));
  /* 113a37a1 call 0x1139f560 */
  push32(0x113a37a6u); f_1139f560();
  /* 113a37a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a37a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a37ab jne 0x113a37b2 */
  if (!C.zf) goto L_113a37b2;
  /* 113a37ad jmp 0x113a3902 */
  goto L_113a3902;
L_113a37b2:;
  /* 113a37b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a37b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 113a37ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a37bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 113a37c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 113a37c7 jmp 0x113a37d2 */
  goto L_113a37d2;
L_113a37c9:;
  /* 113a37c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a37cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a37cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113a37d2:;
  /* 113a37d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a37d9 jge 0x113a37f0 */
  if ((C.sf==C.of)) goto L_113a37f0;
  /* 113a37db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a37de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 113a37e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 113a37e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 113a37e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a37eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 113a37ee jmp 0x113a37c9 */
  goto L_113a37c9;
L_113a37f0:;
  /* 113a37f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a37f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 113a37f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a37f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a37fa push edx */
  push32((uint32_t)(EDX));
  /* 113a37fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 113a3800 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a3803 push eax */
  push32((uint32_t)(EAX));
  /* 113a3804 push 1 */
  push32((uint32_t)(0x1u));
  /* 113a3806 call 0x113a61d0 */
  push32(0x113a380bu); f_113a61d0();
  /* 113a380b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a380e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 113a3810 jne 0x113a3817 */
  if (!C.zf) goto L_113a3817;
  /* 113a3812 jmp 0x113a3902 */
  goto L_113a3902;
L_113a3817:;
  /* 113a3817 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a381a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 113a381f cmp dword ptr [0x113c0fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x113c0fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3826 jle 0x113a3883 */
  if ((C.zf||C.sf!=C.of)) goto L_113a3883;
  /* 113a3828 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 113a382b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 113a382e jmp 0x113a3839 */
  goto L_113a3839;
L_113a3830:;
  /* 113a3830 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3833 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3836 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_113a3839:;
  /* 113a3839 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a383c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 113a383e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 113a3840 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 113a3842 je 0x113a3883 */
  if (C.zf) goto L_113a3883;
  /* 113a3844 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3847 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3849 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 113a384c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 113a384e je 0x113a3883 */
  if (C.zf) goto L_113a3883;
  /* 113a3850 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3853 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3855 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a3857 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 113a385a jmp 0x113a3865 */
  goto L_113a3865;
L_113a385c:;
  /* 113a385c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a385f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3862 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_113a3865:;
  /* 113a3865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 113a3868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a386a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 113a386d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a3870 jg 0x113a3881 */
  if ((!C.zf&&C.sf==C.of)) goto L_113a3881;
  /* 113a3872 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 113a3875 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a3878 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 113a387f jmp 0x113a385c */
  goto L_113a385c;
L_113a3881:;
  /* 113a3881 jmp 0x113a3830 */
  goto L_113a3830;
L_113a3883:;
  /* 113a3883 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a3886 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3889 mov dword ptr [0x113c0db8], eax */
  w32((uint32_t)(0x113c0db8), (EAX));
  /* 113a388e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a3891 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3894 mov dword ptr [0x113c0dbc], ecx */
  w32((uint32_t)(0x113c0dbc), (ECX));
  /* 113a389a cmp dword ptr [0x113c2a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a38a1 je 0x113a38b4 */
  if (C.zf) goto L_113a38b4;
  /* 113a38a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a38a5 mov edx, dword ptr [0x113c2a38] */
  EDX = (r32((uint32_t)(0x113c2a38)));
  /* 113a38ab push edx */
  push32((uint32_t)(EDX));
  /* 113a38ac call 0x113970a0 */
  push32(0x113a38b1u); f_113970a0();
  /* 113a38b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a38b4:;
  /* 113a38b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a38b7 mov dword ptr [0x113c2a38], eax */
  w32((uint32_t)(0x113c2a38), (EAX));
  /* 113a38bc cmp dword ptr [0x113c2a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x113c2a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 113a38c3 je 0x113a38d6 */
  if (C.zf) goto L_113a38d6;
  /* 113a38c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a38c7 mov ecx, dword ptr [0x113c2a3c] */
  ECX = (r32((uint32_t)(0x113c2a3c)));
  /* 113a38cd push ecx */
  push32((uint32_t)(ECX));
  /* 113a38ce call 0x113970a0 */
  push32(0x113a38d3u); f_113970a0();
  /* 113a38d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_113a38d6:;
  /* 113a38d6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a38d9 mov dword ptr [0x113c2a3c], edx */
  w32((uint32_t)(0x113c2a3c), (EDX));
  /* 113a38df push 2 */
  push32((uint32_t)(0x2u));
  /* 113a38e1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a38e4 push eax */
  push32((uint32_t)(EAX));
  /* 113a38e5 call 0x113970a0 */
  push32(0x113a38eau); f_113970a0();
  /* 113a38ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a38ed push 2 */
  push32((uint32_t)(0x2u));
  /* 113a38ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a38f2 push ecx */
  push32((uint32_t)(ECX));
  /* 113a38f3 call 0x113970a0 */
  push32(0x113a38f8u); f_113970a0();
  /* 113a38f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a38fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a38fd jmp 0x113a398c */
  goto L_113a398c;
L_113a3902:;
  /* 113a3902 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3904 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 113a3907 push edx */
  push32((uint32_t)(EDX));
  /* 113a3908 call 0x113970a0 */
  push32(0x113a390du); f_113970a0();
  /* 113a390d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3910 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3912 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 113a3915 push eax */
  push32((uint32_t)(EAX));
  /* 113a3916 call 0x113970a0 */
  push32(0x113a391bu); f_113970a0();
  /* 113a391b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a391e push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3920 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 113a3923 push ecx */
  push32((uint32_t)(ECX));
  /* 113a3924 call 0x113970a0 */
  push32(0x113a3929u); f_113970a0();
  /* 113a3929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a392c push 2 */
  push32((uint32_t)(0x2u));
  /* 113a392e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 113a3931 push edx */
  push32((uint32_t)(EDX));
  /* 113a3932 call 0x113970a0 */
  push32(0x113a3937u); f_113970a0();
  /* 113a3937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a393a mov eax, 1 */
  EAX = (0x1u);
  /* 113a393f jmp 0x113a398c */
  goto L_113a398c;
L_113a3941:;
  /* 113a3941 mov dword ptr [0x113c0db8], 0x113c0dc2 */
  w32((uint32_t)(0x113c0db8), (0x113c0dc2u));
  /* 113a394b mov dword ptr [0x113c0dbc], 0x113c0dc2 */
  w32((uint32_t)(0x113c0dbc), (0x113c0dc2u));
  /* 113a3955 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3957 mov eax, dword ptr [0x113c2a38] */
  EAX = (r32((uint32_t)(0x113c2a38)));
  /* 113a395c push eax */
  push32((uint32_t)(EAX));
  /* 113a395d call 0x113970a0 */
  push32(0x113a3962u); f_113970a0();
  /* 113a3962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3965 push 2 */
  push32((uint32_t)(0x2u));
  /* 113a3967 mov ecx, dword ptr [0x113c2a3c] */
  ECX = (r32((uint32_t)(0x113c2a3c)));
  /* 113a396d push ecx */
  push32((uint32_t)(ECX));
  /* 113a396e call 0x113970a0 */
  push32(0x113a3973u); f_113970a0();
  /* 113a3973 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3976 mov dword ptr [0x113c2a38], 0 */
  w32((uint32_t)(0x113c2a38), (0x0u));
  /* 113a3980 mov dword ptr [0x113c2a3c], 0 */
  w32((uint32_t)(0x113c2a3c), (0x0u));
  /* 113a398a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_113a398c:;
  /* 113a398c mov esp, ebp */
  ESP = (EBP);
  /* 113a398e pop ebp */
  EBP = (pop32());
  /* 113a398f ret  */
  ESPCHK(0x113a35f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013990 @ 0x113a3990 (7 bytes, 5 insns) */
void f_113a3990(void) {
  FTRACE(0x113a3990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3990 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3991 mov ebp, esp */
  EBP = (ESP);
  /* 113a3993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3995 pop ebp */
  EBP = (pop32());
  /* 113a3996 ret  */
  ESPCHK(0x113a3990u, _esp0);
  ESP += 4; return;
}

/* FUN_100139a0 @ 0x113a39a0 (62 bytes, 35 insns) */
void f_113a39a0(void) {
  FTRACE(0x113a39a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a39a0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a39a1 mov ebp, esp */
  EBP = (ESP);
  /* 113a39a3 push esi */
  push32((uint32_t)(ESI));
  /* 113a39a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a39a6 push eax */
  push32((uint32_t)(EAX));
  /* 113a39a7 push eax */
  push32((uint32_t)(EAX));
  /* 113a39a8 push eax */
  push32((uint32_t)(EAX));
  /* 113a39a9 push eax */
  push32((uint32_t)(EAX));
  /* 113a39aa push eax */
  push32((uint32_t)(EAX));
  /* 113a39ab push eax */
  push32((uint32_t)(EAX));
  /* 113a39ac push eax */
  push32((uint32_t)(EAX));
  /* 113a39ad push eax */
  push32((uint32_t)(EAX));
  /* 113a39ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a39b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113a39b4:;
  /* 113a39b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a39b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a39b8 je 0x113a39c1 */
  if (C.zf) goto L_113a39c1;
  /* 113a39ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113a39bb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x113a39bb");
  /* 113a39bf jmp 0x113a39b4 */
  goto L_113a39b4;
L_113a39c1:;
  /* 113a39c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 113a39c4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 113a39c7 nop  */
  /* nop */
L_113a39c8:;
  /* 113a39c8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 113a39c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113a39cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a39cd je 0x113a39d6 */
  if (C.zf) goto L_113a39d6;
  /* 113a39cf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a39d0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x113a39d0");
  /* 113a39d4 jae 0x113a39c8 */
  if (!C.cf) goto L_113a39c8;
L_113a39d6:;
  /* 113a39d6 mov eax, ecx */
  EAX = (ECX);
  /* 113a39d8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a39db pop esi */
  ESI = (pop32());
  /* 113a39dc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113a39dd ret  */
  ESPCHK(0x113a39a0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x113a39e0 (56 bytes, 31 insns) */
void f_113a39e0(void) {
  FTRACE(0x113a39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 113a39e1 mov ebp, esp */
  EBP = (ESP);
  /* 113a39e3 push edi */
  push32((uint32_t)(EDI));
  /* 113a39e4 push esi */
  push32((uint32_t)(ESI));
  /* 113a39e5 push ebx */
  push32((uint32_t)(EBX));
  /* 113a39e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 113a39e9 jecxz 0x113a3a11 */
  x86_unimpl("jecxz @ 0x113a39e9");
  /* 113a39eb mov ebx, ecx */
  EBX = (ECX);
  /* 113a39ed mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 113a39f0 mov esi, edi */
  ESI = (EDI);
  /* 113a39f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a39f4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 113a39f6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 113a39f8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 113a39fa mov edi, esi */
  EDI = (ESI);
  /* 113a39fc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 113a39ff repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 113a3a01 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 113a3a04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 113a3a06 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 113a3a09 ja 0x113a3a0f */
  if ((!C.cf&&!C.zf)) goto L_113a3a0f;
  /* 113a3a0b je 0x113a3a11 */
  if (C.zf) goto L_113a3a11;
  /* 113a3a0d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 113a3a0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_113a3a0f:;
  /* 113a3a0f not ecx */
  ECX = (~(ECX));
L_113a3a11:;
  /* 113a3a11 mov eax, ecx */
  EAX = (ECX);
  /* 113a3a13 pop ebx */
  EBX = (pop32());
  /* 113a3a14 pop esi */
  ESI = (pop32());
  /* 113a3a15 pop edi */
  EDI = (pop32());
  /* 113a3a16 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113a3a17 ret  */
  ESPCHK(0x113a39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a20 @ 0x113a3a20 (58 bytes, 32 insns) */
void f_113a3a20(void) {
  FTRACE(0x113a3a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 113a3a20 push ebp */
  push32((uint32_t)(EBP));
  /* 113a3a21 mov ebp, esp */
  EBP = (ESP);
  /* 113a3a23 push esi */
  push32((uint32_t)(ESI));
  /* 113a3a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 113a3a26 push eax */
  push32((uint32_t)(EAX));
  /* 113a3a27 push eax */
  push32((uint32_t)(EAX));
  /* 113a3a28 push eax */
  push32((uint32_t)(EAX));
  /* 113a3a29 push eax */
  push32((uint32_t)(EAX));
  /* 113a3a2a push eax */
  push32((uint32_t)(EAX));
  /* 113a3a2b push eax */
  push32((uint32_t)(EAX));
  /* 113a3a2c push eax */
  push32((uint32_t)(EAX));
  /* 113a3a2d push eax */
  push32((uint32_t)(EAX));
  /* 113a3a2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 113a3a31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_113a3a34:;
  /* 113a3a34 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 113a3a36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a3a38 je 0x113a3a41 */
  if (C.zf) goto L_113a3a41;
  /* 113a3a3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 113a3a3b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x113a3a3b");
  /* 113a3a3f jmp 0x113a3a34 */
  goto L_113a3a34;
L_113a3a41:;
  /* 113a3a41 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_113a3a44:;
  /* 113a3a44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 113a3a46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 113a3a48 je 0x113a3a54 */
  if (C.zf) goto L_113a3a54;
  /* 113a3a4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 113a3a4b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x113a3a4b");
  /* 113a3a4f jae 0x113a3a44 */
  if (!C.cf) goto L_113a3a44;
  /* 113a3a51 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_113a3a54:;
  /* 113a3a54 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 113a3a57 pop esi */
  ESI = (pop32());
  /* 113a3a58 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 113a3a59 ret  */
  ESPCHK(0x113a3a20u, _esp0);
  ESP += 4; return;
}

