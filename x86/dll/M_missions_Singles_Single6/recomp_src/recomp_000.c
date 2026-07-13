#include "recomp.h"

/* FUN_10001000 @ 0x11a01000 (18 bytes, 7 insns) */
void f_11a01000(void) {
  FTRACE(0x11a01000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a01004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a01005 jne 0x11a0100c */
  if (!C.zf) goto L_11a0100c;
  /* 11a01007 call 0x11a0126e */
  push32(0x11a0100cu); f_11a0126e();
L_11a0100c:;
  /* 11a0100c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0100e pop eax */
  EAX = (pop32());
  /* 11a0100f ret 0xc */
  ESPCHK(0x11a01000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11a01012 (49 bytes, 20 insns) */
void f_11a01012(void) {
  FTRACE(0x11a01012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01012 push esi */
  push32((uint32_t)(ESI));
  /* 11a01013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a01015:;
  /* 11a01015 push esi */
  push32((uint32_t)(ESI));
  /* 11a01016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a0101a call dword ptr [0x11a0616c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0616c))), 0x11a01020u);
  /* 11a01020 pop ecx */
  ECX = (pop32());
  /* 11a01021 pop ecx */
  ECX = (pop32());
  /* 11a01022 mov ecx, dword ptr [0x11a07030] */
  ECX = (r32((uint32_t)(0x11a07030)));
  /* 11a01028 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0102a jge 0x11a0103b */
  if ((C.sf==C.of)) goto L_11a0103b;
  /* 11a0102c push ecx */
  push32((uint32_t)(ECX));
  /* 11a0102d push esi */
  push32((uint32_t)(ESI));
  /* 11a0102e push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a01032 call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a01038u);
  /* 11a01038 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0103b:;
  /* 11a0103b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a0103c cmp esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0103f jle 0x11a01015 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01015;
  /* 11a01041 pop esi */
  ESI = (pop32());
  /* 11a01042 ret  */
  ESPCHK(0x11a01012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001043 @ 0x11a01043 (46 bytes, 13 insns) */
void f_11a01043(void) {
  FTRACE(0x11a01043u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01043 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a01047 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a0104b call dword ptr [0x11a0616c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0616c))), 0x11a01051u);
  /* 11a01051 pop ecx */
  ECX = (pop32());
  /* 11a01052 cmp eax, 0x186a0 */
  { uint32_t _a=(EAX),_b=(0x186a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01057 pop ecx */
  ECX = (pop32());
  /* 11a01058 jge 0x11a01070 */
  if ((C.sf==C.of)) goto L_11a01070;
  /* 11a0105a push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 11a0105f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a01063 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a01067 call dword ptr [0x11a06168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06168))), 0x11a0106du);
  /* 11a0106d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01070:;
  /* 11a01070 ret  */
  ESPCHK(0x11a01043u, _esp0);
  ESP += 4; return;
}

/* FUN_10001071 @ 0x11a01071 (23 bytes, 12 insns) */
void f_11a01071(void) {
  FTRACE(0x11a01071u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01071 push esi */
  push32((uint32_t)(ESI));
  /* 11a01072 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a01074:;
  /* 11a01074 push esi */
  push32((uint32_t)(ESI));
  /* 11a01075 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a01079 call 0x11a01043 */
  push32(0x11a0107eu); f_11a01043();
  /* 11a0107e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a0107f pop ecx */
  ECX = (pop32());
  /* 11a01080 cmp esi, 5 */
  { uint32_t _a=(ESI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01083 pop ecx */
  ECX = (pop32());
  /* 11a01084 jle 0x11a01074 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01074;
  /* 11a01086 pop esi */
  ESI = (pop32());
  /* 11a01087 ret  */
  ESPCHK(0x11a01071u, _esp0);
  ESP += 4; return;
}

/* FUN_10001088 @ 0x11a01088 (30 bytes, 15 insns) */
void f_11a01088(void) {
  FTRACE(0x11a01088u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01088 push esi */
  push32((uint32_t)(ESI));
  /* 11a01089 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a0108b:;
  /* 11a0108b push esi */
  push32((uint32_t)(ESI));
  /* 11a0108c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a01090 call dword ptr [0x11a06158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06158))), 0x11a01096u);
  /* 11a01096 pop ecx */
  ECX = (pop32());
  /* 11a01097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01099 pop ecx */
  ECX = (pop32());
  /* 11a0109a jg 0x11a010a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a010a2;
  /* 11a0109c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a0109d cmp esi, 7 */
  { uint32_t _a=(ESI),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a010a0 jl 0x11a0108b */
  if ((C.sf!=C.of)) goto L_11a0108b;
L_11a010a2:;
  /* 11a010a2 mov eax, esi */
  EAX = (ESI);
  /* 11a010a4 pop esi */
  ESI = (pop32());
  /* 11a010a5 ret  */
  ESPCHK(0x11a01088u, _esp0);
  ESP += 4; return;
}

/* FUN_100010a6 @ 0x11a010a6 (93 bytes, 40 insns) */
void f_11a010a6(void) {
  FTRACE(0x11a010a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a010a6 push ebp */
  push32((uint32_t)(EBP));
  /* 11a010a7 mov ebp, esp */
  EBP = (ESP);
  /* 11a010a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a010aa push esi */
  push32((uint32_t)(ESI));
  /* 11a010ab mov esi, dword ptr [0x11a0615c] */
  ESI = (r32((uint32_t)(0x11a0615c)));
  /* 11a010b1 push edi */
  push32((uint32_t)(EDI));
  /* 11a010b2 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a010b5 push edi */
  push32((uint32_t)(EDI));
  /* 11a010b6 push 0x11a07ab0 */
  push32((uint32_t)(0x11a07ab0u));
  /* 11a010bb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a010be call esi */
  call_ind((uint32_t)(ESI), 0x11a010c0u);
  /* 11a010c0 push edi */
  push32((uint32_t)(EDI));
  /* 11a010c1 mov ebx, eax */
  EBX = (EAX);
  /* 11a010c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a010c6 call dword ptr [0x11a06160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06160))), 0x11a010ccu);
  /* 11a010cc push edi */
  push32((uint32_t)(EDI));
  /* 11a010cd mov edx, eax */
  EDX = (EAX);
  /* 11a010cf push 0x11a078b0 */
  push32((uint32_t)(0x11a078b0u));
  /* 11a010d4 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a010d6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a010d9 mov ebx, edx */
  EBX = (EDX);
  /* 11a010db call esi */
  call_ind((uint32_t)(ESI), 0x11a010ddu);
  /* 11a010dd push edi */
  push32((uint32_t)(EDI));
  /* 11a010de push 0x11a07b10 */
  push32((uint32_t)(0x11a07b10u));
  /* 11a010e3 sub ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a010e5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a010e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a010eau);
  /* 11a010ea push edi */
  push32((uint32_t)(EDI));
  /* 11a010eb push 0x11a077c8 */
  push32((uint32_t)(0x11a077c8u));
  /* 11a010f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a010f3 sub ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a010f5 call esi */
  call_ind((uint32_t)(ESI), 0x11a010f7u);
  /* 11a010f7 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a010fa sub ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a010fc mov eax, ebx */
  EAX = (EBX);
  /* 11a010fe pop edi */
  EDI = (pop32());
  /* 11a010ff pop esi */
  ESI = (pop32());
  /* 11a01100 pop ebx */
  EBX = (pop32());
  /* 11a01101 pop ebp */
  EBP = (pop32());
  /* 11a01102 ret  */
  ESPCHK(0x11a010a6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001103 @ 0x11a01103 (58 bytes, 22 insns) */
void f_11a01103(void) {
  FTRACE(0x11a01103u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01103 push ebp */
  push32((uint32_t)(EBP));
  /* 11a01104 mov ebp, esp */
  EBP = (ESP);
  /* 11a01106 push esi */
  push32((uint32_t)(ESI));
  /* 11a01107 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a0110a call 0x11a01088 */
  push32(0x11a0110fu); f_11a01088();
  /* 11a0110f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a01111 mov esi, eax */
  ESI = (EAX);
  /* 11a01113 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a01116 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a0111cu);
  /* 11a0111c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0111e push esi */
  push32((uint32_t)(ESI));
  /* 11a0111f call dword ptr [0x11a06154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06154))), 0x11a01125u);
  /* 11a01125 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a01128 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a0112b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a0112e push esi */
  push32((uint32_t)(ESI));
  /* 11a0112f call dword ptr [0x11a0614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0614c))), 0x11a01135u);
  /* 11a01135 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01138 mov eax, esi */
  EAX = (ESI);
  /* 11a0113a pop esi */
  ESI = (pop32());
  /* 11a0113b pop ebp */
  EBP = (pop32());
  /* 11a0113c ret  */
  ESPCHK(0x11a01103u, _esp0);
  ESP += 4; return;
}

/* FUN_1000113d @ 0x11a0113d (23 bytes, 7 insns) */
void f_11a0113d(void) {
  FTRACE(0x11a0113du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0113d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0113f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a01143 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a01147 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a0114b call 0x11a01103 */
  push32(0x11a01150u); f_11a01103();
  /* 11a01150 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01153 ret  */
  ESPCHK(0x11a0113du, _esp0);
  ESP += 4; return;
}

/* FUN_10001154 @ 0x11a01154 (54 bytes, 19 insns) */
void f_11a01154(void) {
  FTRACE(0x11a01154u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01154 push ebp */
  push32((uint32_t)(EBP));
  /* 11a01155 mov ebp, esp */
  EBP = (ESP);
  /* 11a01157 push esi */
  push32((uint32_t)(ESI));
  /* 11a01158 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a0115d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a01160 mov esi, 0x11a078d8 */
  ESI = (0x11a078d8u);
  /* 11a01165 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a01168 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a0116b push 0x11a07958 */
  push32((uint32_t)(0x11a07958u));
  /* 11a01170 push esi */
  push32((uint32_t)(ESI));
  /* 11a01171 call dword ptr [0x11a06148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06148))), 0x11a01177u);
  /* 11a01177 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a0117a push esi */
  push32((uint32_t)(ESI));
  /* 11a0117b call dword ptr [0x11a06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06140))), 0x11a01181u);
  /* 11a01181 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a01184 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01187 pop esi */
  ESI = (pop32());
  /* 11a01188 pop ebp */
  EBP = (pop32());
  /* 11a01189 ret  */
  ESPCHK(0x11a01154u, _esp0);
  ESP += 4; return;
}

/* FUN_1000118a @ 0x11a0118a (228 bytes, 101 insns) */
void f_11a0118a(void) {
  FTRACE(0x11a0118au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0118a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0118b push ebp */
  push32((uint32_t)(EBP));
  /* 11a0118c push esi */
  push32((uint32_t)(ESI));
  /* 11a0118d push edi */
  push32((uint32_t)(EDI));
  /* 11a0118e push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a01192 call 0x11a01088 */
  push32(0x11a01197u); f_11a01088();
  /* 11a01197 mov edi, dword ptr [0x11a0616c] */
  EDI = (r32((uint32_t)(0x11a0616c)));
  /* 11a0119d mov esi, eax */
  ESI = (EAX);
  /* 11a0119f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a011a1 push esi */
  push32((uint32_t)(ESI));
  /* 11a011a2 call edi */
  call_ind((uint32_t)(EDI), 0x11a011a4u);
  /* 11a011a4 mov ebp, dword ptr [0x11a06168] */
  EBP = (r32((uint32_t)(0x11a06168)));
  /* 11a011aa mov ebx, 0x2710 */
  EBX = (0x2710u);
  /* 11a011af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a011b2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a011b4 jge 0x11a011c3 */
  if ((C.sf==C.of)) goto L_11a011c3;
  /* 11a011b6 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a011bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a011bd push esi */
  push32((uint32_t)(ESI));
  /* 11a011be call ebp */
  call_ind((uint32_t)(EBP), 0x11a011c0u);
  /* 11a011c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a011c3:;
  /* 11a011c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a011c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a011c6 call edi */
  call_ind((uint32_t)(EDI), 0x11a011c8u);
  /* 11a011c8 pop ecx */
  ECX = (pop32());
  /* 11a011c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a011cb pop ecx */
  ECX = (pop32());
  /* 11a011cc jge 0x11a011db */
  if ((C.sf==C.of)) goto L_11a011db;
  /* 11a011ce push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a011d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a011d5 push esi */
  push32((uint32_t)(ESI));
  /* 11a011d6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a011d8u);
  /* 11a011d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a011db:;
  /* 11a011db push 2 */
  push32((uint32_t)(0x2u));
  /* 11a011dd push esi */
  push32((uint32_t)(ESI));
  /* 11a011de call edi */
  call_ind((uint32_t)(EDI), 0x11a011e0u);
  /* 11a011e0 pop ecx */
  ECX = (pop32());
  /* 11a011e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a011e3 pop ecx */
  ECX = (pop32());
  /* 11a011e4 jge 0x11a011f3 */
  if ((C.sf==C.of)) goto L_11a011f3;
  /* 11a011e6 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a011eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a011ed push esi */
  push32((uint32_t)(ESI));
  /* 11a011ee call ebp */
  call_ind((uint32_t)(EBP), 0x11a011f0u);
  /* 11a011f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a011f3:;
  /* 11a011f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a011f5 push esi */
  push32((uint32_t)(ESI));
  /* 11a011f6 call edi */
  call_ind((uint32_t)(EDI), 0x11a011f8u);
  /* 11a011f8 pop ecx */
  ECX = (pop32());
  /* 11a011f9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a011fb pop ecx */
  ECX = (pop32());
  /* 11a011fc jge 0x11a0120b */
  if ((C.sf==C.of)) goto L_11a0120b;
  /* 11a011fe push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a01203 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01205 push esi */
  push32((uint32_t)(ESI));
  /* 11a01206 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01208u);
  /* 11a01208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0120b:;
  /* 11a0120b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0120d push esi */
  push32((uint32_t)(ESI));
  /* 11a0120e call edi */
  call_ind((uint32_t)(EDI), 0x11a01210u);
  /* 11a01210 pop ecx */
  ECX = (pop32());
  /* 11a01211 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01213 pop ecx */
  ECX = (pop32());
  /* 11a01214 jge 0x11a01223 */
  if ((C.sf==C.of)) goto L_11a01223;
  /* 11a01216 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a0121b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0121d push esi */
  push32((uint32_t)(ESI));
  /* 11a0121e call ebp */
  call_ind((uint32_t)(EBP), 0x11a01220u);
  /* 11a01220 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01223:;
  /* 11a01223 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a01225 push esi */
  push32((uint32_t)(ESI));
  /* 11a01226 call edi */
  call_ind((uint32_t)(EDI), 0x11a01228u);
  /* 11a01228 pop ecx */
  ECX = (pop32());
  /* 11a01229 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0122b pop ecx */
  ECX = (pop32());
  /* 11a0122c jge 0x11a0123b */
  if ((C.sf==C.of)) goto L_11a0123b;
  /* 11a0122e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a01233 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a01235 push esi */
  push32((uint32_t)(ESI));
  /* 11a01236 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01238u);
  /* 11a01238 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0123b:;
  /* 11a0123b push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a0123f call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01245u);
  /* 11a01245 cmp eax, dword ptr [esp + 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01249 pop ecx */
  ECX = (pop32());
  /* 11a0124a pop edi */
  EDI = (pop32());
  /* 11a0124b pop esi */
  ESI = (pop32());
  /* 11a0124c pop ebp */
  EBP = (pop32());
  /* 11a0124d pop ebx */
  EBX = (pop32());
  /* 11a0124e jge 0x11a0126b */
  if ((C.sf==C.of)) goto L_11a0126b;
  /* 11a01250 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a01252 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a01256 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a0125a push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a0125e call dword ptr [0x11a06144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06144))), 0x11a01264u);
  /* 11a01264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01267 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01269 pop eax */
  EAX = (pop32());
  /* 11a0126a ret  */
  ESPCHK(0x11a0118au, _esp0);
  ESP += 4; return;
L_11a0126b:;
  /* 11a0126b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0126d ret  */
  ESPCHK(0x11a0118au, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11a0126e (1530 bytes, 434 insns) */
void f_11a0126e(void) {
  FTRACE(0x11a0126eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0126e push ebx */
  push32((uint32_t)(EBX));
  /* 11a0126f push ebp */
  push32((uint32_t)(EBP));
  /* 11a01270 mov ebx, dword ptr [0x11a06124] */
  EBX = (r32((uint32_t)(0x11a06124)));
  /* 11a01276 push esi */
  push32((uint32_t)(ESI));
  /* 11a01277 push edi */
  push32((uint32_t)(EDI));
  /* 11a01278 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0127a pop ebp */
  EBP = (pop32());
  /* 11a0127b push ebp */
  push32((uint32_t)(EBP));
  /* 11a0127c push 0x11a077d0 */
  push32((uint32_t)(0x11a077d0u));
  /* 11a01281 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01283u);
  /* 11a01283 push ebp */
  push32((uint32_t)(EBP));
  /* 11a01284 push 0x11a07a50 */
  push32((uint32_t)(0x11a07a50u));
  /* 11a01289 call ebx */
  call_ind((uint32_t)(EBX), 0x11a0128bu);
  /* 11a0128b push ebp */
  push32((uint32_t)(EBP));
  /* 11a0128c push 0x11a07ab8 */
  push32((uint32_t)(0x11a07ab8u));
  /* 11a01291 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01293u);
  /* 11a01293 mov esi, dword ptr [0x11a0611c] */
  ESI = (r32((uint32_t)(0x11a0611c)));
  /* 11a01299 push 0x11a0735c */
  push32((uint32_t)(0x11a0735cu));
  /* 11a0129e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a012a0 call esi */
  call_ind((uint32_t)(ESI), 0x11a012a2u);
  /* 11a012a2 mov edi, 0x11a07354 */
  EDI = (0x11a07354u);
  /* 11a012a7 push edi */
  push32((uint32_t)(EDI));
  /* 11a012a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a012aa call esi */
  call_ind((uint32_t)(ESI), 0x11a012acu);
  /* 11a012ac push edi */
  push32((uint32_t)(EDI));
  /* 11a012ad push 5 */
  push32((uint32_t)(0x5u));
  /* 11a012af call esi */
  call_ind((uint32_t)(ESI), 0x11a012b1u);
  /* 11a012b1 mov edi, 0x11a0734c */
  EDI = (0x11a0734cu);
  /* 11a012b6 push edi */
  push32((uint32_t)(EDI));
  /* 11a012b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a012b9 call esi */
  call_ind((uint32_t)(ESI), 0x11a012bbu);
  /* 11a012bb push edi */
  push32((uint32_t)(EDI));
  /* 11a012bc push ebp */
  push32((uint32_t)(EBP));
  /* 11a012bd call esi */
  call_ind((uint32_t)(ESI), 0x11a012bfu);
  /* 11a012bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a012c2 push edi */
  push32((uint32_t)(EDI));
  /* 11a012c3 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a012c5 call esi */
  call_ind((uint32_t)(ESI), 0x11a012c7u);
  /* 11a012c7 mov edi, dword ptr [0x11a0612c] */
  EDI = (r32((uint32_t)(0x11a0612c)));
  /* 11a012cd push 0x11a07344 */
  push32((uint32_t)(0x11a07344u));
  /* 11a012d2 push 0x11a07ad8 */
  push32((uint32_t)(0x11a07ad8u));
  /* 11a012d7 call edi */
  call_ind((uint32_t)(EDI), 0x11a012d9u);
  /* 11a012d9 push 0x11a07340 */
  push32((uint32_t)(0x11a07340u));
  /* 11a012de push 0x11a07a58 */
  push32((uint32_t)(0x11a07a58u));
  /* 11a012e3 call edi */
  call_ind((uint32_t)(EDI), 0x11a012e5u);
  /* 11a012e5 push 0x11a0733c */
  push32((uint32_t)(0x11a0733cu));
  /* 11a012ea push 0x11a07a60 */
  push32((uint32_t)(0x11a07a60u));
  /* 11a012ef call edi */
  call_ind((uint32_t)(EDI), 0x11a012f1u);
  /* 11a012f1 push 0x11a07338 */
  push32((uint32_t)(0x11a07338u));
  /* 11a012f6 push 0x11a07930 */
  push32((uint32_t)(0x11a07930u));
  /* 11a012fb call edi */
  call_ind((uint32_t)(EDI), 0x11a012fdu);
  /* 11a012fd push 0x11a07334 */
  push32((uint32_t)(0x11a07334u));
  /* 11a01302 push 0x11a07940 */
  push32((uint32_t)(0x11a07940u));
  /* 11a01307 call edi */
  call_ind((uint32_t)(EDI), 0x11a01309u);
  /* 11a01309 push 0x11a07330 */
  push32((uint32_t)(0x11a07330u));
  /* 11a0130e push 0x11a07950 */
  push32((uint32_t)(0x11a07950u));
  /* 11a01313 call edi */
  call_ind((uint32_t)(EDI), 0x11a01315u);
  /* 11a01315 push 0x11a0732c */
  push32((uint32_t)(0x11a0732cu));
  /* 11a0131a push 0x11a07960 */
  push32((uint32_t)(0x11a07960u));
  /* 11a0131f call edi */
  call_ind((uint32_t)(EDI), 0x11a01321u);
  /* 11a01321 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01324 push 0x11a07328 */
  push32((uint32_t)(0x11a07328u));
  /* 11a01329 push 0x11a07968 */
  push32((uint32_t)(0x11a07968u));
  /* 11a0132e call edi */
  call_ind((uint32_t)(EDI), 0x11a01330u);
  /* 11a01330 push 0x11a07324 */
  push32((uint32_t)(0x11a07324u));
  /* 11a01335 push 0x11a07978 */
  push32((uint32_t)(0x11a07978u));
  /* 11a0133a call edi */
  call_ind((uint32_t)(EDI), 0x11a0133cu);
  /* 11a0133c push 0x11a07320 */
  push32((uint32_t)(0x11a07320u));
  /* 11a01341 push 0x11a07980 */
  push32((uint32_t)(0x11a07980u));
  /* 11a01346 call edi */
  call_ind((uint32_t)(EDI), 0x11a01348u);
  /* 11a01348 push 0x11a0731c */
  push32((uint32_t)(0x11a0731cu));
  /* 11a0134d push 0x11a07988 */
  push32((uint32_t)(0x11a07988u));
  /* 11a01352 call edi */
  call_ind((uint32_t)(EDI), 0x11a01354u);
  /* 11a01354 push 0x11a07318 */
  push32((uint32_t)(0x11a07318u));
  /* 11a01359 push 0x11a07998 */
  push32((uint32_t)(0x11a07998u));
  /* 11a0135e call edi */
  call_ind((uint32_t)(EDI), 0x11a01360u);
  /* 11a01360 push 0x11a07314 */
  push32((uint32_t)(0x11a07314u));
  /* 11a01365 push 0x11a079a0 */
  push32((uint32_t)(0x11a079a0u));
  /* 11a0136a call edi */
  call_ind((uint32_t)(EDI), 0x11a0136cu);
  /* 11a0136c push 0x11a07310 */
  push32((uint32_t)(0x11a07310u));
  /* 11a01371 push 0x11a07a68 */
  push32((uint32_t)(0x11a07a68u));
  /* 11a01376 call edi */
  call_ind((uint32_t)(EDI), 0x11a01378u);
  /* 11a01378 push 0x11a0730c */
  push32((uint32_t)(0x11a0730cu));
  /* 11a0137d push 0x11a07a70 */
  push32((uint32_t)(0x11a07a70u));
  /* 11a01382 call edi */
  call_ind((uint32_t)(EDI), 0x11a01384u);
  /* 11a01384 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01387 push 0x11a07308 */
  push32((uint32_t)(0x11a07308u));
  /* 11a0138c push 0x11a07a78 */
  push32((uint32_t)(0x11a07a78u));
  /* 11a01391 call edi */
  call_ind((uint32_t)(EDI), 0x11a01393u);
  /* 11a01393 mov esi, dword ptr [0x11a06130] */
  ESI = (r32((uint32_t)(0x11a06130)));
  /* 11a01399 push 0x11a07300 */
  push32((uint32_t)(0x11a07300u));
  /* 11a0139e push 0x11a07a10 */
  push32((uint32_t)(0x11a07a10u));
  /* 11a013a3 call esi */
  call_ind((uint32_t)(ESI), 0x11a013a5u);
  /* 11a013a5 push 0x11a072fc */
  push32((uint32_t)(0x11a072fcu));
  /* 11a013aa push 0x11a079e0 */
  push32((uint32_t)(0x11a079e0u));
  /* 11a013af call esi */
  call_ind((uint32_t)(ESI), 0x11a013b1u);
  /* 11a013b1 push 0x11a072f8 */
  push32((uint32_t)(0x11a072f8u));
  /* 11a013b6 push 0x11a079e8 */
  push32((uint32_t)(0x11a079e8u));
  /* 11a013bb call esi */
  call_ind((uint32_t)(ESI), 0x11a013bdu);
  /* 11a013bd mov ebp, dword ptr [0x11a06128] */
  EBP = (r32((uint32_t)(0x11a06128)));
  /* 11a013c3 push 0x11a078d8 */
  push32((uint32_t)(0x11a078d8u));
  /* 11a013c8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a013cau);
  /* 11a013ca push 0x11a078e0 */
  push32((uint32_t)(0x11a078e0u));
  /* 11a013cf call ebp */
  call_ind((uint32_t)(EBP), 0x11a013d1u);
  /* 11a013d1 push 0x11a078e8 */
  push32((uint32_t)(0x11a078e8u));
  /* 11a013d6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a013d8u);
  /* 11a013d8 push 0x11a078f0 */
  push32((uint32_t)(0x11a078f0u));
  /* 11a013dd call ebp */
  call_ind((uint32_t)(EBP), 0x11a013dfu);
  /* 11a013df push 0x11a078f8 */
  push32((uint32_t)(0x11a078f8u));
  /* 11a013e4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a013e6u);
  /* 11a013e6 push 0x11a079a8 */
  push32((uint32_t)(0x11a079a8u));
  /* 11a013eb call ebp */
  call_ind((uint32_t)(EBP), 0x11a013edu);
  /* 11a013ed push 8 */
  push32((uint32_t)(0x8u));
  /* 11a013ef push 0x11a078d8 */
  push32((uint32_t)(0x11a078d8u));
  /* 11a013f4 call ebx */
  call_ind((uint32_t)(EBX), 0x11a013f6u);
  /* 11a013f6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a013f9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a013fb push 0x11a078e0 */
  push32((uint32_t)(0x11a078e0u));
  /* 11a01400 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01402u);
  /* 11a01402 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01404 push 0x11a078e8 */
  push32((uint32_t)(0x11a078e8u));
  /* 11a01409 call ebx */
  call_ind((uint32_t)(EBX), 0x11a0140bu);
  /* 11a0140b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a0140d push 0x11a078f0 */
  push32((uint32_t)(0x11a078f0u));
  /* 11a01412 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01414u);
  /* 11a01414 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01416 push 0x11a078f8 */
  push32((uint32_t)(0x11a078f8u));
  /* 11a0141b call ebx */
  call_ind((uint32_t)(EBX), 0x11a0141du);
  /* 11a0141d push 0x11a072f0 */
  push32((uint32_t)(0x11a072f0u));
  /* 11a01422 push 0x11a07958 */
  push32((uint32_t)(0x11a07958u));
  /* 11a01427 call dword ptr [0x11a06138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06138))), 0x11a0142du);
  /* 11a0142d push 0x11a072e8 */
  push32((uint32_t)(0x11a072e8u));
  /* 11a01432 push 0x11a07990 */
  push32((uint32_t)(0x11a07990u));
  /* 11a01437 call esi */
  call_ind((uint32_t)(ESI), 0x11a01439u);
  /* 11a01439 push 0x11a072e0 */
  push32((uint32_t)(0x11a072e0u));
  /* 11a0143e push 0x11a07898 */
  push32((uint32_t)(0x11a07898u));
  /* 11a01443 call esi */
  call_ind((uint32_t)(ESI), 0x11a01445u);
  /* 11a01445 push 0x11a072d8 */
  push32((uint32_t)(0x11a072d8u));
  /* 11a0144a push 0x11a07848 */
  push32((uint32_t)(0x11a07848u));
  /* 11a0144f call esi */
  call_ind((uint32_t)(ESI), 0x11a01451u);
  /* 11a01451 mov esi, dword ptr [0x11a0613c] */
  ESI = (r32((uint32_t)(0x11a0613c)));
  /* 11a01457 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0145a push 0x11a072cc */
  push32((uint32_t)(0x11a072ccu));
  /* 11a0145f push 0x11a07aa8 */
  push32((uint32_t)(0x11a07aa8u));
  /* 11a01464 call esi */
  call_ind((uint32_t)(ESI), 0x11a01466u);
  /* 11a01466 push 0x11a072bc */
  push32((uint32_t)(0x11a072bcu));
  /* 11a0146b push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a01470 call esi */
  call_ind((uint32_t)(ESI), 0x11a01472u);
  /* 11a01472 push 0x11a072b0 */
  push32((uint32_t)(0x11a072b0u));
  /* 11a01477 push 0x11a079c0 */
  push32((uint32_t)(0x11a079c0u));
  /* 11a0147c call esi */
  call_ind((uint32_t)(ESI), 0x11a0147eu);
  /* 11a0147e push 0x11a072a4 */
  push32((uint32_t)(0x11a072a4u));
  /* 11a01483 push 0x11a079d0 */
  push32((uint32_t)(0x11a079d0u));
  /* 11a01488 call esi */
  call_ind((uint32_t)(ESI), 0x11a0148au);
  /* 11a0148a push 0x11a07298 */
  push32((uint32_t)(0x11a07298u));
  /* 11a0148f push 0x11a07af0 */
  push32((uint32_t)(0x11a07af0u));
  /* 11a01494 call esi */
  call_ind((uint32_t)(ESI), 0x11a01496u);
  /* 11a01496 push 0x11a07288 */
  push32((uint32_t)(0x11a07288u));
  /* 11a0149b push 0x11a07b18 */
  push32((uint32_t)(0x11a07b18u));
  /* 11a014a0 call esi */
  call_ind((uint32_t)(ESI), 0x11a014a2u);
  /* 11a014a2 push 0x11a07270 */
  push32((uint32_t)(0x11a07270u));
  /* 11a014a7 push 0x11a07ac8 */
  push32((uint32_t)(0x11a07ac8u));
  /* 11a014ac call esi */
  call_ind((uint32_t)(ESI), 0x11a014aeu);
  /* 11a014ae push 0x11a0725c */
  push32((uint32_t)(0x11a0725cu));
  /* 11a014b3 push 0x11a07840 */
  push32((uint32_t)(0x11a07840u));
  /* 11a014b8 call esi */
  call_ind((uint32_t)(ESI), 0x11a014bau);
  /* 11a014ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a014bd push 0x11a07248 */
  push32((uint32_t)(0x11a07248u));
  /* 11a014c2 push 0x11a07b20 */
  push32((uint32_t)(0x11a07b20u));
  /* 11a014c7 call esi */
  call_ind((uint32_t)(ESI), 0x11a014c9u);
  /* 11a014c9 push 0x11a0723c */
  push32((uint32_t)(0x11a0723cu));
  /* 11a014ce push 0x11a07a30 */
  push32((uint32_t)(0x11a07a30u));
  /* 11a014d3 call esi */
  call_ind((uint32_t)(ESI), 0x11a014d5u);
  /* 11a014d5 push 0x11a07230 */
  push32((uint32_t)(0x11a07230u));
  /* 11a014da push 0x11a07ae0 */
  push32((uint32_t)(0x11a07ae0u));
  /* 11a014df call esi */
  call_ind((uint32_t)(ESI), 0x11a014e1u);
  /* 11a014e1 push 0x11a07224 */
  push32((uint32_t)(0x11a07224u));
  /* 11a014e6 push 0x11a07ae8 */
  push32((uint32_t)(0x11a07ae8u));
  /* 11a014eb call esi */
  call_ind((uint32_t)(ESI), 0x11a014edu);
  /* 11a014ed push 0x11a07218 */
  push32((uint32_t)(0x11a07218u));
  /* 11a014f2 push 0x11a07a00 */
  push32((uint32_t)(0x11a07a00u));
  /* 11a014f7 call esi */
  call_ind((uint32_t)(ESI), 0x11a014f9u);
  /* 11a014f9 push 0x11a0720c */
  push32((uint32_t)(0x11a0720cu));
  /* 11a014fe push 0x11a079b8 */
  push32((uint32_t)(0x11a079b8u));
  /* 11a01503 call esi */
  call_ind((uint32_t)(ESI), 0x11a01505u);
  /* 11a01505 push 0x11a07200 */
  push32((uint32_t)(0x11a07200u));
  /* 11a0150a push 0x11a079b0 */
  push32((uint32_t)(0x11a079b0u));
  /* 11a0150f call esi */
  call_ind((uint32_t)(ESI), 0x11a01511u);
  /* 11a01511 push 0x11a071f4 */
  push32((uint32_t)(0x11a071f4u));
  /* 11a01516 push 0x11a07af8 */
  push32((uint32_t)(0x11a07af8u));
  /* 11a0151b call esi */
  call_ind((uint32_t)(ESI), 0x11a0151du);
  /* 11a0151d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01520 push 0x11a07a80 */
  push32((uint32_t)(0x11a07a80u));
  /* 11a01525 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01527u);
  /* 11a01527 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01529 push 0x11a07a80 */
  push32((uint32_t)(0x11a07a80u));
  /* 11a0152e call ebx */
  call_ind((uint32_t)(EBX), 0x11a01530u);
  /* 11a01530 push 0x11a071e8 */
  push32((uint32_t)(0x11a071e8u));
  /* 11a01535 push 0x11a078b8 */
  push32((uint32_t)(0x11a078b8u));
  /* 11a0153a call esi */
  call_ind((uint32_t)(ESI), 0x11a0153cu);
  /* 11a0153c push 0x11a078d0 */
  push32((uint32_t)(0x11a078d0u));
  /* 11a01541 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01543u);
  /* 11a01543 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01545 push 0x11a078d0 */
  push32((uint32_t)(0x11a078d0u));
  /* 11a0154a call ebx */
  call_ind((uint32_t)(EBX), 0x11a0154cu);
  /* 11a0154c push 0x11a071dc */
  push32((uint32_t)(0x11a071dcu));
  /* 11a01551 push 0x11a077b8 */
  push32((uint32_t)(0x11a077b8u));
  /* 11a01556 call esi */
  call_ind((uint32_t)(ESI), 0x11a01558u);
  /* 11a01558 push 0x11a071cc */
  push32((uint32_t)(0x11a071ccu));
  /* 11a0155d push 0x11a07800 */
  push32((uint32_t)(0x11a07800u));
  /* 11a01562 call esi */
  call_ind((uint32_t)(ESI), 0x11a01564u);
  /* 11a01564 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a01569 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0156bu);
  /* 11a0156b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a0156d push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a01572 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01574u);
  /* 11a01574 push 0x11a071c4 */
  push32((uint32_t)(0x11a071c4u));
  /* 11a01579 push 0x11a07850 */
  push32((uint32_t)(0x11a07850u));
  /* 11a0157e call dword ptr [0x11a06130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06130))), 0x11a01584u);
  /* 11a01584 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01587 push 0x11a071b8 */
  push32((uint32_t)(0x11a071b8u));
  /* 11a0158c push 0x11a07b08 */
  push32((uint32_t)(0x11a07b08u));
  /* 11a01591 call esi */
  call_ind((uint32_t)(ESI), 0x11a01593u);
  /* 11a01593 push 0x11a071ac */
  push32((uint32_t)(0x11a071acu));
  /* 11a01598 push 0x11a079f8 */
  push32((uint32_t)(0x11a079f8u));
  /* 11a0159d call esi */
  call_ind((uint32_t)(ESI), 0x11a0159fu);
  /* 11a0159f push 0x11a071a0 */
  push32((uint32_t)(0x11a071a0u));
  /* 11a015a4 push 0x11a079d8 */
  push32((uint32_t)(0x11a079d8u));
  /* 11a015a9 call esi */
  call_ind((uint32_t)(ESI), 0x11a015abu);
  /* 11a015ab push 0x11a07190 */
  push32((uint32_t)(0x11a07190u));
  /* 11a015b0 push 0x11a07ad0 */
  push32((uint32_t)(0x11a07ad0u));
  /* 11a015b5 call esi */
  call_ind((uint32_t)(ESI), 0x11a015b7u);
  /* 11a015b7 push 0x11a07180 */
  push32((uint32_t)(0x11a07180u));
  /* 11a015bc push 0x11a07ac0 */
  push32((uint32_t)(0x11a07ac0u));
  /* 11a015c1 call esi */
  call_ind((uint32_t)(ESI), 0x11a015c3u);
  /* 11a015c3 push 0x11a07174 */
  push32((uint32_t)(0x11a07174u));
  /* 11a015c8 push 0x11a07910 */
  push32((uint32_t)(0x11a07910u));
  /* 11a015cd call esi */
  call_ind((uint32_t)(ESI), 0x11a015cfu);
  /* 11a015cf push 0x11a07168 */
  push32((uint32_t)(0x11a07168u));
  /* 11a015d4 push 0x11a077b0 */
  push32((uint32_t)(0x11a077b0u));
  /* 11a015d9 call esi */
  call_ind((uint32_t)(ESI), 0x11a015dbu);
  /* 11a015db push 0x11a07160 */
  push32((uint32_t)(0x11a07160u));
  /* 11a015e0 push 0x11a07918 */
  push32((uint32_t)(0x11a07918u));
  /* 11a015e5 call edi */
  call_ind((uint32_t)(EDI), 0x11a015e7u);
  /* 11a015e7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a015ea push 0x11a07158 */
  push32((uint32_t)(0x11a07158u));
  /* 11a015ef push 0x11a07920 */
  push32((uint32_t)(0x11a07920u));
  /* 11a015f4 call edi */
  call_ind((uint32_t)(EDI), 0x11a015f6u);
  /* 11a015f6 push 0x11a07150 */
  push32((uint32_t)(0x11a07150u));
  /* 11a015fb push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01600 call edi */
  call_ind((uint32_t)(EDI), 0x11a01602u);
  /* 11a01602 push 0x11a07148 */
  push32((uint32_t)(0x11a07148u));
  /* 11a01607 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a0160c call edi */
  call_ind((uint32_t)(EDI), 0x11a0160eu);
  /* 11a0160e push 0x11a07140 */
  push32((uint32_t)(0x11a07140u));
  /* 11a01613 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01618 call edi */
  call_ind((uint32_t)(EDI), 0x11a0161au);
  /* 11a0161a push 0x11a07138 */
  push32((uint32_t)(0x11a07138u));
  /* 11a0161f push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a01624 call dword ptr [0x11a06130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06130))), 0x11a0162au);
  /* 11a0162a push 0x11a07130 */
  push32((uint32_t)(0x11a07130u));
  /* 11a0162f push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a01634 call dword ptr [0x11a06130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06130))), 0x11a0163au);
  /* 11a0163a push 0x11a0711c */
  push32((uint32_t)(0x11a0711cu));
  /* 11a0163f push 0x11a077f8 */
  push32((uint32_t)(0x11a077f8u));
  /* 11a01644 call esi */
  call_ind((uint32_t)(ESI), 0x11a01646u);
  /* 11a01646 push 0x11a07104 */
  push32((uint32_t)(0x11a07104u));
  /* 11a0164b push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a01650 call esi */
  call_ind((uint32_t)(ESI), 0x11a01652u);
  /* 11a01652 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01655 push 0x11a070f0 */
  push32((uint32_t)(0x11a070f0u));
  /* 11a0165a push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a0165f call esi */
  call_ind((uint32_t)(ESI), 0x11a01661u);
  /* 11a01661 push 0x11a070dc */
  push32((uint32_t)(0x11a070dcu));
  /* 11a01666 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a0166b call esi */
  call_ind((uint32_t)(ESI), 0x11a0166du);
  /* 11a0166d push 0x11a070cc */
  push32((uint32_t)(0x11a070ccu));
  /* 11a01672 push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a01677 call esi */
  call_ind((uint32_t)(ESI), 0x11a01679u);
  /* 11a01679 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a0167e call ebp */
  call_ind((uint32_t)(EBP), 0x11a01680u);
  /* 11a01680 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01682 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a01687 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01689u);
  /* 11a01689 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a0168e call ebp */
  call_ind((uint32_t)(EBP), 0x11a01690u);
  /* 11a01690 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01692 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a01697 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01699u);
  /* 11a01699 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0169e call ebp */
  call_ind((uint32_t)(EBP), 0x11a016a0u);
  /* 11a016a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a016a2 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a016a7 call ebx */
  call_ind((uint32_t)(EBX), 0x11a016a9u);
  /* 11a016a9 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a016ae call ebp */
  call_ind((uint32_t)(EBP), 0x11a016b0u);
  /* 11a016b0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a016b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a016b5 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a016ba call ebx */
  call_ind((uint32_t)(EBX), 0x11a016bcu);
  /* 11a016bc push 0x11a07938 */
  push32((uint32_t)(0x11a07938u));
  /* 11a016c1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a016c3u);
  /* 11a016c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a016c5 push 0x11a07938 */
  push32((uint32_t)(0x11a07938u));
  /* 11a016ca call ebx */
  call_ind((uint32_t)(EBX), 0x11a016ccu);
  /* 11a016cc push 0x11a077d8 */
  push32((uint32_t)(0x11a077d8u));
  /* 11a016d1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a016d3u);
  /* 11a016d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a016d5 push 0x11a077d8 */
  push32((uint32_t)(0x11a077d8u));
  /* 11a016da call ebx */
  call_ind((uint32_t)(EBX), 0x11a016dcu);
  /* 11a016dc push 0x11a072bc */
  push32((uint32_t)(0x11a072bcu));
  /* 11a016e1 push 0x11a078c8 */
  push32((uint32_t)(0x11a078c8u));
  /* 11a016e6 call esi */
  call_ind((uint32_t)(ESI), 0x11a016e8u);
  /* 11a016e8 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a016ed call ebp */
  call_ind((uint32_t)(EBP), 0x11a016efu);
  /* 11a016ef push 8 */
  push32((uint32_t)(0x8u));
  /* 11a016f1 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a016f6 call ebx */
  call_ind((uint32_t)(EBX), 0x11a016f8u);
  /* 11a016f8 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a016fd call ebp */
  call_ind((uint32_t)(EBP), 0x11a016ffu);
  /* 11a016ff push 8 */
  push32((uint32_t)(0x8u));
  /* 11a01701 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a01706 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01708u);
  /* 11a01708 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0170b push 0x11a070c8 */
  push32((uint32_t)(0x11a070c8u));
  /* 11a01710 push 0x11a07a98 */
  push32((uint32_t)(0x11a07a98u));
  /* 11a01715 call edi */
  call_ind((uint32_t)(EDI), 0x11a01717u);
  /* 11a01717 push 0x11a070c4 */
  push32((uint32_t)(0x11a070c4u));
  /* 11a0171c push 0x11a07aa0 */
  push32((uint32_t)(0x11a07aa0u));
  /* 11a01721 call edi */
  call_ind((uint32_t)(EDI), 0x11a01723u);
  /* 11a01723 push 0x11a070bc */
  push32((uint32_t)(0x11a070bcu));
  /* 11a01728 push 0x11a07878 */
  push32((uint32_t)(0x11a07878u));
  /* 11a0172d call edi */
  call_ind((uint32_t)(EDI), 0x11a0172fu);
  /* 11a0172f push 0x11a070b4 */
  push32((uint32_t)(0x11a070b4u));
  /* 11a01734 push 0x11a07880 */
  push32((uint32_t)(0x11a07880u));
  /* 11a01739 call edi */
  call_ind((uint32_t)(EDI), 0x11a0173bu);
  /* 11a0173b push 0x11a070ac */
  push32((uint32_t)(0x11a070acu));
  /* 11a01740 push 0x11a07888 */
  push32((uint32_t)(0x11a07888u));
  /* 11a01745 call edi */
  call_ind((uint32_t)(EDI), 0x11a01747u);
  /* 11a01747 push 0x11a070a4 */
  push32((uint32_t)(0x11a070a4u));
  /* 11a0174c push 0x11a07890 */
  push32((uint32_t)(0x11a07890u));
  /* 11a01751 call edi */
  call_ind((uint32_t)(EDI), 0x11a01753u);
  /* 11a01753 push 0x11a07098 */
  push32((uint32_t)(0x11a07098u));
  /* 11a01758 push 0x11a07ab0 */
  push32((uint32_t)(0x11a07ab0u));
  /* 11a0175d call esi */
  call_ind((uint32_t)(ESI), 0x11a0175fu);
  /* 11a0175f push 0x11a0708c */
  push32((uint32_t)(0x11a0708cu));
  /* 11a01764 push 0x11a078b0 */
  push32((uint32_t)(0x11a078b0u));
  /* 11a01769 call esi */
  call_ind((uint32_t)(ESI), 0x11a0176bu);
  /* 11a0176b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0176e push 0x11a0707c */
  push32((uint32_t)(0x11a0707cu));
  /* 11a01773 push 0x11a07b10 */
  push32((uint32_t)(0x11a07b10u));
  /* 11a01778 call esi */
  call_ind((uint32_t)(ESI), 0x11a0177au);
  /* 11a0177a push 0x11a0706c */
  push32((uint32_t)(0x11a0706cu));
  /* 11a0177f push 0x11a077c8 */
  push32((uint32_t)(0x11a077c8u));
  /* 11a01784 call esi */
  call_ind((uint32_t)(ESI), 0x11a01786u);
  /* 11a01786 mov esi, dword ptr [0x11a06130] */
  ESI = (r32((uint32_t)(0x11a06130)));
  /* 11a0178c push 0x11a07064 */
  push32((uint32_t)(0x11a07064u));
  /* 11a01791 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a01796 call esi */
  call_ind((uint32_t)(ESI), 0x11a01798u);
  /* 11a01798 push 0x11a0705c */
  push32((uint32_t)(0x11a0705cu));
  /* 11a0179d push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a017a2 call esi */
  call_ind((uint32_t)(ESI), 0x11a017a4u);
  /* 11a017a4 mov esi, 0x11a07838 */
  ESI = (0x11a07838u);
  /* 11a017a9 push esi */
  push32((uint32_t)(ESI));
  /* 11a017aa call ebp */
  call_ind((uint32_t)(EBP), 0x11a017acu);
  /* 11a017ac push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017ae push esi */
  push32((uint32_t)(ESI));
  /* 11a017af call ebx */
  call_ind((uint32_t)(EBX), 0x11a017b1u);
  /* 11a017b1 mov esi, 0x11a07908 */
  ESI = (0x11a07908u);
  /* 11a017b6 push esi */
  push32((uint32_t)(ESI));
  /* 11a017b7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a017b9u);
  /* 11a017b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017bb push esi */
  push32((uint32_t)(ESI));
  /* 11a017bc call ebx */
  call_ind((uint32_t)(EBX), 0x11a017beu);
  /* 11a017be mov esi, 0x11a07948 */
  ESI = (0x11a07948u);
  /* 11a017c3 push esi */
  push32((uint32_t)(ESI));
  /* 11a017c4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a017c6u);
  /* 11a017c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017c8 push esi */
  push32((uint32_t)(ESI));
  /* 11a017c9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a017cbu);
  /* 11a017cb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a017ce mov esi, 0x11a077e8 */
  ESI = (0x11a077e8u);
  /* 11a017d3 push esi */
  push32((uint32_t)(ESI));
  /* 11a017d4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a017d6u);
  /* 11a017d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017d8 push esi */
  push32((uint32_t)(ESI));
  /* 11a017d9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a017dbu);
  /* 11a017db mov esi, 0x11a07970 */
  ESI = (0x11a07970u);
  /* 11a017e0 push esi */
  push32((uint32_t)(ESI));
  /* 11a017e1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a017e3u);
  /* 11a017e3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017e5 push esi */
  push32((uint32_t)(ESI));
  /* 11a017e6 call ebx */
  call_ind((uint32_t)(EBX), 0x11a017e8u);
  /* 11a017e8 mov esi, 0x11a077f0 */
  ESI = (0x11a077f0u);
  /* 11a017ed push esi */
  push32((uint32_t)(ESI));
  /* 11a017ee call ebp */
  call_ind((uint32_t)(EBP), 0x11a017f0u);
  /* 11a017f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017f2 push esi */
  push32((uint32_t)(ESI));
  /* 11a017f3 call ebx */
  call_ind((uint32_t)(EBX), 0x11a017f5u);
  /* 11a017f5 push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a017fa call ebp */
  call_ind((uint32_t)(EBP), 0x11a017fcu);
  /* 11a017fc push 8 */
  push32((uint32_t)(0x8u));
  /* 11a017fe push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a01803 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01805u);
  /* 11a01805 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a0180a call ebp */
  call_ind((uint32_t)(EBP), 0x11a0180cu);
  /* 11a0180c push 8 */
  push32((uint32_t)(0x8u));
  /* 11a0180e push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a01813 call ebx */
  call_ind((uint32_t)(EBX), 0x11a01815u);
  /* 11a01815 push 0x11a07058 */
  push32((uint32_t)(0x11a07058u));
  /* 11a0181a push 0x11a07a90 */
  push32((uint32_t)(0x11a07a90u));
  /* 11a0181f call edi */
  call_ind((uint32_t)(EDI), 0x11a01821u);
  /* 11a01821 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01824 push 0x11a07054 */
  push32((uint32_t)(0x11a07054u));
  /* 11a01829 push 0x11a07a88 */
  push32((uint32_t)(0x11a07a88u));
  /* 11a0182e call edi */
  call_ind((uint32_t)(EDI), 0x11a01830u);
  /* 11a01830 push 0x11a0704c */
  push32((uint32_t)(0x11a0704cu));
  /* 11a01835 push 0x11a07858 */
  push32((uint32_t)(0x11a07858u));
  /* 11a0183a call edi */
  call_ind((uint32_t)(EDI), 0x11a0183cu);
  /* 11a0183c push 0x11a07044 */
  push32((uint32_t)(0x11a07044u));
  /* 11a01841 push 0x11a07860 */
  push32((uint32_t)(0x11a07860u));
  /* 11a01846 call edi */
  call_ind((uint32_t)(EDI), 0x11a01848u);
  /* 11a01848 push 0x11a0703c */
  push32((uint32_t)(0x11a0703cu));
  /* 11a0184d push 0x11a07868 */
  push32((uint32_t)(0x11a07868u));
  /* 11a01852 call edi */
  call_ind((uint32_t)(EDI), 0x11a01854u);
  /* 11a01854 push 0x11a07034 */
  push32((uint32_t)(0x11a07034u));
  /* 11a01859 push 0x11a07870 */
  push32((uint32_t)(0x11a07870u));
  /* 11a0185e call edi */
  call_ind((uint32_t)(EDI), 0x11a01860u);
  /* 11a01860 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01863 pop edi */
  EDI = (pop32());
  /* 11a01864 pop esi */
  ESI = (pop32());
  /* 11a01865 pop ebp */
  EBP = (pop32());
  /* 11a01866 pop ebx */
  EBX = (pop32());
  /* 11a01867 ret  */
  ESPCHK(0x11a0126eu, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a01868 (7313 bytes, 2580 insns) */
void f_11a01868(void) {
  FTRACE(0x11a01868u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a01868 push ecx */
  push32((uint32_t)(ECX));
  /* 11a01869 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0186a push ebp */
  push32((uint32_t)(EBP));
  /* 11a0186b mov ebp, dword ptr [0x11a060b4] */
  EBP = (r32((uint32_t)(0x11a060b4)));
  /* 11a01871 push esi */
  push32((uint32_t)(ESI));
  /* 11a01872 push edi */
  push32((uint32_t)(EDI));
  /* 11a01873 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a01875 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01877u);
  /* 11a01877 mov esi, dword ptr [0x11a060b8] */
  ESI = (r32((uint32_t)(0x11a060b8)));
  /* 11a0187d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a0187f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01881 pop ecx */
  ECX = (pop32());
  /* 11a01882 je 0x11a02159 */
  if (C.zf) goto L_11a02159;
  /* 11a01888 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a0188a call ebp */
  call_ind((uint32_t)(EBP), 0x11a0188cu);
  /* 11a0188c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0188e pop ecx */
  ECX = (pop32());
  /* 11a0188f jne 0x11a01934 */
  if (!C.zf) goto L_11a01934;
  /* 11a01895 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01897 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01899u);
  /* 11a01899 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0189b pop ecx */
  ECX = (pop32());
  /* 11a0189c je 0x11a018b7 */
  if (C.zf) goto L_11a018b7;
  /* 11a0189e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a018a0 push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a018a5 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a018aa push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a018af call 0x11a0118a */
  push32(0x11a018b4u); f_11a0118a();
  /* 11a018b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a018b7:;
  /* 11a018b7 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a018b9 call ebp */
  call_ind((uint32_t)(EBP), 0x11a018bbu);
  /* 11a018bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a018bd pop ecx */
  ECX = (pop32());
  /* 11a018be je 0x11a018dc */
  if (C.zf) goto L_11a018dc;
  /* 11a018c0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a018c2 mov edi, 0x11a07a20 */
  EDI = (0x11a07a20u);
  /* 11a018c7 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a018cc push edi */
  push32((uint32_t)(EDI));
  /* 11a018cd push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a018d2 call 0x11a0118a */
  push32(0x11a018d7u); f_11a0118a();
  /* 11a018d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a018da jmp 0x11a018e1 */
  goto L_11a018e1;
L_11a018dc:;
  /* 11a018dc mov edi, 0x11a07a20 */
  EDI = (0x11a07a20u);
L_11a018e1:;
  /* 11a018e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a018e3 push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a018e8 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a018ed push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a018f2 call 0x11a0118a */
  push32(0x11a018f7u); f_11a0118a();
  /* 11a018f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a018f9 push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a018fe push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a01903 push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a01908 call 0x11a0118a */
  push32(0x11a0190du); f_11a0118a();
  /* 11a0190d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a0190f push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a01914 push edi */
  push32((uint32_t)(EDI));
  /* 11a01915 push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a0191a call 0x11a0118a */
  push32(0x11a0191fu); f_11a0118a();
  /* 11a0191f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01921 push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a01926 push edi */
  push32((uint32_t)(EDI));
  /* 11a01927 push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a0192c call 0x11a0118a */
  push32(0x11a01931u); f_11a0118a();
  /* 11a01931 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01934:;
  /* 11a01934 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a01936 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a0193cu);
  /* 11a0193c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0193e pop ecx */
  ECX = (pop32());
  /* 11a0193f je 0x11a0197c */
  if (C.zf) goto L_11a0197c;
  /* 11a01941 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01943 call dword ptr [0x11a060c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c0))), 0x11a01949u);
  /* 11a01949 mov edi, dword ptr [0x11a06150] */
  EDI = (r32((uint32_t)(0x11a06150)));
  /* 11a0194f push ebx */
  push32((uint32_t)(EBX));
  /* 11a01950 push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a01955 call edi */
  call_ind((uint32_t)(EDI), 0x11a01957u);
  /* 11a01957 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01959 call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a0195fu);
  /* 11a0195f push ebx */
  push32((uint32_t)(EBX));
  /* 11a01960 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a01965 call edi */
  call_ind((uint32_t)(EDI), 0x11a01967u);
  /* 11a01967 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01969 call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a0196fu);
  /* 11a0196f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a01971 call dword ptr [0x11a060bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060bc))), 0x11a01977u);
  /* 11a01977 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0197a jmp 0x11a01982 */
  goto L_11a01982;
L_11a0197c:;
  /* 11a0197c mov edi, dword ptr [0x11a06150] */
  EDI = (r32((uint32_t)(0x11a06150)));
L_11a01982:;
  /* 11a01982 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a01984 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a0198au);
  /* 11a0198a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0198c pop ecx */
  ECX = (pop32());
  /* 11a0198d je 0x11a01b10 */
  if (C.zf) goto L_11a01b10;
  /* 11a01993 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01995 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01997u);
  /* 11a01997 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01999 pop ecx */
  ECX = (pop32());
  /* 11a0199a je 0x11a019df */
  if (C.zf) goto L_11a019df;
  /* 11a0199c push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a019a1 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a019a7u);
  /* 11a019a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a019a9 pop ecx */
  ECX = (pop32());
  /* 11a019aa jne 0x11a019df */
  if (!C.zf) goto L_11a019df;
  /* 11a019ac push 5 */
  push32((uint32_t)(0x5u));
  /* 11a019ae push 3 */
  push32((uint32_t)(0x3u));
  /* 11a019b0 push 0x11a07a88 */
  push32((uint32_t)(0x11a07a88u));
  /* 11a019b5 push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a019ba push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a019bf call 0x11a01154 */
  push32(0x11a019c4u); f_11a01154();
  /* 11a019c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a019c5 push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a019ca call edi */
  call_ind((uint32_t)(EDI), 0x11a019ccu);
  /* 11a019cc push ebx */
  push32((uint32_t)(EBX));
  /* 11a019cd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a019cf push 0x11a07858 */
  push32((uint32_t)(0x11a07858u));
  /* 11a019d4 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a019d6 call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a019dcu);
  /* 11a019dc add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a019df:;
  /* 11a019df push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a019e1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a019e3u);
  /* 11a019e3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a019e5 pop ecx */
  ECX = (pop32());
  /* 11a019e6 je 0x11a01a2b */
  if (C.zf) goto L_11a01a2b;
  /* 11a019e8 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a019ed call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a019f3u);
  /* 11a019f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a019f5 pop ecx */
  ECX = (pop32());
  /* 11a019f6 jne 0x11a01a2b */
  if (!C.zf) goto L_11a01a2b;
  /* 11a019f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a019fa push 3 */
  push32((uint32_t)(0x3u));
  /* 11a019fc push 0x11a07a90 */
  push32((uint32_t)(0x11a07a90u));
  /* 11a01a01 push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a01a06 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a01a0b call 0x11a01154 */
  push32(0x11a01a10u); f_11a01154();
  /* 11a01a10 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01a11 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a01a16 call edi */
  call_ind((uint32_t)(EDI), 0x11a01a18u);
  /* 11a01a18 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01a19 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a01a1b push 0x11a07860 */
  push32((uint32_t)(0x11a07860u));
  /* 11a01a20 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01a22 call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a01a28u);
  /* 11a01a28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01a2b:;
  /* 11a01a2b mov edi, dword ptr [0x11a06134] */
  EDI = (r32((uint32_t)(0x11a06134)));
  /* 11a01a31 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01a36 call edi */
  call_ind((uint32_t)(EDI), 0x11a01a38u);
  /* 11a01a38 mov edx, eax */
  EDX = (EAX);
  /* 11a01a3a mov dword ptr [esp], 0x11a07948 */
  w32((uint32_t)(ESP), (0x11a07948u));
  /* 11a01a41 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11a01a45 call edi */
  call_ind((uint32_t)(EDI), 0x11a01a47u);
  /* 11a01a47 pop ecx */
  ECX = (pop32());
  /* 11a01a48 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a01a4c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01a4e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01a51 jge 0x11a01b01 */
  if ((C.sf==C.of)) goto L_11a01b01;
  /* 11a01a57 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01a59 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01a5bu);
  /* 11a01a5b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01a5d pop ecx */
  ECX = (pop32());
  /* 11a01a5e jne 0x11a01a72 */
  if (!C.zf) goto L_11a01a72;
  /* 11a01a60 push 0x11a07970 */
  push32((uint32_t)(0x11a07970u));
  /* 11a01a65 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01a6a call dword ptr [0x11a06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06140))), 0x11a01a70u);
  /* 11a01a70 pop ecx */
  ECX = (pop32());
  /* 11a01a71 pop ecx */
  ECX = (pop32());
L_11a01a72:;
  /* 11a01a72 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01a74 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01a76u);
  /* 11a01a76 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01a78 pop ecx */
  ECX = (pop32());
  /* 11a01a79 jne 0x11a01a8d */
  if (!C.zf) goto L_11a01a8d;
  /* 11a01a7b push 0x11a077f0 */
  push32((uint32_t)(0x11a077f0u));
  /* 11a01a80 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01a85 call dword ptr [0x11a06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06140))), 0x11a01a8bu);
  /* 11a01a8b pop ecx */
  ECX = (pop32());
  /* 11a01a8c pop ecx */
  ECX = (pop32());
L_11a01a8d:;
  /* 11a01a8d mov edi, dword ptr [0x11a06144] */
  EDI = (r32((uint32_t)(0x11a06144)));
  /* 11a01a93 mov dword ptr [esp + 0x10], 0x14 */
  w32((uint32_t)(ESP + 0x10), (0x14u));
L_11a01a9b:;
  /* 11a01a9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a01a9c push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01aa1 push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a01aa6 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a01aab call edi */
  call_ind((uint32_t)(EDI), 0x11a01aadu);
  /* 11a01aad push ebx */
  push32((uint32_t)(EBX));
  /* 11a01aae push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01ab3 push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a01ab8 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a01abd call edi */
  call_ind((uint32_t)(EDI), 0x11a01abfu);
  /* 11a01abf push ebx */
  push32((uint32_t)(EBX));
  /* 11a01ac0 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01ac5 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a01aca push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a01acf call edi */
  call_ind((uint32_t)(EDI), 0x11a01ad1u);
  /* 11a01ad1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01ad2 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01ad7 push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a01adc push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a01ae1 call edi */
  call_ind((uint32_t)(EDI), 0x11a01ae3u);
  /* 11a01ae3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01ae6 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11a01aea jne 0x11a01a9b */
  if (!C.zf) goto L_11a01a9b;
  /* 11a01aec mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a01af2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01af4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01af6 call edi */
  call_ind((uint32_t)(EDI), 0x11a01af8u);
  /* 11a01af8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01afa push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a01afc call edi */
  call_ind((uint32_t)(EDI), 0x11a01afeu);
  /* 11a01afe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01b01:;
  /* 11a01b01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a01b06 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a01b08 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a01b0eu);
  /* 11a01b0e pop ecx */
  ECX = (pop32());
  /* 11a01b0f pop ecx */
  ECX = (pop32());
L_11a01b10:;
  /* 11a01b10 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a01b12 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01b14u);
  /* 11a01b14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01b16 pop ecx */
  ECX = (pop32());
  /* 11a01b17 je 0x11a01bdc */
  if (C.zf) goto L_11a01bdc;
  /* 11a01b1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01b1f call ebp */
  call_ind((uint32_t)(EBP), 0x11a01b21u);
  /* 11a01b21 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01b23 pop ecx */
  ECX = (pop32());
  /* 11a01b24 je 0x11a01bdc */
  if (C.zf) goto L_11a01bdc;
  /* 11a01b2a mov edi, dword ptr [0x11a06134] */
  EDI = (r32((uint32_t)(0x11a06134)));
  /* 11a01b30 push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a01b35 call edi */
  call_ind((uint32_t)(EDI), 0x11a01b37u);
  /* 11a01b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01b39 pop ecx */
  ECX = (pop32());
  /* 11a01b3a jle 0x11a01bdc */
  if ((C.zf||C.sf!=C.of)) goto L_11a01bdc;
  /* 11a01b40 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01b45 call edi */
  call_ind((uint32_t)(EDI), 0x11a01b47u);
  /* 11a01b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01b49 pop ecx */
  ECX = (pop32());
  /* 11a01b4a je 0x11a01bdc */
  if (C.zf) goto L_11a01bdc;
  /* 11a01b50 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01b51 push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a01b56 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01b5cu);
  /* 11a01b5c push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01b61 call edi */
  call_ind((uint32_t)(EDI), 0x11a01b63u);
  /* 11a01b63 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01b65 mov edi, eax */
  EDI = (EAX);
  /* 11a01b67 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01b6du);
  /* 11a01b6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01b70 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01b72 je 0x11a01b82 */
  if (C.zf) goto L_11a01b82;
  /* 11a01b74 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01b76 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01b7cu);
  /* 11a01b7c cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01b7f pop ecx */
  ECX = (pop32());
  /* 11a01b80 jne 0x11a01bb7 */
  if (!C.zf) goto L_11a01bb7;
L_11a01b82:;
  /* 11a01b82 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01b83 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a01b88 push 0x11a07868 */
  push32((uint32_t)(0x11a07868u));
  /* 11a01b8d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01b8f call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a01b95u);
  /* 11a01b95 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a01b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01b9d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01b9f call edi */
  call_ind((uint32_t)(EDI), 0x11a01ba1u);
  /* 11a01ba1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01ba3 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01ba9u);
  /* 11a01ba9 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01bac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01bae jne 0x11a01bb7 */
  if (!C.zf) goto L_11a01bb7;
  /* 11a01bb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01bb1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01bb3 call edi */
  call_ind((uint32_t)(EDI), 0x11a01bb5u);
  /* 11a01bb5 pop ecx */
  ECX = (pop32());
  /* 11a01bb6 pop ecx */
  ECX = (pop32());
L_11a01bb7:;
  /* 11a01bb7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01bb9 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01bbfu);
  /* 11a01bbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01bc1 pop ecx */
  ECX = (pop32());
  /* 11a01bc2 je 0x11a01bdc */
  if (C.zf) goto L_11a01bdc;
  /* 11a01bc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01bc6 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01bcb call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01bd1u);
  /* 11a01bd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01bd3 call dword ptr [0x11a060d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d4))), 0x11a01bd9u);
  /* 11a01bd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01bdc:;
  /* 11a01bdc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a01bde call ebp */
  call_ind((uint32_t)(EBP), 0x11a01be0u);
  /* 11a01be0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01be2 pop ecx */
  ECX = (pop32());
  /* 11a01be3 je 0x11a01cab */
  if (C.zf) goto L_11a01cab;
  /* 11a01be9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a01beb call ebp */
  call_ind((uint32_t)(EBP), 0x11a01bedu);
  /* 11a01bed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01bef pop ecx */
  ECX = (pop32());
  /* 11a01bf0 je 0x11a01cab */
  if (C.zf) goto L_11a01cab;
  /* 11a01bf6 mov edi, 0x11a07820 */
  EDI = (0x11a07820u);
  /* 11a01bfb push edi */
  push32((uint32_t)(EDI));
  /* 11a01bfc call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01c02u);
  /* 11a01c02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01c04 pop ecx */
  ECX = (pop32());
  /* 11a01c05 jle 0x11a01cab */
  if ((C.zf||C.sf!=C.of)) goto L_11a01cab;
  /* 11a01c0b push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01c10 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01c16u);
  /* 11a01c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01c18 pop ecx */
  ECX = (pop32());
  /* 11a01c19 je 0x11a01cab */
  if (C.zf) goto L_11a01cab;
  /* 11a01c1f push ebx */
  push32((uint32_t)(EBX));
  /* 11a01c20 push edi */
  push32((uint32_t)(EDI));
  /* 11a01c21 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01c27u);
  /* 11a01c27 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01c2c call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01c32u);
  /* 11a01c32 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01c34 mov edi, eax */
  EDI = (EAX);
  /* 11a01c36 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01c3cu);
  /* 11a01c3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01c3f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01c41 je 0x11a01c51 */
  if (C.zf) goto L_11a01c51;
  /* 11a01c43 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01c45 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01c4bu);
  /* 11a01c4b cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a01c4e pop ecx */
  ECX = (pop32());
  /* 11a01c4f jne 0x11a01c86 */
  if (!C.zf) goto L_11a01c86;
L_11a01c51:;
  /* 11a01c51 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01c52 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a01c57 push 0x11a07870 */
  push32((uint32_t)(0x11a07870u));
  /* 11a01c5c push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01c5e call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a01c64u);
  /* 11a01c64 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a01c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01c6c push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01c6e call edi */
  call_ind((uint32_t)(EDI), 0x11a01c70u);
  /* 11a01c70 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01c72 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01c78u);
  /* 11a01c78 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01c7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01c7d jne 0x11a01c86 */
  if (!C.zf) goto L_11a01c86;
  /* 11a01c7f push ebx */
  push32((uint32_t)(EBX));
  /* 11a01c80 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a01c82 call edi */
  call_ind((uint32_t)(EDI), 0x11a01c84u);
  /* 11a01c84 pop ecx */
  ECX = (pop32());
  /* 11a01c85 pop ecx */
  ECX = (pop32());
L_11a01c86:;
  /* 11a01c86 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01c88 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01c8eu);
  /* 11a01c8e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01c90 pop ecx */
  ECX = (pop32());
  /* 11a01c91 je 0x11a01cab */
  if (C.zf) goto L_11a01cab;
  /* 11a01c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01c95 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01c9a call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01ca0u);
  /* 11a01ca0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01ca2 call dword ptr [0x11a060d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d4))), 0x11a01ca8u);
  /* 11a01ca8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01cab:;
  /* 11a01cab push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a01cad call ebp */
  call_ind((uint32_t)(EBP), 0x11a01cafu);
  /* 11a01caf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01cb1 pop ecx */
  ECX = (pop32());
  /* 11a01cb2 jne 0x11a01d11 */
  if (!C.zf) goto L_11a01d11;
  /* 11a01cb4 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01cb6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01cb8u);
  /* 11a01cb8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01cba pop ecx */
  ECX = (pop32());
  /* 11a01cbb je 0x11a01d11 */
  if (C.zf) goto L_11a01d11;
  /* 11a01cbd push ebx */
  push32((uint32_t)(EBX));
  /* 11a01cbe push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a01cc3 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01cc9u);
  /* 11a01cc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01ccb call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01cd1u);
  /* 11a01cd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01cd4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01cd6 je 0x11a01d11 */
  if (C.zf) goto L_11a01d11;
  /* 11a01cd8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01cda call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01ce0u);
  /* 11a01ce0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01ce2 pop ecx */
  ECX = (pop32());
  /* 11a01ce3 jle 0x11a01d11 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01d11;
  /* 11a01ce5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01ce7 call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a01cedu);
  /* 11a01ced push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01cef call ebp */
  call_ind((uint32_t)(EBP), 0x11a01cf1u);
  /* 11a01cf1 pop ecx */
  ECX = (pop32());
  /* 11a01cf2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01cf4 pop ecx */
  ECX = (pop32());
  /* 11a01cf5 jne 0x11a01d06 */
  if (!C.zf) goto L_11a01d06;
  /* 11a01cf7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11a01cfc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a01cfe call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a01d04u);
  /* 11a01d04 pop ecx */
  ECX = (pop32());
  /* 11a01d05 pop ecx */
  ECX = (pop32());
L_11a01d06:;
  /* 11a01d06 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01d07 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01d09 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a01d0fu);
  /* 11a01d0f pop ecx */
  ECX = (pop32());
  /* 11a01d10 pop ecx */
  ECX = (pop32());
L_11a01d11:;
  /* 11a01d11 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a01d13 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01d15u);
  /* 11a01d15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01d17 pop ecx */
  ECX = (pop32());
  /* 11a01d18 jne 0x11a01d77 */
  if (!C.zf) goto L_11a01d77;
  /* 11a01d1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01d1c call ebp */
  call_ind((uint32_t)(EBP), 0x11a01d1eu);
  /* 11a01d1e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01d20 pop ecx */
  ECX = (pop32());
  /* 11a01d21 je 0x11a01d77 */
  if (C.zf) goto L_11a01d77;
  /* 11a01d23 push ebx */
  push32((uint32_t)(EBX));
  /* 11a01d24 push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a01d29 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a01d2fu);
  /* 11a01d2f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01d31 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a01d37u);
  /* 11a01d37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01d3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01d3c je 0x11a01d77 */
  if (C.zf) goto L_11a01d77;
  /* 11a01d3e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01d40 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a01d46u);
  /* 11a01d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01d48 pop ecx */
  ECX = (pop32());
  /* 11a01d49 jle 0x11a01d77 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01d77;
  /* 11a01d4b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a01d4d call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a01d53u);
  /* 11a01d53 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01d55 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01d57u);
  /* 11a01d57 pop ecx */
  ECX = (pop32());
  /* 11a01d58 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01d5a pop ecx */
  ECX = (pop32());
  /* 11a01d5b jne 0x11a01d6c */
  if (!C.zf) goto L_11a01d6c;
  /* 11a01d5d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11a01d62 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a01d64 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a01d6au);
  /* 11a01d6a pop ecx */
  ECX = (pop32());
  /* 11a01d6b pop ecx */
  ECX = (pop32());
L_11a01d6c:;
  /* 11a01d6c push ebx */
  push32((uint32_t)(EBX));
  /* 11a01d6d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01d6f call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a01d75u);
  /* 11a01d75 pop ecx */
  ECX = (pop32());
  /* 11a01d76 pop ecx */
  ECX = (pop32());
L_11a01d77:;
  /* 11a01d77 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11a01d79 call ebp */
  call_ind((uint32_t)(EBP), 0x11a01d7bu);
  /* 11a01d7b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01d7d pop ecx */
  ECX = (pop32());
  /* 11a01d7e jne 0x11a01db3 */
  if (!C.zf) goto L_11a01db3;
  /* 11a01d80 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01d85 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01d8bu);
  /* 11a01d8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01d8d pop ecx */
  ECX = (pop32());
  /* 11a01d8e jle 0x11a01db3 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01db3;
  /* 11a01d90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01d92 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01d97 call 0x11a010a6 */
  push32(0x11a01d9cu); f_11a010a6();
  /* 11a01d9c pop ecx */
  ECX = (pop32());
  /* 11a01d9d pop ecx */
  ECX = (pop32());
  /* 11a01d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01da2 jle 0x11a01df7 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01df7;
  /* 11a01da4 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01da9 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a01dae call esi */
  call_ind((uint32_t)(ESI), 0x11a01db0u);
  /* 11a01db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01db3:;
  /* 11a01db3 mov edi, 0x11a07a48 */
  EDI = (0x11a07a48u);
L_11a01db8:;
  /* 11a01db8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11a01dba call ebp */
  call_ind((uint32_t)(EBP), 0x11a01dbcu);
  /* 11a01dbc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a01dbe pop ecx */
  ECX = (pop32());
  /* 11a01dbf jne 0x11a01ec1 */
  if (!C.zf) goto L_11a01ec1;
  /* 11a01dc5 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a01dca call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01dd0u);
  /* 11a01dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01dd2 pop ecx */
  ECX = (pop32());
  /* 11a01dd3 jle 0x11a01ec1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01ec1;
  /* 11a01dd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01ddb push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01de0 call 0x11a010a6 */
  push32(0x11a01de5u); f_11a010a6();
  /* 11a01de5 pop ecx */
  ECX = (pop32());
  /* 11a01de6 pop ecx */
  ECX = (pop32());
  /* 11a01de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01de9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01deb jle 0x11a01e6b */
  if ((C.zf||C.sf!=C.of)) goto L_11a01e6b;
  /* 11a01ded push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01df2 jmp 0x11a01eb7 */
  goto L_11a01eb7;
L_11a01df7:;
  /* 11a01df7 mov edi, 0x11a07a48 */
  EDI = (0x11a07a48u);
  /* 11a01dfc push edi */
  push32((uint32_t)(EDI));
  /* 11a01dfd call 0x11a010a6 */
  push32(0x11a01e02u); f_11a010a6();
  /* 11a01e02 pop ecx */
  ECX = (pop32());
  /* 11a01e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e05 pop ecx */
  ECX = (pop32());
  /* 11a01e06 jle 0x11a01e0c */
  if ((C.zf||C.sf!=C.of)) goto L_11a01e0c;
  /* 11a01e08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e0a jmp 0x11a01e1c */
  goto L_11a01e1c;
L_11a01e0c:;
  /* 11a01e0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01e0e push edi */
  push32((uint32_t)(EDI));
  /* 11a01e0f call 0x11a010a6 */
  push32(0x11a01e14u); f_11a010a6();
  /* 11a01e14 pop ecx */
  ECX = (pop32());
  /* 11a01e15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e17 pop ecx */
  ECX = (pop32());
  /* 11a01e18 jle 0x11a01e1f */
  if ((C.zf||C.sf!=C.of)) goto L_11a01e1f;
  /* 11a01e1a push 1 */
  push32((uint32_t)(0x1u));
L_11a01e1c:;
  /* 11a01e1c push edi */
  push32((uint32_t)(EDI));
  /* 11a01e1d jmp 0x11a01e5c */
  goto L_11a01e5c;
L_11a01e1f:;
  /* 11a01e1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e21 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01e26 call 0x11a010a6 */
  push32(0x11a01e2bu); f_11a010a6();
  /* 11a01e2b pop ecx */
  ECX = (pop32());
  /* 11a01e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e2e pop ecx */
  ECX = (pop32());
  /* 11a01e2f jle 0x11a01e3f */
  if ((C.zf||C.sf!=C.of)) goto L_11a01e3f;
  /* 11a01e31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e33 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01e38 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a01e3d jmp 0x11a01e61 */
  goto L_11a01e61;
L_11a01e3f:;
  /* 11a01e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01e41 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01e46 call 0x11a010a6 */
  push32(0x11a01e4bu); f_11a010a6();
  /* 11a01e4b pop ecx */
  ECX = (pop32());
  /* 11a01e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e4e pop ecx */
  ECX = (pop32());
  /* 11a01e4f jle 0x11a01db8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01db8;
  /* 11a01e55 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01e57 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
L_11a01e5c:;
  /* 11a01e5c push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
L_11a01e61:;
  /* 11a01e61 call esi */
  call_ind((uint32_t)(ESI), 0x11a01e63u);
  /* 11a01e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a01e66 jmp 0x11a01db8 */
  goto L_11a01db8;
L_11a01e6b:;
  /* 11a01e6b push edi */
  push32((uint32_t)(EDI));
  /* 11a01e6c call 0x11a010a6 */
  push32(0x11a01e71u); f_11a010a6();
  /* 11a01e71 pop ecx */
  ECX = (pop32());
  /* 11a01e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e74 pop ecx */
  ECX = (pop32());
  /* 11a01e75 jle 0x11a01e7b */
  if ((C.zf||C.sf!=C.of)) goto L_11a01e7b;
  /* 11a01e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e79 jmp 0x11a01eb6 */
  goto L_11a01eb6;
L_11a01e7b:;
  /* 11a01e7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01e7d push edi */
  push32((uint32_t)(EDI));
  /* 11a01e7e call 0x11a010a6 */
  push32(0x11a01e83u); f_11a010a6();
  /* 11a01e83 pop ecx */
  ECX = (pop32());
  /* 11a01e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e86 pop ecx */
  ECX = (pop32());
  /* 11a01e87 jg 0x11a01eb4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a01eb4;
  /* 11a01e89 mov edi, 0x11a07a38 */
  EDI = (0x11a07a38u);
  /* 11a01e8e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e90 push edi */
  push32((uint32_t)(EDI));
  /* 11a01e91 call 0x11a010a6 */
  push32(0x11a01e96u); f_11a010a6();
  /* 11a01e96 pop ecx */
  ECX = (pop32());
  /* 11a01e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01e99 pop ecx */
  ECX = (pop32());
  /* 11a01e9a jle 0x11a01ea6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01ea6;
  /* 11a01e9c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01e9e push edi */
  push32((uint32_t)(EDI));
  /* 11a01e9f push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a01ea4 jmp 0x11a01ebc */
  goto L_11a01ebc;
L_11a01ea6:;
  /* 11a01ea6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01ea8 push edi */
  push32((uint32_t)(EDI));
  /* 11a01ea9 call 0x11a010a6 */
  push32(0x11a01eaeu); f_11a010a6();
  /* 11a01eae pop ecx */
  ECX = (pop32());
  /* 11a01eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01eb1 pop ecx */
  ECX = (pop32());
  /* 11a01eb2 jle 0x11a01ec1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01ec1;
L_11a01eb4:;
  /* 11a01eb4 push 1 */
  push32((uint32_t)(0x1u));
L_11a01eb6:;
  /* 11a01eb6 push edi */
  push32((uint32_t)(EDI));
L_11a01eb7:;
  /* 11a01eb7 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
L_11a01ebc:;
  /* 11a01ebc call esi */
  call_ind((uint32_t)(ESI), 0x11a01ebeu);
  /* 11a01ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01ec1:;
  /* 11a01ec1 mov edi, 0x11a07970 */
  EDI = (0x11a07970u);
  /* 11a01ec6 push edi */
  push32((uint32_t)(EDI));
  /* 11a01ec7 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01ecdu);
  /* 11a01ecd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01ecf pop ecx */
  ECX = (pop32());
  /* 11a01ed0 jle 0x11a01f51 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f51;
  /* 11a01ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01ed4 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01ed9 call 0x11a010a6 */
  push32(0x11a01edeu); f_11a010a6();
  /* 11a01ede pop ecx */
  ECX = (pop32());
  /* 11a01edf pop ecx */
  ECX = (pop32());
  /* 11a01ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01ee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01ee4 jle 0x11a01eed */
  if ((C.zf||C.sf!=C.of)) goto L_11a01eed;
  /* 11a01ee6 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01eeb jmp 0x11a01f4b */
  goto L_11a01f4b;
L_11a01eed:;
  /* 11a01eed push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01ef2 call 0x11a010a6 */
  push32(0x11a01ef7u); f_11a010a6();
  /* 11a01ef7 pop ecx */
  ECX = (pop32());
  /* 11a01ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01efa pop ecx */
  ECX = (pop32());
  /* 11a01efb jle 0x11a01f01 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f01;
  /* 11a01efd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01eff jmp 0x11a01f15 */
  goto L_11a01f15;
L_11a01f01:;
  /* 11a01f01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01f03 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01f08 call 0x11a010a6 */
  push32(0x11a01f0du); f_11a010a6();
  /* 11a01f0d pop ecx */
  ECX = (pop32());
  /* 11a01f0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f10 pop ecx */
  ECX = (pop32());
  /* 11a01f11 jle 0x11a01f1c */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f1c;
  /* 11a01f13 push 1 */
  push32((uint32_t)(0x1u));
L_11a01f15:;
  /* 11a01f15 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01f1a jmp 0x11a01f4b */
  goto L_11a01f4b;
L_11a01f1c:;
  /* 11a01f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01f1e push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01f23 call 0x11a010a6 */
  push32(0x11a01f28u); f_11a010a6();
  /* 11a01f28 pop ecx */
  ECX = (pop32());
  /* 11a01f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f2b pop ecx */
  ECX = (pop32());
  /* 11a01f2c jle 0x11a01f32 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f32;
  /* 11a01f2e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01f30 jmp 0x11a01f46 */
  goto L_11a01f46;
L_11a01f32:;
  /* 11a01f32 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01f34 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01f39 call 0x11a010a6 */
  push32(0x11a01f3eu); f_11a010a6();
  /* 11a01f3e pop ecx */
  ECX = (pop32());
  /* 11a01f3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f41 pop ecx */
  ECX = (pop32());
  /* 11a01f42 jle 0x11a01f51 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f51;
  /* 11a01f44 push 1 */
  push32((uint32_t)(0x1u));
L_11a01f46:;
  /* 11a01f46 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
L_11a01f4b:;
  /* 11a01f4b push edi */
  push32((uint32_t)(EDI));
  /* 11a01f4c call esi */
  call_ind((uint32_t)(ESI), 0x11a01f4eu);
  /* 11a01f4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01f51:;
  /* 11a01f51 mov edi, 0x11a077f0 */
  EDI = (0x11a077f0u);
  /* 11a01f56 push edi */
  push32((uint32_t)(EDI));
  /* 11a01f57 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a01f5du);
  /* 11a01f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f5f pop ecx */
  ECX = (pop32());
  /* 11a01f60 jle 0x11a01fef */
  if ((C.zf||C.sf!=C.of)) goto L_11a01fef;
  /* 11a01f66 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01f68 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01f6d call 0x11a010a6 */
  push32(0x11a01f72u); f_11a010a6();
  /* 11a01f72 pop ecx */
  ECX = (pop32());
  /* 11a01f73 pop ecx */
  ECX = (pop32());
  /* 11a01f74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01f78 jle 0x11a01f81 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f81;
  /* 11a01f7a push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a01f7f jmp 0x11a01fe9 */
  goto L_11a01fe9;
L_11a01f81:;
  /* 11a01f81 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01f86 call 0x11a010a6 */
  push32(0x11a01f8bu); f_11a010a6();
  /* 11a01f8b pop ecx */
  ECX = (pop32());
  /* 11a01f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01f8e pop ecx */
  ECX = (pop32());
  /* 11a01f8f jle 0x11a01f95 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01f95;
  /* 11a01f91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01f93 jmp 0x11a01fa9 */
  goto L_11a01fa9;
L_11a01f95:;
  /* 11a01f95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01f97 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01f9c call 0x11a010a6 */
  push32(0x11a01fa1u); f_11a010a6();
  /* 11a01fa1 pop ecx */
  ECX = (pop32());
  /* 11a01fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01fa4 pop ecx */
  ECX = (pop32());
  /* 11a01fa5 jle 0x11a01fb0 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01fb0;
  /* 11a01fa7 push 1 */
  push32((uint32_t)(0x1u));
L_11a01fa9:;
  /* 11a01fa9 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a01fae jmp 0x11a01fe9 */
  goto L_11a01fe9;
L_11a01fb0:;
  /* 11a01fb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01fb2 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01fb7 call 0x11a010a6 */
  push32(0x11a01fbcu); f_11a010a6();
  /* 11a01fbc pop ecx */
  ECX = (pop32());
  /* 11a01fbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01fbf pop ecx */
  ECX = (pop32());
  /* 11a01fc0 jle 0x11a01fd0 */
  if ((C.zf||C.sf!=C.of)) goto L_11a01fd0;
  /* 11a01fc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01fc4 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01fc9 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a01fce jmp 0x11a01fea */
  goto L_11a01fea;
L_11a01fd0:;
  /* 11a01fd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01fd2 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a01fd7 call 0x11a010a6 */
  push32(0x11a01fdcu); f_11a010a6();
  /* 11a01fdc pop ecx */
  ECX = (pop32());
  /* 11a01fdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a01fdf pop ecx */
  ECX = (pop32());
  /* 11a01fe0 jle 0x11a01fef */
  if ((C.zf||C.sf!=C.of)) goto L_11a01fef;
  /* 11a01fe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a01fe4 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
L_11a01fe9:;
  /* 11a01fe9 push edi */
  push32((uint32_t)(EDI));
L_11a01fea:;
  /* 11a01fea call esi */
  call_ind((uint32_t)(ESI), 0x11a01fecu);
  /* 11a01fec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a01fef:;
  /* 11a01fef mov edi, 0x11a07920 */
  EDI = (0x11a07920u);
  /* 11a01ff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a01ff6 push edi */
  push32((uint32_t)(EDI));
  /* 11a01ff7 call 0x11a010a6 */
  push32(0x11a01ffcu); f_11a010a6();
  /* 11a01ffc mov edx, eax */
  EDX = (EAX);
  /* 11a01ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02000 push edi */
  push32((uint32_t)(EDI));
  /* 11a02001 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11a02005 call 0x11a010a6 */
  push32(0x11a0200au); f_11a010a6();
  /* 11a0200a mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a0200e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02011 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02013 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a02015 jle 0x11a0211e */
  if ((C.zf||C.sf!=C.of)) goto L_11a0211e;
  /* 11a0201b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0201d push edi */
  push32((uint32_t)(EDI));
  /* 11a0201e call 0x11a010a6 */
  push32(0x11a02023u); f_11a010a6();
  /* 11a02023 pop ecx */
  ECX = (pop32());
  /* 11a02024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02026 pop ecx */
  ECX = (pop32());
  /* 11a02027 jle 0x11a02062 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02062;
  /* 11a02029 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0202b push edi */
  push32((uint32_t)(EDI));
  /* 11a0202c push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a02031 call esi */
  call_ind((uint32_t)(ESI), 0x11a02033u);
  /* 11a02033 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02035 push edi */
  push32((uint32_t)(EDI));
  /* 11a02036 push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a0203b call esi */
  call_ind((uint32_t)(ESI), 0x11a0203du);
  /* 11a0203d push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a0203f call ebp */
  call_ind((uint32_t)(EBP), 0x11a02041u);
  /* 11a02041 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02044 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02046 je 0x11a02055 */
  if (C.zf) goto L_11a02055;
  /* 11a02048 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0204a push edi */
  push32((uint32_t)(EDI));
  /* 11a0204b push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a02050 call esi */
  call_ind((uint32_t)(ESI), 0x11a02052u);
  /* 11a02052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02055:;
  /* 11a02055 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a02057 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02059u);
  /* 11a02059 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0205b pop ecx */
  ECX = (pop32());
  /* 11a0205c je 0x11a020a4 */
  if (C.zf) goto L_11a020a4;
  /* 11a0205e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02060 jmp 0x11a02099 */
  goto L_11a02099;
L_11a02062:;
  /* 11a02062 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02064 push edi */
  push32((uint32_t)(EDI));
  /* 11a02065 push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a0206a call esi */
  call_ind((uint32_t)(ESI), 0x11a0206cu);
  /* 11a0206c push 2 */
  push32((uint32_t)(0x2u));
  /* 11a0206e push edi */
  push32((uint32_t)(EDI));
  /* 11a0206f push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a02074 call esi */
  call_ind((uint32_t)(ESI), 0x11a02076u);
  /* 11a02076 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a02078 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0207au);
  /* 11a0207a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0207d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0207f je 0x11a0208e */
  if (C.zf) goto L_11a0208e;
  /* 11a02081 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02083 push edi */
  push32((uint32_t)(EDI));
  /* 11a02084 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a02089 call esi */
  call_ind((uint32_t)(ESI), 0x11a0208bu);
  /* 11a0208b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0208e:;
  /* 11a0208e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a02090 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02092u);
  /* 11a02092 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02094 pop ecx */
  ECX = (pop32());
  /* 11a02095 je 0x11a020a4 */
  if (C.zf) goto L_11a020a4;
  /* 11a02097 push 2 */
  push32((uint32_t)(0x2u));
L_11a02099:;
  /* 11a02099 push edi */
  push32((uint32_t)(EDI));
  /* 11a0209a push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a0209f call esi */
  call_ind((uint32_t)(ESI), 0x11a020a1u);
  /* 11a020a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a020a4:;
  /* 11a020a4 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a020a6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a020a8u);
  /* 11a020a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a020aa pop ecx */
  ECX = (pop32());
  /* 11a020ab je 0x11a02159 */
  if (C.zf) goto L_11a02159;
  /* 11a020b1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11a020b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a020b5u);
  /* 11a020b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a020b7 pop ecx */
  ECX = (pop32());
  /* 11a020b8 je 0x11a020e1 */
  if (C.zf) goto L_11a020e1;
  /* 11a020ba push ebx */
  push32((uint32_t)(EBX));
  /* 11a020bb push 0x11a07818 */
  push32((uint32_t)(0x11a07818u));
  /* 11a020c0 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a020c6u);
  /* 11a020c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a020c8 call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a020ceu);
  /* 11a020ce push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a020d3 push edi */
  push32((uint32_t)(EDI));
  /* 11a020d4 push 0x11a07948 */
  push32((uint32_t)(0x11a07948u));
  /* 11a020d9 call 0x11a0113d */
  push32(0x11a020deu); f_11a0113d();
  /* 11a020de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a020e1:;
  /* 11a020e1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a020e3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a020e5u);
  /* 11a020e5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a020e7 pop ecx */
  ECX = (pop32());
  /* 11a020e8 je 0x11a02111 */
  if (C.zf) goto L_11a02111;
  /* 11a020ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a020eb push 0x11a07820 */
  push32((uint32_t)(0x11a07820u));
  /* 11a020f0 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a020f6u);
  /* 11a020f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a020f8 call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a020feu);
  /* 11a020fe push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a02103 push edi */
  push32((uint32_t)(EDI));
  /* 11a02104 push 0x11a077e8 */
  push32((uint32_t)(0x11a077e8u));
  /* 11a02109 call 0x11a0113d */
  push32(0x11a0210eu); f_11a0113d();
  /* 11a0210e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02111:;
  /* 11a02111 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02112 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a02114 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a0211au);
  /* 11a0211a pop ecx */
  ECX = (pop32());
  /* 11a0211b pop ecx */
  ECX = (pop32());
  /* 11a0211c jmp 0x11a02159 */
  goto L_11a02159;
L_11a0211e:;
  /* 11a0211e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a02120 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02122u);
  /* 11a02122 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02124 pop ecx */
  ECX = (pop32());
  /* 11a02125 jne 0x11a02159 */
  if (!C.zf) goto L_11a02159;
  /* 11a02127 mov edi, 0x11a07920 */
  EDI = (0x11a07920u);
  /* 11a0212c push 0xa1 */
  push32((uint32_t)(0xa1u));
  /* 11a02131 push edi */
  push32((uint32_t)(EDI));
  /* 11a02132 push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a02137 call 0x11a0113d */
  push32(0x11a0213cu); f_11a0113d();
  /* 11a0213c push 0xa1 */
  push32((uint32_t)(0xa1u));
  /* 11a02141 push edi */
  push32((uint32_t)(EDI));
  /* 11a02142 push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a02147 call 0x11a0113d */
  push32(0x11a0214cu); f_11a0113d();
  /* 11a0214c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0214e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11a02150 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02156u);
  /* 11a02156 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02159:;
  /* 11a02159 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a0215b call ebp */
  call_ind((uint32_t)(EBP), 0x11a0215du);
  /* 11a0215d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0215f pop ecx */
  ECX = (pop32());
  /* 11a02160 je 0x11a02a1b */
  if (C.zf) goto L_11a02a1b;
  /* 11a02166 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a02168 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0216au);
  /* 11a0216a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0216c pop ecx */
  ECX = (pop32());
  /* 11a0216d jne 0x11a02212 */
  if (!C.zf) goto L_11a02212;
  /* 11a02173 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a02175 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02177u);
  /* 11a02177 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02179 pop ecx */
  ECX = (pop32());
  /* 11a0217a je 0x11a02195 */
  if (C.zf) goto L_11a02195;
  /* 11a0217c push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a0217e push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a02183 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a02188 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0218d call 0x11a0118a */
  push32(0x11a02192u); f_11a0118a();
  /* 11a02192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02195:;
  /* 11a02195 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a02197 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02199u);
  /* 11a02199 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0219b pop ecx */
  ECX = (pop32());
  /* 11a0219c je 0x11a021ba */
  if (C.zf) goto L_11a021ba;
  /* 11a0219e push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a021a0 mov edi, 0x11a07a28 */
  EDI = (0x11a07a28u);
  /* 11a021a5 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a021aa push edi */
  push32((uint32_t)(EDI));
  /* 11a021ab push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a021b0 call 0x11a0118a */
  push32(0x11a021b5u); f_11a0118a();
  /* 11a021b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a021b8 jmp 0x11a021bf */
  goto L_11a021bf;
L_11a021ba:;
  /* 11a021ba mov edi, 0x11a07a28 */
  EDI = (0x11a07a28u);
L_11a021bf:;
  /* 11a021bf push 3 */
  push32((uint32_t)(0x3u));
  /* 11a021c1 push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a021c6 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a021cb push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a021d0 call 0x11a0118a */
  push32(0x11a021d5u); f_11a0118a();
  /* 11a021d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a021d7 push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a021dc push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a021e1 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a021e6 call 0x11a0118a */
  push32(0x11a021ebu); f_11a0118a();
  /* 11a021eb push 3 */
  push32((uint32_t)(0x3u));
  /* 11a021ed push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a021f2 push edi */
  push32((uint32_t)(EDI));
  /* 11a021f3 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a021f8 call 0x11a0118a */
  push32(0x11a021fdu); f_11a0118a();
  /* 11a021fd push 3 */
  push32((uint32_t)(0x3u));
  /* 11a021ff push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a02204 push edi */
  push32((uint32_t)(EDI));
  /* 11a02205 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a0220a call 0x11a0118a */
  push32(0x11a0220fu); f_11a0118a();
  /* 11a0220f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02212:;
  /* 11a02212 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a02214 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a0221au);
  /* 11a0221a pop ecx */
  ECX = (pop32());
  /* 11a0221b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0221d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0221f pop edi */
  EDI = (pop32());
  /* 11a02220 je 0x11a0225a */
  if (C.zf) goto L_11a0225a;
  /* 11a02222 push edi */
  push32((uint32_t)(EDI));
  /* 11a02223 call dword ptr [0x11a060c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c0))), 0x11a02229u);
  /* 11a02229 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0222a push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a0222f call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02235u);
  /* 11a02235 push edi */
  push32((uint32_t)(EDI));
  /* 11a02236 call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a0223cu);
  /* 11a0223c push ebx */
  push32((uint32_t)(EBX));
  /* 11a0223d push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a02242 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02248u);
  /* 11a02248 push edi */
  push32((uint32_t)(EDI));
  /* 11a02249 call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a0224fu);
  /* 11a0224f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a02251 call dword ptr [0x11a060bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060bc))), 0x11a02257u);
  /* 11a02257 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0225a:;
  /* 11a0225a push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a0225c call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a02262u);
  /* 11a02262 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02264 pop ecx */
  ECX = (pop32());
  /* 11a02265 je 0x11a023ef */
  if (C.zf) goto L_11a023ef;
  /* 11a0226b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a0226d call ebp */
  call_ind((uint32_t)(EBP), 0x11a0226fu);
  /* 11a0226f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02271 pop ecx */
  ECX = (pop32());
  /* 11a02272 je 0x11a022b9 */
  if (C.zf) goto L_11a022b9;
  /* 11a02274 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a02279 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a0227fu);
  /* 11a0227f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02281 pop ecx */
  ECX = (pop32());
  /* 11a02282 jne 0x11a022b9 */
  if (!C.zf) goto L_11a022b9;
  /* 11a02284 push 0x7e */
  push32((uint32_t)(0x7eu));
  /* 11a02286 push edi */
  push32((uint32_t)(EDI));
  /* 11a02287 push 0x11a07a98 */
  push32((uint32_t)(0x11a07a98u));
  /* 11a0228c push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a02291 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a02296 call 0x11a01154 */
  push32(0x11a0229bu); f_11a01154();
  /* 11a0229b push ebx */
  push32((uint32_t)(EBX));
  /* 11a0229c push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a022a1 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a022a7u);
  /* 11a022a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a022a8 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a022aa push 0x11a07878 */
  push32((uint32_t)(0x11a07878u));
  /* 11a022af push edi */
  push32((uint32_t)(EDI));
  /* 11a022b0 call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a022b6u);
  /* 11a022b6 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a022b9:;
  /* 11a022b9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a022bb call ebp */
  call_ind((uint32_t)(EBP), 0x11a022bdu);
  /* 11a022bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a022bf pop ecx */
  ECX = (pop32());
  /* 11a022c0 je 0x11a02307 */
  if (C.zf) goto L_11a02307;
  /* 11a022c2 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a022c7 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a022cdu);
  /* 11a022cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a022cf pop ecx */
  ECX = (pop32());
  /* 11a022d0 jne 0x11a02307 */
  if (!C.zf) goto L_11a02307;
  /* 11a022d2 push 0x7e */
  push32((uint32_t)(0x7eu));
  /* 11a022d4 push edi */
  push32((uint32_t)(EDI));
  /* 11a022d5 push 0x11a07aa0 */
  push32((uint32_t)(0x11a07aa0u));
  /* 11a022da push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a022df push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a022e4 call 0x11a01154 */
  push32(0x11a022e9u); f_11a01154();
  /* 11a022e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a022ea push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a022ef call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a022f5u);
  /* 11a022f5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a022f6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a022f8 push 0x11a07880 */
  push32((uint32_t)(0x11a07880u));
  /* 11a022fd push edi */
  push32((uint32_t)(EDI));
  /* 11a022fe call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a02304u);
  /* 11a02304 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02307:;
  /* 11a02307 mov edi, dword ptr [0x11a06134] */
  EDI = (r32((uint32_t)(0x11a06134)));
  /* 11a0230d push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a02312 call edi */
  call_ind((uint32_t)(EDI), 0x11a02314u);
  /* 11a02314 mov edx, eax */
  EDX = (EAX);
  /* 11a02316 mov dword ptr [esp], 0x11a07928 */
  w32((uint32_t)(ESP), (0x11a07928u));
  /* 11a0231d mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11a02321 call edi */
  call_ind((uint32_t)(EDI), 0x11a02323u);
  /* 11a02323 pop ecx */
  ECX = (pop32());
  /* 11a02324 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a02328 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0232a cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0232d jge 0x11a023dd */
  if ((C.sf==C.of)) goto L_11a023dd;
  /* 11a02333 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a02335 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02337u);
  /* 11a02337 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02339 pop ecx */
  ECX = (pop32());
  /* 11a0233a jne 0x11a0234e */
  if (!C.zf) goto L_11a0234e;
  /* 11a0233c push 0x11a07938 */
  push32((uint32_t)(0x11a07938u));
  /* 11a02341 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02346 call dword ptr [0x11a06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06140))), 0x11a0234cu);
  /* 11a0234c pop ecx */
  ECX = (pop32());
  /* 11a0234d pop ecx */
  ECX = (pop32());
L_11a0234e:;
  /* 11a0234e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a02350 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02352u);
  /* 11a02352 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02354 pop ecx */
  ECX = (pop32());
  /* 11a02355 jne 0x11a02369 */
  if (!C.zf) goto L_11a02369;
  /* 11a02357 push 0x11a077d8 */
  push32((uint32_t)(0x11a077d8u));
  /* 11a0235c push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a02361 call dword ptr [0x11a06140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06140))), 0x11a02367u);
  /* 11a02367 pop ecx */
  ECX = (pop32());
  /* 11a02368 pop ecx */
  ECX = (pop32());
L_11a02369:;
  /* 11a02369 mov edi, dword ptr [0x11a06144] */
  EDI = (r32((uint32_t)(0x11a06144)));
  /* 11a0236f mov dword ptr [esp + 0x10], 0x14 */
  w32((uint32_t)(ESP + 0x10), (0x14u));
L_11a02377:;
  /* 11a02377 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02378 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0237d push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a02382 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a02387 call edi */
  call_ind((uint32_t)(EDI), 0x11a02389u);
  /* 11a02389 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0238a push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0238f push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a02394 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a02399 call edi */
  call_ind((uint32_t)(EDI), 0x11a0239bu);
  /* 11a0239b push ebx */
  push32((uint32_t)(EBX));
  /* 11a0239c push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a023a1 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a023a6 push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a023ab call edi */
  call_ind((uint32_t)(EDI), 0x11a023adu);
  /* 11a023ad push ebx */
  push32((uint32_t)(EBX));
  /* 11a023ae push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a023b3 push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a023b8 push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a023bd call edi */
  call_ind((uint32_t)(EDI), 0x11a023bfu);
  /* 11a023bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a023c2 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11a023c6 jne 0x11a02377 */
  if (!C.zf) goto L_11a02377;
  /* 11a023c8 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a023ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11a023d0 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a023d2 call edi */
  call_ind((uint32_t)(EDI), 0x11a023d4u);
  /* 11a023d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a023d6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a023d8 call edi */
  call_ind((uint32_t)(EDI), 0x11a023dau);
  /* 11a023da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a023dd:;
  /* 11a023dd push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a023e2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a023e4 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a023eau);
  /* 11a023ea pop ecx */
  ECX = (pop32());
  /* 11a023eb pop ecx */
  ECX = (pop32());
  /* 11a023ec push 4 */
  push32((uint32_t)(0x4u));
  /* 11a023ee pop edi */
  EDI = (pop32());
L_11a023ef:;
  /* 11a023ef push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a023f1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a023f3u);
  /* 11a023f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a023f5 pop ecx */
  ECX = (pop32());
  /* 11a023f6 je 0x11a024c8 */
  if (C.zf) goto L_11a024c8;
  /* 11a023fc push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a023fe call ebp */
  call_ind((uint32_t)(EBP), 0x11a02400u);
  /* 11a02400 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02402 pop ecx */
  ECX = (pop32());
  /* 11a02403 je 0x11a024c8 */
  if (C.zf) goto L_11a024c8;
  /* 11a02409 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a0240e call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02414u);
  /* 11a02414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02416 pop ecx */
  ECX = (pop32());
  /* 11a02417 jle 0x11a024c8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a024c8;
  /* 11a0241d push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02422 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02428u);
  /* 11a02428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0242a pop ecx */
  ECX = (pop32());
  /* 11a0242b je 0x11a024c8 */
  if (C.zf) goto L_11a024c8;
  /* 11a02431 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02432 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a02437 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a0243du);
  /* 11a0243d push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02442 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02448u);
  /* 11a02448 mov edx, eax */
  EDX = (EAX);
  /* 11a0244a push edi */
  push32((uint32_t)(EDI));
  /* 11a0244b mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11a0244f call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a02455u);
  /* 11a02455 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a02459 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0245c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0245e push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02460 pop edi */
  EDI = (pop32());
  /* 11a02461 je 0x11a02470 */
  if (C.zf) goto L_11a02470;
  /* 11a02463 push edi */
  push32((uint32_t)(EDI));
  /* 11a02464 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a0246au);
  /* 11a0246a cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0246d pop ecx */
  ECX = (pop32());
  /* 11a0246e jne 0x11a024a5 */
  if (!C.zf) goto L_11a024a5;
L_11a02470:;
  /* 11a02470 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02471 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a02476 push 0x11a07888 */
  push32((uint32_t)(0x11a07888u));
  /* 11a0247b push edi */
  push32((uint32_t)(EDI));
  /* 11a0247c call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a02482u);
  /* 11a02482 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02484 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a02486 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a0248cu);
  /* 11a0248c push edi */
  push32((uint32_t)(EDI));
  /* 11a0248d call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a02493u);
  /* 11a02493 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02496 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02498 jne 0x11a024a5 */
  if (!C.zf) goto L_11a024a5;
  /* 11a0249a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0249b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a0249d call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a024a3u);
  /* 11a024a3 pop ecx */
  ECX = (pop32());
  /* 11a024a4 pop ecx */
  ECX = (pop32());
L_11a024a5:;
  /* 11a024a5 push edi */
  push32((uint32_t)(EDI));
  /* 11a024a6 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a024acu);
  /* 11a024ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a024ae pop ecx */
  ECX = (pop32());
  /* 11a024af je 0x11a024c8 */
  if (C.zf) goto L_11a024c8;
  /* 11a024b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a024b3 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a024b8 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a024beu);
  /* 11a024be push edi */
  push32((uint32_t)(EDI));
  /* 11a024bf call dword ptr [0x11a060d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d4))), 0x11a024c5u);
  /* 11a024c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a024c8:;
  /* 11a024c8 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a024ca call ebp */
  call_ind((uint32_t)(EBP), 0x11a024ccu);
  /* 11a024cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a024ce pop ecx */
  ECX = (pop32());
  /* 11a024cf je 0x11a025a1 */
  if (C.zf) goto L_11a025a1;
  /* 11a024d5 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a024d7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a024d9u);
  /* 11a024d9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a024db pop ecx */
  ECX = (pop32());
  /* 11a024dc je 0x11a025a1 */
  if (C.zf) goto L_11a025a1;
  /* 11a024e2 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a024e7 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a024edu);
  /* 11a024ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a024ef pop ecx */
  ECX = (pop32());
  /* 11a024f0 jle 0x11a025a1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a025a1;
  /* 11a024f6 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a024fb call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02501u);
  /* 11a02501 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02503 pop ecx */
  ECX = (pop32());
  /* 11a02504 je 0x11a025a1 */
  if (C.zf) goto L_11a025a1;
  /* 11a0250a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0250b push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a02510 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02516u);
  /* 11a02516 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a0251b call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02521u);
  /* 11a02521 mov edx, eax */
  EDX = (EAX);
  /* 11a02523 push edi */
  push32((uint32_t)(EDI));
  /* 11a02524 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11a02528 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a0252eu);
  /* 11a0252e mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a02532 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02535 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02537 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02539 pop edi */
  EDI = (pop32());
  /* 11a0253a je 0x11a02549 */
  if (C.zf) goto L_11a02549;
  /* 11a0253c push edi */
  push32((uint32_t)(EDI));
  /* 11a0253d call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a02543u);
  /* 11a02543 cmp eax, 0x50 */
  { uint32_t _a=(EAX),_b=(0x50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02546 pop ecx */
  ECX = (pop32());
  /* 11a02547 jne 0x11a0257e */
  if (!C.zf) goto L_11a0257e;
L_11a02549:;
  /* 11a02549 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0254a push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a0254f push 0x11a07890 */
  push32((uint32_t)(0x11a07890u));
  /* 11a02554 push edi */
  push32((uint32_t)(EDI));
  /* 11a02555 call dword ptr [0x11a060cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060cc))), 0x11a0255bu);
  /* 11a0255b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0255d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a0255f call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02565u);
  /* 11a02565 push edi */
  push32((uint32_t)(EDI));
  /* 11a02566 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a0256cu);
  /* 11a0256c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0256f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02571 jne 0x11a0257e */
  if (!C.zf) goto L_11a0257e;
  /* 11a02573 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02574 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a02576 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a0257cu);
  /* 11a0257c pop ecx */
  ECX = (pop32());
  /* 11a0257d pop ecx */
  ECX = (pop32());
L_11a0257e:;
  /* 11a0257e push edi */
  push32((uint32_t)(EDI));
  /* 11a0257f call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a02585u);
  /* 11a02585 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02587 pop ecx */
  ECX = (pop32());
  /* 11a02588 je 0x11a025a1 */
  if (C.zf) goto L_11a025a1;
  /* 11a0258a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0258c push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a02591 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02597u);
  /* 11a02597 push edi */
  push32((uint32_t)(EDI));
  /* 11a02598 call dword ptr [0x11a060d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d4))), 0x11a0259eu);
  /* 11a0259e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a025a1:;
  /* 11a025a1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a025a3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a025a5u);
  /* 11a025a5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a025a7 pop ecx */
  ECX = (pop32());
  /* 11a025a8 jne 0x11a02604 */
  if (!C.zf) goto L_11a02604;
  /* 11a025aa push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a025ac call ebp */
  call_ind((uint32_t)(EBP), 0x11a025aeu);
  /* 11a025ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a025b0 pop ecx */
  ECX = (pop32());
  /* 11a025b1 je 0x11a02604 */
  if (C.zf) goto L_11a02604;
  /* 11a025b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a025b4 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a025b9 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a025bfu);
  /* 11a025bf push edi */
  push32((uint32_t)(EDI));
  /* 11a025c0 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a025c6u);
  /* 11a025c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a025c9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a025cb je 0x11a02604 */
  if (C.zf) goto L_11a02604;
  /* 11a025cd push edi */
  push32((uint32_t)(EDI));
  /* 11a025ce call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a025d4u);
  /* 11a025d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a025d6 pop ecx */
  ECX = (pop32());
  /* 11a025d7 jle 0x11a02604 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02604;
  /* 11a025d9 push edi */
  push32((uint32_t)(EDI));
  /* 11a025da call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a025e0u);
  /* 11a025e0 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a025e2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a025e4u);
  /* 11a025e4 pop ecx */
  ECX = (pop32());
  /* 11a025e5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a025e7 pop ecx */
  ECX = (pop32());
  /* 11a025e8 jne 0x11a025f9 */
  if (!C.zf) goto L_11a025f9;
  /* 11a025ea push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11a025ef push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a025f1 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a025f7u);
  /* 11a025f7 pop ecx */
  ECX = (pop32());
  /* 11a025f8 pop ecx */
  ECX = (pop32());
L_11a025f9:;
  /* 11a025f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a025fa push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a025fc call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02602u);
  /* 11a02602 pop ecx */
  ECX = (pop32());
  /* 11a02603 pop ecx */
  ECX = (pop32());
L_11a02604:;
  /* 11a02604 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a02606 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02608u);
  /* 11a02608 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0260a pop ecx */
  ECX = (pop32());
  /* 11a0260b jne 0x11a02667 */
  if (!C.zf) goto L_11a02667;
  /* 11a0260d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a0260f call ebp */
  call_ind((uint32_t)(EBP), 0x11a02611u);
  /* 11a02611 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02613 pop ecx */
  ECX = (pop32());
  /* 11a02614 je 0x11a02667 */
  if (C.zf) goto L_11a02667;
  /* 11a02616 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02617 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a0261c call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02622u);
  /* 11a02622 push edi */
  push32((uint32_t)(EDI));
  /* 11a02623 call dword ptr [0x11a060dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060dc))), 0x11a02629u);
  /* 11a02629 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0262c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0262e je 0x11a02667 */
  if (C.zf) goto L_11a02667;
  /* 11a02630 push edi */
  push32((uint32_t)(EDI));
  /* 11a02631 call dword ptr [0x11a060d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d8))), 0x11a02637u);
  /* 11a02637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02639 pop ecx */
  ECX = (pop32());
  /* 11a0263a jle 0x11a02667 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02667;
  /* 11a0263c push edi */
  push32((uint32_t)(EDI));
  /* 11a0263d call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a02643u);
  /* 11a02643 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a02645 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02647u);
  /* 11a02647 pop ecx */
  ECX = (pop32());
  /* 11a02648 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0264a pop ecx */
  ECX = (pop32());
  /* 11a0264b jne 0x11a0265c */
  if (!C.zf) goto L_11a0265c;
  /* 11a0264d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11a02652 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a02654 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a0265au);
  /* 11a0265a pop ecx */
  ECX = (pop32());
  /* 11a0265b pop ecx */
  ECX = (pop32());
L_11a0265c:;
  /* 11a0265c push ebx */
  push32((uint32_t)(EBX));
  /* 11a0265d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a0265f call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02665u);
  /* 11a02665 pop ecx */
  ECX = (pop32());
  /* 11a02666 pop ecx */
  ECX = (pop32());
L_11a02667:;
  /* 11a02667 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a02669 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0266bu);
  /* 11a0266b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0266d pop ecx */
  ECX = (pop32());
  /* 11a0266e jne 0x11a026a3 */
  if (!C.zf) goto L_11a026a3;
  /* 11a02670 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02675 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a0267bu);
  /* 11a0267b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0267d pop ecx */
  ECX = (pop32());
  /* 11a0267e jle 0x11a026a3 */
  if ((C.zf||C.sf!=C.of)) goto L_11a026a3;
  /* 11a02680 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02682 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a02687 call 0x11a010a6 */
  push32(0x11a0268cu); f_11a010a6();
  /* 11a0268c pop ecx */
  ECX = (pop32());
  /* 11a0268d pop ecx */
  ECX = (pop32());
  /* 11a0268e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02690 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02692 jle 0x11a026e7 */
  if ((C.zf||C.sf!=C.of)) goto L_11a026e7;
  /* 11a02694 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a02699 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0269e call esi */
  call_ind((uint32_t)(ESI), 0x11a026a0u);
  /* 11a026a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a026a3:;
  /* 11a026a3 mov edi, 0x11a07a48 */
  EDI = (0x11a07a48u);
L_11a026a8:;
  /* 11a026a8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a026aa call ebp */
  call_ind((uint32_t)(EBP), 0x11a026acu);
  /* 11a026ac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a026ae pop ecx */
  ECX = (pop32());
  /* 11a026af jne 0x11a027ad */
  if (!C.zf) goto L_11a027ad;
  /* 11a026b5 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a026ba call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a026c0u);
  /* 11a026c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a026c2 pop ecx */
  ECX = (pop32());
  /* 11a026c3 jle 0x11a027ad */
  if ((C.zf||C.sf!=C.of)) goto L_11a027ad;
  /* 11a026c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a026cb push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a026d0 call 0x11a010a6 */
  push32(0x11a026d5u); f_11a010a6();
  /* 11a026d5 pop ecx */
  ECX = (pop32());
  /* 11a026d6 pop ecx */
  ECX = (pop32());
  /* 11a026d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a026d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a026db jle 0x11a02751 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02751;
  /* 11a026dd push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a026e2 jmp 0x11a027a3 */
  goto L_11a027a3;
L_11a026e7:;
  /* 11a026e7 mov edi, 0x11a07a48 */
  EDI = (0x11a07a48u);
  /* 11a026ec push edi */
  push32((uint32_t)(EDI));
  /* 11a026ed call 0x11a010a6 */
  push32(0x11a026f2u); f_11a010a6();
  /* 11a026f2 pop ecx */
  ECX = (pop32());
  /* 11a026f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a026f5 pop ecx */
  ECX = (pop32());
  /* 11a026f6 jle 0x11a026fc */
  if ((C.zf||C.sf!=C.of)) goto L_11a026fc;
  /* 11a026f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a026fa jmp 0x11a0270c */
  goto L_11a0270c;
L_11a026fc:;
  /* 11a026fc push 2 */
  push32((uint32_t)(0x2u));
  /* 11a026fe push edi */
  push32((uint32_t)(EDI));
  /* 11a026ff call 0x11a010a6 */
  push32(0x11a02704u); f_11a010a6();
  /* 11a02704 pop ecx */
  ECX = (pop32());
  /* 11a02705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02707 pop ecx */
  ECX = (pop32());
  /* 11a02708 jle 0x11a0270f */
  if ((C.zf||C.sf!=C.of)) goto L_11a0270f;
  /* 11a0270a push 2 */
  push32((uint32_t)(0x2u));
L_11a0270c:;
  /* 11a0270c push edi */
  push32((uint32_t)(EDI));
  /* 11a0270d jmp 0x11a02742 */
  goto L_11a02742;
L_11a0270f:;
  /* 11a0270f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02711 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a02716 call 0x11a010a6 */
  push32(0x11a0271bu); f_11a010a6();
  /* 11a0271b pop ecx */
  ECX = (pop32());
  /* 11a0271c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0271e pop ecx */
  ECX = (pop32());
  /* 11a0271f jle 0x11a02725 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02725;
  /* 11a02721 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02723 jmp 0x11a0273d */
  goto L_11a0273d;
L_11a02725:;
  /* 11a02725 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02727 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a0272c call 0x11a010a6 */
  push32(0x11a02731u); f_11a010a6();
  /* 11a02731 pop ecx */
  ECX = (pop32());
  /* 11a02732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02734 pop ecx */
  ECX = (pop32());
  /* 11a02735 jle 0x11a026a8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a026a8;
  /* 11a0273b push 2 */
  push32((uint32_t)(0x2u));
L_11a0273d:;
  /* 11a0273d push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
L_11a02742:;
  /* 11a02742 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02747 call esi */
  call_ind((uint32_t)(ESI), 0x11a02749u);
  /* 11a02749 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0274c jmp 0x11a026a8 */
  goto L_11a026a8;
L_11a02751:;
  /* 11a02751 push edi */
  push32((uint32_t)(EDI));
  /* 11a02752 call 0x11a010a6 */
  push32(0x11a02757u); f_11a010a6();
  /* 11a02757 pop ecx */
  ECX = (pop32());
  /* 11a02758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0275a pop ecx */
  ECX = (pop32());
  /* 11a0275b jle 0x11a02761 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02761;
  /* 11a0275d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0275f jmp 0x11a02771 */
  goto L_11a02771;
L_11a02761:;
  /* 11a02761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02763 push edi */
  push32((uint32_t)(EDI));
  /* 11a02764 call 0x11a010a6 */
  push32(0x11a02769u); f_11a010a6();
  /* 11a02769 pop ecx */
  ECX = (pop32());
  /* 11a0276a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0276c pop ecx */
  ECX = (pop32());
  /* 11a0276d jle 0x11a02774 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02774;
  /* 11a0276f push 2 */
  push32((uint32_t)(0x2u));
L_11a02771:;
  /* 11a02771 push edi */
  push32((uint32_t)(EDI));
  /* 11a02772 jmp 0x11a027a3 */
  goto L_11a027a3;
L_11a02774:;
  /* 11a02774 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02776 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a0277b call 0x11a010a6 */
  push32(0x11a02780u); f_11a010a6();
  /* 11a02780 pop ecx */
  ECX = (pop32());
  /* 11a02781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02783 pop ecx */
  ECX = (pop32());
  /* 11a02784 jle 0x11a0278a */
  if ((C.zf||C.sf!=C.of)) goto L_11a0278a;
  /* 11a02786 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02788 jmp 0x11a0279e */
  goto L_11a0279e;
L_11a0278a:;
  /* 11a0278a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a0278c push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a02791 call 0x11a010a6 */
  push32(0x11a02796u); f_11a010a6();
  /* 11a02796 pop ecx */
  ECX = (pop32());
  /* 11a02797 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02799 pop ecx */
  ECX = (pop32());
  /* 11a0279a jle 0x11a027ad */
  if ((C.zf||C.sf!=C.of)) goto L_11a027ad;
  /* 11a0279c push 2 */
  push32((uint32_t)(0x2u));
L_11a0279e:;
  /* 11a0279e push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
L_11a027a3:;
  /* 11a027a3 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a027a8 call esi */
  call_ind((uint32_t)(ESI), 0x11a027aau);
  /* 11a027aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a027ad:;
  /* 11a027ad push 0x11a07938 */
  push32((uint32_t)(0x11a07938u));
  /* 11a027b2 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a027b8u);
  /* 11a027b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a027ba pop ecx */
  ECX = (pop32());
  /* 11a027bb jle 0x11a02824 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02824;
  /* 11a027bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a027bf push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a027c4 call 0x11a010a6 */
  push32(0x11a027c9u); f_11a010a6();
  /* 11a027c9 pop ecx */
  ECX = (pop32());
  /* 11a027ca pop ecx */
  ECX = (pop32());
  /* 11a027cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a027cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a027cf jle 0x11a027d8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a027d8;
  /* 11a027d1 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a027d6 jmp 0x11a0281a */
  goto L_11a0281a;
L_11a027d8:;
  /* 11a027d8 push edi */
  push32((uint32_t)(EDI));
  /* 11a027d9 call 0x11a010a6 */
  push32(0x11a027deu); f_11a010a6();
  /* 11a027de pop ecx */
  ECX = (pop32());
  /* 11a027df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a027e1 pop ecx */
  ECX = (pop32());
  /* 11a027e2 jg 0x11a02805 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a02805;
  /* 11a027e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a027e6 push edi */
  push32((uint32_t)(EDI));
  /* 11a027e7 call 0x11a010a6 */
  push32(0x11a027ecu); f_11a010a6();
  /* 11a027ec pop ecx */
  ECX = (pop32());
  /* 11a027ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a027ef pop ecx */
  ECX = (pop32());
  /* 11a027f0 jg 0x11a02817 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a02817;
  /* 11a027f2 mov edi, 0x11a07a40 */
  EDI = (0x11a07a40u);
  /* 11a027f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a027f9 push edi */
  push32((uint32_t)(EDI));
  /* 11a027fa call 0x11a010a6 */
  push32(0x11a027ffu); f_11a010a6();
  /* 11a027ff pop ecx */
  ECX = (pop32());
  /* 11a02800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02802 pop ecx */
  ECX = (pop32());
  /* 11a02803 jle 0x11a02809 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02809;
L_11a02805:;
  /* 11a02805 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02807 jmp 0x11a02819 */
  goto L_11a02819;
L_11a02809:;
  /* 11a02809 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a0280b push edi */
  push32((uint32_t)(EDI));
  /* 11a0280c call 0x11a010a6 */
  push32(0x11a02811u); f_11a010a6();
  /* 11a02811 pop ecx */
  ECX = (pop32());
  /* 11a02812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02814 pop ecx */
  ECX = (pop32());
  /* 11a02815 jle 0x11a02824 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02824;
L_11a02817:;
  /* 11a02817 push 2 */
  push32((uint32_t)(0x2u));
L_11a02819:;
  /* 11a02819 push edi */
  push32((uint32_t)(EDI));
L_11a0281a:;
  /* 11a0281a push 0x11a07938 */
  push32((uint32_t)(0x11a07938u));
  /* 11a0281f call esi */
  call_ind((uint32_t)(ESI), 0x11a02821u);
  /* 11a02821 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02824:;
  /* 11a02824 mov edi, 0x11a077d8 */
  EDI = (0x11a077d8u);
  /* 11a02829 push edi */
  push32((uint32_t)(EDI));
  /* 11a0282a call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a02830u);
  /* 11a02830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02832 pop ecx */
  ECX = (pop32());
  /* 11a02833 jle 0x11a028b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a028b4;
  /* 11a02835 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02837 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a0283c call 0x11a010a6 */
  push32(0x11a02841u); f_11a010a6();
  /* 11a02841 pop ecx */
  ECX = (pop32());
  /* 11a02842 pop ecx */
  ECX = (pop32());
  /* 11a02843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02845 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02847 jle 0x11a02850 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02850;
  /* 11a02849 push 0x11a07a38 */
  push32((uint32_t)(0x11a07a38u));
  /* 11a0284e jmp 0x11a028ae */
  goto L_11a028ae;
L_11a02850:;
  /* 11a02850 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a02855 call 0x11a010a6 */
  push32(0x11a0285au); f_11a010a6();
  /* 11a0285a pop ecx */
  ECX = (pop32());
  /* 11a0285b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0285d pop ecx */
  ECX = (pop32());
  /* 11a0285e jle 0x11a02864 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02864;
  /* 11a02860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02862 jmp 0x11a02878 */
  goto L_11a02878;
L_11a02864:;
  /* 11a02864 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02866 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a0286b call 0x11a010a6 */
  push32(0x11a02870u); f_11a010a6();
  /* 11a02870 pop ecx */
  ECX = (pop32());
  /* 11a02871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02873 pop ecx */
  ECX = (pop32());
  /* 11a02874 jle 0x11a0287f */
  if ((C.zf||C.sf!=C.of)) goto L_11a0287f;
  /* 11a02876 push 2 */
  push32((uint32_t)(0x2u));
L_11a02878:;
  /* 11a02878 push 0x11a07a48 */
  push32((uint32_t)(0x11a07a48u));
  /* 11a0287d jmp 0x11a028ae */
  goto L_11a028ae;
L_11a0287f:;
  /* 11a0287f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02881 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a02886 call 0x11a010a6 */
  push32(0x11a0288bu); f_11a010a6();
  /* 11a0288b pop ecx */
  ECX = (pop32());
  /* 11a0288c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0288e pop ecx */
  ECX = (pop32());
  /* 11a0288f jle 0x11a02895 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02895;
  /* 11a02891 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02893 jmp 0x11a028a9 */
  goto L_11a028a9;
L_11a02895:;
  /* 11a02895 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02897 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
  /* 11a0289c call 0x11a010a6 */
  push32(0x11a028a1u); f_11a010a6();
  /* 11a028a1 pop ecx */
  ECX = (pop32());
  /* 11a028a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a028a4 pop ecx */
  ECX = (pop32());
  /* 11a028a5 jle 0x11a028b4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a028b4;
  /* 11a028a7 push 2 */
  push32((uint32_t)(0x2u));
L_11a028a9:;
  /* 11a028a9 push 0x11a07a40 */
  push32((uint32_t)(0x11a07a40u));
L_11a028ae:;
  /* 11a028ae push edi */
  push32((uint32_t)(EDI));
  /* 11a028af call esi */
  call_ind((uint32_t)(ESI), 0x11a028b1u);
  /* 11a028b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a028b4:;
  /* 11a028b4 mov edi, 0x11a07918 */
  EDI = (0x11a07918u);
  /* 11a028b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a028bb push edi */
  push32((uint32_t)(EDI));
  /* 11a028bc call 0x11a010a6 */
  push32(0x11a028c1u); f_11a010a6();
  /* 11a028c1 mov edx, eax */
  EDX = (EAX);
  /* 11a028c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a028c5 push edi */
  push32((uint32_t)(EDI));
  /* 11a028c6 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11a028ca call 0x11a010a6 */
  push32(0x11a028cfu); f_11a010a6();
  /* 11a028cf mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a028d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a028d6 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a028d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a028da jle 0x11a029e3 */
  if ((C.zf||C.sf!=C.of)) goto L_11a029e3;
  /* 11a028e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a028e2 push edi */
  push32((uint32_t)(EDI));
  /* 11a028e3 call 0x11a010a6 */
  push32(0x11a028e8u); f_11a010a6();
  /* 11a028e8 pop ecx */
  ECX = (pop32());
  /* 11a028e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a028eb pop ecx */
  ECX = (pop32());
  /* 11a028ec jle 0x11a02927 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02927;
  /* 11a028ee push 1 */
  push32((uint32_t)(0x1u));
  /* 11a028f0 push edi */
  push32((uint32_t)(EDI));
  /* 11a028f1 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a028f6 call esi */
  call_ind((uint32_t)(ESI), 0x11a028f8u);
  /* 11a028f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a028fa push edi */
  push32((uint32_t)(EDI));
  /* 11a028fb push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a02900 call esi */
  call_ind((uint32_t)(ESI), 0x11a02902u);
  /* 11a02902 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a02904 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02906u);
  /* 11a02906 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02909 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0290b je 0x11a0291a */
  if (C.zf) goto L_11a0291a;
  /* 11a0290d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0290f push edi */
  push32((uint32_t)(EDI));
  /* 11a02910 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a02915 call esi */
  call_ind((uint32_t)(ESI), 0x11a02917u);
  /* 11a02917 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0291a:;
  /* 11a0291a push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a0291c call ebp */
  call_ind((uint32_t)(EBP), 0x11a0291eu);
  /* 11a0291e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02920 pop ecx */
  ECX = (pop32());
  /* 11a02921 je 0x11a02969 */
  if (C.zf) goto L_11a02969;
  /* 11a02923 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02925 jmp 0x11a0295e */
  goto L_11a0295e;
L_11a02927:;
  /* 11a02927 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02929 push edi */
  push32((uint32_t)(EDI));
  /* 11a0292a push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a0292f call esi */
  call_ind((uint32_t)(ESI), 0x11a02931u);
  /* 11a02931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02933 push edi */
  push32((uint32_t)(EDI));
  /* 11a02934 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a02939 call esi */
  call_ind((uint32_t)(ESI), 0x11a0293bu);
  /* 11a0293b push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a0293d call ebp */
  call_ind((uint32_t)(EBP), 0x11a0293fu);
  /* 11a0293f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02942 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02944 je 0x11a02953 */
  if (C.zf) goto L_11a02953;
  /* 11a02946 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02948 push edi */
  push32((uint32_t)(EDI));
  /* 11a02949 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0294e call esi */
  call_ind((uint32_t)(ESI), 0x11a02950u);
  /* 11a02950 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02953:;
  /* 11a02953 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a02955 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02957u);
  /* 11a02957 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02959 pop ecx */
  ECX = (pop32());
  /* 11a0295a je 0x11a02969 */
  if (C.zf) goto L_11a02969;
  /* 11a0295c push 2 */
  push32((uint32_t)(0x2u));
L_11a0295e:;
  /* 11a0295e push edi */
  push32((uint32_t)(EDI));
  /* 11a0295f push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a02964 call esi */
  call_ind((uint32_t)(ESI), 0x11a02966u);
  /* 11a02966 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02969:;
  /* 11a02969 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a0296b call ebp */
  call_ind((uint32_t)(EBP), 0x11a0296du);
  /* 11a0296d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0296f pop ecx */
  ECX = (pop32());
  /* 11a02970 je 0x11a02a1b */
  if (C.zf) goto L_11a02a1b;
  /* 11a02976 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a02978 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0297au);
  /* 11a0297a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0297c pop ecx */
  ECX = (pop32());
  /* 11a0297d je 0x11a029a6 */
  if (C.zf) goto L_11a029a6;
  /* 11a0297f push ebx */
  push32((uint32_t)(EBX));
  /* 11a02980 push 0x11a07808 */
  push32((uint32_t)(0x11a07808u));
  /* 11a02985 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a0298bu);
  /* 11a0298b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0298d call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a02993u);
  /* 11a02993 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a02998 push edi */
  push32((uint32_t)(EDI));
  /* 11a02999 push 0x11a07928 */
  push32((uint32_t)(0x11a07928u));
  /* 11a0299e call 0x11a0113d */
  push32(0x11a029a3u); f_11a0113d();
  /* 11a029a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a029a6:;
  /* 11a029a6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a029a8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a029aau);
  /* 11a029aa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a029ac pop ecx */
  ECX = (pop32());
  /* 11a029ad je 0x11a029d6 */
  if (C.zf) goto L_11a029d6;
  /* 11a029af push ebx */
  push32((uint32_t)(EBX));
  /* 11a029b0 push 0x11a07810 */
  push32((uint32_t)(0x11a07810u));
  /* 11a029b5 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a029bbu);
  /* 11a029bb push 4 */
  push32((uint32_t)(0x4u));
  /* 11a029bd call dword ptr [0x11a060e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e4))), 0x11a029c3u);
  /* 11a029c3 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 11a029c8 push edi */
  push32((uint32_t)(EDI));
  /* 11a029c9 push 0x11a077e0 */
  push32((uint32_t)(0x11a077e0u));
  /* 11a029ce call 0x11a0113d */
  push32(0x11a029d3u); f_11a0113d();
  /* 11a029d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a029d6:;
  /* 11a029d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a029d7 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a029d9 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a029dfu);
  /* 11a029df pop ecx */
  ECX = (pop32());
  /* 11a029e0 pop ecx */
  ECX = (pop32());
  /* 11a029e1 jmp 0x11a02a1b */
  goto L_11a02a1b;
L_11a029e3:;
  /* 11a029e3 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a029e5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a029e7u);
  /* 11a029e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a029e9 pop ecx */
  ECX = (pop32());
  /* 11a029ea jne 0x11a02a1b */
  if (!C.zf) goto L_11a02a1b;
  /* 11a029ec mov edi, 0xa0 */
  EDI = (0xa0u);
  /* 11a029f1 mov esi, 0x11a07918 */
  ESI = (0x11a07918u);
  /* 11a029f6 push edi */
  push32((uint32_t)(EDI));
  /* 11a029f7 push esi */
  push32((uint32_t)(ESI));
  /* 11a029f8 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a029fd call 0x11a0113d */
  push32(0x11a02a02u); f_11a0113d();
  /* 11a02a02 push edi */
  push32((uint32_t)(EDI));
  /* 11a02a03 push esi */
  push32((uint32_t)(ESI));
  /* 11a02a04 push 0x11a07900 */
  push32((uint32_t)(0x11a07900u));
  /* 11a02a09 call 0x11a0113d */
  push32(0x11a02a0eu); f_11a0113d();
  /* 11a02a0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02a10 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a02a12 call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02a18u);
  /* 11a02a18 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02a1b:;
  /* 11a02a1b push 0xa */
  push32((uint32_t)(0xau));
  /* 11a02a1d call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a02a23u);
  /* 11a02a23 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02a25 pop ecx */
  ECX = (pop32());
  /* 11a02a26 je 0x11a02a62 */
  if (C.zf) goto L_11a02a62;
  /* 11a02a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02a2a call 0x11a01012 */
  push32(0x11a02a2fu); f_11a01012();
  /* 11a02a2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02a31 call 0x11a01012 */
  push32(0x11a02a36u); f_11a01012();
  /* 11a02a36 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02a38 call 0x11a01071 */
  push32(0x11a02a3du); f_11a01071();
  /* 11a02a3d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02a3f call 0x11a01071 */
  push32(0x11a02a44u); f_11a01071();
  /* 11a02a44 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02a46 call 0x11a01071 */
  push32(0x11a02a4bu); f_11a01071();
  /* 11a02a4b push 6 */
  push32((uint32_t)(0x6u));
  /* 11a02a4d call 0x11a01071 */
  push32(0x11a02a52u); f_11a01071();
  /* 11a02a52 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a02a57 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a02a59 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a02a5fu);
  /* 11a02a5f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02a62:;
  /* 11a02a62 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02a63 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02a65u);
  /* 11a02a65 mov esi, dword ptr [0x11a060e8] */
  ESI = (r32((uint32_t)(0x11a060e8)));
  /* 11a02a6b pop ecx */
  ECX = (pop32());
  /* 11a02a6c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02a6e je 0x11a02f1c */
  if (C.zf) goto L_11a02f1c;
  /* 11a02a74 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02a75 call dword ptr [0x11a060e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060e0))), 0x11a02a7bu);
  /* 11a02a7b mov edi, dword ptr [0x11a060f0] */
  EDI = (r32((uint32_t)(0x11a060f0)));
  /* 11a02a81 mov dword ptr [0x11a077d0], eax */
  w32((uint32_t)(0x11a077d0), (EAX));
  /* 11a02a86 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a02a87 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11a02a89 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02a8b mov dword ptr [0x11a07ab8], ebx */
  w32((uint32_t)(0x11a07ab8), (EBX));
  /* 11a02a91 mov dword ptr [0x11a07a50], eax */
  w32((uint32_t)(0x11a07a50), (EAX));
  /* 11a02a96 call edi */
  call_ind((uint32_t)(EDI), 0x11a02a98u);
  /* 11a02a98 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11a02a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02a9c pop ebp */
  EBP = (pop32());
  /* 11a02a9d push ebp */
  push32((uint32_t)(EBP));
  /* 11a02a9e call edi */
  call_ind((uint32_t)(EDI), 0x11a02aa0u);
  /* 11a02aa0 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 11a02aa2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02aa4 call edi */
  call_ind((uint32_t)(EDI), 0x11a02aa6u);
  /* 11a02aa6 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11a02aa8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02aaa call edi */
  call_ind((uint32_t)(EDI), 0x11a02aacu);
  /* 11a02aac push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11a02aae push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02ab0 call edi */
  call_ind((uint32_t)(EDI), 0x11a02ab2u);
  /* 11a02ab2 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 11a02ab4 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a02ab6 call edi */
  call_ind((uint32_t)(EDI), 0x11a02ab8u);
  /* 11a02ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02ab9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02aba push ebx */
  push32((uint32_t)(EBX));
  /* 11a02abb call dword ptr [0x11a06168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06168))), 0x11a02ac1u);
  /* 11a02ac1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02ac4 cmp dword ptr [0x11a077d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a077d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02aca jne 0x11a02b0c */
  if (!C.zf) goto L_11a02b0c;
  /* 11a02acc mov edi, dword ptr [0x11a060c0] */
  EDI = (r32((uint32_t)(0x11a060c0)));
  /* 11a02ad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02ad4 call edi */
  call_ind((uint32_t)(EDI), 0x11a02ad6u);
  /* 11a02ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02ad7 push 0x11a079e0 */
  push32((uint32_t)(0x11a079e0u));
  /* 11a02adc call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02ae2u);
  /* 11a02ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02ae4 call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a02aeau);
  /* 11a02aea push ebp */
  push32((uint32_t)(EBP));
  /* 11a02aeb call edi */
  call_ind((uint32_t)(EDI), 0x11a02aedu);
  /* 11a02aed push ebx */
  push32((uint32_t)(EBX));
  /* 11a02aee push 0x11a079e8 */
  push32((uint32_t)(0x11a079e8u));
  /* 11a02af3 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02af9u);
  /* 11a02af9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02afa call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a02b00u);
  /* 11a02b00 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02b02 call edi */
  call_ind((uint32_t)(EDI), 0x11a02b04u);
  /* 11a02b04 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02b05 call edi */
  call_ind((uint32_t)(EDI), 0x11a02b07u);
  /* 11a02b07 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02b0a jmp 0x11a02b12 */
  goto L_11a02b12;
L_11a02b0c:;
  /* 11a02b0c mov edi, dword ptr [0x11a060c0] */
  EDI = (r32((uint32_t)(0x11a060c0)));
L_11a02b12:;
  /* 11a02b12 cmp dword ptr [0x11a077d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a077d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02b19 jne 0x11a02b37 */
  if (!C.zf) goto L_11a02b37;
  /* 11a02b1b push ebp */
  push32((uint32_t)(EBP));
  /* 11a02b1c call edi */
  call_ind((uint32_t)(EDI), 0x11a02b1eu);
  /* 11a02b1e push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b1f push 0x11a079e8 */
  push32((uint32_t)(0x11a079e8u));
  /* 11a02b24 call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a02b2au);
  /* 11a02b2a push ebp */
  push32((uint32_t)(EBP));
  /* 11a02b2b call dword ptr [0x11a060c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c4))), 0x11a02b31u);
  /* 11a02b31 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02b32 call edi */
  call_ind((uint32_t)(EDI), 0x11a02b34u);
  /* 11a02b34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02b37:;
  /* 11a02b37 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b38 push 0x11a07aa8 */
  push32((uint32_t)(0x11a07aa8u));
  /* 11a02b3d push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b3e call esi */
  call_ind((uint32_t)(ESI), 0x11a02b40u);
  /* 11a02b40 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b41 push 0x11a07a08 */
  push32((uint32_t)(0x11a07a08u));
  /* 11a02b46 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b47 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b49u);
  /* 11a02b49 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b4a push 0x11a079d0 */
  push32((uint32_t)(0x11a079d0u));
  /* 11a02b4f push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b50 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b52u);
  /* 11a02b52 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b53 push 0x11a07af0 */
  push32((uint32_t)(0x11a07af0u));
  /* 11a02b58 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b59 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b5bu);
  /* 11a02b5b push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b5c push 0x11a079c0 */
  push32((uint32_t)(0x11a079c0u));
  /* 11a02b61 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b62 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b64u);
  /* 11a02b64 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b65 push 0x11a07b18 */
  push32((uint32_t)(0x11a07b18u));
  /* 11a02b6a push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b6b call esi */
  call_ind((uint32_t)(ESI), 0x11a02b6du);
  /* 11a02b6d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02b70 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b71 push 0x11a07840 */
  push32((uint32_t)(0x11a07840u));
  /* 11a02b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b77 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b79u);
  /* 11a02b79 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b7a push 0x11a07ac8 */
  push32((uint32_t)(0x11a07ac8u));
  /* 11a02b7f push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b80 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b82u);
  /* 11a02b82 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b83 push 0x11a07b20 */
  push32((uint32_t)(0x11a07b20u));
  /* 11a02b88 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b89 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b8bu);
  /* 11a02b8b push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b8c push 0x11a07a30 */
  push32((uint32_t)(0x11a07a30u));
  /* 11a02b91 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b92 call esi */
  call_ind((uint32_t)(ESI), 0x11a02b94u);
  /* 11a02b94 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b95 push 0x11a07ae8 */
  push32((uint32_t)(0x11a07ae8u));
  /* 11a02b9a push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b9b call esi */
  call_ind((uint32_t)(ESI), 0x11a02b9du);
  /* 11a02b9d push ebx */
  push32((uint32_t)(EBX));
  /* 11a02b9e push 0x11a07ae0 */
  push32((uint32_t)(0x11a07ae0u));
  /* 11a02ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02ba4 call esi */
  call_ind((uint32_t)(ESI), 0x11a02ba6u);
  /* 11a02ba6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02baa push 0x11a07a00 */
  push32((uint32_t)(0x11a07a00u));
  /* 11a02baf push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bb0 call esi */
  call_ind((uint32_t)(ESI), 0x11a02bb2u);
  /* 11a02bb2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bb3 push 0x11a079b0 */
  push32((uint32_t)(0x11a079b0u));
  /* 11a02bb8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bb9 call esi */
  call_ind((uint32_t)(ESI), 0x11a02bbbu);
  /* 11a02bbb push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bbc push 0x11a079b8 */
  push32((uint32_t)(0x11a079b8u));
  /* 11a02bc1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bc2 call esi */
  call_ind((uint32_t)(ESI), 0x11a02bc4u);
  /* 11a02bc4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bc5 push 0x11a07af8 */
  push32((uint32_t)(0x11a07af8u));
  /* 11a02bca push ebx */
  push32((uint32_t)(EBX));
  /* 11a02bcb call esi */
  call_ind((uint32_t)(ESI), 0x11a02bcdu);
  /* 11a02bcd mov edi, dword ptr [0x11a060f4] */
  EDI = (r32((uint32_t)(0x11a060f4)));
  /* 11a02bd3 mov ebp, 0x11a072e8 */
  EBP = (0x11a072e8u);
  /* 11a02bd8 push 0x11a0747c */
  push32((uint32_t)(0x11a0747cu));
  /* 11a02bdd push ebp */
  push32((uint32_t)(EBP));
  /* 11a02bde call edi */
  call_ind((uint32_t)(EDI), 0x11a02be0u);
  /* 11a02be0 push 0x11a07474 */
  push32((uint32_t)(0x11a07474u));
  /* 11a02be5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02be6 call edi */
  call_ind((uint32_t)(EDI), 0x11a02be8u);
  /* 11a02be8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02beb push 0x11a0746c */
  push32((uint32_t)(0x11a0746cu));
  /* 11a02bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02bf1 call edi */
  call_ind((uint32_t)(EDI), 0x11a02bf3u);
  /* 11a02bf3 push 0x11a07464 */
  push32((uint32_t)(0x11a07464u));
  /* 11a02bf8 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02bf9 call edi */
  call_ind((uint32_t)(EDI), 0x11a02bfbu);
  /* 11a02bfb push 0x11a0745c */
  push32((uint32_t)(0x11a0745cu));
  /* 11a02c00 push 0x11a072e0 */
  push32((uint32_t)(0x11a072e0u));
  /* 11a02c05 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c07u);
  /* 11a02c07 push 0x11a07454 */
  push32((uint32_t)(0x11a07454u));
  /* 11a02c0c push 0x11a072d8 */
  push32((uint32_t)(0x11a072d8u));
  /* 11a02c11 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c13u);
  /* 11a02c13 push 0x11a0747c */
  push32((uint32_t)(0x11a0747cu));
  /* 11a02c18 push 0x11a07064 */
  push32((uint32_t)(0x11a07064u));
  /* 11a02c1d call edi */
  call_ind((uint32_t)(EDI), 0x11a02c1fu);
  /* 11a02c1f push 0x11a0747c */
  push32((uint32_t)(0x11a0747cu));
  /* 11a02c24 push 0x11a07138 */
  push32((uint32_t)(0x11a07138u));
  /* 11a02c29 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c2bu);
  /* 11a02c2b mov eax, dword ptr [0x11a077d0] */
  EAX = (r32((uint32_t)(0x11a077d0)));
  /* 11a02c30 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02c33 mov ecx, eax */
  ECX = (EAX);
  /* 11a02c35 sub ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a02c37 je 0x11a02c3e */
  if (C.zf) goto L_11a02c3e;
  /* 11a02c39 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a02c3a je 0x11a02c69 */
  if (C.zf) goto L_11a02c69;
  /* 11a02c3c jmp 0x11a02ca1 */
  goto L_11a02ca1;
L_11a02c3e:;
  /* 11a02c3e push 0x11a0744c */
  push32((uint32_t)(0x11a0744cu));
  /* 11a02c43 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c44 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c46u);
  /* 11a02c46 push 0x11a07444 */
  push32((uint32_t)(0x11a07444u));
  /* 11a02c4b push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c4c call edi */
  call_ind((uint32_t)(EDI), 0x11a02c4eu);
  /* 11a02c4e push 0x11a0743c */
  push32((uint32_t)(0x11a0743cu));
  /* 11a02c53 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c54 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c56u);
  /* 11a02c56 push 0x11a07434 */
  push32((uint32_t)(0x11a07434u));
  /* 11a02c5b push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c5c call edi */
  call_ind((uint32_t)(EDI), 0x11a02c5eu);
  /* 11a02c5e push 0x11a0742c */
  push32((uint32_t)(0x11a0742cu));
  /* 11a02c63 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c64 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c66u);
  /* 11a02c66 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02c69:;
  /* 11a02c69 push 0x11a07424 */
  push32((uint32_t)(0x11a07424u));
  /* 11a02c6e push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c6f call edi */
  call_ind((uint32_t)(EDI), 0x11a02c71u);
  /* 11a02c71 push 0x11a0741c */
  push32((uint32_t)(0x11a0741cu));
  /* 11a02c76 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c77 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c79u);
  /* 11a02c79 push 0x11a07414 */
  push32((uint32_t)(0x11a07414u));
  /* 11a02c7e push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c7f call edi */
  call_ind((uint32_t)(EDI), 0x11a02c81u);
  /* 11a02c81 push 0x11a0740c */
  push32((uint32_t)(0x11a0740cu));
  /* 11a02c86 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c87 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c89u);
  /* 11a02c89 push 0x11a07404 */
  push32((uint32_t)(0x11a07404u));
  /* 11a02c8e push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c8f call edi */
  call_ind((uint32_t)(EDI), 0x11a02c91u);
  /* 11a02c91 push 0x11a073fc */
  push32((uint32_t)(0x11a073fcu));
  /* 11a02c96 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02c97 call edi */
  call_ind((uint32_t)(EDI), 0x11a02c99u);
  /* 11a02c99 mov eax, dword ptr [0x11a077d0] */
  EAX = (r32((uint32_t)(0x11a077d0)));
  /* 11a02c9e add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02ca1:;
  /* 11a02ca1 mov ecx, eax */
  ECX = (EAX);
  /* 11a02ca3 mov ebp, 0x11a071c4 */
  EBP = (0x11a071c4u);
  /* 11a02ca8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a02ca9 je 0x11a02cef */
  if (C.zf) goto L_11a02cef;
  /* 11a02cab dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a02cac je 0x11a02cc4 */
  if (C.zf) goto L_11a02cc4;
  /* 11a02cae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a02caf jne 0x11a02cfe */
  if (!C.zf) goto L_11a02cfe;
  /* 11a02cb1 push 0x11a073f4 */
  push32((uint32_t)(0x11a073f4u));
  /* 11a02cb6 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02cb7 call edi */
  call_ind((uint32_t)(EDI), 0x11a02cb9u);
  /* 11a02cb9 push 0x11a073ec */
  push32((uint32_t)(0x11a073ecu));
  /* 11a02cbe push ebp */
  push32((uint32_t)(EBP));
  /* 11a02cbf call edi */
  call_ind((uint32_t)(EDI), 0x11a02cc1u);
  /* 11a02cc1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02cc4:;
  /* 11a02cc4 push 0x11a073e4 */
  push32((uint32_t)(0x11a073e4u));
  /* 11a02cc9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02cca call edi */
  call_ind((uint32_t)(EDI), 0x11a02cccu);
  /* 11a02ccc push 0x11a073dc */
  push32((uint32_t)(0x11a073dcu));
  /* 11a02cd1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02cd2 call edi */
  call_ind((uint32_t)(EDI), 0x11a02cd4u);
  /* 11a02cd4 push 0x11a073d4 */
  push32((uint32_t)(0x11a073d4u));
  /* 11a02cd9 push 0x11a072e0 */
  push32((uint32_t)(0x11a072e0u));
  /* 11a02cde call edi */
  call_ind((uint32_t)(EDI), 0x11a02ce0u);
  /* 11a02ce0 push 0x11a073cc */
  push32((uint32_t)(0x11a073ccu));
  /* 11a02ce5 push 0x11a072d8 */
  push32((uint32_t)(0x11a072d8u));
  /* 11a02cea call edi */
  call_ind((uint32_t)(EDI), 0x11a02cecu);
  /* 11a02cec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02cef:;
  /* 11a02cef push 0x11a073c4 */
  push32((uint32_t)(0x11a073c4u));
  /* 11a02cf4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02cf5 call edi */
  call_ind((uint32_t)(EDI), 0x11a02cf7u);
  /* 11a02cf7 mov eax, dword ptr [0x11a077d0] */
  EAX = (r32((uint32_t)(0x11a077d0)));
  /* 11a02cfc pop ecx */
  ECX = (pop32());
  /* 11a02cfd pop ecx */
  ECX = (pop32());
L_11a02cfe:;
  /* 11a02cfe lea ecx, [eax + eax*2 + 5] */
  ECX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 11a02d02 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11a02d04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a02d06 mov edi, 0x11a07a68 */
  EDI = (0x11a07a68u);
  /* 11a02d0b jle 0x11a02d32 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02d32;
L_11a02d0d:;
  /* 11a02d0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02d0f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02d11 push edi */
  push32((uint32_t)(EDI));
  /* 11a02d12 push 0x11a077b8 */
  push32((uint32_t)(0x11a077b8u));
  /* 11a02d17 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a02d1c call 0x11a01154 */
  push32(0x11a02d21u); f_11a01154();
  /* 11a02d21 mov eax, dword ptr [0x11a077d0] */
  EAX = (r32((uint32_t)(0x11a077d0)));
  /* 11a02d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02d29 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a02d2a lea ecx, [eax + eax*2 + 5] */
  ECX = ((uint32_t)(EAX + EAX*2 + 0x5));
  /* 11a02d2e cmp ebp, ecx */
  { uint32_t _a=(EBP),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02d30 jl 0x11a02d0d */
  if ((C.sf!=C.of)) goto L_11a02d0d;
L_11a02d32:;
  /* 11a02d32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02d35 mov ebp, 0x11a07a70 */
  EBP = (0x11a07a70u);
  /* 11a02d3a jle 0x11a02d58 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02d58;
  /* 11a02d3c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02d3e push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02d41 push 0x11a07800 */
  push32((uint32_t)(0x11a07800u));
  /* 11a02d46 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a02d4b call 0x11a01154 */
  push32(0x11a02d50u); f_11a01154();
  /* 11a02d50 mov eax, dword ptr [0x11a077d0] */
  EAX = (r32((uint32_t)(0x11a077d0)));
  /* 11a02d55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02d58:;
  /* 11a02d58 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02d5b jle 0x11a02d74 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02d74;
  /* 11a02d5d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02d5f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02d61 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02d62 push 0x11a07800 */
  push32((uint32_t)(0x11a07800u));
  /* 11a02d67 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a02d6c call 0x11a01154 */
  push32(0x11a02d71u); f_11a01154();
  /* 11a02d71 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02d74:;
  /* 11a02d74 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02d76 push edi */
  push32((uint32_t)(EDI));
  /* 11a02d77 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a02d7c call 0x11a0113d */
  push32(0x11a02d81u); f_11a0113d();
  /* 11a02d81 push dword ptr [0x11a077d0] */
  push32((uint32_t)(r32((uint32_t)(0x11a077d0))));
  /* 11a02d87 mov edi, dword ptr [0x11a060ec] */
  EDI = (r32((uint32_t)(0x11a060ec)));
  /* 11a02d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02d8f pop ebp */
  EBP = (pop32());
  /* 11a02d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02d91 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02d94 push 0x11a073b8 */
  push32((uint32_t)(0x11a073b8u));
  /* 11a02d99 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02d9a call edi */
  call_ind((uint32_t)(EDI), 0x11a02d9cu);
  /* 11a02d9c push dword ptr [0x11a077d0] */
  push32((uint32_t)(r32((uint32_t)(0x11a077d0))));
  /* 11a02da2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02da3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02da4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02da6 push 0x11a073ac */
  push32((uint32_t)(0x11a073acu));
  /* 11a02dab push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02dad call edi */
  call_ind((uint32_t)(EDI), 0x11a02dafu);
  /* 11a02daf mov edi, dword ptr [0x11a060c8] */
  EDI = (r32((uint32_t)(0x11a060c8)));
  /* 11a02db5 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11a02dba push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02dbc call edi */
  call_ind((uint32_t)(EDI), 0x11a02dbeu);
  /* 11a02dbe add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02dc1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02dc2 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a02dc4 pop ebp */
  EBP = (pop32());
  /* 11a02dc5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02dc6 call edi */
  call_ind((uint32_t)(EDI), 0x11a02dc8u);
  /* 11a02dc8 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11a02dcd push 6 */
  push32((uint32_t)(0x6u));
  /* 11a02dcf call edi */
  call_ind((uint32_t)(EDI), 0x11a02dd1u);
  /* 11a02dd1 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11a02dd6 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a02dd8 call edi */
  call_ind((uint32_t)(EDI), 0x11a02ddau);
  /* 11a02dda push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11a02ddf push 8 */
  push32((uint32_t)(0x8u));
  /* 11a02de1 call edi */
  call_ind((uint32_t)(EDI), 0x11a02de3u);
  /* 11a02de3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02de4 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a02de6 call edi */
  call_ind((uint32_t)(EDI), 0x11a02de8u);
  /* 11a02de8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a02dea push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a02dec call edi */
  call_ind((uint32_t)(EDI), 0x11a02deeu);
  /* 11a02dee push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a02df0 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11a02df2 call edi */
  call_ind((uint32_t)(EDI), 0x11a02df4u);
  /* 11a02df4 mov edi, dword ptr [0x11a06144] */
  EDI = (r32((uint32_t)(0x11a06144)));
  /* 11a02dfa mov dword ptr [esp + 0x48], ebp */
  w32((uint32_t)(ESP + 0x48), (EBP));
  /* 11a02dfe add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02e01 mov ebp, 0x11a07900 */
  EBP = (0x11a07900u);
L_11a02e06:;
  /* 11a02e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e07 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a02e0c push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a02e11 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a02e16 call edi */
  call_ind((uint32_t)(EDI), 0x11a02e18u);
  /* 11a02e18 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e19 push 0x11a07830 */
  push32((uint32_t)(0x11a07830u));
  /* 11a02e1e push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a02e23 push 0x11a078a8 */
  push32((uint32_t)(0x11a078a8u));
  /* 11a02e28 call edi */
  call_ind((uint32_t)(EDI), 0x11a02e2au);
  /* 11a02e2a push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e2b push ebp */
  push32((uint32_t)(EBP));
  /* 11a02e2c push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a02e31 push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a02e36 call edi */
  call_ind((uint32_t)(EDI), 0x11a02e38u);
  /* 11a02e38 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e39 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02e3a push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a02e3f push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a02e44 call edi */
  call_ind((uint32_t)(EDI), 0x11a02e46u);
  /* 11a02e46 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02e49 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e4a push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a02e4f push 0x11a078c0 */
  push32((uint32_t)(0x11a078c0u));
  /* 11a02e54 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a02e59 call edi */
  call_ind((uint32_t)(EDI), 0x11a02e5bu);
  /* 11a02e5b push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e5c push 0x11a07838 */
  push32((uint32_t)(0x11a07838u));
  /* 11a02e61 push 0x11a079c8 */
  push32((uint32_t)(0x11a079c8u));
  /* 11a02e66 push 0x11a078a0 */
  push32((uint32_t)(0x11a078a0u));
  /* 11a02e6b call edi */
  call_ind((uint32_t)(EDI), 0x11a02e6du);
  /* 11a02e6d push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e6e push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a02e73 push 0x11a07a18 */
  push32((uint32_t)(0x11a07a18u));
  /* 11a02e78 push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a02e7d call edi */
  call_ind((uint32_t)(EDI), 0x11a02e7fu);
  /* 11a02e7f push ebx */
  push32((uint32_t)(EBX));
  /* 11a02e80 push 0x11a07908 */
  push32((uint32_t)(0x11a07908u));
  /* 11a02e85 push 0x11a079f0 */
  push32((uint32_t)(0x11a079f0u));
  /* 11a02e8a push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a02e8f call edi */
  call_ind((uint32_t)(EDI), 0x11a02e91u);
  /* 11a02e91 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02e94 dec dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))-1; w32((uint32_t)(ESP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11a02e98 jne 0x11a02e06 */
  if (!C.zf) goto L_11a02e06;
  /* 11a02e9e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02ea0 pop ebp */
  EBP = (pop32());
L_11a02ea1:;
  /* 11a02ea1 cmp dword ptr [0x11a077d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a077d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02ea7 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
  /* 11a02eab jle 0x11a02ed5 */
  if ((C.zf||C.sf!=C.of)) goto L_11a02ed5;
L_11a02ead:;
  /* 11a02ead xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a02eaf:;
  /* 11a02eaf push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 11a02eb4 push edi */
  push32((uint32_t)(EDI));
  /* 11a02eb5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a02eb6 call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a02ebcu);
  /* 11a02ebc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02ebf inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a02ec0 cmp edi, 5 */
  { uint32_t _a=(EDI),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02ec3 jle 0x11a02eaf */
  if ((C.zf||C.sf!=C.of)) goto L_11a02eaf;
  /* 11a02ec5 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a02ec9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a02ecd cmp eax, dword ptr [0x11a077d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a077d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02ed3 jl 0x11a02ead */
  if ((C.sf!=C.of)) goto L_11a02ead;
L_11a02ed5:;
  /* 11a02ed5 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a02ed6 cmp ebp, 3 */
  { uint32_t _a=(EBP),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a02ed9 jl 0x11a02ea1 */
  if ((C.sf!=C.of)) goto L_11a02ea1;
  /* 11a02edb mov edi, dword ptr [0x11a060fc] */
  EDI = (r32((uint32_t)(0x11a060fc)));
  /* 11a02ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02ee3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02ee5 push 0x11a07918 */
  push32((uint32_t)(0x11a07918u));
  /* 11a02eea call edi */
  call_ind((uint32_t)(EDI), 0x11a02eecu);
  /* 11a02eec push 2 */
  push32((uint32_t)(0x2u));
  /* 11a02eee push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02ef0 push 0x11a07920 */
  push32((uint32_t)(0x11a07920u));
  /* 11a02ef5 call edi */
  call_ind((uint32_t)(EDI), 0x11a02ef7u);
  /* 11a02ef7 mov edi, dword ptr [0x11a06100] */
  EDI = (r32((uint32_t)(0x11a06100)));
  /* 11a02efd push 0x11a073a4 */
  push32((uint32_t)(0x11a073a4u));
  /* 11a02f02 call edi */
  call_ind((uint32_t)(EDI), 0x11a02f04u);
  /* 11a02f04 push 0x11a0739c */
  push32((uint32_t)(0x11a0739cu));
  /* 11a02f09 call edi */
  call_ind((uint32_t)(EDI), 0x11a02f0bu);
  /* 11a02f0b push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f0c push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f0d call dword ptr [0x11a060d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060d0))), 0x11a02f13u);
  /* 11a02f13 mov ebp, dword ptr [0x11a060b4] */
  EBP = (r32((uint32_t)(0x11a060b4)));
  /* 11a02f19 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02f1c:;
  /* 11a02f1c push 8 */
  push32((uint32_t)(0x8u));
  /* 11a02f1e call ebp */
  call_ind((uint32_t)(EBP), 0x11a02f20u);
  /* 11a02f20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02f22 pop ecx */
  ECX = (pop32());
  /* 11a02f23 je 0x11a02f53 */
  if (C.zf) goto L_11a02f53;
  /* 11a02f25 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a02f27 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a02f2du);
  /* 11a02f2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02f2f pop ecx */
  ECX = (pop32());
  /* 11a02f30 je 0x11a02f53 */
  if (C.zf) goto L_11a02f53;
  /* 11a02f32 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02f34 push 0x11a07960 */
  push32((uint32_t)(0x11a07960u));
  /* 11a02f39 push 0x11a07828 */
  push32((uint32_t)(0x11a07828u));
  /* 11a02f3e call 0x11a0113d */
  push32(0x11a02f43u); f_11a0113d();
  /* 11a02f43 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a02f49 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f4a push 8 */
  push32((uint32_t)(0x8u));
  /* 11a02f4c call edi */
  call_ind((uint32_t)(EDI), 0x11a02f4eu);
  /* 11a02f4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02f51 jmp 0x11a02f59 */
  goto L_11a02f59;
L_11a02f53:;
  /* 11a02f53 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
L_11a02f59:;
  /* 11a02f59 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f5a push 0x11a07b20 */
  push32((uint32_t)(0x11a07b20u));
  /* 11a02f5f call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a02f65u);
  /* 11a02f65 pop ecx */
  ECX = (pop32());
  /* 11a02f66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02f68 pop ecx */
  ECX = (pop32());
  /* 11a02f69 jne 0x11a02f6f */
  if (!C.zf) goto L_11a02f6f;
  /* 11a02f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02f6d jmp 0x11a02f70 */
  goto L_11a02f70;
L_11a02f6f:;
  /* 11a02f6f push ebx */
  push32((uint32_t)(EBX));
L_11a02f70:;
  /* 11a02f70 push 0x11a07b20 */
  push32((uint32_t)(0x11a07b20u));
  /* 11a02f75 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f76 call esi */
  call_ind((uint32_t)(ESI), 0x11a02f78u);
  /* 11a02f78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02f7b push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f7c push 0x11a07a30 */
  push32((uint32_t)(0x11a07a30u));
  /* 11a02f81 call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a02f87u);
  /* 11a02f87 pop ecx */
  ECX = (pop32());
  /* 11a02f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a02f8a pop ecx */
  ECX = (pop32());
  /* 11a02f8b jne 0x11a02f91 */
  if (!C.zf) goto L_11a02f91;
  /* 11a02f8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a02f8f jmp 0x11a02f92 */
  goto L_11a02f92;
L_11a02f91:;
  /* 11a02f91 push ebx */
  push32((uint32_t)(EBX));
L_11a02f92:;
  /* 11a02f92 push 0x11a07a30 */
  push32((uint32_t)(0x11a07a30u));
  /* 11a02f97 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02f98 call esi */
  call_ind((uint32_t)(ESI), 0x11a02f9au);
  /* 11a02f9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a02f9d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02f9f call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a02fa5u);
  /* 11a02fa5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02fa7 pop ecx */
  ECX = (pop32());
  /* 11a02fa8 mov esi, 0x11a07a80 */
  ESI = (0x11a07a80u);
  /* 11a02fad je 0x11a02ff3 */
  if (C.zf) goto L_11a02ff3;
  /* 11a02faf push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02fb1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02fb3u);
  /* 11a02fb3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02fb5 pop ecx */
  ECX = (pop32());
  /* 11a02fb6 je 0x11a02ff3 */
  if (C.zf) goto L_11a02ff3;
  /* 11a02fb8 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11a02fba push 6 */
  push32((uint32_t)(0x6u));
  /* 11a02fbc push 0x11a07940 */
  push32((uint32_t)(0x11a07940u));
  /* 11a02fc1 push 0x11a078b8 */
  push32((uint32_t)(0x11a078b8u));
  /* 11a02fc6 push esi */
  push32((uint32_t)(ESI));
  /* 11a02fc7 call 0x11a01154 */
  push32(0x11a02fccu); f_11a01154();
  /* 11a02fcc push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a02fce push 0x11a07968 */
  push32((uint32_t)(0x11a07968u));
  /* 11a02fd3 push esi */
  push32((uint32_t)(ESI));
  /* 11a02fd4 call 0x11a0113d */
  push32(0x11a02fd9u); f_11a0113d();
  /* 11a02fd9 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11a02fde push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02fe0 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a02fe6u);
  /* 11a02fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a02fe7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02fe9 call edi */
  call_ind((uint32_t)(EDI), 0x11a02febu);
  /* 11a02feb push ebx */
  push32((uint32_t)(EBX));
  /* 11a02fec push 4 */
  push32((uint32_t)(0x4u));
  /* 11a02fee call edi */
  call_ind((uint32_t)(EDI), 0x11a02ff0u);
  /* 11a02ff0 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a02ff3:;
  /* 11a02ff3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a02ff5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a02ff7u);
  /* 11a02ff7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a02ff9 pop ecx */
  ECX = (pop32());
  /* 11a02ffa jne 0x11a03030 */
  if (!C.zf) goto L_11a03030;
  /* 11a02ffc push ebx */
  push32((uint32_t)(EBX));
  /* 11a02ffd push esi */
  push32((uint32_t)(ESI));
  /* 11a02ffe call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a03004u);
  /* 11a03004 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a03009 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a0300b push 0x11a07b00 */
  push32((uint32_t)(0x11a07b00u));
  /* 11a03010 call dword ptr [0x11a06108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06108))), 0x11a03016u);
  /* 11a03016 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03018 call dword ptr [0x11a0610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0610c))), 0x11a0301eu);
  /* 11a0301e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03020 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a03022 push 0x11a07b00 */
  push32((uint32_t)(0x11a07b00u));
  /* 11a03027 call dword ptr [0x11a060fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060fc))), 0x11a0302du);
  /* 11a0302d add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a03030:;
  /* 11a03030 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03032 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a03038u);
  /* 11a03038 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0303a pop ecx */
  ECX = (pop32());
  /* 11a0303b je 0x11a0307e */
  if (C.zf) goto L_11a0307e;
  /* 11a0303d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a0303f call ebp */
  call_ind((uint32_t)(EBP), 0x11a03041u);
  /* 11a03041 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03043 pop ecx */
  ECX = (pop32());
  /* 11a03044 jne 0x11a0307e */
  if (!C.zf) goto L_11a0307e;
  /* 11a03046 push esi */
  push32((uint32_t)(ESI));
  /* 11a03047 push 0x11a07940 */
  push32((uint32_t)(0x11a07940u));
  /* 11a0304c call dword ptr [0x11a06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06104))), 0x11a03052u);
  /* 11a03052 pop ecx */
  ECX = (pop32());
  /* 11a03053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03055 pop ecx */
  ECX = (pop32());
  /* 11a03056 jle 0x11a0307e */
  if ((C.zf||C.sf!=C.of)) goto L_11a0307e;
  /* 11a03058 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03059 push esi */
  push32((uint32_t)(ESI));
  /* 11a0305a call dword ptr [0x11a06150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06150))), 0x11a03060u);
  /* 11a03060 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a03062 call dword ptr [0x11a06114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06114))), 0x11a03068u);
  /* 11a03068 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a0306d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a0306f call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a03075u);
  /* 11a03075 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a03077 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03079 call edi */
  call_ind((uint32_t)(EDI), 0x11a0307bu);
  /* 11a0307b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0307e:;
  /* 11a0307e push esi */
  push32((uint32_t)(ESI));
  /* 11a0307f push 0x11a07968 */
  push32((uint32_t)(0x11a07968u));
  /* 11a03084 call dword ptr [0x11a06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06104))), 0x11a0308au);
  /* 11a0308a pop ecx */
  ECX = (pop32());
  /* 11a0308b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0308d pop ecx */
  ECX = (pop32());
  /* 11a0308e jle 0x11a030b1 */
  if ((C.zf||C.sf!=C.of)) goto L_11a030b1;
  /* 11a03090 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a03092 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03094u);
  /* 11a03094 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03096 pop ecx */
  ECX = (pop32());
  /* 11a03097 je 0x11a030a1 */
  if (C.zf) goto L_11a030a1;
  /* 11a03099 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0309a push 0x11a07940 */
  push32((uint32_t)(0x11a07940u));
  /* 11a0309f jmp 0x11a030a8 */
  goto L_11a030a8;
L_11a030a1:;
  /* 11a030a1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a030a3 push 0x11a07950 */
  push32((uint32_t)(0x11a07950u));
L_11a030a8:;
  /* 11a030a8 push esi */
  push32((uint32_t)(ESI));
  /* 11a030a9 call 0x11a0113d */
  push32(0x11a030aeu); f_11a0113d();
  /* 11a030ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a030b1:;
  /* 11a030b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a030b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a030b5u);
  /* 11a030b5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a030b7 pop ecx */
  ECX = (pop32());
  /* 11a030b8 jne 0x11a030e2 */
  if (!C.zf) goto L_11a030e2;
  /* 11a030ba push esi */
  push32((uint32_t)(ESI));
  /* 11a030bb push 0x11a07950 */
  push32((uint32_t)(0x11a07950u));
  /* 11a030c0 call dword ptr [0x11a06104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06104))), 0x11a030c6u);
  /* 11a030c6 pop ecx */
  ECX = (pop32());
  /* 11a030c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a030c9 pop ecx */
  ECX = (pop32());
  /* 11a030ca jle 0x11a030e2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a030e2;
  /* 11a030cc push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11a030d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a030d3 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a030d9u);
  /* 11a030d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a030db push 4 */
  push32((uint32_t)(0x4u));
  /* 11a030dd call edi */
  call_ind((uint32_t)(EDI), 0x11a030dfu);
  /* 11a030df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a030e2:;
  /* 11a030e2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a030e4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a030e6u);
  /* 11a030e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a030e8 pop ecx */
  ECX = (pop32());
  /* 11a030e9 je 0x11a0314c */
  if (C.zf) goto L_11a0314c;
  /* 11a030eb push 4 */
  push32((uint32_t)(0x4u));
  /* 11a030ed call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a030f3u);
  /* 11a030f3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a030f5 pop ecx */
  ECX = (pop32());
  /* 11a030f6 je 0x11a0314c */
  if (C.zf) goto L_11a0314c;
  /* 11a030f8 mov edi, 0x4e20 */
  EDI = (0x4e20u);
  /* 11a030fd push edi */
  push32((uint32_t)(EDI));
  /* 11a030fe push ebx */
  push32((uint32_t)(EBX));
  /* 11a030ff push ebx */
  push32((uint32_t)(EBX));
  /* 11a03100 call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a03106u);
  /* 11a03106 push edi */
  push32((uint32_t)(EDI));
  /* 11a03107 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03109 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0310a call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a03110u);
  /* 11a03110 push edi */
  push32((uint32_t)(EDI));
  /* 11a03111 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a03113 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03114 call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a0311au);
  /* 11a0311a push edi */
  push32((uint32_t)(EDI));
  /* 11a0311b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0311d push ebx */
  push32((uint32_t)(EBX));
  /* 11a0311e call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a03124u);
  /* 11a03124 push edi */
  push32((uint32_t)(EDI));
  /* 11a03125 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a03127 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03128 call dword ptr [0x11a06164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06164))), 0x11a0312eu);
  /* 11a0312e push ebx */
  push32((uint32_t)(EBX));
  /* 11a0312f push 0x11a07968 */
  push32((uint32_t)(0x11a07968u));
  /* 11a03134 push esi */
  push32((uint32_t)(ESI));
  /* 11a03135 call 0x11a0113d */
  push32(0x11a0313au); f_11a0113d();
  /* 11a0313a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0313d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0313f call dword ptr [0x11a060bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060bc))), 0x11a03145u);
  /* 11a03145 mov edi, dword ptr [0x11a060d0] */
  EDI = (r32((uint32_t)(0x11a060d0)));
  /* 11a0314b pop ecx */
  ECX = (pop32());
L_11a0314c:;
  /* 11a0314c push 3 */
  push32((uint32_t)(0x3u));
  /* 11a0314e call ebp */
  call_ind((uint32_t)(EBP), 0x11a03150u);
  /* 11a03150 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03152 pop ecx */
  ECX = (pop32());
  /* 11a03153 jne 0x11a03188 */
  if (!C.zf) goto L_11a03188;
  /* 11a03155 push esi */
  push32((uint32_t)(ESI));
  /* 11a03156 call dword ptr [0x11a06134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06134))), 0x11a0315cu);
  /* 11a0315c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0315e pop ecx */
  ECX = (pop32());
  /* 11a0315f jne 0x11a03188 */
  if (!C.zf) goto L_11a03188;
  /* 11a03161 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a03163 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03165u);
  /* 11a03165 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03167 pop ecx */
  ECX = (pop32());
  /* 11a03168 je 0x11a03171 */
  if (C.zf) goto L_11a03171;
  /* 11a0316a push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11a0316f jmp 0x11a03176 */
  goto L_11a03176;
L_11a03171:;
  /* 11a03171 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
L_11a03176:;
  /* 11a03176 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03178 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a0317eu);
  /* 11a0317e pop ecx */
  ECX = (pop32());
  /* 11a0317f pop ecx */
  ECX = (pop32());
  /* 11a03180 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a03182 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a03184 call edi */
  call_ind((uint32_t)(EDI), 0x11a03186u);
  /* 11a03186 pop ecx */
  ECX = (pop32());
  /* 11a03187 pop ecx */
  ECX = (pop32());
L_11a03188:;
  /* 11a03188 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a0318a call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a03190u);
  /* 11a03190 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03192 pop ecx */
  ECX = (pop32());
  /* 11a03193 mov esi, 0x11a078d0 */
  ESI = (0x11a078d0u);
  /* 11a03198 je 0x11a03274 */
  if (C.zf) goto L_11a03274;
  /* 11a0319e mov eax, dword ptr [0x11a07ab8] */
  EAX = (r32((uint32_t)(0x11a07ab8)));
  /* 11a031a3 cmp eax, dword ptr [0x11a07a50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a07a50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a031a9 jge 0x11a03254 */
  if ((C.sf==C.of)) goto L_11a03254;
  /* 11a031af push 5 */
  push32((uint32_t)(0x5u));
  /* 11a031b1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a031b3u);
  /* 11a031b3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a031b5 pop ecx */
  ECX = (pop32());
  /* 11a031b6 je 0x11a031d0 */
  if (C.zf) goto L_11a031d0;
  /* 11a031b8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a031b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a031bb push 0x11a07978 */
  push32((uint32_t)(0x11a07978u));
  /* 11a031c0 push 0x11a077b8 */
  push32((uint32_t)(0x11a077b8u));
  /* 11a031c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a031c6 call 0x11a01154 */
  push32(0x11a031cbu); f_11a01154();
  /* 11a031cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a031ce jmp 0x11a03220 */
  goto L_11a03220;
L_11a031d0:;
  /* 11a031d0 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a031d2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a031d4u);
  /* 11a031d4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a031d6 pop ecx */
  ECX = (pop32());
  /* 11a031d7 je 0x11a031e3 */
  if (C.zf) goto L_11a031e3;
  /* 11a031d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a031da push 5 */
  push32((uint32_t)(0x5u));
  /* 11a031dc push 0x11a07980 */
  push32((uint32_t)(0x11a07980u));
  /* 11a031e1 jmp 0x11a03200 */
  goto L_11a03200;
L_11a031e3:;
  /* 11a031e3 cmp dword ptr [0x11a077d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a077d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a031ea push ebx */
  push32((uint32_t)(EBX));
  /* 11a031eb push 5 */
  push32((uint32_t)(0x5u));
  /* 11a031ed jle 0x11a031fb */
  if ((C.zf||C.sf!=C.of)) goto L_11a031fb;
  /* 11a031ef push 0x11a07980 */
  push32((uint32_t)(0x11a07980u));
  /* 11a031f4 push 0x11a07800 */
  push32((uint32_t)(0x11a07800u));
  /* 11a031f9 jmp 0x11a03205 */
  goto L_11a03205;
L_11a031fb:;
  /* 11a031fb push 0x11a07978 */
  push32((uint32_t)(0x11a07978u));
L_11a03200:;
  /* 11a03200 push 0x11a077b8 */
  push32((uint32_t)(0x11a077b8u));
L_11a03205:;
  /* 11a03205 push esi */
  push32((uint32_t)(ESI));
  /* 11a03206 call 0x11a01154 */
  push32(0x11a0320bu); f_11a01154();
  /* 11a0320b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0320e push 6 */
  push32((uint32_t)(0x6u));
  /* 11a03210 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03212u);
  /* 11a03212 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11a03214 sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a03216 inc al */
  { uint32_t _r=(AL)+1; AL = (_r); fl_inc(_r,8); }
  /* 11a03218 push eax */
  push32((uint32_t)(EAX));
  /* 11a03219 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a0321b call edi */
  call_ind((uint32_t)(EDI), 0x11a0321du);
  /* 11a0321d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a03220:;
  /* 11a03220 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a03222 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03224u);
  /* 11a03224 neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11a03226 sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a03228 inc al */
  { uint32_t _r=(AL)+1; AL = (_r); fl_inc(_r,8); }
  /* 11a0322a push eax */
  push32((uint32_t)(EAX));
  /* 11a0322b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a0322d call edi */
  call_ind((uint32_t)(EDI), 0x11a0322fu);
  /* 11a0322f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a03231 push 0x11a07b00 */
  push32((uint32_t)(0x11a07b00u));
  /* 11a03236 push esi */
  push32((uint32_t)(ESI));
  /* 11a03237 call 0x11a0113d */
  push32(0x11a0323cu); f_11a0113d();
  /* 11a0323c push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11a03241 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a03243 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a03249u);
  /* 11a03249 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0324c inc dword ptr [0x11a07ab8] */
  { uint32_t _r=(r32((uint32_t)(0x11a07ab8)))+1; w32((uint32_t)(0x11a07ab8), (_r)); fl_inc(_r,32); }
  /* 11a03252 jmp 0x11a03274 */
  goto L_11a03274;
L_11a03254:;
  /* 11a03254 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a03256 mov dword ptr [0x11a07ab8], ebx */
  w32((uint32_t)(0x11a07ab8), (EBX));
  /* 11a0325c pop eax */
  EAX = (pop32());
  /* 11a0325d sub eax, dword ptr [0x11a077d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a077d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a03263 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a03269 push eax */
  push32((uint32_t)(EAX));
  /* 11a0326a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a0326c call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a03272u);
  /* 11a03272 pop ecx */
  ECX = (pop32());
  /* 11a03273 pop ecx */
  ECX = (pop32());
L_11a03274:;
  /* 11a03274 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a03276 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a0327cu);
  /* 11a0327c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0327e pop ecx */
  ECX = (pop32());
  /* 11a0327f je 0x11a0329e */
  if (C.zf) goto L_11a0329e;
  /* 11a03281 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a03283 push 0x11a07b00 */
  push32((uint32_t)(0x11a07b00u));
  /* 11a03288 push esi */
  push32((uint32_t)(ESI));
  /* 11a03289 call 0x11a0113d */
  push32(0x11a0328eu); f_11a0113d();
  /* 11a0328e push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11a03293 push 6 */
  push32((uint32_t)(0x6u));
  /* 11a03295 call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a0329bu);
  /* 11a0329b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a0329e:;
  /* 11a0329e cmp dword ptr [0x11a077d0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a077d0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a032a4 je 0x11a032d3 */
  if (C.zf) goto L_11a032d3;
  /* 11a032a6 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a032a8 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a032aeu);
  /* 11a032ae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a032b0 pop ecx */
  ECX = (pop32());
  /* 11a032b1 je 0x11a032d3 */
  if (C.zf) goto L_11a032d3;
  /* 11a032b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a032b5 inc dword ptr [0x11a07a50] */
  { uint32_t _r=(r32((uint32_t)(0x11a07a50)))+1; w32((uint32_t)(0x11a07a50), (_r)); fl_inc(_r,32); }
  /* 11a032bb pop eax */
  EAX = (pop32());
  /* 11a032bc sub eax, dword ptr [0x11a077d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a077d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a032c2 imul eax, eax, 0x3a98 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3a98u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a032c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a032c9 push 7 */
  push32((uint32_t)(0x7u));
  /* 11a032cb call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a032d1u);
  /* 11a032d1 pop ecx */
  ECX = (pop32());
  /* 11a032d2 pop ecx */
  ECX = (pop32());
L_11a032d3:;
  /* 11a032d3 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a032d5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a032d7u);
  /* 11a032d7 mov esi, dword ptr [0x11a06118] */
  ESI = (r32((uint32_t)(0x11a06118)));
  /* 11a032dd pop ecx */
  ECX = (pop32());
  /* 11a032de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a032e0 je 0x11a032fe */
  if (C.zf) goto L_11a032fe;
  /* 11a032e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a032e4 call esi */
  call_ind((uint32_t)(ESI), 0x11a032e6u);
  /* 11a032e6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a032e8 pop ecx */
  ECX = (pop32());
  /* 11a032e9 je 0x11a032fe */
  if (C.zf) goto L_11a032fe;
  /* 11a032eb push 0x11a07394 */
  push32((uint32_t)(0x11a07394u));
  /* 11a032f0 call dword ptr [0x11a06100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06100))), 0x11a032f6u);
  /* 11a032f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a032f7 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a032f9 call edi */
  call_ind((uint32_t)(EDI), 0x11a032fbu);
  /* 11a032fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a032fe:;
  /* 11a032fe push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a03300 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03302u);
  /* 11a03302 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03304 pop ecx */
  ECX = (pop32());
  /* 11a03305 je 0x11a03323 */
  if (C.zf) goto L_11a03323;
  /* 11a03307 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a03309 call esi */
  call_ind((uint32_t)(ESI), 0x11a0330bu);
  /* 11a0330b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0330d pop ecx */
  ECX = (pop32());
  /* 11a0330e je 0x11a03323 */
  if (C.zf) goto L_11a03323;
  /* 11a03310 push 0x11a0738c */
  push32((uint32_t)(0x11a0738cu));
  /* 11a03315 call dword ptr [0x11a06100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06100))), 0x11a0331bu);
  /* 11a0331b push ebx */
  push32((uint32_t)(EBX));
  /* 11a0331c push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a0331e call edi */
  call_ind((uint32_t)(EDI), 0x11a03320u);
  /* 11a03320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a03323:;
  /* 11a03323 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a03325 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03327u);
  /* 11a03327 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03329 pop ecx */
  ECX = (pop32());
  /* 11a0332a je 0x11a03380 */
  if (C.zf) goto L_11a03380;
  /* 11a0332c push 3 */
  push32((uint32_t)(0x3u));
  /* 11a0332e call esi */
  call_ind((uint32_t)(ESI), 0x11a03330u);
  /* 11a03330 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03332 pop ecx */
  ECX = (pop32());
  /* 11a03333 je 0x11a03380 */
  if (C.zf) goto L_11a03380;
  /* 11a03335 mov esi, dword ptr [0x11a06134] */
  ESI = (r32((uint32_t)(0x11a06134)));
  /* 11a0333b push 0x11a07a20 */
  push32((uint32_t)(0x11a07a20u));
  /* 11a03340 call esi */
  call_ind((uint32_t)(ESI), 0x11a03342u);
  /* 11a03342 mov edx, eax */
  EDX = (EAX);
  /* 11a03344 mov dword ptr [esp], 0x11a078a0 */
  w32((uint32_t)(ESP), (0x11a078a0u));
  /* 11a0334b mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11a0334f call esi */
  call_ind((uint32_t)(ESI), 0x11a03351u);
  /* 11a03351 pop ecx */
  ECX = (pop32());
  /* 11a03352 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a03356 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03358 jne 0x11a03380 */
  if (!C.zf) goto L_11a03380;
  /* 11a0335a mov esi, dword ptr [0x11a06100] */
  ESI = (r32((uint32_t)(0x11a06100)));
  /* 11a03360 push 0x11a07384 */
  push32((uint32_t)(0x11a07384u));
  /* 11a03365 call esi */
  call_ind((uint32_t)(ESI), 0x11a03367u);
  /* 11a03367 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a03369 call ebp */
  call_ind((uint32_t)(EBP), 0x11a0336bu);
  /* 11a0336b pop ecx */
  ECX = (pop32());
  /* 11a0336c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0336e pop ecx */
  ECX = (pop32());
  /* 11a0336f je 0x11a03379 */
  if (C.zf) goto L_11a03379;
  /* 11a03371 push 0x11a0737c */
  push32((uint32_t)(0x11a0737cu));
  /* 11a03376 call esi */
  call_ind((uint32_t)(ESI), 0x11a03378u);
  /* 11a03378 pop ecx */
  ECX = (pop32());
L_11a03379:;
  /* 11a03379 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0337a push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a0337c call edi */
  call_ind((uint32_t)(EDI), 0x11a0337eu);
  /* 11a0337e pop ecx */
  ECX = (pop32());
  /* 11a0337f pop ecx */
  ECX = (pop32());
L_11a03380:;
  /* 11a03380 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a03382 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03384u);
  /* 11a03384 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03386 pop ecx */
  ECX = (pop32());
  /* 11a03387 je 0x11a033e1 */
  if (C.zf) goto L_11a033e1;
  /* 11a03389 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0338b call dword ptr [0x11a06118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06118))), 0x11a03391u);
  /* 11a03391 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03393 pop ecx */
  ECX = (pop32());
  /* 11a03394 je 0x11a033e1 */
  if (C.zf) goto L_11a033e1;
  /* 11a03396 mov esi, dword ptr [0x11a06134] */
  ESI = (r32((uint32_t)(0x11a06134)));
  /* 11a0339c push 0x11a07a28 */
  push32((uint32_t)(0x11a07a28u));
  /* 11a033a1 call esi */
  call_ind((uint32_t)(ESI), 0x11a033a3u);
  /* 11a033a3 mov edx, eax */
  EDX = (EAX);
  /* 11a033a5 mov dword ptr [esp], 0x11a078a8 */
  w32((uint32_t)(ESP), (0x11a078a8u));
  /* 11a033ac mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11a033b0 call esi */
  call_ind((uint32_t)(ESI), 0x11a033b2u);
  /* 11a033b2 pop ecx */
  ECX = (pop32());
  /* 11a033b3 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a033b7 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a033b9 jne 0x11a033e1 */
  if (!C.zf) goto L_11a033e1;
  /* 11a033bb mov esi, dword ptr [0x11a06100] */
  ESI = (r32((uint32_t)(0x11a06100)));
  /* 11a033c1 push 0x11a07374 */
  push32((uint32_t)(0x11a07374u));
  /* 11a033c6 call esi */
  call_ind((uint32_t)(ESI), 0x11a033c8u);
  /* 11a033c8 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a033ca call ebp */
  call_ind((uint32_t)(EBP), 0x11a033ccu);
  /* 11a033cc pop ecx */
  ECX = (pop32());
  /* 11a033cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a033cf pop ecx */
  ECX = (pop32());
  /* 11a033d0 je 0x11a033da */
  if (C.zf) goto L_11a033da;
  /* 11a033d2 push 0x11a0737c */
  push32((uint32_t)(0x11a0737cu));
  /* 11a033d7 call esi */
  call_ind((uint32_t)(ESI), 0x11a033d9u);
  /* 11a033d9 pop ecx */
  ECX = (pop32());
L_11a033da:;
  /* 11a033da push ebx */
  push32((uint32_t)(EBX));
  /* 11a033db push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a033dd call edi */
  call_ind((uint32_t)(EDI), 0x11a033dfu);
  /* 11a033df pop ecx */
  ECX = (pop32());
  /* 11a033e0 pop ecx */
  ECX = (pop32());
L_11a033e1:;
  /* 11a033e1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11a033e3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a033e5u);
  /* 11a033e5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a033e7 pop ecx */
  ECX = (pop32());
  /* 11a033e8 je 0x11a034b2 */
  if (C.zf) goto L_11a034b2;
  /* 11a033ee push ebx */
  push32((uint32_t)(EBX));
  /* 11a033ef call dword ptr [0x11a06118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06118))), 0x11a033f5u);
  /* 11a033f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a033f7 pop ecx */
  ECX = (pop32());
  /* 11a033f8 je 0x11a034b2 */
  if (C.zf) goto L_11a034b2;
  /* 11a033fe mov esi, dword ptr [0x11a060f8] */
  ESI = (r32((uint32_t)(0x11a060f8)));
  /* 11a03404 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03405 push 0x11a07ad0 */
  push32((uint32_t)(0x11a07ad0u));
  /* 11a0340a call esi */
  call_ind((uint32_t)(ESI), 0x11a0340cu);
  /* 11a0340c mov edx, eax */
  EDX = (EAX);
  /* 11a0340e push ebx */
  push32((uint32_t)(EBX));
  /* 11a0340f push 0x11a07ac0 */
  push32((uint32_t)(0x11a07ac0u));
  /* 11a03414 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11a03418 call esi */
  call_ind((uint32_t)(ESI), 0x11a0341au);
  /* 11a0341a mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 11a0341e push ebx */
  push32((uint32_t)(EBX));
  /* 11a0341f push 0x11a07910 */
  push32((uint32_t)(0x11a07910u));
  /* 11a03424 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03426 call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a0342cu);
  /* 11a0342c push ebx */
  push32((uint32_t)(EBX));
  /* 11a0342d push 0x11a077b0 */
  push32((uint32_t)(0x11a077b0u));
  /* 11a03432 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03434 call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a0343au);
  /* 11a0343a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0343b push 0x11a079f8 */
  push32((uint32_t)(0x11a079f8u));
  /* 11a03440 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03442 call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a03448u);
  /* 11a03448 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03449 push 0x11a079d8 */
  push32((uint32_t)(0x11a079d8u));
  /* 11a0344e add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03450 call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a03456u);
  /* 11a03456 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03457 push 0x11a07b08 */
  push32((uint32_t)(0x11a07b08u));
  /* 11a0345c add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0345e call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a03464u);
  /* 11a03464 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03465 push 0x11a078b8 */
  push32((uint32_t)(0x11a078b8u));
  /* 11a0346a add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0346c call dword ptr [0x11a060f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060f8))), 0x11a03472u);
  /* 11a03472 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03475 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03477 jne 0x11a034b2 */
  if (!C.zf) goto L_11a034b2;
  /* 11a03479 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0347b pop esi */
  ESI = (pop32());
L_11a0347c:;
  /* 11a0347c push esi */
  push32((uint32_t)(ESI));
  /* 11a0347d call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a03483u);
  /* 11a03483 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a03485 pop ecx */
  ECX = (pop32());
  /* 11a03486 jne 0x11a03493 */
  if (!C.zf) goto L_11a03493;
  /* 11a03488 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0348a push esi */
  push32((uint32_t)(ESI));
  /* 11a0348b call dword ptr [0x11a060c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060c8))), 0x11a03491u);
  /* 11a03491 pop ecx */
  ECX = (pop32());
  /* 11a03492 pop ecx */
  ECX = (pop32());
L_11a03493:;
  /* 11a03493 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03494 cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03497 jl 0x11a0347c */
  if ((C.sf!=C.of)) goto L_11a0347c;
  /* 11a03499 push 0x11a0736c */
  push32((uint32_t)(0x11a0736cu));
  /* 11a0349e call dword ptr [0x11a06100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06100))), 0x11a034a4u);
  /* 11a034a4 call dword ptr [0x11a06110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06110))), 0x11a034aau);
  /* 11a034aa push ebx */
  push32((uint32_t)(EBX));
  /* 11a034ab push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11a034ad call edi */
  call_ind((uint32_t)(EDI), 0x11a034afu);
  /* 11a034af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a034b2:;
  /* 11a034b2 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a034b4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a034b6u);
  /* 11a034b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a034b8 pop ecx */
  ECX = (pop32());
  /* 11a034b9 jne 0x11a034f3 */
  if (!C.zf) goto L_11a034f3;
  /* 11a034bb push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a034bd call ebp */
  call_ind((uint32_t)(EBP), 0x11a034bfu);
  /* 11a034bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a034c1 pop ecx */
  ECX = (pop32());
  /* 11a034c2 jne 0x11a034f3 */
  if (!C.zf) goto L_11a034f3;
  /* 11a034c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a034c6 pop esi */
  ESI = (pop32());
L_11a034c7:;
  /* 11a034c7 push esi */
  push32((uint32_t)(ESI));
  /* 11a034c8 call dword ptr [0x11a060b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060b0))), 0x11a034ceu);
  /* 11a034ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a034d0 pop ecx */
  ECX = (pop32());
  /* 11a034d1 jne 0x11a034db */
  if (!C.zf) goto L_11a034db;
  /* 11a034d3 push esi */
  push32((uint32_t)(ESI));
  /* 11a034d4 call dword ptr [0x11a060bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060bc))), 0x11a034dau);
  /* 11a034da pop ecx */
  ECX = (pop32());
L_11a034db:;
  /* 11a034db inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a034dc cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a034df jl 0x11a034c7 */
  if ((C.sf!=C.of)) goto L_11a034c7;
  /* 11a034e1 push 0x11a07364 */
  push32((uint32_t)(0x11a07364u));
  /* 11a034e6 call dword ptr [0x11a06100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06100))), 0x11a034ecu);
  /* 11a034ec pop ecx */
  ECX = (pop32());
  /* 11a034ed call dword ptr [0x11a06120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06120))), 0x11a034f3u);
L_11a034f3:;
  /* 11a034f3 pop edi */
  EDI = (pop32());
  /* 11a034f4 pop esi */
  ESI = (pop32());
  /* 11a034f5 pop ebp */
  EBP = (pop32());
  /* 11a034f6 pop ebx */
  EBX = (pop32());
  /* 11a034f7 pop ecx */
  ECX = (pop32());
  /* 11a034f8 ret  */
  ESPCHK(0x11a01868u, _esp0);
  ESP += 4; return;
}

/* FUN_100034f9 @ 0x11a034f9 (217 bytes, 57 insns) */
void f_11a034f9(void) {
  FTRACE(0x11a034f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a034f9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a034fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03500 jne 0x11a0358e */
  if (!C.zf) goto L_11a0358e;
  /* 11a03506 call dword ptr [0x11a06004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06004))), 0x11a0350cu);
  /* 11a0350c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0350e mov dword ptr [0x11a07b44], eax */
  w32((uint32_t)(0x11a07b44), (EAX));
  /* 11a03513 call 0x11a03f2d */
  push32(0x11a03518u); f_11a03f2d();
  /* 11a03518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0351a pop ecx */
  ECX = (pop32());
  /* 11a0351b je 0x11a03559 */
  if (C.zf) goto L_11a03559;
  /* 11a0351d mov eax, dword ptr [0x11a07b44] */
  EAX = (r32((uint32_t)(0x11a07b44)));
  /* 11a03522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a03524 mov cl, byte ptr [0x11a07b45] */
  CL = (r8((uint32_t)(0x11a07b45)));
  /* 11a0352a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a0352f shr dword ptr [0x11a07b44], 0x10 */
  w32((uint32_t)(0x11a07b44), (sh_shr((uint32_t)(r32((uint32_t)(0x11a07b44))), (0x10u)&0x1f, 32)));
  /* 11a03536 mov dword ptr [0x11a07b4c], eax */
  w32((uint32_t)(0x11a07b4c), (EAX));
  /* 11a0353b mov dword ptr [0x11a07b50], ecx */
  w32((uint32_t)(0x11a07b50), (ECX));
  /* 11a03541 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a03544 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03546 mov dword ptr [0x11a07b48], eax */
  w32((uint32_t)(0x11a07b48), (EAX));
  /* 11a0354b call 0x11a037c0 */
  push32(0x11a03550u); f_11a037c0();
  /* 11a03550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03552 jne 0x11a0355d */
  if (!C.zf) goto L_11a0355d;
  /* 11a03554 call 0x11a03f69 */
  push32(0x11a03559u); f_11a03f69();
L_11a03559:;
  /* 11a03559 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0355b jmp 0x11a035cf */
  goto L_11a035cf;
L_11a0355d:;
  /* 11a0355d call dword ptr [0x11a06000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06000))), 0x11a03563u);
  /* 11a03563 mov dword ptr [0x11a08098], eax */
  w32((uint32_t)(0x11a08098), (EAX));
  /* 11a03568 call 0x11a03dfb */
  push32(0x11a0356du); f_11a03dfb();
  /* 11a0356d mov dword ptr [0x11a07b30], eax */
  w32((uint32_t)(0x11a07b30), (EAX));
  /* 11a03572 call 0x11a038e5 */
  push32(0x11a03577u); f_11a038e5();
  /* 11a03577 call 0x11a03bae */
  push32(0x11a0357cu); f_11a03bae();
  /* 11a0357c call 0x11a03af5 */
  push32(0x11a03581u); f_11a03af5();
  /* 11a03581 call 0x11a036a2 */
  push32(0x11a03586u); f_11a036a2();
  /* 11a03586 inc dword ptr [0x11a07b2c] */
  { uint32_t _r=(r32((uint32_t)(0x11a07b2c)))+1; w32((uint32_t)(0x11a07b2c), (_r)); fl_inc(_r,32); }
  /* 11a0358c jmp 0x11a035cc */
  goto L_11a035cc;
L_11a0358e:;
  /* 11a0358e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a03590 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03592 jne 0x11a035c0 */
  if (!C.zf) goto L_11a035c0;
  /* 11a03594 cmp dword ptr [0x11a07b2c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a07b2c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0359a jle 0x11a03559 */
  if ((C.zf||C.sf!=C.of)) goto L_11a03559;
  /* 11a0359c dec dword ptr [0x11a07b2c] */
  { uint32_t _r=(r32((uint32_t)(0x11a07b2c)))-1; w32((uint32_t)(0x11a07b2c), (_r)); fl_dec(_r,32); }
  /* 11a035a2 cmp dword ptr [0x11a07b7c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a07b7c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a035a8 jne 0x11a035af */
  if (!C.zf) goto L_11a035af;
  /* 11a035aa call 0x11a036e0 */
  push32(0x11a035afu); f_11a036e0();
L_11a035af:;
  /* 11a035af call 0x11a03aa1 */
  push32(0x11a035b4u); f_11a03aa1();
  /* 11a035b4 call 0x11a03814 */
  push32(0x11a035b9u); f_11a03814();
  /* 11a035b9 call 0x11a03f69 */
  push32(0x11a035beu); f_11a03f69();
  /* 11a035be jmp 0x11a035cc */
  goto L_11a035cc;
L_11a035c0:;
  /* 11a035c0 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a035c3 jne 0x11a035cc */
  if (!C.zf) goto L_11a035cc;
  /* 11a035c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a035c6 call 0x11a03845 */
  push32(0x11a035cbu); f_11a03845();
  /* 11a035cb pop ecx */
  ECX = (pop32());
L_11a035cc:;
  /* 11a035cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a035ce pop eax */
  EAX = (pop32());
L_11a035cf:;
  /* 11a035cf ret 0xc */
  ESPCHK(0x11a034f9u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a035d2 (157 bytes, 73 insns) */
void f_11a035d2(void) {
  FTRACE(0x11a035d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a035d2 push ebp */
  push32((uint32_t)(EBP));
  /* 11a035d3 mov ebp, esp */
  EBP = (ESP);
  /* 11a035d5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a035d6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a035d9 push esi */
  push32((uint32_t)(ESI));
  /* 11a035da mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a035dd push edi */
  push32((uint32_t)(EDI));
  /* 11a035de mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a035e1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a035e3 jne 0x11a035ee */
  if (!C.zf) goto L_11a035ee;
  /* 11a035e5 cmp dword ptr [0x11a07b2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a07b2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a035ec jmp 0x11a03614 */
  goto L_11a03614;
L_11a035ee:;
  /* 11a035ee cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a035f1 je 0x11a035f8 */
  if (C.zf) goto L_11a035f8;
  /* 11a035f3 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a035f6 jne 0x11a0361a */
  if (!C.zf) goto L_11a0361a;
L_11a035f8:;
  /* 11a035f8 mov eax, dword ptr [0x11a0809c] */
  EAX = (r32((uint32_t)(0x11a0809c)));
  /* 11a035fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a035ff je 0x11a0360a */
  if (C.zf) goto L_11a0360a;
  /* 11a03601 push edi */
  push32((uint32_t)(EDI));
  /* 11a03602 push esi */
  push32((uint32_t)(ESI));
  /* 11a03603 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03604 call eax */
  call_ind((uint32_t)(EAX), 0x11a03606u);
  /* 11a03606 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03608 je 0x11a03616 */
  if (C.zf) goto L_11a03616;
L_11a0360a:;
  /* 11a0360a push edi */
  push32((uint32_t)(EDI));
  /* 11a0360b push esi */
  push32((uint32_t)(ESI));
  /* 11a0360c push ebx */
  push32((uint32_t)(EBX));
  /* 11a0360d call 0x11a034f9 */
  push32(0x11a03612u); f_11a034f9();
  /* 11a03612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a03614:;
  /* 11a03614 jne 0x11a0361a */
  if (!C.zf) goto L_11a0361a;
L_11a03616:;
  /* 11a03616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a03618 jmp 0x11a03668 */
  goto L_11a03668;
L_11a0361a:;
  /* 11a0361a push edi */
  push32((uint32_t)(EDI));
  /* 11a0361b push esi */
  push32((uint32_t)(ESI));
  /* 11a0361c push ebx */
  push32((uint32_t)(EBX));
  /* 11a0361d call 0x11a01000 */
  push32(0x11a03622u); f_11a01000();
  /* 11a03622 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03625 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a03628 jne 0x11a03636 */
  if (!C.zf) goto L_11a03636;
  /* 11a0362a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0362c jne 0x11a03665 */
  if (!C.zf) goto L_11a03665;
  /* 11a0362e push edi */
  push32((uint32_t)(EDI));
  /* 11a0362f push eax */
  push32((uint32_t)(EAX));
  /* 11a03630 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03631 call 0x11a034f9 */
  push32(0x11a03636u); f_11a034f9();
L_11a03636:;
  /* 11a03636 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03638 je 0x11a0363f */
  if (C.zf) goto L_11a0363f;
  /* 11a0363a cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0363d jne 0x11a03665 */
  if (!C.zf) goto L_11a03665;
L_11a0363f:;
  /* 11a0363f push edi */
  push32((uint32_t)(EDI));
  /* 11a03640 push esi */
  push32((uint32_t)(ESI));
  /* 11a03641 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03642 call 0x11a034f9 */
  push32(0x11a03647u); f_11a034f9();
  /* 11a03647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03649 jne 0x11a0364e */
  if (!C.zf) goto L_11a0364e;
  /* 11a0364b and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a0364e:;
  /* 11a0364e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03652 je 0x11a03665 */
  if (C.zf) goto L_11a03665;
  /* 11a03654 mov eax, dword ptr [0x11a0809c] */
  EAX = (r32((uint32_t)(0x11a0809c)));
  /* 11a03659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0365b je 0x11a03665 */
  if (C.zf) goto L_11a03665;
  /* 11a0365d push edi */
  push32((uint32_t)(EDI));
  /* 11a0365e push esi */
  push32((uint32_t)(ESI));
  /* 11a0365f push ebx */
  push32((uint32_t)(EBX));
  /* 11a03660 call eax */
  call_ind((uint32_t)(EAX), 0x11a03662u);
  /* 11a03662 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a03665:;
  /* 11a03665 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a03668:;
  /* 11a03668 pop edi */
  EDI = (pop32());
  /* 11a03669 pop esi */
  ESI = (pop32());
  /* 11a0366a pop ebx */
  EBX = (pop32());
  /* 11a0366b pop ebp */
  EBP = (pop32());
  /* 11a0366c ret 0xc */
  ESPCHK(0x11a035d2u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a0366f (48 bytes, 15 insns) */
void f_11a0366f(void) {
  FTRACE(0x11a0366fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0366f mov eax, dword ptr [0x11a07b38] */
  EAX = (r32((uint32_t)(0x11a07b38)));
  /* 11a03674 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03677 je 0x11a03686 */
  if (C.zf) goto L_11a03686;
  /* 11a03679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0367b jne 0x11a0368b */
  if (!C.zf) goto L_11a0368b;
  /* 11a0367d cmp dword ptr [0x11a07b3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a07b3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03684 jne 0x11a0368b */
  if (!C.zf) goto L_11a0368b;
L_11a03686:;
  /* 11a03686 call 0x11a03fde */
  push32(0x11a0368bu); f_11a03fde();
L_11a0368b:;
  /* 11a0368b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a0368f call 0x11a04017 */
  push32(0x11a03694u); f_11a04017();
  /* 11a03694 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a03699 call dword ptr [0x11a07484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a07484))), 0x11a0369fu);
  /* 11a0369f pop ecx */
  ECX = (pop32());
  /* 11a036a0 pop ecx */
  ECX = (pop32());
  /* 11a036a1 ret  */
  ESPCHK(0x11a0366fu, _esp0);
  ESP += 4; return;
}

/* FUN_100036a2 @ 0x11a036a2 (45 bytes, 12 insns) */
void f_11a036a2(void) {
  FTRACE(0x11a036a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a036a2 mov eax, dword ptr [0x11a08094] */
  EAX = (r32((uint32_t)(0x11a08094)));
  /* 11a036a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a036a9 je 0x11a036ad */
  if (C.zf) goto L_11a036ad;
  /* 11a036ab call eax */
  call_ind((uint32_t)(EAX), 0x11a036adu);
L_11a036ad:;
  /* 11a036ad push 0x11a07010 */
  push32((uint32_t)(0x11a07010u));
  /* 11a036b2 push 0x11a07008 */
  push32((uint32_t)(0x11a07008u));
  /* 11a036b7 call 0x11a037a6 */
  push32(0x11a036bcu); f_11a037a6();
  /* 11a036bc push 0x11a07004 */
  push32((uint32_t)(0x11a07004u));
  /* 11a036c1 push 0x11a07000 */
  push32((uint32_t)(0x11a07000u));
  /* 11a036c6 call 0x11a037a6 */
  push32(0x11a036cbu); f_11a037a6();
  /* 11a036cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a036ce ret  */
  ESPCHK(0x11a036a2u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a036cf (17 bytes, 6 insns) */
void f_11a036cf(void) {
  FTRACE(0x11a036cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a036cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11a036d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a036d3 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a036d7 call 0x11a036ef */
  push32(0x11a036dcu); f_11a036ef();
  /* 11a036dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a036df ret  */
  ESPCHK(0x11a036cfu, _esp0);
  ESP += 4; return;
}

/* FUN_100036e0 @ 0x11a036e0 (15 bytes, 6 insns) */
void f_11a036e0(void) {
  FTRACE(0x11a036e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a036e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a036e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a036e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a036e6 call 0x11a036ef */
  push32(0x11a036ebu); f_11a036ef();
  /* 11a036eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a036ee ret  */
  ESPCHK(0x11a036e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036ef @ 0x11a036ef (163 bytes, 53 insns) */
void f_11a036ef(void) {
  FTRACE(0x11a036efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a036ef push edi */
  push32((uint32_t)(EDI));
  /* 11a036f0 call 0x11a03794 */
  push32(0x11a036f5u); f_11a03794();
  /* 11a036f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a036f7 pop edi */
  EDI = (pop32());
  /* 11a036f8 cmp dword ptr [0x11a07b80], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a07b80))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a036fe jne 0x11a03711 */
  if (!C.zf) goto L_11a03711;
  /* 11a03700 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a03704 call dword ptr [0x11a060a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060a8))), 0x11a0370au);
  /* 11a0370a push eax */
  push32((uint32_t)(EAX));
  /* 11a0370b call dword ptr [0x11a0609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0609c))), 0x11a03711u);
L_11a03711:;
  /* 11a03711 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03716 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03717 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a0371b mov dword ptr [0x11a07b7c], edi */
  w32((uint32_t)(0x11a07b7c), (EDI));
  /* 11a03721 mov byte ptr [0x11a07b78], bl */
  w8((uint32_t)(0x11a07b78), (BL));
  /* 11a03727 jne 0x11a03765 */
  if (!C.zf) goto L_11a03765;
  /* 11a03729 mov eax, dword ptr [0x11a08090] */
  EAX = (r32((uint32_t)(0x11a08090)));
  /* 11a0372e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03730 je 0x11a03754 */
  if (C.zf) goto L_11a03754;
  /* 11a03732 mov ecx, dword ptr [0x11a0808c] */
  ECX = (r32((uint32_t)(0x11a0808c)));
  /* 11a03738 push esi */
  push32((uint32_t)(ESI));
  /* 11a03739 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a0373c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0373e jb 0x11a03753 */
  if (C.cf) goto L_11a03753;
L_11a03740:;
  /* 11a03740 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a03742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03744 je 0x11a03748 */
  if (C.zf) goto L_11a03748;
  /* 11a03746 call eax */
  call_ind((uint32_t)(EAX), 0x11a03748u);
L_11a03748:;
  /* 11a03748 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0374b cmp esi, dword ptr [0x11a08090] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a08090))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03751 jae 0x11a03740 */
  if (!C.cf) goto L_11a03740;
L_11a03753:;
  /* 11a03753 pop esi */
  ESI = (pop32());
L_11a03754:;
  /* 11a03754 push 0x11a07018 */
  push32((uint32_t)(0x11a07018u));
  /* 11a03759 push 0x11a07014 */
  push32((uint32_t)(0x11a07014u));
  /* 11a0375e call 0x11a037a6 */
  push32(0x11a03763u); f_11a037a6();
  /* 11a03763 pop ecx */
  ECX = (pop32());
  /* 11a03764 pop ecx */
  ECX = (pop32());
L_11a03765:;
  /* 11a03765 push 0x11a07020 */
  push32((uint32_t)(0x11a07020u));
  /* 11a0376a push 0x11a0701c */
  push32((uint32_t)(0x11a0701cu));
  /* 11a0376f call 0x11a037a6 */
  push32(0x11a03774u); f_11a037a6();
  /* 11a03774 pop ecx */
  ECX = (pop32());
  /* 11a03775 pop ecx */
  ECX = (pop32());
  /* 11a03776 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a03778 pop ebx */
  EBX = (pop32());
  /* 11a03779 je 0x11a03782 */
  if (C.zf) goto L_11a03782;
  /* 11a0377b call 0x11a0379d */
  push32(0x11a03780u); f_11a0379d();
  /* 11a03780 pop edi */
  EDI = (pop32());
  /* 11a03781 ret  */
  ESPCHK(0x11a036efu, _esp0);
  ESP += 4; return;
L_11a03782:;
  /* 11a03782 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a03786 mov dword ptr [0x11a07b80], edi */
  w32((uint32_t)(0x11a07b80), (EDI));
  /* 11a0378c call dword ptr [0x11a060a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060a0))), 0x11a03792u);
  /* 11a03792 pop edi */
  EDI = (pop32());
  /* 11a03793 ret  */
  ESPCHK(0x11a036efu, _esp0);
  ESP += 4; return;
}

/* FUN_10003794 @ 0x11a03794 (9 bytes, 4 insns) */
void f_11a03794(void) {
  FTRACE(0x11a03794u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03794 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a03796 call 0x11a041ff */
  push32(0x11a0379bu); f_11a041ff();
  /* 11a0379b pop ecx */
  ECX = (pop32());
  /* 11a0379c ret  */
  ESPCHK(0x11a03794u, _esp0);
  ESP += 4; return;
}

/* FUN_1000379d @ 0x11a0379d (9 bytes, 4 insns) */
void f_11a0379d(void) {
  FTRACE(0x11a0379du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0379d push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a0379f call 0x11a04260 */
  push32(0x11a037a4u); f_11a04260();
  /* 11a037a4 pop ecx */
  ECX = (pop32());
  /* 11a037a5 ret  */
  ESPCHK(0x11a0379du, _esp0);
  ESP += 4; return;
}

/* FUN_100037a6 @ 0x11a037a6 (26 bytes, 12 insns) */
void f_11a037a6(void) {
  FTRACE(0x11a037a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a037a6 push esi */
  push32((uint32_t)(ESI));
  /* 11a037a7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a037ab:;
  /* 11a037ab cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a037af jae 0x11a037be */
  if (!C.cf) goto L_11a037be;
  /* 11a037b1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a037b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a037b5 je 0x11a037b9 */
  if (C.zf) goto L_11a037b9;
  /* 11a037b7 call eax */
  call_ind((uint32_t)(EAX), 0x11a037b9u);
L_11a037b9:;
  /* 11a037b9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a037bc jmp 0x11a037ab */
  goto L_11a037ab;
L_11a037be:;
  /* 11a037be pop esi */
  ESI = (pop32());
  /* 11a037bf ret  */
  ESPCHK(0x11a037a6u, _esp0);
  ESP += 4; return;
}

/* FUN_100037c0 @ 0x11a037c0 (84 bytes, 32 insns) */
void f_11a037c0(void) {
  FTRACE(0x11a037c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a037c0 push esi */
  push32((uint32_t)(ESI));
  /* 11a037c1 call 0x11a0416a */
  push32(0x11a037c6u); f_11a0416a();
  /* 11a037c6 call dword ptr [0x11a060a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a060a4))), 0x11a037ccu);
  /* 11a037cc cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a037cf mov dword ptr [0x11a07488], eax */
  w32((uint32_t)(0x11a07488), (EAX));
  /* 11a037d4 je 0x11a03810 */
  if (C.zf) goto L_11a03810;
  /* 11a037d6 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a037d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a037da call 0x11a04275 */
  push32(0x11a037dfu); f_11a04275();
  /* 11a037df mov esi, eax */
  ESI = (EAX);
  /* 11a037e1 pop ecx */
  ECX = (pop32());
  /* 11a037e2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a037e4 pop ecx */
  ECX = (pop32());
  /* 11a037e5 je 0x11a03810 */
  if (C.zf) goto L_11a03810;
  /* 11a037e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a037e8 push dword ptr [0x11a07488] */
  push32((uint32_t)(r32((uint32_t)(0x11a07488))));
  /* 11a037ee call dword ptr [0x11a06094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06094))), 0x11a037f4u);
  /* 11a037f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a037f6 je 0x11a03810 */
  if (C.zf) goto L_11a03810;
  /* 11a037f8 push esi */
  push32((uint32_t)(ESI));
  /* 11a037f9 call 0x11a03832 */
  push32(0x11a037feu); f_11a03832();
  /* 11a037fe pop ecx */
  ECX = (pop32());
  /* 11a037ff call dword ptr [0x11a06098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06098))), 0x11a03805u);
  /* 11a03805 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a03809 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0380b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a0380d pop eax */
  EAX = (pop32());
  /* 11a0380e pop esi */
  ESI = (pop32());
  /* 11a0380f ret  */
  ESPCHK(0x11a037c0u, _esp0);
  ESP += 4; return;
L_11a03810:;
  /* 11a03810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a03812 pop esi */
  ESI = (pop32());
  /* 11a03813 ret  */
  ESPCHK(0x11a037c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003814 @ 0x11a03814 (30 bytes, 8 insns) */
void f_11a03814(void) {
  FTRACE(0x11a03814u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03814 call 0x11a04193 */
  push32(0x11a03819u); f_11a04193();
  /* 11a03819 mov eax, dword ptr [0x11a07488] */
  EAX = (r32((uint32_t)(0x11a07488)));
  /* 11a0381e cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03821 je 0x11a03831 */
  if (C.zf) goto L_11a03831;
  /* 11a03823 push eax */
  push32((uint32_t)(EAX));
  /* 11a03824 call dword ptr [0x11a0608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0608c))), 0x11a0382au);
  /* 11a0382a or dword ptr [0x11a07488], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a07488)))|(0xffffffffu); w32((uint32_t)(0x11a07488), (_r)); fl_logic(_r,32); }
L_11a03831:;
  /* 11a03831 ret  */
  ESPCHK(0x11a03814u, _esp0);
  ESP += 4; return;
}

/* FUN_10003832 @ 0x11a03832 (19 bytes, 4 insns) */
void f_11a03832(void) {
  FTRACE(0x11a03832u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03832 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a03836 mov dword ptr [eax + 0x50], 0x11a07608 */
  w32((uint32_t)(EAX + 0x50), (0x11a07608u));
  /* 11a0383d mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a03844 ret  */
  ESPCHK(0x11a03832u, _esp0);
  ESP += 4; return;
}

/* FUN_10003845 @ 0x11a03845 (160 bytes, 62 insns) */
void f_11a03845(void) {
  FTRACE(0x11a03845u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03845 mov eax, dword ptr [0x11a07488] */
  EAX = (r32((uint32_t)(0x11a07488)));
  /* 11a0384a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0384d je 0x11a038e4 */
  if (C.zf) goto L_11a038e4;
  /* 11a03853 push esi */
  push32((uint32_t)(ESI));
  /* 11a03854 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a03858 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a0385a jne 0x11a03869 */
  if (!C.zf) goto L_11a03869;
  /* 11a0385c push eax */
  push32((uint32_t)(EAX));
  /* 11a0385d call dword ptr [0x11a06090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06090))), 0x11a03863u);
  /* 11a03863 mov esi, eax */
  ESI = (EAX);
  /* 11a03865 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03867 je 0x11a038d5 */
  if (C.zf) goto L_11a038d5;
L_11a03869:;
  /* 11a03869 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a0386c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0386e je 0x11a03877 */
  if (C.zf) goto L_11a03877;
  /* 11a03870 push eax */
  push32((uint32_t)(EAX));
  /* 11a03871 call 0x11a04302 */
  push32(0x11a03876u); f_11a04302();
  /* 11a03876 pop ecx */
  ECX = (pop32());
L_11a03877:;
  /* 11a03877 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a0387a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0387c je 0x11a03885 */
  if (C.zf) goto L_11a03885;
  /* 11a0387e push eax */
  push32((uint32_t)(EAX));
  /* 11a0387f call 0x11a04302 */
  push32(0x11a03884u); f_11a04302();
  /* 11a03884 pop ecx */
  ECX = (pop32());
L_11a03885:;
  /* 11a03885 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a03888 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0388a je 0x11a03893 */
  if (C.zf) goto L_11a03893;
  /* 11a0388c push eax */
  push32((uint32_t)(EAX));
  /* 11a0388d call 0x11a04302 */
  push32(0x11a03892u); f_11a04302();
  /* 11a03892 pop ecx */
  ECX = (pop32());
L_11a03893:;
  /* 11a03893 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a03896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03898 je 0x11a038a1 */
  if (C.zf) goto L_11a038a1;
  /* 11a0389a push eax */
  push32((uint32_t)(EAX));
  /* 11a0389b call 0x11a04302 */
  push32(0x11a038a0u); f_11a04302();
  /* 11a038a0 pop ecx */
  ECX = (pop32());
L_11a038a1:;
  /* 11a038a1 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a038a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a038a6 je 0x11a038af */
  if (C.zf) goto L_11a038af;
  /* 11a038a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a038a9 call 0x11a04302 */
  push32(0x11a038aeu); f_11a04302();
  /* 11a038ae pop ecx */
  ECX = (pop32());
L_11a038af:;
  /* 11a038af mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a038b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a038b4 je 0x11a038bd */
  if (C.zf) goto L_11a038bd;
  /* 11a038b6 push eax */
  push32((uint32_t)(EAX));
  /* 11a038b7 call 0x11a04302 */
  push32(0x11a038bcu); f_11a04302();
  /* 11a038bc pop ecx */
  ECX = (pop32());
L_11a038bd:;
  /* 11a038bd mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a038c0 cmp eax, 0x11a07608 */
  { uint32_t _a=(EAX),_b=(0x11a07608u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a038c5 je 0x11a038ce */
  if (C.zf) goto L_11a038ce;
  /* 11a038c7 push eax */
  push32((uint32_t)(EAX));
  /* 11a038c8 call 0x11a04302 */
  push32(0x11a038cdu); f_11a04302();
  /* 11a038cd pop ecx */
  ECX = (pop32());
L_11a038ce:;
  /* 11a038ce push esi */
  push32((uint32_t)(ESI));
  /* 11a038cf call 0x11a04302 */
  push32(0x11a038d4u); f_11a04302();
  /* 11a038d4 pop ecx */
  ECX = (pop32());
L_11a038d5:;
  /* 11a038d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a038d7 push dword ptr [0x11a07488] */
  push32((uint32_t)(r32((uint32_t)(0x11a07488))));
  /* 11a038dd call dword ptr [0x11a06094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06094))), 0x11a038e3u);
  /* 11a038e3 pop esi */
  ESI = (pop32());
L_11a038e4:;
  /* 11a038e4 ret  */
  ESPCHK(0x11a03845u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e5 @ 0x11a038e5 (444 bytes, 150 insns) */
void f_11a038e5(void) {
  FTRACE(0x11a038e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a038e5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a038e6 mov ebp, esp */
  EBP = (ESP);
  /* 11a038e8 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a038eb push ebx */
  push32((uint32_t)(EBX));
  /* 11a038ec push esi */
  push32((uint32_t)(ESI));
  /* 11a038ed push edi */
  push32((uint32_t)(EDI));
  /* 11a038ee push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a038f3 call 0x11a0434a */
  push32(0x11a038f8u); f_11a0434a();
  /* 11a038f8 mov esi, eax */
  ESI = (EAX);
  /* 11a038fa pop ecx */
  ECX = (pop32());
  /* 11a038fb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a038fd jne 0x11a03907 */
  if (!C.zf) goto L_11a03907;
  /* 11a038ff push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a03901 call 0x11a0366f */
  push32(0x11a03906u); f_11a0366f();
  /* 11a03906 pop ecx */
  ECX = (pop32());
L_11a03907:;
  /* 11a03907 mov dword ptr [0x11a07f80], esi */
  w32((uint32_t)(0x11a07f80), (ESI));
  /* 11a0390d mov dword ptr [0x11a08080], 0x20 */
  w32((uint32_t)(0x11a08080), (0x20u));
  /* 11a03917 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a0391d:;
  /* 11a0391d cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0391f jae 0x11a0393f */
  if (!C.cf) goto L_11a0393f;
  /* 11a03921 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a03925 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a03928 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a0392c mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a03930 mov eax, dword ptr [0x11a07f80] */
  EAX = (r32((uint32_t)(0x11a07f80)));
  /* 11a03935 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03938 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0393d jmp 0x11a0391d */
  goto L_11a0391d;
L_11a0393f:;
  /* 11a0393f lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a03942 push eax */
  push32((uint32_t)(EAX));
  /* 11a03943 call dword ptr [0x11a06084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06084))), 0x11a03949u);
  /* 11a03949 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a0394e je 0x11a03a25 */
  if (C.zf) goto L_11a03a25;
  /* 11a03954 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a03957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03959 je 0x11a03a25 */
  if (C.zf) goto L_11a03a25;
  /* 11a0395f mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a03961 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a03964 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a03967 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a0396a mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a0396f cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03971 jl 0x11a03975 */
  if ((C.sf!=C.of)) goto L_11a03975;
  /* 11a03973 mov edi, eax */
  EDI = (EAX);
L_11a03975:;
  /* 11a03975 cmp dword ptr [0x11a08080], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a08080))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0397b jge 0x11a039d3 */
  if ((C.sf==C.of)) goto L_11a039d3;
  /* 11a0397d mov esi, 0x11a07f84 */
  ESI = (0x11a07f84u);
L_11a03982:;
  /* 11a03982 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a03987 call 0x11a0434a */
  push32(0x11a0398cu); f_11a0434a();
  /* 11a0398c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0398e pop ecx */
  ECX = (pop32());
  /* 11a0398f je 0x11a039cd */
  if (C.zf) goto L_11a039cd;
  /* 11a03991 add dword ptr [0x11a08080], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a08080))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a08080), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a03998 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a0399a lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a039a0:;
  /* 11a039a0 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a039a2 jae 0x11a039c0 */
  if (!C.cf) goto L_11a039c0;
  /* 11a039a4 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a039a8 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a039ab and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a039af mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a039b3 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a039b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a039b8 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a039be jmp 0x11a039a0 */
  goto L_11a039a0;
L_11a039c0:;
  /* 11a039c0 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a039c3 cmp dword ptr [0x11a08080], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a08080))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a039c9 jl 0x11a03982 */
  if ((C.sf!=C.of)) goto L_11a03982;
  /* 11a039cb jmp 0x11a039d3 */
  goto L_11a039d3;
L_11a039cd:;
  /* 11a039cd mov edi, dword ptr [0x11a08080] */
  EDI = (r32((uint32_t)(0x11a08080)));
L_11a039d3:;
  /* 11a039d3 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a039d5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a039d7 jle 0x11a03a25 */
  if ((C.zf||C.sf!=C.of)) goto L_11a03a25;
L_11a039d9:;
  /* 11a039d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a039dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a039de cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a039e1 je 0x11a03a1b */
  if (C.zf) goto L_11a03a1b;
  /* 11a039e3 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a039e5 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a039e7 je 0x11a03a1b */
  if (C.zf) goto L_11a03a1b;
  /* 11a039e9 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a039eb jne 0x11a039f8 */
  if (!C.zf) goto L_11a039f8;
  /* 11a039ed push ecx */
  push32((uint32_t)(ECX));
  /* 11a039ee call dword ptr [0x11a0607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0607c))), 0x11a039f4u);
  /* 11a039f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a039f6 je 0x11a03a1b */
  if (C.zf) goto L_11a03a1b;
L_11a039f8:;
  /* 11a039f8 mov ecx, esi */
  ECX = (ESI);
  /* 11a039fa mov eax, esi */
  EAX = (ESI);
  /* 11a039fc sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a039ff and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a03a02 mov ecx, dword ptr [ecx*4 + 0x11a07f80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a07f80)));
  /* 11a03a09 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a03a0c lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a03a0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a03a12 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a03a14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a03a16 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a03a18 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a03a1b:;
  /* 11a03a1b add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a03a1f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03a20 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a03a21 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a23 jl 0x11a039d9 */
  if ((C.sf!=C.of)) goto L_11a039d9;
L_11a03a25:;
  /* 11a03a25 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a03a27:;
  /* 11a03a27 mov ecx, dword ptr [0x11a07f80] */
  ECX = (r32((uint32_t)(0x11a07f80)));
  /* 11a03a2d lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a03a30 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a34 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a03a37 jne 0x11a03a86 */
  if (!C.zf) goto L_11a03a86;
  /* 11a03a39 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a03a3b mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a03a3f jne 0x11a03a46 */
  if (!C.zf) goto L_11a03a46;
  /* 11a03a41 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a03a43 pop eax */
  EAX = (pop32());
  /* 11a03a44 jmp 0x11a03a50 */
  goto L_11a03a50;
L_11a03a46:;
  /* 11a03a46 mov eax, ebx */
  EAX = (EBX);
  /* 11a03a48 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a03a49 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a03a4b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a03a4d add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a03a50:;
  /* 11a03a50 push eax */
  push32((uint32_t)(EAX));
  /* 11a03a51 call dword ptr [0x11a06080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06080))), 0x11a03a57u);
  /* 11a03a57 mov edi, eax */
  EDI = (EAX);
  /* 11a03a59 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a5c je 0x11a03a75 */
  if (C.zf) goto L_11a03a75;
  /* 11a03a5e push edi */
  push32((uint32_t)(EDI));
  /* 11a03a5f call dword ptr [0x11a0607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0607c))), 0x11a03a65u);
  /* 11a03a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03a67 je 0x11a03a75 */
  if (C.zf) goto L_11a03a75;
  /* 11a03a69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a03a6e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a03a70 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a73 jne 0x11a03a7b */
  if (!C.zf) goto L_11a03a7b;
L_11a03a75:;
  /* 11a03a75 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a03a79 jmp 0x11a03a8a */
  goto L_11a03a8a;
L_11a03a7b:;
  /* 11a03a7b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a7e jne 0x11a03a8a */
  if (!C.zf) goto L_11a03a8a;
  /* 11a03a80 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a03a84 jmp 0x11a03a8a */
  goto L_11a03a8a;
L_11a03a86:;
  /* 11a03a86 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a03a8a:;
  /* 11a03a8a inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a03a8b cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03a8e jl 0x11a03a27 */
  if ((C.sf!=C.of)) goto L_11a03a27;
  /* 11a03a90 push dword ptr [0x11a08080] */
  push32((uint32_t)(r32((uint32_t)(0x11a08080))));
  /* 11a03a96 call dword ptr [0x11a06088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06088))), 0x11a03a9cu);
  /* 11a03a9c pop edi */
  EDI = (pop32());
  /* 11a03a9d pop esi */
  ESI = (pop32());
  /* 11a03a9e pop ebx */
  EBX = (pop32());
  /* 11a03a9f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a03aa0 ret  */
  ESPCHK(0x11a038e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003aa1 @ 0x11a03aa1 (84 bytes, 33 insns) */
void f_11a03aa1(void) {
  FTRACE(0x11a03aa1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03aa1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03aa2 push esi */
  push32((uint32_t)(ESI));
  /* 11a03aa3 push edi */
  push32((uint32_t)(EDI));
  /* 11a03aa4 mov esi, 0x11a07f80 */
  ESI = (0x11a07f80u);
L_11a03aa9:;
  /* 11a03aa9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a03aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03aad je 0x11a03ae6 */
  if (C.zf) goto L_11a03ae6;
  /* 11a03aaf mov edi, eax */
  EDI = (EAX);
  /* 11a03ab1 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03ab6 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ab8 jae 0x11a03adb */
  if (!C.cf) goto L_11a03adb;
  /* 11a03aba lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a03abd:;
  /* 11a03abd cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ac1 je 0x11a03aca */
  if (C.zf) goto L_11a03aca;
  /* 11a03ac3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03ac4 call dword ptr [0x11a06074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06074))), 0x11a03acau);
L_11a03aca:;
  /* 11a03aca mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a03acc add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03acf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03ad4 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03ad7 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ad9 jb 0x11a03abd */
  if (C.cf) goto L_11a03abd;
L_11a03adb:;
  /* 11a03adb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a03add call 0x11a04302 */
  push32(0x11a03ae2u); f_11a04302();
  /* 11a03ae2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a03ae5 pop ecx */
  ECX = (pop32());
L_11a03ae6:;
  /* 11a03ae6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03ae9 cmp esi, 0x11a08080 */
  { uint32_t _a=(ESI),_b=(0x11a08080u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03aef jl 0x11a03aa9 */
  if ((C.sf!=C.of)) goto L_11a03aa9;
  /* 11a03af1 pop edi */
  EDI = (pop32());
  /* 11a03af2 pop esi */
  ESI = (pop32());
  /* 11a03af3 pop ebx */
  EBX = (pop32());
  /* 11a03af4 ret  */
  ESPCHK(0x11a03aa1u, _esp0);
  ESP += 4; return;
}

/* FUN_10003af5 @ 0x11a03af5 (185 bytes, 71 insns) */
void f_11a03af5(void) {
  FTRACE(0x11a03af5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03af5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03af6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a03af8 cmp dword ptr [0x11a08088], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a08088))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03afe push esi */
  push32((uint32_t)(ESI));
  /* 11a03aff push edi */
  push32((uint32_t)(EDI));
  /* 11a03b00 jne 0x11a03b07 */
  if (!C.zf) goto L_11a03b07;
  /* 11a03b02 call 0x11a04923 */
  push32(0x11a03b07u); f_11a04923();
L_11a03b07:;
  /* 11a03b07 mov esi, dword ptr [0x11a07b30] */
  ESI = (r32((uint32_t)(0x11a07b30)));
  /* 11a03b0d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a03b0f:;
  /* 11a03b0f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a03b11 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03b13 je 0x11a03b27 */
  if (C.zf) goto L_11a03b27;
  /* 11a03b15 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03b17 je 0x11a03b1a */
  if (C.zf) goto L_11a03b1a;
  /* 11a03b19 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a03b1a:;
  /* 11a03b1a push esi */
  push32((uint32_t)(ESI));
  /* 11a03b1b call 0x11a044d0 */
  push32(0x11a03b20u); f_11a044d0();
  /* 11a03b20 pop ecx */
  ECX = (pop32());
  /* 11a03b21 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a03b25 jmp 0x11a03b0f */
  goto L_11a03b0f;
L_11a03b27:;
  /* 11a03b27 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a03b2e push eax */
  push32((uint32_t)(EAX));
  /* 11a03b2f call 0x11a0434a */
  push32(0x11a03b34u); f_11a0434a();
  /* 11a03b34 mov esi, eax */
  ESI = (EAX);
  /* 11a03b36 pop ecx */
  ECX = (pop32());
  /* 11a03b37 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03b39 mov dword ptr [0x11a07b60], esi */
  w32((uint32_t)(0x11a07b60), (ESI));
  /* 11a03b3f jne 0x11a03b49 */
  if (!C.zf) goto L_11a03b49;
  /* 11a03b41 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a03b43 call 0x11a0366f */
  push32(0x11a03b48u); f_11a0366f();
  /* 11a03b48 pop ecx */
  ECX = (pop32());
L_11a03b49:;
  /* 11a03b49 mov edi, dword ptr [0x11a07b30] */
  EDI = (r32((uint32_t)(0x11a07b30)));
  /* 11a03b4f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03b51 je 0x11a03b8c */
  if (C.zf) goto L_11a03b8c;
  /* 11a03b53 push ebp */
  push32((uint32_t)(EBP));
L_11a03b54:;
  /* 11a03b54 push edi */
  push32((uint32_t)(EDI));
  /* 11a03b55 call 0x11a044d0 */
  push32(0x11a03b5au); f_11a044d0();
  /* 11a03b5a mov ebp, eax */
  EBP = (EAX);
  /* 11a03b5c pop ecx */
  ECX = (pop32());
  /* 11a03b5d inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a03b5e cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03b61 je 0x11a03b85 */
  if (C.zf) goto L_11a03b85;
  /* 11a03b63 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03b64 call 0x11a0434a */
  push32(0x11a03b69u); f_11a0434a();
  /* 11a03b69 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03b6b pop ecx */
  ECX = (pop32());
  /* 11a03b6c mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a03b6e jne 0x11a03b78 */
  if (!C.zf) goto L_11a03b78;
  /* 11a03b70 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a03b72 call 0x11a0366f */
  push32(0x11a03b77u); f_11a0366f();
  /* 11a03b77 pop ecx */
  ECX = (pop32());
L_11a03b78:;
  /* 11a03b78 push edi */
  push32((uint32_t)(EDI));
  /* 11a03b79 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a03b7b call 0x11a043e0 */
  push32(0x11a03b80u); f_11a043e0();
  /* 11a03b80 pop ecx */
  ECX = (pop32());
  /* 11a03b81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03b84 pop ecx */
  ECX = (pop32());
L_11a03b85:;
  /* 11a03b85 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03b87 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03b89 jne 0x11a03b54 */
  if (!C.zf) goto L_11a03b54;
  /* 11a03b8b pop ebp */
  EBP = (pop32());
L_11a03b8c:;
  /* 11a03b8c push dword ptr [0x11a07b30] */
  push32((uint32_t)(r32((uint32_t)(0x11a07b30))));
  /* 11a03b92 call 0x11a04302 */
  push32(0x11a03b97u); f_11a04302();
  /* 11a03b97 pop ecx */
  ECX = (pop32());
  /* 11a03b98 mov dword ptr [0x11a07b30], ebx */
  w32((uint32_t)(0x11a07b30), (EBX));
  /* 11a03b9e mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a03ba0 pop edi */
  EDI = (pop32());
  /* 11a03ba1 pop esi */
  ESI = (pop32());
  /* 11a03ba2 mov dword ptr [0x11a08084], 1 */
  w32((uint32_t)(0x11a08084), (0x1u));
  /* 11a03bac pop ebx */
  EBX = (pop32());
  /* 11a03bad ret  */
  ESPCHK(0x11a03af5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bae @ 0x11a03bae (153 bytes, 62 insns) */
void f_11a03bae(void) {
  FTRACE(0x11a03baeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03bae push ebp */
  push32((uint32_t)(EBP));
  /* 11a03baf mov ebp, esp */
  EBP = (ESP);
  /* 11a03bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a03bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a03bb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03bb4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a03bb6 cmp dword ptr [0x11a08088], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a08088))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03bbc push esi */
  push32((uint32_t)(ESI));
  /* 11a03bbd push edi */
  push32((uint32_t)(EDI));
  /* 11a03bbe jne 0x11a03bc5 */
  if (!C.zf) goto L_11a03bc5;
  /* 11a03bc0 call 0x11a04923 */
  push32(0x11a03bc5u); f_11a04923();
L_11a03bc5:;
  /* 11a03bc5 mov esi, 0x11a07b84 */
  ESI = (0x11a07b84u);
  /* 11a03bca push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a03bcf push esi */
  push32((uint32_t)(ESI));
  /* 11a03bd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03bd1 call dword ptr [0x11a06070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06070))), 0x11a03bd7u);
  /* 11a03bd7 mov eax, dword ptr [0x11a08098] */
  EAX = (r32((uint32_t)(0x11a08098)));
  /* 11a03bdc mov dword ptr [0x11a07b70], esi */
  w32((uint32_t)(0x11a07b70), (ESI));
  /* 11a03be2 mov edi, esi */
  EDI = (ESI);
  /* 11a03be4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03be6 je 0x11a03bea */
  if (C.zf) goto L_11a03bea;
  /* 11a03be8 mov edi, eax */
  EDI = (EAX);
L_11a03bea:;
  /* 11a03bea lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a03bed push eax */
  push32((uint32_t)(EAX));
  /* 11a03bee lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a03bf1 push eax */
  push32((uint32_t)(EAX));
  /* 11a03bf2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03bf3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03bf4 push edi */
  push32((uint32_t)(EDI));
  /* 11a03bf5 call 0x11a03c47 */
  push32(0x11a03bfau); f_11a03c47();
  /* 11a03bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a03bfd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a03c00 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a03c03 push eax */
  push32((uint32_t)(EAX));
  /* 11a03c04 call 0x11a0434a */
  push32(0x11a03c09u); f_11a0434a();
  /* 11a03c09 mov esi, eax */
  ESI = (EAX);
  /* 11a03c0b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03c0e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03c10 jne 0x11a03c1a */
  if (!C.zf) goto L_11a03c1a;
  /* 11a03c12 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a03c14 call 0x11a0366f */
  push32(0x11a03c19u); f_11a0366f();
  /* 11a03c19 pop ecx */
  ECX = (pop32());
L_11a03c1a:;
  /* 11a03c1a lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a03c1d push eax */
  push32((uint32_t)(EAX));
  /* 11a03c1e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a03c21 push eax */
  push32((uint32_t)(EAX));
  /* 11a03c22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a03c25 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a03c28 push eax */
  push32((uint32_t)(EAX));
  /* 11a03c29 push esi */
  push32((uint32_t)(ESI));
  /* 11a03c2a push edi */
  push32((uint32_t)(EDI));
  /* 11a03c2b call 0x11a03c47 */
  push32(0x11a03c30u); f_11a03c47();
  /* 11a03c30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a03c33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03c36 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a03c37 mov dword ptr [0x11a07b58], esi */
  w32((uint32_t)(0x11a07b58), (ESI));
  /* 11a03c3d pop edi */
  EDI = (pop32());
  /* 11a03c3e pop esi */
  ESI = (pop32());
  /* 11a03c3f mov dword ptr [0x11a07b54], eax */
  w32((uint32_t)(0x11a07b54), (EAX));
  /* 11a03c44 pop ebx */
  EBX = (pop32());
  /* 11a03c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a03c46 ret  */
  ESPCHK(0x11a03baeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003c47 @ 0x11a03c47 (436 bytes, 187 insns) */
void f_11a03c47(void) {
  FTRACE(0x11a03c47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03c47 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03c48 mov ebp, esp */
  EBP = (ESP);
  /* 11a03c4a mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a03c4d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a03c50 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03c51 push esi */
  push32((uint32_t)(ESI));
  /* 11a03c52 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a03c55 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a03c58 push edi */
  push32((uint32_t)(EDI));
  /* 11a03c59 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a03c5c mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a03c62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a03c65 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a03c67 je 0x11a03c71 */
  if (C.zf) goto L_11a03c71;
  /* 11a03c69 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a03c6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03c6e mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a03c71:;
  /* 11a03c71 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03c74 jne 0x11a03cba */
  if (!C.zf) goto L_11a03cba;
L_11a03c76:;
  /* 11a03c76 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a03c79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03c7a cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03c7d je 0x11a03ca8 */
  if (C.zf) goto L_11a03ca8;
  /* 11a03c7f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a03c81 je 0x11a03ca8 */
  if (C.zf) goto L_11a03ca8;
  /* 11a03c83 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a03c86 test byte ptr [edx + 0x11a07e61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a07e61)))&(0x4u); fl_logic(_r,8); }
  /* 11a03c8d je 0x11a03c9b */
  if (C.zf) goto L_11a03c9b;
  /* 11a03c8f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03c91 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03c93 je 0x11a03c9b */
  if (C.zf) goto L_11a03c9b;
  /* 11a03c95 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03c97 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a03c99 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03c9a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a03c9b:;
  /* 11a03c9b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03c9d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03c9f je 0x11a03c76 */
  if (C.zf) goto L_11a03c76;
  /* 11a03ca1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03ca3 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a03ca5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03ca6 jmp 0x11a03c76 */
  goto L_11a03c76;
L_11a03ca8:;
  /* 11a03ca8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03caa test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03cac je 0x11a03cb2 */
  if (C.zf) goto L_11a03cb2;
  /* 11a03cae and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a03cb1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a03cb2:;
  /* 11a03cb2 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03cb5 jne 0x11a03cfd */
  if (!C.zf) goto L_11a03cfd;
  /* 11a03cb7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03cb8 jmp 0x11a03cfd */
  goto L_11a03cfd;
L_11a03cba:;
  /* 11a03cba inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03cbc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03cbe je 0x11a03cc5 */
  if (C.zf) goto L_11a03cc5;
  /* 11a03cc0 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03cc2 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a03cc4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a03cc5:;
  /* 11a03cc5 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03cc7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03cc8 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a03ccb test byte ptr [ebx + 0x11a07e61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a07e61)))&(0x4u); fl_logic(_r,8); }
  /* 11a03cd2 je 0x11a03ce0 */
  if (C.zf) goto L_11a03ce0;
  /* 11a03cd4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03cd6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03cd8 je 0x11a03cdf */
  if (C.zf) goto L_11a03cdf;
  /* 11a03cda mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a03cdc mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a03cde inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a03cdf:;
  /* 11a03cdf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a03ce0:;
  /* 11a03ce0 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03ce3 je 0x11a03cee */
  if (C.zf) goto L_11a03cee;
  /* 11a03ce5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a03ce7 je 0x11a03cf2 */
  if (C.zf) goto L_11a03cf2;
  /* 11a03ce9 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03cec jne 0x11a03cba */
  if (!C.zf) goto L_11a03cba;
L_11a03cee:;
  /* 11a03cee test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a03cf0 jne 0x11a03cf5 */
  if (!C.zf) goto L_11a03cf5;
L_11a03cf2:;
  /* 11a03cf2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a03cf3 jmp 0x11a03cfd */
  goto L_11a03cfd;
L_11a03cf5:;
  /* 11a03cf5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03cf7 je 0x11a03cfd */
  if (C.zf) goto L_11a03cfd;
  /* 11a03cf9 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a03cfd:;
  /* 11a03cfd and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a03d01:;
  /* 11a03d01 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d04 je 0x11a03dea */
  if (C.zf) goto L_11a03dea;
L_11a03d0a:;
  /* 11a03d0a mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03d0c cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d0f je 0x11a03d16 */
  if (C.zf) goto L_11a03d16;
  /* 11a03d11 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d14 jne 0x11a03d19 */
  if (!C.zf) goto L_11a03d19;
L_11a03d16:;
  /* 11a03d16 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03d17 jmp 0x11a03d0a */
  goto L_11a03d0a;
L_11a03d19:;
  /* 11a03d19 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d1c je 0x11a03dea */
  if (C.zf) goto L_11a03dea;
  /* 11a03d22 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a03d24 je 0x11a03d2e */
  if (C.zf) goto L_11a03d2e;
  /* 11a03d26 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a03d28 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03d2b mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a03d2e:;
  /* 11a03d2e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a03d31 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a03d33:;
  /* 11a03d33 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a03d3a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a03d3c:;
  /* 11a03d3c cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d3f jne 0x11a03d45 */
  if (!C.zf) goto L_11a03d45;
  /* 11a03d41 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03d42 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a03d43 jmp 0x11a03d3c */
  goto L_11a03d3c;
L_11a03d45:;
  /* 11a03d45 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d48 jne 0x11a03d76 */
  if (!C.zf) goto L_11a03d76;
  /* 11a03d4a test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a03d4d jne 0x11a03d74 */
  if (!C.zf) goto L_11a03d74;
  /* 11a03d4f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a03d51 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03d54 je 0x11a03d63 */
  if (C.zf) goto L_11a03d63;
  /* 11a03d56 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d5a lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a03d5d jne 0x11a03d63 */
  if (!C.zf) goto L_11a03d63;
  /* 11a03d5f mov eax, edx */
  EAX = (EDX);
  /* 11a03d61 jmp 0x11a03d66 */
  goto L_11a03d66;
L_11a03d63:;
  /* 11a03d63 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a03d66:;
  /* 11a03d66 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a03d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a03d6b cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03d6e sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a03d71 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a03d74:;
  /* 11a03d74 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a03d76:;
  /* 11a03d76 mov edx, ebx */
  EDX = (EBX);
  /* 11a03d78 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a03d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a03d7b je 0x11a03d8b */
  if (C.zf) goto L_11a03d8b;
  /* 11a03d7d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a03d7e:;
  /* 11a03d7e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03d80 je 0x11a03d86 */
  if (C.zf) goto L_11a03d86;
  /* 11a03d82 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a03d85 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a03d86:;
  /* 11a03d86 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03d88 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a03d89 jne 0x11a03d7e */
  if (!C.zf) goto L_11a03d7e;
L_11a03d8b:;
  /* 11a03d8b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03d8d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a03d8f je 0x11a03ddb */
  if (C.zf) goto L_11a03ddb;
  /* 11a03d91 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03d95 jne 0x11a03da1 */
  if (!C.zf) goto L_11a03da1;
  /* 11a03d97 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d9a je 0x11a03ddb */
  if (C.zf) goto L_11a03ddb;
  /* 11a03d9c cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03d9f je 0x11a03ddb */
  if (C.zf) goto L_11a03ddb;
L_11a03da1:;
  /* 11a03da1 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03da5 je 0x11a03dd5 */
  if (C.zf) goto L_11a03dd5;
  /* 11a03da7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03da9 je 0x11a03dc4 */
  if (C.zf) goto L_11a03dc4;
  /* 11a03dab movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a03dae test byte ptr [ebx + 0x11a07e61], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a07e61)))&(0x4u); fl_logic(_r,8); }
  /* 11a03db5 je 0x11a03dbd */
  if (C.zf) goto L_11a03dbd;
  /* 11a03db7 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a03db9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03dba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03dbb inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a03dbd:;
  /* 11a03dbd mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a03dbf mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a03dc1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a03dc2 jmp 0x11a03dd3 */
  goto L_11a03dd3;
L_11a03dc4:;
  /* 11a03dc4 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a03dc7 test byte ptr [edx + 0x11a07e61], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a07e61)))&(0x4u); fl_logic(_r,8); }
  /* 11a03dce je 0x11a03dd3 */
  if (C.zf) goto L_11a03dd3;
  /* 11a03dd0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03dd1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a03dd3:;
  /* 11a03dd3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a03dd5:;
  /* 11a03dd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03dd6 jmp 0x11a03d33 */
  goto L_11a03d33;
L_11a03ddb:;
  /* 11a03ddb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a03ddd je 0x11a03de3 */
  if (C.zf) goto L_11a03de3;
  /* 11a03ddf and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a03de2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a03de3:;
  /* 11a03de3 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a03de5 jmp 0x11a03d01 */
  goto L_11a03d01;
L_11a03dea:;
  /* 11a03dea test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a03dec je 0x11a03df1 */
  if (C.zf) goto L_11a03df1;
  /* 11a03dee and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a03df1:;
  /* 11a03df1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a03df4 pop edi */
  EDI = (pop32());
  /* 11a03df5 pop esi */
  ESI = (pop32());
  /* 11a03df6 pop ebx */
  EBX = (pop32());
  /* 11a03df7 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a03df9 pop ebp */
  EBP = (pop32());
  /* 11a03dfa ret  */
  ESPCHK(0x11a03c47u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dfb @ 0x11a03dfb (306 bytes, 132 insns) */
void f_11a03dfb(void) {
  FTRACE(0x11a03dfbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11a03dfc push ecx */
  push32((uint32_t)(ECX));
  /* 11a03dfd mov eax, dword ptr [0x11a07c88] */
  EAX = (r32((uint32_t)(0x11a07c88)));
  /* 11a03e02 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e03 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03e04 mov ebp, dword ptr [0x11a0605c] */
  EBP = (r32((uint32_t)(0x11a0605c)));
  /* 11a03e0a push esi */
  push32((uint32_t)(ESI));
  /* 11a03e0b push edi */
  push32((uint32_t)(EDI));
  /* 11a03e0c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a03e0e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a03e10 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a03e12 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e14 jne 0x11a03e49 */
  if (!C.zf) goto L_11a03e49;
  /* 11a03e16 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03e18u);
  /* 11a03e18 mov esi, eax */
  ESI = (EAX);
  /* 11a03e1a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e1c je 0x11a03e2a */
  if (C.zf) goto L_11a03e2a;
  /* 11a03e1e mov dword ptr [0x11a07c88], 1 */
  w32((uint32_t)(0x11a07c88), (0x1u));
  /* 11a03e28 jmp 0x11a03e52 */
  goto L_11a03e52;
L_11a03e2a:;
  /* 11a03e2a call dword ptr [0x11a0606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0606c))), 0x11a03e30u);
  /* 11a03e30 mov edi, eax */
  EDI = (EAX);
  /* 11a03e32 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e34 je 0x11a03f24 */
  if (C.zf) goto L_11a03f24;
  /* 11a03e3a mov dword ptr [0x11a07c88], 2 */
  w32((uint32_t)(0x11a07c88), (0x2u));
  /* 11a03e44 jmp 0x11a03ed8 */
  goto L_11a03ed8;
L_11a03e49:;
  /* 11a03e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e4c jne 0x11a03ed3 */
  if (!C.zf) goto L_11a03ed3;
L_11a03e52:;
  /* 11a03e52 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e54 jne 0x11a03e62 */
  if (!C.zf) goto L_11a03e62;
  /* 11a03e56 call ebp */
  call_ind((uint32_t)(EBP), 0x11a03e58u);
  /* 11a03e58 mov esi, eax */
  ESI = (EAX);
  /* 11a03e5a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e5c je 0x11a03f24 */
  if (C.zf) goto L_11a03f24;
L_11a03e62:;
  /* 11a03e62 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a03e65 mov eax, esi */
  EAX = (ESI);
  /* 11a03e67 je 0x11a03e77 */
  if (C.zf) goto L_11a03e77;
L_11a03e69:;
  /* 11a03e69 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03e6a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03e6b cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a03e6e jne 0x11a03e69 */
  if (!C.zf) goto L_11a03e69;
  /* 11a03e70 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03e71 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03e72 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a03e75 jne 0x11a03e69 */
  if (!C.zf) goto L_11a03e69;
L_11a03e77:;
  /* 11a03e77 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a03e79 mov edi, dword ptr [0x11a06064] */
  EDI = (r32((uint32_t)(0x11a06064)));
  /* 11a03e7f sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a03e81 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e82 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03e84 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e85 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e86 push eax */
  push32((uint32_t)(EAX));
  /* 11a03e87 push esi */
  push32((uint32_t)(ESI));
  /* 11a03e88 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e89 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03e8a mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a03e8e call edi */
  call_ind((uint32_t)(EDI), 0x11a03e90u);
  /* 11a03e90 mov ebp, eax */
  EBP = (EAX);
  /* 11a03e92 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e94 je 0x11a03ec8 */
  if (C.zf) goto L_11a03ec8;
  /* 11a03e96 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03e97 call 0x11a0434a */
  push32(0x11a03e9cu); f_11a0434a();
  /* 11a03e9c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03e9e pop ecx */
  ECX = (pop32());
  /* 11a03e9f mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a03ea3 je 0x11a03ec8 */
  if (C.zf) goto L_11a03ec8;
  /* 11a03ea5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03ea7 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11a03ea9 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a03ead push esi */
  push32((uint32_t)(ESI));
  /* 11a03eae push ebx */
  push32((uint32_t)(EBX));
  /* 11a03eaf push ebx */
  push32((uint32_t)(EBX));
  /* 11a03eb0 call edi */
  call_ind((uint32_t)(EDI), 0x11a03eb2u);
  /* 11a03eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03eb4 jne 0x11a03ec4 */
  if (!C.zf) goto L_11a03ec4;
  /* 11a03eb6 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a03eba call 0x11a04302 */
  push32(0x11a03ebfu); f_11a04302();
  /* 11a03ebf pop ecx */
  ECX = (pop32());
  /* 11a03ec0 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a03ec4:;
  /* 11a03ec4 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a03ec8:;
  /* 11a03ec8 push esi */
  push32((uint32_t)(ESI));
  /* 11a03ec9 call dword ptr [0x11a06068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06068))), 0x11a03ecfu);
  /* 11a03ecf mov eax, ebx */
  EAX = (EBX);
  /* 11a03ed1 jmp 0x11a03f26 */
  goto L_11a03f26;
L_11a03ed3:;
  /* 11a03ed3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ed6 jne 0x11a03f24 */
  if (!C.zf) goto L_11a03f24;
L_11a03ed8:;
  /* 11a03ed8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03eda jne 0x11a03ee8 */
  if (!C.zf) goto L_11a03ee8;
  /* 11a03edc call dword ptr [0x11a0606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0606c))), 0x11a03ee2u);
  /* 11a03ee2 mov edi, eax */
  EDI = (EAX);
  /* 11a03ee4 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ee6 je 0x11a03f24 */
  if (C.zf) goto L_11a03f24;
L_11a03ee8:;
  /* 11a03ee8 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03eea mov eax, edi */
  EAX = (EDI);
  /* 11a03eec je 0x11a03ef8 */
  if (C.zf) goto L_11a03ef8;
L_11a03eee:;
  /* 11a03eee inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03eef cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03ef1 jne 0x11a03eee */
  if (!C.zf) goto L_11a03eee;
  /* 11a03ef3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03ef4 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a03ef6 jne 0x11a03eee */
  if (!C.zf) goto L_11a03eee;
L_11a03ef8:;
  /* 11a03ef8 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a03efa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a03efb mov ebp, eax */
  EBP = (EAX);
  /* 11a03efd push ebp */
  push32((uint32_t)(EBP));
  /* 11a03efe call 0x11a0434a */
  push32(0x11a03f03u); f_11a0434a();
  /* 11a03f03 mov esi, eax */
  ESI = (EAX);
  /* 11a03f05 pop ecx */
  ECX = (pop32());
  /* 11a03f06 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03f08 jne 0x11a03f0e */
  if (!C.zf) goto L_11a03f0e;
  /* 11a03f0a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a03f0c jmp 0x11a03f19 */
  goto L_11a03f19;
L_11a03f0e:;
  /* 11a03f0e push ebp */
  push32((uint32_t)(EBP));
  /* 11a03f0f push edi */
  push32((uint32_t)(EDI));
  /* 11a03f10 push esi */
  push32((uint32_t)(ESI));
  /* 11a03f11 call 0x11a04940 */
  push32(0x11a03f16u); f_11a04940();
  /* 11a03f16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a03f19:;
  /* 11a03f19 push edi */
  push32((uint32_t)(EDI));
  /* 11a03f1a call dword ptr [0x11a06078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06078))), 0x11a03f20u);
  /* 11a03f20 mov eax, esi */
  EAX = (ESI);
  /* 11a03f22 jmp 0x11a03f26 */
  goto L_11a03f26;
L_11a03f24:;
  /* 11a03f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a03f26:;
  /* 11a03f26 pop edi */
  EDI = (pop32());
  /* 11a03f27 pop esi */
  ESI = (pop32());
  /* 11a03f28 pop ebp */
  EBP = (pop32());
  /* 11a03f29 pop ebx */
  EBX = (pop32());
  /* 11a03f2a pop ecx */
  ECX = (pop32());
  /* 11a03f2b pop ecx */
  ECX = (pop32());
  /* 11a03f2c ret  */
  ESPCHK(0x11a03dfbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f2d @ 0x11a03f2d (60 bytes, 20 insns) */
void f_11a03f2d(void) {
  FTRACE(0x11a03f2du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03f2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a03f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a03f31 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03f35 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a03f3a sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a03f3d push eax */
  push32((uint32_t)(EAX));
  /* 11a03f3e call dword ptr [0x11a06060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06060))), 0x11a03f44u);
  /* 11a03f44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03f46 mov dword ptr [0x11a07f68], eax */
  w32((uint32_t)(0x11a07f68), (EAX));
  /* 11a03f4b je 0x11a03f62 */
  if (C.zf) goto L_11a03f62;
  /* 11a03f4d call 0x11a04c75 */
  push32(0x11a03f52u); f_11a04c75();
  /* 11a03f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03f54 jne 0x11a03f65 */
  if (!C.zf) goto L_11a03f65;
  /* 11a03f56 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a03f5c call dword ptr [0x11a06058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06058))), 0x11a03f62u);
L_11a03f62:;
  /* 11a03f62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a03f64 ret  */
  ESPCHK(0x11a03f2du, _esp0);
  ESP += 4; return;
L_11a03f65:;
  /* 11a03f65 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a03f67 pop eax */
  EAX = (pop32());
  /* 11a03f68 ret  */
  ESPCHK(0x11a03f2du, _esp0);
  ESP += 4; return;
}

/* FUN_10003f69 @ 0x11a03f69 (117 bytes, 38 insns) */
void f_11a03f69(void) {
  FTRACE(0x11a03f69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03f69 push ebx */
  push32((uint32_t)(EBX));
  /* 11a03f6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a03f6c cmp dword ptr [0x11a07d40], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a07d40))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03f72 push ebp */
  push32((uint32_t)(EBP));
  /* 11a03f73 mov ebp, dword ptr [0x11a0604c] */
  EBP = (r32((uint32_t)(0x11a0604c)));
  /* 11a03f79 jle 0x11a03fbf */
  if ((C.zf||C.sf!=C.of)) goto L_11a03fbf;
  /* 11a03f7b mov eax, dword ptr [0x11a07d44] */
  EAX = (r32((uint32_t)(0x11a07d44)));
  /* 11a03f80 push esi */
  push32((uint32_t)(ESI));
  /* 11a03f81 push edi */
  push32((uint32_t)(EDI));
  /* 11a03f82 mov edi, dword ptr [0x11a06050] */
  EDI = (r32((uint32_t)(0x11a06050)));
  /* 11a03f88 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a03f8b:;
  /* 11a03f8b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a03f90 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a03f95 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a03f97 call edi */
  call_ind((uint32_t)(EDI), 0x11a03f99u);
  /* 11a03f99 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a03f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a03fa0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a03fa2 call edi */
  call_ind((uint32_t)(EDI), 0x11a03fa4u);
  /* 11a03fa4 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a03fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a03fa9 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a03faf call ebp */
  call_ind((uint32_t)(EBP), 0x11a03fb1u);
  /* 11a03fb1 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a03fb4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a03fb5 cmp ebx, dword ptr [0x11a07d40] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a07d40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03fbb jl 0x11a03f8b */
  if ((C.sf!=C.of)) goto L_11a03f8b;
  /* 11a03fbd pop edi */
  EDI = (pop32());
  /* 11a03fbe pop esi */
  ESI = (pop32());
L_11a03fbf:;
  /* 11a03fbf push dword ptr [0x11a07d44] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d44))));
  /* 11a03fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a03fc7 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a03fcd call ebp */
  call_ind((uint32_t)(EBP), 0x11a03fcfu);
  /* 11a03fcf push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a03fd5 call dword ptr [0x11a06058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06058))), 0x11a03fdbu);
  /* 11a03fdb pop ebp */
  EBP = (pop32());
  /* 11a03fdc pop ebx */
  EBX = (pop32());
  /* 11a03fdd ret  */
  ESPCHK(0x11a03f69u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fde @ 0x11a03fde (57 bytes, 18 insns) */
void f_11a03fde(void) {
  FTRACE(0x11a03fdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a03fde mov eax, dword ptr [0x11a07b38] */
  EAX = (r32((uint32_t)(0x11a07b38)));
  /* 11a03fe3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03fe6 je 0x11a03ff5 */
  if (C.zf) goto L_11a03ff5;
  /* 11a03fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a03fea jne 0x11a04016 */
  if (!C.zf) goto L_11a04016;
  /* 11a03fec cmp dword ptr [0x11a07b3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a07b3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a03ff3 jne 0x11a04016 */
  if (!C.zf) goto L_11a04016;
L_11a03ff5:;
  /* 11a03ff5 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a03ffa call 0x11a04017 */
  push32(0x11a03fffu); f_11a04017();
  /* 11a03fff mov eax, dword ptr [0x11a07c8c] */
  EAX = (r32((uint32_t)(0x11a07c8c)));
  /* 11a04004 pop ecx */
  ECX = (pop32());
  /* 11a04005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a04007 je 0x11a0400b */
  if (C.zf) goto L_11a0400b;
  /* 11a04009 call eax */
  call_ind((uint32_t)(EAX), 0x11a0400bu);
L_11a0400b:;
  /* 11a0400b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a04010 call 0x11a04017 */
  push32(0x11a04015u); f_11a04017();
  /* 11a04015 pop ecx */
  ECX = (pop32());
L_11a04016:;
  /* 11a04016 ret  */
  ESPCHK(0x11a03fdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10004017 @ 0x11a04017 (339 bytes, 100 insns) */
void f_11a04017(void) {
  FTRACE(0x11a04017u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04017 push ebp */
  push32((uint32_t)(EBP));
  /* 11a04018 mov ebp, esp */
  EBP = (ESP);
  /* 11a0401a sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04020 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04023 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a04025 mov eax, 0x11a074b8 */
  EAX = (0x11a074b8u);
L_11a0402a:;
  /* 11a0402a cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0402c je 0x11a04039 */
  if (C.zf) goto L_11a04039;
  /* 11a0402e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04031 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a04032 cmp eax, 0x11a07548 */
  { uint32_t _a=(EAX),_b=(0x11a07548u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04037 jl 0x11a0402a */
  if ((C.sf!=C.of)) goto L_11a0402a;
L_11a04039:;
  /* 11a04039 push esi */
  push32((uint32_t)(ESI));
  /* 11a0403a mov esi, ecx */
  ESI = (ECX);
  /* 11a0403c shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a0403f cmp edx, dword ptr [esi + 0x11a074b8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a074b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04045 jne 0x11a04167 */
  if (!C.zf) goto L_11a04167;
  /* 11a0404b mov eax, dword ptr [0x11a07b38] */
  EAX = (r32((uint32_t)(0x11a07b38)));
  /* 11a04050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04053 je 0x11a04141 */
  if (C.zf) goto L_11a04141;
  /* 11a04059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0405b jne 0x11a0406a */
  if (!C.zf) goto L_11a0406a;
  /* 11a0405d cmp dword ptr [0x11a07b3c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a07b3c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04064 je 0x11a04141 */
  if (C.zf) goto L_11a04141;
L_11a0406a:;
  /* 11a0406a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04070 je 0x11a04167 */
  if (C.zf) goto L_11a04167;
  /* 11a04076 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a0407c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a04081 push eax */
  push32((uint32_t)(EAX));
  /* 11a04082 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a04084 call dword ptr [0x11a06070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06070))), 0x11a0408au);
  /* 11a0408a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0408c jne 0x11a040a1 */
  if (!C.zf) goto L_11a040a1;
  /* 11a0408e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a04094 push 0x11a06450 */
  push32((uint32_t)(0x11a06450u));
  /* 11a04099 push eax */
  push32((uint32_t)(EAX));
  /* 11a0409a call 0x11a043e0 */
  push32(0x11a0409fu); f_11a043e0();
  /* 11a0409f pop ecx */
  ECX = (pop32());
  /* 11a040a0 pop ecx */
  ECX = (pop32());
L_11a040a1:;
  /* 11a040a1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a040a7 push edi */
  push32((uint32_t)(EDI));
  /* 11a040a8 push eax */
  push32((uint32_t)(EAX));
  /* 11a040a9 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a040af call 0x11a044d0 */
  push32(0x11a040b4u); f_11a044d0();
  /* 11a040b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a040b5 pop ecx */
  ECX = (pop32());
  /* 11a040b6 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a040b9 jbe 0x11a040e4 */
  if ((C.cf||C.zf)) goto L_11a040e4;
  /* 11a040bb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a040c1 push eax */
  push32((uint32_t)(EAX));
  /* 11a040c2 call 0x11a044d0 */
  push32(0x11a040c7u); f_11a044d0();
  /* 11a040c7 mov edi, eax */
  EDI = (EAX);
  /* 11a040c9 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a040cf sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a040d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a040d4 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a040d6 push 0x11a0644c */
  push32((uint32_t)(0x11a0644cu));
  /* 11a040db push edi */
  push32((uint32_t)(EDI));
  /* 11a040dc call 0x11a05550 */
  push32(0x11a040e1u); f_11a05550();
  /* 11a040e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a040e4:;
  /* 11a040e4 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a040ea push 0x11a06430 */
  push32((uint32_t)(0x11a06430u));
  /* 11a040ef push eax */
  push32((uint32_t)(EAX));
  /* 11a040f0 call 0x11a043e0 */
  push32(0x11a040f5u); f_11a043e0();
  /* 11a040f5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a040fb push edi */
  push32((uint32_t)(EDI));
  /* 11a040fc push eax */
  push32((uint32_t)(EAX));
  /* 11a040fd call 0x11a043f0 */
  push32(0x11a04102u); f_11a043f0();
  /* 11a04102 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a04108 push 0x11a0642c */
  push32((uint32_t)(0x11a0642cu));
  /* 11a0410d push eax */
  push32((uint32_t)(EAX));
  /* 11a0410e call 0x11a043f0 */
  push32(0x11a04113u); f_11a043f0();
  /* 11a04113 push dword ptr [esi + 0x11a074bc] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a074bc))));
  /* 11a04119 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a0411f push eax */
  push32((uint32_t)(EAX));
  /* 11a04120 call 0x11a043f0 */
  push32(0x11a04125u); f_11a043f0();
  /* 11a04125 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a0412a lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a04130 push 0x11a06404 */
  push32((uint32_t)(0x11a06404u));
  /* 11a04135 push eax */
  push32((uint32_t)(EAX));
  /* 11a04136 call 0x11a054be */
  push32(0x11a0413bu); f_11a054be();
  /* 11a0413b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0413e pop edi */
  EDI = (pop32());
  /* 11a0413f jmp 0x11a04167 */
  goto L_11a04167;
L_11a04141:;
  /* 11a04141 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a04144 lea esi, [esi + 0x11a074bc] */
  ESI = ((uint32_t)(ESI + 0x11a074bc));
  /* 11a0414a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0414c push eax */
  push32((uint32_t)(EAX));
  /* 11a0414d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a0414f call 0x11a044d0 */
  push32(0x11a04154u); f_11a044d0();
  /* 11a04154 pop ecx */
  ECX = (pop32());
  /* 11a04155 push eax */
  push32((uint32_t)(EAX));
  /* 11a04156 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a04158 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a0415a call dword ptr [0x11a06080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06080))), 0x11a04160u);
  /* 11a04160 push eax */
  push32((uint32_t)(EAX));
  /* 11a04161 call dword ptr [0x11a06054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06054))), 0x11a04167u);
L_11a04167:;
  /* 11a04167 pop esi */
  ESI = (pop32());
  /* 11a04168 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04169 ret  */
  ESPCHK(0x11a04017u, _esp0);
  ESP += 4; return;
}

/* FUN_1000416a @ 0x11a0416a (41 bytes, 12 insns) */
void f_11a0416a(void) {
  FTRACE(0x11a0416au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0416a push esi */
  push32((uint32_t)(ESI));
  /* 11a0416b mov esi, dword ptr [0x11a06044] */
  ESI = (r32((uint32_t)(0x11a06044)));
  /* 11a04171 push dword ptr [0x11a0758c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0758c))));
  /* 11a04177 call esi */
  call_ind((uint32_t)(ESI), 0x11a04179u);
  /* 11a04179 push dword ptr [0x11a0757c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0757c))));
  /* 11a0417f call esi */
  call_ind((uint32_t)(ESI), 0x11a04181u);
  /* 11a04181 push dword ptr [0x11a0756c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0756c))));
  /* 11a04187 call esi */
  call_ind((uint32_t)(ESI), 0x11a04189u);
  /* 11a04189 push dword ptr [0x11a0754c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0754c))));
  /* 11a0418f call esi */
  call_ind((uint32_t)(ESI), 0x11a04191u);
  /* 11a04191 pop esi */
  ESI = (pop32());
  /* 11a04192 ret  */
  ESPCHK(0x11a0416au, _esp0);
  ESP += 4; return;
}

/* FUN_10004193 @ 0x11a04193 (108 bytes, 34 insns) */
void f_11a04193(void) {
  FTRACE(0x11a04193u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04193 push esi */
  push32((uint32_t)(ESI));
  /* 11a04194 push edi */
  push32((uint32_t)(EDI));
  /* 11a04195 mov edi, dword ptr [0x11a06074] */
  EDI = (r32((uint32_t)(0x11a06074)));
  /* 11a0419b mov esi, 0x11a07548 */
  ESI = (0x11a07548u);
L_11a041a0:;
  /* 11a041a0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a041a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a041a4 je 0x11a041d1 */
  if (C.zf) goto L_11a041d1;
  /* 11a041a6 cmp esi, 0x11a0758c */
  { uint32_t _a=(ESI),_b=(0x11a0758cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a041ac je 0x11a041d1 */
  if (C.zf) goto L_11a041d1;
  /* 11a041ae cmp esi, 0x11a0757c */
  { uint32_t _a=(ESI),_b=(0x11a0757cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a041b4 je 0x11a041d1 */
  if (C.zf) goto L_11a041d1;
  /* 11a041b6 cmp esi, 0x11a0756c */
  { uint32_t _a=(ESI),_b=(0x11a0756cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a041bc je 0x11a041d1 */
  if (C.zf) goto L_11a041d1;
  /* 11a041be cmp esi, 0x11a0754c */
  { uint32_t _a=(ESI),_b=(0x11a0754cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a041c4 je 0x11a041d1 */
  if (C.zf) goto L_11a041d1;
  /* 11a041c6 push eax */
  push32((uint32_t)(EAX));
  /* 11a041c7 call edi */
  call_ind((uint32_t)(EDI), 0x11a041c9u);
  /* 11a041c9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a041cb call 0x11a04302 */
  push32(0x11a041d0u); f_11a04302();
  /* 11a041d0 pop ecx */
  ECX = (pop32());
L_11a041d1:;
  /* 11a041d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a041d4 cmp esi, 0x11a07608 */
  { uint32_t _a=(ESI),_b=(0x11a07608u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a041da jl 0x11a041a0 */
  if ((C.sf!=C.of)) goto L_11a041a0;
  /* 11a041dc push dword ptr [0x11a0756c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0756c))));
  /* 11a041e2 call edi */
  call_ind((uint32_t)(EDI), 0x11a041e4u);
  /* 11a041e4 push dword ptr [0x11a0757c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0757c))));
  /* 11a041ea call edi */
  call_ind((uint32_t)(EDI), 0x11a041ecu);
  /* 11a041ec push dword ptr [0x11a0758c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0758c))));
  /* 11a041f2 call edi */
  call_ind((uint32_t)(EDI), 0x11a041f4u);
  /* 11a041f4 push dword ptr [0x11a0754c] */
  push32((uint32_t)(r32((uint32_t)(0x11a0754c))));
  /* 11a041fa call edi */
  call_ind((uint32_t)(EDI), 0x11a041fcu);
  /* 11a041fc pop edi */
  EDI = (pop32());
  /* 11a041fd pop esi */
  ESI = (pop32());
  /* 11a041fe ret  */
  ESPCHK(0x11a04193u, _esp0);
  ESP += 4; return;
}

/* FUN_100041ff @ 0x11a041ff (97 bytes, 37 insns) */
void f_11a041ff(void) {
  FTRACE(0x11a041ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a041ff push ebp */
  push32((uint32_t)(EBP));
  /* 11a04200 mov ebp, esp */
  EBP = (ESP);
  /* 11a04202 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04205 push esi */
  push32((uint32_t)(ESI));
  /* 11a04206 cmp dword ptr [eax*4 + 0x11a07548], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a07548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0420e lea esi, [eax*4 + 0x11a07548] */
  ESI = ((uint32_t)(EAX*4 + 0x11a07548));
  /* 11a04215 jne 0x11a04255 */
  if (!C.zf) goto L_11a04255;
  /* 11a04217 push edi */
  push32((uint32_t)(EDI));
  /* 11a04218 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a0421a call 0x11a0434a */
  push32(0x11a0421fu); f_11a0434a();
  /* 11a0421f mov edi, eax */
  EDI = (EAX);
  /* 11a04221 pop ecx */
  ECX = (pop32());
  /* 11a04222 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a04224 jne 0x11a0422e */
  if (!C.zf) goto L_11a0422e;
  /* 11a04226 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a04228 call 0x11a0366f */
  push32(0x11a0422du); f_11a0366f();
  /* 11a0422d pop ecx */
  ECX = (pop32());
L_11a0422e:;
  /* 11a0422e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a04230 call 0x11a041ff */
  push32(0x11a04235u); f_11a041ff();
  /* 11a04235 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04238 pop ecx */
  ECX = (pop32());
  /* 11a04239 push edi */
  push32((uint32_t)(EDI));
  /* 11a0423a jne 0x11a04246 */
  if (!C.zf) goto L_11a04246;
  /* 11a0423c call dword ptr [0x11a06044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06044))), 0x11a04242u);
  /* 11a04242 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a04244 jmp 0x11a0424c */
  goto L_11a0424c;
L_11a04246:;
  /* 11a04246 call 0x11a04302 */
  push32(0x11a0424bu); f_11a04302();
  /* 11a0424b pop ecx */
  ECX = (pop32());
L_11a0424c:;
  /* 11a0424c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a0424e call 0x11a04260 */
  push32(0x11a04253u); f_11a04260();
  /* 11a04253 pop ecx */
  ECX = (pop32());
  /* 11a04254 pop edi */
  EDI = (pop32());
L_11a04255:;
  /* 11a04255 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a04257 call dword ptr [0x11a06040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06040))), 0x11a0425du);
  /* 11a0425d pop esi */
  ESI = (pop32());
  /* 11a0425e pop ebp */
  EBP = (pop32());
  /* 11a0425f ret  */
  ESPCHK(0x11a041ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x11a04260 (21 bytes, 7 insns) */
void f_11a04260(void) {
  FTRACE(0x11a04260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04260 push ebp */
  push32((uint32_t)(EBP));
  /* 11a04261 mov ebp, esp */
  EBP = (ESP);
  /* 11a04263 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04266 push dword ptr [eax*4 + 0x11a07548] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a07548))));
  /* 11a0426d call dword ptr [0x11a06048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06048))), 0x11a04273u);
  /* 11a04273 pop ebp */
  EBP = (pop32());
  /* 11a04274 ret  */
  ESPCHK(0x11a04260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004275 @ 0x11a04275 (141 bytes, 56 insns) */
void f_11a04275(void) {
  FTRACE(0x11a04275u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04275 push ebx */
  push32((uint32_t)(EBX));
  /* 11a04276 push esi */
  push32((uint32_t)(ESI));
  /* 11a04277 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a0427b push edi */
  push32((uint32_t)(EDI));
  /* 11a0427c imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a04281 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04284 mov ebx, esi */
  EBX = (ESI);
  /* 11a04286 ja 0x11a04295 */
  if ((!C.cf&&!C.zf)) goto L_11a04295;
  /* 11a04288 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a0428a jne 0x11a0428f */
  if (!C.zf) goto L_11a0428f;
  /* 11a0428c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a0428e pop esi */
  ESI = (pop32());
L_11a0428f:;
  /* 11a0428f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04292 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11a04295:;
  /* 11a04295 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a04297 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0429a ja 0x11a042d6 */
  if ((!C.cf&&!C.zf)) goto L_11a042d6;
  /* 11a0429c cmp ebx, dword ptr [0x11a07790] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a07790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a042a2 ja 0x11a042c1 */
  if ((!C.cf&&!C.zf)) goto L_11a042c1;
  /* 11a042a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a042a6 call 0x11a041ff */
  push32(0x11a042abu); f_11a041ff();
  /* 11a042ab push ebx */
  push32((uint32_t)(EBX));
  /* 11a042ac call 0x11a05009 */
  push32(0x11a042b1u); f_11a05009();
  /* 11a042b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a042b3 mov edi, eax */
  EDI = (EAX);
  /* 11a042b5 call 0x11a04260 */
  push32(0x11a042bau); f_11a04260();
  /* 11a042ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a042bd test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a042bf jne 0x11a042ec */
  if (!C.zf) goto L_11a042ec;
L_11a042c1:;
  /* 11a042c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a042c2 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a042c4 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a042ca call dword ptr [0x11a0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0603c))), 0x11a042d0u);
  /* 11a042d0 mov edi, eax */
  EDI = (EAX);
  /* 11a042d2 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a042d4 jne 0x11a042f8 */
  if (!C.zf) goto L_11a042f8;
L_11a042d6:;
  /* 11a042d6 cmp dword ptr [0x11a07d04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a07d04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a042dd je 0x11a042f8 */
  if (C.zf) goto L_11a042f8;
  /* 11a042df push esi */
  push32((uint32_t)(ESI));
  /* 11a042e0 call 0x11a056a8 */
  push32(0x11a042e5u); f_11a056a8();
  /* 11a042e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a042e7 pop ecx */
  ECX = (pop32());
  /* 11a042e8 je 0x11a042fe */
  if (C.zf) goto L_11a042fe;
  /* 11a042ea jmp 0x11a04295 */
  goto L_11a04295;
L_11a042ec:;
  /* 11a042ec push ebx */
  push32((uint32_t)(EBX));
  /* 11a042ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11a042ef push edi */
  push32((uint32_t)(EDI));
  /* 11a042f0 call 0x11a05650 */
  push32(0x11a042f5u); f_11a05650();
  /* 11a042f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a042f8:;
  /* 11a042f8 mov eax, edi */
  EAX = (EDI);
L_11a042fa:;
  /* 11a042fa pop edi */
  EDI = (pop32());
  /* 11a042fb pop esi */
  ESI = (pop32());
  /* 11a042fc pop ebx */
  EBX = (pop32());
  /* 11a042fd ret  */
  ESPCHK(0x11a04275u, _esp0);
  ESP += 4; return;
L_11a042fe:;
  /* 11a042fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a04300 jmp 0x11a042fa */
  goto L_11a042fa;
}

/* FUN_10004302 @ 0x11a04302 (72 bytes, 29 insns) */
void f_11a04302(void) {
  FTRACE(0x11a04302u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04302 push esi */
  push32((uint32_t)(ESI));
  /* 11a04303 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a04307 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a04309 je 0x11a04348 */
  if (C.zf) goto L_11a04348;
  /* 11a0430b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a0430d call 0x11a041ff */
  push32(0x11a04312u); f_11a041ff();
  /* 11a04312 push esi */
  push32((uint32_t)(ESI));
  /* 11a04313 call 0x11a04cb3 */
  push32(0x11a04318u); f_11a04cb3();
  /* 11a04318 pop ecx */
  ECX = (pop32());
  /* 11a04319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0431b pop ecx */
  ECX = (pop32());
  /* 11a0431c je 0x11a04331 */
  if (C.zf) goto L_11a04331;
  /* 11a0431e push esi */
  push32((uint32_t)(ESI));
  /* 11a0431f push eax */
  push32((uint32_t)(EAX));
  /* 11a04320 call 0x11a04cde */
  push32(0x11a04325u); f_11a04cde();
  /* 11a04325 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a04327 call 0x11a04260 */
  push32(0x11a0432cu); f_11a04260();
  /* 11a0432c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0432f pop esi */
  ESI = (pop32());
  /* 11a04330 ret  */
  ESPCHK(0x11a04302u, _esp0);
  ESP += 4; return;
L_11a04331:;
  /* 11a04331 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a04333 call 0x11a04260 */
  push32(0x11a04338u); f_11a04260();
  /* 11a04338 pop ecx */
  ECX = (pop32());
  /* 11a04339 push esi */
  push32((uint32_t)(ESI));
  /* 11a0433a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0433c push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a04342 call dword ptr [0x11a0604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0604c))), 0x11a04348u);
L_11a04348:;
  /* 11a04348 pop esi */
  ESI = (pop32());
  /* 11a04349 ret  */
  ESPCHK(0x11a04302u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a0434a (18 bytes, 6 insns) */
void f_11a0434a(void) {
  FTRACE(0x11a0434au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0434a push dword ptr [0x11a07d04] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d04))));
  /* 11a04350 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a04354 call 0x11a0435c */
  push32(0x11a04359u); f_11a0435c();
  /* 11a04359 pop ecx */
  ECX = (pop32());
  /* 11a0435a pop ecx */
  ECX = (pop32());
  /* 11a0435b ret  */
  ESPCHK(0x11a0434au, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a0435c (44 bytes, 16 insns) */
void f_11a0435c(void) {
  FTRACE(0x11a0435cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0435c cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04361 ja 0x11a04385 */
  if ((!C.cf&&!C.zf)) goto L_11a04385;
L_11a04363:;
  /* 11a04363 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a04367 call 0x11a04388 */
  push32(0x11a0436cu); f_11a04388();
  /* 11a0436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0436e pop ecx */
  ECX = (pop32());
  /* 11a0436f jne 0x11a04387 */
  if (!C.zf) goto L_11a04387;
  /* 11a04371 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04375 je 0x11a04387 */
  if (C.zf) goto L_11a04387;
  /* 11a04377 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a0437b call 0x11a056a8 */
  push32(0x11a04380u); f_11a056a8();
  /* 11a04380 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a04382 pop ecx */
  ECX = (pop32());
  /* 11a04383 jne 0x11a04363 */
  if (!C.zf) goto L_11a04363;
L_11a04385:;
  /* 11a04385 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a04387:;
  /* 11a04387 ret  */
  ESPCHK(0x11a0435cu, _esp0);
  ESP += 4; return;
}

/* FUN_10004388 @ 0x11a04388 (78 bytes, 30 insns) */
void f_11a04388(void) {
  FTRACE(0x11a04388u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04388 push esi */
  push32((uint32_t)(ESI));
  /* 11a04389 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a0438d cmp esi, dword ptr [0x11a07790] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a07790))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04393 push edi */
  push32((uint32_t)(EDI));
  /* 11a04394 ja 0x11a043b7 */
  if ((!C.cf&&!C.zf)) goto L_11a043b7;
  /* 11a04396 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a04398 call 0x11a041ff */
  push32(0x11a0439du); f_11a041ff();
  /* 11a0439d push esi */
  push32((uint32_t)(ESI));
  /* 11a0439e call 0x11a05009 */
  push32(0x11a043a3u); f_11a05009();
  /* 11a043a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a043a5 mov edi, eax */
  EDI = (EAX);
  /* 11a043a7 call 0x11a04260 */
  push32(0x11a043acu); f_11a04260();
  /* 11a043ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a043af test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a043b1 je 0x11a043b7 */
  if (C.zf) goto L_11a043b7;
  /* 11a043b3 mov eax, edi */
  EAX = (EDI);
  /* 11a043b5 jmp 0x11a043d3 */
  goto L_11a043d3;
L_11a043b7:;
  /* 11a043b7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a043b9 jne 0x11a043be */
  if (!C.zf) goto L_11a043be;
  /* 11a043bb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a043bd pop esi */
  ESI = (pop32());
L_11a043be:;
  /* 11a043be add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a043c1 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a043c4 push esi */
  push32((uint32_t)(ESI));
  /* 11a043c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a043c7 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a043cd call dword ptr [0x11a0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0603c))), 0x11a043d3u);
L_11a043d3:;
  /* 11a043d3 pop edi */
  EDI = (pop32());
  /* 11a043d4 pop esi */
  ESI = (pop32());
  /* 11a043d5 ret  */
  ESPCHK(0x11a04388u, _esp0);
  ESP += 4; return;
}

/* FUN_100043e0 @ 0x11a043e0 (7 bytes, 3 insns) */
void f_11a043e0(void) {
  FTRACE(0x11a043e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a043e0 push edi */
  push32((uint32_t)(EDI));
  /* 11a043e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a043e5 jmp 0x11a04451 */
  jmp_ind(0x11a04451u); return;
}

/* FUN_100043f0 @ 0x11a043f0 (224 bytes, 84 insns) */
void f_11a043f0(void) {
  FTRACE(0x11a043f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a043f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a043f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a043f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a043fb je 0x11a0440c */
  if (C.zf) goto L_11a0440c;
L_11a043fd:;
  /* 11a043fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a043ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a04400 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a04402 je 0x11a0443f */
  if (C.zf) goto L_11a0443f;
  /* 11a04404 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a0440a jne 0x11a043fd */
  if (!C.zf) goto L_11a043fd;
L_11a0440c:;
  /* 11a0440c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a0440e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a04413 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04415 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a04418 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0441a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0441d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a04422 je 0x11a0440c */
  if (C.zf) goto L_11a0440c;
  /* 11a04424 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a04427 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a04429 je 0x11a0444e */
  if (C.zf) goto L_11a0444e;
  /* 11a0442b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a0442d je 0x11a04449 */
  if (C.zf) goto L_11a04449;
  /* 11a0442f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a04434 je 0x11a04444 */
  if (C.zf) goto L_11a04444;
  /* 11a04436 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a0443b je 0x11a0443f */
  if (C.zf) goto L_11a0443f;
  /* 11a0443d jmp 0x11a0440c */
  goto L_11a0440c;
L_11a0443f:;
  /* 11a0443f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a04442 jmp 0x11a04451 */
  goto L_11a04451;
L_11a04444:;
  /* 11a04444 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a04447 jmp 0x11a04451 */
  goto L_11a04451;
L_11a04449:;
  /* 11a04449 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a0444c jmp 0x11a04451 */
  goto L_11a04451;
L_11a0444e:;
  /* 11a0444e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a04451:;
  /* 11a04451 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a04455 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a0445b je 0x11a04476 */
  if (C.zf) goto L_11a04476;
L_11a0445d:;
  /* 11a0445d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a0445f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a04460 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a04462 je 0x11a044c8 */
  if (C.zf) goto L_11a044c8;
  /* 11a04464 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a04466 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a04467 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a0446d jne 0x11a0445d */
  if (!C.zf) goto L_11a0445d;
  /* 11a0446f jmp 0x11a04476 */
  goto L_11a04476;
L_11a04471:;
  /* 11a04471 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a04473 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a04476:;
  /* 11a04476 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a0447b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a0447d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0447f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a04482 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a04484 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a04486 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04489 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a0448e je 0x11a04471 */
  if (C.zf) goto L_11a04471;
  /* 11a04490 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a04492 je 0x11a044c8 */
  if (C.zf) goto L_11a044c8;
  /* 11a04494 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a04496 je 0x11a044bf */
  if (C.zf) goto L_11a044bf;
  /* 11a04498 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a0449e je 0x11a044b2 */
  if (C.zf) goto L_11a044b2;
  /* 11a044a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a044a6 je 0x11a044aa */
  if (C.zf) goto L_11a044aa;
  /* 11a044a8 jmp 0x11a04471 */
  goto L_11a04471;
L_11a044aa:;
  /* 11a044aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a044ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a044b0 pop edi */
  EDI = (pop32());
  /* 11a044b1 ret  */
  ESPCHK(0x11a043f0u, _esp0);
  ESP += 4; return;
L_11a044b2:;
  /* 11a044b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a044b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a044b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a044bd pop edi */
  EDI = (pop32());
  /* 11a044be ret  */
  ESPCHK(0x11a043f0u, _esp0);
  ESP += 4; return;
L_11a044bf:;
  /* 11a044bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a044c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a044c6 pop edi */
  EDI = (pop32());
  /* 11a044c7 ret  */
  ESPCHK(0x11a043f0u, _esp0);
  ESP += 4; return;
L_11a044c8:;
  /* 11a044c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a044ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a044ce pop edi */
  EDI = (pop32());
  /* 11a044cf ret  */
  ESPCHK(0x11a043f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a044d0 (123 bytes, 44 insns) */
void f_11a044d0(void) {
  FTRACE(0x11a044d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a044d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a044d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a044da je 0x11a044f0 */
  if (C.zf) goto L_11a044f0;
L_11a044dc:;
  /* 11a044dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a044de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a044df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a044e1 je 0x11a04523 */
  if (C.zf) goto L_11a04523;
  /* 11a044e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a044e9 jne 0x11a044dc */
  if (!C.zf) goto L_11a044dc;
  /* 11a044eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a044f0:;
  /* 11a044f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a044f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a044f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a044f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a044fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a044fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04501 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a04506 je 0x11a044f0 */
  if (C.zf) goto L_11a044f0;
  /* 11a04508 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a0450b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0450d je 0x11a04541 */
  if (C.zf) goto L_11a04541;
  /* 11a0450f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a04511 je 0x11a04537 */
  if (C.zf) goto L_11a04537;
  /* 11a04513 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a04518 je 0x11a0452d */
  if (C.zf) goto L_11a0452d;
  /* 11a0451a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a0451f je 0x11a04523 */
  if (C.zf) goto L_11a04523;
  /* 11a04521 jmp 0x11a044f0 */
  goto L_11a044f0;
L_11a04523:;
  /* 11a04523 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a04526 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a0452a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0452c ret  */
  ESPCHK(0x11a044d0u, _esp0);
  ESP += 4; return;
L_11a0452d:;
  /* 11a0452d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a04530 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a04534 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04536 ret  */
  ESPCHK(0x11a044d0u, _esp0);
  ESP += 4; return;
L_11a04537:;
  /* 11a04537 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a0453a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a0453e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04540 ret  */
  ESPCHK(0x11a044d0u, _esp0);
  ESP += 4; return;
L_11a04541:;
  /* 11a04541 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a04544 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a04548 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0454a ret  */
  ESPCHK(0x11a044d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000454b @ 0x11a0454b (429 bytes, 143 insns) */
void f_11a0454b(void) {
  FTRACE(0x11a0454bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0454b push ebp */
  push32((uint32_t)(EBP));
  /* 11a0454c mov ebp, esp */
  EBP = (ESP);
  /* 11a0454e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04551 push ebx */
  push32((uint32_t)(EBX));
  /* 11a04552 push esi */
  push32((uint32_t)(ESI));
  /* 11a04553 push edi */
  push32((uint32_t)(EDI));
  /* 11a04554 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a04556 call 0x11a041ff */
  push32(0x11a0455bu); f_11a041ff();
  /* 11a0455b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a0455e call 0x11a046f8 */
  push32(0x11a04563u); f_11a046f8();
  /* 11a04563 mov ebx, eax */
  EBX = (EAX);
  /* 11a04565 pop ecx */
  ECX = (pop32());
  /* 11a04566 cmp ebx, dword ptr [0x11a07d48] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a07d48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0456c pop ecx */
  ECX = (pop32());
  /* 11a0456d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a04570 jne 0x11a04579 */
  if (!C.zf) goto L_11a04579;
L_11a04572:;
  /* 11a04572 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a04574 jmp 0x11a046e9 */
  goto L_11a046e9;
L_11a04579:;
  /* 11a04579 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a0457b je 0x11a046d7 */
  if (C.zf) goto L_11a046d7;
  /* 11a04581 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a04583 mov eax, 0x11a07698 */
  EAX = (0x11a07698u);
L_11a04588:;
  /* 11a04588 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0458a je 0x11a04600 */
  if (C.zf) goto L_11a04600;
  /* 11a0458c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0458f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a04590 cmp eax, 0x11a07788 */
  { uint32_t _a=(EAX),_b=(0x11a07788u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04595 jl 0x11a04588 */
  if ((C.sf!=C.of)) goto L_11a04588;
  /* 11a04597 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a0459a push eax */
  push32((uint32_t)(EAX));
  /* 11a0459b push ebx */
  push32((uint32_t)(EBX));
  /* 11a0459c call dword ptr [0x11a06034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06034))), 0x11a045a2u);
  /* 11a045a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a045a4 pop esi */
  ESI = (pop32());
  /* 11a045a5 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a045a7 jne 0x11a046ce */
  if (!C.zf) goto L_11a046ce;
  /* 11a045ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a045af and dword ptr [0x11a07f64], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07f64)))&(0x0u); w32((uint32_t)(0x11a07f64), (_r)); fl_logic(_r,32); }
  /* 11a045b6 pop ecx */
  ECX = (pop32());
  /* 11a045b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a045b9 mov edi, 0x11a07e60 */
  EDI = (0x11a07e60u);
  /* 11a045be cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a045c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a045c3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a045c4 mov dword ptr [0x11a07d48], ebx */
  w32((uint32_t)(0x11a07d48), (EBX));
  /* 11a045ca jbe 0x11a046bb */
  if ((C.cf||C.zf)) goto L_11a046bb;
  /* 11a045d0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a045d4 je 0x11a04696 */
  if (C.zf) goto L_11a04696;
  /* 11a045da lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a045dd:;
  /* 11a045dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a045df test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a045e1 je 0x11a04696 */
  if (C.zf) goto L_11a04696;
  /* 11a045e7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a045eb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a045ee:;
  /* 11a045ee cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a045f0 ja 0x11a0468a */
  if ((!C.cf&&!C.zf)) goto L_11a0468a;
  /* 11a045f6 or byte ptr [eax + 0x11a07e61], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x4u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a045fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a045fe jmp 0x11a045ee */
  goto L_11a045ee;
L_11a04600:;
  /* 11a04600 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a04604 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a04606 pop ecx */
  ECX = (pop32());
  /* 11a04607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a04609 mov edi, 0x11a07e60 */
  EDI = (0x11a07e60u);
  /* 11a0460e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a04611 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a04613 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a04616 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a04617 lea ebx, [esi + 0x11a076a8] */
  EBX = ((uint32_t)(ESI + 0x11a076a8));
L_11a0461d:;
  /* 11a0461d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a04620 mov ecx, ebx */
  ECX = (EBX);
  /* 11a04622 je 0x11a04650 */
  if (C.zf) goto L_11a04650;
L_11a04624:;
  /* 11a04624 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a04627 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a04629 je 0x11a04650 */
  if (C.zf) goto L_11a04650;
  /* 11a0462b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a0462e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a04631 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04633 ja 0x11a04649 */
  if ((!C.cf&&!C.zf)) goto L_11a04649;
  /* 11a04635 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a04638 mov dl, byte ptr [edx + 0x11a07690] */
  DL = (r8((uint32_t)(EDX + 0x11a07690)));
L_11a0463e:;
  /* 11a0463e or byte ptr [eax + 0x11a07e61], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(DL); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a04644 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a04645 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04647 jbe 0x11a0463e */
  if ((C.cf||C.zf)) goto L_11a0463e;
L_11a04649:;
  /* 11a04649 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a0464a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a0464b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a0464e jne 0x11a04624 */
  if (!C.zf) goto L_11a04624;
L_11a04650:;
  /* 11a04650 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a04653 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04656 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0465a jb 0x11a0461d */
  if (C.cf) goto L_11a0461d;
  /* 11a0465c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a0465f mov dword ptr [0x11a07d5c], 1 */
  w32((uint32_t)(0x11a07d5c), (0x1u));
  /* 11a04669 push eax */
  push32((uint32_t)(EAX));
  /* 11a0466a mov dword ptr [0x11a07d48], eax */
  w32((uint32_t)(0x11a07d48), (EAX));
  /* 11a0466f call 0x11a04742 */
  push32(0x11a04674u); f_11a04742();
  /* 11a04674 lea esi, [esi + 0x11a0769c] */
  ESI = ((uint32_t)(ESI + 0x11a0769c));
  /* 11a0467a mov edi, 0x11a07d50 */
  EDI = (0x11a07d50u);
  /* 11a0467f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a04680 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a04681 pop ecx */
  ECX = (pop32());
  /* 11a04682 mov dword ptr [0x11a07f64], eax */
  w32((uint32_t)(0x11a07f64), (EAX));
  /* 11a04687 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a04688 jmp 0x11a046dc */
  goto L_11a046dc;
L_11a0468a:;
  /* 11a0468a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a0468b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a0468c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a04690 jne 0x11a045dd */
  if (!C.zf) goto L_11a045dd;
L_11a04696:;
  /* 11a04696 mov eax, esi */
  EAX = (ESI);
L_11a04698:;
  /* 11a04698 or byte ptr [eax + 0x11a07e61], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x8u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a0469f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a046a0 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a046a5 jb 0x11a04698 */
  if (C.cf) goto L_11a04698;
  /* 11a046a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a046a8 call 0x11a04742 */
  push32(0x11a046adu); f_11a04742();
  /* 11a046ad pop ecx */
  ECX = (pop32());
  /* 11a046ae mov dword ptr [0x11a07f64], eax */
  w32((uint32_t)(0x11a07f64), (EAX));
  /* 11a046b3 mov dword ptr [0x11a07d5c], esi */
  w32((uint32_t)(0x11a07d5c), (ESI));
  /* 11a046b9 jmp 0x11a046c2 */
  goto L_11a046c2;
L_11a046bb:;
  /* 11a046bb and dword ptr [0x11a07d5c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07d5c)))&(0x0u); w32((uint32_t)(0x11a07d5c), (_r)); fl_logic(_r,32); }
L_11a046c2:;
  /* 11a046c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a046c4 mov edi, 0x11a07d50 */
  EDI = (0x11a07d50u);
  /* 11a046c9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a046ca stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a046cb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a046cc jmp 0x11a046dc */
  goto L_11a046dc;
L_11a046ce:;
  /* 11a046ce cmp dword ptr [0x11a07cf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a07cf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a046d5 je 0x11a046e6 */
  if (C.zf) goto L_11a046e6;
L_11a046d7:;
  /* 11a046d7 call 0x11a04775 */
  push32(0x11a046dcu); f_11a04775();
L_11a046dc:;
  /* 11a046dc call 0x11a0479e */
  push32(0x11a046e1u); f_11a0479e();
  /* 11a046e1 jmp 0x11a04572 */
  goto L_11a04572;
L_11a046e6:;
  /* 11a046e6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a046e9:;
  /* 11a046e9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a046eb call 0x11a04260 */
  push32(0x11a046f0u); f_11a04260();
  /* 11a046f0 pop ecx */
  ECX = (pop32());
  /* 11a046f1 mov eax, esi */
  EAX = (ESI);
  /* 11a046f3 pop edi */
  EDI = (pop32());
  /* 11a046f4 pop esi */
  ESI = (pop32());
  /* 11a046f5 pop ebx */
  EBX = (pop32());
  /* 11a046f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a046f7 ret  */
  ESPCHK(0x11a0454bu, _esp0);
  ESP += 4; return;
}

/* FUN_100046f8 @ 0x11a046f8 (74 bytes, 15 insns) */
void f_11a046f8(void) {
  FTRACE(0x11a046f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a046f8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a046fc and dword ptr [0x11a07cf0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07cf0)))&(0x0u); w32((uint32_t)(0x11a07cf0), (_r)); fl_logic(_r,32); }
  /* 11a04703 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04706 jne 0x11a04718 */
  if (!C.zf) goto L_11a04718;
  /* 11a04708 mov dword ptr [0x11a07cf0], 1 */
  w32((uint32_t)(0x11a07cf0), (0x1u));
  /* 11a04712 jmp dword ptr [0x11a06038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a06038)))); return;
L_11a04718:;
  /* 11a04718 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0471b jne 0x11a0472d */
  if (!C.zf) goto L_11a0472d;
  /* 11a0471d mov dword ptr [0x11a07cf0], 1 */
  w32((uint32_t)(0x11a07cf0), (0x1u));
  /* 11a04727 jmp dword ptr [0x11a06030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a06030)))); return;
L_11a0472d:;
  /* 11a0472d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04730 jne 0x11a04741 */
  if (!C.zf) goto L_11a04741;
  /* 11a04732 mov eax, dword ptr [0x11a07d20] */
  EAX = (r32((uint32_t)(0x11a07d20)));
  /* 11a04737 mov dword ptr [0x11a07cf0], 1 */
  w32((uint32_t)(0x11a07cf0), (0x1u));
L_11a04741:;
  /* 11a04741 ret  */
  ESPCHK(0x11a046f8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004742 @ 0x11a04742 (51 bytes, 19 insns) */
void f_11a04742(void) {
  FTRACE(0x11a04742u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04742 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a04746 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0474b je 0x11a0476f */
  if (C.zf) goto L_11a0476f;
  /* 11a0474d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04750 je 0x11a04769 */
  if (C.zf) goto L_11a04769;
  /* 11a04752 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04755 je 0x11a04763 */
  if (C.zf) goto L_11a04763;
  /* 11a04757 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a04758 je 0x11a0475d */
  if (C.zf) goto L_11a0475d;
  /* 11a0475a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0475c ret  */
  ESPCHK(0x11a04742u, _esp0);
  ESP += 4; return;
L_11a0475d:;
  /* 11a0475d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a04762 ret  */
  ESPCHK(0x11a04742u, _esp0);
  ESP += 4; return;
L_11a04763:;
  /* 11a04763 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a04768 ret  */
  ESPCHK(0x11a04742u, _esp0);
  ESP += 4; return;
L_11a04769:;
  /* 11a04769 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a0476e ret  */
  ESPCHK(0x11a04742u, _esp0);
  ESP += 4; return;
L_11a0476f:;
  /* 11a0476f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a04774 ret  */
  ESPCHK(0x11a04742u, _esp0);
  ESP += 4; return;
}

/* FUN_10004775 @ 0x11a04775 (41 bytes, 17 insns) */
void f_11a04775(void) {
  FTRACE(0x11a04775u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04775 push edi */
  push32((uint32_t)(EDI));
  /* 11a04776 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a04778 pop ecx */
  ECX = (pop32());
  /* 11a04779 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0477b mov edi, 0x11a07e60 */
  EDI = (0x11a07e60u);
  /* 11a04780 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a04782 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a04783 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a04785 mov edi, 0x11a07d50 */
  EDI = (0x11a07d50u);
  /* 11a0478a mov dword ptr [0x11a07d48], eax */
  w32((uint32_t)(0x11a07d48), (EAX));
  /* 11a0478f mov dword ptr [0x11a07d5c], eax */
  w32((uint32_t)(0x11a07d5c), (EAX));
  /* 11a04794 mov dword ptr [0x11a07f64], eax */
  w32((uint32_t)(0x11a07f64), (EAX));
  /* 11a04799 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a0479a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a0479b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a0479c pop edi */
  EDI = (pop32());
  /* 11a0479d ret  */
  ESPCHK(0x11a04775u, _esp0);
  ESP += 4; return;
}

/* FUN_1000479e @ 0x11a0479e (389 bytes, 124 insns) */
void f_11a0479e(void) {
  FTRACE(0x11a0479eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a0479e push ebp */
  push32((uint32_t)(EBP));
  /* 11a0479f mov ebp, esp */
  EBP = (ESP);
  /* 11a047a1 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a047a7 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a047aa push esi */
  push32((uint32_t)(ESI));
  /* 11a047ab push eax */
  push32((uint32_t)(EAX));
  /* 11a047ac push dword ptr [0x11a07d48] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d48))));
  /* 11a047b2 call dword ptr [0x11a06034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06034))), 0x11a047b8u);
  /* 11a047b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a047bb jne 0x11a048d7 */
  if (!C.zf) goto L_11a048d7;
  /* 11a047c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a047c3 mov esi, 0x100 */
  ESI = (0x100u);
L_11a047c8:;
  /* 11a047c8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a047cf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a047d0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a047d2 jb 0x11a047c8 */
  if (C.cf) goto L_11a047c8;
  /* 11a047d4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a047d7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a047de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a047e0 je 0x11a04819 */
  if (C.zf) goto L_11a04819;
  /* 11a047e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a047e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a047e4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a047e7:;
  /* 11a047e7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a047ea movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a047ed cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a047ef ja 0x11a0480e */
  if ((!C.cf&&!C.zf)) goto L_11a0480e;
  /* 11a047f1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a047f3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a047fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a047fb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a04800 mov ebx, ecx */
  EBX = (ECX);
  /* 11a04802 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04805 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a04807 mov ecx, ebx */
  ECX = (EBX);
  /* 11a04809 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a0480c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a0480e:;
  /* 11a0480e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a0480f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a04810 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a04813 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a04815 jne 0x11a047e7 */
  if (!C.zf) goto L_11a047e7;
  /* 11a04817 pop edi */
  EDI = (pop32());
  /* 11a04818 pop ebx */
  EBX = (pop32());
L_11a04819:;
  /* 11a04819 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0481b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a04821 push dword ptr [0x11a07f64] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f64))));
  /* 11a04827 push dword ptr [0x11a07d48] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d48))));
  /* 11a0482d push eax */
  push32((uint32_t)(EAX));
  /* 11a0482e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a04834 push esi */
  push32((uint32_t)(ESI));
  /* 11a04835 push eax */
  push32((uint32_t)(EAX));
  /* 11a04836 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a04838 call 0x11a05912 */
  push32(0x11a0483du); f_11a05912();
  /* 11a0483d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a0483f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a04845 push dword ptr [0x11a07d48] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d48))));
  /* 11a0484b push esi */
  push32((uint32_t)(ESI));
  /* 11a0484c push eax */
  push32((uint32_t)(EAX));
  /* 11a0484d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a04853 push esi */
  push32((uint32_t)(ESI));
  /* 11a04854 push eax */
  push32((uint32_t)(EAX));
  /* 11a04855 push esi */
  push32((uint32_t)(ESI));
  /* 11a04856 push dword ptr [0x11a07f64] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f64))));
  /* 11a0485c call 0x11a056c3 */
  push32(0x11a04861u); f_11a056c3();
  /* 11a04861 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a04863 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a04869 push dword ptr [0x11a07d48] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d48))));
  /* 11a0486f push esi */
  push32((uint32_t)(ESI));
  /* 11a04870 push eax */
  push32((uint32_t)(EAX));
  /* 11a04871 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a04877 push esi */
  push32((uint32_t)(ESI));
  /* 11a04878 push eax */
  push32((uint32_t)(EAX));
  /* 11a04879 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a0487e push dword ptr [0x11a07f64] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f64))));
  /* 11a04884 call 0x11a056c3 */
  push32(0x11a04889u); f_11a056c3();
  /* 11a04889 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0488c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0488e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a04894:;
  /* 11a04894 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a04897 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a0489a je 0x11a048b2 */
  if (C.zf) goto L_11a048b2;
  /* 11a0489c or byte ptr [eax + 0x11a07e61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x10u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a048a3 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a048aa:;
  /* 11a048aa mov byte ptr [eax + 0x11a07d60], dl */
  w8((uint32_t)(EAX + 0x11a07d60), (DL));
  /* 11a048b0 jmp 0x11a048ce */
  goto L_11a048ce;
L_11a048b2:;
  /* 11a048b2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a048b5 je 0x11a048c7 */
  if (C.zf) goto L_11a048c7;
  /* 11a048b7 or byte ptr [eax + 0x11a07e61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x20u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a048be mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a048c5 jmp 0x11a048aa */
  goto L_11a048aa;
L_11a048c7:;
  /* 11a048c7 and byte ptr [eax + 0x11a07d60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07d60)))&(0x0u); w8((uint32_t)(EAX + 0x11a07d60), (_r)); fl_logic(_r,8); }
L_11a048ce:;
  /* 11a048ce inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a048cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a048d0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a048d1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a048d3 jb 0x11a04894 */
  if (C.cf) goto L_11a04894;
  /* 11a048d5 jmp 0x11a04920 */
  goto L_11a04920;
L_11a048d7:;
  /* 11a048d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a048d9 mov esi, 0x100 */
  ESI = (0x100u);
L_11a048de:;
  /* 11a048de cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a048e1 jb 0x11a048fc */
  if (C.cf) goto L_11a048fc;
  /* 11a048e3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a048e6 ja 0x11a048fc */
  if ((!C.cf&&!C.zf)) goto L_11a048fc;
  /* 11a048e8 or byte ptr [eax + 0x11a07e61], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x10u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a048ef mov cl, al */
  CL = (AL);
  /* 11a048f1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a048f4:;
  /* 11a048f4 mov byte ptr [eax + 0x11a07d60], cl */
  w8((uint32_t)(EAX + 0x11a07d60), (CL));
  /* 11a048fa jmp 0x11a0491b */
  goto L_11a0491b;
L_11a048fc:;
  /* 11a048fc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a048ff jb 0x11a04914 */
  if (C.cf) goto L_11a04914;
  /* 11a04901 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04904 ja 0x11a04914 */
  if ((!C.cf&&!C.zf)) goto L_11a04914;
  /* 11a04906 or byte ptr [eax + 0x11a07e61], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07e61)))|(0x20u); w8((uint32_t)(EAX + 0x11a07e61), (_r)); fl_logic(_r,8); }
  /* 11a0490d mov cl, al */
  CL = (AL);
  /* 11a0490f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a04912 jmp 0x11a048f4 */
  goto L_11a048f4;
L_11a04914:;
  /* 11a04914 and byte ptr [eax + 0x11a07d60], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a07d60)))&(0x0u); w8((uint32_t)(EAX + 0x11a07d60), (_r)); fl_logic(_r,8); }
L_11a0491b:;
  /* 11a0491b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a0491c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0491e jb 0x11a048de */
  if (C.cf) goto L_11a048de;
L_11a04920:;
  /* 11a04920 pop esi */
  ESI = (pop32());
  /* 11a04921 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04922 ret  */
  ESPCHK(0x11a0479eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004923 @ 0x11a04923 (28 bytes, 7 insns) */
void f_11a04923(void) {
  FTRACE(0x11a04923u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04923 cmp dword ptr [0x11a08088], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a08088))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0492a jne 0x11a0493e */
  if (!C.zf) goto L_11a0493e;
  /* 11a0492c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a0492e call 0x11a0454b */
  push32(0x11a04933u); f_11a0454b();
  /* 11a04933 pop ecx */
  ECX = (pop32());
  /* 11a04934 mov dword ptr [0x11a08088], 1 */
  w32((uint32_t)(0x11a08088), (0x1u));
L_11a0493e:;
  /* 11a0493e ret  */
  ESPCHK(0x11a04923u, _esp0);
  ESP += 4; return;
}

/* FUN_10004940 @ 0x11a04940 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11a04940(void) {
  FTRACE(0x11a04940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04940 push ebp */
  push32((uint32_t)(EBP));
  /* 11a04941 mov ebp, esp */
  EBP = (ESP);
  /* 11a04943 push edi */
  push32((uint32_t)(EDI));
  /* 11a04944 push esi */
  push32((uint32_t)(ESI));
  /* 11a04945 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04948 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a0494b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a0494e mov eax, ecx */
  EAX = (ECX);
  /* 11a04950 mov edx, ecx */
  EDX = (ECX);
  /* 11a04952 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04954 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04956 jbe 0x11a04960 */
  if ((C.cf||C.zf)) goto L_11a04960;
  /* 11a04958 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0495a jb 0x11a04ad8 */
  if (C.cf) goto L_11a04ad8;
L_11a04960:;
  /* 11a04960 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a04966 jne 0x11a0497c */
  if (!C.zf) goto L_11a0497c;
  /* 11a04968 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a0496b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a0496e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04971 jb 0x11a0499c */
  if (C.cf) goto L_11a0499c;
  /* 11a04973 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04975 jmp dword ptr [edx*4 + 0x11a04a88] */
  switch (EDX) {
    case 0: goto L_11a04a98;
    case 1: goto L_11a04aa0;
    case 2: goto L_11a04aac;
    case 3: goto L_11a04ac0;
    default: x86_unimpl("switch@0x11a04975 out of table"); return;
  }
L_11a0497c:;
  /* 11a0497c mov eax, edi */
  EAX = (EDI);
  /* 11a0497e mov edx, 3 */
  EDX = (0x3u);
  /* 11a04983 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04986 jb 0x11a04994 */
  if (C.cf) goto L_11a04994;
  /* 11a04988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a0498b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0498d jmp dword ptr [eax*4 + 0x11a049a0] */
  switch (EAX) {
    case 1: goto L_11a049b0;
    case 2: goto L_11a049dc;
    case 3: goto L_11a04a00;
    default: x86_unimpl("switch@0x11a0498d out of table"); return;
  }
L_11a04994:;
  /* 11a04994 jmp dword ptr [ecx*4 + 0x11a04a98] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a04a98)))); return;
  /* 11a0499b nop  */
  /* nop */
L_11a0499c:;
  /* 11a0499c jmp dword ptr [ecx*4 + 0x11a04a1c] */
  switch (ECX) {
    case 0: goto L_11a04a7f;
    case 1: goto L_11a04a6c;
    case 2: goto L_11a04a64;
    case 3: goto L_11a04a5c;
    case 4: goto L_11a04a54;
    case 5: goto L_11a04a4c;
    case 6: goto L_11a04a44;
    case 7: goto L_11a04a3c;
    default: x86_unimpl("switch@0x11a0499c out of table"); return;
  }
  /* 11a049a3 nop  */
  /* nop */
L_11a049b0:;
  /* 11a049b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a049b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a049b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a049b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a049b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a049bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a049bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a049c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a049c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a049c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a049cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a049ce jb 0x11a0499c */
  if (C.cf) goto L_11a0499c;
  /* 11a049d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a049d2 jmp dword ptr [edx*4 + 0x11a04a88] */
  switch (EDX) {
    case 0: goto L_11a04a98;
    case 1: goto L_11a04aa0;
    case 2: goto L_11a04aac;
    case 3: goto L_11a04ac0;
    default: x86_unimpl("switch@0x11a049d2 out of table"); return;
  }
  /* 11a049d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a049dc:;
  /* 11a049dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a049de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a049e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a049e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a049e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a049e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a049eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a049ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a049f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a049f4 jb 0x11a0499c */
  if (C.cf) goto L_11a0499c;
  /* 11a049f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a049f8 jmp dword ptr [edx*4 + 0x11a04a88] */
  switch (EDX) {
    case 0: goto L_11a04a98;
    case 1: goto L_11a04aa0;
    case 2: goto L_11a04aac;
    case 3: goto L_11a04ac0;
    default: x86_unimpl("switch@0x11a049f8 out of table"); return;
  }
  /* 11a049ff nop  */
  /* nop */
L_11a04a00:;
  /* 11a04a00 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a04a02 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a04a04 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a04a06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a04a07 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04a0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a04a0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04a0e jb 0x11a0499c */
  if (C.cf) goto L_11a0499c;
  /* 11a04a10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04a12 jmp dword ptr [edx*4 + 0x11a04a88] */
  switch (EDX) {
    case 0: goto L_11a04a98;
    case 1: goto L_11a04aa0;
    case 2: goto L_11a04aac;
    case 3: goto L_11a04ac0;
    default: x86_unimpl("switch@0x11a04a12 out of table"); return;
  }
  /* 11a04a19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a04a3c:;
  /* 11a04a3c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a04a40 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a04a44:;
  /* 11a04a44 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a04a48 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a04a4c:;
  /* 11a04a4c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a04a50 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a04a54:;
  /* 11a04a54 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a04a58 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a04a5c:;
  /* 11a04a5c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a04a60 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a04a64:;
  /* 11a04a64 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a04a68 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a04a6c:;
  /* 11a04a6c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a04a70 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a04a74 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a04a7b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04a7d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a04a7f:;
  /* 11a04a7f jmp dword ptr [edx*4 + 0x11a04a88] */
  switch (EDX) {
    case 0: goto L_11a04a98;
    case 1: goto L_11a04aa0;
    case 2: goto L_11a04aac;
    case 3: goto L_11a04ac0;
    default: x86_unimpl("switch@0x11a04a7f out of table"); return;
  }
  /* 11a04a86 mov edi, edi */
  EDI = (EDI);
L_11a04a98:;
  /* 11a04a98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04a9b pop esi */
  ESI = (pop32());
  /* 11a04a9c pop edi */
  EDI = (pop32());
  /* 11a04a9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04a9e ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04a9f nop  */
  /* nop */
L_11a04aa0:;
  /* 11a04aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a04aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a04aa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04aa7 pop esi */
  ESI = (pop32());
  /* 11a04aa8 pop edi */
  EDI = (pop32());
  /* 11a04aa9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04aaa ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04aab nop  */
  /* nop */
L_11a04aac:;
  /* 11a04aac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a04aae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a04ab0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a04ab3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a04ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04ab9 pop esi */
  ESI = (pop32());
  /* 11a04aba pop edi */
  EDI = (pop32());
  /* 11a04abb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04abc ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04abd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a04ac0:;
  /* 11a04ac0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a04ac2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a04ac4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a04ac7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a04aca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a04acd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a04ad0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04ad3 pop esi */
  ESI = (pop32());
  /* 11a04ad4 pop edi */
  EDI = (pop32());
  /* 11a04ad5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04ad6 ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04ad7 nop  */
  /* nop */
L_11a04ad8:;
  /* 11a04ad8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a04adc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a04ae0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a04ae6 jne 0x11a04b0c */
  if (!C.zf) goto L_11a04b0c;
  /* 11a04ae8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04aeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a04aee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04af1 jb 0x11a04b00 */
  if (C.cf) goto L_11a04b00;
  /* 11a04af3 std  */
  C.df=1;
  /* 11a04af4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04af6 cld  */
  C.df=0;
  /* 11a04af7 jmp dword ptr [edx*4 + 0x11a04c20] */
  switch (EDX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04af7 out of table"); return;
  }
  /* 11a04afe mov edi, edi */
  EDI = (EDI);
L_11a04b00:;
  /* 11a04b00 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a04b02 jmp dword ptr [ecx*4 + 0x11a04bd0] */
  switch (ECX) {
    case 0: goto L_11a04c17;
    default: x86_unimpl("switch@0x11a04b02 out of table"); return;
  }
  /* 11a04b09 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a04b0c:;
  /* 11a04b0c mov eax, edi */
  EAX = (EDI);
  /* 11a04b0e mov edx, 3 */
  EDX = (0x3u);
  /* 11a04b13 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04b16 jb 0x11a04b24 */
  if (C.cf) goto L_11a04b24;
  /* 11a04b18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a04b1b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04b1d jmp dword ptr [eax*4 + 0x11a04b28] */
  switch (EAX) {
    case 1: goto L_11a04b38;
    case 2: goto L_11a04b58;
    case 3: goto L_11a04b80;
    default: x86_unimpl("switch@0x11a04b1d out of table"); return;
  }
L_11a04b24:;
  /* 11a04b24 jmp dword ptr [ecx*4 + 0x11a04c20] */
  switch (ECX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04b24 out of table"); return;
  }
  /* 11a04b2b nop  */
  /* nop */
L_11a04b38:;
  /* 11a04b38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04b3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a04b3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04b40 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a04b41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04b44 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a04b45 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04b48 jb 0x11a04b00 */
  if (C.cf) goto L_11a04b00;
  /* 11a04b4a std  */
  C.df=1;
  /* 11a04b4b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04b4d cld  */
  C.df=0;
  /* 11a04b4e jmp dword ptr [edx*4 + 0x11a04c20] */
  switch (EDX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04b4e out of table"); return;
  }
  /* 11a04b55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a04b58:;
  /* 11a04b58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04b5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a04b5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04b60 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a04b63 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04b66 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a04b69 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04b6c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04b6f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04b72 jb 0x11a04b00 */
  if (C.cf) goto L_11a04b00;
  /* 11a04b74 std  */
  C.df=1;
  /* 11a04b75 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04b77 cld  */
  C.df=0;
  /* 11a04b78 jmp dword ptr [edx*4 + 0x11a04c20] */
  switch (EDX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04b78 out of table"); return;
  }
  /* 11a04b7f nop  */
  /* nop */
L_11a04b80:;
  /* 11a04b80 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04b83 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a04b85 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04b88 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a04b8b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a04b8e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a04b91 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a04b94 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a04b97 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04b9a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04b9d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04ba0 jb 0x11a04b00 */
  if (C.cf) goto L_11a04b00;
  /* 11a04ba6 std  */
  C.df=1;
  /* 11a04ba7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a04ba9 cld  */
  C.df=0;
  /* 11a04baa jmp dword ptr [edx*4 + 0x11a04c20] */
  switch (EDX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04baa out of table"); return;
  }
  /* 11a04bb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a04bb4 aam 0x4b */
  x86_unimpl("aam @ 0x11a04bb4");
  /* 11a04bb6 mov al, byte ptr [0xa04bdc11] */
  AL = (r8((uint32_t)(0xa04bdc11)));
  /* 11a04bbb adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04bbd dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a04bbe mov al, byte ptr [0xa04bec11] */
  AL = (r8((uint32_t)(0xa04bec11)));
  /* 11a04bc3 adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04bc5 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a04bc6 mov al, byte ptr [0xa04bfc11] */
  AL = (r8((uint32_t)(0xa04bfc11)));
  /* 11a04bcb adc dword ptr [esp + ecx*2], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + ECX*2))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ECX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a04bd4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a04bd8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a04bdc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a04be0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a04be4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a04be8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a04bec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a04bf0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a04bf4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a04bf8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a04bfc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a04c00 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a04c04 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a04c08 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a04c0c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a04c13 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04c15 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a04c17:;
  /* 11a04c17 jmp dword ptr [edx*4 + 0x11a04c20] */
  switch (EDX) {
    case 0: goto L_11a04c30;
    case 1: goto L_11a04c38;
    case 2: goto L_11a04c48;
    case 3: goto L_11a04c5c;
    default: x86_unimpl("switch@0x11a04c17 out of table"); return;
  }
  /* 11a04c1e mov edi, edi */
  EDI = (EDI);
L_11a04c30:;
  /* 11a04c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04c33 pop esi */
  ESI = (pop32());
  /* 11a04c34 pop edi */
  EDI = (pop32());
  /* 11a04c35 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04c36 ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04c37 nop  */
  /* nop */
L_11a04c38:;
  /* 11a04c38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04c3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04c3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04c41 pop esi */
  ESI = (pop32());
  /* 11a04c42 pop edi */
  EDI = (pop32());
  /* 11a04c43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04c44 ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04c45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a04c48:;
  /* 11a04c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04c4e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a04c51 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a04c54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04c57 pop esi */
  ESI = (pop32());
  /* 11a04c58 pop edi */
  EDI = (pop32());
  /* 11a04c59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04c5a ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
  /* 11a04c5b nop  */
  /* nop */
L_11a04c5c:;
  /* 11a04c5c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a04c5f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a04c62 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a04c65 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a04c68 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a04c6b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a04c6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04c71 pop esi */
  ESI = (pop32());
  /* 11a04c72 pop edi */
  EDI = (pop32());
  /* 11a04c73 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a04c74 ret  */
  ESPCHK(0x11a04940u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c75 @ 0x11a04c75 (62 bytes, 15 insns) */
void f_11a04c75(void) {
  FTRACE(0x11a04c75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04c75 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a04c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a04c7c push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a04c82 call dword ptr [0x11a0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0603c))), 0x11a04c88u);
  /* 11a04c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a04c8a mov dword ptr [0x11a07d44], eax */
  w32((uint32_t)(0x11a07d44), (EAX));
  /* 11a04c8f jne 0x11a04c92 */
  if (!C.zf) goto L_11a04c92;
  /* 11a04c91 ret  */
  ESPCHK(0x11a04c75u, _esp0);
  ESP += 4; return;
L_11a04c92:;
  /* 11a04c92 and dword ptr [0x11a07d3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07d3c)))&(0x0u); w32((uint32_t)(0x11a07d3c), (_r)); fl_logic(_r,32); }
  /* 11a04c99 and dword ptr [0x11a07d40], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07d40)))&(0x0u); w32((uint32_t)(0x11a07d40), (_r)); fl_logic(_r,32); }
  /* 11a04ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a04ca2 mov dword ptr [0x11a07d38], eax */
  w32((uint32_t)(0x11a07d38), (EAX));
  /* 11a04ca7 mov dword ptr [0x11a07d30], 0x10 */
  w32((uint32_t)(0x11a07d30), (0x10u));
  /* 11a04cb1 pop eax */
  EAX = (pop32());
  /* 11a04cb2 ret  */
  ESPCHK(0x11a04c75u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb3 @ 0x11a04cb3 (43 bytes, 14 insns) */
void f_11a04cb3(void) {
  FTRACE(0x11a04cb3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04cb3 mov eax, dword ptr [0x11a07d40] */
  EAX = (r32((uint32_t)(0x11a07d40)));
  /* 11a04cb8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a04cbb mov eax, dword ptr [0x11a07d44] */
  EAX = (r32((uint32_t)(0x11a07d44)));
  /* 11a04cc0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a04cc3:;
  /* 11a04cc3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04cc5 jae 0x11a04cdb */
  if (!C.cf) goto L_11a04cdb;
  /* 11a04cc7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a04ccb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04cce cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04cd4 jb 0x11a04cdd */
  if (C.cf) goto L_11a04cdd;
  /* 11a04cd6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04cd9 jmp 0x11a04cc3 */
  goto L_11a04cc3;
L_11a04cdb:;
  /* 11a04cdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a04cdd:;
  /* 11a04cdd ret  */
  ESPCHK(0x11a04cb3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cde @ 0x11a04cde (811 bytes, 264 insns) */
void f_11a04cde(void) {
  FTRACE(0x11a04cdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a04cde push ebp */
  push32((uint32_t)(EBP));
  /* 11a04cdf mov ebp, esp */
  EBP = (ESP);
  /* 11a04ce1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04ce4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04ce7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04cea push ebx */
  push32((uint32_t)(EBX));
  /* 11a04ceb push esi */
  push32((uint32_t)(ESI));
  /* 11a04cec mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a04cef mov esi, edx */
  ESI = (EDX);
  /* 11a04cf1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04cf4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a04cf7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04cfa push edi */
  push32((uint32_t)(EDI));
  /* 11a04cfb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11a04cfe mov ecx, esi */
  ECX = (ESI);
  /* 11a04d00 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11a04d03 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a04d09 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a04d0a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a04d0d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a04d14 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a04d17 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a04d1a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11a04d1d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a04d20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a04d23 jne 0x11a04da4 */
  if (!C.zf) goto L_11a04da4;
  /* 11a04d25 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a04d28 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a04d2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a04d2b pop edi */
  EDI = (pop32());
  /* 11a04d2c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a04d2f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04d31 jbe 0x11a04d36 */
  if ((C.cf||C.zf)) goto L_11a04d36;
  /* 11a04d33 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a04d36:;
  /* 11a04d36 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a04d3a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04d3e jne 0x11a04d88 */
  if (!C.zf) goto L_11a04d88;
  /* 11a04d40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04d43 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04d46 jae 0x11a04d64 */
  if (!C.cf) goto L_11a04d64;
  /* 11a04d48 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a04d4d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a04d4f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a04d53 not edi */
  EDI = (~(EDI));
  /* 11a04d55 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a04d59 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a04d5b jne 0x11a04d88 */
  if (!C.zf) goto L_11a04d88;
  /* 11a04d5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04d60 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a04d62 jmp 0x11a04d88 */
  goto L_11a04d88;
L_11a04d64:;
  /* 11a04d64 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04d67 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a04d6c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a04d6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04d71 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a04d75 not edi */
  EDI = (~(EDI));
  /* 11a04d77 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a04d7e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a04d80 jne 0x11a04d88 */
  if (!C.zf) goto L_11a04d88;
  /* 11a04d82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04d85 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a04d88:;
  /* 11a04d88 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a04d8c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a04d90 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a04d93 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a04d97 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a04d9b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04d9e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a04da1 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11a04da4:;
  /* 11a04da4 mov edi, ebx */
  EDI = (EBX);
  /* 11a04da6 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a04da9 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a04daa cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04dad jbe 0x11a04db2 */
  if ((C.cf||C.zf)) goto L_11a04db2;
  /* 11a04daf push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a04db1 pop edi */
  EDI = (pop32());
L_11a04db2:;
  /* 11a04db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a04db5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a04db8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a04dbb jne 0x11a04e61 */
  if (!C.zf) goto L_11a04e61;
  /* 11a04dc1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a04dc7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a04dca push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a04dcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a04dcf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a04dd0 pop edx */
  EDX = (pop32());
  /* 11a04dd1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04dd3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a04dd6 jbe 0x11a04ddd */
  if ((C.cf||C.zf)) goto L_11a04ddd;
  /* 11a04dd8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a04ddb mov ecx, edx */
  ECX = (EDX);
L_11a04ddd:;
  /* 11a04ddd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04de0 mov edi, ebx */
  EDI = (EBX);
  /* 11a04de2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a04de5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a04de8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a04de9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04deb jbe 0x11a04def */
  if ((C.cf||C.zf)) goto L_11a04def;
  /* 11a04ded mov edi, edx */
  EDI = (EDX);
L_11a04def:;
  /* 11a04def cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04df1 je 0x11a04e5e */
  if (C.zf) goto L_11a04e5e;
  /* 11a04df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a04df6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a04df9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04dfc jne 0x11a04e46 */
  if (!C.zf) goto L_11a04e46;
  /* 11a04dfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04e01 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04e04 jae 0x11a04e22 */
  if (!C.cf) goto L_11a04e22;
  /* 11a04e06 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a04e0b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a04e0d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a04e11 not edx */
  EDX = (~(EDX));
  /* 11a04e13 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a04e17 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a04e19 jne 0x11a04e46 */
  if (!C.zf) goto L_11a04e46;
  /* 11a04e1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04e1e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a04e20 jmp 0x11a04e46 */
  goto L_11a04e46;
L_11a04e22:;
  /* 11a04e22 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04e25 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a04e2a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a04e2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a04e2f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a04e33 not edx */
  EDX = (~(EDX));
  /* 11a04e35 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a04e3c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a04e3e jne 0x11a04e46 */
  if (!C.zf) goto L_11a04e46;
  /* 11a04e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04e43 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a04e46:;
  /* 11a04e46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a04e49 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a04e4c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a04e4f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a04e52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a04e55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a04e58 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a04e5b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11a04e5e:;
  /* 11a04e5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11a04e61:;
  /* 11a04e61 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04e65 jne 0x11a04e70 */
  if (!C.zf) goto L_11a04e70;
  /* 11a04e67 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04e6a je 0x11a04ef9 */
  if (C.zf) goto L_11a04ef9;
L_11a04e70:;
  /* 11a04e70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a04e73 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a04e76 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a04e79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a04e7c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a04e7f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a04e82 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a04e85 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a04e88 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a04e8b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a04e8e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a04e91 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04e94 jne 0x11a04ef9 */
  if (!C.zf) goto L_11a04ef9;
  /* 11a04e96 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11a04e9a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04e9d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a04ea0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a04ea2 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11a04ea6 jae 0x11a04ecd */
  if (!C.cf) goto L_11a04ecd;
  /* 11a04ea8 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a04eac jne 0x11a04ebc */
  if (!C.zf) goto L_11a04ebc;
  /* 11a04eae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a04eb3 mov ecx, edi */
  ECX = (EDI);
  /* 11a04eb5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a04eb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04eba or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a04ebc:;
  /* 11a04ebc mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a04ec1 mov ecx, edi */
  ECX = (EDI);
  /* 11a04ec3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a04ec5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11a04ec9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a04ecb jmp 0x11a04ef6 */
  goto L_11a04ef6;
L_11a04ecd:;
  /* 11a04ecd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a04ed1 jne 0x11a04ee3 */
  if (!C.zf) goto L_11a04ee3;
  /* 11a04ed3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a04ed6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a04edb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a04edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04ee0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a04ee3:;
  /* 11a04ee3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a04ee6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a04eeb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a04eed lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11a04ef4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a04ef6:;
  /* 11a04ef6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11a04ef9:;
  /* 11a04ef9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a04efc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11a04efe mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11a04f02 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a04f04 jne 0x11a05004 */
  if (!C.zf) goto L_11a05004;
  /* 11a04f0a mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a04f11 je 0x11a04ff6 */
  if (C.zf) goto L_11a04ff6;
  /* 11a04f17 mov ecx, dword ptr [0x11a07d34] */
  ECX = (r32((uint32_t)(0x11a07d34)));
  /* 11a04f1d mov edi, dword ptr [0x11a06050] */
  EDI = (r32((uint32_t)(0x11a06050)));
  /* 11a04f23 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a04f26 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04f29 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a04f2e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a04f33 push ebx */
  push32((uint32_t)(EBX));
  /* 11a04f34 push ecx */
  push32((uint32_t)(ECX));
  /* 11a04f35 call edi */
  call_ind((uint32_t)(EDI), 0x11a04f37u);
  /* 11a04f37 mov ecx, dword ptr [0x11a07d34] */
  ECX = (r32((uint32_t)(0x11a07d34)));
  /* 11a04f3d mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f42 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a04f47 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a04f49 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a04f4c mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f51 mov ecx, dword ptr [0x11a07d34] */
  ECX = (r32((uint32_t)(0x11a07d34)));
  /* 11a04f57 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a04f5a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a04f62 mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f67 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a04f6a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a04f6d mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f72 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a04f75 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a04f79 jne 0x11a04f84 */
  if (!C.zf) goto L_11a04f84;
  /* 11a04f7b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a04f7f mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
L_11a04f84:;
  /* 11a04f84 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04f88 jne 0x11a04ff6 */
  if (!C.zf) goto L_11a04ff6;
  /* 11a04f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11a04f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a04f8d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a04f90 call edi */
  call_ind((uint32_t)(EDI), 0x11a04f92u);
  /* 11a04f92 mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04f97 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a04f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a04f9c push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a04fa2 call dword ptr [0x11a0604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0604c))), 0x11a04fa8u);
  /* 11a04fa8 mov eax, dword ptr [0x11a07d40] */
  EAX = (r32((uint32_t)(0x11a07d40)));
  /* 11a04fad mov edx, dword ptr [0x11a07d44] */
  EDX = (r32((uint32_t)(0x11a07d44)));
  /* 11a04fb3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a04fb6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a04fb9 mov ecx, eax */
  ECX = (EAX);
  /* 11a04fbb mov eax, dword ptr [0x11a07d3c] */
  EAX = (r32((uint32_t)(0x11a07d3c)));
  /* 11a04fc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a04fc2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a04fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a04fc7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a04fca push ecx */
  push32((uint32_t)(ECX));
  /* 11a04fcb push eax */
  push32((uint32_t)(EAX));
  /* 11a04fcc call 0x11a05a60 */
  push32(0x11a04fd1u); f_11a05a60();
  /* 11a04fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a04fd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a04fd7 dec dword ptr [0x11a07d40] */
  { uint32_t _r=(r32((uint32_t)(0x11a07d40)))-1; w32((uint32_t)(0x11a07d40), (_r)); fl_dec(_r,32); }
  /* 11a04fdd cmp eax, dword ptr [0x11a07d3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a07d3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a04fe3 jbe 0x11a04fe8 */
  if ((C.cf||C.zf)) goto L_11a04fe8;
  /* 11a04fe5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a04fe8:;
  /* 11a04fe8 mov ecx, dword ptr [0x11a07d44] */
  ECX = (r32((uint32_t)(0x11a07d44)));
  /* 11a04fee mov dword ptr [0x11a07d38], ecx */
  w32((uint32_t)(0x11a07d38), (ECX));
  /* 11a04ff4 jmp 0x11a04ff9 */
  goto L_11a04ff9;
L_11a04ff6:;
  /* 11a04ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11a04ff9:;
  /* 11a04ff9 mov dword ptr [0x11a07d3c], eax */
  w32((uint32_t)(0x11a07d3c), (EAX));
  /* 11a04ffe mov dword ptr [0x11a07d34], esi */
  w32((uint32_t)(0x11a07d34), (ESI));
L_11a05004:;
  /* 11a05004 pop edi */
  EDI = (pop32());
  /* 11a05005 pop esi */
  ESI = (pop32());
  /* 11a05006 pop ebx */
  EBX = (pop32());
  /* 11a05007 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05008 ret  */
  ESPCHK(0x11a04cdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10005009 @ 0x11a05009 (777 bytes, 275 insns) */
void f_11a05009(void) {
  FTRACE(0x11a05009u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05009 push ebp */
  push32((uint32_t)(EBP));
  /* 11a0500a mov ebp, esp */
  EBP = (ESP);
  /* 11a0500c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0500f mov eax, dword ptr [0x11a07d40] */
  EAX = (r32((uint32_t)(0x11a07d40)));
  /* 11a05014 mov edx, dword ptr [0x11a07d44] */
  EDX = (r32((uint32_t)(0x11a07d44)));
  /* 11a0501a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0501b push esi */
  push32((uint32_t)(ESI));
  /* 11a0501c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a0501f push edi */
  push32((uint32_t)(EDI));
  /* 11a05020 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a05023 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05026 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a05029 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a0502c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a0502f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a05032 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a05035 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a05036 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05039 jge 0x11a05049 */
  if ((C.sf==C.of)) goto L_11a05049;
  /* 11a0503b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a0503e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a05040 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a05044 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a05047 jmp 0x11a05059 */
  goto L_11a05059;
L_11a05049:;
  /* 11a05049 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0504c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a0504f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a05051 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a05053 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a05056 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a05059:;
  /* 11a05059 mov eax, dword ptr [0x11a07d38] */
  EAX = (r32((uint32_t)(0x11a07d38)));
  /* 11a0505e mov ebx, eax */
  EBX = (EAX);
  /* 11a05060 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05062 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a05065 jae 0x11a05080 */
  if (!C.cf) goto L_11a05080;
L_11a05067:;
  /* 11a05067 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a0506a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a0506c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a0506f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05071 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a05073 jne 0x11a05080 */
  if (!C.zf) goto L_11a05080;
  /* 11a05075 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05078 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0507b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a0507e jb 0x11a05067 */
  if (C.cf) goto L_11a05067;
L_11a05080:;
  /* 11a05080 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05083 jne 0x11a050fe */
  if (!C.zf) goto L_11a050fe;
  /* 11a05085 mov ebx, edx */
  EBX = (EDX);
L_11a05087:;
  /* 11a05087 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05089 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a0508c jae 0x11a050a3 */
  if (!C.cf) goto L_11a050a3;
  /* 11a0508e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a05091 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a05093 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a05096 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05098 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a0509a jne 0x11a050a1 */
  if (!C.zf) goto L_11a050a1;
  /* 11a0509c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0509f jmp 0x11a05087 */
  goto L_11a05087;
L_11a050a1:;
  /* 11a050a1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a050a3:;
  /* 11a050a3 jne 0x11a050fe */
  if (!C.zf) goto L_11a050fe;
L_11a050a5:;
  /* 11a050a5 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a050a8 jae 0x11a050bb */
  if (!C.cf) goto L_11a050bb;
  /* 11a050aa cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a050ae jne 0x11a050b8 */
  if (!C.zf) goto L_11a050b8;
  /* 11a050b0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a050b3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a050b6 jmp 0x11a050a5 */
  goto L_11a050a5;
L_11a050b8:;
  /* 11a050b8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a050bb:;
  /* 11a050bb jne 0x11a050e3 */
  if (!C.zf) goto L_11a050e3;
  /* 11a050bd mov ebx, edx */
  EBX = (EDX);
L_11a050bf:;
  /* 11a050bf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a050c1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a050c4 jae 0x11a050d3 */
  if (!C.cf) goto L_11a050d3;
  /* 11a050c6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a050ca jne 0x11a050d1 */
  if (!C.zf) goto L_11a050d1;
  /* 11a050cc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a050cf jmp 0x11a050bf */
  goto L_11a050bf;
L_11a050d1:;
  /* 11a050d1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a050d3:;
  /* 11a050d3 jne 0x11a050e3 */
  if (!C.zf) goto L_11a050e3;
  /* 11a050d5 call 0x11a05312 */
  push32(0x11a050dau); f_11a05312();
  /* 11a050da mov ebx, eax */
  EBX = (EAX);
  /* 11a050dc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a050de mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a050e1 je 0x11a050f7 */
  if (C.zf) goto L_11a050f7;
L_11a050e3:;
  /* 11a050e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a050e4 call 0x11a053c3 */
  push32(0x11a050e9u); f_11a053c3();
  /* 11a050e9 pop ecx */
  ECX = (pop32());
  /* 11a050ea mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a050ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a050ef mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a050f2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a050f5 jne 0x11a050fe */
  if (!C.zf) goto L_11a050fe;
L_11a050f7:;
  /* 11a050f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a050f9 jmp 0x11a0530d */
  goto L_11a0530d;
L_11a050fe:;
  /* 11a050fe mov dword ptr [0x11a07d38], ebx */
  w32((uint32_t)(0x11a07d38), (EBX));
  /* 11a05104 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a05107 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a05109 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0510c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a0510f je 0x11a05125 */
  if (C.zf) goto L_11a05125;
  /* 11a05111 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a05118 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a0511c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a0511f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05121 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a05123 jne 0x11a0515c */
  if (!C.zf) goto L_11a0515c;
L_11a05125:;
  /* 11a05125 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a0512b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a0512e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a05131 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a05134 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a05138 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a0513b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a0513d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a05140 jne 0x11a05159 */
  if (!C.zf) goto L_11a05159;
L_11a05142:;
  /* 11a05142 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a05148 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a0514b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a0514e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05151 mov edi, esi */
  EDI = (ESI);
  /* 11a05153 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a05155 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a05157 je 0x11a05142 */
  if (C.zf) goto L_11a05142;
L_11a05159:;
  /* 11a05159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a0515c:;
  /* 11a0515c mov ecx, edx */
  ECX = (EDX);
  /* 11a0515e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05160 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a05166 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a0516d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a05170 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a05174 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a05176 jne 0x11a05185 */
  if (!C.zf) goto L_11a05185;
  /* 11a05178 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a0517f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a05181 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a05184 pop edi */
  EDI = (pop32());
L_11a05185:;
  /* 11a05185 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a05187 jl 0x11a0518e */
  if ((C.sf!=C.of)) goto L_11a0518e;
  /* 11a05189 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a0518b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a0518c jmp 0x11a05185 */
  goto L_11a05185;
L_11a0518e:;
  /* 11a0518e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a05191 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a05195 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a05197 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0519a mov esi, ecx */
  ESI = (ECX);
  /* 11a0519c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a0519f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a051a2 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a051a3 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a051a6 jle 0x11a051ab */
  if ((C.zf||C.sf!=C.of)) goto L_11a051ab;
  /* 11a051a8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a051aa pop esi */
  ESI = (pop32());
L_11a051ab:;
  /* 11a051ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a051ad je 0x11a052c0 */
  if (C.zf) goto L_11a052c0;
  /* 11a051b3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a051b6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a051b9 jne 0x11a0521c */
  if (!C.zf) goto L_11a0521c;
  /* 11a051bb cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a051be jge 0x11a051eb */
  if ((C.sf==C.of)) goto L_11a051eb;
  /* 11a051c0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a051c5 mov ecx, edi */
  ECX = (EDI);
  /* 11a051c7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a051c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a051cc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a051d0 not ebx */
  EBX = (~(EBX));
  /* 11a051d2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a051d5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a051d9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a051dd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a051df jne 0x11a05219 */
  if (!C.zf) goto L_11a05219;
  /* 11a051e1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a051e4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a051e7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a051e9 jmp 0x11a0521c */
  goto L_11a0521c;
L_11a051eb:;
  /* 11a051eb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a051ee mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a051f3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a051f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a051f8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a051fc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a05203 not ebx */
  EBX = (~(EBX));
  /* 11a05205 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a05207 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a05209 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a0520c jne 0x11a05219 */
  if (!C.zf) goto L_11a05219;
  /* 11a0520e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05211 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a05214 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a05217 jmp 0x11a0521c */
  goto L_11a0521c;
L_11a05219:;
  /* 11a05219 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a0521c:;
  /* 11a0521c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a0521f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a05222 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05226 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a05229 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a0522c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a0522f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a05232 je 0x11a052cc */
  if (C.zf) goto L_11a052cc;
  /* 11a05238 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a0523b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a0523f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a05242 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a05245 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a05248 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a0524b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a0524e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a05251 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a05254 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05257 jne 0x11a052bd */
  if (!C.zf) goto L_11a052bd;
  /* 11a05259 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a0525d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05260 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a05263 jge 0x11a0528e */
  if ((C.sf==C.of)) goto L_11a0528e;
  /* 11a05265 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a05267 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a0526b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a0526f jne 0x11a0527c */
  if (!C.zf) goto L_11a0527c;
  /* 11a05271 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a05276 mov ecx, esi */
  ECX = (ESI);
  /* 11a05278 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a0527a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a0527c:;
  /* 11a0527c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a05281 mov ecx, esi */
  ECX = (ESI);
  /* 11a05283 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a05285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a05288 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a0528c jmp 0x11a052bd */
  goto L_11a052bd;
L_11a0528e:;
  /* 11a0528e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a05290 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a05294 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a05298 jne 0x11a052a7 */
  if (!C.zf) goto L_11a052a7;
  /* 11a0529a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a0529d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a052a2 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a052a4 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a052a7:;
  /* 11a052a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a052aa lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a052b1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a052b4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a052b9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a052bb or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a052bd:;
  /* 11a052bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a052c0:;
  /* 11a052c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a052c2 je 0x11a052cf */
  if (C.zf) goto L_11a052cf;
  /* 11a052c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a052c6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a052ca jmp 0x11a052cf */
  goto L_11a052cf;
L_11a052cc:;
  /* 11a052cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a052cf:;
  /* 11a052cf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a052d2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a052d4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a052d7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a052d9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a052dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a052e0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a052e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a052e4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a052e7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a052e9 jne 0x11a05305 */
  if (!C.zf) goto L_11a05305;
  /* 11a052eb cmp ebx, dword ptr [0x11a07d3c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a07d3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a052f1 jne 0x11a05305 */
  if (!C.zf) goto L_11a05305;
  /* 11a052f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a052f6 cmp ecx, dword ptr [0x11a07d34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a07d34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a052fc jne 0x11a05305 */
  if (!C.zf) goto L_11a05305;
  /* 11a052fe and dword ptr [0x11a07d3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a07d3c)))&(0x0u); w32((uint32_t)(0x11a07d3c), (_r)); fl_logic(_r,32); }
L_11a05305:;
  /* 11a05305 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a05308 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a0530a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a0530d:;
  /* 11a0530d pop edi */
  EDI = (pop32());
  /* 11a0530e pop esi */
  ESI = (pop32());
  /* 11a0530f pop ebx */
  EBX = (pop32());
  /* 11a05310 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05311 ret  */
  ESPCHK(0x11a05009u, _esp0);
  ESP += 4; return;
}

/* FUN_10005312 @ 0x11a05312 (177 bytes, 53 insns) */
void f_11a05312(void) {
  FTRACE(0x11a05312u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05312 mov eax, dword ptr [0x11a07d40] */
  EAX = (r32((uint32_t)(0x11a07d40)));
  /* 11a05317 mov ecx, dword ptr [0x11a07d30] */
  ECX = (r32((uint32_t)(0x11a07d30)));
  /* 11a0531d push esi */
  push32((uint32_t)(ESI));
  /* 11a0531e push edi */
  push32((uint32_t)(EDI));
  /* 11a0531f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05321 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05323 jne 0x11a05355 */
  if (!C.zf) goto L_11a05355;
  /* 11a05325 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a05329 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a0532c push eax */
  push32((uint32_t)(EAX));
  /* 11a0532d push dword ptr [0x11a07d44] */
  push32((uint32_t)(r32((uint32_t)(0x11a07d44))));
  /* 11a05333 push edi */
  push32((uint32_t)(EDI));
  /* 11a05334 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a0533a call dword ptr [0x11a06028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06028))), 0x11a05340u);
  /* 11a05340 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05342 je 0x11a053a5 */
  if (C.zf) goto L_11a053a5;
  /* 11a05344 add dword ptr [0x11a07d30], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a07d30))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a07d30), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a0534b mov dword ptr [0x11a07d44], eax */
  w32((uint32_t)(0x11a07d44), (EAX));
  /* 11a05350 mov eax, dword ptr [0x11a07d40] */
  EAX = (r32((uint32_t)(0x11a07d40)));
L_11a05355:;
  /* 11a05355 mov ecx, dword ptr [0x11a07d44] */
  ECX = (r32((uint32_t)(0x11a07d44)));
  /* 11a0535b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a05360 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a05362 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a05365 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a0536b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a0536e call dword ptr [0x11a0603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0603c))), 0x11a05374u);
  /* 11a05374 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05376 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a05379 je 0x11a053a5 */
  if (C.zf) goto L_11a053a5;
  /* 11a0537b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a0537d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a05382 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a05387 push edi */
  push32((uint32_t)(EDI));
  /* 11a05388 call dword ptr [0x11a0602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0602c))), 0x11a0538eu);
  /* 11a0538e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05390 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a05393 jne 0x11a053a9 */
  if (!C.zf) goto L_11a053a9;
  /* 11a05395 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a05398 push edi */
  push32((uint32_t)(EDI));
  /* 11a05399 push dword ptr [0x11a07f68] */
  push32((uint32_t)(r32((uint32_t)(0x11a07f68))));
  /* 11a0539f call dword ptr [0x11a0604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0604c))), 0x11a053a5u);
L_11a053a5:;
  /* 11a053a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a053a7 jmp 0x11a053c0 */
  goto L_11a053c0;
L_11a053a9:;
  /* 11a053a9 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a053ad mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a053af mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a053b2 inc dword ptr [0x11a07d40] */
  { uint32_t _r=(r32((uint32_t)(0x11a07d40)))+1; w32((uint32_t)(0x11a07d40), (_r)); fl_inc(_r,32); }
  /* 11a053b8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a053bb or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a053be mov eax, esi */
  EAX = (ESI);
L_11a053c0:;
  /* 11a053c0 pop edi */
  EDI = (pop32());
  /* 11a053c1 pop esi */
  ESI = (pop32());
  /* 11a053c2 ret  */
  ESPCHK(0x11a05312u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c3 @ 0x11a053c3 (251 bytes, 85 insns) */
void f_11a053c3(void) {
  FTRACE(0x11a053c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a053c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a053c4 mov ebp, esp */
  EBP = (ESP);
  /* 11a053c6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a053c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a053ca push ebx */
  push32((uint32_t)(EBX));
  /* 11a053cb push esi */
  push32((uint32_t)(ESI));
  /* 11a053cc push edi */
  push32((uint32_t)(EDI));
  /* 11a053cd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a053d0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a053d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a053d5:;
  /* 11a053d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a053d7 jl 0x11a053de */
  if ((C.sf!=C.of)) goto L_11a053de;
  /* 11a053d9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a053db inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a053dc jmp 0x11a053d5 */
  goto L_11a053d5;
L_11a053de:;
  /* 11a053de mov eax, ebx */
  EAX = (EBX);
  /* 11a053e0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a053e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a053e8 pop edx */
  EDX = (pop32());
  /* 11a053e9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a053f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a053f3:;
  /* 11a053f3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a053f6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a053f9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a053fc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a053fd jne 0x11a053f3 */
  if (!C.zf) goto L_11a053f3;
  /* 11a053ff mov edi, ebx */
  EDI = (EBX);
  /* 11a05401 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a05403 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a05406 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05409 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a0540e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a05413 push edi */
  push32((uint32_t)(EDI));
  /* 11a05414 call dword ptr [0x11a0602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0602c))), 0x11a0541au);
  /* 11a0541a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0541c jne 0x11a05426 */
  if (!C.zf) goto L_11a05426;
  /* 11a0541e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a05421 jmp 0x11a054b9 */
  goto L_11a054b9;
L_11a05426:;
  /* 11a05426 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a0542c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0542e ja 0x11a0546c */
  if ((!C.cf&&!C.zf)) goto L_11a0546c;
  /* 11a05430 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a05433:;
  /* 11a05433 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a05437 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a0543e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a05444 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a0544b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a0544d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a05453 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a05456 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a05460 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05465 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a05468 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0546a jbe 0x11a05433 */
  if ((C.cf||C.zf)) goto L_11a05433;
L_11a0546c:;
  /* 11a0546c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a0546f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a05472 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05477 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a05479 pop edi */
  EDI = (pop32());
  /* 11a0547a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a0547d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a05480 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a05483 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a05486 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a05489 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a0548e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a05495 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a05498 mov cl, al */
  CL = (AL);
  /* 11a0549a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a0549c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0549e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a054a1 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a054a4 jne 0x11a054a9 */
  if (!C.zf) goto L_11a054a9;
  /* 11a054a6 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a054a9:;
  /* 11a054a9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a054ae mov ecx, ebx */
  ECX = (EBX);
  /* 11a054b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a054b2 not edx */
  EDX = (~(EDX));
  /* 11a054b4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a054b7 mov eax, ebx */
  EAX = (EBX);
L_11a054b9:;
  /* 11a054b9 pop edi */
  EDI = (pop32());
  /* 11a054ba pop esi */
  ESI = (pop32());
  /* 11a054bb pop ebx */
  EBX = (pop32());
  /* 11a054bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a054bd ret  */
  ESPCHK(0x11a053c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100054be @ 0x11a054be (137 bytes, 50 insns) */
void f_11a054be(void) {
  FTRACE(0x11a054beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a054be push ebx */
  push32((uint32_t)(EBX));
  /* 11a054bf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a054c1 cmp dword ptr [0x11a07cf4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a07cf4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a054c7 push esi */
  push32((uint32_t)(ESI));
  /* 11a054c8 push edi */
  push32((uint32_t)(EDI));
  /* 11a054c9 jne 0x11a0550d */
  if (!C.zf) goto L_11a0550d;
  /* 11a054cb push 0x11a06498 */
  push32((uint32_t)(0x11a06498u));
  /* 11a054d0 call dword ptr [0x11a0601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0601c))), 0x11a054d6u);
  /* 11a054d6 mov edi, eax */
  EDI = (EAX);
  /* 11a054d8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a054da je 0x11a05543 */
  if (C.zf) goto L_11a05543;
  /* 11a054dc mov esi, dword ptr [0x11a06020] */
  ESI = (r32((uint32_t)(0x11a06020)));
  /* 11a054e2 push 0x11a0648c */
  push32((uint32_t)(0x11a0648cu));
  /* 11a054e7 push edi */
  push32((uint32_t)(EDI));
  /* 11a054e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a054eau);
  /* 11a054ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a054ec mov dword ptr [0x11a07cf4], eax */
  w32((uint32_t)(0x11a07cf4), (EAX));
  /* 11a054f1 je 0x11a05543 */
  if (C.zf) goto L_11a05543;
  /* 11a054f3 push 0x11a0647c */
  push32((uint32_t)(0x11a0647cu));
  /* 11a054f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a054f9 call esi */
  call_ind((uint32_t)(ESI), 0x11a054fbu);
  /* 11a054fb push 0x11a06468 */
  push32((uint32_t)(0x11a06468u));
  /* 11a05500 push edi */
  push32((uint32_t)(EDI));
  /* 11a05501 mov dword ptr [0x11a07cf8], eax */
  w32((uint32_t)(0x11a07cf8), (EAX));
  /* 11a05506 call esi */
  call_ind((uint32_t)(ESI), 0x11a05508u);
  /* 11a05508 mov dword ptr [0x11a07cfc], eax */
  w32((uint32_t)(0x11a07cfc), (EAX));
L_11a0550d:;
  /* 11a0550d mov eax, dword ptr [0x11a07cf8] */
  EAX = (r32((uint32_t)(0x11a07cf8)));
  /* 11a05512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05514 je 0x11a0552c */
  if (C.zf) goto L_11a0552c;
  /* 11a05516 call eax */
  call_ind((uint32_t)(EAX), 0x11a05518u);
  /* 11a05518 mov ebx, eax */
  EBX = (EAX);
  /* 11a0551a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a0551c je 0x11a0552c */
  if (C.zf) goto L_11a0552c;
  /* 11a0551e mov eax, dword ptr [0x11a07cfc] */
  EAX = (r32((uint32_t)(0x11a07cfc)));
  /* 11a05523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05525 je 0x11a0552c */
  if (C.zf) goto L_11a0552c;
  /* 11a05527 push ebx */
  push32((uint32_t)(EBX));
  /* 11a05528 call eax */
  call_ind((uint32_t)(EAX), 0x11a0552au);
  /* 11a0552a mov ebx, eax */
  EBX = (EAX);
L_11a0552c:;
  /* 11a0552c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a05530 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a05534 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a05538 push ebx */
  push32((uint32_t)(EBX));
  /* 11a05539 call dword ptr [0x11a07cf4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a07cf4))), 0x11a0553fu);
L_11a0553f:;
  /* 11a0553f pop edi */
  EDI = (pop32());
  /* 11a05540 pop esi */
  ESI = (pop32());
  /* 11a05541 pop ebx */
  EBX = (pop32());
  /* 11a05542 ret  */
  ESPCHK(0x11a054beu, _esp0);
  ESP += 4; return;
L_11a05543:;
  /* 11a05543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a05545 jmp 0x11a0553f */
  goto L_11a0553f;
}

/* _strncpy @ 0x11a05550 (254 bytes, 109 insns) */
void f_11a05550(void) {
  FTRACE(0x11a05550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05550 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a05554 push edi */
  push32((uint32_t)(EDI));
  /* 11a05555 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a05557 je 0x11a055d3 */
  if (C.zf) goto L_11a055d3;
  /* 11a05559 push esi */
  push32((uint32_t)(ESI));
  /* 11a0555a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0555b mov ebx, ecx */
  EBX = (ECX);
  /* 11a0555d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a05561 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a05567 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a0556b jne 0x11a05574 */
  if (!C.zf) goto L_11a05574;
  /* 11a0556d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05570 jne 0x11a055e1 */
  if (!C.zf) goto L_11a055e1;
  /* 11a05572 jmp 0x11a05595 */
  goto L_11a05595;
L_11a05574:;
  /* 11a05574 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05576 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a05577 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05579 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a0557a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a0557b je 0x11a055a2 */
  if (C.zf) goto L_11a055a2;
  /* 11a0557d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0557f je 0x11a055aa */
  if (C.zf) goto L_11a055aa;
  /* 11a05581 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a05587 jne 0x11a05574 */
  if (!C.zf) goto L_11a05574;
  /* 11a05589 mov ebx, ecx */
  EBX = (ECX);
  /* 11a0558b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a0558e jne 0x11a055e1 */
  if (!C.zf) goto L_11a055e1;
L_11a05590:;
  /* 11a05590 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a05593 je 0x11a055a2 */
  if (C.zf) goto L_11a055a2;
L_11a05595:;
  /* 11a05595 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05597 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a05598 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a0559a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a0559b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a0559d je 0x11a055ce */
  if (C.zf) goto L_11a055ce;
  /* 11a0559f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a055a0 jne 0x11a05595 */
  if (!C.zf) goto L_11a05595;
L_11a055a2:;
  /* 11a055a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a055a6 pop ebx */
  EBX = (pop32());
  /* 11a055a7 pop esi */
  ESI = (pop32());
  /* 11a055a8 pop edi */
  EDI = (pop32());
  /* 11a055a9 ret  */
  ESPCHK(0x11a05550u, _esp0);
  ESP += 4; return;
L_11a055aa:;
  /* 11a055aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a055b0 je 0x11a055c4 */
  if (C.zf) goto L_11a055c4;
L_11a055b2:;
  /* 11a055b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a055b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a055b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a055b6 je 0x11a05646 */
  if (C.zf) goto L_11a05646;
  /* 11a055bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a055c2 jne 0x11a055b2 */
  if (!C.zf) goto L_11a055b2;
L_11a055c4:;
  /* 11a055c4 mov ebx, ecx */
  EBX = (ECX);
  /* 11a055c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a055c9 jne 0x11a05637 */
  if (!C.zf) goto L_11a05637;
L_11a055cb:;
  /* 11a055cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a055cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a055ce:;
  /* 11a055ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a055cf jne 0x11a055cb */
  if (!C.zf) goto L_11a055cb;
  /* 11a055d1 pop ebx */
  EBX = (pop32());
  /* 11a055d2 pop esi */
  ESI = (pop32());
L_11a055d3:;
  /* 11a055d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a055d7 pop edi */
  EDI = (pop32());
  /* 11a055d8 ret  */
  ESPCHK(0x11a05550u, _esp0);
  ESP += 4; return;
L_11a055d9:;
  /* 11a055d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a055db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a055de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a055df je 0x11a05590 */
  if (C.zf) goto L_11a05590;
L_11a055e1:;
  /* 11a055e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a055e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a055e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a055ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a055ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a055ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a055f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a055f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a055f9 je 0x11a055d9 */
  if (C.zf) goto L_11a055d9;
  /* 11a055fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a055fd je 0x11a0562b */
  if (C.zf) goto L_11a0562b;
  /* 11a055ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a05601 je 0x11a05621 */
  if (C.zf) goto L_11a05621;
  /* 11a05603 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a05609 je 0x11a05617 */
  if (C.zf) goto L_11a05617;
  /* 11a0560b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a05611 jne 0x11a055d9 */
  if (!C.zf) goto L_11a055d9;
  /* 11a05613 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a05615 jmp 0x11a0562f */
  goto L_11a0562f;
L_11a05617:;
  /* 11a05617 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a0561d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a0561f jmp 0x11a0562f */
  goto L_11a0562f;
L_11a05621:;
  /* 11a05621 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a05627 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a05629 jmp 0x11a0562f */
  goto L_11a0562f;
L_11a0562b:;
  /* 11a0562b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a0562d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a0562f:;
  /* 11a0562f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05632 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a05634 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a05635 je 0x11a05641 */
  if (C.zf) goto L_11a05641;
L_11a05637:;
  /* 11a05637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a05639:;
  /* 11a05639 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a0563b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a0563e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a0563f jne 0x11a05639 */
  if (!C.zf) goto L_11a05639;
L_11a05641:;
  /* 11a05641 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a05644 jne 0x11a055cb */
  if (!C.zf) goto L_11a055cb;
L_11a05646:;
  /* 11a05646 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a0564a pop ebx */
  EBX = (pop32());
  /* 11a0564b pop esi */
  ESI = (pop32());
  /* 11a0564c pop edi */
  EDI = (pop32());
  /* 11a0564d ret  */
  ESPCHK(0x11a05550u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a05650 (88 bytes, 40 insns) */
void f_11a05650(void) {
  FTRACE(0x11a05650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05650 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a05654 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a05658 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a0565a je 0x11a056a3 */
  if (C.zf) goto L_11a056a3;
  /* 11a0565c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a0565e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a05662 push edi */
  push32((uint32_t)(EDI));
  /* 11a05663 mov edi, ecx */
  EDI = (ECX);
  /* 11a05665 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05668 jb 0x11a05697 */
  if (C.cf) goto L_11a05697;
  /* 11a0566a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a0566c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a0566f je 0x11a05679 */
  if (C.zf) goto L_11a05679;
  /* 11a05671 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a05673:;
  /* 11a05673 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05675 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a05676 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a05677 jne 0x11a05673 */
  if (!C.zf) goto L_11a05673;
L_11a05679:;
  /* 11a05679 mov ecx, eax */
  ECX = (EAX);
  /* 11a0567b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a0567e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05680 mov ecx, eax */
  ECX = (EAX);
  /* 11a05682 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a05685 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05687 mov ecx, edx */
  ECX = (EDX);
  /* 11a05689 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a0568c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a0568f je 0x11a05697 */
  if (C.zf) goto L_11a05697;
  /* 11a05691 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a05693 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a05695 je 0x11a0569d */
  if (C.zf) goto L_11a0569d;
L_11a05697:;
  /* 11a05697 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05699 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a0569a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a0569b jne 0x11a05697 */
  if (!C.zf) goto L_11a05697;
L_11a0569d:;
  /* 11a0569d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a056a1 pop edi */
  EDI = (pop32());
  /* 11a056a2 ret  */
  ESPCHK(0x11a05650u, _esp0);
  ESP += 4; return;
L_11a056a3:;
  /* 11a056a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a056a7 ret  */
  ESPCHK(0x11a05650u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a8 @ 0x11a056a8 (27 bytes, 13 insns) */
void f_11a056a8(void) {
  FTRACE(0x11a056a8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a056a8 mov eax, dword ptr [0x11a07d00] */
  EAX = (r32((uint32_t)(0x11a07d00)));
  /* 11a056ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a056af je 0x11a056c0 */
  if (C.zf) goto L_11a056c0;
  /* 11a056b1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a056b5 call eax */
  call_ind((uint32_t)(EAX), 0x11a056b7u);
  /* 11a056b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a056b9 pop ecx */
  ECX = (pop32());
  /* 11a056ba je 0x11a056c0 */
  if (C.zf) goto L_11a056c0;
  /* 11a056bc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a056be pop eax */
  EAX = (pop32());
  /* 11a056bf ret  */
  ESPCHK(0x11a056a8u, _esp0);
  ESP += 4; return;
L_11a056c0:;
  /* 11a056c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a056c2 ret  */
  ESPCHK(0x11a056a8u, _esp0);
  ESP += 4; return;
}

/* FUN_100056c3 @ 0x11a056c3 (511 bytes, 193 insns) */
void f_11a056c3(void) {
  FTRACE(0x11a056c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a056c3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a056c4 mov ebp, esp */
  EBP = (ESP);
  /* 11a056c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a056c8 push 0x11a064b0 */
  push32((uint32_t)(0x11a064b0u));
  /* 11a056cd push 0x11a05e90 */
  push32((uint32_t)(0x11a05e90u));
  /* 11a056d2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a056d8 push eax */
  push32((uint32_t)(EAX));
  /* 11a056d9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a056e0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a056e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a056e4 push esi */
  push32((uint32_t)(ESI));
  /* 11a056e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a056e6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a056e9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a056eb cmp dword ptr [0x11a07d28], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a07d28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a056f1 jne 0x11a05739 */
  if (!C.zf) goto L_11a05739;
  /* 11a056f3 push edi */
  push32((uint32_t)(EDI));
  /* 11a056f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a056f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a056f7 pop ebx */
  EBX = (pop32());
  /* 11a056f8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a056f9 push 0x11a064a8 */
  push32((uint32_t)(0x11a064a8u));
  /* 11a056fe mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a05703 push esi */
  push32((uint32_t)(ESI));
  /* 11a05704 push edi */
  push32((uint32_t)(EDI));
  /* 11a05705 call dword ptr [0x11a06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06010))), 0x11a0570bu);
  /* 11a0570b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0570d je 0x11a05717 */
  if (C.zf) goto L_11a05717;
  /* 11a0570f mov dword ptr [0x11a07d28], ebx */
  w32((uint32_t)(0x11a07d28), (EBX));
  /* 11a05715 jmp 0x11a05739 */
  goto L_11a05739;
L_11a05717:;
  /* 11a05717 push edi */
  push32((uint32_t)(EDI));
  /* 11a05718 push edi */
  push32((uint32_t)(EDI));
  /* 11a05719 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0571a push 0x11a064a4 */
  push32((uint32_t)(0x11a064a4u));
  /* 11a0571f push esi */
  push32((uint32_t)(ESI));
  /* 11a05720 push edi */
  push32((uint32_t)(EDI));
  /* 11a05721 call dword ptr [0x11a06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06014))), 0x11a05727u);
  /* 11a05727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05729 je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a0572f mov dword ptr [0x11a07d28], 2 */
  w32((uint32_t)(0x11a07d28), (0x2u));
L_11a05739:;
  /* 11a05739 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0573c jle 0x11a0574e */
  if ((C.zf||C.sf!=C.of)) goto L_11a0574e;
  /* 11a0573e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a05741 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a05744 call 0x11a058e7 */
  push32(0x11a05749u); f_11a058e7();
  /* 11a05749 pop ecx */
  ECX = (pop32());
  /* 11a0574a pop ecx */
  ECX = (pop32());
  /* 11a0574b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a0574e:;
  /* 11a0574e mov eax, dword ptr [0x11a07d28] */
  EAX = (r32((uint32_t)(0x11a07d28)));
  /* 11a05753 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05756 jne 0x11a05775 */
  if (!C.zf) goto L_11a05775;
  /* 11a05758 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a0575b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a0575e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a05761 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a05764 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a05767 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a0576a call dword ptr [0x11a06014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06014))), 0x11a05770u);
  /* 11a05770 jmp 0x11a05853 */
  goto L_11a05853;
L_11a05775:;
  /* 11a05775 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05778 jne 0x11a05851 */
  if (!C.zf) goto L_11a05851;
  /* 11a0577e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05781 jne 0x11a0578b */
  if (!C.zf) goto L_11a0578b;
  /* 11a05783 mov eax, dword ptr [0x11a07d20] */
  EAX = (r32((uint32_t)(0x11a07d20)));
  /* 11a05788 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a0578b:;
  /* 11a0578b push edi */
  push32((uint32_t)(EDI));
  /* 11a0578c push edi */
  push32((uint32_t)(EDI));
  /* 11a0578d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a05790 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a05793 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a05796 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a05798 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0579a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a0579d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a0579e push eax */
  push32((uint32_t)(EAX));
  /* 11a0579f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a057a2 call dword ptr [0x11a06024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06024))), 0x11a057a8u);
  /* 11a057a8 mov ebx, eax */
  EBX = (EAX);
  /* 11a057aa mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a057ad cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a057af je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a057b5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a057b8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a057bb add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a057be and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a057c0 call 0x11a05f70 */
  push32(0x11a057c5u); f_11a05f70();
  /* 11a057c5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a057c8 mov eax, esp */
  EAX = (ESP);
  /* 11a057ca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a057cd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a057d1 jmp 0x11a057e6 */
  goto L_11a057e6;
  /* 11a057d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a057d5 pop eax */
  EAX = (pop32());
  /* 11a057d6 ret  */
  ESPCHK(0x11a056c3u, _esp0);
  ESP += 4; return;
  /* 11a057d7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a057da xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a057dc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a057df or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a057e3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a057e6:;
  /* 11a057e6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a057e9 je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a057eb push ebx */
  push32((uint32_t)(EBX));
  /* 11a057ec push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a057ef push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a057f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a057f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a057f7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a057fa call dword ptr [0x11a06024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06024))), 0x11a05800u);
  /* 11a05800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05802 je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a05804 push edi */
  push32((uint32_t)(EDI));
  /* 11a05805 push edi */
  push32((uint32_t)(EDI));
  /* 11a05806 push ebx */
  push32((uint32_t)(EBX));
  /* 11a05807 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a0580a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a0580d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a05810 call dword ptr [0x11a06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06010))), 0x11a05816u);
  /* 11a05816 mov esi, eax */
  ESI = (EAX);
  /* 11a05818 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a0581b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0581d je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a0581f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a05823 je 0x11a05865 */
  if (C.zf) goto L_11a05865;
  /* 11a05825 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05828 je 0x11a058e0 */
  if (C.zf) goto L_11a058e0;
  /* 11a0582e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05831 jg 0x11a05851 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a05851;
  /* 11a05833 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a05836 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a05839 push ebx */
  push32((uint32_t)(EBX));
  /* 11a0583a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a0583d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a05840 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a05843 call dword ptr [0x11a06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06010))), 0x11a05849u);
  /* 11a05849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a0584b jne 0x11a058e0 */
  if (!C.zf) goto L_11a058e0;
L_11a05851:;
  /* 11a05851 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a05853:;
  /* 11a05853 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a05856 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a05859 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a05860 pop edi */
  EDI = (pop32());
  /* 11a05861 pop esi */
  ESI = (pop32());
  /* 11a05862 pop ebx */
  EBX = (pop32());
  /* 11a05863 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05864 ret  */
  ESPCHK(0x11a056c3u, _esp0);
  ESP += 4; return;
L_11a05865:;
  /* 11a05865 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a0586c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a0586f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05872 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a05874 call 0x11a05f70 */
  push32(0x11a05879u); f_11a05f70();
  /* 11a05879 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a0587c mov ebx, esp */
  EBX = (ESP);
  /* 11a0587e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a05881 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a05885 jmp 0x11a05899 */
  goto L_11a05899;
  /* 11a05887 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a05889 pop eax */
  EAX = (pop32());
  /* 11a0588a ret  */
  ESPCHK(0x11a056c3u, _esp0);
  ESP += 4; return;
  /* 11a0588b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a0588e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a05890 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a05892 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a05896 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a05899:;
  /* 11a05899 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0589b je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a0589d push esi */
  push32((uint32_t)(ESI));
  /* 11a0589e push ebx */
  push32((uint32_t)(EBX));
  /* 11a0589f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a058a2 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a058a5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a058a8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a058ab call dword ptr [0x11a06010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06010))), 0x11a058b1u);
  /* 11a058b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a058b3 je 0x11a05851 */
  if (C.zf) goto L_11a05851;
  /* 11a058b5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a058b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a058b9 push edi */
  push32((uint32_t)(EDI));
  /* 11a058ba jne 0x11a058c0 */
  if (!C.zf) goto L_11a058c0;
  /* 11a058bc push edi */
  push32((uint32_t)(EDI));
  /* 11a058bd push edi */
  push32((uint32_t)(EDI));
  /* 11a058be jmp 0x11a058c6 */
  goto L_11a058c6;
L_11a058c0:;
  /* 11a058c0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a058c3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a058c6:;
  /* 11a058c6 push esi */
  push32((uint32_t)(ESI));
  /* 11a058c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a058c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a058cd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a058d0 call dword ptr [0x11a06064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06064))), 0x11a058d6u);
  /* 11a058d6 mov esi, eax */
  ESI = (EAX);
  /* 11a058d8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a058da je 0x11a05851 */
  if (C.zf) goto L_11a05851;
L_11a058e0:;
  /* 11a058e0 mov eax, esi */
  EAX = (ESI);
  /* 11a058e2 jmp 0x11a05853 */
  goto L_11a05853;
}

/* FUN_100058e7 @ 0x11a058e7 (43 bytes, 20 insns) */
void f_11a058e7(void) {
  FTRACE(0x11a058e7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a058e7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a058eb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a058ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a058f1 push esi */
  push32((uint32_t)(ESI));
  /* 11a058f2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a058f5 je 0x11a05904 */
  if (C.zf) goto L_11a05904;
L_11a058f7:;
  /* 11a058f7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a058fa je 0x11a05904 */
  if (C.zf) goto L_11a05904;
  /* 11a058fc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a058fd mov esi, ecx */
  ESI = (ECX);
  /* 11a058ff dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a05900 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a05902 jne 0x11a058f7 */
  if (!C.zf) goto L_11a058f7;
L_11a05904:;
  /* 11a05904 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a05907 pop esi */
  ESI = (pop32());
  /* 11a05908 jne 0x11a0590f */
  if (!C.zf) goto L_11a0590f;
  /* 11a0590a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a0590e ret  */
  ESPCHK(0x11a058e7u, _esp0);
  ESP += 4; return;
L_11a0590f:;
  /* 11a0590f mov eax, edx */
  EAX = (EDX);
  /* 11a05911 ret  */
  ESPCHK(0x11a058e7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005912 @ 0x11a05912 (318 bytes, 123 insns) */
void f_11a05912(void) {
  FTRACE(0x11a05912u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05912 push ebp */
  push32((uint32_t)(EBP));
  /* 11a05913 mov ebp, esp */
  EBP = (ESP);
  /* 11a05915 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a05917 push 0x11a064c8 */
  push32((uint32_t)(0x11a064c8u));
  /* 11a0591c push 0x11a05e90 */
  push32((uint32_t)(0x11a05e90u));
  /* 11a05921 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a05927 push eax */
  push32((uint32_t)(EAX));
  /* 11a05928 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a0592f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05932 push ebx */
  push32((uint32_t)(EBX));
  /* 11a05933 push esi */
  push32((uint32_t)(ESI));
  /* 11a05934 push edi */
  push32((uint32_t)(EDI));
  /* 11a05935 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a05938 mov eax, dword ptr [0x11a07d2c] */
  EAX = (r32((uint32_t)(0x11a07d2c)));
  /* 11a0593d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a0593f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05941 jne 0x11a05981 */
  if (!C.zf) goto L_11a05981;
  /* 11a05943 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a05946 push eax */
  push32((uint32_t)(EAX));
  /* 11a05947 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a05949 pop esi */
  ESI = (pop32());
  /* 11a0594a push esi */
  push32((uint32_t)(ESI));
  /* 11a0594b push 0x11a064a8 */
  push32((uint32_t)(0x11a064a8u));
  /* 11a05950 push esi */
  push32((uint32_t)(ESI));
  /* 11a05951 call dword ptr [0x11a0600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0600c))), 0x11a05957u);
  /* 11a05957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05959 je 0x11a0595f */
  if (C.zf) goto L_11a0595f;
  /* 11a0595b mov eax, esi */
  EAX = (ESI);
  /* 11a0595d jmp 0x11a0597c */
  goto L_11a0597c;
L_11a0595f:;
  /* 11a0595f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a05962 push eax */
  push32((uint32_t)(EAX));
  /* 11a05963 push esi */
  push32((uint32_t)(ESI));
  /* 11a05964 push 0x11a064a4 */
  push32((uint32_t)(0x11a064a4u));
  /* 11a05969 push esi */
  push32((uint32_t)(ESI));
  /* 11a0596a push ebx */
  push32((uint32_t)(EBX));
  /* 11a0596b call dword ptr [0x11a06018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06018))), 0x11a05971u);
  /* 11a05971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a05973 je 0x11a05a47 */
  if (C.zf) goto L_11a05a47;
  /* 11a05979 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a0597b pop eax */
  EAX = (pop32());
L_11a0597c:;
  /* 11a0597c mov dword ptr [0x11a07d2c], eax */
  w32((uint32_t)(0x11a07d2c), (EAX));
L_11a05981:;
  /* 11a05981 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05984 jne 0x11a059aa */
  if (!C.zf) goto L_11a059aa;
  /* 11a05986 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a05989 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a0598b jne 0x11a05992 */
  if (!C.zf) goto L_11a05992;
  /* 11a0598d mov eax, dword ptr [0x11a07d10] */
  EAX = (r32((uint32_t)(0x11a07d10)));
L_11a05992:;
  /* 11a05992 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a05995 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a05998 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a0599b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a0599e push eax */
  push32((uint32_t)(EAX));
  /* 11a0599f call dword ptr [0x11a06018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06018))), 0x11a059a5u);
  /* 11a059a5 jmp 0x11a05a49 */
  goto L_11a05a49;
L_11a059aa:;
  /* 11a059aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a059ad jne 0x11a05a47 */
  if (!C.zf) goto L_11a05a47;
  /* 11a059b3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a059b6 jne 0x11a059c0 */
  if (!C.zf) goto L_11a059c0;
  /* 11a059b8 mov eax, dword ptr [0x11a07d20] */
  EAX = (r32((uint32_t)(0x11a07d20)));
  /* 11a059bd mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a059c0:;
  /* 11a059c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a059c1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a059c2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a059c5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a059c8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a059cb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a059cd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a059cf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a059d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a059d3 push eax */
  push32((uint32_t)(EAX));
  /* 11a059d4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a059d7 call dword ptr [0x11a06024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06024))), 0x11a059ddu);
  /* 11a059dd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a059e0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a059e2 je 0x11a05a47 */
  if (C.zf) goto L_11a05a47;
  /* 11a059e4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a059e7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a059ea mov eax, edi */
  EAX = (EDI);
  /* 11a059ec add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a059ef and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a059f1 call 0x11a05f70 */
  push32(0x11a059f6u); f_11a05f70();
  /* 11a059f6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a059f9 mov esi, esp */
  ESI = (ESP);
  /* 11a059fb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a059fe push edi */
  push32((uint32_t)(EDI));
  /* 11a059ff push ebx */
  push32((uint32_t)(EBX));
  /* 11a05a00 push esi */
  push32((uint32_t)(ESI));
  /* 11a05a01 call 0x11a05650 */
  push32(0x11a05a06u); f_11a05650();
  /* 11a05a06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05a09 jmp 0x11a05a16 */
  goto L_11a05a16;
  /* 11a05a0b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a05a0d pop eax */
  EAX = (pop32());
  /* 11a05a0e ret  */
  ESPCHK(0x11a05912u, _esp0);
  ESP += 4; return;
  /* 11a05a0f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a05a12 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a05a14 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a05a16:;
  /* 11a05a16 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a05a1a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05a1c je 0x11a05a47 */
  if (C.zf) goto L_11a05a47;
  /* 11a05a1e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a05a21 push esi */
  push32((uint32_t)(ESI));
  /* 11a05a22 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a05a25 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a05a28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a05a2a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a05a2d call dword ptr [0x11a06024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a06024))), 0x11a05a33u);
  /* 11a05a33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05a35 je 0x11a05a47 */
  if (C.zf) goto L_11a05a47;
  /* 11a05a37 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a05a3a push eax */
  push32((uint32_t)(EAX));
  /* 11a05a3b push esi */
  push32((uint32_t)(ESI));
  /* 11a05a3c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a05a3f call dword ptr [0x11a0600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a0600c))), 0x11a05a45u);
  /* 11a05a45 jmp 0x11a05a49 */
  goto L_11a05a49;
L_11a05a47:;
  /* 11a05a47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a05a49:;
  /* 11a05a49 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a05a4c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a05a4f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a05a56 pop edi */
  EDI = (pop32());
  /* 11a05a57 pop esi */
  ESI = (pop32());
  /* 11a05a58 pop ebx */
  EBX = (pop32());
  /* 11a05a59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05a5a ret  */
  ESPCHK(0x11a05912u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x11a05a60 (664 bytes, 257 insns) [15 switch table(s)] */
void f_11a05a60(void) {
  FTRACE(0x11a05a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a05a61 mov ebp, esp */
  EBP = (ESP);
  /* 11a05a63 push edi */
  push32((uint32_t)(EDI));
  /* 11a05a64 push esi */
  push32((uint32_t)(ESI));
  /* 11a05a65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a05a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a05a6b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05a6e mov eax, ecx */
  EAX = (ECX);
  /* 11a05a70 mov edx, ecx */
  EDX = (ECX);
  /* 11a05a72 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05a74 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05a76 jbe 0x11a05a80 */
  if ((C.cf||C.zf)) goto L_11a05a80;
  /* 11a05a78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05a7a jb 0x11a05bf8 */
  if (C.cf) goto L_11a05bf8;
L_11a05a80:;
  /* 11a05a80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a05a86 jne 0x11a05a9c */
  if (!C.zf) goto L_11a05a9c;
  /* 11a05a88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05a8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a05a8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05a91 jb 0x11a05abc */
  if (C.cf) goto L_11a05abc;
  /* 11a05a93 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05a95 jmp dword ptr [edx*4 + 0x11a05ba8] */
  switch (EDX) {
    case 0: goto L_11a05bb8;
    case 1: goto L_11a05bc0;
    case 2: goto L_11a05bcc;
    case 3: goto L_11a05be0;
    default: x86_unimpl("switch@0x11a05a95 out of table"); return;
  }
L_11a05a9c:;
  /* 11a05a9c mov eax, edi */
  EAX = (EDI);
  /* 11a05a9e mov edx, 3 */
  EDX = (0x3u);
  /* 11a05aa3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05aa6 jb 0x11a05ab4 */
  if (C.cf) goto L_11a05ab4;
  /* 11a05aa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a05aab add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05aad jmp dword ptr [eax*4 + 0x11a05ac0] */
  switch (EAX) {
    case 1: goto L_11a05ad0;
    case 2: goto L_11a05afc;
    case 3: goto L_11a05b20;
    default: x86_unimpl("switch@0x11a05aad out of table"); return;
  }
L_11a05ab4:;
  /* 11a05ab4 jmp dword ptr [ecx*4 + 0x11a05bb8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a05bb8)))); return;
  /* 11a05abb nop  */
  /* nop */
L_11a05abc:;
  /* 11a05abc jmp dword ptr [ecx*4 + 0x11a05b3c] */
  switch (ECX) {
    case 0: goto L_11a05b9f;
    case 1: goto L_11a05b8c;
    case 2: goto L_11a05b84;
    case 3: goto L_11a05b7c;
    case 4: goto L_11a05b74;
    case 5: goto L_11a05b6c;
    case 6: goto L_11a05b64;
    case 7: goto L_11a05b5c;
    default: x86_unimpl("switch@0x11a05abc out of table"); return;
  }
  /* 11a05ac3 nop  */
  /* nop */
L_11a05ad0:;
  /* 11a05ad0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05ad2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05ad4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05ad6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05ad9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05adc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05adf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05ae2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05ae5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05ae8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05aeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05aee jb 0x11a05abc */
  if (C.cf) goto L_11a05abc;
  /* 11a05af0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05af2 jmp dword ptr [edx*4 + 0x11a05ba8] */
  switch (EDX) {
    case 0: goto L_11a05bb8;
    case 1: goto L_11a05bc0;
    case 2: goto L_11a05bcc;
    case 3: goto L_11a05be0;
    default: x86_unimpl("switch@0x11a05af2 out of table"); return;
  }
  /* 11a05af9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05afc:;
  /* 11a05afc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05afe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05b00 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05b02 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05b05 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05b08 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05b0b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05b0e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05b11 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05b14 jb 0x11a05abc */
  if (C.cf) goto L_11a05abc;
  /* 11a05b16 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05b18 jmp dword ptr [edx*4 + 0x11a05ba8] */
  switch (EDX) {
    case 0: goto L_11a05bb8;
    case 1: goto L_11a05bc0;
    case 2: goto L_11a05bcc;
    case 3: goto L_11a05be0;
    default: x86_unimpl("switch@0x11a05b18 out of table"); return;
  }
  /* 11a05b1f nop  */
  /* nop */
L_11a05b20:;
  /* 11a05b20 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05b22 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05b24 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05b26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a05b27 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05b2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a05b2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05b2e jb 0x11a05abc */
  if (C.cf) goto L_11a05abc;
  /* 11a05b30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05b32 jmp dword ptr [edx*4 + 0x11a05ba8] */
  switch (EDX) {
    case 0: goto L_11a05bb8;
    case 1: goto L_11a05bc0;
    case 2: goto L_11a05bcc;
    case 3: goto L_11a05be0;
    default: x86_unimpl("switch@0x11a05b32 out of table"); return;
  }
  /* 11a05b39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05b5c:;
  /* 11a05b5c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a05b60 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a05b64:;
  /* 11a05b64 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a05b68 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a05b6c:;
  /* 11a05b6c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a05b70 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a05b74:;
  /* 11a05b74 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a05b78 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a05b7c:;
  /* 11a05b7c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a05b80 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a05b84:;
  /* 11a05b84 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a05b88 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a05b8c:;
  /* 11a05b8c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a05b90 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a05b94 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a05b9b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05b9d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a05b9f:;
  /* 11a05b9f jmp dword ptr [edx*4 + 0x11a05ba8] */
  switch (EDX) {
    case 0: goto L_11a05bb8;
    case 1: goto L_11a05bc0;
    case 2: goto L_11a05bcc;
    case 3: goto L_11a05be0;
    default: x86_unimpl("switch@0x11a05b9f out of table"); return;
  }
  /* 11a05ba6 mov edi, edi */
  EDI = (EDI);
L_11a05bb8:;
  /* 11a05bb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05bbb pop esi */
  ESI = (pop32());
  /* 11a05bbc pop edi */
  EDI = (pop32());
  /* 11a05bbd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05bbe ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05bbf nop  */
  /* nop */
L_11a05bc0:;
  /* 11a05bc0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05bc2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05bc7 pop esi */
  ESI = (pop32());
  /* 11a05bc8 pop edi */
  EDI = (pop32());
  /* 11a05bc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05bca ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05bcb nop  */
  /* nop */
L_11a05bcc:;
  /* 11a05bcc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05bce mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05bd0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05bd3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05bd9 pop esi */
  ESI = (pop32());
  /* 11a05bda pop edi */
  EDI = (pop32());
  /* 11a05bdb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05bdc ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05bdd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05be0:;
  /* 11a05be0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a05be2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a05be4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05be7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05bea mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05bed mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05bf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05bf3 pop esi */
  ESI = (pop32());
  /* 11a05bf4 pop edi */
  EDI = (pop32());
  /* 11a05bf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05bf6 ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05bf7 nop  */
  /* nop */
L_11a05bf8:;
  /* 11a05bf8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a05bfc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a05c00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a05c06 jne 0x11a05c2c */
  if (!C.zf) goto L_11a05c2c;
  /* 11a05c08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05c0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a05c0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05c11 jb 0x11a05c20 */
  if (C.cf) goto L_11a05c20;
  /* 11a05c13 std  */
  C.df=1;
  /* 11a05c14 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05c16 cld  */
  C.df=0;
  /* 11a05c17 jmp dword ptr [edx*4 + 0x11a05d40] */
  switch (EDX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05c17 out of table"); return;
  }
  /* 11a05c1e mov edi, edi */
  EDI = (EDI);
L_11a05c20:;
  /* 11a05c20 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a05c22 jmp dword ptr [ecx*4 + 0x11a05cf0] */
  switch (ECX) {
    case 0: goto L_11a05d37;
    default: x86_unimpl("switch@0x11a05c22 out of table"); return;
  }
  /* 11a05c29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05c2c:;
  /* 11a05c2c mov eax, edi */
  EAX = (EDI);
  /* 11a05c2e mov edx, 3 */
  EDX = (0x3u);
  /* 11a05c33 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05c36 jb 0x11a05c44 */
  if (C.cf) goto L_11a05c44;
  /* 11a05c38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a05c3b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05c3d jmp dword ptr [eax*4 + 0x11a05c48] */
  switch (EAX) {
    case 1: goto L_11a05c58;
    case 2: goto L_11a05c78;
    case 3: goto L_11a05ca0;
    default: x86_unimpl("switch@0x11a05c3d out of table"); return;
  }
L_11a05c44:;
  /* 11a05c44 jmp dword ptr [ecx*4 + 0x11a05d40] */
  switch (ECX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05c44 out of table"); return;
  }
  /* 11a05c4b nop  */
  /* nop */
L_11a05c58:;
  /* 11a05c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05c5b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05c5d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05c60 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a05c61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05c64 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a05c65 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05c68 jb 0x11a05c20 */
  if (C.cf) goto L_11a05c20;
  /* 11a05c6a std  */
  C.df=1;
  /* 11a05c6b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05c6d cld  */
  C.df=0;
  /* 11a05c6e jmp dword ptr [edx*4 + 0x11a05d40] */
  switch (EDX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05c6e out of table"); return;
  }
  /* 11a05c75 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05c78:;
  /* 11a05c78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05c7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05c7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05c80 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05c83 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05c86 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05c89 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05c8c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05c8f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05c92 jb 0x11a05c20 */
  if (C.cf) goto L_11a05c20;
  /* 11a05c94 std  */
  C.df=1;
  /* 11a05c95 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05c97 cld  */
  C.df=0;
  /* 11a05c98 jmp dword ptr [edx*4 + 0x11a05d40] */
  switch (EDX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05c98 out of table"); return;
  }
  /* 11a05c9f nop  */
  /* nop */
L_11a05ca0:;
  /* 11a05ca0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05ca3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a05ca5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05ca8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05cab mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05cae mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05cb1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a05cb4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05cb7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05cba sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05cbd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05cc0 jb 0x11a05c20 */
  if (C.cf) goto L_11a05c20;
  /* 11a05cc6 std  */
  C.df=1;
  /* 11a05cc7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a05cc9 cld  */
  C.df=0;
  /* 11a05cca jmp dword ptr [edx*4 + 0x11a05d40] */
  switch (EDX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05cca out of table"); return;
  }
  /* 11a05cd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a05cd4 hlt  */
  x86_unimpl("hlt @ 0x11a05cd4");
  /* 11a05cd5 pop esp */
  ESP = (pop32());
  /* 11a05cd6 mov al, byte ptr [0xa05cfc11] */
  AL = (r8((uint32_t)(0xa05cfc11)));
  /* 11a05cdb adc dword ptr [ebx*2 + 0x5d0c11a0], eax */
  { uint32_t _a=(r32((uint32_t)(EBX*2 + 0x5d0c11a0))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX*2 + 0x5d0c11a0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a05ce2 mov al, byte ptr [0xa05d1411] */
  AL = (r8((uint32_t)(0xa05d1411)));
  /* 11a05ce7 adc dword ptr [ebx*2 + 0x5d2411a0], ebx */
  { uint32_t _a=(r32((uint32_t)(EBX*2 + 0x5d2411a0))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EBX*2 + 0x5d2411a0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a05cf4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a05cf8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a05cfc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a05d00 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a05d04 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a05d08 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a05d0c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a05d10 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a05d14 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a05d18 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a05d1c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a05d20 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a05d24 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a05d28 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a05d2c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a05d33 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05d35 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a05d37:;
  /* 11a05d37 jmp dword ptr [edx*4 + 0x11a05d40] */
  switch (EDX) {
    case 0: goto L_11a05d50;
    case 1: goto L_11a05d58;
    case 2: goto L_11a05d68;
    case 3: goto L_11a05d7c;
    default: x86_unimpl("switch@0x11a05d37 out of table"); return;
  }
  /* 11a05d3e mov edi, edi */
  EDI = (EDI);
L_11a05d50:;
  /* 11a05d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05d53 pop esi */
  ESI = (pop32());
  /* 11a05d54 pop edi */
  EDI = (pop32());
  /* 11a05d55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05d56 ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05d57 nop  */
  /* nop */
L_11a05d58:;
  /* 11a05d58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05d5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05d5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05d61 pop esi */
  ESI = (pop32());
  /* 11a05d62 pop edi */
  EDI = (pop32());
  /* 11a05d63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05d64 ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05d65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a05d68:;
  /* 11a05d68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05d6b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05d6e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05d71 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05d74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05d77 pop esi */
  ESI = (pop32());
  /* 11a05d78 pop edi */
  EDI = (pop32());
  /* 11a05d79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05d7a ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
  /* 11a05d7b nop  */
  /* nop */
L_11a05d7c:;
  /* 11a05d7c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a05d7f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a05d82 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a05d85 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a05d88 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a05d8b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a05d8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05d91 pop esi */
  ESI = (pop32());
  /* 11a05d92 pop edi */
  EDI = (pop32());
  /* 11a05d93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a05d94 ret  */
  ESPCHK(0x11a05a60u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a05d98 (32 bytes, 18 insns) */
void f_11a05d98(void) {
  FTRACE(0x11a05d98u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05d98 push ebp */
  push32((uint32_t)(EBP));
  /* 11a05d99 mov ebp, esp */
  EBP = (ESP);
  /* 11a05d9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a05d9c push esi */
  push32((uint32_t)(ESI));
  /* 11a05d9d push edi */
  push32((uint32_t)(EDI));
  /* 11a05d9e push ebp */
  push32((uint32_t)(EBP));
  /* 11a05d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a05da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a05da3 push 0x11a05db0 */
  push32((uint32_t)(0x11a05db0u));
  /* 11a05da8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a05dab call 0x11a05fa0 */
  push32(0x11a05db0u); f_11a05fa0();
  /* 11a05db0 pop ebp */
  EBP = (pop32());
  /* 11a05db1 pop edi */
  EDI = (pop32());
  /* 11a05db2 pop esi */
  ESI = (pop32());
  /* 11a05db3 pop ebx */
  EBX = (pop32());
  /* 11a05db4 mov esp, ebp */
  ESP = (EBP);
  /* 11a05db6 pop ebp */
  EBP = (pop32());
  /* 11a05db7 ret  */
  ESPCHK(0x11a05d98u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a05dda (104 bytes, 33 insns) */
void f_11a05dda(void) {
  FTRACE(0x11a05ddau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05dda push ebx */
  push32((uint32_t)(EBX));
  /* 11a05ddb push esi */
  push32((uint32_t)(ESI));
  /* 11a05ddc push edi */
  push32((uint32_t)(EDI));
  /* 11a05ddd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a05de1 push eax */
  push32((uint32_t)(EAX));
  /* 11a05de2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a05de4 push 0x11a05db8 */
  push32((uint32_t)(0x11a05db8u));
  /* 11a05de9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a05df0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a05df7:;
  /* 11a05df7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a05dfb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a05dfe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a05e01 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05e04 je 0x11a05e34 */
  if (C.zf) goto L_11a05e34;
  /* 11a05e06 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05e0a je 0x11a05e34 */
  if (C.zf) goto L_11a05e34;
  /* 11a05e0c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a05e0f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a05e12 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a05e16 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a05e19 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05e1e jne 0x11a05e32 */
  if (!C.zf) goto L_11a05e32;
  /* 11a05e20 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a05e25 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a05e29 call 0x11a05e6e */
  push32(0x11a05e2eu); f_11a05e6e();
  /* 11a05e2e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a05e32u);
L_11a05e32:;
  /* 11a05e32 jmp 0x11a05df7 */
  goto L_11a05df7;
L_11a05e34:;
  /* 11a05e34 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a05e3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05e3e pop edi */
  EDI = (pop32());
  /* 11a05e3f pop esi */
  ESI = (pop32());
  /* 11a05e40 pop ebx */
  EBX = (pop32());
  /* 11a05e41 ret  */
  ESPCHK(0x11a05ddau, _esp0);
  ESP += 4; return;
}

/* FUN_10005e6e @ 0x11a05e6e (24 bytes, 10 insns) */
void f_11a05e6e(void) {
  FTRACE(0x11a05e6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05e6e push ebx */
  push32((uint32_t)(EBX));
  /* 11a05e6f push ecx */
  push32((uint32_t)(ECX));
  /* 11a05e70 mov ebx, 0x11a077a0 */
  EBX = (0x11a077a0u);
  /* 11a05e75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a05e78 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a05e7b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a05e7e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a05e81 pop ecx */
  ECX = (pop32());
  /* 11a05e82 pop ebx */
  EBX = (pop32());
  /* 11a05e83 ret 4 */
  ESPCHK(0x11a05e6eu, _esp0);
  ESP += 8; return;
}

/* FUN_10005f4d @ 0x11a05f4d (27 bytes, 11 insns) */
void f_11a05f4d(void) {
  FTRACE(0x11a05f4du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05f4d push ebp */
  push32((uint32_t)(EBP));
  /* 11a05f4e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a05f52 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a05f54 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a05f57 push eax */
  push32((uint32_t)(EAX));
  /* 11a05f58 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a05f5b push eax */
  push32((uint32_t)(EAX));
  /* 11a05f5c call 0x11a05dda */
  push32(0x11a05f61u); f_11a05dda();
  /* 11a05f61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a05f64 pop ebp */
  EBP = (pop32());
  /* 11a05f65 ret 4 */
  ESPCHK(0x11a05f4du, _esp0);
  ESP += 8; return;
}

/* FUN_10005f70 @ 0x11a05f70 (47 bytes, 17 insns) */
void f_11a05f70(void) {
  FTRACE(0x11a05f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05f70 push ecx */
  push32((uint32_t)(ECX));
  /* 11a05f71 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05f76 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a05f7a jb 0x11a05f90 */
  if (C.cf) goto L_11a05f90;
L_11a05f7c:;
  /* 11a05f7c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05f82 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05f87 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a05f89 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a05f8e jae 0x11a05f7c */
  if (!C.cf) goto L_11a05f7c;
L_11a05f90:;
  /* 11a05f90 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a05f92 mov eax, esp */
  EAX = (ESP);
  /* 11a05f94 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a05f96 mov esp, ecx */
  ESP = (ECX);
  /* 11a05f98 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a05f9a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a05f9d push eax */
  push32((uint32_t)(EAX));
  /* 11a05f9e ret  */
  ESPCHK(0x11a05f70u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a05fa0 (6 bytes, 1 insns) */
void f_11a05fa0(void) {
  FTRACE(0x11a05fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a05fa0 jmp dword ptr [0x11a06008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a06008)))); return;
}

