#include "recomp.h"

/* FUN_10001000 @ 0x11a71000 (18 bytes, 7 insns) */
void f_11a71000(void) {
  FTRACE(0x11a71000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a71000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a71004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a71005 jne 0x11a7100c */
  if (!C.zf) goto L_11a7100c;
  /* 11a71007 call 0x11a711d7 */
  push32(0x11a7100cu); f_11a711d7();
L_11a7100c:;
  /* 11a7100c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7100e pop eax */
  EAX = (pop32());
  /* 11a7100f ret 0xc */
  ESPCHK(0x11a71000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11a71012 (30 bytes, 15 insns) */
void f_11a71012(void) {
  FTRACE(0x11a71012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a71012 push esi */
  push32((uint32_t)(ESI));
  /* 11a71013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a71015:;
  /* 11a71015 push esi */
  push32((uint32_t)(ESI));
  /* 11a71016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a7101a call dword ptr [0x11a76158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76158))), 0x11a71020u);
  /* 11a71020 pop ecx */
  ECX = (pop32());
  /* 11a71021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a71023 pop ecx */
  ECX = (pop32());
  /* 11a71024 jg 0x11a7102c */
  if ((!C.zf&&C.sf==C.of)) goto L_11a7102c;
  /* 11a71026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a71027 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7102a jl 0x11a71015 */
  if ((C.sf!=C.of)) goto L_11a71015;
L_11a7102c:;
  /* 11a7102c mov eax, esi */
  EAX = (ESI);
  /* 11a7102e pop esi */
  ESI = (pop32());
  /* 11a7102f ret  */
  ESPCHK(0x11a71012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x11a71030 (66 bytes, 24 insns) */
void f_11a71030(void) {
  FTRACE(0x11a71030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a71030 push ebp */
  push32((uint32_t)(EBP));
  /* 11a71031 mov ebp, esp */
  EBP = (ESP);
  /* 11a71033 push esi */
  push32((uint32_t)(ESI));
  /* 11a71034 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a71037 call 0x11a71012 */
  push32(0x11a7103cu); f_11a71012();
  /* 11a7103c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7103e mov esi, eax */
  ESI = (EAX);
  /* 11a71040 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a71043 call dword ptr [0x11a76148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76148))), 0x11a71049u);
  /* 11a71049 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7104b call dword ptr [0x11a7614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7614c))), 0x11a71051u);
  /* 11a71051 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a71053 push esi */
  push32((uint32_t)(ESI));
  /* 11a71054 call dword ptr [0x11a76150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76150))), 0x11a7105au);
  /* 11a7105a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a7105d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a71060 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a71063 push esi */
  push32((uint32_t)(ESI));
  /* 11a71064 call dword ptr [0x11a76154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76154))), 0x11a7106au);
  /* 11a7106a add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7106d mov eax, esi */
  EAX = (ESI);
  /* 11a7106f pop esi */
  ESI = (pop32());
  /* 11a71070 pop ebp */
  EBP = (pop32());
  /* 11a71071 ret  */
  ESPCHK(0x11a71030u, _esp0);
  ESP += 4; return;
}

/* FUN_10001072 @ 0x11a71072 (24 bytes, 7 insns) */
void f_11a71072(void) {
  FTRACE(0x11a71072u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a71072 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a71074 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11a71079 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a7107d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a71081 call 0x11a71030 */
  push32(0x11a71086u); f_11a71030();
  /* 11a71086 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71089 ret  */
  ESPCHK(0x11a71072u, _esp0);
  ESP += 4; return;
}

/* FUN_1000108a @ 0x11a7108a (23 bytes, 7 insns) */
void f_11a7108a(void) {
  FTRACE(0x11a7108au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7108a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7108c push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a71090 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a71094 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a71098 call 0x11a71030 */
  push32(0x11a7109du); f_11a71030();
  /* 11a7109d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a710a0 ret  */
  ESPCHK(0x11a7108au, _esp0);
  ESP += 4; return;
}

/* FUN_100010a1 @ 0x11a710a1 (39 bytes, 13 insns) */
void f_11a710a1(void) {
  FTRACE(0x11a710a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a710a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11a710a2 mov ebp, esp */
  EBP = (ESP);
  /* 11a710a4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a710a9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a710ac push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a710af push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a710b2 push 0x11a77d08 */
  push32((uint32_t)(0x11a77d08u));
  /* 11a710b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a710ba call dword ptr [0x11a76144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76144))), 0x11a710c0u);
  /* 11a710c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a710c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a710c6 pop ebp */
  EBP = (pop32());
  /* 11a710c7 ret  */
  ESPCHK(0x11a710a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100010c8 @ 0x11a710c8 (271 bytes, 117 insns) */
void f_11a710c8(void) {
  FTRACE(0x11a710c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a710c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a710c9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a710ca push esi */
  push32((uint32_t)(ESI));
  /* 11a710cb push edi */
  push32((uint32_t)(EDI));
  /* 11a710cc push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11a710d0 call 0x11a71012 */
  push32(0x11a710d5u); f_11a71012();
  /* 11a710d5 mov edi, dword ptr [0x11a7612c] */
  EDI = (r32((uint32_t)(0x11a7612c)));
  /* 11a710db mov esi, eax */
  ESI = (EAX);
  /* 11a710dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a710df push esi */
  push32((uint32_t)(ESI));
  /* 11a710e0 call edi */
  call_ind((uint32_t)(EDI), 0x11a710e2u);
  /* 11a710e2 mov ebp, dword ptr [0x11a76130] */
  EBP = (r32((uint32_t)(0x11a76130)));
  /* 11a710e8 mov ebx, 0x2710 */
  EBX = (0x2710u);
  /* 11a710ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a710f0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a710f2 jge 0x11a71101 */
  if ((C.sf==C.of)) goto L_11a71101;
  /* 11a710f4 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a710f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a710fb push esi */
  push32((uint32_t)(ESI));
  /* 11a710fc call ebp */
  call_ind((uint32_t)(EBP), 0x11a710feu);
  /* 11a710fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71101:;
  /* 11a71101 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71103 push esi */
  push32((uint32_t)(ESI));
  /* 11a71104 call edi */
  call_ind((uint32_t)(EDI), 0x11a71106u);
  /* 11a71106 pop ecx */
  ECX = (pop32());
  /* 11a71107 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71109 pop ecx */
  ECX = (pop32());
  /* 11a7110a jge 0x11a71119 */
  if ((C.sf==C.of)) goto L_11a71119;
  /* 11a7110c push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a71111 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71113 push esi */
  push32((uint32_t)(ESI));
  /* 11a71114 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71116u);
  /* 11a71116 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71119:;
  /* 11a71119 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7111b push esi */
  push32((uint32_t)(ESI));
  /* 11a7111c call edi */
  call_ind((uint32_t)(EDI), 0x11a7111eu);
  /* 11a7111e pop ecx */
  ECX = (pop32());
  /* 11a7111f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71121 pop ecx */
  ECX = (pop32());
  /* 11a71122 jge 0x11a71131 */
  if ((C.sf==C.of)) goto L_11a71131;
  /* 11a71124 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a71129 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7112b push esi */
  push32((uint32_t)(ESI));
  /* 11a7112c call ebp */
  call_ind((uint32_t)(EBP), 0x11a7112eu);
  /* 11a7112e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71131:;
  /* 11a71131 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71133 push esi */
  push32((uint32_t)(ESI));
  /* 11a71134 call edi */
  call_ind((uint32_t)(EDI), 0x11a71136u);
  /* 11a71136 pop ecx */
  ECX = (pop32());
  /* 11a71137 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71139 pop ecx */
  ECX = (pop32());
  /* 11a7113a jge 0x11a71149 */
  if ((C.sf==C.of)) goto L_11a71149;
  /* 11a7113c push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a71141 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71143 push esi */
  push32((uint32_t)(ESI));
  /* 11a71144 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71146u);
  /* 11a71146 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71149:;
  /* 11a71149 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7114b push esi */
  push32((uint32_t)(ESI));
  /* 11a7114c call edi */
  call_ind((uint32_t)(EDI), 0x11a7114eu);
  /* 11a7114e pop ecx */
  ECX = (pop32());
  /* 11a7114f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71151 pop ecx */
  ECX = (pop32());
  /* 11a71152 jge 0x11a71161 */
  if ((C.sf==C.of)) goto L_11a71161;
  /* 11a71154 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a71159 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7115b push esi */
  push32((uint32_t)(ESI));
  /* 11a7115c call ebp */
  call_ind((uint32_t)(EBP), 0x11a7115eu);
  /* 11a7115e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71161:;
  /* 11a71161 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71163 push esi */
  push32((uint32_t)(ESI));
  /* 11a71164 call edi */
  call_ind((uint32_t)(EDI), 0x11a71166u);
  /* 11a71166 pop ecx */
  ECX = (pop32());
  /* 11a71167 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71169 pop ecx */
  ECX = (pop32());
  /* 11a7116a jge 0x11a71179 */
  if ((C.sf==C.of)) goto L_11a71179;
  /* 11a7116c push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11a71171 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71173 push esi */
  push32((uint32_t)(ESI));
  /* 11a71174 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71176u);
  /* 11a71176 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71179:;
  /* 11a71179 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a7117d push ebx */
  push32((uint32_t)(EBX));
  /* 11a7117e call dword ptr [0x11a76134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76134))), 0x11a71184u);
  /* 11a71184 cmp eax, dword ptr [esp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71188 pop ecx */
  ECX = (pop32());
  /* 11a71189 jge 0x11a711d0 */
  if ((C.sf==C.of)) goto L_11a711d0;
  /* 11a7118b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a7118d push edi */
  push32((uint32_t)(EDI));
  /* 11a7118e push ebx */
  push32((uint32_t)(EBX));
  /* 11a7118f push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a71193 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a71197 call dword ptr [0x11a76138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76138))), 0x11a7119du);
  /* 11a7119d mov esi, 0x11a77d48 */
  ESI = (0x11a77d48u);
  /* 11a711a2 push edi */
  push32((uint32_t)(EDI));
  /* 11a711a3 push esi */
  push32((uint32_t)(ESI));
  /* 11a711a4 push edi */
  push32((uint32_t)(EDI));
  /* 11a711a5 call dword ptr [0x11a7613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7613c))), 0x11a711abu);
  /* 11a711ab push edi */
  push32((uint32_t)(EDI));
  /* 11a711ac call dword ptr [0x11a7614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7614c))), 0x11a711b2u);
  /* 11a711b2 push dword ptr [esp + 0x44] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x44))));
  /* 11a711b6 push dword ptr [esp + 0x44] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x44))));
  /* 11a711ba push ebx */
  push32((uint32_t)(EBX));
  /* 11a711bb call 0x11a7108a */
  push32(0x11a711c0u); f_11a7108a();
  /* 11a711c0 push edi */
  push32((uint32_t)(EDI));
  /* 11a711c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a711c2 call dword ptr [0x11a76148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76148))), 0x11a711c8u);
  /* 11a711c8 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a711cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a711cd pop eax */
  EAX = (pop32());
  /* 11a711ce jmp 0x11a711d2 */
  goto L_11a711d2;
L_11a711d0:;
  /* 11a711d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a711d2:;
  /* 11a711d2 pop edi */
  EDI = (pop32());
  /* 11a711d3 pop esi */
  ESI = (pop32());
  /* 11a711d4 pop ebp */
  EBP = (pop32());
  /* 11a711d5 pop ebx */
  EBX = (pop32());
  /* 11a711d6 ret  */
  ESPCHK(0x11a710c8u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11a711d7 (2021 bytes, 568 insns) */
void f_11a711d7(void) {
  FTRACE(0x11a711d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a711d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a711d8 push ebp */
  push32((uint32_t)(EBP));
  /* 11a711d9 push esi */
  push32((uint32_t)(ESI));
  /* 11a711da push edi */
  push32((uint32_t)(EDI));
  /* 11a711db mov edi, dword ptr [0x11a7610c] */
  EDI = (r32((uint32_t)(0x11a7610c)));
  /* 11a711e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a711e3 push 0x11a77b68 */
  push32((uint32_t)(0x11a77b68u));
  /* 11a711e8 call edi */
  call_ind((uint32_t)(EDI), 0x11a711eau);
  /* 11a711ea push 4 */
  push32((uint32_t)(0x4u));
  /* 11a711ec push 0x11a77e70 */
  push32((uint32_t)(0x11a77e70u));
  /* 11a711f1 call edi */
  call_ind((uint32_t)(EDI), 0x11a711f3u);
  /* 11a711f3 mov esi, dword ptr [0x11a76110] */
  ESI = (r32((uint32_t)(0x11a76110)));
  /* 11a711f9 mov ebx, 0x11a774dc */
  EBX = (0x11a774dcu);
  /* 11a711fe push ebx */
  push32((uint32_t)(EBX));
  /* 11a711ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71201 call esi */
  call_ind((uint32_t)(ESI), 0x11a71203u);
  /* 11a71203 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71204 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71206 call esi */
  call_ind((uint32_t)(ESI), 0x11a71208u);
  /* 11a71208 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71209 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7120b call esi */
  call_ind((uint32_t)(ESI), 0x11a7120du);
  /* 11a7120d push ebx */
  push32((uint32_t)(EBX));
  /* 11a7120e push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71210 call esi */
  call_ind((uint32_t)(ESI), 0x11a71212u);
  /* 11a71212 mov esi, dword ptr [0x11a76114] */
  ESI = (r32((uint32_t)(0x11a76114)));
  /* 11a71218 push 0x11a774d4 */
  push32((uint32_t)(0x11a774d4u));
  /* 11a7121d push 0x11a77f38 */
  push32((uint32_t)(0x11a77f38u));
  /* 11a71222 call esi */
  call_ind((uint32_t)(ESI), 0x11a71224u);
  /* 11a71224 push 0x11a774d0 */
  push32((uint32_t)(0x11a774d0u));
  /* 11a71229 push 0x11a77cf8 */
  push32((uint32_t)(0x11a77cf8u));
  /* 11a7122e call esi */
  call_ind((uint32_t)(ESI), 0x11a71230u);
  /* 11a71230 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71233 push 0x11a774cc */
  push32((uint32_t)(0x11a774ccu));
  /* 11a71238 push 0x11a77d00 */
  push32((uint32_t)(0x11a77d00u));
  /* 11a7123d call esi */
  call_ind((uint32_t)(ESI), 0x11a7123fu);
  /* 11a7123f push 0x11a774c8 */
  push32((uint32_t)(0x11a774c8u));
  /* 11a71244 push 0x11a77d10 */
  push32((uint32_t)(0x11a77d10u));
  /* 11a71249 call esi */
  call_ind((uint32_t)(ESI), 0x11a7124bu);
  /* 11a7124b push 0x11a774c4 */
  push32((uint32_t)(0x11a774c4u));
  /* 11a71250 push 0x11a77d18 */
  push32((uint32_t)(0x11a77d18u));
  /* 11a71255 call esi */
  call_ind((uint32_t)(ESI), 0x11a71257u);
  /* 11a71257 push 0x11a774c0 */
  push32((uint32_t)(0x11a774c0u));
  /* 11a7125c push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a71261 call esi */
  call_ind((uint32_t)(ESI), 0x11a71263u);
  /* 11a71263 push 0x11a774b8 */
  push32((uint32_t)(0x11a774b8u));
  /* 11a71268 push 0x11a77af8 */
  push32((uint32_t)(0x11a77af8u));
  /* 11a7126d call esi */
  call_ind((uint32_t)(ESI), 0x11a7126fu);
  /* 11a7126f push 0x11a774b0 */
  push32((uint32_t)(0x11a774b0u));
  /* 11a71274 push 0x11a77af0 */
  push32((uint32_t)(0x11a77af0u));
  /* 11a71279 call esi */
  call_ind((uint32_t)(ESI), 0x11a7127bu);
  /* 11a7127b push 0x11a774a8 */
  push32((uint32_t)(0x11a774a8u));
  /* 11a71280 push 0x11a77e30 */
  push32((uint32_t)(0x11a77e30u));
  /* 11a71285 call esi */
  call_ind((uint32_t)(ESI), 0x11a71287u);
  /* 11a71287 push 0x11a774a0 */
  push32((uint32_t)(0x11a774a0u));
  /* 11a7128c push 0x11a77e40 */
  push32((uint32_t)(0x11a77e40u));
  /* 11a71291 call esi */
  call_ind((uint32_t)(ESI), 0x11a71293u);
  /* 11a71293 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71296 push 0x11a77498 */
  push32((uint32_t)(0x11a77498u));
  /* 11a7129b push 0x11a77e38 */
  push32((uint32_t)(0x11a77e38u));
  /* 11a712a0 call esi */
  call_ind((uint32_t)(ESI), 0x11a712a2u);
  /* 11a712a2 push 0x11a77490 */
  push32((uint32_t)(0x11a77490u));
  /* 11a712a7 push 0x11a77e50 */
  push32((uint32_t)(0x11a77e50u));
  /* 11a712ac call esi */
  call_ind((uint32_t)(ESI), 0x11a712aeu);
  /* 11a712ae push 0x11a77488 */
  push32((uint32_t)(0x11a77488u));
  /* 11a712b3 push 0x11a77e48 */
  push32((uint32_t)(0x11a77e48u));
  /* 11a712b8 call esi */
  call_ind((uint32_t)(ESI), 0x11a712bau);
  /* 11a712ba push 0x11a77480 */
  push32((uint32_t)(0x11a77480u));
  /* 11a712bf push 0x11a77e60 */
  push32((uint32_t)(0x11a77e60u));
  /* 11a712c4 call esi */
  call_ind((uint32_t)(ESI), 0x11a712c6u);
  /* 11a712c6 push 0x11a77478 */
  push32((uint32_t)(0x11a77478u));
  /* 11a712cb push 0x11a77e58 */
  push32((uint32_t)(0x11a77e58u));
  /* 11a712d0 call esi */
  call_ind((uint32_t)(ESI), 0x11a712d2u);
  /* 11a712d2 push 0x11a77470 */
  push32((uint32_t)(0x11a77470u));
  /* 11a712d7 push 0x11a77bf8 */
  push32((uint32_t)(0x11a77bf8u));
  /* 11a712dc call esi */
  call_ind((uint32_t)(ESI), 0x11a712deu);
  /* 11a712de push 0x11a77468 */
  push32((uint32_t)(0x11a77468u));
  /* 11a712e3 push 0x11a77c88 */
  push32((uint32_t)(0x11a77c88u));
  /* 11a712e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a712eau);
  /* 11a712ea push 0x11a77460 */
  push32((uint32_t)(0x11a77460u));
  /* 11a712ef push 0x11a77cd0 */
  push32((uint32_t)(0x11a77cd0u));
  /* 11a712f4 call esi */
  call_ind((uint32_t)(ESI), 0x11a712f6u);
  /* 11a712f6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a712f9 push 0x11a77458 */
  push32((uint32_t)(0x11a77458u));
  /* 11a712fe push 0x11a77d20 */
  push32((uint32_t)(0x11a77d20u));
  /* 11a71303 call esi */
  call_ind((uint32_t)(ESI), 0x11a71305u);
  /* 11a71305 push 0x11a77450 */
  push32((uint32_t)(0x11a77450u));
  /* 11a7130a push 0x11a77f20 */
  push32((uint32_t)(0x11a77f20u));
  /* 11a7130f call esi */
  call_ind((uint32_t)(ESI), 0x11a71311u);
  /* 11a71311 push 0x11a77448 */
  push32((uint32_t)(0x11a77448u));
  /* 11a71316 push 0x11a77f18 */
  push32((uint32_t)(0x11a77f18u));
  /* 11a7131b call esi */
  call_ind((uint32_t)(ESI), 0x11a7131du);
  /* 11a7131d push 0x11a77440 */
  push32((uint32_t)(0x11a77440u));
  /* 11a71322 push 0x11a77c00 */
  push32((uint32_t)(0x11a77c00u));
  /* 11a71327 call esi */
  call_ind((uint32_t)(ESI), 0x11a71329u);
  /* 11a71329 push 0x11a77438 */
  push32((uint32_t)(0x11a77438u));
  /* 11a7132e push 0x11a77c98 */
  push32((uint32_t)(0x11a77c98u));
  /* 11a71333 call esi */
  call_ind((uint32_t)(ESI), 0x11a71335u);
  /* 11a71335 push 0x11a77430 */
  push32((uint32_t)(0x11a77430u));
  /* 11a7133a push 0x11a77cd8 */
  push32((uint32_t)(0x11a77cd8u));
  /* 11a7133f call esi */
  call_ind((uint32_t)(ESI), 0x11a71341u);
  /* 11a71341 push 0x11a77428 */
  push32((uint32_t)(0x11a77428u));
  /* 11a71346 push 0x11a77d28 */
  push32((uint32_t)(0x11a77d28u));
  /* 11a7134b call esi */
  call_ind((uint32_t)(ESI), 0x11a7134du);
  /* 11a7134d push 0x11a77420 */
  push32((uint32_t)(0x11a77420u));
  /* 11a71352 push 0x11a77c08 */
  push32((uint32_t)(0x11a77c08u));
  /* 11a71357 call esi */
  call_ind((uint32_t)(ESI), 0x11a71359u);
  /* 11a71359 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7135c push 0x11a77418 */
  push32((uint32_t)(0x11a77418u));
  /* 11a71361 push 0x11a77cb0 */
  push32((uint32_t)(0x11a77cb0u));
  /* 11a71366 call esi */
  call_ind((uint32_t)(ESI), 0x11a71368u);
  /* 11a71368 push 0x11a77410 */
  push32((uint32_t)(0x11a77410u));
  /* 11a7136d push 0x11a77ce8 */
  push32((uint32_t)(0x11a77ce8u));
  /* 11a71372 call esi */
  call_ind((uint32_t)(ESI), 0x11a71374u);
  /* 11a71374 mov ebp, 0x11a77408 */
  EBP = (0x11a77408u);
  /* 11a71379 mov ebx, 0x11a77d30 */
  EBX = (0x11a77d30u);
  /* 11a7137e push ebp */
  push32((uint32_t)(EBP));
  /* 11a7137f push ebx */
  push32((uint32_t)(EBX));
  /* 11a71380 call esi */
  call_ind((uint32_t)(ESI), 0x11a71382u);
  /* 11a71382 push 0x11a77400 */
  push32((uint32_t)(0x11a77400u));
  /* 11a71387 push 0x11a77f30 */
  push32((uint32_t)(0x11a77f30u));
  /* 11a7138c call esi */
  call_ind((uint32_t)(ESI), 0x11a7138eu);
  /* 11a7138e push 0x11a773f8 */
  push32((uint32_t)(0x11a773f8u));
  /* 11a71393 push 0x11a77f28 */
  push32((uint32_t)(0x11a77f28u));
  /* 11a71398 call esi */
  call_ind((uint32_t)(ESI), 0x11a7139au);
  /* 11a7139a push 0x11a77418 */
  push32((uint32_t)(0x11a77418u));
  /* 11a7139f push 0x11a77cb0 */
  push32((uint32_t)(0x11a77cb0u));
  /* 11a713a4 call esi */
  call_ind((uint32_t)(ESI), 0x11a713a6u);
  /* 11a713a6 push ebp */
  push32((uint32_t)(EBP));
  /* 11a713a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a713a8 call esi */
  call_ind((uint32_t)(ESI), 0x11a713aau);
  /* 11a713aa push 0x11a773f0 */
  push32((uint32_t)(0x11a773f0u));
  /* 11a713af push 0x11a77cb8 */
  push32((uint32_t)(0x11a77cb8u));
  /* 11a713b4 call esi */
  call_ind((uint32_t)(ESI), 0x11a713b6u);
  /* 11a713b6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a713b9 push 0x11a773e8 */
  push32((uint32_t)(0x11a773e8u));
  /* 11a713be push 0x11a77d38 */
  push32((uint32_t)(0x11a77d38u));
  /* 11a713c3 call esi */
  call_ind((uint32_t)(ESI), 0x11a713c5u);
  /* 11a713c5 push 0x11a773e0 */
  push32((uint32_t)(0x11a773e0u));
  /* 11a713ca push 0x11a77cc0 */
  push32((uint32_t)(0x11a77cc0u));
  /* 11a713cf call esi */
  call_ind((uint32_t)(ESI), 0x11a713d1u);
  /* 11a713d1 push 0x11a773d8 */
  push32((uint32_t)(0x11a773d8u));
  /* 11a713d6 push 0x11a77d40 */
  push32((uint32_t)(0x11a77d40u));
  /* 11a713db call esi */
  call_ind((uint32_t)(ESI), 0x11a713ddu);
  /* 11a713dd push 0x11a773d0 */
  push32((uint32_t)(0x11a773d0u));
  /* 11a713e2 push 0x11a77db0 */
  push32((uint32_t)(0x11a77db0u));
  /* 11a713e7 call esi */
  call_ind((uint32_t)(ESI), 0x11a713e9u);
  /* 11a713e9 push 0x11a773c8 */
  push32((uint32_t)(0x11a773c8u));
  /* 11a713ee push 0x11a77c68 */
  push32((uint32_t)(0x11a77c68u));
  /* 11a713f3 call esi */
  call_ind((uint32_t)(ESI), 0x11a713f5u);
  /* 11a713f5 push 0x11a773c4 */
  push32((uint32_t)(0x11a773c4u));
  /* 11a713fa push 0x11a77ed8 */
  push32((uint32_t)(0x11a77ed8u));
  /* 11a713ff call esi */
  call_ind((uint32_t)(ESI), 0x11a71401u);
  /* 11a71401 push 0x11a773c0 */
  push32((uint32_t)(0x11a773c0u));
  /* 11a71406 push 0x11a77ee0 */
  push32((uint32_t)(0x11a77ee0u));
  /* 11a7140b call esi */
  call_ind((uint32_t)(ESI), 0x11a7140du);
  /* 11a7140d push 0x11a773bc */
  push32((uint32_t)(0x11a773bcu));
  /* 11a71412 push 0x11a77ee8 */
  push32((uint32_t)(0x11a77ee8u));
  /* 11a71417 call esi */
  call_ind((uint32_t)(ESI), 0x11a71419u);
  /* 11a71419 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7141c push 0x11a773b4 */
  push32((uint32_t)(0x11a773b4u));
  /* 11a71421 push 0x11a77db8 */
  push32((uint32_t)(0x11a77db8u));
  /* 11a71426 call esi */
  call_ind((uint32_t)(ESI), 0x11a71428u);
  /* 11a71428 push 0x11a773ac */
  push32((uint32_t)(0x11a773acu));
  /* 11a7142d push 0x11a77c60 */
  push32((uint32_t)(0x11a77c60u));
  /* 11a71432 call esi */
  call_ind((uint32_t)(ESI), 0x11a71434u);
  /* 11a71434 push 0x11a773a8 */
  push32((uint32_t)(0x11a773a8u));
  /* 11a71439 push 0x11a77ef8 */
  push32((uint32_t)(0x11a77ef8u));
  /* 11a7143e call esi */
  call_ind((uint32_t)(ESI), 0x11a71440u);
  /* 11a71440 push 0x11a773a4 */
  push32((uint32_t)(0x11a773a4u));
  /* 11a71445 push 0x11a77f00 */
  push32((uint32_t)(0x11a77f00u));
  /* 11a7144a call esi */
  call_ind((uint32_t)(ESI), 0x11a7144cu);
  /* 11a7144c push 0x11a773a0 */
  push32((uint32_t)(0x11a773a0u));
  /* 11a71451 push 0x11a77f08 */
  push32((uint32_t)(0x11a77f08u));
  /* 11a71456 call esi */
  call_ind((uint32_t)(ESI), 0x11a71458u);
  /* 11a71458 mov ebp, dword ptr [0x11a76118] */
  EBP = (r32((uint32_t)(0x11a76118)));
  /* 11a7145e push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71463 push 0x11a77cc8 */
  push32((uint32_t)(0x11a77cc8u));
  /* 11a71468 call ebp */
  call_ind((uint32_t)(EBP), 0x11a7146au);
  /* 11a7146a push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a7146f push 0x11a77de0 */
  push32((uint32_t)(0x11a77de0u));
  /* 11a71474 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71476u);
  /* 11a71476 push 0x11a77390 */
  push32((uint32_t)(0x11a77390u));
  /* 11a7147b push 0x11a77da8 */
  push32((uint32_t)(0x11a77da8u));
  /* 11a71480 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71482u);
  /* 11a71482 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71485 push 0x11a77388 */
  push32((uint32_t)(0x11a77388u));
  /* 11a7148a push 0x11a77c78 */
  push32((uint32_t)(0x11a77c78u));
  /* 11a7148f call ebp */
  call_ind((uint32_t)(EBP), 0x11a71491u);
  /* 11a71491 push 0x11a77380 */
  push32((uint32_t)(0x11a77380u));
  /* 11a71496 push 0x11a77c90 */
  push32((uint32_t)(0x11a77c90u));
  /* 11a7149b call ebp */
  call_ind((uint32_t)(EBP), 0x11a7149du);
  /* 11a7149d push 0x11a77378 */
  push32((uint32_t)(0x11a77378u));
  /* 11a714a2 push 0x11a77e80 */
  push32((uint32_t)(0x11a77e80u));
  /* 11a714a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a714a9u);
  /* 11a714a9 push 0x11a77370 */
  push32((uint32_t)(0x11a77370u));
  /* 11a714ae push 0x11a77e90 */
  push32((uint32_t)(0x11a77e90u));
  /* 11a714b3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a714b5u);
  /* 11a714b5 push 0x11a77368 */
  push32((uint32_t)(0x11a77368u));
  /* 11a714ba push 0x11a77e88 */
  push32((uint32_t)(0x11a77e88u));
  /* 11a714bf call ebp */
  call_ind((uint32_t)(EBP), 0x11a714c1u);
  /* 11a714c1 push 0x11a77360 */
  push32((uint32_t)(0x11a77360u));
  /* 11a714c6 push 0x11a77b78 */
  push32((uint32_t)(0x11a77b78u));
  /* 11a714cb call ebp */
  call_ind((uint32_t)(EBP), 0x11a714cdu);
  /* 11a714cd push 0x11a77358 */
  push32((uint32_t)(0x11a77358u));
  /* 11a714d2 push 0x11a77b70 */
  push32((uint32_t)(0x11a77b70u));
  /* 11a714d7 call ebp */
  call_ind((uint32_t)(EBP), 0x11a714d9u);
  /* 11a714d9 push 0x11a77350 */
  push32((uint32_t)(0x11a77350u));
  /* 11a714de push 0x11a77b88 */
  push32((uint32_t)(0x11a77b88u));
  /* 11a714e3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a714e5u);
  /* 11a714e5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a714e8 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a714ed push 0x11a77b80 */
  push32((uint32_t)(0x11a77b80u));
  /* 11a714f2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a714f4u);
  /* 11a714f4 push 0x11a77340 */
  push32((uint32_t)(0x11a77340u));
  /* 11a714f9 push 0x11a77b98 */
  push32((uint32_t)(0x11a77b98u));
  /* 11a714fe call ebp */
  call_ind((uint32_t)(EBP), 0x11a71500u);
  /* 11a71500 push 0x11a77338 */
  push32((uint32_t)(0x11a77338u));
  /* 11a71505 push 0x11a77b90 */
  push32((uint32_t)(0x11a77b90u));
  /* 11a7150a call ebp */
  call_ind((uint32_t)(EBP), 0x11a7150cu);
  /* 11a7150c push 0x11a77330 */
  push32((uint32_t)(0x11a77330u));
  /* 11a71511 push 0x11a77ba0 */
  push32((uint32_t)(0x11a77ba0u));
  /* 11a71516 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71518u);
  /* 11a71518 mov esi, dword ptr [0x11a7611c] */
  ESI = (r32((uint32_t)(0x11a7611c)));
  /* 11a7151e push 0x11a77d68 */
  push32((uint32_t)(0x11a77d68u));
  /* 11a71523 call esi */
  call_ind((uint32_t)(ESI), 0x11a71525u);
  /* 11a71525 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a71527 pop ebx */
  EBX = (pop32());
  /* 11a71528 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71529 push 0x11a77d68 */
  push32((uint32_t)(0x11a77d68u));
  /* 11a7152e call edi */
  call_ind((uint32_t)(EDI), 0x11a71530u);
  /* 11a71530 push 0x11a77f60 */
  push32((uint32_t)(0x11a77f60u));
  /* 11a71535 call esi */
  call_ind((uint32_t)(ESI), 0x11a71537u);
  /* 11a71537 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71538 push 0x11a77f60 */
  push32((uint32_t)(0x11a77f60u));
  /* 11a7153d call edi */
  call_ind((uint32_t)(EDI), 0x11a7153fu);
  /* 11a7153f push 0x11a77b08 */
  push32((uint32_t)(0x11a77b08u));
  /* 11a71544 call esi */
  call_ind((uint32_t)(ESI), 0x11a71546u);
  /* 11a71546 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71547 push 0x11a77b08 */
  push32((uint32_t)(0x11a77b08u));
  /* 11a7154c call edi */
  call_ind((uint32_t)(EDI), 0x11a7154eu);
  /* 11a7154e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71551 push 0x11a77b50 */
  push32((uint32_t)(0x11a77b50u));
  /* 11a71556 call esi */
  call_ind((uint32_t)(ESI), 0x11a71558u);
  /* 11a71558 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71559 push 0x11a77b50 */
  push32((uint32_t)(0x11a77b50u));
  /* 11a7155e call edi */
  call_ind((uint32_t)(EDI), 0x11a71560u);
  /* 11a71560 push 0x11a77bc0 */
  push32((uint32_t)(0x11a77bc0u));
  /* 11a71565 call esi */
  call_ind((uint32_t)(ESI), 0x11a71567u);
  /* 11a71567 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71568 push 0x11a77bc0 */
  push32((uint32_t)(0x11a77bc0u));
  /* 11a7156d call edi */
  call_ind((uint32_t)(EDI), 0x11a7156fu);
  /* 11a7156f push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a71574 call esi */
  call_ind((uint32_t)(ESI), 0x11a71576u);
  /* 11a71576 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71577 push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a7157c call edi */
  call_ind((uint32_t)(EDI), 0x11a7157eu);
  /* 11a7157e push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a71583 call esi */
  call_ind((uint32_t)(ESI), 0x11a71585u);
  /* 11a71585 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71586 push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a7158b call edi */
  call_ind((uint32_t)(EDI), 0x11a7158du);
  /* 11a7158d push 0x11a77f68 */
  push32((uint32_t)(0x11a77f68u));
  /* 11a71592 call esi */
  call_ind((uint32_t)(ESI), 0x11a71594u);
  /* 11a71594 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71595 push 0x11a77f68 */
  push32((uint32_t)(0x11a77f68u));
  /* 11a7159a call edi */
  call_ind((uint32_t)(EDI), 0x11a7159cu);
  /* 11a7159c push 0x11a77b18 */
  push32((uint32_t)(0x11a77b18u));
  /* 11a715a1 call esi */
  call_ind((uint32_t)(ESI), 0x11a715a3u);
  /* 11a715a3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a715a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715a7 push 0x11a77b18 */
  push32((uint32_t)(0x11a77b18u));
  /* 11a715ac call edi */
  call_ind((uint32_t)(EDI), 0x11a715aeu);
  /* 11a715ae push 0x11a77b58 */
  push32((uint32_t)(0x11a77b58u));
  /* 11a715b3 call esi */
  call_ind((uint32_t)(ESI), 0x11a715b5u);
  /* 11a715b5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715b6 push 0x11a77b58 */
  push32((uint32_t)(0x11a77b58u));
  /* 11a715bb call edi */
  call_ind((uint32_t)(EDI), 0x11a715bdu);
  /* 11a715bd push 0x11a77bc8 */
  push32((uint32_t)(0x11a77bc8u));
  /* 11a715c2 call esi */
  call_ind((uint32_t)(ESI), 0x11a715c4u);
  /* 11a715c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715c5 push 0x11a77bc8 */
  push32((uint32_t)(0x11a77bc8u));
  /* 11a715ca call edi */
  call_ind((uint32_t)(EDI), 0x11a715ccu);
  /* 11a715cc push 0x11a77d70 */
  push32((uint32_t)(0x11a77d70u));
  /* 11a715d1 call esi */
  call_ind((uint32_t)(ESI), 0x11a715d3u);
  /* 11a715d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715d4 push 0x11a77d70 */
  push32((uint32_t)(0x11a77d70u));
  /* 11a715d9 call edi */
  call_ind((uint32_t)(EDI), 0x11a715dbu);
  /* 11a715db push 0x11a77f70 */
  push32((uint32_t)(0x11a77f70u));
  /* 11a715e0 call esi */
  call_ind((uint32_t)(ESI), 0x11a715e2u);
  /* 11a715e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715e3 push 0x11a77f70 */
  push32((uint32_t)(0x11a77f70u));
  /* 11a715e8 call edi */
  call_ind((uint32_t)(EDI), 0x11a715eau);
  /* 11a715ea push 0x11a77b28 */
  push32((uint32_t)(0x11a77b28u));
  /* 11a715ef call esi */
  call_ind((uint32_t)(ESI), 0x11a715f1u);
  /* 11a715f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a715f2 push 0x11a77b28 */
  push32((uint32_t)(0x11a77b28u));
  /* 11a715f7 call edi */
  call_ind((uint32_t)(EDI), 0x11a715f9u);
  /* 11a715f9 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a715fc push 0x11a77b60 */
  push32((uint32_t)(0x11a77b60u));
  /* 11a71601 call esi */
  call_ind((uint32_t)(ESI), 0x11a71603u);
  /* 11a71603 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71604 push 0x11a77b60 */
  push32((uint32_t)(0x11a77b60u));
  /* 11a71609 call edi */
  call_ind((uint32_t)(EDI), 0x11a7160bu);
  /* 11a7160b push 0x11a77bd0 */
  push32((uint32_t)(0x11a77bd0u));
  /* 11a71610 call esi */
  call_ind((uint32_t)(ESI), 0x11a71612u);
  /* 11a71612 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71613 push 0x11a77bd0 */
  push32((uint32_t)(0x11a77bd0u));
  /* 11a71618 call edi */
  call_ind((uint32_t)(EDI), 0x11a7161au);
  /* 11a7161a push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a7161f call esi */
  call_ind((uint32_t)(ESI), 0x11a71621u);
  /* 11a71621 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71622 push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a71627 call edi */
  call_ind((uint32_t)(EDI), 0x11a71629u);
  /* 11a71629 push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a7162e call esi */
  call_ind((uint32_t)(ESI), 0x11a71630u);
  /* 11a71630 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71631 push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a71636 call edi */
  call_ind((uint32_t)(EDI), 0x11a71638u);
  /* 11a71638 push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a7163d call esi */
  call_ind((uint32_t)(ESI), 0x11a7163fu);
  /* 11a7163f push ebx */
  push32((uint32_t)(EBX));
  /* 11a71640 push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a71645 call edi */
  call_ind((uint32_t)(EDI), 0x11a71647u);
  /* 11a71647 push 0x11a77bd8 */
  push32((uint32_t)(0x11a77bd8u));
  /* 11a7164c call esi */
  call_ind((uint32_t)(ESI), 0x11a7164eu);
  /* 11a7164e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71651 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71652 push 0x11a77bd8 */
  push32((uint32_t)(0x11a77bd8u));
  /* 11a71657 call edi */
  call_ind((uint32_t)(EDI), 0x11a71659u);
  /* 11a71659 push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a7165e call esi */
  call_ind((uint32_t)(ESI), 0x11a71660u);
  /* 11a71660 push ebx */
  push32((uint32_t)(EBX));
  /* 11a71661 push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a71666 call edi */
  call_ind((uint32_t)(EDI), 0x11a71668u);
  /* 11a71668 push 0x11a77be8 */
  push32((uint32_t)(0x11a77be8u));
  /* 11a7166d call esi */
  call_ind((uint32_t)(ESI), 0x11a7166fu);
  /* 11a7166f push ebx */
  push32((uint32_t)(EBX));
  /* 11a71670 push 0x11a77be8 */
  push32((uint32_t)(0x11a77be8u));
  /* 11a71675 call edi */
  call_ind((uint32_t)(EDI), 0x11a71677u);
  /* 11a71677 push 0x11a77328 */
  push32((uint32_t)(0x11a77328u));
  /* 11a7167c push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a71681 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71683u);
  /* 11a71683 mov ebx, dword ptr [0x11a76120] */
  EBX = (r32((uint32_t)(0x11a76120)));
  /* 11a71689 push 0x11a7731c */
  push32((uint32_t)(0x11a7731cu));
  /* 11a7168e push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a71693 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71695u);
  /* 11a71695 push 0x11a77314 */
  push32((uint32_t)(0x11a77314u));
  /* 11a7169a push 0x11a77c10 */
  push32((uint32_t)(0x11a77c10u));
  /* 11a7169f call ebp */
  call_ind((uint32_t)(EBP), 0x11a716a1u);
  /* 11a716a1 push 0x11a77300 */
  push32((uint32_t)(0x11a77300u));
  /* 11a716a6 push 0x11a77f58 */
  push32((uint32_t)(0x11a77f58u));
  /* 11a716ab call ebx */
  call_ind((uint32_t)(EBX), 0x11a716adu);
  /* 11a716ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a716b0 push 0x11a772ec */
  push32((uint32_t)(0x11a772ecu));
  /* 11a716b5 push 0x11a77ce0 */
  push32((uint32_t)(0x11a77ce0u));
  /* 11a716ba call ebx */
  call_ind((uint32_t)(EBX), 0x11a716bcu);
  /* 11a716bc push 0x11a772e4 */
  push32((uint32_t)(0x11a772e4u));
  /* 11a716c1 push 0x11a77dd0 */
  push32((uint32_t)(0x11a77dd0u));
  /* 11a716c6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a716c8u);
  /* 11a716c8 push 0x11a772d0 */
  push32((uint32_t)(0x11a772d0u));
  /* 11a716cd push 0x11a77f40 */
  push32((uint32_t)(0x11a77f40u));
  /* 11a716d2 call ebx */
  call_ind((uint32_t)(EBX), 0x11a716d4u);
  /* 11a716d4 push 0x11a772b8 */
  push32((uint32_t)(0x11a772b8u));
  /* 11a716d9 push 0x11a77e98 */
  push32((uint32_t)(0x11a77e98u));
  /* 11a716de call ebx */
  call_ind((uint32_t)(EBX), 0x11a716e0u);
  /* 11a716e0 push 0x11a7729c */
  push32((uint32_t)(0x11a7729cu));
  /* 11a716e5 push 0x11a77b00 */
  push32((uint32_t)(0x11a77b00u));
  /* 11a716ea call ebx */
  call_ind((uint32_t)(EBX), 0x11a716ecu);
  /* 11a716ec push 0x11a77294 */
  push32((uint32_t)(0x11a77294u));
  /* 11a716f1 push 0x11a77e08 */
  push32((uint32_t)(0x11a77e08u));
  /* 11a716f6 call ebp */
  call_ind((uint32_t)(EBP), 0x11a716f8u);
  /* 11a716f8 push 0x11a77284 */
  push32((uint32_t)(0x11a77284u));
  /* 11a716fd push 0x11a77ed0 */
  push32((uint32_t)(0x11a77ed0u));
  /* 11a71702 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71704u);
  /* 11a71704 push 0x11a77278 */
  push32((uint32_t)(0x11a77278u));
  /* 11a71709 push 0x11a77bb0 */
  push32((uint32_t)(0x11a77bb0u));
  /* 11a7170e call ebx */
  call_ind((uint32_t)(EBX), 0x11a71710u);
  /* 11a71710 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71713 push 0x11a77270 */
  push32((uint32_t)(0x11a77270u));
  /* 11a71718 push 0x11a77d80 */
  push32((uint32_t)(0x11a77d80u));
  /* 11a7171d call ebp */
  call_ind((uint32_t)(EBP), 0x11a7171fu);
  /* 11a7171f push 0x11a77264 */
  push32((uint32_t)(0x11a77264u));
  /* 11a71724 push 0x11a77f50 */
  push32((uint32_t)(0x11a77f50u));
  /* 11a71729 call ebx */
  call_ind((uint32_t)(EBX), 0x11a7172bu);
  /* 11a7172b push 0x11a77258 */
  push32((uint32_t)(0x11a77258u));
  /* 11a71730 push 0x11a77de8 */
  push32((uint32_t)(0x11a77de8u));
  /* 11a71735 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71737u);
  /* 11a71737 push 0x11a77250 */
  push32((uint32_t)(0x11a77250u));
  /* 11a7173c push 0x11a77b38 */
  push32((uint32_t)(0x11a77b38u));
  /* 11a71741 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71743u);
  /* 11a71743 push 0x11a7723c */
  push32((uint32_t)(0x11a7723cu));
  /* 11a71748 push 0x11a77e78 */
  push32((uint32_t)(0x11a77e78u));
  /* 11a7174d call ebx */
  call_ind((uint32_t)(EBX), 0x11a7174fu);
  /* 11a7174f push 0x11a77234 */
  push32((uint32_t)(0x11a77234u));
  /* 11a71754 push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a71759 call ebp */
  call_ind((uint32_t)(EBP), 0x11a7175bu);
  /* 11a7175b push 0x11a77228 */
  push32((uint32_t)(0x11a77228u));
  /* 11a71760 push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a71765 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71767u);
  /* 11a71767 push 0x11a77220 */
  push32((uint32_t)(0x11a77220u));
  /* 11a7176c push 0x11a77c18 */
  push32((uint32_t)(0x11a77c18u));
  /* 11a71771 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71773u);
  /* 11a71773 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71776 push 0x11a7720c */
  push32((uint32_t)(0x11a7720cu));
  /* 11a7177b push 0x11a77d60 */
  push32((uint32_t)(0x11a77d60u));
  /* 11a71780 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71782u);
  /* 11a71782 push 0x11a771f8 */
  push32((uint32_t)(0x11a771f8u));
  /* 11a71787 push 0x11a77eb0 */
  push32((uint32_t)(0x11a77eb0u));
  /* 11a7178c call ebx */
  call_ind((uint32_t)(EBX), 0x11a7178eu);
  /* 11a7178e push 0x11a771f0 */
  push32((uint32_t)(0x11a771f0u));
  /* 11a71793 push 0x11a77dd8 */
  push32((uint32_t)(0x11a77dd8u));
  /* 11a71798 call ebp */
  call_ind((uint32_t)(EBP), 0x11a7179au);
  /* 11a7179a push 0x11a771dc */
  push32((uint32_t)(0x11a771dcu));
  /* 11a7179f push 0x11a77c28 */
  push32((uint32_t)(0x11a77c28u));
  /* 11a717a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11a717a6u);
  /* 11a717a6 push 0x11a771c4 */
  push32((uint32_t)(0x11a771c4u));
  /* 11a717ab push 0x11a77b48 */
  push32((uint32_t)(0x11a77b48u));
  /* 11a717b0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a717b2u);
  /* 11a717b2 push 0x11a771a8 */
  push32((uint32_t)(0x11a771a8u));
  /* 11a717b7 push 0x11a77cf0 */
  push32((uint32_t)(0x11a77cf0u));
  /* 11a717bc call ebx */
  call_ind((uint32_t)(EBX), 0x11a717beu);
  /* 11a717be push 0x11a771a0 */
  push32((uint32_t)(0x11a771a0u));
  /* 11a717c3 push 0x11a77e10 */
  push32((uint32_t)(0x11a77e10u));
  /* 11a717c8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a717cau);
  /* 11a717ca push 0x11a77194 */
  push32((uint32_t)(0x11a77194u));
  /* 11a717cf push 0x11a77f10 */
  push32((uint32_t)(0x11a77f10u));
  /* 11a717d4 call ebx */
  call_ind((uint32_t)(EBX), 0x11a717d6u);
  /* 11a717d6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a717d9 push 0x11a77184 */
  push32((uint32_t)(0x11a77184u));
  /* 11a717de push 0x11a77e00 */
  push32((uint32_t)(0x11a77e00u));
  /* 11a717e3 call ebx */
  call_ind((uint32_t)(EBX), 0x11a717e5u);
  /* 11a717e5 push 0x11a77174 */
  push32((uint32_t)(0x11a77174u));
  /* 11a717ea push 0x11a77ae0 */
  push32((uint32_t)(0x11a77ae0u));
  /* 11a717ef call ebx */
  call_ind((uint32_t)(EBX), 0x11a717f1u);
  /* 11a717f1 push 0x11a7716c */
  push32((uint32_t)(0x11a7716cu));
  /* 11a717f6 push 0x11a77d90 */
  push32((uint32_t)(0x11a77d90u));
  /* 11a717fb call ebp */
  call_ind((uint32_t)(EBP), 0x11a717fdu);
  /* 11a717fd push 0x11a77160 */
  push32((uint32_t)(0x11a77160u));
  /* 11a71802 push 0x11a77e18 */
  push32((uint32_t)(0x11a77e18u));
  /* 11a71807 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71809u);
  /* 11a71809 push 0x11a77154 */
  push32((uint32_t)(0x11a77154u));
  /* 11a7180e push 0x11a77bf0 */
  push32((uint32_t)(0x11a77bf0u));
  /* 11a71813 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71815u);
  /* 11a71815 push 0x11a7714c */
  push32((uint32_t)(0x11a7714cu));
  /* 11a7181a push 0x11a77b20 */
  push32((uint32_t)(0x11a77b20u));
  /* 11a7181f call ebp */
  call_ind((uint32_t)(EBP), 0x11a71821u);
  /* 11a71821 push 0x11a77138 */
  push32((uint32_t)(0x11a77138u));
  /* 11a71826 push 0x11a77be0 */
  push32((uint32_t)(0x11a77be0u));
  /* 11a7182b call ebx */
  call_ind((uint32_t)(EBX), 0x11a7182du);
  /* 11a7182d push 0x11a77124 */
  push32((uint32_t)(0x11a77124u));
  /* 11a71832 push 0x11a77dc8 */
  push32((uint32_t)(0x11a77dc8u));
  /* 11a71837 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71839u);
  /* 11a71839 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7183c push 0x11a7710c */
  push32((uint32_t)(0x11a7710cu));
  /* 11a71841 push 0x11a77df0 */
  push32((uint32_t)(0x11a77df0u));
  /* 11a71846 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71848u);
  /* 11a71848 push 0x11a770f4 */
  push32((uint32_t)(0x11a770f4u));
  /* 11a7184d push 0x11a77b10 */
  push32((uint32_t)(0x11a77b10u));
  /* 11a71852 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71854u);
  /* 11a71854 push 0x11a770e0 */
  push32((uint32_t)(0x11a770e0u));
  /* 11a71859 push 0x11a77ba8 */
  push32((uint32_t)(0x11a77ba8u));
  /* 11a7185e call ebx */
  call_ind((uint32_t)(EBX), 0x11a71860u);
  /* 11a71860 push 0x11a770cc */
  push32((uint32_t)(0x11a770ccu));
  /* 11a71865 push 0x11a77dc0 */
  push32((uint32_t)(0x11a77dc0u));
  /* 11a7186a call ebx */
  call_ind((uint32_t)(EBX), 0x11a7186cu);
  /* 11a7186c push 0x11a770b8 */
  push32((uint32_t)(0x11a770b8u));
  /* 11a71871 push 0x11a77ea8 */
  push32((uint32_t)(0x11a77ea8u));
  /* 11a71876 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71878u);
  /* 11a71878 push 0x11a770a4 */
  push32((uint32_t)(0x11a770a4u));
  /* 11a7187d push 0x11a77ec8 */
  push32((uint32_t)(0x11a77ec8u));
  /* 11a71882 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71884u);
  /* 11a71884 push 0x11a77e28 */
  push32((uint32_t)(0x11a77e28u));
  /* 11a71889 call esi */
  call_ind((uint32_t)(ESI), 0x11a7188bu);
  /* 11a7188b push 8 */
  push32((uint32_t)(0x8u));
  /* 11a7188d pop ebp */
  EBP = (pop32());
  /* 11a7188e push ebp */
  push32((uint32_t)(EBP));
  /* 11a7188f push 0x11a77e28 */
  push32((uint32_t)(0x11a77e28u));
  /* 11a71894 call edi */
  call_ind((uint32_t)(EDI), 0x11a71896u);
  /* 11a71896 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a7189b call esi */
  call_ind((uint32_t)(ESI), 0x11a7189du);
  /* 11a7189d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a718a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a718a1 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a718a6 call edi */
  call_ind((uint32_t)(EDI), 0x11a718a8u);
  /* 11a718a8 push 0x11a77e20 */
  push32((uint32_t)(0x11a77e20u));
  /* 11a718ad call esi */
  call_ind((uint32_t)(ESI), 0x11a718afu);
  /* 11a718af push ebp */
  push32((uint32_t)(EBP));
  /* 11a718b0 push 0x11a77e20 */
  push32((uint32_t)(0x11a77e20u));
  /* 11a718b5 call edi */
  call_ind((uint32_t)(EDI), 0x11a718b7u);
  /* 11a718b7 push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a718bc call esi */
  call_ind((uint32_t)(ESI), 0x11a718beu);
  /* 11a718be push ebp */
  push32((uint32_t)(EBP));
  /* 11a718bf push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a718c4 call edi */
  call_ind((uint32_t)(EDI), 0x11a718c6u);
  /* 11a718c6 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a718cb call esi */
  call_ind((uint32_t)(ESI), 0x11a718cdu);
  /* 11a718cd push ebp */
  push32((uint32_t)(EBP));
  /* 11a718ce push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a718d3 call edi */
  call_ind((uint32_t)(EDI), 0x11a718d5u);
  /* 11a718d5 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a718da call esi */
  call_ind((uint32_t)(ESI), 0x11a718dcu);
  /* 11a718dc push 0x11a77c80 */
  push32((uint32_t)(0x11a77c80u));
  /* 11a718e1 call esi */
  call_ind((uint32_t)(ESI), 0x11a718e3u);
  /* 11a718e3 push 0x11a77ca0 */
  push32((uint32_t)(0x11a77ca0u));
  /* 11a718e8 call esi */
  call_ind((uint32_t)(ESI), 0x11a718eau);
  /* 11a718ea push 0x11a77ca8 */
  push32((uint32_t)(0x11a77ca8u));
  /* 11a718ef call esi */
  call_ind((uint32_t)(ESI), 0x11a718f1u);
  /* 11a718f1 push 0x11a77d58 */
  push32((uint32_t)(0x11a77d58u));
  /* 11a718f6 call esi */
  call_ind((uint32_t)(ESI), 0x11a718f8u);
  /* 11a718f8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a718fb push 0x11a77d78 */
  push32((uint32_t)(0x11a77d78u));
  /* 11a71900 call esi */
  call_ind((uint32_t)(ESI), 0x11a71902u);
  /* 11a71902 mov dword ptr [esp], 0x11a77d48 */
  w32((uint32_t)(ESP), (0x11a77d48u));
  /* 11a71909 call esi */
  call_ind((uint32_t)(ESI), 0x11a7190bu);
  /* 11a7190b push ebp */
  push32((uint32_t)(EBP));
  /* 11a7190c push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a71911 call edi */
  call_ind((uint32_t)(EDI), 0x11a71913u);
  /* 11a71913 push ebp */
  push32((uint32_t)(EBP));
  /* 11a71914 push 0x11a77c80 */
  push32((uint32_t)(0x11a77c80u));
  /* 11a71919 call edi */
  call_ind((uint32_t)(EDI), 0x11a7191bu);
  /* 11a7191b push ebp */
  push32((uint32_t)(EBP));
  /* 11a7191c push 0x11a77ca0 */
  push32((uint32_t)(0x11a77ca0u));
  /* 11a71921 call edi */
  call_ind((uint32_t)(EDI), 0x11a71923u);
  /* 11a71923 push ebp */
  push32((uint32_t)(EBP));
  /* 11a71924 push 0x11a77ca8 */
  push32((uint32_t)(0x11a77ca8u));
  /* 11a71929 call edi */
  call_ind((uint32_t)(EDI), 0x11a7192bu);
  /* 11a7192b push ebp */
  push32((uint32_t)(EBP));
  /* 11a7192c push 0x11a77d58 */
  push32((uint32_t)(0x11a77d58u));
  /* 11a71931 call edi */
  call_ind((uint32_t)(EDI), 0x11a71933u);
  /* 11a71933 push ebp */
  push32((uint32_t)(EBP));
  /* 11a71934 push 0x11a77d78 */
  push32((uint32_t)(0x11a77d78u));
  /* 11a71939 call edi */
  call_ind((uint32_t)(EDI), 0x11a7193bu);
  /* 11a7193b push 0x11a77090 */
  push32((uint32_t)(0x11a77090u));
  /* 11a71940 push 0x11a77bb8 */
  push32((uint32_t)(0x11a77bb8u));
  /* 11a71945 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71947u);
  /* 11a71947 push 0x11a7707c */
  push32((uint32_t)(0x11a7707cu));
  /* 11a7194c push 0x11a77d88 */
  push32((uint32_t)(0x11a77d88u));
  /* 11a71951 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71953u);
  /* 11a71953 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71956 push 0x11a7706c */
  push32((uint32_t)(0x11a7706cu));
  /* 11a7195b push 0x11a77e68 */
  push32((uint32_t)(0x11a77e68u));
  /* 11a71960 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71962u);
  /* 11a71962 push 0x11a77058 */
  push32((uint32_t)(0x11a77058u));
  /* 11a71967 push 0x11a77eb8 */
  push32((uint32_t)(0x11a77eb8u));
  /* 11a7196c call ebx */
  call_ind((uint32_t)(EBX), 0x11a7196eu);
  /* 11a7196e mov esi, dword ptr [0x11a76124] */
  ESI = (r32((uint32_t)(0x11a76124)));
  /* 11a71974 push 0x11a77050 */
  push32((uint32_t)(0x11a77050u));
  /* 11a71979 push 0x11a77c20 */
  push32((uint32_t)(0x11a77c20u));
  /* 11a7197e call esi */
  call_ind((uint32_t)(ESI), 0x11a71980u);
  /* 11a71980 push 0x11a77048 */
  push32((uint32_t)(0x11a77048u));
  /* 11a71985 push 0x11a77df8 */
  push32((uint32_t)(0x11a77df8u));
  /* 11a7198a call esi */
  call_ind((uint32_t)(ESI), 0x11a7198cu);
  /* 11a7198c push 0x11a77040 */
  push32((uint32_t)(0x11a77040u));
  /* 11a71991 push 0x11a77ec0 */
  push32((uint32_t)(0x11a77ec0u));
  /* 11a71996 call esi */
  call_ind((uint32_t)(ESI), 0x11a71998u);
  /* 11a71998 push 0x11a77038 */
  push32((uint32_t)(0x11a77038u));
  /* 11a7199d push 0x11a77f48 */
  push32((uint32_t)(0x11a77f48u));
  /* 11a719a2 call esi */
  call_ind((uint32_t)(ESI), 0x11a719a4u);
  /* 11a719a4 push 0x11a77030 */
  push32((uint32_t)(0x11a77030u));
  /* 11a719a9 push 0x11a77d08 */
  push32((uint32_t)(0x11a77d08u));
  /* 11a719ae call dword ptr [0x11a76128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76128))), 0x11a719b4u);
  /* 11a719b4 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a719b7 pop edi */
  EDI = (pop32());
  /* 11a719b8 pop esi */
  ESI = (pop32());
  /* 11a719b9 pop ebp */
  EBP = (pop32());
  /* 11a719ba pop ebx */
  EBX = (pop32());
  /* 11a719bb ret  */
  ESPCHK(0x11a711d7u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11a719bc (6451 bytes, 2111 insns) */
void f_11a719bc(void) {
  FTRACE(0x11a719bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a719bc push ecx */
  push32((uint32_t)(ECX));
  /* 11a719bd push ebx */
  push32((uint32_t)(EBX));
  /* 11a719be push ebp */
  push32((uint32_t)(EBP));
  /* 11a719bf push esi */
  push32((uint32_t)(ESI));
  /* 11a719c0 push edi */
  push32((uint32_t)(EDI));
  /* 11a719c1 mov edi, dword ptr [0x11a760b0] */
  EDI = (r32((uint32_t)(0x11a760b0)));
  /* 11a719c7 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11a719c9 call edi */
  call_ind((uint32_t)(EDI), 0x11a719cbu);
  /* 11a719cb mov esi, dword ptr [0x11a760b4] */
  ESI = (r32((uint32_t)(0x11a760b4)));
  /* 11a719d1 mov ebp, dword ptr [0x11a76130] */
  EBP = (r32((uint32_t)(0x11a76130)));
  /* 11a719d7 mov ebx, dword ptr [0x11a7612c] */
  EBX = (r32((uint32_t)(0x11a7612c)));
  /* 11a719dd pop ecx */
  ECX = (pop32());
  /* 11a719de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a719e0 je 0x11a721f4 */
  if (C.zf) goto L_11a721f4;
  /* 11a719e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a719e8 call dword ptr [0x11a760b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760b8))), 0x11a719eeu);
  /* 11a719ee mov edi, dword ptr [0x11a760bc] */
  EDI = (r32((uint32_t)(0x11a760bc)));
  /* 11a719f4 and dword ptr [0x11a77e70], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a77e70)))&(0x0u); w32((uint32_t)(0x11a77e70), (_r)); fl_logic(_r,32); }
  /* 11a719fb push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a719fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11a719ff mov dword ptr [0x11a77b68], eax */
  w32((uint32_t)(0x11a77b68), (EAX));
  /* 11a71a04 call edi */
  call_ind((uint32_t)(EDI), 0x11a71a06u);
  /* 11a71a06 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a71a08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71a0a call edi */
  call_ind((uint32_t)(EDI), 0x11a71a0cu);
  /* 11a71a0c push 0xe */
  push32((uint32_t)(0xeu));
  /* 11a71a0e push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71a10 call edi */
  call_ind((uint32_t)(EDI), 0x11a71a12u);
  /* 11a71a12 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11a71a14 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71a16 call edi */
  call_ind((uint32_t)(EDI), 0x11a71a18u);
  /* 11a71a18 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a71a1d add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71a20 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a71a23 mov edi, 0x11a77360 */
  EDI = (0x11a77360u);
  /* 11a71a28 je 0x11a71d30 */
  if (C.zf) goto L_11a71d30;
  /* 11a71a2e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a71a2f je 0x11a71d57 */
  if (C.zf) goto L_11a71d57;
  /* 11a71a35 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a71a36 je 0x11a71bf6 */
  if (C.zf) goto L_11a71bf6;
  /* 11a71a3c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a71a3d jne 0x11a71da2 */
  if (!C.zf) goto L_11a71da2;
  /* 11a71a43 push 0x11a777b0 */
  push32((uint32_t)(0x11a777b0u));
  /* 11a71a48 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a49 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a4bu);
  /* 11a71a4b push 0x11a777a8 */
  push32((uint32_t)(0x11a777a8u));
  /* 11a71a50 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a51 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a53u);
  /* 11a71a53 push 0x11a777a0 */
  push32((uint32_t)(0x11a777a0u));
  /* 11a71a58 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a59 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a5bu);
  /* 11a71a5b push 0x11a77798 */
  push32((uint32_t)(0x11a77798u));
  /* 11a71a60 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a61 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a63u);
  /* 11a71a63 push 0x11a77790 */
  push32((uint32_t)(0x11a77790u));
  /* 11a71a68 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a69 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a6bu);
  /* 11a71a6b push 0x11a77788 */
  push32((uint32_t)(0x11a77788u));
  /* 11a71a70 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a71 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a73u);
  /* 11a71a73 push 0x11a77780 */
  push32((uint32_t)(0x11a77780u));
  /* 11a71a78 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a79 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a7bu);
  /* 11a71a7b push 0x11a77778 */
  push32((uint32_t)(0x11a77778u));
  /* 11a71a80 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a81 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a83u);
  /* 11a71a83 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71a86 push 0x11a77770 */
  push32((uint32_t)(0x11a77770u));
  /* 11a71a8b push edi */
  push32((uint32_t)(EDI));
  /* 11a71a8c call esi */
  call_ind((uint32_t)(ESI), 0x11a71a8eu);
  /* 11a71a8e push 0x11a77768 */
  push32((uint32_t)(0x11a77768u));
  /* 11a71a93 push edi */
  push32((uint32_t)(EDI));
  /* 11a71a94 call esi */
  call_ind((uint32_t)(ESI), 0x11a71a96u);
  /* 11a71a96 push 0x11a77760 */
  push32((uint32_t)(0x11a77760u));
  /* 11a71a9b push edi */
  push32((uint32_t)(EDI));
  /* 11a71a9c call esi */
  call_ind((uint32_t)(ESI), 0x11a71a9eu);
  /* 11a71a9e push 0x11a77758 */
  push32((uint32_t)(0x11a77758u));
  /* 11a71aa3 push edi */
  push32((uint32_t)(EDI));
  /* 11a71aa4 call esi */
  call_ind((uint32_t)(ESI), 0x11a71aa6u);
  /* 11a71aa6 push 0x11a77750 */
  push32((uint32_t)(0x11a77750u));
  /* 11a71aab push edi */
  push32((uint32_t)(EDI));
  /* 11a71aac call esi */
  call_ind((uint32_t)(ESI), 0x11a71aaeu);
  /* 11a71aae push 0x11a77748 */
  push32((uint32_t)(0x11a77748u));
  /* 11a71ab3 push edi */
  push32((uint32_t)(EDI));
  /* 11a71ab4 call esi */
  call_ind((uint32_t)(ESI), 0x11a71ab6u);
  /* 11a71ab6 push 0x11a77740 */
  push32((uint32_t)(0x11a77740u));
  /* 11a71abb push edi */
  push32((uint32_t)(EDI));
  /* 11a71abc call esi */
  call_ind((uint32_t)(ESI), 0x11a71abeu);
  /* 11a71abe push 0x11a77738 */
  push32((uint32_t)(0x11a77738u));
  /* 11a71ac3 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71ac8 call esi */
  call_ind((uint32_t)(ESI), 0x11a71acau);
  /* 11a71aca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71acd push 0x11a77730 */
  push32((uint32_t)(0x11a77730u));
  /* 11a71ad2 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71ad7 call esi */
  call_ind((uint32_t)(ESI), 0x11a71ad9u);
  /* 11a71ad9 push 0x11a77728 */
  push32((uint32_t)(0x11a77728u));
  /* 11a71ade push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71ae3 call esi */
  call_ind((uint32_t)(ESI), 0x11a71ae5u);
  /* 11a71ae5 push 0x11a77720 */
  push32((uint32_t)(0x11a77720u));
  /* 11a71aea push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71aef call esi */
  call_ind((uint32_t)(ESI), 0x11a71af1u);
  /* 11a71af1 push 0x11a77718 */
  push32((uint32_t)(0x11a77718u));
  /* 11a71af6 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71afb call esi */
  call_ind((uint32_t)(ESI), 0x11a71afdu);
  /* 11a71afd push 0x11a77710 */
  push32((uint32_t)(0x11a77710u));
  /* 11a71b02 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b07 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b09u);
  /* 11a71b09 push 0x11a77708 */
  push32((uint32_t)(0x11a77708u));
  /* 11a71b0e push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b13 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b15u);
  /* 11a71b15 push 0x11a77700 */
  push32((uint32_t)(0x11a77700u));
  /* 11a71b1a push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b1f call esi */
  call_ind((uint32_t)(ESI), 0x11a71b21u);
  /* 11a71b21 push 0x11a776f8 */
  push32((uint32_t)(0x11a776f8u));
  /* 11a71b26 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b2b call esi */
  call_ind((uint32_t)(ESI), 0x11a71b2du);
  /* 11a71b2d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71b30 push 0x11a776f0 */
  push32((uint32_t)(0x11a776f0u));
  /* 11a71b35 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b3a call esi */
  call_ind((uint32_t)(ESI), 0x11a71b3cu);
  /* 11a71b3c push 0x11a776e8 */
  push32((uint32_t)(0x11a776e8u));
  /* 11a71b41 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b46 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b48u);
  /* 11a71b48 push 0x11a776e0 */
  push32((uint32_t)(0x11a776e0u));
  /* 11a71b4d push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b52 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b54u);
  /* 11a71b54 push 0x11a776d8 */
  push32((uint32_t)(0x11a776d8u));
  /* 11a71b59 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b5e call esi */
  call_ind((uint32_t)(ESI), 0x11a71b60u);
  /* 11a71b60 push 0x11a776d0 */
  push32((uint32_t)(0x11a776d0u));
  /* 11a71b65 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71b6a call esi */
  call_ind((uint32_t)(ESI), 0x11a71b6cu);
  /* 11a71b6c push 0x11a776c8 */
  push32((uint32_t)(0x11a776c8u));
  /* 11a71b71 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71b76 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b78u);
  /* 11a71b78 push 0x11a776c0 */
  push32((uint32_t)(0x11a776c0u));
  /* 11a71b7d push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71b82 call esi */
  call_ind((uint32_t)(ESI), 0x11a71b84u);
  /* 11a71b84 push 0x11a776b8 */
  push32((uint32_t)(0x11a776b8u));
  /* 11a71b89 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71b8e call esi */
  call_ind((uint32_t)(ESI), 0x11a71b90u);
  /* 11a71b90 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71b93 push 0x11a776b0 */
  push32((uint32_t)(0x11a776b0u));
  /* 11a71b98 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71b9d call esi */
  call_ind((uint32_t)(ESI), 0x11a71b9fu);
  /* 11a71b9f push 0x11a776a8 */
  push32((uint32_t)(0x11a776a8u));
  /* 11a71ba4 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71ba9 call esi */
  call_ind((uint32_t)(ESI), 0x11a71babu);
  /* 11a71bab push 0x11a776a0 */
  push32((uint32_t)(0x11a776a0u));
  /* 11a71bb0 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71bb5 call esi */
  call_ind((uint32_t)(ESI), 0x11a71bb7u);
  /* 11a71bb7 push 0x11a77698 */
  push32((uint32_t)(0x11a77698u));
  /* 11a71bbc push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71bc1 call esi */
  call_ind((uint32_t)(ESI), 0x11a71bc3u);
  /* 11a71bc3 push 0x11a77684 */
  push32((uint32_t)(0x11a77684u));
  /* 11a71bc8 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71bcd call esi */
  call_ind((uint32_t)(ESI), 0x11a71bcfu);
  /* 11a71bcf push 0x11a77670 */
  push32((uint32_t)(0x11a77670u));
  /* 11a71bd4 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71bd9 call esi */
  call_ind((uint32_t)(ESI), 0x11a71bdbu);
  /* 11a71bdb push 0x11a77658 */
  push32((uint32_t)(0x11a77658u));
  /* 11a71be0 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71be5 call esi */
  call_ind((uint32_t)(ESI), 0x11a71be7u);
  /* 11a71be7 push 0x11a77640 */
  push32((uint32_t)(0x11a77640u));
  /* 11a71bec push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71bf1 call esi */
  call_ind((uint32_t)(ESI), 0x11a71bf3u);
  /* 11a71bf3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71bf6:;
  /* 11a71bf6 push 0x11a77638 */
  push32((uint32_t)(0x11a77638u));
  /* 11a71bfb push edi */
  push32((uint32_t)(EDI));
  /* 11a71bfc call esi */
  call_ind((uint32_t)(ESI), 0x11a71bfeu);
  /* 11a71bfe push 0x11a777b0 */
  push32((uint32_t)(0x11a777b0u));
  /* 11a71c03 push edi */
  push32((uint32_t)(EDI));
  /* 11a71c04 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c06u);
  /* 11a71c06 push 0x11a777a8 */
  push32((uint32_t)(0x11a777a8u));
  /* 11a71c0b push edi */
  push32((uint32_t)(EDI));
  /* 11a71c0c call esi */
  call_ind((uint32_t)(ESI), 0x11a71c0eu);
  /* 11a71c0e push 0x11a777a0 */
  push32((uint32_t)(0x11a777a0u));
  /* 11a71c13 push edi */
  push32((uint32_t)(EDI));
  /* 11a71c14 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c16u);
  /* 11a71c16 push 0x11a77788 */
  push32((uint32_t)(0x11a77788u));
  /* 11a71c1b push edi */
  push32((uint32_t)(EDI));
  /* 11a71c1c call esi */
  call_ind((uint32_t)(ESI), 0x11a71c1eu);
  /* 11a71c1e push 0x11a77630 */
  push32((uint32_t)(0x11a77630u));
  /* 11a71c23 push edi */
  push32((uint32_t)(EDI));
  /* 11a71c24 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c26u);
  /* 11a71c26 push 0x11a77770 */
  push32((uint32_t)(0x11a77770u));
  /* 11a71c2b push edi */
  push32((uint32_t)(EDI));
  /* 11a71c2c call esi */
  call_ind((uint32_t)(ESI), 0x11a71c2eu);
  /* 11a71c2e push 0x11a77748 */
  push32((uint32_t)(0x11a77748u));
  /* 11a71c33 push edi */
  push32((uint32_t)(EDI));
  /* 11a71c34 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c36u);
  /* 11a71c36 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71c39 push 0x11a77740 */
  push32((uint32_t)(0x11a77740u));
  /* 11a71c3e push edi */
  push32((uint32_t)(EDI));
  /* 11a71c3f call esi */
  call_ind((uint32_t)(ESI), 0x11a71c41u);
  /* 11a71c41 push 0x11a77628 */
  push32((uint32_t)(0x11a77628u));
  /* 11a71c46 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c4b call esi */
  call_ind((uint32_t)(ESI), 0x11a71c4du);
  /* 11a71c4d push 0x11a77738 */
  push32((uint32_t)(0x11a77738u));
  /* 11a71c52 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c57 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c59u);
  /* 11a71c59 push 0x11a77730 */
  push32((uint32_t)(0x11a77730u));
  /* 11a71c5e push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c63 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c65u);
  /* 11a71c65 push 0x11a77728 */
  push32((uint32_t)(0x11a77728u));
  /* 11a71c6a push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c6f call esi */
  call_ind((uint32_t)(ESI), 0x11a71c71u);
  /* 11a71c71 push 0x11a77710 */
  push32((uint32_t)(0x11a77710u));
  /* 11a71c76 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c7b call esi */
  call_ind((uint32_t)(ESI), 0x11a71c7du);
  /* 11a71c7d push 0x11a77620 */
  push32((uint32_t)(0x11a77620u));
  /* 11a71c82 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c87 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c89u);
  /* 11a71c89 push 0x11a77618 */
  push32((uint32_t)(0x11a77618u));
  /* 11a71c8e push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71c93 call esi */
  call_ind((uint32_t)(ESI), 0x11a71c95u);
  /* 11a71c95 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71c98 push 0x11a776d8 */
  push32((uint32_t)(0x11a776d8u));
  /* 11a71c9d push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71ca2 call esi */
  call_ind((uint32_t)(ESI), 0x11a71ca4u);
  /* 11a71ca4 push 0x11a776d0 */
  push32((uint32_t)(0x11a776d0u));
  /* 11a71ca9 push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a71cae call esi */
  call_ind((uint32_t)(ESI), 0x11a71cb0u);
  /* 11a71cb0 push 0x11a77610 */
  push32((uint32_t)(0x11a77610u));
  /* 11a71cb5 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cba call esi */
  call_ind((uint32_t)(ESI), 0x11a71cbcu);
  /* 11a71cbc push 0x11a77608 */
  push32((uint32_t)(0x11a77608u));
  /* 11a71cc1 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cc6 call esi */
  call_ind((uint32_t)(ESI), 0x11a71cc8u);
  /* 11a71cc8 push 0x11a77600 */
  push32((uint32_t)(0x11a77600u));
  /* 11a71ccd push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cd2 call esi */
  call_ind((uint32_t)(ESI), 0x11a71cd4u);
  /* 11a71cd4 push 0x11a775f8 */
  push32((uint32_t)(0x11a775f8u));
  /* 11a71cd9 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cde call esi */
  call_ind((uint32_t)(ESI), 0x11a71ce0u);
  /* 11a71ce0 push 0x11a776a0 */
  push32((uint32_t)(0x11a776a0u));
  /* 11a71ce5 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cea call esi */
  call_ind((uint32_t)(ESI), 0x11a71cecu);
  /* 11a71cec push 0x11a77698 */
  push32((uint32_t)(0x11a77698u));
  /* 11a71cf1 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71cf6 call esi */
  call_ind((uint32_t)(ESI), 0x11a71cf8u);
  /* 11a71cf8 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71cfb push 0x11a775e4 */
  push32((uint32_t)(0x11a775e4u));
  /* 11a71d00 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d05 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d07u);
  /* 11a71d07 push 0x11a775d0 */
  push32((uint32_t)(0x11a775d0u));
  /* 11a71d0c push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d11 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d13u);
  /* 11a71d13 push 0x11a775b8 */
  push32((uint32_t)(0x11a775b8u));
  /* 11a71d18 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d1d call esi */
  call_ind((uint32_t)(ESI), 0x11a71d1fu);
  /* 11a71d1f push 0x11a775a0 */
  push32((uint32_t)(0x11a775a0u));
  /* 11a71d24 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d29 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d2bu);
  /* 11a71d2b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71d2e jmp 0x11a71da2 */
  goto L_11a71da2;
L_11a71d30:;
  /* 11a71d30 push 0x11a77598 */
  push32((uint32_t)(0x11a77598u));
  /* 11a71d35 push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d3a call esi */
  call_ind((uint32_t)(ESI), 0x11a71d3cu);
  /* 11a71d3c push 0x11a77590 */
  push32((uint32_t)(0x11a77590u));
  /* 11a71d41 push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d46 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d48u);
  /* 11a71d48 push 0x11a77588 */
  push32((uint32_t)(0x11a77588u));
  /* 11a71d4d push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d52 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d54u);
  /* 11a71d54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71d57:;
  /* 11a71d57 push 0x11a77580 */
  push32((uint32_t)(0x11a77580u));
  /* 11a71d5c push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d61 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d63u);
  /* 11a71d63 push 0x11a77578 */
  push32((uint32_t)(0x11a77578u));
  /* 11a71d68 push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d6d call esi */
  call_ind((uint32_t)(ESI), 0x11a71d6fu);
  /* 11a71d6f push 0x11a77570 */
  push32((uint32_t)(0x11a77570u));
  /* 11a71d74 push 0x11a7739c */
  push32((uint32_t)(0x11a7739cu));
  /* 11a71d79 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d7bu);
  /* 11a71d7b push 0x11a776c8 */
  push32((uint32_t)(0x11a776c8u));
  /* 11a71d80 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d85 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d87u);
  /* 11a71d87 push 0x11a776c0 */
  push32((uint32_t)(0x11a776c0u));
  /* 11a71d8c push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d91 call esi */
  call_ind((uint32_t)(ESI), 0x11a71d93u);
  /* 11a71d93 push 0x11a776b8 */
  push32((uint32_t)(0x11a776b8u));
  /* 11a71d98 push 0x11a77394 */
  push32((uint32_t)(0x11a77394u));
  /* 11a71d9d call esi */
  call_ind((uint32_t)(ESI), 0x11a71d9fu);
  /* 11a71d9f add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a71da2:;
  /* 11a71da2 push 0x11a77568 */
  push32((uint32_t)(0x11a77568u));
  /* 11a71da7 push edi */
  push32((uint32_t)(EDI));
  /* 11a71da8 call esi */
  call_ind((uint32_t)(ESI), 0x11a71daau);
  /* 11a71daa mov edi, 0x11a77348 */
  EDI = (0x11a77348u);
  /* 11a71daf push 0x11a77560 */
  push32((uint32_t)(0x11a77560u));
  /* 11a71db4 push edi */
  push32((uint32_t)(EDI));
  /* 11a71db5 call esi */
  call_ind((uint32_t)(ESI), 0x11a71db7u);
  /* 11a71db7 push 0x11a77050 */
  push32((uint32_t)(0x11a77050u));
  /* 11a71dbc push edi */
  push32((uint32_t)(EDI));
  /* 11a71dbd call esi */
  call_ind((uint32_t)(ESI), 0x11a71dbfu);
  /* 11a71dbf push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71dc1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a71dc3 pop eax */
  EAX = (pop32());
  /* 11a71dc4 sub eax, dword ptr [0x11a77b68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a77b68))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a71dca imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a71dd0 push eax */
  push32((uint32_t)(EAX));
  /* 11a71dd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71dd3 push edi */
  push32((uint32_t)(EDI));
  /* 11a71dd4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71dd6u);
  /* 11a71dd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71dd8 push edi */
  push32((uint32_t)(EDI));
  /* 11a71dd9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71ddbu);
  /* 11a71ddb push eax */
  push32((uint32_t)(EAX));
  /* 11a71ddc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71dde push edi */
  push32((uint32_t)(EDI));
  /* 11a71ddf call ebp */
  call_ind((uint32_t)(EBP), 0x11a71de1u);
  /* 11a71de1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71de3 push edi */
  push32((uint32_t)(EDI));
  /* 11a71de4 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71de6u);
  /* 11a71de6 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71de9 push eax */
  push32((uint32_t)(EAX));
  /* 11a71dea push 4 */
  push32((uint32_t)(0x4u));
  /* 11a71dec push edi */
  push32((uint32_t)(EDI));
  /* 11a71ded call ebp */
  call_ind((uint32_t)(EBP), 0x11a71defu);
  /* 11a71def push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71df1 push edi */
  push32((uint32_t)(EDI));
  /* 11a71df2 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71df4u);
  /* 11a71df4 push eax */
  push32((uint32_t)(EAX));
  /* 11a71df5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71df7 push edi */
  push32((uint32_t)(EDI));
  /* 11a71df8 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71dfau);
  /* 11a71dfa push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71dfc push edi */
  push32((uint32_t)(EDI));
  /* 11a71dfd call ebx */
  call_ind((uint32_t)(EBX), 0x11a71dffu);
  /* 11a71dff push eax */
  push32((uint32_t)(EAX));
  /* 11a71e00 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e01 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e02 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e04u);
  /* 11a71e04 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71e06 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e07 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e09u);
  /* 11a71e09 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e0a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e0c push edi */
  push32((uint32_t)(EDI));
  /* 11a71e0d call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e0fu);
  /* 11a71e0f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71e12 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71e14 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e15 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e17u);
  /* 11a71e17 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a71e1a push eax */
  push32((uint32_t)(EAX));
  /* 11a71e1b push edi */
  push32((uint32_t)(EDI));
  /* 11a71e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e1e call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e20u);
  /* 11a71e20 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e23 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e25u);
  /* 11a71e25 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e26 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71e28 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e2a call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e2cu);
  /* 11a71e2c push edi */
  push32((uint32_t)(EDI));
  /* 11a71e2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e2f call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e31u);
  /* 11a71e31 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e32 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e36 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e38u);
  /* 11a71e38 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e3b call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e3du);
  /* 11a71e3d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71e40 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e45 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e47u);
  /* 11a71e47 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e48 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e4a call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e4cu);
  /* 11a71e4c push eax */
  push32((uint32_t)(EAX));
  /* 11a71e4d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a71e4f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e51 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e53u);
  /* 11a71e53 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e56 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e58u);
  /* 11a71e58 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e59 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e5d call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e5fu);
  /* 11a71e5f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71e61 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e62 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e64u);
  /* 11a71e64 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11a71e67 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e68 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e6b call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e6du);
  /* 11a71e6d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71e70 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e71 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e73 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e75u);
  /* 11a71e75 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e76 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71e78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e7a call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e7cu);
  /* 11a71e7c push edi */
  push32((uint32_t)(EDI));
  /* 11a71e7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e7f call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e81u);
  /* 11a71e81 push eax */
  push32((uint32_t)(EAX));
  /* 11a71e82 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e86 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e88u);
  /* 11a71e88 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e8b call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e8du);
  /* 11a71e8d push eax */
  push32((uint32_t)(EAX));
  /* 11a71e8e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71e90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e92 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71e94u);
  /* 11a71e94 push edi */
  push32((uint32_t)(EDI));
  /* 11a71e95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71e97 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71e99u);
  /* 11a71e99 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71e9c push eax */
  push32((uint32_t)(EAX));
  /* 11a71e9d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a71e9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71ea1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71ea3u);
  /* 11a71ea3 push edi */
  push32((uint32_t)(EDI));
  /* 11a71ea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71ea6 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71ea8u);
  /* 11a71ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11a71ea9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71eab push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71ead call ebp */
  call_ind((uint32_t)(EBP), 0x11a71eafu);
  /* 11a71eaf mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a71eb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a71eb5 imul eax, eax, 0xc350 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc350u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a71ebb push eax */
  push32((uint32_t)(EAX));
  /* 11a71ebc push edi */
  push32((uint32_t)(EDI));
  /* 11a71ebd push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ebf call ebp */
  call_ind((uint32_t)(EBP), 0x11a71ec1u);
  /* 11a71ec1 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a71ec6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a71ec7 imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a71ecd push eax */
  push32((uint32_t)(EAX));
  /* 11a71ece push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ed0 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ed2 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71ed4u);
  /* 11a71ed4 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a71ed9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a71eda imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a71ee0 push eax */
  push32((uint32_t)(EAX));
  /* 11a71ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71ee3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ee5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71ee7u);
  /* 11a71ee7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71eea push edi */
  push32((uint32_t)(EDI));
  /* 11a71eeb push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71eed call ebx */
  call_ind((uint32_t)(EBX), 0x11a71eefu);
  /* 11a71eef push eax */
  push32((uint32_t)(EAX));
  /* 11a71ef0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71ef2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ef4 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71ef6u);
  /* 11a71ef6 push edi */
  push32((uint32_t)(EDI));
  /* 11a71ef7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71ef9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71efbu);
  /* 11a71efb push eax */
  push32((uint32_t)(EAX));
  /* 11a71efc push 4 */
  push32((uint32_t)(0x4u));
  /* 11a71efe push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71f00 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f02u);
  /* 11a71f02 push edi */
  push32((uint32_t)(EDI));
  /* 11a71f03 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71f05 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f07u);
  /* 11a71f07 push eax */
  push32((uint32_t)(EAX));
  /* 11a71f08 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f0a push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71f0c call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f0eu);
  /* 11a71f0e push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11a71f13 push edi */
  push32((uint32_t)(EDI));
  /* 11a71f14 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f16 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f18u);
  /* 11a71f18 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71f1b push edi */
  push32((uint32_t)(EDI));
  /* 11a71f1c push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f1e call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f20u);
  /* 11a71f20 push eax */
  push32((uint32_t)(EAX));
  /* 11a71f21 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a71f23 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f25 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f27u);
  /* 11a71f27 push edi */
  push32((uint32_t)(EDI));
  /* 11a71f28 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f2a call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f2cu);
  /* 11a71f2c push eax */
  push32((uint32_t)(EAX));
  /* 11a71f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a71f2f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f31 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f33u);
  /* 11a71f33 push edi */
  push32((uint32_t)(EDI));
  /* 11a71f34 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f36 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f38u);
  /* 11a71f38 push eax */
  push32((uint32_t)(EAX));
  /* 11a71f39 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a71f3b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f3d call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f3fu);
  /* 11a71f3f push edi */
  push32((uint32_t)(EDI));
  /* 11a71f40 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f42 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f44u);
  /* 11a71f44 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71f47 push eax */
  push32((uint32_t)(EAX));
  /* 11a71f48 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a71f4a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f4c call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f4eu);
  /* 11a71f4e push edi */
  push32((uint32_t)(EDI));
  /* 11a71f4f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f51 call ebx */
  call_ind((uint32_t)(EBX), 0x11a71f53u);
  /* 11a71f53 push eax */
  push32((uint32_t)(EAX));
  /* 11a71f54 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f56 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a71f58 call ebp */
  call_ind((uint32_t)(EBP), 0x11a71f5au);
  /* 11a71f5a mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a71f5f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71f62 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a71f64 mov dword ptr [esp + 0x10], edi */
  w32((uint32_t)(ESP + 0x10), (EDI));
  /* 11a71f68 jle 0x11a7209b */
  if ((C.zf||C.sf!=C.of)) goto L_11a7209b;
  /* 11a71f6e mov edi, 0x11a77d98 */
  EDI = (0x11a77d98u);
L_11a71f73:;
  /* 11a71f73 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11a71f78 push 0x11a77e28 */
  push32((uint32_t)(0x11a77e28u));
  /* 11a71f7d push 0x11a77de8 */
  push32((uint32_t)(0x11a77de8u));
  /* 11a71f82 push 0x11a77d80 */
  push32((uint32_t)(0x11a77d80u));
  /* 11a71f87 call dword ptr [0x11a76138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76138))), 0x11a71f8du);
  /* 11a71f8d push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11a71f92 push 0x11a77e20 */
  push32((uint32_t)(0x11a77e20u));
  /* 11a71f97 push 0x11a77bf0 */
  push32((uint32_t)(0x11a77bf0u));
  /* 11a71f9c push 0x11a77d90 */
  push32((uint32_t)(0x11a77d90u));
  /* 11a71fa1 call dword ptr [0x11a76138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76138))), 0x11a71fa7u);
  /* 11a71fa7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a71fa9 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a71fab push 0x11a77f20 */
  push32((uint32_t)(0x11a77f20u));
  /* 11a71fb0 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a71fb5 push edi */
  push32((uint32_t)(EDI));
  /* 11a71fb6 push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a71fbb call 0x11a710c8 */
  push32(0x11a71fc0u); f_11a710c8();
  /* 11a71fc0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a71fc2 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a71fc4 push 0x11a77f18 */
  push32((uint32_t)(0x11a77f18u));
  /* 11a71fc9 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a71fce push edi */
  push32((uint32_t)(EDI));
  /* 11a71fcf push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a71fd4 call 0x11a710c8 */
  push32(0x11a71fd9u); f_11a710c8();
  /* 11a71fd9 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a71fdc push 0xa */
  push32((uint32_t)(0xau));
  /* 11a71fde push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a71fe0 push 0x11a77f20 */
  push32((uint32_t)(0x11a77f20u));
  /* 11a71fe5 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a71fea push edi */
  push32((uint32_t)(EDI));
  /* 11a71feb push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a71ff0 call 0x11a710c8 */
  push32(0x11a71ff5u); f_11a710c8();
  /* 11a71ff5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a71ff7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a71ff9 push 0x11a77f18 */
  push32((uint32_t)(0x11a77f18u));
  /* 11a71ffe push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72003 push edi */
  push32((uint32_t)(EDI));
  /* 11a72004 push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a72009 call 0x11a710c8 */
  push32(0x11a7200eu); f_11a710c8();
  /* 11a7200e push 0xa */
  push32((uint32_t)(0xau));
  /* 11a72010 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a72012 push 0x11a77f30 */
  push32((uint32_t)(0x11a77f30u));
  /* 11a72017 push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a7201c push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a72021 push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a72026 call 0x11a710c8 */
  push32(0x11a7202bu); f_11a710c8();
  /* 11a7202b add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7202e push 0xa */
  push32((uint32_t)(0xau));
  /* 11a72030 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a72032 push 0x11a77f28 */
  push32((uint32_t)(0x11a77f28u));
  /* 11a72037 push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a7203c push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a72041 push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a72046 call 0x11a710c8 */
  push32(0x11a7204bu); f_11a710c8();
  /* 11a7204b push 0xa */
  push32((uint32_t)(0xau));
  /* 11a7204d push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a7204f push 0x11a77f30 */
  push32((uint32_t)(0x11a77f30u));
  /* 11a72054 push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a72059 push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a7205e push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a72063 call 0x11a710c8 */
  push32(0x11a72068u); f_11a710c8();
  /* 11a72068 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a7206a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a7206c push 0x11a77f28 */
  push32((uint32_t)(0x11a77f28u));
  /* 11a72071 push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a72076 push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a7207b push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a72080 call 0x11a710c8 */
  push32(0x11a72085u); f_11a710c8();
  /* 11a72085 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a7208a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7208d inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a72091 cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72095 jl 0x11a71f73 */
  if ((C.sf!=C.of)) goto L_11a71f73;
L_11a7209b:;
  /* 11a7209b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7209e jge 0x11a720c7 */
  if ((C.sf==C.of)) goto L_11a720c7;
  /* 11a720a0 mov edi, dword ptr [0x11a76148] */
  EDI = (r32((uint32_t)(0x11a76148)));
  /* 11a720a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720a8 push 0x11a77c78 */
  push32((uint32_t)(0x11a77c78u));
  /* 11a720ad call edi */
  call_ind((uint32_t)(EDI), 0x11a720afu);
  /* 11a720af push 1 */
  push32((uint32_t)(0x1u));
  /* 11a720b1 push 0x11a77c90 */
  push32((uint32_t)(0x11a77c90u));
  /* 11a720b6 call edi */
  call_ind((uint32_t)(EDI), 0x11a720b8u);
  /* 11a720b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720ba push 5 */
  push32((uint32_t)(0x5u));
  /* 11a720bc call dword ptr [0x11a760c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c0))), 0x11a720c2u);
  /* 11a720c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a720c5 jmp 0x11a720cd */
  goto L_11a720cd;
L_11a720c7:;
  /* 11a720c7 mov edi, dword ptr [0x11a76148] */
  EDI = (r32((uint32_t)(0x11a76148)));
L_11a720cd:;
  /* 11a720cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720cf push 0x11a77e90 */
  push32((uint32_t)(0x11a77e90u));
  /* 11a720d4 call edi */
  call_ind((uint32_t)(EDI), 0x11a720d6u);
  /* 11a720d6 pop ecx */
  ECX = (pop32());
  /* 11a720d7 pop ecx */
  ECX = (pop32());
  /* 11a720d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720da push 0x11a77ef8 */
  push32((uint32_t)(0x11a77ef8u));
  /* 11a720df push 0x11a77e90 */
  push32((uint32_t)(0x11a77e90u));
  /* 11a720e4 call 0x11a71012 */
  push32(0x11a720e9u); f_11a71012();
  /* 11a720e9 pop ecx */
  ECX = (pop32());
  /* 11a720ea push eax */
  push32((uint32_t)(EAX));
  /* 11a720eb call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a720f1u);
  /* 11a720f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720f3 push 0x11a77e88 */
  push32((uint32_t)(0x11a77e88u));
  /* 11a720f8 call edi */
  call_ind((uint32_t)(EDI), 0x11a720fau);
  /* 11a720fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a720fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a720ff push 0x11a77f00 */
  push32((uint32_t)(0x11a77f00u));
  /* 11a72104 push 0x11a77e88 */
  push32((uint32_t)(0x11a77e88u));
  /* 11a72109 call 0x11a71012 */
  push32(0x11a7210eu); f_11a71012();
  /* 11a7210e pop ecx */
  ECX = (pop32());
  /* 11a7210f push eax */
  push32((uint32_t)(EAX));
  /* 11a72110 call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a72116u);
  /* 11a72116 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72118 call dword ptr [0x11a7614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7614c))), 0x11a7211eu);
  /* 11a7211e mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72126 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72129 je 0x11a72133 */
  if (C.zf) goto L_11a72133;
  /* 11a7212b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a7212c je 0x11a72147 */
  if (C.zf) goto L_11a72147;
  /* 11a7212e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a7212f je 0x11a72152 */
  if (C.zf) goto L_11a72152;
  /* 11a72131 jmp 0x11a72166 */
  goto L_11a72166;
L_11a72133:;
  /* 11a72133 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72135 call dword ptr [0x11a7614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7614c))), 0x11a7213bu);
  /* 11a7213b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7213d push 0x11a77e80 */
  push32((uint32_t)(0x11a77e80u));
  /* 11a72142 call edi */
  call_ind((uint32_t)(EDI), 0x11a72144u);
  /* 11a72144 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72147:;
  /* 11a72147 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72149 push 0x11a77e90 */
  push32((uint32_t)(0x11a77e90u));
  /* 11a7214e call edi */
  call_ind((uint32_t)(EDI), 0x11a72150u);
  /* 11a72150 pop ecx */
  ECX = (pop32());
  /* 11a72151 pop ecx */
  ECX = (pop32());
L_11a72152:;
  /* 11a72152 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72154 push 0x11a77e88 */
  push32((uint32_t)(0x11a77e88u));
  /* 11a72159 call edi */
  call_ind((uint32_t)(EDI), 0x11a7215bu);
  /* 11a7215b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7215d call dword ptr [0x11a760c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c8))), 0x11a72163u);
  /* 11a72163 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72166:;
  /* 11a72166 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72168 push 0x11a77de0 */
  push32((uint32_t)(0x11a77de0u));
  /* 11a7216d call edi */
  call_ind((uint32_t)(EDI), 0x11a7216fu);
  /* 11a7216f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72171 call dword ptr [0x11a760c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c8))), 0x11a72177u);
  /* 11a72177 push dword ptr [0x11a77b68] */
  push32((uint32_t)(r32((uint32_t)(0x11a77b68))));
  /* 11a7217d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7217f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72181 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72183 push 0x11a77558 */
  push32((uint32_t)(0x11a77558u));
  /* 11a72188 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7218a call dword ptr [0x11a760cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760cc))), 0x11a72190u);
  /* 11a72190 push 0x11a77550 */
  push32((uint32_t)(0x11a77550u));
  /* 11a72195 call dword ptr [0x11a760d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d0))), 0x11a7219bu);
  /* 11a7219b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7219d mov edi, dword ptr [0x11a760d4] */
  EDI = (r32((uint32_t)(0x11a760d4)));
  /* 11a721a3 pop eax */
  EAX = (pop32());
  /* 11a721a4 sub eax, dword ptr [0x11a77b68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a77b68))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a721aa imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a721b0 push eax */
  push32((uint32_t)(EAX));
  /* 11a721b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a721b3 call edi */
  call_ind((uint32_t)(EDI), 0x11a721b5u);
  /* 11a721b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a721b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a721b9 call edi */
  call_ind((uint32_t)(EDI), 0x11a721bbu);
  /* 11a721bb mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a721c0 mov ecx, 0xbb80 */
  ECX = (0xbb80u);
  /* 11a721c5 imul eax, eax, 0x2af8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2af8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a721cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a721cd push ecx */
  push32((uint32_t)(ECX));
  /* 11a721ce push 3 */
  push32((uint32_t)(0x3u));
  /* 11a721d0 call edi */
  call_ind((uint32_t)(EDI), 0x11a721d2u);
  /* 11a721d2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a721d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a721d7 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a721d9 call edi */
  call_ind((uint32_t)(EDI), 0x11a721dbu);
  /* 11a721db push 0 */
  push32((uint32_t)(0x0u));
  /* 11a721dd push 0xa */
  push32((uint32_t)(0xau));
  /* 11a721df call edi */
  call_ind((uint32_t)(EDI), 0x11a721e1u);
  /* 11a721e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a721e3 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11a721e5 call dword ptr [0x11a760d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d8))), 0x11a721ebu);
  /* 11a721eb mov edi, dword ptr [0x11a760b0] */
  EDI = (r32((uint32_t)(0x11a760b0)));
  /* 11a721f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a721f4:;
  /* 11a721f4 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a721f6 call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a721fcu);
  /* 11a721fc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a721fe pop ecx */
  ECX = (pop32());
  /* 11a721ff je 0x11a7235e */
  if (C.zf) goto L_11a7235e;
  /* 11a72205 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72207 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72209 call ebx */
  call_ind((uint32_t)(EBX), 0x11a7220bu);
  /* 11a7220b pop ecx */
  ECX = (pop32());
  /* 11a7220c cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72211 pop ecx */
  ECX = (pop32());
  /* 11a72212 jge 0x11a72226 */
  if ((C.sf==C.of)) goto L_11a72226;
  /* 11a72214 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a72219 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7221b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7221d call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a72223u);
  /* 11a72223 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72226:;
  /* 11a72226 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72228 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7222a call ebx */
  call_ind((uint32_t)(EBX), 0x11a7222cu);
  /* 11a7222c pop ecx */
  ECX = (pop32());
  /* 11a7222d cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72232 pop ecx */
  ECX = (pop32());
  /* 11a72233 jge 0x11a72247 */
  if ((C.sf==C.of)) goto L_11a72247;
  /* 11a72235 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a7223a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7223c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7223e call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a72244u);
  /* 11a72244 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72247:;
  /* 11a72247 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a72249 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7224b call ebx */
  call_ind((uint32_t)(EBX), 0x11a7224du);
  /* 11a7224d pop ecx */
  ECX = (pop32());
  /* 11a7224e cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72253 pop ecx */
  ECX = (pop32());
  /* 11a72254 jge 0x11a72268 */
  if ((C.sf==C.of)) goto L_11a72268;
  /* 11a72256 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a7225b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7225d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7225f call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a72265u);
  /* 11a72265 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72268:;
  /* 11a72268 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7226a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7226c call ebx */
  call_ind((uint32_t)(EBX), 0x11a7226eu);
  /* 11a7226e pop ecx */
  ECX = (pop32());
  /* 11a7226f cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72274 pop ecx */
  ECX = (pop32());
  /* 11a72275 jge 0x11a72289 */
  if ((C.sf==C.of)) goto L_11a72289;
  /* 11a72277 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a7227c push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7227e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72280 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a72286u);
  /* 11a72286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72289:;
  /* 11a72289 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7228b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7228d call ebx */
  call_ind((uint32_t)(EBX), 0x11a7228fu);
  /* 11a7228f pop ecx */
  ECX = (pop32());
  /* 11a72290 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72295 pop ecx */
  ECX = (pop32());
  /* 11a72296 jge 0x11a722aa */
  if ((C.sf==C.of)) goto L_11a722aa;
  /* 11a72298 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a7229d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7229f push 2 */
  push32((uint32_t)(0x2u));
  /* 11a722a1 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a722a7u);
  /* 11a722a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a722aa:;
  /* 11a722aa push 4 */
  push32((uint32_t)(0x4u));
  /* 11a722ac push 2 */
  push32((uint32_t)(0x2u));
  /* 11a722ae call ebx */
  call_ind((uint32_t)(EBX), 0x11a722b0u);
  /* 11a722b0 pop ecx */
  ECX = (pop32());
  /* 11a722b1 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a722b6 pop ecx */
  ECX = (pop32());
  /* 11a722b7 jge 0x11a722cb */
  if ((C.sf==C.of)) goto L_11a722cb;
  /* 11a722b9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a722be push 4 */
  push32((uint32_t)(0x4u));
  /* 11a722c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a722c2 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a722c8u);
  /* 11a722c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a722cb:;
  /* 11a722cb push 5 */
  push32((uint32_t)(0x5u));
  /* 11a722cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a722cf call ebx */
  call_ind((uint32_t)(EBX), 0x11a722d1u);
  /* 11a722d1 pop ecx */
  ECX = (pop32());
  /* 11a722d2 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a722d7 pop ecx */
  ECX = (pop32());
  /* 11a722d8 jge 0x11a722ec */
  if ((C.sf==C.of)) goto L_11a722ec;
  /* 11a722da push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a722df push 5 */
  push32((uint32_t)(0x5u));
  /* 11a722e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a722e3 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a722e9u);
  /* 11a722e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a722ec:;
  /* 11a722ec push 1 */
  push32((uint32_t)(0x1u));
  /* 11a722ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11a722f0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a722f2u);
  /* 11a722f2 pop ecx */
  ECX = (pop32());
  /* 11a722f3 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a722f8 pop ecx */
  ECX = (pop32());
  /* 11a722f9 jge 0x11a7230d */
  if ((C.sf==C.of)) goto L_11a7230d;
  /* 11a722fb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a72300 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72302 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72304 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a7230au);
  /* 11a7230a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7230d:;
  /* 11a7230d push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7230f push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72311 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72313u);
  /* 11a72313 pop ecx */
  ECX = (pop32());
  /* 11a72314 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72319 pop ecx */
  ECX = (pop32());
  /* 11a7231a jge 0x11a7232e */
  if ((C.sf==C.of)) goto L_11a7232e;
  /* 11a7231c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a72321 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a72323 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72325 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a7232bu);
  /* 11a7232b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7232e:;
  /* 11a7232e push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72330 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72332 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72334u);
  /* 11a72334 pop ecx */
  ECX = (pop32());
  /* 11a72335 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7233a pop ecx */
  ECX = (pop32());
  /* 11a7233b jge 0x11a7234f */
  if ((C.sf==C.of)) goto L_11a7234f;
  /* 11a7233d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a72342 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72344 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72346 call dword ptr [0x11a760e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e0))), 0x11a7234cu);
  /* 11a7234c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7234f:;
  /* 11a7234f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11a72354 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a72356 call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a7235cu);
  /* 11a7235c pop ecx */
  ECX = (pop32());
  /* 11a7235d pop ecx */
  ECX = (pop32());
L_11a7235e:;
  /* 11a7235e push 2 */
  push32((uint32_t)(0x2u));
  /* 11a72360 call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a72366u);
  /* 11a72366 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72368 pop ecx */
  ECX = (pop32());
  /* 11a72369 je 0x11a7253e */
  if (C.zf) goto L_11a7253e;
  /* 11a7236f mov ebx, dword ptr [0x11a76148] */
  EBX = (r32((uint32_t)(0x11a76148)));
  /* 11a72375 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72377 push 0x11a77b78 */
  push32((uint32_t)(0x11a77b78u));
  /* 11a7237c call ebx */
  call_ind((uint32_t)(EBX), 0x11a7237eu);
  /* 11a7237e push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a72380 call edi */
  call_ind((uint32_t)(EDI), 0x11a72382u);
  /* 11a72382 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72385 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72387 je 0x11a723a6 */
  if (C.zf) goto L_11a723a6;
  /* 11a72389 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7238b push 0x11a77e30 */
  push32((uint32_t)(0x11a77e30u));
  /* 11a72390 call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a72396u);
  /* 11a72396 pop ecx */
  ECX = (pop32());
  /* 11a72397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72399 pop ecx */
  ECX = (pop32());
  /* 11a7239a jle 0x11a723a6 */
  if ((C.zf||C.sf!=C.of)) goto L_11a723a6;
  /* 11a7239c push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7239e call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a723a4u);
  /* 11a723a4 jmp 0x11a723ae */
  goto L_11a723ae;
L_11a723a6:;
  /* 11a723a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a723a8 call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a723aeu);
L_11a723ae:;
  /* 11a723ae pop ecx */
  ECX = (pop32());
  /* 11a723af push 0 */
  push32((uint32_t)(0x0u));
  /* 11a723b1 push 0x11a77b70 */
  push32((uint32_t)(0x11a77b70u));
  /* 11a723b6 call ebx */
  call_ind((uint32_t)(EBX), 0x11a723b8u);
  /* 11a723b8 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a723ba call edi */
  call_ind((uint32_t)(EDI), 0x11a723bcu);
  /* 11a723bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a723bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a723c1 je 0x11a723e0 */
  if (C.zf) goto L_11a723e0;
  /* 11a723c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a723c5 push 0x11a77e40 */
  push32((uint32_t)(0x11a77e40u));
  /* 11a723ca call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a723d0u);
  /* 11a723d0 pop ecx */
  ECX = (pop32());
  /* 11a723d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a723d3 pop ecx */
  ECX = (pop32());
  /* 11a723d4 jle 0x11a723e0 */
  if ((C.zf||C.sf!=C.of)) goto L_11a723e0;
  /* 11a723d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a723d8 call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a723deu);
  /* 11a723de jmp 0x11a723e8 */
  goto L_11a723e8;
L_11a723e0:;
  /* 11a723e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a723e2 call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a723e8u);
L_11a723e8:;
  /* 11a723e8 pop ecx */
  ECX = (pop32());
  /* 11a723e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a723eb push 0x11a77b88 */
  push32((uint32_t)(0x11a77b88u));
  /* 11a723f0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a723f2u);
  /* 11a723f2 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a723f4 call edi */
  call_ind((uint32_t)(EDI), 0x11a723f6u);
  /* 11a723f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a723f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a723fb je 0x11a7241a */
  if (C.zf) goto L_11a7241a;
  /* 11a723fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a723ff push 0x11a77e38 */
  push32((uint32_t)(0x11a77e38u));
  /* 11a72404 call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a7240au);
  /* 11a7240a pop ecx */
  ECX = (pop32());
  /* 11a7240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7240d pop ecx */
  ECX = (pop32());
  /* 11a7240e jle 0x11a7241a */
  if ((C.zf||C.sf!=C.of)) goto L_11a7241a;
  /* 11a72410 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72412 call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a72418u);
  /* 11a72418 jmp 0x11a72422 */
  goto L_11a72422;
L_11a7241a:;
  /* 11a7241a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7241c call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a72422u);
L_11a72422:;
  /* 11a72422 pop ecx */
  ECX = (pop32());
  /* 11a72423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72425 push 0x11a77b80 */
  push32((uint32_t)(0x11a77b80u));
  /* 11a7242a call ebx */
  call_ind((uint32_t)(EBX), 0x11a7242cu);
  /* 11a7242c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a7242e call edi */
  call_ind((uint32_t)(EDI), 0x11a72430u);
  /* 11a72430 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72433 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72435 je 0x11a72454 */
  if (C.zf) goto L_11a72454;
  /* 11a72437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72439 push 0x11a77e50 */
  push32((uint32_t)(0x11a77e50u));
  /* 11a7243e call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a72444u);
  /* 11a72444 pop ecx */
  ECX = (pop32());
  /* 11a72445 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72447 pop ecx */
  ECX = (pop32());
  /* 11a72448 jle 0x11a72454 */
  if ((C.zf||C.sf!=C.of)) goto L_11a72454;
  /* 11a7244a push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7244c call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a72452u);
  /* 11a72452 jmp 0x11a7245c */
  goto L_11a7245c;
L_11a72454:;
  /* 11a72454 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72456 call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a7245cu);
L_11a7245c:;
  /* 11a7245c pop ecx */
  ECX = (pop32());
  /* 11a7245d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7245f call edi */
  call_ind((uint32_t)(EDI), 0x11a72461u);
  /* 11a72461 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72463 pop ecx */
  ECX = (pop32());
  /* 11a72464 jne 0x11a72518 */
  if (!C.zf) goto L_11a72518;
  /* 11a7246a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7246c push 0x11a77b98 */
  push32((uint32_t)(0x11a77b98u));
  /* 11a72471 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72473u);
  /* 11a72473 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a72475 call edi */
  call_ind((uint32_t)(EDI), 0x11a72477u);
  /* 11a72477 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7247a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7247c je 0x11a7249b */
  if (C.zf) goto L_11a7249b;
  /* 11a7247e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72480 push 0x11a77e48 */
  push32((uint32_t)(0x11a77e48u));
  /* 11a72485 call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a7248bu);
  /* 11a7248b pop ecx */
  ECX = (pop32());
  /* 11a7248c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7248e pop ecx */
  ECX = (pop32());
  /* 11a7248f jle 0x11a7249b */
  if ((C.zf||C.sf!=C.of)) goto L_11a7249b;
  /* 11a72491 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72493 call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a72499u);
  /* 11a72499 jmp 0x11a724a3 */
  goto L_11a724a3;
L_11a7249b:;
  /* 11a7249b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7249d call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a724a3u);
L_11a724a3:;
  /* 11a724a3 pop ecx */
  ECX = (pop32());
  /* 11a724a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a724a6 push 0x11a77b90 */
  push32((uint32_t)(0x11a77b90u));
  /* 11a724ab call ebx */
  call_ind((uint32_t)(EBX), 0x11a724adu);
  /* 11a724ad push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a724af call edi */
  call_ind((uint32_t)(EDI), 0x11a724b1u);
  /* 11a724b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a724b4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a724b6 je 0x11a724d5 */
  if (C.zf) goto L_11a724d5;
  /* 11a724b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a724ba push 0x11a77e60 */
  push32((uint32_t)(0x11a77e60u));
  /* 11a724bf call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a724c5u);
  /* 11a724c5 pop ecx */
  ECX = (pop32());
  /* 11a724c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a724c8 pop ecx */
  ECX = (pop32());
  /* 11a724c9 jle 0x11a724d5 */
  if ((C.zf||C.sf!=C.of)) goto L_11a724d5;
  /* 11a724cb push 5 */
  push32((uint32_t)(0x5u));
  /* 11a724cd call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a724d3u);
  /* 11a724d3 jmp 0x11a724dd */
  goto L_11a724dd;
L_11a724d5:;
  /* 11a724d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a724d7 call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a724ddu);
L_11a724dd:;
  /* 11a724dd pop ecx */
  ECX = (pop32());
  /* 11a724de push 0 */
  push32((uint32_t)(0x0u));
  /* 11a724e0 push 0x11a77ba0 */
  push32((uint32_t)(0x11a77ba0u));
  /* 11a724e5 call ebx */
  call_ind((uint32_t)(EBX), 0x11a724e7u);
  /* 11a724e7 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a724e9 call edi */
  call_ind((uint32_t)(EDI), 0x11a724ebu);
  /* 11a724eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a724ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a724f0 je 0x11a7250f */
  if (C.zf) goto L_11a7250f;
  /* 11a724f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a724f4 push 0x11a77e58 */
  push32((uint32_t)(0x11a77e58u));
  /* 11a724f9 call dword ptr [0x11a760e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e4))), 0x11a724ffu);
  /* 11a724ff pop ecx */
  ECX = (pop32());
  /* 11a72500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72502 pop ecx */
  ECX = (pop32());
  /* 11a72503 jle 0x11a7250f */
  if ((C.zf||C.sf!=C.of)) goto L_11a7250f;
  /* 11a72505 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72507 call dword ptr [0x11a760e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760e8))), 0x11a7250du);
  /* 11a7250d jmp 0x11a72517 */
  goto L_11a72517;
L_11a7250f:;
  /* 11a7250f push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72511 call dword ptr [0x11a760ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760ec))), 0x11a72517u);
L_11a72517:;
  /* 11a72517 pop ecx */
  ECX = (pop32());
L_11a72518:;
  /* 11a72518 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7251a call dword ptr [0x11a7614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7614c))), 0x11a72520u);
  /* 11a72520 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72525 mov ecx, 0x1f4 */
  ECX = (0x1f4u);
  /* 11a7252a imul eax, eax, 0x96 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x96u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a72530 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72532 push ecx */
  push32((uint32_t)(ECX));
  /* 11a72533 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a72535 call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a7253bu);
  /* 11a7253b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7253e:;
  /* 11a7253e cmp dword ptr [0x11a77b68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a77b68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72545 je 0x11a72e3f */
  if (C.zf) goto L_11a72e3f;
  /* 11a7254b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7254d call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a72553u);
  /* 11a72553 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72555 pop ecx */
  ECX = (pop32());
  /* 11a72556 mov ebx, 0x11a77e10 */
  EBX = (0x11a77e10u);
  /* 11a7255b je 0x11a72789 */
  if (C.zf) goto L_11a72789;
  /* 11a72561 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72566 mov ecx, dword ptr [0x11a77e70] */
  ECX = (r32((uint32_t)(0x11a77e70)));
  /* 11a7256c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7256f lea ecx, [ecx + eax*2] */
  ECX = ((uint32_t)(ECX + EAX*2));
  /* 11a72572 mov dword ptr [0x11a77e70], ecx */
  w32((uint32_t)(0x11a77e70), (ECX));
  /* 11a72578 jle 0x11a72595 */
  if ((C.zf||C.sf!=C.of)) goto L_11a72595;
  /* 11a7257a push 0x11a77548 */
  push32((uint32_t)(0x11a77548u));
  /* 11a7257f push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a72584 call esi */
  call_ind((uint32_t)(ESI), 0x11a72586u);
  /* 11a72586 push 0x11a77548 */
  push32((uint32_t)(0x11a77548u));
  /* 11a7258b push 0x11a77348 */
  push32((uint32_t)(0x11a77348u));
  /* 11a72590 call esi */
  call_ind((uint32_t)(ESI), 0x11a72592u);
  /* 11a72592 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72595:;
  /* 11a72595 mov esi, dword ptr [0x11a760f0] */
  ESI = (r32((uint32_t)(0x11a760f0)));
  /* 11a7259b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7259d push 0x11a77ec8 */
  push32((uint32_t)(0x11a77ec8u));
  /* 11a725a2 call esi */
  call_ind((uint32_t)(ESI), 0x11a725a4u);
  /* 11a725a4 pop ecx */
  ECX = (pop32());
  /* 11a725a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a725a7 pop ecx */
  ECX = (pop32());
  /* 11a725a8 jle 0x11a725b8 */
  if ((C.zf||C.sf!=C.of)) goto L_11a725b8;
  /* 11a725aa push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11a725af push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725b1 push 0x11a77ec8 */
  push32((uint32_t)(0x11a77ec8u));
  /* 11a725b6 jmp 0x11a7260d */
  goto L_11a7260d;
L_11a725b8:;
  /* 11a725b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725ba push 0x11a77ba8 */
  push32((uint32_t)(0x11a77ba8u));
  /* 11a725bf call esi */
  call_ind((uint32_t)(ESI), 0x11a725c1u);
  /* 11a725c1 pop ecx */
  ECX = (pop32());
  /* 11a725c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a725c4 pop ecx */
  ECX = (pop32());
  /* 11a725c5 jle 0x11a725d5 */
  if ((C.zf||C.sf!=C.of)) goto L_11a725d5;
  /* 11a725c7 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11a725cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725ce push 0x11a77ba8 */
  push32((uint32_t)(0x11a77ba8u));
  /* 11a725d3 jmp 0x11a7260d */
  goto L_11a7260d;
L_11a725d5:;
  /* 11a725d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725d7 push 0x11a77dc0 */
  push32((uint32_t)(0x11a77dc0u));
  /* 11a725dc call esi */
  call_ind((uint32_t)(ESI), 0x11a725deu);
  /* 11a725de pop ecx */
  ECX = (pop32());
  /* 11a725df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a725e1 pop ecx */
  ECX = (pop32());
  /* 11a725e2 jle 0x11a725f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a725f2;
  /* 11a725e4 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11a725e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725eb push 0x11a77dc0 */
  push32((uint32_t)(0x11a77dc0u));
  /* 11a725f0 jmp 0x11a7260d */
  goto L_11a7260d;
L_11a725f2:;
  /* 11a725f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a725f4 push 0x11a77ea8 */
  push32((uint32_t)(0x11a77ea8u));
  /* 11a725f9 call esi */
  call_ind((uint32_t)(ESI), 0x11a725fbu);
  /* 11a725fb pop ecx */
  ECX = (pop32());
  /* 11a725fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a725fe pop ecx */
  ECX = (pop32());
  /* 11a725ff jle 0x11a72620 */
  if ((C.zf||C.sf!=C.of)) goto L_11a72620;
  /* 11a72601 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11a72606 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72608 push 0x11a77ea8 */
  push32((uint32_t)(0x11a77ea8u));
L_11a7260d:;
  /* 11a7260d push 0x11a77e40 */
  push32((uint32_t)(0x11a77e40u));
  /* 11a72612 push 0x11a77f38 */
  push32((uint32_t)(0x11a77f38u));
  /* 11a72617 call dword ptr [0x11a760f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760f4))), 0x11a7261du);
  /* 11a7261d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72620:;
  /* 11a72620 mov esi, dword ptr [0x11a76138] */
  ESI = (r32((uint32_t)(0x11a76138)));
  /* 11a72626 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72628 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a7262d push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72632 push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a72637 call esi */
  call_ind((uint32_t)(ESI), 0x11a72639u);
  /* 11a72639 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7263b call edi */
  call_ind((uint32_t)(EDI), 0x11a7263du);
  /* 11a7263d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72640 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72642 jne 0x11a7265a */
  if (!C.zf) goto L_11a7265a;
  /* 11a72644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72646 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a7264b push 0x11a77ae8 */
  push32((uint32_t)(0x11a77ae8u));
  /* 11a72650 push 0x11a77da0 */
  push32((uint32_t)(0x11a77da0u));
  /* 11a72655 call esi */
  call_ind((uint32_t)(ESI), 0x11a72657u);
  /* 11a72657 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7265a:;
  /* 11a7265a mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a7265f and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a72664 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72668 jle 0x11a726e4 */
  if ((C.zf||C.sf!=C.of)) goto L_11a726e4;
L_11a7266a:;
  /* 11a7266a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7266c push 0x11a77d58 */
  push32((uint32_t)(0x11a77d58u));
  /* 11a72671 push 0x11a77e98 */
  push32((uint32_t)(0x11a77e98u));
  /* 11a72676 push 0x11a77dd0 */
  push32((uint32_t)(0x11a77dd0u));
  /* 11a7267b call esi */
  call_ind((uint32_t)(ESI), 0x11a7267du);
  /* 11a7267d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7267f push 0x11a77d58 */
  push32((uint32_t)(0x11a77d58u));
  /* 11a72684 push 0x11a77f40 */
  push32((uint32_t)(0x11a77f40u));
  /* 11a72689 push 0x11a77dd0 */
  push32((uint32_t)(0x11a77dd0u));
  /* 11a7268e call esi */
  call_ind((uint32_t)(ESI), 0x11a72690u);
  /* 11a72690 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72692 call edi */
  call_ind((uint32_t)(EDI), 0x11a72694u);
  /* 11a72694 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72697 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72699 jne 0x11a726d3 */
  if (!C.zf) goto L_11a726d3;
  /* 11a7269b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7269d push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a726a2 push 0x11a77ae0 */
  push32((uint32_t)(0x11a77ae0u));
  /* 11a726a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a726a8 call esi */
  call_ind((uint32_t)(ESI), 0x11a726aau);
  /* 11a726aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a726ac push 0x11a77d78 */
  push32((uint32_t)(0x11a77d78u));
  /* 11a726b1 push 0x11a77b48 */
  push32((uint32_t)(0x11a77b48u));
  /* 11a726b6 push 0x11a77dd8 */
  push32((uint32_t)(0x11a77dd8u));
  /* 11a726bb call esi */
  call_ind((uint32_t)(ESI), 0x11a726bdu);
  /* 11a726bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a726bf push 0x11a77d78 */
  push32((uint32_t)(0x11a77d78u));
  /* 11a726c4 push 0x11a77c28 */
  push32((uint32_t)(0x11a77c28u));
  /* 11a726c9 push 0x11a77dd8 */
  push32((uint32_t)(0x11a77dd8u));
  /* 11a726ce call esi */
  call_ind((uint32_t)(ESI), 0x11a726d0u);
  /* 11a726d0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a726d3:;
  /* 11a726d3 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a726d8 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a726dc add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a726de cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a726e2 jl 0x11a7266a */
  if ((C.sf!=C.of)) goto L_11a7266a;
L_11a726e4:;
  /* 11a726e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a726e6 push 0x11a77f38 */
  push32((uint32_t)(0x11a77f38u));
  /* 11a726eb push 0x11a77d58 */
  push32((uint32_t)(0x11a77d58u));
  /* 11a726f0 call 0x11a7108a */
  push32(0x11a726f5u); f_11a7108a();
  /* 11a726f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a726f7 push 0x11a77f38 */
  push32((uint32_t)(0x11a77f38u));
  /* 11a726fc push 0x11a77d78 */
  push32((uint32_t)(0x11a77d78u));
  /* 11a72701 call 0x11a7108a */
  push32(0x11a72706u); f_11a7108a();
  /* 11a72706 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a7270b call dword ptr [0x11a76134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76134))), 0x11a72711u);
  /* 11a72711 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72716 jne 0x11a7275b */
  if (!C.zf) goto L_11a7275b;
  /* 11a72718 push 0x11a77b28 */
  push32((uint32_t)(0x11a77b28u));
  /* 11a7271d call dword ptr [0x11a76134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76134))), 0x11a72723u);
  /* 11a72723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72725 pop ecx */
  ECX = (pop32());
  /* 11a72726 je 0x11a7275b */
  if (C.zf) goto L_11a7275b;
  /* 11a72728 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a7272d push 0x11a77b28 */
  push32((uint32_t)(0x11a77b28u));
  /* 11a72732 call dword ptr [0x11a76140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76140))), 0x11a72738u);
  /* 11a72738 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a7273d push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a72742 call dword ptr [0x11a76140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76140))), 0x11a72748u);
  /* 11a72748 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a7274d push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a72752 call dword ptr [0x11a76140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76140))), 0x11a72758u);
  /* 11a72758 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7275b:;
  /* 11a7275b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a7275d push 0x11a77f38 */
  push32((uint32_t)(0x11a77f38u));
  /* 11a72762 push 0x11a77d50 */
  push32((uint32_t)(0x11a77d50u));
  /* 11a72767 call 0x11a7108a */
  push32(0x11a7276cu); f_11a7108a();
  /* 11a7276c push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7276e pop eax */
  EAX = (pop32());
  /* 11a7276f sub eax, dword ptr [0x11a77b68] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a77b68))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72775 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a7277b push eax */
  push32((uint32_t)(EAX));
  /* 11a7277c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7277e call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a72784u);
  /* 11a72784 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72787 jmp 0x11a7278f */
  goto L_11a7278f;
L_11a72789:;
  /* 11a72789 mov esi, dword ptr [0x11a76138] */
  ESI = (r32((uint32_t)(0x11a76138)));
L_11a7278f:;
  /* 11a7278f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72791 call edi */
  call_ind((uint32_t)(EDI), 0x11a72793u);
  /* 11a72793 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72795 pop ecx */
  ECX = (pop32());
  /* 11a72796 je 0x11a728b0 */
  if (C.zf) goto L_11a728b0;
  /* 11a7279c push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7279e call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a727a4u);
  /* 11a727a4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a727a6 pop ecx */
  ECX = (pop32());
  /* 11a727a7 je 0x11a728b0 */
  if (C.zf) goto L_11a728b0;
  /* 11a727ad push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11a727af push 0x11a77db0 */
  push32((uint32_t)(0x11a77db0u));
  /* 11a727b4 push 0x11a77e28 */
  push32((uint32_t)(0x11a77e28u));
  /* 11a727b9 call 0x11a7108a */
  push32(0x11a727beu); f_11a7108a();
  /* 11a727be push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a727c3 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a727c8 call dword ptr [0x11a76140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76140))), 0x11a727ceu);
  /* 11a727ce push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a727d0 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a727d5 push 0x11a77de8 */
  push32((uint32_t)(0x11a77de8u));
  /* 11a727da push 0x11a77d80 */
  push32((uint32_t)(0x11a77d80u));
  /* 11a727df call esi */
  call_ind((uint32_t)(ESI), 0x11a727e1u);
  /* 11a727e1 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a727e6 and dword ptr [esp + 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x34)))&(0x0u); w32((uint32_t)(ESP + 0x34), (_r)); fl_logic(_r,32); }
  /* 11a727eb add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a727ed add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a727f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a727f2 jle 0x11a7281b */
  if ((C.zf||C.sf!=C.of)) goto L_11a7281b;
L_11a727f4:;
  /* 11a727f4 push 0xa */
  push32((uint32_t)(0xau));
  /* 11a727f6 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a727fb push 0x11a77f50 */
  push32((uint32_t)(0x11a77f50u));
  /* 11a72800 push 0x11a77d80 */
  push32((uint32_t)(0x11a77d80u));
  /* 11a72805 call esi */
  call_ind((uint32_t)(ESI), 0x11a72807u);
  /* 11a72807 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a7280c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7280f inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a72813 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72815 cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72819 jl 0x11a727f4 */
  if ((C.sf!=C.of)) goto L_11a727f4;
L_11a7281b:;
  /* 11a7281b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7281d call edi */
  call_ind((uint32_t)(EDI), 0x11a7281fu);
  /* 11a7281f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72821 pop ecx */
  ECX = (pop32());
  /* 11a72822 jne 0x11a72892 */
  if (!C.zf) goto L_11a72892;
  /* 11a72824 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a72826 push 0x11a77db8 */
  push32((uint32_t)(0x11a77db8u));
  /* 11a7282b push 0x11a77e20 */
  push32((uint32_t)(0x11a77e20u));
  /* 11a72830 call 0x11a7108a */
  push32(0x11a72835u); f_11a7108a();
  /* 11a72835 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a7283a push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a7283f call dword ptr [0x11a76140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76140))), 0x11a72845u);
  /* 11a72845 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a72847 push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a7284c push 0x11a77bf0 */
  push32((uint32_t)(0x11a77bf0u));
  /* 11a72851 push 0x11a77d90 */
  push32((uint32_t)(0x11a77d90u));
  /* 11a72856 call esi */
  call_ind((uint32_t)(ESI), 0x11a72858u);
  /* 11a72858 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a7285d and dword ptr [esp + 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x34)))&(0x0u); w32((uint32_t)(ESP + 0x34), (_r)); fl_logic(_r,32); }
  /* 11a72862 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72864 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a72869 jle 0x11a72892 */
  if ((C.zf||C.sf!=C.of)) goto L_11a72892;
L_11a7286b:;
  /* 11a7286b push 0xa */
  push32((uint32_t)(0xau));
  /* 11a7286d push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a72872 push 0x11a77e18 */
  push32((uint32_t)(0x11a77e18u));
  /* 11a72877 push 0x11a77d90 */
  push32((uint32_t)(0x11a77d90u));
  /* 11a7287c call esi */
  call_ind((uint32_t)(ESI), 0x11a7287eu);
  /* 11a7287e mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72883 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72886 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a7288a add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7288c cmp dword ptr [esp + 0x10], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72890 jl 0x11a7286b */
  if ((C.sf!=C.of)) goto L_11a7286b;
L_11a72892:;
  /* 11a72892 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11a72897 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a72899 call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a7289fu);
  /* 11a7289f mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
  /* 11a728a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a728a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a728a9 call esi */
  call_ind((uint32_t)(ESI), 0x11a728abu);
  /* 11a728ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a728ae jmp 0x11a728b6 */
  goto L_11a728b6;
L_11a728b0:;
  /* 11a728b0 mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
L_11a728b6:;
  /* 11a728b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a728b8 call edi */
  call_ind((uint32_t)(EDI), 0x11a728bau);
  /* 11a728ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a728bc pop ecx */
  ECX = (pop32());
  /* 11a728bd jne 0x11a729cb */
  if (!C.zf) goto L_11a729cb;
  /* 11a728c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a728c5 call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a728cbu);
  /* 11a728cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a728cd pop ecx */
  ECX = (pop32());
  /* 11a728ce je 0x11a729cb */
  if (C.zf) goto L_11a729cb;
  /* 11a728d4 push 0x11a77c68 */
  push32((uint32_t)(0x11a77c68u));
  /* 11a728d9 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a728de call 0x11a71072 */
  push32(0x11a728e3u); f_11a71072();
  /* 11a728e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a728e5 call edi */
  call_ind((uint32_t)(EDI), 0x11a728e7u);
  /* 11a728e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a728ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a728ec push 2 */
  push32((uint32_t)(0x2u));
  /* 11a728ee je 0x11a7290b */
  if (C.zf) goto L_11a7290b;
  /* 11a728f0 push 0x11a77ed8 */
  push32((uint32_t)(0x11a77ed8u));
  /* 11a728f5 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a728fa call 0x11a71012 */
  push32(0x11a728ffu); f_11a71012();
  /* 11a728ff pop ecx */
  ECX = (pop32());
  /* 11a72900 push eax */
  push32((uint32_t)(EAX));
  /* 11a72901 call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a72907u);
  /* 11a72907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72909 jmp 0x11a72940 */
  goto L_11a72940;
L_11a7290b:;
  /* 11a7290b push 0x11a77ee0 */
  push32((uint32_t)(0x11a77ee0u));
  /* 11a72910 push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a72915 call 0x11a71012 */
  push32(0x11a7291au); f_11a71012();
  /* 11a7291a pop ecx */
  ECX = (pop32());
  /* 11a7291b push eax */
  push32((uint32_t)(EAX));
  /* 11a7291c call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a72922u);
  /* 11a72922 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72925 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a72927 push 0x11a77ee8 */
  push32((uint32_t)(0x11a77ee8u));
  /* 11a7292c push 0x11a77c30 */
  push32((uint32_t)(0x11a77c30u));
  /* 11a72931 call 0x11a71012 */
  push32(0x11a72936u); f_11a71012();
  /* 11a72936 pop ecx */
  ECX = (pop32());
  /* 11a72937 push eax */
  push32((uint32_t)(EAX));
  /* 11a72938 call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a7293eu);
  /* 11a7293e push 1 */
  push32((uint32_t)(0x1u));
L_11a72940:;
  /* 11a72940 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a72942 call esi */
  call_ind((uint32_t)(ESI), 0x11a72944u);
  /* 11a72944 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72947 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72949 call edi */
  call_ind((uint32_t)(EDI), 0x11a7294bu);
  /* 11a7294b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7294d pop ecx */
  ECX = (pop32());
  /* 11a7294e jne 0x11a729a7 */
  if (!C.zf) goto L_11a729a7;
  /* 11a72950 push 0x11a77c60 */
  push32((uint32_t)(0x11a77c60u));
  /* 11a72955 push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a7295a call 0x11a71072 */
  push32(0x11a7295fu); f_11a71072();
  /* 11a7295f push 4 */
  push32((uint32_t)(0x4u));
  /* 11a72961 call edi */
  call_ind((uint32_t)(EDI), 0x11a72963u);
  /* 11a72963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72966 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72968 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7296a je 0x11a72987 */
  if (C.zf) goto L_11a72987;
  /* 11a7296c push 0x11a77ef8 */
  push32((uint32_t)(0x11a77ef8u));
  /* 11a72971 push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a72976 call 0x11a71012 */
  push32(0x11a7297bu); f_11a71012();
  /* 11a7297b pop ecx */
  ECX = (pop32());
  /* 11a7297c push eax */
  push32((uint32_t)(EAX));
  /* 11a7297d call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a72983u);
  /* 11a72983 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72985 jmp 0x11a729a0 */
  goto L_11a729a0;
L_11a72987:;
  /* 11a72987 push 0x11a77f08 */
  push32((uint32_t)(0x11a77f08u));
  /* 11a7298c push 0x11a77c38 */
  push32((uint32_t)(0x11a77c38u));
  /* 11a72991 call 0x11a71012 */
  push32(0x11a72996u); f_11a71012();
  /* 11a72996 pop ecx */
  ECX = (pop32());
  /* 11a72997 push eax */
  push32((uint32_t)(EAX));
  /* 11a72998 call dword ptr [0x11a760c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760c4))), 0x11a7299eu);
  /* 11a7299e push 1 */
  push32((uint32_t)(0x1u));
L_11a729a0:;
  /* 11a729a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a729a2 call esi */
  call_ind((uint32_t)(ESI), 0x11a729a4u);
  /* 11a729a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a729a7:;
  /* 11a729a7 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a729ac mov ecx, 0xbb80 */
  ECX = (0xbb80u);
  /* 11a729b1 imul eax, eax, 0x2af8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2af8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a729b7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a729b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a729ba push 3 */
  push32((uint32_t)(0x3u));
  /* 11a729bc call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a729c2u);
  /* 11a729c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a729c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a729c6 call esi */
  call_ind((uint32_t)(ESI), 0x11a729c8u);
  /* 11a729c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a729cb:;
  /* 11a729cb push 5 */
  push32((uint32_t)(0x5u));
  /* 11a729cd call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a729d3u);
  /* 11a729d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a729d5 pop ecx */
  ECX = (pop32());
  /* 11a729d6 je 0x11a72e45 */
  if (C.zf) goto L_11a72e45;
  /* 11a729dc push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a729de call edi */
  call_ind((uint32_t)(EDI), 0x11a729e0u);
  /* 11a729e0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a729e2 pop ecx */
  ECX = (pop32());
  /* 11a729e3 je 0x11a72bcb */
  if (C.zf) goto L_11a72bcb;
  /* 11a729e9 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a729ef mov edi, 0x11a77c88 */
  EDI = (0x11a77c88u);
  /* 11a729f4 mov esi, 0x11a77e08 */
  ESI = (0x11a77e08u);
  /* 11a729f9 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a729fb push edi */
  push32((uint32_t)(EDI));
  /* 11a729fc push 0x11a77ed0 */
  push32((uint32_t)(0x11a77ed0u));
  /* 11a72a01 push esi */
  push32((uint32_t)(ESI));
  /* 11a72a02 push 0x11a77b08 */
  push32((uint32_t)(0x11a77b08u));
  /* 11a72a07 call 0x11a710c8 */
  push32(0x11a72a0cu); f_11a710c8();
  /* 11a72a0c push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72a12 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72a14 push edi */
  push32((uint32_t)(EDI));
  /* 11a72a15 mov edi, 0x11a77bb0 */
  EDI = (0x11a77bb0u);
  /* 11a72a1a push edi */
  push32((uint32_t)(EDI));
  /* 11a72a1b push esi */
  push32((uint32_t)(ESI));
  /* 11a72a1c push 0x11a77b08 */
  push32((uint32_t)(0x11a77b08u));
  /* 11a72a21 call 0x11a710c8 */
  push32(0x11a72a26u); f_11a710c8();
  /* 11a72a26 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72a2c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72a2e push 0x11a77bf8 */
  push32((uint32_t)(0x11a77bf8u));
  /* 11a72a33 push edi */
  push32((uint32_t)(EDI));
  /* 11a72a34 push esi */
  push32((uint32_t)(ESI));
  /* 11a72a35 push 0x11a77f60 */
  push32((uint32_t)(0x11a77f60u));
  /* 11a72a3a call 0x11a710c8 */
  push32(0x11a72a3fu); f_11a710c8();
  /* 11a72a3f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72a42 mov edi, 0x11a77c10 */
  EDI = (0x11a77c10u);
  /* 11a72a47 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72a4d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72a4f push 0x11a77d20 */
  push32((uint32_t)(0x11a77d20u));
  /* 11a72a54 push 0x11a77f58 */
  push32((uint32_t)(0x11a77f58u));
  /* 11a72a59 push edi */
  push32((uint32_t)(EDI));
  /* 11a72a5a push 0x11a77bc0 */
  push32((uint32_t)(0x11a77bc0u));
  /* 11a72a5f call 0x11a710c8 */
  push32(0x11a72a64u); f_11a710c8();
  /* 11a72a64 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72a6a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72a6c push 0x11a77cd0 */
  push32((uint32_t)(0x11a77cd0u));
  /* 11a72a71 push 0x11a77ce0 */
  push32((uint32_t)(0x11a77ce0u));
  /* 11a72a76 push edi */
  push32((uint32_t)(EDI));
  /* 11a72a77 push 0x11a77b50 */
  push32((uint32_t)(0x11a77b50u));
  /* 11a72a7c call 0x11a710c8 */
  push32(0x11a72a81u); f_11a710c8();
  /* 11a72a81 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72a86 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72a87 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72a89 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72a8b push eax */
  push32((uint32_t)(EAX));
  /* 11a72a8c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72a8e push 0x11a77cd0 */
  push32((uint32_t)(0x11a77cd0u));
  /* 11a72a93 push 0x11a77e78 */
  push32((uint32_t)(0x11a77e78u));
  /* 11a72a98 push 0x11a77b38 */
  push32((uint32_t)(0x11a77b38u));
  /* 11a72a9d push 0x11a77b50 */
  push32((uint32_t)(0x11a77b50u));
  /* 11a72aa2 call 0x11a710c8 */
  push32(0x11a72aa7u); f_11a710c8();
  /* 11a72aa7 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72aac add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72aaf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72ab0 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72ab2 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72ab4 push eax */
  push32((uint32_t)(EAX));
  /* 11a72ab5 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a72ab7 push 0x11a77f20 */
  push32((uint32_t)(0x11a77f20u));
  /* 11a72abc push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72ac1 push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a72ac6 push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a72acb call 0x11a710c8 */
  push32(0x11a72ad0u); f_11a710c8();
  /* 11a72ad0 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72ad5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72ad6 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72ad8 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72ada push eax */
  push32((uint32_t)(EAX));
  /* 11a72adb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a72add push 0x11a77f20 */
  push32((uint32_t)(0x11a77f20u));
  /* 11a72ae2 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72ae7 push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a72aec push 0x11a77c40 */
  push32((uint32_t)(0x11a77c40u));
  /* 11a72af1 call 0x11a710c8 */
  push32(0x11a72af6u); f_11a710c8();
  /* 11a72af6 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72afb cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72afc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72afe sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72b00 push eax */
  push32((uint32_t)(EAX));
  /* 11a72b01 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a72b03 push 0x11a77f18 */
  push32((uint32_t)(0x11a77f18u));
  /* 11a72b08 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72b0d push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a72b12 push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a72b17 call 0x11a710c8 */
  push32(0x11a72b1cu); f_11a710c8();
  /* 11a72b1c mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72b21 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72b24 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72b25 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72b27 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72b29 push eax */
  push32((uint32_t)(EAX));
  /* 11a72b2a push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a72b2c push 0x11a77f18 */
  push32((uint32_t)(0x11a77f18u));
  /* 11a72b31 push 0x11a77ef0 */
  push32((uint32_t)(0x11a77ef0u));
  /* 11a72b36 push 0x11a77d98 */
  push32((uint32_t)(0x11a77d98u));
  /* 11a72b3b push 0x11a77c48 */
  push32((uint32_t)(0x11a77c48u));
  /* 11a72b40 call 0x11a710c8 */
  push32(0x11a72b45u); f_11a710c8();
  /* 11a72b45 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72b4b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72b4d push 0x11a77c98 */
  push32((uint32_t)(0x11a77c98u));
  /* 11a72b52 push 0x11a77ed0 */
  push32((uint32_t)(0x11a77ed0u));
  /* 11a72b57 push esi */
  push32((uint32_t)(ESI));
  /* 11a72b58 push 0x11a77b18 */
  push32((uint32_t)(0x11a77b18u));
  /* 11a72b5d call 0x11a710c8 */
  push32(0x11a72b62u); f_11a710c8();
  /* 11a72b62 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72b68 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72b6a push 0x11a77c00 */
  push32((uint32_t)(0x11a77c00u));
  /* 11a72b6f push 0x11a77bb0 */
  push32((uint32_t)(0x11a77bb0u));
  /* 11a72b74 push esi */
  push32((uint32_t)(ESI));
  /* 11a72b75 push 0x11a77f68 */
  push32((uint32_t)(0x11a77f68u));
  /* 11a72b7a call 0x11a710c8 */
  push32(0x11a72b7fu); f_11a710c8();
  /* 11a72b7f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72b82 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72b88 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72b8a push 0x11a77cd8 */
  push32((uint32_t)(0x11a77cd8u));
  /* 11a72b8f push 0x11a77ce0 */
  push32((uint32_t)(0x11a77ce0u));
  /* 11a72b94 push edi */
  push32((uint32_t)(EDI));
  /* 11a72b95 push 0x11a77b58 */
  push32((uint32_t)(0x11a77b58u));
  /* 11a72b9a call 0x11a710c8 */
  push32(0x11a72b9fu); f_11a710c8();
  /* 11a72b9f push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72ba5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72ba7 push 0x11a77d28 */
  push32((uint32_t)(0x11a77d28u));
  /* 11a72bac push 0x11a77f58 */
  push32((uint32_t)(0x11a77f58u));
  /* 11a72bb1 push edi */
  push32((uint32_t)(EDI));
  /* 11a72bb2 push 0x11a77bc8 */
  push32((uint32_t)(0x11a77bc8u));
  /* 11a72bb7 call 0x11a710c8 */
  push32(0x11a72bbcu); f_11a710c8();
  /* 11a72bbc mov edi, dword ptr [0x11a760b0] */
  EDI = (r32((uint32_t)(0x11a760b0)));
  /* 11a72bc2 mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
  /* 11a72bc8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72bcb:;
  /* 11a72bcb push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72bcd call edi */
  call_ind((uint32_t)(EDI), 0x11a72bcfu);
  /* 11a72bcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72bd1 pop ecx */
  ECX = (pop32());
  /* 11a72bd2 jne 0x11a72e2e */
  if (!C.zf) goto L_11a72e2e;
  /* 11a72bd8 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a72bda call edi */
  call_ind((uint32_t)(EDI), 0x11a72bdcu);
  /* 11a72bdc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72bde pop ecx */
  ECX = (pop32());
  /* 11a72bdf je 0x11a72e2e */
  if (C.zf) goto L_11a72e2e;
  /* 11a72be5 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72bea mov esi, 0x11a77ae8 */
  ESI = (0x11a77ae8u);
  /* 11a72bef cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72bf0 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72bf2 mov edi, 0x11a77da0 */
  EDI = (0x11a77da0u);
  /* 11a72bf7 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72bf9 push eax */
  push32((uint32_t)(EAX));
  /* 11a72bfa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a72bfc push 0x11a77f30 */
  push32((uint32_t)(0x11a77f30u));
  /* 11a72c01 push esi */
  push32((uint32_t)(ESI));
  /* 11a72c02 push edi */
  push32((uint32_t)(EDI));
  /* 11a72c03 push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a72c08 call 0x11a710c8 */
  push32(0x11a72c0du); f_11a710c8();
  /* 11a72c0d mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72c12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72c13 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72c15 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72c17 push eax */
  push32((uint32_t)(EAX));
  /* 11a72c18 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11a72c1a push 0x11a77f30 */
  push32((uint32_t)(0x11a77f30u));
  /* 11a72c1f push esi */
  push32((uint32_t)(ESI));
  /* 11a72c20 push edi */
  push32((uint32_t)(EDI));
  /* 11a72c21 push 0x11a77c50 */
  push32((uint32_t)(0x11a77c50u));
  /* 11a72c26 call 0x11a710c8 */
  push32(0x11a72c2bu); f_11a710c8();
  /* 11a72c2b mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72c30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72c31 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72c33 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72c35 push eax */
  push32((uint32_t)(EAX));
  /* 11a72c36 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a72c38 push 0x11a77f28 */
  push32((uint32_t)(0x11a77f28u));
  /* 11a72c3d push esi */
  push32((uint32_t)(ESI));
  /* 11a72c3e push edi */
  push32((uint32_t)(EDI));
  /* 11a72c3f push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a72c44 call 0x11a710c8 */
  push32(0x11a72c49u); f_11a710c8();
  /* 11a72c49 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72c4e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72c51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72c52 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72c54 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72c56 push eax */
  push32((uint32_t)(EAX));
  /* 11a72c57 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11a72c59 push 0x11a77f28 */
  push32((uint32_t)(0x11a77f28u));
  /* 11a72c5e push esi */
  push32((uint32_t)(ESI));
  /* 11a72c5f push edi */
  push32((uint32_t)(EDI));
  /* 11a72c60 push 0x11a77c58 */
  push32((uint32_t)(0x11a77c58u));
  /* 11a72c65 call 0x11a710c8 */
  push32(0x11a72c6au); f_11a710c8();
  /* 11a72c6a push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72c70 mov esi, 0x11a77cb0 */
  ESI = (0x11a77cb0u);
  /* 11a72c75 mov edi, 0x11a77b28 */
  EDI = (0x11a77b28u);
  /* 11a72c7a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72c7c push esi */
  push32((uint32_t)(ESI));
  /* 11a72c7d push 0x11a77f10 */
  push32((uint32_t)(0x11a77f10u));
  /* 11a72c82 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72c83 push edi */
  push32((uint32_t)(EDI));
  /* 11a72c84 call 0x11a710c8 */
  push32(0x11a72c89u); f_11a710c8();
  /* 11a72c89 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72c8f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72c91 push esi */
  push32((uint32_t)(ESI));
  /* 11a72c92 push 0x11a77ae0 */
  push32((uint32_t)(0x11a77ae0u));
  /* 11a72c97 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72c98 push edi */
  push32((uint32_t)(EDI));
  /* 11a72c99 call 0x11a710c8 */
  push32(0x11a72c9eu); f_11a710c8();
  /* 11a72c9e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72ca1 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72ca7 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72ca9 push esi */
  push32((uint32_t)(ESI));
  /* 11a72caa mov esi, 0x11a77e00 */
  ESI = (0x11a77e00u);
  /* 11a72caf push esi */
  push32((uint32_t)(ESI));
  /* 11a72cb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72cb1 push edi */
  push32((uint32_t)(EDI));
  /* 11a72cb2 call 0x11a710c8 */
  push32(0x11a72cb7u); f_11a710c8();
  /* 11a72cb7 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72cbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72cbf push 0x11a77c08 */
  push32((uint32_t)(0x11a77c08u));
  /* 11a72cc4 push esi */
  push32((uint32_t)(ESI));
  /* 11a72cc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72cc6 push 0x11a77f70 */
  push32((uint32_t)(0x11a77f70u));
  /* 11a72ccb call 0x11a710c8 */
  push32(0x11a72cd0u); f_11a710c8();
  /* 11a72cd0 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72cd6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72cd8 push 0x11a77d30 */
  push32((uint32_t)(0x11a77d30u));
  /* 11a72cdd mov edi, 0x11a77c18 */
  EDI = (0x11a77c18u);
  /* 11a72ce2 push 0x11a77d60 */
  push32((uint32_t)(0x11a77d60u));
  /* 11a72ce7 push edi */
  push32((uint32_t)(EDI));
  /* 11a72ce8 push 0x11a77bd0 */
  push32((uint32_t)(0x11a77bd0u));
  /* 11a72ced call 0x11a710c8 */
  push32(0x11a72cf2u); f_11a710c8();
  /* 11a72cf2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72cf5 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72cfb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72cfd push 0x11a77ce8 */
  push32((uint32_t)(0x11a77ce8u));
  /* 11a72d02 push 0x11a77eb0 */
  push32((uint32_t)(0x11a77eb0u));
  /* 11a72d07 push edi */
  push32((uint32_t)(EDI));
  /* 11a72d08 push 0x11a77b60 */
  push32((uint32_t)(0x11a77b60u));
  /* 11a72d0d call 0x11a710c8 */
  push32(0x11a72d12u); f_11a710c8();
  /* 11a72d12 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72d17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a72d18 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a72d1a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a72d1c push eax */
  push32((uint32_t)(EAX));
  /* 11a72d1d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72d1f push 0x11a77ce8 */
  push32((uint32_t)(0x11a77ce8u));
  /* 11a72d24 push 0x11a77be0 */
  push32((uint32_t)(0x11a77be0u));
  /* 11a72d29 push 0x11a77b20 */
  push32((uint32_t)(0x11a77b20u));
  /* 11a72d2e push 0x11a77b60 */
  push32((uint32_t)(0x11a77b60u));
  /* 11a72d33 call 0x11a710c8 */
  push32(0x11a72d38u); f_11a710c8();
  /* 11a72d38 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72d3e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72d40 push 0x11a77cb8 */
  push32((uint32_t)(0x11a77cb8u));
  /* 11a72d45 push 0x11a77f10 */
  push32((uint32_t)(0x11a77f10u));
  /* 11a72d4a push ebx */
  push32((uint32_t)(EBX));
  /* 11a72d4b push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a72d50 call 0x11a710c8 */
  push32(0x11a72d55u); f_11a710c8();
  /* 11a72d55 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72d58 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72d5e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72d60 push 0x11a77cb8 */
  push32((uint32_t)(0x11a77cb8u));
  /* 11a72d65 push esi */
  push32((uint32_t)(ESI));
  /* 11a72d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72d67 push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a72d6c call 0x11a710c8 */
  push32(0x11a72d71u); f_11a710c8();
  /* 11a72d71 mov eax, dword ptr [0x11a77e70] */
  EAX = (r32((uint32_t)(0x11a77e70)));
  /* 11a72d76 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72d78 push eax */
  push32((uint32_t)(EAX));
  /* 11a72d79 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72d7b push 0x11a77cb8 */
  push32((uint32_t)(0x11a77cb8u));
  /* 11a72d80 push 0x11a77ae0 */
  push32((uint32_t)(0x11a77ae0u));
  /* 11a72d85 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72d86 push 0x11a77b30 */
  push32((uint32_t)(0x11a77b30u));
  /* 11a72d8b call 0x11a710c8 */
  push32(0x11a72d90u); f_11a710c8();
  /* 11a72d90 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72d96 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72d98 push 0x11a77d38 */
  push32((uint32_t)(0x11a77d38u));
  /* 11a72d9d push 0x11a77d60 */
  push32((uint32_t)(0x11a77d60u));
  /* 11a72da2 push edi */
  push32((uint32_t)(EDI));
  /* 11a72da3 push 0x11a77bd8 */
  push32((uint32_t)(0x11a77bd8u));
  /* 11a72da8 call 0x11a710c8 */
  push32(0x11a72dadu); f_11a710c8();
  /* 11a72dad add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72db0 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72db6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72db8 push 0x11a77cc0 */
  push32((uint32_t)(0x11a77cc0u));
  /* 11a72dbd push 0x11a77f10 */
  push32((uint32_t)(0x11a77f10u));
  /* 11a72dc2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72dc3 push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a72dc8 call 0x11a710c8 */
  push32(0x11a72dcdu); f_11a710c8();
  /* 11a72dcd push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72dd3 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72dd5 push 0x11a77cc0 */
  push32((uint32_t)(0x11a77cc0u));
  /* 11a72dda push esi */
  push32((uint32_t)(ESI));
  /* 11a72ddb push ebx */
  push32((uint32_t)(EBX));
  /* 11a72ddc push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a72de1 call 0x11a710c8 */
  push32(0x11a72de6u); f_11a710c8();
  /* 11a72de6 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72dec push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72dee push 0x11a77cc0 */
  push32((uint32_t)(0x11a77cc0u));
  /* 11a72df3 push esi */
  push32((uint32_t)(ESI));
  /* 11a72df4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a72df5 push 0x11a77b40 */
  push32((uint32_t)(0x11a77b40u));
  /* 11a72dfa call 0x11a710c8 */
  push32(0x11a72dffu); f_11a710c8();
  /* 11a72dff add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72e02 push dword ptr [0x11a77e70] */
  push32((uint32_t)(r32((uint32_t)(0x11a77e70))));
  /* 11a72e08 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a72e0a push 0x11a77d40 */
  push32((uint32_t)(0x11a77d40u));
  /* 11a72e0f push 0x11a77d60 */
  push32((uint32_t)(0x11a77d60u));
  /* 11a72e14 push edi */
  push32((uint32_t)(EDI));
  /* 11a72e15 push 0x11a77be8 */
  push32((uint32_t)(0x11a77be8u));
  /* 11a72e1a call 0x11a710c8 */
  push32(0x11a72e1fu); f_11a710c8();
  /* 11a72e1f mov edi, dword ptr [0x11a760b0] */
  EDI = (r32((uint32_t)(0x11a760b0)));
  /* 11a72e25 mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
  /* 11a72e2b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a72e2e:;
  /* 11a72e2e push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11a72e33 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a72e35 call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a72e3bu);
  /* 11a72e3b pop ecx */
  ECX = (pop32());
  /* 11a72e3c pop ecx */
  ECX = (pop32());
  /* 11a72e3d jmp 0x11a72e45 */
  goto L_11a72e45;
L_11a72e3f:;
  /* 11a72e3f mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
L_11a72e45:;
  /* 11a72e45 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a72e47 call edi */
  call_ind((uint32_t)(EDI), 0x11a72e49u);
  /* 11a72e49 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e4b pop ecx */
  ECX = (pop32());
  /* 11a72e4c je 0x11a72e98 */
  if (C.zf) goto L_11a72e98;
  /* 11a72e4e mov ebx, dword ptr [0x11a760f8] */
  EBX = (r32((uint32_t)(0x11a760f8)));
  /* 11a72e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72e56 push 0x11a77df8 */
  push32((uint32_t)(0x11a77df8u));
  /* 11a72e5b call ebx */
  call_ind((uint32_t)(EBX), 0x11a72e5du);
  /* 11a72e5d pop ecx */
  ECX = (pop32());
  /* 11a72e5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e60 pop ecx */
  ECX = (pop32());
  /* 11a72e61 jne 0x11a72e90 */
  if (!C.zf) goto L_11a72e90;
  /* 11a72e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72e65 push 0x11a77ec0 */
  push32((uint32_t)(0x11a77ec0u));
  /* 11a72e6a call ebx */
  call_ind((uint32_t)(EBX), 0x11a72e6cu);
  /* 11a72e6c pop ecx */
  ECX = (pop32());
  /* 11a72e6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e6f pop ecx */
  ECX = (pop32());
  /* 11a72e70 jne 0x11a72e90 */
  if (!C.zf) goto L_11a72e90;
  /* 11a72e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72e74 push 0x11a77c20 */
  push32((uint32_t)(0x11a77c20u));
  /* 11a72e79 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72e7bu);
  /* 11a72e7b pop ecx */
  ECX = (pop32());
  /* 11a72e7c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e7e pop ecx */
  ECX = (pop32());
  /* 11a72e7f jne 0x11a72e90 */
  if (!C.zf) goto L_11a72e90;
  /* 11a72e81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72e83 push 0x11a77f48 */
  push32((uint32_t)(0x11a77f48u));
  /* 11a72e88 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72e8au);
  /* 11a72e8a pop ecx */
  ECX = (pop32());
  /* 11a72e8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e8d pop ecx */
  ECX = (pop32());
  /* 11a72e8e je 0x11a72e98 */
  if (C.zf) goto L_11a72e98;
L_11a72e90:;
  /* 11a72e90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72e92 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a72e94 call esi */
  call_ind((uint32_t)(ESI), 0x11a72e96u);
  /* 11a72e96 pop ecx */
  ECX = (pop32());
  /* 11a72e97 pop ecx */
  ECX = (pop32());
L_11a72e98:;
  /* 11a72e98 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72e9a call edi */
  call_ind((uint32_t)(EDI), 0x11a72e9cu);
  /* 11a72e9c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72e9e pop ecx */
  ECX = (pop32());
  /* 11a72e9f je 0x11a72f5c */
  if (C.zf) goto L_11a72f5c;
  /* 11a72ea5 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a72ea7 call edi */
  call_ind((uint32_t)(EDI), 0x11a72ea9u);
  /* 11a72ea9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72eab pop ecx */
  ECX = (pop32());
  /* 11a72eac je 0x11a72f54 */
  if (C.zf) goto L_11a72f54;
  /* 11a72eb2 mov ebx, dword ptr [0x11a760e4] */
  EBX = (r32((uint32_t)(0x11a760e4)));
  /* 11a72eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72eba push 0x11a77af8 */
  push32((uint32_t)(0x11a77af8u));
  /* 11a72ebf call ebx */
  call_ind((uint32_t)(EBX), 0x11a72ec1u);
  /* 11a72ec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72ec3 push 0x11a77d18 */
  push32((uint32_t)(0x11a77d18u));
  /* 11a72ec8 mov esi, eax */
  ESI = (EAX);
  /* 11a72eca call ebx */
  call_ind((uint32_t)(EBX), 0x11a72eccu);
  /* 11a72ecc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72ece push 0x11a77d10 */
  push32((uint32_t)(0x11a77d10u));
  /* 11a72ed3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72ed5 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72ed7u);
  /* 11a72ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72ed9 push 0x11a77d00 */
  push32((uint32_t)(0x11a77d00u));
  /* 11a72ede add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72ee0 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72ee2u);
  /* 11a72ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72ee4 push 0x11a77cf8 */
  push32((uint32_t)(0x11a77cf8u));
  /* 11a72ee9 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72eeb call ebx */
  call_ind((uint32_t)(EBX), 0x11a72eedu);
  /* 11a72eed add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72eef add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72ef2 cmp esi, 0x32 */
  { uint32_t _a=(ESI),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72ef5 jle 0x11a72f6a */
  if ((C.zf||C.sf!=C.of)) goto L_11a72f6a;
  /* 11a72ef7 mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
L_11a72efd:;
  /* 11a72efd mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72f02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a72f03 imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a72f09 push eax */
  push32((uint32_t)(EAX));
  /* 11a72f0a push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f0e call ebp */
  call_ind((uint32_t)(EBP), 0x11a72f10u);
  /* 11a72f10 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72f15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a72f16 imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a72f1c push eax */
  push32((uint32_t)(EAX));
  /* 11a72f1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f1f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f21 call ebp */
  call_ind((uint32_t)(EBP), 0x11a72f23u);
  /* 11a72f23 push dword ptr [0x11a77b68] */
  push32((uint32_t)(r32((uint32_t)(0x11a77b68))));
  /* 11a72f29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f2f push 0x11a7753c */
  push32((uint32_t)(0x11a7753cu));
  /* 11a72f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a72f36 call dword ptr [0x11a760cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760cc))), 0x11a72f3cu);
  /* 11a72f3c mov ebp, dword ptr [0x11a760d0] */
  EBP = (r32((uint32_t)(0x11a760d0)));
  /* 11a72f42 push 0x11a77534 */
  push32((uint32_t)(0x11a77534u));
  /* 11a72f47 call ebp */
  call_ind((uint32_t)(EBP), 0x11a72f49u);
  /* 11a72f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72f4b push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72f4d call esi */
  call_ind((uint32_t)(ESI), 0x11a72f4fu);
  /* 11a72f4f add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72f52 jmp 0x11a72f76 */
  goto L_11a72f76;
L_11a72f54:;
  /* 11a72f54 mov ebx, dword ptr [0x11a760e4] */
  EBX = (r32((uint32_t)(0x11a760e4)));
  /* 11a72f5a jmp 0x11a72efd */
  goto L_11a72efd;
L_11a72f5c:;
  /* 11a72f5c mov ebx, dword ptr [0x11a760e4] */
  EBX = (r32((uint32_t)(0x11a760e4)));
  /* 11a72f62 mov ebp, dword ptr [0x11a760d0] */
  EBP = (r32((uint32_t)(0x11a760d0)));
  /* 11a72f68 jmp 0x11a72f76 */
  goto L_11a72f76;
L_11a72f6a:;
  /* 11a72f6a mov ebp, dword ptr [0x11a760d0] */
  EBP = (r32((uint32_t)(0x11a760d0)));
  /* 11a72f70 mov esi, dword ptr [0x11a760d8] */
  ESI = (r32((uint32_t)(0x11a760d8)));
L_11a72f76:;
  /* 11a72f76 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a72f78 call edi */
  call_ind((uint32_t)(EDI), 0x11a72f7au);
  /* 11a72f7a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72f7c pop ecx */
  ECX = (pop32());
  /* 11a72f7d je 0x11a73142 */
  if (C.zf) goto L_11a73142;
  /* 11a72f83 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11a72f85 call edi */
  call_ind((uint32_t)(EDI), 0x11a72f87u);
  /* 11a72f87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a72f89 pop ecx */
  ECX = (pop32());
  /* 11a72f8a je 0x11a72fca */
  if (C.zf) goto L_11a72fca;
  /* 11a72f8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72f8e push 0x11a77d18 */
  push32((uint32_t)(0x11a77d18u));
  /* 11a72f93 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72f95u);
  /* 11a72f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72f97 push 0x11a77d10 */
  push32((uint32_t)(0x11a77d10u));
  /* 11a72f9c mov ebp, eax */
  EBP = (EAX);
  /* 11a72f9e call ebx */
  call_ind((uint32_t)(EBX), 0x11a72fa0u);
  /* 11a72fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72fa2 push 0x11a77d00 */
  push32((uint32_t)(0x11a77d00u));
  /* 11a72fa7 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72fa9 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72fabu);
  /* 11a72fab push 0 */
  push32((uint32_t)(0x0u));
  /* 11a72fad push 0x11a77cf8 */
  push32((uint32_t)(0x11a77cf8u));
  /* 11a72fb2 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72fb4 call ebx */
  call_ind((uint32_t)(EBX), 0x11a72fb6u);
  /* 11a72fb6 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72fb8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72fbb cmp ebp, 0x32 */
  { uint32_t _a=(EBP),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a72fbe mov ebp, dword ptr [0x11a760d0] */
  EBP = (r32((uint32_t)(0x11a760d0)));
  /* 11a72fc4 jle 0x11a73142 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73142;
L_11a72fca:;
  /* 11a72fca mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72fcf and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a72fd4 lea ecx, [eax + eax*4 + 0x19] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x19));
  /* 11a72fd8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a72fda jle 0x11a73008 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73008;
L_11a72fdc:;
  /* 11a72fdc push 3 */
  push32((uint32_t)(0x3u));
  /* 11a72fde push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a72fe3 push 0x11a77b10 */
  push32((uint32_t)(0x11a77b10u));
  /* 11a72fe8 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a72fed call 0x11a710a1 */
  push32(0x11a72ff2u); f_11a710a1();
  /* 11a72ff2 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a72ff7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a72ffa inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a72ffe lea ecx, [eax + eax*4 + 0x19] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x19));
  /* 11a73002 cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73006 jl 0x11a72fdc */
  if ((C.sf!=C.of)) goto L_11a72fdc;
L_11a73008:;
  /* 11a73008 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a7300b and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a73010 imul ecx, ecx, 0x1e */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1eu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a73013 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a73015 jle 0x11a73056 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73056;
L_11a73017:;
  /* 11a73017 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a73019 push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a7301e push 0x11a77bb8 */
  push32((uint32_t)(0x11a77bb8u));
  /* 11a73023 push 0x11a77c80 */
  push32((uint32_t)(0x11a77c80u));
  /* 11a73028 call 0x11a710a1 */
  push32(0x11a7302du); f_11a710a1();
  /* 11a7302d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a7302f push 0x11a77e48 */
  push32((uint32_t)(0x11a77e48u));
  /* 11a73034 push 0x11a77c80 */
  push32((uint32_t)(0x11a77c80u));
  /* 11a73039 call 0x11a7108a */
  push32(0x11a7303eu); f_11a7108a();
  /* 11a7303e mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a73043 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73046 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a7304a lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a7304d imul ecx, ecx, 0x1e */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1eu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a73050 cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73054 jl 0x11a73017 */
  if ((C.sf!=C.of)) goto L_11a73017;
L_11a73056:;
  /* 11a73056 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a73059 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a7305e imul ecx, ecx, 0x1e */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1eu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a73061 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a73063 jle 0x11a73093 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73093;
L_11a73065:;
  /* 11a73065 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a73067 push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a7306c push 0x11a77e68 */
  push32((uint32_t)(0x11a77e68u));
  /* 11a73071 push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a73076 call 0x11a710a1 */
  push32(0x11a7307bu); f_11a710a1();
  /* 11a7307b mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a73080 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73083 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a73087 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11a7308a imul ecx, ecx, 0x1e */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x1eu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a7308d cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73091 jl 0x11a73065 */
  if ((C.sf!=C.of)) goto L_11a73065;
L_11a73093:;
  /* 11a73093 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a73098 lea ecx, [eax + eax*4 + 5] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x5));
  /* 11a7309c shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7309f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a730a1 jle 0x11a730d2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a730d2;
L_11a730a3:;
  /* 11a730a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a730a5 push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a730aa push 0x11a77eb8 */
  push32((uint32_t)(0x11a77eb8u));
  /* 11a730af push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a730b4 call 0x11a710a1 */
  push32(0x11a730b9u); f_11a710a1();
  /* 11a730b9 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a730be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a730c1 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a730c5 lea ecx, [eax + eax*4 + 5] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x5));
  /* 11a730c9 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a730cc cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a730d0 jl 0x11a730a3 */
  if ((C.sf!=C.of)) goto L_11a730a3;
L_11a730d2:;
  /* 11a730d2 and dword ptr [esp + 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))&(0x0u); w32((uint32_t)(ESP + 0x10), (_r)); fl_logic(_r,32); }
  /* 11a730d7 lea ecx, [eax + eax*4 + 5] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x5));
  /* 11a730db shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a730de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a730e0 jle 0x11a73111 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73111;
L_11a730e2:;
  /* 11a730e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a730e4 push 0x11a77ea0 */
  push32((uint32_t)(0x11a77ea0u));
  /* 11a730e9 push 0x11a77d88 */
  push32((uint32_t)(0x11a77d88u));
  /* 11a730ee push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a730f3 call 0x11a710a1 */
  push32(0x11a730f8u); f_11a710a1();
  /* 11a730f8 mov eax, dword ptr [0x11a77b68] */
  EAX = (r32((uint32_t)(0x11a77b68)));
  /* 11a730fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73100 inc dword ptr [esp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x10)))+1; w32((uint32_t)(ESP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11a73104 lea ecx, [eax + eax*4 + 5] */
  ECX = ((uint32_t)(EAX + EAX*4 + 0x5));
  /* 11a73108 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7310b cmp dword ptr [esp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7310f jl 0x11a730e2 */
  if ((C.sf!=C.of)) goto L_11a730e2;
L_11a73111:;
  /* 11a73111 push eax */
  push32((uint32_t)(EAX));
  /* 11a73112 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a73114 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a73116 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a73118 push 0x11a77524 */
  push32((uint32_t)(0x11a77524u));
  /* 11a7311d push 3 */
  push32((uint32_t)(0x3u));
  /* 11a7311f call dword ptr [0x11a760cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760cc))), 0x11a73125u);
  /* 11a73125 push 0x11a7751c */
  push32((uint32_t)(0x11a7751cu));
  /* 11a7312a call ebp */
  call_ind((uint32_t)(EBP), 0x11a7312cu);
  /* 11a7312c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11a73131 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a73133 call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a73139u);
  /* 11a73139 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7313b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a7313d call esi */
  call_ind((uint32_t)(ESI), 0x11a7313fu);
  /* 11a7313f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73142:;
  /* 11a73142 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11a73144 call edi */
  call_ind((uint32_t)(EDI), 0x11a73146u);
  /* 11a73146 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73148 pop ecx */
  ECX = (pop32());
  /* 11a73149 je 0x11a73169 */
  if (C.zf) goto L_11a73169;
  /* 11a7314b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a7314d call edi */
  call_ind((uint32_t)(EDI), 0x11a7314fu);
  /* 11a7314f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73151 pop ecx */
  ECX = (pop32());
  /* 11a73152 jne 0x11a73169 */
  if (!C.zf) goto L_11a73169;
  /* 11a73154 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11a73156 call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a7315cu);
  /* 11a7315c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7315e pop ecx */
  ECX = (pop32());
  /* 11a7315f je 0x11a73169 */
  if (C.zf) goto L_11a73169;
  /* 11a73161 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73163 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11a73165 call esi */
  call_ind((uint32_t)(ESI), 0x11a73167u);
  /* 11a73167 pop ecx */
  ECX = (pop32());
  /* 11a73168 pop ecx */
  ECX = (pop32());
L_11a73169:;
  /* 11a73169 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a7316b call edi */
  call_ind((uint32_t)(EDI), 0x11a7316du);
  /* 11a7316d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7316f pop ecx */
  ECX = (pop32());
  /* 11a73170 je 0x11a73192 */
  if (C.zf) goto L_11a73192;
  /* 11a73172 push 5 */
  push32((uint32_t)(0x5u));
  /* 11a73174 push 0x11a77af8 */
  push32((uint32_t)(0x11a77af8u));
  /* 11a73179 call ebx */
  call_ind((uint32_t)(EBX), 0x11a7317bu);
  /* 11a7317b pop ecx */
  ECX = (pop32());
  /* 11a7317c cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7317f pop ecx */
  ECX = (pop32());
  /* 11a73180 jge 0x11a73192 */
  if ((C.sf==C.of)) goto L_11a73192;
  /* 11a73182 push 0x11a77514 */
  push32((uint32_t)(0x11a77514u));
  /* 11a73187 call ebp */
  call_ind((uint32_t)(EBP), 0x11a73189u);
  /* 11a73189 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7318b push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a7318d call esi */
  call_ind((uint32_t)(ESI), 0x11a7318fu);
  /* 11a7318f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73192:;
  /* 11a73192 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a73194 call edi */
  call_ind((uint32_t)(EDI), 0x11a73196u);
  /* 11a73196 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73198 pop ecx */
  ECX = (pop32());
  /* 11a73199 je 0x11a731bb */
  if (C.zf) goto L_11a731bb;
  /* 11a7319b push 5 */
  push32((uint32_t)(0x5u));
  /* 11a7319d push 0x11a77af0 */
  push32((uint32_t)(0x11a77af0u));
  /* 11a731a2 call ebx */
  call_ind((uint32_t)(EBX), 0x11a731a4u);
  /* 11a731a4 pop ecx */
  ECX = (pop32());
  /* 11a731a5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a731a8 pop ecx */
  ECX = (pop32());
  /* 11a731a9 jge 0x11a731bb */
  if ((C.sf==C.of)) goto L_11a731bb;
  /* 11a731ab push 0x11a7750c */
  push32((uint32_t)(0x11a7750cu));
  /* 11a731b0 call ebp */
  call_ind((uint32_t)(EBP), 0x11a731b2u);
  /* 11a731b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a731b4 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a731b6 call esi */
  call_ind((uint32_t)(ESI), 0x11a731b8u);
  /* 11a731b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a731bb:;
  /* 11a731bb push 3 */
  push32((uint32_t)(0x3u));
  /* 11a731bd call edi */
  call_ind((uint32_t)(EDI), 0x11a731bfu);
  /* 11a731bf mov ebx, dword ptr [0x11a760fc] */
  EBX = (r32((uint32_t)(0x11a760fc)));
  /* 11a731c5 pop ecx */
  ECX = (pop32());
  /* 11a731c6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a731c8 jne 0x11a731ec */
  if (!C.zf) goto L_11a731ec;
  /* 11a731ca push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a731cc call edi */
  call_ind((uint32_t)(EDI), 0x11a731ceu);
  /* 11a731ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a731d0 pop ecx */
  ECX = (pop32());
  /* 11a731d1 je 0x11a731ec */
  if (C.zf) goto L_11a731ec;
  /* 11a731d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a731d5 call ebx */
  call_ind((uint32_t)(EBX), 0x11a731d7u);
  /* 11a731d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a731d9 pop ecx */
  ECX = (pop32());
  /* 11a731da je 0x11a731ec */
  if (C.zf) goto L_11a731ec;
  /* 11a731dc push 0x11a77504 */
  push32((uint32_t)(0x11a77504u));
  /* 11a731e1 call ebp */
  call_ind((uint32_t)(EBP), 0x11a731e3u);
  /* 11a731e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a731e5 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a731e7 call esi */
  call_ind((uint32_t)(ESI), 0x11a731e9u);
  /* 11a731e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a731ec:;
  /* 11a731ec push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a731ee call edi */
  call_ind((uint32_t)(EDI), 0x11a731f0u);
  /* 11a731f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a731f2 pop ecx */
  ECX = (pop32());
  /* 11a731f3 je 0x11a7320e */
  if (C.zf) goto L_11a7320e;
  /* 11a731f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a731f7 call ebx */
  call_ind((uint32_t)(EBX), 0x11a731f9u);
  /* 11a731f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a731fb pop ecx */
  ECX = (pop32());
  /* 11a731fc je 0x11a7320e */
  if (C.zf) goto L_11a7320e;
  /* 11a731fe push 0x11a774fc */
  push32((uint32_t)(0x11a774fcu));
  /* 11a73203 call ebp */
  call_ind((uint32_t)(EBP), 0x11a73205u);
  /* 11a73205 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73207 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a73209 call esi */
  call_ind((uint32_t)(ESI), 0x11a7320bu);
  /* 11a7320b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a7320e:;
  /* 11a7320e push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11a73210 call edi */
  call_ind((uint32_t)(EDI), 0x11a73212u);
  /* 11a73212 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73214 pop ecx */
  ECX = (pop32());
  /* 11a73215 jne 0x11a73239 */
  if (!C.zf) goto L_11a73239;
  /* 11a73217 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a73219 call edi */
  call_ind((uint32_t)(EDI), 0x11a7321bu);
  /* 11a7321b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7321d pop ecx */
  ECX = (pop32());
  /* 11a7321e je 0x11a73239 */
  if (C.zf) goto L_11a73239;
  /* 11a73220 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a73222 call ebx */
  call_ind((uint32_t)(EBX), 0x11a73224u);
  /* 11a73224 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73226 pop ecx */
  ECX = (pop32());
  /* 11a73227 je 0x11a73239 */
  if (C.zf) goto L_11a73239;
  /* 11a73229 push 0x11a774f4 */
  push32((uint32_t)(0x11a774f4u));
  /* 11a7322e call ebp */
  call_ind((uint32_t)(EBP), 0x11a73230u);
  /* 11a73230 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73232 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a73234 call esi */
  call_ind((uint32_t)(ESI), 0x11a73236u);
  /* 11a73236 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73239:;
  /* 11a73239 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11a7323b call edi */
  call_ind((uint32_t)(EDI), 0x11a7323du);
  /* 11a7323d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7323f pop ecx */
  ECX = (pop32());
  /* 11a73240 je 0x11a73291 */
  if (C.zf) goto L_11a73291;
  /* 11a73242 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73244 call ebx */
  call_ind((uint32_t)(EBX), 0x11a73246u);
  /* 11a73246 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73248 pop ecx */
  ECX = (pop32());
  /* 11a73249 je 0x11a73291 */
  if (C.zf) goto L_11a73291;
  /* 11a7324b push 0x11a77c70 */
  push32((uint32_t)(0x11a77c70u));
  /* 11a73250 call dword ptr [0x11a76134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76134))), 0x11a73256u);
  /* 11a73256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73258 pop ecx */
  ECX = (pop32());
  /* 11a73259 jne 0x11a73291 */
  if (!C.zf) goto L_11a73291;
  /* 11a7325b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7325d pop ebx */
  EBX = (pop32());
L_11a7325e:;
  /* 11a7325e push ebx */
  push32((uint32_t)(EBX));
  /* 11a7325f call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a73265u);
  /* 11a73265 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73267 pop ecx */
  ECX = (pop32());
  /* 11a73268 jne 0x11a73275 */
  if (!C.zf) goto L_11a73275;
  /* 11a7326a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7326c push ebx */
  push32((uint32_t)(EBX));
  /* 11a7326d call dword ptr [0x11a760d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760d4))), 0x11a73273u);
  /* 11a73273 pop ecx */
  ECX = (pop32());
  /* 11a73274 pop ecx */
  ECX = (pop32());
L_11a73275:;
  /* 11a73275 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a73276 cmp ebx, 0x1e */
  { uint32_t _a=(EBX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73279 jl 0x11a7325e */
  if ((C.sf!=C.of)) goto L_11a7325e;
  /* 11a7327b push 0x11a774ec */
  push32((uint32_t)(0x11a774ecu));
  /* 11a73280 call ebp */
  call_ind((uint32_t)(EBP), 0x11a73282u);
  /* 11a73282 call dword ptr [0x11a76100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76100))), 0x11a73288u);
  /* 11a73288 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7328a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11a7328c call esi */
  call_ind((uint32_t)(ESI), 0x11a7328eu);
  /* 11a7328e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73291:;
  /* 11a73291 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a73293 call edi */
  call_ind((uint32_t)(EDI), 0x11a73295u);
  /* 11a73295 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a73297 pop ecx */
  ECX = (pop32());
  /* 11a73298 jne 0x11a732e9 */
  if (!C.zf) goto L_11a732e9;
  /* 11a7329a push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11a7329c call edi */
  call_ind((uint32_t)(EDI), 0x11a7329eu);
  /* 11a7329e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a732a0 pop ecx */
  ECX = (pop32());
  /* 11a732a1 jne 0x11a732e9 */
  if (!C.zf) goto L_11a732e9;
  /* 11a732a3 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a732a5 call edi */
  call_ind((uint32_t)(EDI), 0x11a732a7u);
  /* 11a732a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a732a9 pop ecx */
  ECX = (pop32());
  /* 11a732aa jne 0x11a732e9 */
  if (!C.zf) goto L_11a732e9;
  /* 11a732ac push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11a732ae call edi */
  call_ind((uint32_t)(EDI), 0x11a732b0u);
  /* 11a732b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a732b2 pop ecx */
  ECX = (pop32());
  /* 11a732b3 jne 0x11a732e9 */
  if (!C.zf) goto L_11a732e9;
  /* 11a732b5 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11a732b7 call edi */
  call_ind((uint32_t)(EDI), 0x11a732b9u);
  /* 11a732b9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a732bb pop ecx */
  ECX = (pop32());
  /* 11a732bc jne 0x11a732e9 */
  if (!C.zf) goto L_11a732e9;
  /* 11a732be push 1 */
  push32((uint32_t)(0x1u));
  /* 11a732c0 pop esi */
  ESI = (pop32());
L_11a732c1:;
  /* 11a732c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a732c2 call dword ptr [0x11a760dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760dc))), 0x11a732c8u);
  /* 11a732c8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a732ca pop ecx */
  ECX = (pop32());
  /* 11a732cb jne 0x11a732d5 */
  if (!C.zf) goto L_11a732d5;
  /* 11a732cd push esi */
  push32((uint32_t)(ESI));
  /* 11a732ce call dword ptr [0x11a76104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76104))), 0x11a732d4u);
  /* 11a732d4 pop ecx */
  ECX = (pop32());
L_11a732d5:;
  /* 11a732d5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a732d6 cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a732d9 jl 0x11a732c1 */
  if ((C.sf!=C.of)) goto L_11a732c1;
  /* 11a732db push 0x11a774e4 */
  push32((uint32_t)(0x11a774e4u));
  /* 11a732e0 call ebp */
  call_ind((uint32_t)(EBP), 0x11a732e2u);
  /* 11a732e2 pop ecx */
  ECX = (pop32());
  /* 11a732e3 call dword ptr [0x11a76108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76108))), 0x11a732e9u);
L_11a732e9:;
  /* 11a732e9 pop edi */
  EDI = (pop32());
  /* 11a732ea pop esi */
  ESI = (pop32());
  /* 11a732eb pop ebp */
  EBP = (pop32());
  /* 11a732ec pop ebx */
  EBX = (pop32());
  /* 11a732ed pop ecx */
  ECX = (pop32());
  /* 11a732ee ret  */
  ESPCHK(0x11a719bcu, _esp0);
  ESP += 4; return;
}

/* FUN_100032ef @ 0x11a732ef (217 bytes, 57 insns) */
void f_11a732ef(void) {
  FTRACE(0x11a732efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a732ef mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a732f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a732f6 jne 0x11a73384 */
  if (!C.zf) goto L_11a73384;
  /* 11a732fc call dword ptr [0x11a76094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76094))), 0x11a73302u);
  /* 11a73302 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a73304 mov dword ptr [0x11a77f94], eax */
  w32((uint32_t)(0x11a77f94), (EAX));
  /* 11a73309 call 0x11a73d23 */
  push32(0x11a7330eu); f_11a73d23();
  /* 11a7330e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73310 pop ecx */
  ECX = (pop32());
  /* 11a73311 je 0x11a7334f */
  if (C.zf) goto L_11a7334f;
  /* 11a73313 mov eax, dword ptr [0x11a77f94] */
  EAX = (r32((uint32_t)(0x11a77f94)));
  /* 11a73318 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a7331a mov cl, byte ptr [0x11a77f95] */
  CL = (r8((uint32_t)(0x11a77f95)));
  /* 11a73320 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a73325 shr dword ptr [0x11a77f94], 0x10 */
  w32((uint32_t)(0x11a77f94), (sh_shr((uint32_t)(r32((uint32_t)(0x11a77f94))), (0x10u)&0x1f, 32)));
  /* 11a7332c mov dword ptr [0x11a77f9c], eax */
  w32((uint32_t)(0x11a77f9c), (EAX));
  /* 11a73331 mov dword ptr [0x11a77fa0], ecx */
  w32((uint32_t)(0x11a77fa0), (ECX));
  /* 11a73337 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a7333a add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7333c mov dword ptr [0x11a77f98], eax */
  w32((uint32_t)(0x11a77f98), (EAX));
  /* 11a73341 call 0x11a735b6 */
  push32(0x11a73346u); f_11a735b6();
  /* 11a73346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73348 jne 0x11a73353 */
  if (!C.zf) goto L_11a73353;
  /* 11a7334a call 0x11a73d5f */
  push32(0x11a7334fu); f_11a73d5f();
L_11a7334f:;
  /* 11a7334f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a73351 jmp 0x11a733c5 */
  goto L_11a733c5;
L_11a73353:;
  /* 11a73353 call dword ptr [0x11a76090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76090))), 0x11a73359u);
  /* 11a73359 mov dword ptr [0x11a784f8], eax */
  w32((uint32_t)(0x11a784f8), (EAX));
  /* 11a7335e call 0x11a73bf1 */
  push32(0x11a73363u); f_11a73bf1();
  /* 11a73363 mov dword ptr [0x11a77f80], eax */
  w32((uint32_t)(0x11a77f80), (EAX));
  /* 11a73368 call 0x11a736db */
  push32(0x11a7336du); f_11a736db();
  /* 11a7336d call 0x11a739a4 */
  push32(0x11a73372u); f_11a739a4();
  /* 11a73372 call 0x11a738eb */
  push32(0x11a73377u); f_11a738eb();
  /* 11a73377 call 0x11a73498 */
  push32(0x11a7337cu); f_11a73498();
  /* 11a7337c inc dword ptr [0x11a77f7c] */
  { uint32_t _r=(r32((uint32_t)(0x11a77f7c)))+1; w32((uint32_t)(0x11a77f7c), (_r)); fl_inc(_r,32); }
  /* 11a73382 jmp 0x11a733c2 */
  goto L_11a733c2;
L_11a73384:;
  /* 11a73384 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a73386 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73388 jne 0x11a733b6 */
  if (!C.zf) goto L_11a733b6;
  /* 11a7338a cmp dword ptr [0x11a77f7c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a77f7c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73390 jle 0x11a7334f */
  if ((C.zf||C.sf!=C.of)) goto L_11a7334f;
  /* 11a73392 dec dword ptr [0x11a77f7c] */
  { uint32_t _r=(r32((uint32_t)(0x11a77f7c)))-1; w32((uint32_t)(0x11a77f7c), (_r)); fl_dec(_r,32); }
  /* 11a73398 cmp dword ptr [0x11a77fcc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11a77fcc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7339e jne 0x11a733a5 */
  if (!C.zf) goto L_11a733a5;
  /* 11a733a0 call 0x11a734d6 */
  push32(0x11a733a5u); f_11a734d6();
L_11a733a5:;
  /* 11a733a5 call 0x11a73897 */
  push32(0x11a733aau); f_11a73897();
  /* 11a733aa call 0x11a7360a */
  push32(0x11a733afu); f_11a7360a();
  /* 11a733af call 0x11a73d5f */
  push32(0x11a733b4u); f_11a73d5f();
  /* 11a733b4 jmp 0x11a733c2 */
  goto L_11a733c2;
L_11a733b6:;
  /* 11a733b6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a733b9 jne 0x11a733c2 */
  if (!C.zf) goto L_11a733c2;
  /* 11a733bb push ecx */
  push32((uint32_t)(ECX));
  /* 11a733bc call 0x11a7363b */
  push32(0x11a733c1u); f_11a7363b();
  /* 11a733c1 pop ecx */
  ECX = (pop32());
L_11a733c2:;
  /* 11a733c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a733c4 pop eax */
  EAX = (pop32());
L_11a733c5:;
  /* 11a733c5 ret 0xc */
  ESPCHK(0x11a732efu, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11a733c8 (157 bytes, 73 insns) */
void f_11a733c8(void) {
  FTRACE(0x11a733c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a733c8 push ebp */
  push32((uint32_t)(EBP));
  /* 11a733c9 mov ebp, esp */
  EBP = (ESP);
  /* 11a733cb push ebx */
  push32((uint32_t)(EBX));
  /* 11a733cc mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a733cf push esi */
  push32((uint32_t)(ESI));
  /* 11a733d0 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a733d3 push edi */
  push32((uint32_t)(EDI));
  /* 11a733d4 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a733d7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a733d9 jne 0x11a733e4 */
  if (!C.zf) goto L_11a733e4;
  /* 11a733db cmp dword ptr [0x11a77f7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a77f7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a733e2 jmp 0x11a7340a */
  goto L_11a7340a;
L_11a733e4:;
  /* 11a733e4 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a733e7 je 0x11a733ee */
  if (C.zf) goto L_11a733ee;
  /* 11a733e9 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a733ec jne 0x11a73410 */
  if (!C.zf) goto L_11a73410;
L_11a733ee:;
  /* 11a733ee mov eax, dword ptr [0x11a784fc] */
  EAX = (r32((uint32_t)(0x11a784fc)));
  /* 11a733f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a733f5 je 0x11a73400 */
  if (C.zf) goto L_11a73400;
  /* 11a733f7 push edi */
  push32((uint32_t)(EDI));
  /* 11a733f8 push esi */
  push32((uint32_t)(ESI));
  /* 11a733f9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a733fa call eax */
  call_ind((uint32_t)(EAX), 0x11a733fcu);
  /* 11a733fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a733fe je 0x11a7340c */
  if (C.zf) goto L_11a7340c;
L_11a73400:;
  /* 11a73400 push edi */
  push32((uint32_t)(EDI));
  /* 11a73401 push esi */
  push32((uint32_t)(ESI));
  /* 11a73402 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73403 call 0x11a732ef */
  push32(0x11a73408u); f_11a732ef();
  /* 11a73408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11a7340a:;
  /* 11a7340a jne 0x11a73410 */
  if (!C.zf) goto L_11a73410;
L_11a7340c:;
  /* 11a7340c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7340e jmp 0x11a7345e */
  goto L_11a7345e;
L_11a73410:;
  /* 11a73410 push edi */
  push32((uint32_t)(EDI));
  /* 11a73411 push esi */
  push32((uint32_t)(ESI));
  /* 11a73412 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73413 call 0x11a71000 */
  push32(0x11a73418u); f_11a71000();
  /* 11a73418 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7341b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a7341e jne 0x11a7342c */
  if (!C.zf) goto L_11a7342c;
  /* 11a73420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73422 jne 0x11a7345b */
  if (!C.zf) goto L_11a7345b;
  /* 11a73424 push edi */
  push32((uint32_t)(EDI));
  /* 11a73425 push eax */
  push32((uint32_t)(EAX));
  /* 11a73426 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73427 call 0x11a732ef */
  push32(0x11a7342cu); f_11a732ef();
L_11a7342c:;
  /* 11a7342c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a7342e je 0x11a73435 */
  if (C.zf) goto L_11a73435;
  /* 11a73430 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73433 jne 0x11a7345b */
  if (!C.zf) goto L_11a7345b;
L_11a73435:;
  /* 11a73435 push edi */
  push32((uint32_t)(EDI));
  /* 11a73436 push esi */
  push32((uint32_t)(ESI));
  /* 11a73437 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73438 call 0x11a732ef */
  push32(0x11a7343du); f_11a732ef();
  /* 11a7343d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7343f jne 0x11a73444 */
  if (!C.zf) goto L_11a73444;
  /* 11a73441 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11a73444:;
  /* 11a73444 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73448 je 0x11a7345b */
  if (C.zf) goto L_11a7345b;
  /* 11a7344a mov eax, dword ptr [0x11a784fc] */
  EAX = (r32((uint32_t)(0x11a784fc)));
  /* 11a7344f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73451 je 0x11a7345b */
  if (C.zf) goto L_11a7345b;
  /* 11a73453 push edi */
  push32((uint32_t)(EDI));
  /* 11a73454 push esi */
  push32((uint32_t)(ESI));
  /* 11a73455 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73456 call eax */
  call_ind((uint32_t)(EAX), 0x11a73458u);
  /* 11a73458 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11a7345b:;
  /* 11a7345b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11a7345e:;
  /* 11a7345e pop edi */
  EDI = (pop32());
  /* 11a7345f pop esi */
  ESI = (pop32());
  /* 11a73460 pop ebx */
  EBX = (pop32());
  /* 11a73461 pop ebp */
  EBP = (pop32());
  /* 11a73462 ret 0xc */
  ESPCHK(0x11a733c8u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11a73465 (48 bytes, 15 insns) */
void f_11a73465(void) {
  FTRACE(0x11a73465u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73465 mov eax, dword ptr [0x11a77f88] */
  EAX = (r32((uint32_t)(0x11a77f88)));
  /* 11a7346a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7346d je 0x11a7347c */
  if (C.zf) goto L_11a7347c;
  /* 11a7346f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73471 jne 0x11a73481 */
  if (!C.zf) goto L_11a73481;
  /* 11a73473 cmp dword ptr [0x11a77f8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a77f8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7347a jne 0x11a73481 */
  if (!C.zf) goto L_11a73481;
L_11a7347c:;
  /* 11a7347c call 0x11a73dd4 */
  push32(0x11a73481u); f_11a73dd4();
L_11a73481:;
  /* 11a73481 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a73485 call 0x11a73e0d */
  push32(0x11a7348au); f_11a73e0d();
  /* 11a7348a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a7348f call dword ptr [0x11a777b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a777b8))), 0x11a73495u);
  /* 11a73495 pop ecx */
  ECX = (pop32());
  /* 11a73496 pop ecx */
  ECX = (pop32());
  /* 11a73497 ret  */
  ESPCHK(0x11a73465u, _esp0);
  ESP += 4; return;
}

/* FUN_10003498 @ 0x11a73498 (45 bytes, 12 insns) */
void f_11a73498(void) {
  FTRACE(0x11a73498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73498 mov eax, dword ptr [0x11a784f4] */
  EAX = (r32((uint32_t)(0x11a784f4)));
  /* 11a7349d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7349f je 0x11a734a3 */
  if (C.zf) goto L_11a734a3;
  /* 11a734a1 call eax */
  call_ind((uint32_t)(EAX), 0x11a734a3u);
L_11a734a3:;
  /* 11a734a3 push 0x11a77010 */
  push32((uint32_t)(0x11a77010u));
  /* 11a734a8 push 0x11a77008 */
  push32((uint32_t)(0x11a77008u));
  /* 11a734ad call 0x11a7359c */
  push32(0x11a734b2u); f_11a7359c();
  /* 11a734b2 push 0x11a77004 */
  push32((uint32_t)(0x11a77004u));
  /* 11a734b7 push 0x11a77000 */
  push32((uint32_t)(0x11a77000u));
  /* 11a734bc call 0x11a7359c */
  push32(0x11a734c1u); f_11a7359c();
  /* 11a734c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a734c4 ret  */
  ESPCHK(0x11a73498u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11a734c5 (17 bytes, 6 insns) */
void f_11a734c5(void) {
  FTRACE(0x11a734c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a734c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a734c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a734c9 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11a734cd call 0x11a734e5 */
  push32(0x11a734d2u); f_11a734e5();
  /* 11a734d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a734d5 ret  */
  ESPCHK(0x11a734c5u, _esp0);
  ESP += 4; return;
}

/* FUN_100034d6 @ 0x11a734d6 (15 bytes, 6 insns) */
void f_11a734d6(void) {
  FTRACE(0x11a734d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a734d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a734d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a734da push 0 */
  push32((uint32_t)(0x0u));
  /* 11a734dc call 0x11a734e5 */
  push32(0x11a734e1u); f_11a734e5();
  /* 11a734e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a734e4 ret  */
  ESPCHK(0x11a734d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100034e5 @ 0x11a734e5 (163 bytes, 53 insns) */
void f_11a734e5(void) {
  FTRACE(0x11a734e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a734e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a734e6 call 0x11a7358a */
  push32(0x11a734ebu); f_11a7358a();
  /* 11a734eb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a734ed pop edi */
  EDI = (pop32());
  /* 11a734ee cmp dword ptr [0x11a77fd0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a77fd0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a734f4 jne 0x11a73507 */
  if (!C.zf) goto L_11a73507;
  /* 11a734f6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a734fa call dword ptr [0x11a760a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760a0))), 0x11a73500u);
  /* 11a73500 push eax */
  push32((uint32_t)(EAX));
  /* 11a73501 call dword ptr [0x11a76000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76000))), 0x11a73507u);
L_11a73507:;
  /* 11a73507 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7350c push ebx */
  push32((uint32_t)(EBX));
  /* 11a7350d mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a73511 mov dword ptr [0x11a77fcc], edi */
  w32((uint32_t)(0x11a77fcc), (EDI));
  /* 11a73517 mov byte ptr [0x11a77fc8], bl */
  w8((uint32_t)(0x11a77fc8), (BL));
  /* 11a7351d jne 0x11a7355b */
  if (!C.zf) goto L_11a7355b;
  /* 11a7351f mov eax, dword ptr [0x11a784f0] */
  EAX = (r32((uint32_t)(0x11a784f0)));
  /* 11a73524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73526 je 0x11a7354a */
  if (C.zf) goto L_11a7354a;
  /* 11a73528 mov ecx, dword ptr [0x11a784ec] */
  ECX = (r32((uint32_t)(0x11a784ec)));
  /* 11a7352e push esi */
  push32((uint32_t)(ESI));
  /* 11a7352f lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11a73532 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73534 jb 0x11a73549 */
  if (C.cf) goto L_11a73549;
L_11a73536:;
  /* 11a73536 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a73538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7353a je 0x11a7353e */
  if (C.zf) goto L_11a7353e;
  /* 11a7353c call eax */
  call_ind((uint32_t)(EAX), 0x11a7353eu);
L_11a7353e:;
  /* 11a7353e sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73541 cmp esi, dword ptr [0x11a784f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a784f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73547 jae 0x11a73536 */
  if (!C.cf) goto L_11a73536;
L_11a73549:;
  /* 11a73549 pop esi */
  ESI = (pop32());
L_11a7354a:;
  /* 11a7354a push 0x11a77018 */
  push32((uint32_t)(0x11a77018u));
  /* 11a7354f push 0x11a77014 */
  push32((uint32_t)(0x11a77014u));
  /* 11a73554 call 0x11a7359c */
  push32(0x11a73559u); f_11a7359c();
  /* 11a73559 pop ecx */
  ECX = (pop32());
  /* 11a7355a pop ecx */
  ECX = (pop32());
L_11a7355b:;
  /* 11a7355b push 0x11a77020 */
  push32((uint32_t)(0x11a77020u));
  /* 11a73560 push 0x11a7701c */
  push32((uint32_t)(0x11a7701cu));
  /* 11a73565 call 0x11a7359c */
  push32(0x11a7356au); f_11a7359c();
  /* 11a7356a pop ecx */
  ECX = (pop32());
  /* 11a7356b pop ecx */
  ECX = (pop32());
  /* 11a7356c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a7356e pop ebx */
  EBX = (pop32());
  /* 11a7356f je 0x11a73578 */
  if (C.zf) goto L_11a73578;
  /* 11a73571 call 0x11a73593 */
  push32(0x11a73576u); f_11a73593();
  /* 11a73576 pop edi */
  EDI = (pop32());
  /* 11a73577 ret  */
  ESPCHK(0x11a734e5u, _esp0);
  ESP += 4; return;
L_11a73578:;
  /* 11a73578 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a7357c mov dword ptr [0x11a77fd0], edi */
  w32((uint32_t)(0x11a77fd0), (EDI));
  /* 11a73582 call dword ptr [0x11a76004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76004))), 0x11a73588u);
  /* 11a73588 pop edi */
  EDI = (pop32());
  /* 11a73589 ret  */
  ESPCHK(0x11a734e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000358a @ 0x11a7358a (9 bytes, 4 insns) */
void f_11a7358a(void) {
  FTRACE(0x11a7358au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7358a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a7358c call 0x11a73ff5 */
  push32(0x11a73591u); f_11a73ff5();
  /* 11a73591 pop ecx */
  ECX = (pop32());
  /* 11a73592 ret  */
  ESPCHK(0x11a7358au, _esp0);
  ESP += 4; return;
}

/* FUN_10003593 @ 0x11a73593 (9 bytes, 4 insns) */
void f_11a73593(void) {
  FTRACE(0x11a73593u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73593 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11a73595 call 0x11a74056 */
  push32(0x11a7359au); f_11a74056();
  /* 11a7359a pop ecx */
  ECX = (pop32());
  /* 11a7359b ret  */
  ESPCHK(0x11a73593u, _esp0);
  ESP += 4; return;
}

/* FUN_1000359c @ 0x11a7359c (26 bytes, 12 insns) */
void f_11a7359c(void) {
  FTRACE(0x11a7359cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7359c push esi */
  push32((uint32_t)(ESI));
  /* 11a7359d mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11a735a1:;
  /* 11a735a1 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a735a5 jae 0x11a735b4 */
  if (!C.cf) goto L_11a735b4;
  /* 11a735a7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a735a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a735ab je 0x11a735af */
  if (C.zf) goto L_11a735af;
  /* 11a735ad call eax */
  call_ind((uint32_t)(EAX), 0x11a735afu);
L_11a735af:;
  /* 11a735af add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a735b2 jmp 0x11a735a1 */
  goto L_11a735a1;
L_11a735b4:;
  /* 11a735b4 pop esi */
  ESI = (pop32());
  /* 11a735b5 ret  */
  ESPCHK(0x11a7359cu, _esp0);
  ESP += 4; return;
}

/* FUN_100035b6 @ 0x11a735b6 (84 bytes, 32 insns) */
void f_11a735b6(void) {
  FTRACE(0x11a735b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a735b6 push esi */
  push32((uint32_t)(ESI));
  /* 11a735b7 call 0x11a73f60 */
  push32(0x11a735bcu); f_11a73f60();
  /* 11a735bc call dword ptr [0x11a760a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760a8))), 0x11a735c2u);
  /* 11a735c2 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a735c5 mov dword ptr [0x11a777bc], eax */
  w32((uint32_t)(0x11a777bc), (EAX));
  /* 11a735ca je 0x11a73606 */
  if (C.zf) goto L_11a73606;
  /* 11a735cc push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11a735ce push 1 */
  push32((uint32_t)(0x1u));
  /* 11a735d0 call 0x11a7406b */
  push32(0x11a735d5u); f_11a7406b();
  /* 11a735d5 mov esi, eax */
  ESI = (EAX);
  /* 11a735d7 pop ecx */
  ECX = (pop32());
  /* 11a735d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a735da pop ecx */
  ECX = (pop32());
  /* 11a735db je 0x11a73606 */
  if (C.zf) goto L_11a73606;
  /* 11a735dd push esi */
  push32((uint32_t)(ESI));
  /* 11a735de push dword ptr [0x11a777bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a777bc))));
  /* 11a735e4 call dword ptr [0x11a7609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7609c))), 0x11a735eau);
  /* 11a735ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a735ec je 0x11a73606 */
  if (C.zf) goto L_11a73606;
  /* 11a735ee push esi */
  push32((uint32_t)(ESI));
  /* 11a735ef call 0x11a73628 */
  push32(0x11a735f4u); f_11a73628();
  /* 11a735f4 pop ecx */
  ECX = (pop32());
  /* 11a735f5 call dword ptr [0x11a760a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a760a4))), 0x11a735fbu);
  /* 11a735fb or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a735ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11a73601 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a73603 pop eax */
  EAX = (pop32());
  /* 11a73604 pop esi */
  ESI = (pop32());
  /* 11a73605 ret  */
  ESPCHK(0x11a735b6u, _esp0);
  ESP += 4; return;
L_11a73606:;
  /* 11a73606 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a73608 pop esi */
  ESI = (pop32());
  /* 11a73609 ret  */
  ESPCHK(0x11a735b6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000360a @ 0x11a7360a (30 bytes, 8 insns) */
void f_11a7360a(void) {
  FTRACE(0x11a7360au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7360a call 0x11a73f89 */
  push32(0x11a7360fu); f_11a73f89();
  /* 11a7360f mov eax, dword ptr [0x11a777bc] */
  EAX = (r32((uint32_t)(0x11a777bc)));
  /* 11a73614 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73617 je 0x11a73627 */
  if (C.zf) goto L_11a73627;
  /* 11a73619 push eax */
  push32((uint32_t)(EAX));
  /* 11a7361a call dword ptr [0x11a76098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76098))), 0x11a73620u);
  /* 11a73620 or dword ptr [0x11a777bc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11a777bc)))|(0xffffffffu); w32((uint32_t)(0x11a777bc), (_r)); fl_logic(_r,32); }
L_11a73627:;
  /* 11a73627 ret  */
  ESPCHK(0x11a7360au, _esp0);
  ESP += 4; return;
}

/* FUN_10003628 @ 0x11a73628 (19 bytes, 4 insns) */
void f_11a73628(void) {
  FTRACE(0x11a73628u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73628 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a7362c mov dword ptr [eax + 0x50], 0x11a77938 */
  w32((uint32_t)(EAX + 0x50), (0x11a77938u));
  /* 11a73633 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11a7363a ret  */
  ESPCHK(0x11a73628u, _esp0);
  ESP += 4; return;
}

/* FUN_1000363b @ 0x11a7363b (160 bytes, 62 insns) */
void f_11a7363b(void) {
  FTRACE(0x11a7363bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7363b mov eax, dword ptr [0x11a777bc] */
  EAX = (r32((uint32_t)(0x11a777bc)));
  /* 11a73640 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73643 je 0x11a736da */
  if (C.zf) goto L_11a736da;
  /* 11a73649 push esi */
  push32((uint32_t)(ESI));
  /* 11a7364a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a7364e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73650 jne 0x11a7365f */
  if (!C.zf) goto L_11a7365f;
  /* 11a73652 push eax */
  push32((uint32_t)(EAX));
  /* 11a73653 call dword ptr [0x11a7608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7608c))), 0x11a73659u);
  /* 11a73659 mov esi, eax */
  ESI = (EAX);
  /* 11a7365b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a7365d je 0x11a736cb */
  if (C.zf) goto L_11a736cb;
L_11a7365f:;
  /* 11a7365f mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11a73662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73664 je 0x11a7366d */
  if (C.zf) goto L_11a7366d;
  /* 11a73666 push eax */
  push32((uint32_t)(EAX));
  /* 11a73667 call 0x11a740f8 */
  push32(0x11a7366cu); f_11a740f8();
  /* 11a7366c pop ecx */
  ECX = (pop32());
L_11a7366d:;
  /* 11a7366d mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11a73670 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73672 je 0x11a7367b */
  if (C.zf) goto L_11a7367b;
  /* 11a73674 push eax */
  push32((uint32_t)(EAX));
  /* 11a73675 call 0x11a740f8 */
  push32(0x11a7367au); f_11a740f8();
  /* 11a7367a pop ecx */
  ECX = (pop32());
L_11a7367b:;
  /* 11a7367b mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11a7367e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73680 je 0x11a73689 */
  if (C.zf) goto L_11a73689;
  /* 11a73682 push eax */
  push32((uint32_t)(EAX));
  /* 11a73683 call 0x11a740f8 */
  push32(0x11a73688u); f_11a740f8();
  /* 11a73688 pop ecx */
  ECX = (pop32());
L_11a73689:;
  /* 11a73689 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11a7368c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7368e je 0x11a73697 */
  if (C.zf) goto L_11a73697;
  /* 11a73690 push eax */
  push32((uint32_t)(EAX));
  /* 11a73691 call 0x11a740f8 */
  push32(0x11a73696u); f_11a740f8();
  /* 11a73696 pop ecx */
  ECX = (pop32());
L_11a73697:;
  /* 11a73697 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11a7369a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7369c je 0x11a736a5 */
  if (C.zf) goto L_11a736a5;
  /* 11a7369e push eax */
  push32((uint32_t)(EAX));
  /* 11a7369f call 0x11a740f8 */
  push32(0x11a736a4u); f_11a740f8();
  /* 11a736a4 pop ecx */
  ECX = (pop32());
L_11a736a5:;
  /* 11a736a5 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11a736a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a736aa je 0x11a736b3 */
  if (C.zf) goto L_11a736b3;
  /* 11a736ac push eax */
  push32((uint32_t)(EAX));
  /* 11a736ad call 0x11a740f8 */
  push32(0x11a736b2u); f_11a740f8();
  /* 11a736b2 pop ecx */
  ECX = (pop32());
L_11a736b3:;
  /* 11a736b3 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11a736b6 cmp eax, 0x11a77938 */
  { uint32_t _a=(EAX),_b=(0x11a77938u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a736bb je 0x11a736c4 */
  if (C.zf) goto L_11a736c4;
  /* 11a736bd push eax */
  push32((uint32_t)(EAX));
  /* 11a736be call 0x11a740f8 */
  push32(0x11a736c3u); f_11a740f8();
  /* 11a736c3 pop ecx */
  ECX = (pop32());
L_11a736c4:;
  /* 11a736c4 push esi */
  push32((uint32_t)(ESI));
  /* 11a736c5 call 0x11a740f8 */
  push32(0x11a736cau); f_11a740f8();
  /* 11a736ca pop ecx */
  ECX = (pop32());
L_11a736cb:;
  /* 11a736cb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a736cd push dword ptr [0x11a777bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a777bc))));
  /* 11a736d3 call dword ptr [0x11a7609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7609c))), 0x11a736d9u);
  /* 11a736d9 pop esi */
  ESI = (pop32());
L_11a736da:;
  /* 11a736da ret  */
  ESPCHK(0x11a7363bu, _esp0);
  ESP += 4; return;
}

/* FUN_100036db @ 0x11a736db (444 bytes, 150 insns) */
void f_11a736db(void) {
  FTRACE(0x11a736dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a736db push ebp */
  push32((uint32_t)(EBP));
  /* 11a736dc mov ebp, esp */
  EBP = (ESP);
  /* 11a736de sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a736e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a736e2 push esi */
  push32((uint32_t)(ESI));
  /* 11a736e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a736e4 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a736e9 call 0x11a74140 */
  push32(0x11a736eeu); f_11a74140();
  /* 11a736ee mov esi, eax */
  ESI = (EAX);
  /* 11a736f0 pop ecx */
  ECX = (pop32());
  /* 11a736f1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a736f3 jne 0x11a736fd */
  if (!C.zf) goto L_11a736fd;
  /* 11a736f5 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11a736f7 call 0x11a73465 */
  push32(0x11a736fcu); f_11a73465();
  /* 11a736fc pop ecx */
  ECX = (pop32());
L_11a736fd:;
  /* 11a736fd mov dword ptr [0x11a783e0], esi */
  w32((uint32_t)(0x11a783e0), (ESI));
  /* 11a73703 mov dword ptr [0x11a784e0], 0x20 */
  w32((uint32_t)(0x11a784e0), (0x20u));
  /* 11a7370d lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11a73713:;
  /* 11a73713 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73715 jae 0x11a73735 */
  if (!C.cf) goto L_11a73735;
  /* 11a73717 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a7371b or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a7371e and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a73722 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11a73726 mov eax, dword ptr [0x11a783e0] */
  EAX = (r32((uint32_t)(0x11a783e0)));
  /* 11a7372b add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7372e add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73733 jmp 0x11a73713 */
  goto L_11a73713;
L_11a73735:;
  /* 11a73735 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11a73738 push eax */
  push32((uint32_t)(EAX));
  /* 11a73739 call dword ptr [0x11a7607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7607c))), 0x11a7373fu);
  /* 11a7373f cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a73744 je 0x11a7381b */
  if (C.zf) goto L_11a7381b;
  /* 11a7374a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a7374d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7374f je 0x11a7381b */
  if (C.zf) goto L_11a7381b;
  /* 11a73755 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11a73757 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11a7375a lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11a7375d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a73760 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11a73765 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73767 jl 0x11a7376b */
  if ((C.sf!=C.of)) goto L_11a7376b;
  /* 11a73769 mov edi, eax */
  EDI = (EAX);
L_11a7376b:;
  /* 11a7376b cmp dword ptr [0x11a784e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a784e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73771 jge 0x11a737c9 */
  if ((C.sf==C.of)) goto L_11a737c9;
  /* 11a73773 mov esi, 0x11a783e4 */
  ESI = (0x11a783e4u);
L_11a73778:;
  /* 11a73778 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11a7377d call 0x11a74140 */
  push32(0x11a73782u); f_11a74140();
  /* 11a73782 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73784 pop ecx */
  ECX = (pop32());
  /* 11a73785 je 0x11a737c3 */
  if (C.zf) goto L_11a737c3;
  /* 11a73787 add dword ptr [0x11a784e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11a784e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11a784e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a7378e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a73790 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11a73796:;
  /* 11a73796 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73798 jae 0x11a737b6 */
  if (!C.cf) goto L_11a737b6;
  /* 11a7379a and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a7379e or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a737a1 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a737a5 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11a737a9 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a737ab add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a737ae add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a737b4 jmp 0x11a73796 */
  goto L_11a73796;
L_11a737b6:;
  /* 11a737b6 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a737b9 cmp dword ptr [0x11a784e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a784e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a737bf jl 0x11a73778 */
  if ((C.sf!=C.of)) goto L_11a73778;
  /* 11a737c1 jmp 0x11a737c9 */
  goto L_11a737c9;
L_11a737c3:;
  /* 11a737c3 mov edi, dword ptr [0x11a784e0] */
  EDI = (r32((uint32_t)(0x11a784e0)));
L_11a737c9:;
  /* 11a737c9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a737cb test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a737cd jle 0x11a7381b */
  if ((C.zf||C.sf!=C.of)) goto L_11a7381b;
L_11a737cf:;
  /* 11a737cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a737d2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a737d4 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a737d7 je 0x11a73811 */
  if (C.zf) goto L_11a73811;
  /* 11a737d9 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11a737db test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11a737dd je 0x11a73811 */
  if (C.zf) goto L_11a73811;
  /* 11a737df test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11a737e1 jne 0x11a737ee */
  if (!C.zf) goto L_11a737ee;
  /* 11a737e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a737e4 call dword ptr [0x11a76080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76080))), 0x11a737eau);
  /* 11a737ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a737ec je 0x11a73811 */
  if (C.zf) goto L_11a73811;
L_11a737ee:;
  /* 11a737ee mov ecx, esi */
  ECX = (ESI);
  /* 11a737f0 mov eax, esi */
  EAX = (ESI);
  /* 11a737f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a737f5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a737f8 mov ecx, dword ptr [ecx*4 + 0x11a783e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11a783e0)));
  /* 11a737ff lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11a73802 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11a73805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a73808 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11a7380a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a7380c mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11a7380e mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11a73811:;
  /* 11a73811 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a73815 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a73816 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a73817 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73819 jl 0x11a737cf */
  if ((C.sf!=C.of)) goto L_11a737cf;
L_11a7381b:;
  /* 11a7381b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a7381d:;
  /* 11a7381d mov ecx, dword ptr [0x11a783e0] */
  ECX = (r32((uint32_t)(0x11a783e0)));
  /* 11a73823 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11a73826 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7382a lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a7382d jne 0x11a7387c */
  if (!C.zf) goto L_11a7387c;
  /* 11a7382f test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a73831 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11a73835 jne 0x11a7383c */
  if (!C.zf) goto L_11a7383c;
  /* 11a73837 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11a73839 pop eax */
  EAX = (pop32());
  /* 11a7383a jmp 0x11a73846 */
  goto L_11a73846;
L_11a7383c:;
  /* 11a7383c mov eax, ebx */
  EAX = (EBX);
  /* 11a7383e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a7383f neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a73841 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73843 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a73846:;
  /* 11a73846 push eax */
  push32((uint32_t)(EAX));
  /* 11a73847 call dword ptr [0x11a76084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76084))), 0x11a7384du);
  /* 11a7384d mov edi, eax */
  EDI = (EAX);
  /* 11a7384f cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73852 je 0x11a7386b */
  if (C.zf) goto L_11a7386b;
  /* 11a73854 push edi */
  push32((uint32_t)(EDI));
  /* 11a73855 call dword ptr [0x11a76080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76080))), 0x11a7385bu);
  /* 11a7385b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7385d je 0x11a7386b */
  if (C.zf) goto L_11a7386b;
  /* 11a7385f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a73864 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a73866 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73869 jne 0x11a73871 */
  if (!C.zf) goto L_11a73871;
L_11a7386b:;
  /* 11a7386b or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a7386f jmp 0x11a73880 */
  goto L_11a73880;
L_11a73871:;
  /* 11a73871 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73874 jne 0x11a73880 */
  if (!C.zf) goto L_11a73880;
  /* 11a73876 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11a7387a jmp 0x11a73880 */
  goto L_11a73880;
L_11a7387c:;
  /* 11a7387c or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11a73880:;
  /* 11a73880 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a73881 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73884 jl 0x11a7381d */
  if ((C.sf!=C.of)) goto L_11a7381d;
  /* 11a73886 push dword ptr [0x11a784e0] */
  push32((uint32_t)(r32((uint32_t)(0x11a784e0))));
  /* 11a7388c call dword ptr [0x11a76088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76088))), 0x11a73892u);
  /* 11a73892 pop edi */
  EDI = (pop32());
  /* 11a73893 pop esi */
  ESI = (pop32());
  /* 11a73894 pop ebx */
  EBX = (pop32());
  /* 11a73895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a73896 ret  */
  ESPCHK(0x11a736dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003897 @ 0x11a73897 (84 bytes, 33 insns) */
void f_11a73897(void) {
  FTRACE(0x11a73897u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73897 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73898 push esi */
  push32((uint32_t)(ESI));
  /* 11a73899 push edi */
  push32((uint32_t)(EDI));
  /* 11a7389a mov esi, 0x11a783e0 */
  ESI = (0x11a783e0u);
L_11a7389f:;
  /* 11a7389f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a738a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a738a3 je 0x11a738dc */
  if (C.zf) goto L_11a738dc;
  /* 11a738a5 mov edi, eax */
  EDI = (EAX);
  /* 11a738a7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a738ac cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a738ae jae 0x11a738d1 */
  if (!C.cf) goto L_11a738d1;
  /* 11a738b0 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11a738b3:;
  /* 11a738b3 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a738b7 je 0x11a738c0 */
  if (C.zf) goto L_11a738c0;
  /* 11a738b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a738ba call dword ptr [0x11a76078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76078))), 0x11a738c0u);
L_11a738c0:;
  /* 11a738c0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a738c2 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a738c5 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a738ca add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a738cd cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a738cf jb 0x11a738b3 */
  if (C.cf) goto L_11a738b3;
L_11a738d1:;
  /* 11a738d1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a738d3 call 0x11a740f8 */
  push32(0x11a738d8u); f_11a740f8();
  /* 11a738d8 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11a738db pop ecx */
  ECX = (pop32());
L_11a738dc:;
  /* 11a738dc add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a738df cmp esi, 0x11a784e0 */
  { uint32_t _a=(ESI),_b=(0x11a784e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a738e5 jl 0x11a7389f */
  if ((C.sf!=C.of)) goto L_11a7389f;
  /* 11a738e7 pop edi */
  EDI = (pop32());
  /* 11a738e8 pop esi */
  ESI = (pop32());
  /* 11a738e9 pop ebx */
  EBX = (pop32());
  /* 11a738ea ret  */
  ESPCHK(0x11a73897u, _esp0);
  ESP += 4; return;
}

/* FUN_100038eb @ 0x11a738eb (185 bytes, 71 insns) */
void f_11a738eb(void) {
  FTRACE(0x11a738ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a738eb push ebx */
  push32((uint32_t)(EBX));
  /* 11a738ec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a738ee cmp dword ptr [0x11a784e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a784e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a738f4 push esi */
  push32((uint32_t)(ESI));
  /* 11a738f5 push edi */
  push32((uint32_t)(EDI));
  /* 11a738f6 jne 0x11a738fd */
  if (!C.zf) goto L_11a738fd;
  /* 11a738f8 call 0x11a74713 */
  push32(0x11a738fdu); f_11a74713();
L_11a738fd:;
  /* 11a738fd mov esi, dword ptr [0x11a77f80] */
  ESI = (r32((uint32_t)(0x11a77f80)));
  /* 11a73903 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11a73905:;
  /* 11a73905 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a73907 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73909 je 0x11a7391d */
  if (C.zf) goto L_11a7391d;
  /* 11a7390b cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a7390d je 0x11a73910 */
  if (C.zf) goto L_11a73910;
  /* 11a7390f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a73910:;
  /* 11a73910 push esi */
  push32((uint32_t)(ESI));
  /* 11a73911 call 0x11a742c0 */
  push32(0x11a73916u); f_11a742c0();
  /* 11a73916 pop ecx */
  ECX = (pop32());
  /* 11a73917 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11a7391b jmp 0x11a73905 */
  goto L_11a73905;
L_11a7391d:;
  /* 11a7391d lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11a73924 push eax */
  push32((uint32_t)(EAX));
  /* 11a73925 call 0x11a74140 */
  push32(0x11a7392au); f_11a74140();
  /* 11a7392a mov esi, eax */
  ESI = (EAX);
  /* 11a7392c pop ecx */
  ECX = (pop32());
  /* 11a7392d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7392f mov dword ptr [0x11a77fb0], esi */
  w32((uint32_t)(0x11a77fb0), (ESI));
  /* 11a73935 jne 0x11a7393f */
  if (!C.zf) goto L_11a7393f;
  /* 11a73937 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a73939 call 0x11a73465 */
  push32(0x11a7393eu); f_11a73465();
  /* 11a7393e pop ecx */
  ECX = (pop32());
L_11a7393f:;
  /* 11a7393f mov edi, dword ptr [0x11a77f80] */
  EDI = (r32((uint32_t)(0x11a77f80)));
  /* 11a73945 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73947 je 0x11a73982 */
  if (C.zf) goto L_11a73982;
  /* 11a73949 push ebp */
  push32((uint32_t)(EBP));
L_11a7394a:;
  /* 11a7394a push edi */
  push32((uint32_t)(EDI));
  /* 11a7394b call 0x11a742c0 */
  push32(0x11a73950u); f_11a742c0();
  /* 11a73950 mov ebp, eax */
  EBP = (EAX);
  /* 11a73952 pop ecx */
  ECX = (pop32());
  /* 11a73953 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11a73954 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73957 je 0x11a7397b */
  if (C.zf) goto L_11a7397b;
  /* 11a73959 push ebp */
  push32((uint32_t)(EBP));
  /* 11a7395a call 0x11a74140 */
  push32(0x11a7395fu); f_11a74140();
  /* 11a7395f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73961 pop ecx */
  ECX = (pop32());
  /* 11a73962 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11a73964 jne 0x11a7396e */
  if (!C.zf) goto L_11a7396e;
  /* 11a73966 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a73968 call 0x11a73465 */
  push32(0x11a7396du); f_11a73465();
  /* 11a7396d pop ecx */
  ECX = (pop32());
L_11a7396e:;
  /* 11a7396e push edi */
  push32((uint32_t)(EDI));
  /* 11a7396f push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73971 call 0x11a741d0 */
  push32(0x11a73976u); f_11a741d0();
  /* 11a73976 pop ecx */
  ECX = (pop32());
  /* 11a73977 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7397a pop ecx */
  ECX = (pop32());
L_11a7397b:;
  /* 11a7397b add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7397d cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a7397f jne 0x11a7394a */
  if (!C.zf) goto L_11a7394a;
  /* 11a73981 pop ebp */
  EBP = (pop32());
L_11a73982:;
  /* 11a73982 push dword ptr [0x11a77f80] */
  push32((uint32_t)(r32((uint32_t)(0x11a77f80))));
  /* 11a73988 call 0x11a740f8 */
  push32(0x11a7398du); f_11a740f8();
  /* 11a7398d pop ecx */
  ECX = (pop32());
  /* 11a7398e mov dword ptr [0x11a77f80], ebx */
  w32((uint32_t)(0x11a77f80), (EBX));
  /* 11a73994 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11a73996 pop edi */
  EDI = (pop32());
  /* 11a73997 pop esi */
  ESI = (pop32());
  /* 11a73998 mov dword ptr [0x11a784e4], 1 */
  w32((uint32_t)(0x11a784e4), (0x1u));
  /* 11a739a2 pop ebx */
  EBX = (pop32());
  /* 11a739a3 ret  */
  ESPCHK(0x11a738ebu, _esp0);
  ESP += 4; return;
}

/* FUN_100039a4 @ 0x11a739a4 (153 bytes, 62 insns) */
void f_11a739a4(void) {
  FTRACE(0x11a739a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a739a4 push ebp */
  push32((uint32_t)(EBP));
  /* 11a739a5 mov ebp, esp */
  EBP = (ESP);
  /* 11a739a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a739a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a739a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a739aa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a739ac cmp dword ptr [0x11a784e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a784e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a739b2 push esi */
  push32((uint32_t)(ESI));
  /* 11a739b3 push edi */
  push32((uint32_t)(EDI));
  /* 11a739b4 jne 0x11a739bb */
  if (!C.zf) goto L_11a739bb;
  /* 11a739b6 call 0x11a74713 */
  push32(0x11a739bbu); f_11a74713();
L_11a739bb:;
  /* 11a739bb mov esi, 0x11a77fd4 */
  ESI = (0x11a77fd4u);
  /* 11a739c0 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a739c5 push esi */
  push32((uint32_t)(ESI));
  /* 11a739c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a739c7 call dword ptr [0x11a76074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76074))), 0x11a739cdu);
  /* 11a739cd mov eax, dword ptr [0x11a784f8] */
  EAX = (r32((uint32_t)(0x11a784f8)));
  /* 11a739d2 mov dword ptr [0x11a77fc0], esi */
  w32((uint32_t)(0x11a77fc0), (ESI));
  /* 11a739d8 mov edi, esi */
  EDI = (ESI);
  /* 11a739da cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a739dc je 0x11a739e0 */
  if (C.zf) goto L_11a739e0;
  /* 11a739de mov edi, eax */
  EDI = (EAX);
L_11a739e0:;
  /* 11a739e0 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a739e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a739e4 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a739e7 push eax */
  push32((uint32_t)(EAX));
  /* 11a739e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a739e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11a739ea push edi */
  push32((uint32_t)(EDI));
  /* 11a739eb call 0x11a73a3d */
  push32(0x11a739f0u); f_11a73a3d();
  /* 11a739f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a739f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a739f6 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11a739f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a739fa call 0x11a74140 */
  push32(0x11a739ffu); f_11a74140();
  /* 11a739ff mov esi, eax */
  ESI = (EAX);
  /* 11a73a01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73a04 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73a06 jne 0x11a73a10 */
  if (!C.zf) goto L_11a73a10;
  /* 11a73a08 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a73a0a call 0x11a73465 */
  push32(0x11a73a0fu); f_11a73465();
  /* 11a73a0f pop ecx */
  ECX = (pop32());
L_11a73a10:;
  /* 11a73a10 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a73a13 push eax */
  push32((uint32_t)(EAX));
  /* 11a73a14 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11a73a17 push eax */
  push32((uint32_t)(EAX));
  /* 11a73a18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a73a1b lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11a73a1e push eax */
  push32((uint32_t)(EAX));
  /* 11a73a1f push esi */
  push32((uint32_t)(ESI));
  /* 11a73a20 push edi */
  push32((uint32_t)(EDI));
  /* 11a73a21 call 0x11a73a3d */
  push32(0x11a73a26u); f_11a73a3d();
  /* 11a73a26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a73a29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73a2c dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a73a2d mov dword ptr [0x11a77fa8], esi */
  w32((uint32_t)(0x11a77fa8), (ESI));
  /* 11a73a33 pop edi */
  EDI = (pop32());
  /* 11a73a34 pop esi */
  ESI = (pop32());
  /* 11a73a35 mov dword ptr [0x11a77fa4], eax */
  w32((uint32_t)(0x11a77fa4), (EAX));
  /* 11a73a3a pop ebx */
  EBX = (pop32());
  /* 11a73a3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a73a3c ret  */
  ESPCHK(0x11a739a4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a3d @ 0x11a73a3d (436 bytes, 187 insns) */
void f_11a73a3d(void) {
  FTRACE(0x11a73a3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73a3d push ebp */
  push32((uint32_t)(EBP));
  /* 11a73a3e mov ebp, esp */
  EBP = (ESP);
  /* 11a73a40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a73a43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a73a46 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73a47 push esi */
  push32((uint32_t)(ESI));
  /* 11a73a48 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a73a4b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11a73a4e push edi */
  push32((uint32_t)(EDI));
  /* 11a73a4f mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a73a52 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11a73a58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a73a5b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a73a5d je 0x11a73a67 */
  if (C.zf) goto L_11a73a67;
  /* 11a73a5f mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a73a61 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73a64 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a73a67:;
  /* 11a73a67 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73a6a jne 0x11a73ab0 */
  if (!C.zf) goto L_11a73ab0;
L_11a73a6c:;
  /* 11a73a6c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11a73a6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73a70 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73a73 je 0x11a73a9e */
  if (C.zf) goto L_11a73a9e;
  /* 11a73a75 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a73a77 je 0x11a73a9e */
  if (C.zf) goto L_11a73a9e;
  /* 11a73a79 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a73a7c test byte ptr [edx + 0x11a782c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a782c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a73a83 je 0x11a73a91 */
  if (C.zf) goto L_11a73a91;
  /* 11a73a85 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73a87 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73a89 je 0x11a73a91 */
  if (C.zf) goto L_11a73a91;
  /* 11a73a8b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73a8d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a73a8f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a73a90 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a73a91:;
  /* 11a73a91 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73a93 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73a95 je 0x11a73a6c */
  if (C.zf) goto L_11a73a6c;
  /* 11a73a97 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73a99 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a73a9b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a73a9c jmp 0x11a73a6c */
  goto L_11a73a6c;
L_11a73a9e:;
  /* 11a73a9e inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73aa0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73aa2 je 0x11a73aa8 */
  if (C.zf) goto L_11a73aa8;
  /* 11a73aa4 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a73aa7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a73aa8:;
  /* 11a73aa8 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73aab jne 0x11a73af3 */
  if (!C.zf) goto L_11a73af3;
  /* 11a73aad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73aae jmp 0x11a73af3 */
  goto L_11a73af3;
L_11a73ab0:;
  /* 11a73ab0 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73ab2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73ab4 je 0x11a73abb */
  if (C.zf) goto L_11a73abb;
  /* 11a73ab6 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73ab8 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a73aba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a73abb:;
  /* 11a73abb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73abd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73abe movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a73ac1 test byte ptr [ebx + 0x11a782c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a782c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a73ac8 je 0x11a73ad6 */
  if (C.zf) goto L_11a73ad6;
  /* 11a73aca inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73acc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73ace je 0x11a73ad5 */
  if (C.zf) goto L_11a73ad5;
  /* 11a73ad0 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11a73ad2 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11a73ad4 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a73ad5:;
  /* 11a73ad5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a73ad6:;
  /* 11a73ad6 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73ad9 je 0x11a73ae4 */
  if (C.zf) goto L_11a73ae4;
  /* 11a73adb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a73add je 0x11a73ae8 */
  if (C.zf) goto L_11a73ae8;
  /* 11a73adf cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73ae2 jne 0x11a73ab0 */
  if (!C.zf) goto L_11a73ab0;
L_11a73ae4:;
  /* 11a73ae4 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a73ae6 jne 0x11a73aeb */
  if (!C.zf) goto L_11a73aeb;
L_11a73ae8:;
  /* 11a73ae8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a73ae9 jmp 0x11a73af3 */
  goto L_11a73af3;
L_11a73aeb:;
  /* 11a73aeb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73aed je 0x11a73af3 */
  if (C.zf) goto L_11a73af3;
  /* 11a73aef and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11a73af3:;
  /* 11a73af3 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11a73af7:;
  /* 11a73af7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73afa je 0x11a73be0 */
  if (C.zf) goto L_11a73be0;
L_11a73b00:;
  /* 11a73b00 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73b02 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b05 je 0x11a73b0c */
  if (C.zf) goto L_11a73b0c;
  /* 11a73b07 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b0a jne 0x11a73b0f */
  if (!C.zf) goto L_11a73b0f;
L_11a73b0c:;
  /* 11a73b0c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73b0d jmp 0x11a73b00 */
  goto L_11a73b00;
L_11a73b0f:;
  /* 11a73b0f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b12 je 0x11a73be0 */
  if (C.zf) goto L_11a73be0;
  /* 11a73b18 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a73b1a je 0x11a73b24 */
  if (C.zf) goto L_11a73b24;
  /* 11a73b1c mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11a73b1e add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73b21 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a73b24:;
  /* 11a73b24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a73b27 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11a73b29:;
  /* 11a73b29 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11a73b30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a73b32:;
  /* 11a73b32 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b35 jne 0x11a73b3b */
  if (!C.zf) goto L_11a73b3b;
  /* 11a73b37 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73b38 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a73b39 jmp 0x11a73b32 */
  goto L_11a73b32;
L_11a73b3b:;
  /* 11a73b3b cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b3e jne 0x11a73b6c */
  if (!C.zf) goto L_11a73b6c;
  /* 11a73b40 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11a73b43 jne 0x11a73b6a */
  if (!C.zf) goto L_11a73b6a;
  /* 11a73b45 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a73b47 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73b4a je 0x11a73b59 */
  if (C.zf) goto L_11a73b59;
  /* 11a73b4c cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b50 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11a73b53 jne 0x11a73b59 */
  if (!C.zf) goto L_11a73b59;
  /* 11a73b55 mov eax, edx */
  EAX = (EDX);
  /* 11a73b57 jmp 0x11a73b5c */
  goto L_11a73b5c;
L_11a73b59:;
  /* 11a73b59 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11a73b5c:;
  /* 11a73b5c mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a73b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a73b61 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73b64 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a73b67 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11a73b6a:;
  /* 11a73b6a shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11a73b6c:;
  /* 11a73b6c mov edx, ebx */
  EDX = (EBX);
  /* 11a73b6e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a73b6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a73b71 je 0x11a73b81 */
  if (C.zf) goto L_11a73b81;
  /* 11a73b73 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11a73b74:;
  /* 11a73b74 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73b76 je 0x11a73b7c */
  if (C.zf) goto L_11a73b7c;
  /* 11a73b78 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11a73b7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a73b7c:;
  /* 11a73b7c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73b7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a73b7f jne 0x11a73b74 */
  if (!C.zf) goto L_11a73b74;
L_11a73b81:;
  /* 11a73b81 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73b83 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a73b85 je 0x11a73bd1 */
  if (C.zf) goto L_11a73bd1;
  /* 11a73b87 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73b8b jne 0x11a73b97 */
  if (!C.zf) goto L_11a73b97;
  /* 11a73b8d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b90 je 0x11a73bd1 */
  if (C.zf) goto L_11a73bd1;
  /* 11a73b92 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73b95 je 0x11a73bd1 */
  if (C.zf) goto L_11a73bd1;
L_11a73b97:;
  /* 11a73b97 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73b9b je 0x11a73bcb */
  if (C.zf) goto L_11a73bcb;
  /* 11a73b9d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73b9f je 0x11a73bba */
  if (C.zf) goto L_11a73bba;
  /* 11a73ba1 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11a73ba4 test byte ptr [ebx + 0x11a782c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11a782c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a73bab je 0x11a73bb3 */
  if (C.zf) goto L_11a73bb3;
  /* 11a73bad mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a73baf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a73bb0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73bb1 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a73bb3:;
  /* 11a73bb3 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11a73bb5 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11a73bb7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a73bb8 jmp 0x11a73bc9 */
  goto L_11a73bc9;
L_11a73bba:;
  /* 11a73bba movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11a73bbd test byte ptr [edx + 0x11a782c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11a782c1)))&(0x4u); fl_logic(_r,8); }
  /* 11a73bc4 je 0x11a73bc9 */
  if (C.zf) goto L_11a73bc9;
  /* 11a73bc6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73bc7 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a73bc9:;
  /* 11a73bc9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11a73bcb:;
  /* 11a73bcb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73bcc jmp 0x11a73b29 */
  goto L_11a73b29;
L_11a73bd1:;
  /* 11a73bd1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a73bd3 je 0x11a73bd9 */
  if (C.zf) goto L_11a73bd9;
  /* 11a73bd5 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11a73bd8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11a73bd9:;
  /* 11a73bd9 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11a73bdb jmp 0x11a73af7 */
  goto L_11a73af7;
L_11a73be0:;
  /* 11a73be0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a73be2 je 0x11a73be7 */
  if (C.zf) goto L_11a73be7;
  /* 11a73be4 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a73be7:;
  /* 11a73be7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a73bea pop edi */
  EDI = (pop32());
  /* 11a73beb pop esi */
  ESI = (pop32());
  /* 11a73bec pop ebx */
  EBX = (pop32());
  /* 11a73bed inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11a73bef pop ebp */
  EBP = (pop32());
  /* 11a73bf0 ret  */
  ESPCHK(0x11a73a3du, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf1 @ 0x11a73bf1 (306 bytes, 132 insns) */
void f_11a73bf1(void) {
  FTRACE(0x11a73bf1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a73bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a73bf3 mov eax, dword ptr [0x11a780d8] */
  EAX = (r32((uint32_t)(0x11a780d8)));
  /* 11a73bf8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73bf9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a73bfa mov ebp, dword ptr [0x11a76060] */
  EBP = (r32((uint32_t)(0x11a76060)));
  /* 11a73c00 push esi */
  push32((uint32_t)(ESI));
  /* 11a73c01 push edi */
  push32((uint32_t)(EDI));
  /* 11a73c02 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a73c04 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a73c06 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a73c08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c0a jne 0x11a73c3f */
  if (!C.zf) goto L_11a73c3f;
  /* 11a73c0c call ebp */
  call_ind((uint32_t)(EBP), 0x11a73c0eu);
  /* 11a73c0e mov esi, eax */
  ESI = (EAX);
  /* 11a73c10 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c12 je 0x11a73c20 */
  if (C.zf) goto L_11a73c20;
  /* 11a73c14 mov dword ptr [0x11a780d8], 1 */
  w32((uint32_t)(0x11a780d8), (0x1u));
  /* 11a73c1e jmp 0x11a73c48 */
  goto L_11a73c48;
L_11a73c20:;
  /* 11a73c20 call dword ptr [0x11a76064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76064))), 0x11a73c26u);
  /* 11a73c26 mov edi, eax */
  EDI = (EAX);
  /* 11a73c28 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c2a je 0x11a73d1a */
  if (C.zf) goto L_11a73d1a;
  /* 11a73c30 mov dword ptr [0x11a780d8], 2 */
  w32((uint32_t)(0x11a780d8), (0x2u));
  /* 11a73c3a jmp 0x11a73cce */
  goto L_11a73cce;
L_11a73c3f:;
  /* 11a73c3f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c42 jne 0x11a73cc9 */
  if (!C.zf) goto L_11a73cc9;
L_11a73c48:;
  /* 11a73c48 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c4a jne 0x11a73c58 */
  if (!C.zf) goto L_11a73c58;
  /* 11a73c4c call ebp */
  call_ind((uint32_t)(EBP), 0x11a73c4eu);
  /* 11a73c4e mov esi, eax */
  ESI = (EAX);
  /* 11a73c50 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c52 je 0x11a73d1a */
  if (C.zf) goto L_11a73d1a;
L_11a73c58:;
  /* 11a73c58 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a73c5b mov eax, esi */
  EAX = (ESI);
  /* 11a73c5d je 0x11a73c6d */
  if (C.zf) goto L_11a73c6d;
L_11a73c5f:;
  /* 11a73c5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73c60 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73c61 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a73c64 jne 0x11a73c5f */
  if (!C.zf) goto L_11a73c5f;
  /* 11a73c66 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73c67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73c68 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11a73c6b jne 0x11a73c5f */
  if (!C.zf) goto L_11a73c5f;
L_11a73c6d:;
  /* 11a73c6d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73c6f mov edi, dword ptr [0x11a76068] */
  EDI = (r32((uint32_t)(0x11a76068)));
  /* 11a73c75 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a73c77 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c78 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c79 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73c7a push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c7b push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c7c push eax */
  push32((uint32_t)(EAX));
  /* 11a73c7d push esi */
  push32((uint32_t)(ESI));
  /* 11a73c7e push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c7f push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c80 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11a73c84 call edi */
  call_ind((uint32_t)(EDI), 0x11a73c86u);
  /* 11a73c86 mov ebp, eax */
  EBP = (EAX);
  /* 11a73c88 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c8a je 0x11a73cbe */
  if (C.zf) goto L_11a73cbe;
  /* 11a73c8c push ebp */
  push32((uint32_t)(EBP));
  /* 11a73c8d call 0x11a74140 */
  push32(0x11a73c92u); f_11a74140();
  /* 11a73c92 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73c94 pop ecx */
  ECX = (pop32());
  /* 11a73c95 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11a73c99 je 0x11a73cbe */
  if (C.zf) goto L_11a73cbe;
  /* 11a73c9b push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c9c push ebx */
  push32((uint32_t)(EBX));
  /* 11a73c9d push ebp */
  push32((uint32_t)(EBP));
  /* 11a73c9e push eax */
  push32((uint32_t)(EAX));
  /* 11a73c9f push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11a73ca3 push esi */
  push32((uint32_t)(ESI));
  /* 11a73ca4 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73ca5 push ebx */
  push32((uint32_t)(EBX));
  /* 11a73ca6 call edi */
  call_ind((uint32_t)(EDI), 0x11a73ca8u);
  /* 11a73ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73caa jne 0x11a73cba */
  if (!C.zf) goto L_11a73cba;
  /* 11a73cac push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11a73cb0 call 0x11a740f8 */
  push32(0x11a73cb5u); f_11a740f8();
  /* 11a73cb5 pop ecx */
  ECX = (pop32());
  /* 11a73cb6 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11a73cba:;
  /* 11a73cba mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11a73cbe:;
  /* 11a73cbe push esi */
  push32((uint32_t)(ESI));
  /* 11a73cbf call dword ptr [0x11a7606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7606c))), 0x11a73cc5u);
  /* 11a73cc5 mov eax, ebx */
  EAX = (EBX);
  /* 11a73cc7 jmp 0x11a73d1c */
  goto L_11a73d1c;
L_11a73cc9:;
  /* 11a73cc9 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73ccc jne 0x11a73d1a */
  if (!C.zf) goto L_11a73d1a;
L_11a73cce:;
  /* 11a73cce cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73cd0 jne 0x11a73cde */
  if (!C.zf) goto L_11a73cde;
  /* 11a73cd2 call dword ptr [0x11a76064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76064))), 0x11a73cd8u);
  /* 11a73cd8 mov edi, eax */
  EDI = (EAX);
  /* 11a73cda cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73cdc je 0x11a73d1a */
  if (C.zf) goto L_11a73d1a;
L_11a73cde:;
  /* 11a73cde cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73ce0 mov eax, edi */
  EAX = (EDI);
  /* 11a73ce2 je 0x11a73cee */
  if (C.zf) goto L_11a73cee;
L_11a73ce4:;
  /* 11a73ce4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73ce5 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73ce7 jne 0x11a73ce4 */
  if (!C.zf) goto L_11a73ce4;
  /* 11a73ce9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73cea cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a73cec jne 0x11a73ce4 */
  if (!C.zf) goto L_11a73ce4;
L_11a73cee:;
  /* 11a73cee sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73cf0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73cf1 mov ebp, eax */
  EBP = (EAX);
  /* 11a73cf3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a73cf4 call 0x11a74140 */
  push32(0x11a73cf9u); f_11a74140();
  /* 11a73cf9 mov esi, eax */
  ESI = (EAX);
  /* 11a73cfb pop ecx */
  ECX = (pop32());
  /* 11a73cfc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73cfe jne 0x11a73d04 */
  if (!C.zf) goto L_11a73d04;
  /* 11a73d00 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a73d02 jmp 0x11a73d0f */
  goto L_11a73d0f;
L_11a73d04:;
  /* 11a73d04 push ebp */
  push32((uint32_t)(EBP));
  /* 11a73d05 push edi */
  push32((uint32_t)(EDI));
  /* 11a73d06 push esi */
  push32((uint32_t)(ESI));
  /* 11a73d07 call 0x11a74730 */
  push32(0x11a73d0cu); f_11a74730();
  /* 11a73d0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73d0f:;
  /* 11a73d0f push edi */
  push32((uint32_t)(EDI));
  /* 11a73d10 call dword ptr [0x11a76070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76070))), 0x11a73d16u);
  /* 11a73d16 mov eax, esi */
  EAX = (ESI);
  /* 11a73d18 jmp 0x11a73d1c */
  goto L_11a73d1c;
L_11a73d1a:;
  /* 11a73d1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a73d1c:;
  /* 11a73d1c pop edi */
  EDI = (pop32());
  /* 11a73d1d pop esi */
  ESI = (pop32());
  /* 11a73d1e pop ebp */
  EBP = (pop32());
  /* 11a73d1f pop ebx */
  EBX = (pop32());
  /* 11a73d20 pop ecx */
  ECX = (pop32());
  /* 11a73d21 pop ecx */
  ECX = (pop32());
  /* 11a73d22 ret  */
  ESPCHK(0x11a73bf1u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d23 @ 0x11a73d23 (60 bytes, 20 insns) */
void f_11a73d23(void) {
  FTRACE(0x11a73d23u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73d23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a73d25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73d27 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73d2b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a73d30 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a73d33 push eax */
  push32((uint32_t)(EAX));
  /* 11a73d34 call dword ptr [0x11a76058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76058))), 0x11a73d3au);
  /* 11a73d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73d3c mov dword ptr [0x11a783c8], eax */
  w32((uint32_t)(0x11a783c8), (EAX));
  /* 11a73d41 je 0x11a73d58 */
  if (C.zf) goto L_11a73d58;
  /* 11a73d43 call 0x11a74a65 */
  push32(0x11a73d48u); f_11a74a65();
  /* 11a73d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73d4a jne 0x11a73d5b */
  if (!C.zf) goto L_11a73d5b;
  /* 11a73d4c push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a73d52 call dword ptr [0x11a7605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7605c))), 0x11a73d58u);
L_11a73d58:;
  /* 11a73d58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a73d5a ret  */
  ESPCHK(0x11a73d23u, _esp0);
  ESP += 4; return;
L_11a73d5b:;
  /* 11a73d5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11a73d5d pop eax */
  EAX = (pop32());
  /* 11a73d5e ret  */
  ESPCHK(0x11a73d23u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d5f @ 0x11a73d5f (117 bytes, 38 insns) */
void f_11a73d5f(void) {
  FTRACE(0x11a73d5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73d5f push ebx */
  push32((uint32_t)(EBX));
  /* 11a73d60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a73d62 cmp dword ptr [0x11a78190], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a78190))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73d68 push ebp */
  push32((uint32_t)(EBP));
  /* 11a73d69 mov ebp, dword ptr [0x11a76050] */
  EBP = (r32((uint32_t)(0x11a76050)));
  /* 11a73d6f jle 0x11a73db5 */
  if ((C.zf||C.sf!=C.of)) goto L_11a73db5;
  /* 11a73d71 mov eax, dword ptr [0x11a78194] */
  EAX = (r32((uint32_t)(0x11a78194)));
  /* 11a73d76 push esi */
  push32((uint32_t)(ESI));
  /* 11a73d77 push edi */
  push32((uint32_t)(EDI));
  /* 11a73d78 mov edi, dword ptr [0x11a76054] */
  EDI = (r32((uint32_t)(0x11a76054)));
  /* 11a73d7e lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11a73d81:;
  /* 11a73d81 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a73d86 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a73d8b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73d8d call edi */
  call_ind((uint32_t)(EDI), 0x11a73d8fu);
  /* 11a73d8f push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a73d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73d96 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73d98 call edi */
  call_ind((uint32_t)(EDI), 0x11a73d9au);
  /* 11a73d9a push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11a73d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73d9f push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a73da5 call ebp */
  call_ind((uint32_t)(EBP), 0x11a73da7u);
  /* 11a73da7 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73daa inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a73dab cmp ebx, dword ptr [0x11a78190] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a78190))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73db1 jl 0x11a73d81 */
  if ((C.sf!=C.of)) goto L_11a73d81;
  /* 11a73db3 pop edi */
  EDI = (pop32());
  /* 11a73db4 pop esi */
  ESI = (pop32());
L_11a73db5:;
  /* 11a73db5 push dword ptr [0x11a78194] */
  push32((uint32_t)(r32((uint32_t)(0x11a78194))));
  /* 11a73dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73dbd push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a73dc3 call ebp */
  call_ind((uint32_t)(EBP), 0x11a73dc5u);
  /* 11a73dc5 push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a73dcb call dword ptr [0x11a7605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7605c))), 0x11a73dd1u);
  /* 11a73dd1 pop ebp */
  EBP = (pop32());
  /* 11a73dd2 pop ebx */
  EBX = (pop32());
  /* 11a73dd3 ret  */
  ESPCHK(0x11a73d5fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd4 @ 0x11a73dd4 (57 bytes, 18 insns) */
void f_11a73dd4(void) {
  FTRACE(0x11a73dd4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73dd4 mov eax, dword ptr [0x11a77f88] */
  EAX = (r32((uint32_t)(0x11a77f88)));
  /* 11a73dd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73ddc je 0x11a73deb */
  if (C.zf) goto L_11a73deb;
  /* 11a73dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73de0 jne 0x11a73e0c */
  if (!C.zf) goto L_11a73e0c;
  /* 11a73de2 cmp dword ptr [0x11a77f8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a77f8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73de9 jne 0x11a73e0c */
  if (!C.zf) goto L_11a73e0c;
L_11a73deb:;
  /* 11a73deb push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a73df0 call 0x11a73e0d */
  push32(0x11a73df5u); f_11a73e0d();
  /* 11a73df5 mov eax, dword ptr [0x11a780dc] */
  EAX = (r32((uint32_t)(0x11a780dc)));
  /* 11a73dfa pop ecx */
  ECX = (pop32());
  /* 11a73dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73dfd je 0x11a73e01 */
  if (C.zf) goto L_11a73e01;
  /* 11a73dff call eax */
  call_ind((uint32_t)(EAX), 0x11a73e01u);
L_11a73e01:;
  /* 11a73e01 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a73e06 call 0x11a73e0d */
  push32(0x11a73e0bu); f_11a73e0d();
  /* 11a73e0b pop ecx */
  ECX = (pop32());
L_11a73e0c:;
  /* 11a73e0c ret  */
  ESPCHK(0x11a73dd4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e0d @ 0x11a73e0d (339 bytes, 100 insns) */
void f_11a73e0d(void) {
  FTRACE(0x11a73e0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73e0d push ebp */
  push32((uint32_t)(EBP));
  /* 11a73e0e mov ebp, esp */
  EBP = (ESP);
  /* 11a73e10 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a73e19 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a73e1b mov eax, 0x11a777e8 */
  EAX = (0x11a777e8u);
L_11a73e20:;
  /* 11a73e20 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e22 je 0x11a73e2f */
  if (C.zf) goto L_11a73e2f;
  /* 11a73e24 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73e27 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a73e28 cmp eax, 0x11a77878 */
  { uint32_t _a=(EAX),_b=(0x11a77878u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e2d jl 0x11a73e20 */
  if ((C.sf!=C.of)) goto L_11a73e20;
L_11a73e2f:;
  /* 11a73e2f push esi */
  push32((uint32_t)(ESI));
  /* 11a73e30 mov esi, ecx */
  ESI = (ECX);
  /* 11a73e32 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11a73e35 cmp edx, dword ptr [esi + 0x11a777e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11a777e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e3b jne 0x11a73f5d */
  if (!C.zf) goto L_11a73f5d;
  /* 11a73e41 mov eax, dword ptr [0x11a77f88] */
  EAX = (r32((uint32_t)(0x11a77f88)));
  /* 11a73e46 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e49 je 0x11a73f37 */
  if (C.zf) goto L_11a73f37;
  /* 11a73e4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73e51 jne 0x11a73e60 */
  if (!C.zf) goto L_11a73e60;
  /* 11a73e53 cmp dword ptr [0x11a77f8c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11a77f8c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e5a je 0x11a73f37 */
  if (C.zf) goto L_11a73f37;
L_11a73e60:;
  /* 11a73e60 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73e66 je 0x11a73f5d */
  if (C.zf) goto L_11a73f5d;
  /* 11a73e6c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a73e72 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a73e77 push eax */
  push32((uint32_t)(EAX));
  /* 11a73e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73e7a call dword ptr [0x11a76074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76074))), 0x11a73e80u);
  /* 11a73e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73e82 jne 0x11a73e97 */
  if (!C.zf) goto L_11a73e97;
  /* 11a73e84 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a73e8a push 0x11a76438 */
  push32((uint32_t)(0x11a76438u));
  /* 11a73e8f push eax */
  push32((uint32_t)(EAX));
  /* 11a73e90 call 0x11a741d0 */
  push32(0x11a73e95u); f_11a741d0();
  /* 11a73e95 pop ecx */
  ECX = (pop32());
  /* 11a73e96 pop ecx */
  ECX = (pop32());
L_11a73e97:;
  /* 11a73e97 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a73e9d push edi */
  push32((uint32_t)(EDI));
  /* 11a73e9e push eax */
  push32((uint32_t)(EAX));
  /* 11a73e9f lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11a73ea5 call 0x11a742c0 */
  push32(0x11a73eaau); f_11a742c0();
  /* 11a73eaa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a73eab pop ecx */
  ECX = (pop32());
  /* 11a73eac cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73eaf jbe 0x11a73eda */
  if ((C.cf||C.zf)) goto L_11a73eda;
  /* 11a73eb1 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a73eb7 push eax */
  push32((uint32_t)(EAX));
  /* 11a73eb8 call 0x11a742c0 */
  push32(0x11a73ebdu); f_11a742c0();
  /* 11a73ebd mov edi, eax */
  EDI = (EAX);
  /* 11a73ebf lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11a73ec5 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a73ec8 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a73eca add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73ecc push 0x11a76434 */
  push32((uint32_t)(0x11a76434u));
  /* 11a73ed1 push edi */
  push32((uint32_t)(EDI));
  /* 11a73ed2 call 0x11a75340 */
  push32(0x11a73ed7u); f_11a75340();
  /* 11a73ed7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a73eda:;
  /* 11a73eda lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a73ee0 push 0x11a76418 */
  push32((uint32_t)(0x11a76418u));
  /* 11a73ee5 push eax */
  push32((uint32_t)(EAX));
  /* 11a73ee6 call 0x11a741d0 */
  push32(0x11a73eebu); f_11a741d0();
  /* 11a73eeb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a73ef1 push edi */
  push32((uint32_t)(EDI));
  /* 11a73ef2 push eax */
  push32((uint32_t)(EAX));
  /* 11a73ef3 call 0x11a741e0 */
  push32(0x11a73ef8u); f_11a741e0();
  /* 11a73ef8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a73efe push 0x11a76414 */
  push32((uint32_t)(0x11a76414u));
  /* 11a73f03 push eax */
  push32((uint32_t)(EAX));
  /* 11a73f04 call 0x11a741e0 */
  push32(0x11a73f09u); f_11a741e0();
  /* 11a73f09 push dword ptr [esi + 0x11a777ec] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11a777ec))));
  /* 11a73f0f lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a73f15 push eax */
  push32((uint32_t)(EAX));
  /* 11a73f16 call 0x11a741e0 */
  push32(0x11a73f1bu); f_11a741e0();
  /* 11a73f1b push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a73f20 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11a73f26 push 0x11a763ec */
  push32((uint32_t)(0x11a763ecu));
  /* 11a73f2b push eax */
  push32((uint32_t)(EAX));
  /* 11a73f2c call 0x11a752ae */
  push32(0x11a73f31u); f_11a752ae();
  /* 11a73f31 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73f34 pop edi */
  EDI = (pop32());
  /* 11a73f35 jmp 0x11a73f5d */
  goto L_11a73f5d;
L_11a73f37:;
  /* 11a73f37 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a73f3a lea esi, [esi + 0x11a777ec] */
  ESI = ((uint32_t)(ESI + 0x11a777ec));
  /* 11a73f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a73f42 push eax */
  push32((uint32_t)(EAX));
  /* 11a73f43 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73f45 call 0x11a742c0 */
  push32(0x11a73f4au); f_11a742c0();
  /* 11a73f4a pop ecx */
  ECX = (pop32());
  /* 11a73f4b push eax */
  push32((uint32_t)(EAX));
  /* 11a73f4c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73f4e push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a73f50 call dword ptr [0x11a76084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76084))), 0x11a73f56u);
  /* 11a73f56 push eax */
  push32((uint32_t)(EAX));
  /* 11a73f57 call dword ptr [0x11a7604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7604c))), 0x11a73f5du);
L_11a73f5d:;
  /* 11a73f5d pop esi */
  ESI = (pop32());
  /* 11a73f5e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a73f5f ret  */
  ESPCHK(0x11a73e0du, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x11a73f60 (41 bytes, 12 insns) */
void f_11a73f60(void) {
  FTRACE(0x11a73f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73f60 push esi */
  push32((uint32_t)(ESI));
  /* 11a73f61 mov esi, dword ptr [0x11a76048] */
  ESI = (r32((uint32_t)(0x11a76048)));
  /* 11a73f67 push dword ptr [0x11a778bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a778bc))));
  /* 11a73f6d call esi */
  call_ind((uint32_t)(ESI), 0x11a73f6fu);
  /* 11a73f6f push dword ptr [0x11a778ac] */
  push32((uint32_t)(r32((uint32_t)(0x11a778ac))));
  /* 11a73f75 call esi */
  call_ind((uint32_t)(ESI), 0x11a73f77u);
  /* 11a73f77 push dword ptr [0x11a7789c] */
  push32((uint32_t)(r32((uint32_t)(0x11a7789c))));
  /* 11a73f7d call esi */
  call_ind((uint32_t)(ESI), 0x11a73f7fu);
  /* 11a73f7f push dword ptr [0x11a7787c] */
  push32((uint32_t)(r32((uint32_t)(0x11a7787c))));
  /* 11a73f85 call esi */
  call_ind((uint32_t)(ESI), 0x11a73f87u);
  /* 11a73f87 pop esi */
  ESI = (pop32());
  /* 11a73f88 ret  */
  ESPCHK(0x11a73f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f89 @ 0x11a73f89 (108 bytes, 34 insns) */
void f_11a73f89(void) {
  FTRACE(0x11a73f89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73f89 push esi */
  push32((uint32_t)(ESI));
  /* 11a73f8a push edi */
  push32((uint32_t)(EDI));
  /* 11a73f8b mov edi, dword ptr [0x11a76078] */
  EDI = (r32((uint32_t)(0x11a76078)));
  /* 11a73f91 mov esi, 0x11a77878 */
  ESI = (0x11a77878u);
L_11a73f96:;
  /* 11a73f96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a73f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a73f9a je 0x11a73fc7 */
  if (C.zf) goto L_11a73fc7;
  /* 11a73f9c cmp esi, 0x11a778bc */
  { uint32_t _a=(ESI),_b=(0x11a778bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73fa2 je 0x11a73fc7 */
  if (C.zf) goto L_11a73fc7;
  /* 11a73fa4 cmp esi, 0x11a778ac */
  { uint32_t _a=(ESI),_b=(0x11a778acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73faa je 0x11a73fc7 */
  if (C.zf) goto L_11a73fc7;
  /* 11a73fac cmp esi, 0x11a7789c */
  { uint32_t _a=(ESI),_b=(0x11a7789cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73fb2 je 0x11a73fc7 */
  if (C.zf) goto L_11a73fc7;
  /* 11a73fb4 cmp esi, 0x11a7787c */
  { uint32_t _a=(ESI),_b=(0x11a7787cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73fba je 0x11a73fc7 */
  if (C.zf) goto L_11a73fc7;
  /* 11a73fbc push eax */
  push32((uint32_t)(EAX));
  /* 11a73fbd call edi */
  call_ind((uint32_t)(EDI), 0x11a73fbfu);
  /* 11a73fbf push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a73fc1 call 0x11a740f8 */
  push32(0x11a73fc6u); f_11a740f8();
  /* 11a73fc6 pop ecx */
  ECX = (pop32());
L_11a73fc7:;
  /* 11a73fc7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a73fca cmp esi, 0x11a77938 */
  { uint32_t _a=(ESI),_b=(0x11a77938u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a73fd0 jl 0x11a73f96 */
  if ((C.sf!=C.of)) goto L_11a73f96;
  /* 11a73fd2 push dword ptr [0x11a7789c] */
  push32((uint32_t)(r32((uint32_t)(0x11a7789c))));
  /* 11a73fd8 call edi */
  call_ind((uint32_t)(EDI), 0x11a73fdau);
  /* 11a73fda push dword ptr [0x11a778ac] */
  push32((uint32_t)(r32((uint32_t)(0x11a778ac))));
  /* 11a73fe0 call edi */
  call_ind((uint32_t)(EDI), 0x11a73fe2u);
  /* 11a73fe2 push dword ptr [0x11a778bc] */
  push32((uint32_t)(r32((uint32_t)(0x11a778bc))));
  /* 11a73fe8 call edi */
  call_ind((uint32_t)(EDI), 0x11a73feau);
  /* 11a73fea push dword ptr [0x11a7787c] */
  push32((uint32_t)(r32((uint32_t)(0x11a7787c))));
  /* 11a73ff0 call edi */
  call_ind((uint32_t)(EDI), 0x11a73ff2u);
  /* 11a73ff2 pop edi */
  EDI = (pop32());
  /* 11a73ff3 pop esi */
  ESI = (pop32());
  /* 11a73ff4 ret  */
  ESPCHK(0x11a73f89u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff5 @ 0x11a73ff5 (97 bytes, 37 insns) */
void f_11a73ff5(void) {
  FTRACE(0x11a73ff5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a73ff5 push ebp */
  push32((uint32_t)(EBP));
  /* 11a73ff6 mov ebp, esp */
  EBP = (ESP);
  /* 11a73ff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a73ffb push esi */
  push32((uint32_t)(ESI));
  /* 11a73ffc cmp dword ptr [eax*4 + 0x11a77878], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11a77878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74004 lea esi, [eax*4 + 0x11a77878] */
  ESI = ((uint32_t)(EAX*4 + 0x11a77878));
  /* 11a7400b jne 0x11a7404b */
  if (!C.zf) goto L_11a7404b;
  /* 11a7400d push edi */
  push32((uint32_t)(EDI));
  /* 11a7400e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a74010 call 0x11a74140 */
  push32(0x11a74015u); f_11a74140();
  /* 11a74015 mov edi, eax */
  EDI = (EAX);
  /* 11a74017 pop ecx */
  ECX = (pop32());
  /* 11a74018 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a7401a jne 0x11a74024 */
  if (!C.zf) goto L_11a74024;
  /* 11a7401c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a7401e call 0x11a73465 */
  push32(0x11a74023u); f_11a73465();
  /* 11a74023 pop ecx */
  ECX = (pop32());
L_11a74024:;
  /* 11a74024 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a74026 call 0x11a73ff5 */
  push32(0x11a7402bu); f_11a73ff5();
  /* 11a7402b cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7402e pop ecx */
  ECX = (pop32());
  /* 11a7402f push edi */
  push32((uint32_t)(EDI));
  /* 11a74030 jne 0x11a7403c */
  if (!C.zf) goto L_11a7403c;
  /* 11a74032 call dword ptr [0x11a76048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76048))), 0x11a74038u);
  /* 11a74038 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a7403a jmp 0x11a74042 */
  goto L_11a74042;
L_11a7403c:;
  /* 11a7403c call 0x11a740f8 */
  push32(0x11a74041u); f_11a740f8();
  /* 11a74041 pop ecx */
  ECX = (pop32());
L_11a74042:;
  /* 11a74042 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a74044 call 0x11a74056 */
  push32(0x11a74049u); f_11a74056();
  /* 11a74049 pop ecx */
  ECX = (pop32());
  /* 11a7404a pop edi */
  EDI = (pop32());
L_11a7404b:;
  /* 11a7404b push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11a7404d call dword ptr [0x11a76044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76044))), 0x11a74053u);
  /* 11a74053 pop esi */
  ESI = (pop32());
  /* 11a74054 pop ebp */
  EBP = (pop32());
  /* 11a74055 ret  */
  ESPCHK(0x11a73ff5u, _esp0);
  ESP += 4; return;
}

/* FUN_10004056 @ 0x11a74056 (21 bytes, 7 insns) */
void f_11a74056(void) {
  FTRACE(0x11a74056u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74056 push ebp */
  push32((uint32_t)(EBP));
  /* 11a74057 mov ebp, esp */
  EBP = (ESP);
  /* 11a74059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a7405c push dword ptr [eax*4 + 0x11a77878] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11a77878))));
  /* 11a74063 call dword ptr [0x11a76040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76040))), 0x11a74069u);
  /* 11a74069 pop ebp */
  EBP = (pop32());
  /* 11a7406a ret  */
  ESPCHK(0x11a74056u, _esp0);
  ESP += 4; return;
}

/* FUN_1000406b @ 0x11a7406b (141 bytes, 56 insns) */
void f_11a7406b(void) {
  FTRACE(0x11a7406bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7406b push ebx */
  push32((uint32_t)(EBX));
  /* 11a7406c push esi */
  push32((uint32_t)(ESI));
  /* 11a7406d mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11a74071 push edi */
  push32((uint32_t)(EDI));
  /* 11a74072 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a74077 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7407a mov ebx, esi */
  EBX = (ESI);
  /* 11a7407c ja 0x11a7408b */
  if ((!C.cf&&!C.zf)) goto L_11a7408b;
  /* 11a7407e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a74080 jne 0x11a74085 */
  if (!C.zf) goto L_11a74085;
  /* 11a74082 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a74084 pop esi */
  ESI = (pop32());
L_11a74085:;
  /* 11a74085 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74088 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11a7408b:;
  /* 11a7408b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a7408d cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74090 ja 0x11a740cc */
  if ((!C.cf&&!C.zf)) goto L_11a740cc;
  /* 11a74092 cmp ebx, dword ptr [0x11a77ac0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a77ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74098 ja 0x11a740b7 */
  if ((!C.cf&&!C.zf)) goto L_11a740b7;
  /* 11a7409a push 9 */
  push32((uint32_t)(0x9u));
  /* 11a7409c call 0x11a73ff5 */
  push32(0x11a740a1u); f_11a73ff5();
  /* 11a740a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a740a2 call 0x11a74df9 */
  push32(0x11a740a7u); f_11a74df9();
  /* 11a740a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a740a9 mov edi, eax */
  EDI = (EAX);
  /* 11a740ab call 0x11a74056 */
  push32(0x11a740b0u); f_11a74056();
  /* 11a740b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a740b3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a740b5 jne 0x11a740e2 */
  if (!C.zf) goto L_11a740e2;
L_11a740b7:;
  /* 11a740b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a740b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a740ba push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a740c0 call dword ptr [0x11a7603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7603c))), 0x11a740c6u);
  /* 11a740c6 mov edi, eax */
  EDI = (EAX);
  /* 11a740c8 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a740ca jne 0x11a740ee */
  if (!C.zf) goto L_11a740ee;
L_11a740cc:;
  /* 11a740cc cmp dword ptr [0x11a78154], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a78154))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a740d3 je 0x11a740ee */
  if (C.zf) goto L_11a740ee;
  /* 11a740d5 push esi */
  push32((uint32_t)(ESI));
  /* 11a740d6 call 0x11a75498 */
  push32(0x11a740dbu); f_11a75498();
  /* 11a740db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a740dd pop ecx */
  ECX = (pop32());
  /* 11a740de je 0x11a740f4 */
  if (C.zf) goto L_11a740f4;
  /* 11a740e0 jmp 0x11a7408b */
  goto L_11a7408b;
L_11a740e2:;
  /* 11a740e2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a740e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a740e5 push edi */
  push32((uint32_t)(EDI));
  /* 11a740e6 call 0x11a75440 */
  push32(0x11a740ebu); f_11a75440();
  /* 11a740eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a740ee:;
  /* 11a740ee mov eax, edi */
  EAX = (EDI);
L_11a740f0:;
  /* 11a740f0 pop edi */
  EDI = (pop32());
  /* 11a740f1 pop esi */
  ESI = (pop32());
  /* 11a740f2 pop ebx */
  EBX = (pop32());
  /* 11a740f3 ret  */
  ESPCHK(0x11a7406bu, _esp0);
  ESP += 4; return;
L_11a740f4:;
  /* 11a740f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a740f6 jmp 0x11a740f0 */
  goto L_11a740f0;
}

/* FUN_100040f8 @ 0x11a740f8 (72 bytes, 29 insns) */
void f_11a740f8(void) {
  FTRACE(0x11a740f8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a740f8 push esi */
  push32((uint32_t)(ESI));
  /* 11a740f9 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a740fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a740ff je 0x11a7413e */
  if (C.zf) goto L_11a7413e;
  /* 11a74101 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a74103 call 0x11a73ff5 */
  push32(0x11a74108u); f_11a73ff5();
  /* 11a74108 push esi */
  push32((uint32_t)(ESI));
  /* 11a74109 call 0x11a74aa3 */
  push32(0x11a7410eu); f_11a74aa3();
  /* 11a7410e pop ecx */
  ECX = (pop32());
  /* 11a7410f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a74111 pop ecx */
  ECX = (pop32());
  /* 11a74112 je 0x11a74127 */
  if (C.zf) goto L_11a74127;
  /* 11a74114 push esi */
  push32((uint32_t)(ESI));
  /* 11a74115 push eax */
  push32((uint32_t)(EAX));
  /* 11a74116 call 0x11a74ace */
  push32(0x11a7411bu); f_11a74ace();
  /* 11a7411b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a7411d call 0x11a74056 */
  push32(0x11a74122u); f_11a74056();
  /* 11a74122 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74125 pop esi */
  ESI = (pop32());
  /* 11a74126 ret  */
  ESPCHK(0x11a740f8u, _esp0);
  ESP += 4; return;
L_11a74127:;
  /* 11a74127 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a74129 call 0x11a74056 */
  push32(0x11a7412eu); f_11a74056();
  /* 11a7412e pop ecx */
  ECX = (pop32());
  /* 11a7412f push esi */
  push32((uint32_t)(ESI));
  /* 11a74130 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a74132 push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a74138 call dword ptr [0x11a76050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76050))), 0x11a7413eu);
L_11a7413e:;
  /* 11a7413e pop esi */
  ESI = (pop32());
  /* 11a7413f ret  */
  ESPCHK(0x11a740f8u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11a74140 (18 bytes, 6 insns) */
void f_11a74140(void) {
  FTRACE(0x11a74140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74140 push dword ptr [0x11a78154] */
  push32((uint32_t)(r32((uint32_t)(0x11a78154))));
  /* 11a74146 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11a7414a call 0x11a74152 */
  push32(0x11a7414fu); f_11a74152();
  /* 11a7414f pop ecx */
  ECX = (pop32());
  /* 11a74150 pop ecx */
  ECX = (pop32());
  /* 11a74151 ret  */
  ESPCHK(0x11a74140u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11a74152 (44 bytes, 16 insns) */
void f_11a74152(void) {
  FTRACE(0x11a74152u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74152 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74157 ja 0x11a7417b */
  if ((!C.cf&&!C.zf)) goto L_11a7417b;
L_11a74159:;
  /* 11a74159 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a7415d call 0x11a7417e */
  push32(0x11a74162u); f_11a7417e();
  /* 11a74162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a74164 pop ecx */
  ECX = (pop32());
  /* 11a74165 jne 0x11a7417d */
  if (!C.zf) goto L_11a7417d;
  /* 11a74167 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7416b je 0x11a7417d */
  if (C.zf) goto L_11a7417d;
  /* 11a7416d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a74171 call 0x11a75498 */
  push32(0x11a74176u); f_11a75498();
  /* 11a74176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a74178 pop ecx */
  ECX = (pop32());
  /* 11a74179 jne 0x11a74159 */
  if (!C.zf) goto L_11a74159;
L_11a7417b:;
  /* 11a7417b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a7417d:;
  /* 11a7417d ret  */
  ESPCHK(0x11a74152u, _esp0);
  ESP += 4; return;
}

/* FUN_1000417e @ 0x11a7417e (78 bytes, 30 insns) */
void f_11a7417e(void) {
  FTRACE(0x11a7417eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7417e push esi */
  push32((uint32_t)(ESI));
  /* 11a7417f mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a74183 cmp esi, dword ptr [0x11a77ac0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11a77ac0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74189 push edi */
  push32((uint32_t)(EDI));
  /* 11a7418a ja 0x11a741ad */
  if ((!C.cf&&!C.zf)) goto L_11a741ad;
  /* 11a7418c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a7418e call 0x11a73ff5 */
  push32(0x11a74193u); f_11a73ff5();
  /* 11a74193 push esi */
  push32((uint32_t)(ESI));
  /* 11a74194 call 0x11a74df9 */
  push32(0x11a74199u); f_11a74df9();
  /* 11a74199 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a7419b mov edi, eax */
  EDI = (EAX);
  /* 11a7419d call 0x11a74056 */
  push32(0x11a741a2u); f_11a74056();
  /* 11a741a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a741a5 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11a741a7 je 0x11a741ad */
  if (C.zf) goto L_11a741ad;
  /* 11a741a9 mov eax, edi */
  EAX = (EDI);
  /* 11a741ab jmp 0x11a741c9 */
  goto L_11a741c9;
L_11a741ad:;
  /* 11a741ad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a741af jne 0x11a741b4 */
  if (!C.zf) goto L_11a741b4;
  /* 11a741b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a741b3 pop esi */
  ESI = (pop32());
L_11a741b4:;
  /* 11a741b4 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a741b7 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11a741ba push esi */
  push32((uint32_t)(ESI));
  /* 11a741bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a741bd push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a741c3 call dword ptr [0x11a7603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7603c))), 0x11a741c9u);
L_11a741c9:;
  /* 11a741c9 pop edi */
  EDI = (pop32());
  /* 11a741ca pop esi */
  ESI = (pop32());
  /* 11a741cb ret  */
  ESPCHK(0x11a7417eu, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x11a741d0 (7 bytes, 3 insns) */
void f_11a741d0(void) {
  FTRACE(0x11a741d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a741d0 push edi */
  push32((uint32_t)(EDI));
  /* 11a741d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a741d5 jmp 0x11a74241 */
  jmp_ind(0x11a74241u); return;
}

/* FUN_100041e0 @ 0x11a741e0 (224 bytes, 84 insns) */
void f_11a741e0(void) {
  FTRACE(0x11a741e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a741e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a741e4 push edi */
  push32((uint32_t)(EDI));
  /* 11a741e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a741eb je 0x11a741fc */
  if (C.zf) goto L_11a741fc;
L_11a741ed:;
  /* 11a741ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a741ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a741f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a741f2 je 0x11a7422f */
  if (C.zf) goto L_11a7422f;
  /* 11a741f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a741fa jne 0x11a741ed */
  if (!C.zf) goto L_11a741ed;
L_11a741fc:;
  /* 11a741fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a741fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a74203 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74205 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a74208 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7420a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7420d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a74212 je 0x11a741fc */
  if (C.zf) goto L_11a741fc;
  /* 11a74214 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a74217 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a74219 je 0x11a7423e */
  if (C.zf) goto L_11a7423e;
  /* 11a7421b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a7421d je 0x11a74239 */
  if (C.zf) goto L_11a74239;
  /* 11a7421f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a74224 je 0x11a74234 */
  if (C.zf) goto L_11a74234;
  /* 11a74226 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a7422b je 0x11a7422f */
  if (C.zf) goto L_11a7422f;
  /* 11a7422d jmp 0x11a741fc */
  goto L_11a741fc;
L_11a7422f:;
  /* 11a7422f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a74232 jmp 0x11a74241 */
  goto L_11a74241;
L_11a74234:;
  /* 11a74234 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a74237 jmp 0x11a74241 */
  goto L_11a74241;
L_11a74239:;
  /* 11a74239 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a7423c jmp 0x11a74241 */
  goto L_11a74241;
L_11a7423e:;
  /* 11a7423e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a74241:;
  /* 11a74241 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a74245 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a7424b je 0x11a74266 */
  if (C.zf) goto L_11a74266;
L_11a7424d:;
  /* 11a7424d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a7424f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a74250 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a74252 je 0x11a742b8 */
  if (C.zf) goto L_11a742b8;
  /* 11a74254 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a74256 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a74257 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a7425d jne 0x11a7424d */
  if (!C.zf) goto L_11a7424d;
  /* 11a7425f jmp 0x11a74266 */
  goto L_11a74266;
L_11a74261:;
  /* 11a74261 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a74263 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a74266:;
  /* 11a74266 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a7426b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a7426d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7426f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a74272 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a74274 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a74276 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74279 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a7427e je 0x11a74261 */
  if (C.zf) goto L_11a74261;
  /* 11a74280 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a74282 je 0x11a742b8 */
  if (C.zf) goto L_11a742b8;
  /* 11a74284 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a74286 je 0x11a742af */
  if (C.zf) goto L_11a742af;
  /* 11a74288 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a7428e je 0x11a742a2 */
  if (C.zf) goto L_11a742a2;
  /* 11a74290 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a74296 je 0x11a7429a */
  if (C.zf) goto L_11a7429a;
  /* 11a74298 jmp 0x11a74261 */
  goto L_11a74261;
L_11a7429a:;
  /* 11a7429a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a7429c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a742a0 pop edi */
  EDI = (pop32());
  /* 11a742a1 ret  */
  ESPCHK(0x11a741e0u, _esp0);
  ESP += 4; return;
L_11a742a2:;
  /* 11a742a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a742a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a742a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a742ad pop edi */
  EDI = (pop32());
  /* 11a742ae ret  */
  ESPCHK(0x11a741e0u, _esp0);
  ESP += 4; return;
L_11a742af:;
  /* 11a742af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a742b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a742b6 pop edi */
  EDI = (pop32());
  /* 11a742b7 ret  */
  ESPCHK(0x11a741e0u, _esp0);
  ESP += 4; return;
L_11a742b8:;
  /* 11a742b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a742ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a742be pop edi */
  EDI = (pop32());
  /* 11a742bf ret  */
  ESPCHK(0x11a741e0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a742c0 (123 bytes, 44 insns) */
void f_11a742c0(void) {
  FTRACE(0x11a742c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a742c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a742c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a742ca je 0x11a742e0 */
  if (C.zf) goto L_11a742e0;
L_11a742cc:;
  /* 11a742cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a742ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a742cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a742d1 je 0x11a74313 */
  if (C.zf) goto L_11a74313;
  /* 11a742d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a742d9 jne 0x11a742cc */
  if (!C.zf) goto L_11a742cc;
  /* 11a742db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a742e0:;
  /* 11a742e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a742e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a742e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a742e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a742ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a742ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a742f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a742f6 je 0x11a742e0 */
  if (C.zf) goto L_11a742e0;
  /* 11a742f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a742fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a742fd je 0x11a74331 */
  if (C.zf) goto L_11a74331;
  /* 11a742ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a74301 je 0x11a74327 */
  if (C.zf) goto L_11a74327;
  /* 11a74303 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a74308 je 0x11a7431d */
  if (C.zf) goto L_11a7431d;
  /* 11a7430a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a7430f je 0x11a74313 */
  if (C.zf) goto L_11a74313;
  /* 11a74311 jmp 0x11a742e0 */
  goto L_11a742e0;
L_11a74313:;
  /* 11a74313 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a74316 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a7431a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7431c ret  */
  ESPCHK(0x11a742c0u, _esp0);
  ESP += 4; return;
L_11a7431d:;
  /* 11a7431d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a74320 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a74324 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74326 ret  */
  ESPCHK(0x11a742c0u, _esp0);
  ESP += 4; return;
L_11a74327:;
  /* 11a74327 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a7432a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a7432e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74330 ret  */
  ESPCHK(0x11a742c0u, _esp0);
  ESP += 4; return;
L_11a74331:;
  /* 11a74331 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a74334 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a74338 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7433a ret  */
  ESPCHK(0x11a742c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000433b @ 0x11a7433b (429 bytes, 143 insns) */
void f_11a7433b(void) {
  FTRACE(0x11a7433bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7433b push ebp */
  push32((uint32_t)(EBP));
  /* 11a7433c mov ebp, esp */
  EBP = (ESP);
  /* 11a7433e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74341 push ebx */
  push32((uint32_t)(EBX));
  /* 11a74342 push esi */
  push32((uint32_t)(ESI));
  /* 11a74343 push edi */
  push32((uint32_t)(EDI));
  /* 11a74344 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a74346 call 0x11a73ff5 */
  push32(0x11a7434bu); f_11a73ff5();
  /* 11a7434b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a7434e call 0x11a744e8 */
  push32(0x11a74353u); f_11a744e8();
  /* 11a74353 mov ebx, eax */
  EBX = (EAX);
  /* 11a74355 pop ecx */
  ECX = (pop32());
  /* 11a74356 cmp ebx, dword ptr [0x11a78198] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a78198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7435c pop ecx */
  ECX = (pop32());
  /* 11a7435d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74360 jne 0x11a74369 */
  if (!C.zf) goto L_11a74369;
L_11a74362:;
  /* 11a74362 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a74364 jmp 0x11a744d9 */
  goto L_11a744d9;
L_11a74369:;
  /* 11a74369 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a7436b je 0x11a744c7 */
  if (C.zf) goto L_11a744c7;
  /* 11a74371 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a74373 mov eax, 0x11a779c8 */
  EAX = (0x11a779c8u);
L_11a74378:;
  /* 11a74378 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7437a je 0x11a743f0 */
  if (C.zf) goto L_11a743f0;
  /* 11a7437c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7437f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a74380 cmp eax, 0x11a77ab8 */
  { uint32_t _a=(EAX),_b=(0x11a77ab8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74385 jl 0x11a74378 */
  if ((C.sf!=C.of)) goto L_11a74378;
  /* 11a74387 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a7438a push eax */
  push32((uint32_t)(EAX));
  /* 11a7438b push ebx */
  push32((uint32_t)(EBX));
  /* 11a7438c call dword ptr [0x11a76038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76038))), 0x11a74392u);
  /* 11a74392 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a74394 pop esi */
  ESI = (pop32());
  /* 11a74395 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74397 jne 0x11a744be */
  if (!C.zf) goto L_11a744be;
  /* 11a7439d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a7439f and dword ptr [0x11a783c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a783c4)))&(0x0u); w32((uint32_t)(0x11a783c4), (_r)); fl_logic(_r,32); }
  /* 11a743a6 pop ecx */
  ECX = (pop32());
  /* 11a743a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a743a9 mov edi, 0x11a782c0 */
  EDI = (0x11a782c0u);
  /* 11a743ae cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a743b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a743b3 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a743b4 mov dword ptr [0x11a78198], ebx */
  w32((uint32_t)(0x11a78198), (EBX));
  /* 11a743ba jbe 0x11a744ab */
  if ((C.cf||C.zf)) goto L_11a744ab;
  /* 11a743c0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a743c4 je 0x11a74486 */
  if (C.zf) goto L_11a74486;
  /* 11a743ca lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_11a743cd:;
  /* 11a743cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a743cf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a743d1 je 0x11a74486 */
  if (C.zf) goto L_11a74486;
  /* 11a743d7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 11a743db movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_11a743de:;
  /* 11a743de cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a743e0 ja 0x11a7447a */
  if ((!C.cf&&!C.zf)) goto L_11a7447a;
  /* 11a743e6 or byte ptr [eax + 0x11a782c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x4u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a743ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a743ee jmp 0x11a743de */
  goto L_11a743de;
L_11a743f0:;
  /* 11a743f0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a743f4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a743f6 pop ecx */
  ECX = (pop32());
  /* 11a743f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a743f9 mov edi, 0x11a782c0 */
  EDI = (0x11a782c0u);
  /* 11a743fe lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11a74401 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a74403 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a74406 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a74407 lea ebx, [esi + 0x11a779d8] */
  EBX = ((uint32_t)(ESI + 0x11a779d8));
L_11a7440d:;
  /* 11a7440d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a74410 mov ecx, ebx */
  ECX = (EBX);
  /* 11a74412 je 0x11a74440 */
  if (C.zf) goto L_11a74440;
L_11a74414:;
  /* 11a74414 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a74417 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a74419 je 0x11a74440 */
  if (C.zf) goto L_11a74440;
  /* 11a7441b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 11a7441e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 11a74421 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74423 ja 0x11a74439 */
  if ((!C.cf&&!C.zf)) goto L_11a74439;
  /* 11a74425 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a74428 mov dl, byte ptr [edx + 0x11a779c0] */
  DL = (r8((uint32_t)(EDX + 0x11a779c0)));
L_11a7442e:;
  /* 11a7442e or byte ptr [eax + 0x11a782c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(DL); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a74434 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a74435 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74437 jbe 0x11a7442e */
  if ((C.cf||C.zf)) goto L_11a7442e;
L_11a74439:;
  /* 11a74439 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a7443a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a7443b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a7443e jne 0x11a74414 */
  if (!C.zf) goto L_11a74414;
L_11a74440:;
  /* 11a74440 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a74443 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74446 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7444a jb 0x11a7440d */
  if (C.cf) goto L_11a7440d;
  /* 11a7444c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a7444f mov dword ptr [0x11a781ac], 1 */
  w32((uint32_t)(0x11a781ac), (0x1u));
  /* 11a74459 push eax */
  push32((uint32_t)(EAX));
  /* 11a7445a mov dword ptr [0x11a78198], eax */
  w32((uint32_t)(0x11a78198), (EAX));
  /* 11a7445f call 0x11a74532 */
  push32(0x11a74464u); f_11a74532();
  /* 11a74464 lea esi, [esi + 0x11a779cc] */
  ESI = ((uint32_t)(ESI + 0x11a779cc));
  /* 11a7446a mov edi, 0x11a781a0 */
  EDI = (0x11a781a0u);
  /* 11a7446f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a74470 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a74471 pop ecx */
  ECX = (pop32());
  /* 11a74472 mov dword ptr [0x11a783c4], eax */
  w32((uint32_t)(0x11a783c4), (EAX));
  /* 11a74477 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a74478 jmp 0x11a744cc */
  goto L_11a744cc;
L_11a7447a:;
  /* 11a7447a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a7447b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a7447c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a74480 jne 0x11a743cd */
  if (!C.zf) goto L_11a743cd;
L_11a74486:;
  /* 11a74486 mov eax, esi */
  EAX = (ESI);
L_11a74488:;
  /* 11a74488 or byte ptr [eax + 0x11a782c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x8u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a7448f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a74490 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74495 jb 0x11a74488 */
  if (C.cf) goto L_11a74488;
  /* 11a74497 push ebx */
  push32((uint32_t)(EBX));
  /* 11a74498 call 0x11a74532 */
  push32(0x11a7449du); f_11a74532();
  /* 11a7449d pop ecx */
  ECX = (pop32());
  /* 11a7449e mov dword ptr [0x11a783c4], eax */
  w32((uint32_t)(0x11a783c4), (EAX));
  /* 11a744a3 mov dword ptr [0x11a781ac], esi */
  w32((uint32_t)(0x11a781ac), (ESI));
  /* 11a744a9 jmp 0x11a744b2 */
  goto L_11a744b2;
L_11a744ab:;
  /* 11a744ab and dword ptr [0x11a781ac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a781ac)))&(0x0u); w32((uint32_t)(0x11a781ac), (_r)); fl_logic(_r,32); }
L_11a744b2:;
  /* 11a744b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a744b4 mov edi, 0x11a781a0 */
  EDI = (0x11a781a0u);
  /* 11a744b9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a744ba stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a744bb stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a744bc jmp 0x11a744cc */
  goto L_11a744cc;
L_11a744be:;
  /* 11a744be cmp dword ptr [0x11a78140], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a78140))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a744c5 je 0x11a744d6 */
  if (C.zf) goto L_11a744d6;
L_11a744c7:;
  /* 11a744c7 call 0x11a74565 */
  push32(0x11a744ccu); f_11a74565();
L_11a744cc:;
  /* 11a744cc call 0x11a7458e */
  push32(0x11a744d1u); f_11a7458e();
  /* 11a744d1 jmp 0x11a74362 */
  goto L_11a74362;
L_11a744d6:;
  /* 11a744d6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11a744d9:;
  /* 11a744d9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a744db call 0x11a74056 */
  push32(0x11a744e0u); f_11a74056();
  /* 11a744e0 pop ecx */
  ECX = (pop32());
  /* 11a744e1 mov eax, esi */
  EAX = (ESI);
  /* 11a744e3 pop edi */
  EDI = (pop32());
  /* 11a744e4 pop esi */
  ESI = (pop32());
  /* 11a744e5 pop ebx */
  EBX = (pop32());
  /* 11a744e6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a744e7 ret  */
  ESPCHK(0x11a7433bu, _esp0);
  ESP += 4; return;
}

/* FUN_100044e8 @ 0x11a744e8 (74 bytes, 15 insns) */
void f_11a744e8(void) {
  FTRACE(0x11a744e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a744e8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a744ec and dword ptr [0x11a78140], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a78140)))&(0x0u); w32((uint32_t)(0x11a78140), (_r)); fl_logic(_r,32); }
  /* 11a744f3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a744f6 jne 0x11a74508 */
  if (!C.zf) goto L_11a74508;
  /* 11a744f8 mov dword ptr [0x11a78140], 1 */
  w32((uint32_t)(0x11a78140), (0x1u));
  /* 11a74502 jmp dword ptr [0x11a76030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a76030)))); return;
L_11a74508:;
  /* 11a74508 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7450b jne 0x11a7451d */
  if (!C.zf) goto L_11a7451d;
  /* 11a7450d mov dword ptr [0x11a78140], 1 */
  w32((uint32_t)(0x11a78140), (0x1u));
  /* 11a74517 jmp dword ptr [0x11a76034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a76034)))); return;
L_11a7451d:;
  /* 11a7451d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74520 jne 0x11a74531 */
  if (!C.zf) goto L_11a74531;
  /* 11a74522 mov eax, dword ptr [0x11a78170] */
  EAX = (r32((uint32_t)(0x11a78170)));
  /* 11a74527 mov dword ptr [0x11a78140], 1 */
  w32((uint32_t)(0x11a78140), (0x1u));
L_11a74531:;
  /* 11a74531 ret  */
  ESPCHK(0x11a744e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004532 @ 0x11a74532 (51 bytes, 19 insns) */
void f_11a74532(void) {
  FTRACE(0x11a74532u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74532 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a74536 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7453b je 0x11a7455f */
  if (C.zf) goto L_11a7455f;
  /* 11a7453d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74540 je 0x11a74559 */
  if (C.zf) goto L_11a74559;
  /* 11a74542 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74545 je 0x11a74553 */
  if (C.zf) goto L_11a74553;
  /* 11a74547 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a74548 je 0x11a7454d */
  if (C.zf) goto L_11a7454d;
  /* 11a7454a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7454c ret  */
  ESPCHK(0x11a74532u, _esp0);
  ESP += 4; return;
L_11a7454d:;
  /* 11a7454d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11a74552 ret  */
  ESPCHK(0x11a74532u, _esp0);
  ESP += 4; return;
L_11a74553:;
  /* 11a74553 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11a74558 ret  */
  ESPCHK(0x11a74532u, _esp0);
  ESP += 4; return;
L_11a74559:;
  /* 11a74559 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11a7455e ret  */
  ESPCHK(0x11a74532u, _esp0);
  ESP += 4; return;
L_11a7455f:;
  /* 11a7455f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11a74564 ret  */
  ESPCHK(0x11a74532u, _esp0);
  ESP += 4; return;
}

/* FUN_10004565 @ 0x11a74565 (41 bytes, 17 insns) */
void f_11a74565(void) {
  FTRACE(0x11a74565u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74565 push edi */
  push32((uint32_t)(EDI));
  /* 11a74566 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a74568 pop ecx */
  ECX = (pop32());
  /* 11a74569 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7456b mov edi, 0x11a782c0 */
  EDI = (0x11a782c0u);
  /* 11a74570 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a74572 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11a74573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a74575 mov edi, 0x11a781a0 */
  EDI = (0x11a781a0u);
  /* 11a7457a mov dword ptr [0x11a78198], eax */
  w32((uint32_t)(0x11a78198), (EAX));
  /* 11a7457f mov dword ptr [0x11a781ac], eax */
  w32((uint32_t)(0x11a781ac), (EAX));
  /* 11a74584 mov dword ptr [0x11a783c4], eax */
  w32((uint32_t)(0x11a783c4), (EAX));
  /* 11a74589 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a7458a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a7458b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11a7458c pop edi */
  EDI = (pop32());
  /* 11a7458d ret  */
  ESPCHK(0x11a74565u, _esp0);
  ESP += 4; return;
}

/* FUN_1000458e @ 0x11a7458e (389 bytes, 124 insns) */
void f_11a7458e(void) {
  FTRACE(0x11a7458eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a7458e push ebp */
  push32((uint32_t)(EBP));
  /* 11a7458f mov ebp, esp */
  EBP = (ESP);
  /* 11a74591 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74597 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11a7459a push esi */
  push32((uint32_t)(ESI));
  /* 11a7459b push eax */
  push32((uint32_t)(EAX));
  /* 11a7459c push dword ptr [0x11a78198] */
  push32((uint32_t)(r32((uint32_t)(0x11a78198))));
  /* 11a745a2 call dword ptr [0x11a76038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76038))), 0x11a745a8u);
  /* 11a745a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a745ab jne 0x11a746c7 */
  if (!C.zf) goto L_11a746c7;
  /* 11a745b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a745b3 mov esi, 0x100 */
  ESI = (0x100u);
L_11a745b8:;
  /* 11a745b8 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11a745bf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a745c0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a745c2 jb 0x11a745b8 */
  if (C.cf) goto L_11a745b8;
  /* 11a745c4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11a745c7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11a745ce test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a745d0 je 0x11a74609 */
  if (C.zf) goto L_11a74609;
  /* 11a745d2 push ebx */
  push32((uint32_t)(EBX));
  /* 11a745d3 push edi */
  push32((uint32_t)(EDI));
  /* 11a745d4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11a745d7:;
  /* 11a745d7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11a745da movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11a745dd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a745df ja 0x11a745fe */
  if ((!C.cf&&!C.zf)) goto L_11a745fe;
  /* 11a745e1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a745e3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11a745ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a745eb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11a745f0 mov ebx, ecx */
  EBX = (ECX);
  /* 11a745f2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a745f5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a745f7 mov ecx, ebx */
  ECX = (EBX);
  /* 11a745f9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a745fc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11a745fe:;
  /* 11a745fe inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a745ff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11a74600 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11a74603 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a74605 jne 0x11a745d7 */
  if (!C.zf) goto L_11a745d7;
  /* 11a74607 pop edi */
  EDI = (pop32());
  /* 11a74608 pop ebx */
  EBX = (pop32());
L_11a74609:;
  /* 11a74609 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7460b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11a74611 push dword ptr [0x11a783c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c4))));
  /* 11a74617 push dword ptr [0x11a78198] */
  push32((uint32_t)(r32((uint32_t)(0x11a78198))));
  /* 11a7461d push eax */
  push32((uint32_t)(EAX));
  /* 11a7461e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a74624 push esi */
  push32((uint32_t)(ESI));
  /* 11a74625 push eax */
  push32((uint32_t)(EAX));
  /* 11a74626 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a74628 call 0x11a75702 */
  push32(0x11a7462du); f_11a75702();
  /* 11a7462d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a7462f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11a74635 push dword ptr [0x11a78198] */
  push32((uint32_t)(r32((uint32_t)(0x11a78198))));
  /* 11a7463b push esi */
  push32((uint32_t)(ESI));
  /* 11a7463c push eax */
  push32((uint32_t)(EAX));
  /* 11a7463d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a74643 push esi */
  push32((uint32_t)(ESI));
  /* 11a74644 push eax */
  push32((uint32_t)(EAX));
  /* 11a74645 push esi */
  push32((uint32_t)(ESI));
  /* 11a74646 push dword ptr [0x11a783c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c4))));
  /* 11a7464c call 0x11a754b3 */
  push32(0x11a74651u); f_11a754b3();
  /* 11a74651 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a74653 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11a74659 push dword ptr [0x11a78198] */
  push32((uint32_t)(r32((uint32_t)(0x11a78198))));
  /* 11a7465f push esi */
  push32((uint32_t)(ESI));
  /* 11a74660 push eax */
  push32((uint32_t)(EAX));
  /* 11a74661 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11a74667 push esi */
  push32((uint32_t)(ESI));
  /* 11a74668 push eax */
  push32((uint32_t)(EAX));
  /* 11a74669 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11a7466e push dword ptr [0x11a783c4] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c4))));
  /* 11a74674 call 0x11a754b3 */
  push32(0x11a74679u); f_11a754b3();
  /* 11a74679 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7467c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7467e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11a74684:;
  /* 11a74684 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a74687 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11a7468a je 0x11a746a2 */
  if (C.zf) goto L_11a746a2;
  /* 11a7468c or byte ptr [eax + 0x11a782c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x10u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a74693 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11a7469a:;
  /* 11a7469a mov byte ptr [eax + 0x11a781c0], dl */
  w8((uint32_t)(EAX + 0x11a781c0), (DL));
  /* 11a746a0 jmp 0x11a746be */
  goto L_11a746be;
L_11a746a2:;
  /* 11a746a2 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11a746a5 je 0x11a746b7 */
  if (C.zf) goto L_11a746b7;
  /* 11a746a7 or byte ptr [eax + 0x11a782c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x20u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a746ae mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11a746b5 jmp 0x11a7469a */
  goto L_11a7469a;
L_11a746b7:;
  /* 11a746b7 and byte ptr [eax + 0x11a781c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a781c0)))&(0x0u); w8((uint32_t)(EAX + 0x11a781c0), (_r)); fl_logic(_r,8); }
L_11a746be:;
  /* 11a746be inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a746bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a746c0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a746c1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a746c3 jb 0x11a74684 */
  if (C.cf) goto L_11a74684;
  /* 11a746c5 jmp 0x11a74710 */
  goto L_11a74710;
L_11a746c7:;
  /* 11a746c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a746c9 mov esi, 0x100 */
  ESI = (0x100u);
L_11a746ce:;
  /* 11a746ce cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a746d1 jb 0x11a746ec */
  if (C.cf) goto L_11a746ec;
  /* 11a746d3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a746d6 ja 0x11a746ec */
  if ((!C.cf&&!C.zf)) goto L_11a746ec;
  /* 11a746d8 or byte ptr [eax + 0x11a782c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x10u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a746df mov cl, al */
  CL = (AL);
  /* 11a746e1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11a746e4:;
  /* 11a746e4 mov byte ptr [eax + 0x11a781c0], cl */
  w8((uint32_t)(EAX + 0x11a781c0), (CL));
  /* 11a746ea jmp 0x11a7470b */
  goto L_11a7470b;
L_11a746ec:;
  /* 11a746ec cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a746ef jb 0x11a74704 */
  if (C.cf) goto L_11a74704;
  /* 11a746f1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a746f4 ja 0x11a74704 */
  if ((!C.cf&&!C.zf)) goto L_11a74704;
  /* 11a746f6 or byte ptr [eax + 0x11a782c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a782c1)))|(0x20u); w8((uint32_t)(EAX + 0x11a782c1), (_r)); fl_logic(_r,8); }
  /* 11a746fd mov cl, al */
  CL = (AL);
  /* 11a746ff sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a74702 jmp 0x11a746e4 */
  goto L_11a746e4;
L_11a74704:;
  /* 11a74704 and byte ptr [eax + 0x11a781c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11a781c0)))&(0x0u); w8((uint32_t)(EAX + 0x11a781c0), (_r)); fl_logic(_r,8); }
L_11a7470b:;
  /* 11a7470b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a7470c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7470e jb 0x11a746ce */
  if (C.cf) goto L_11a746ce;
L_11a74710:;
  /* 11a74710 pop esi */
  ESI = (pop32());
  /* 11a74711 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74712 ret  */
  ESPCHK(0x11a7458eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004713 @ 0x11a74713 (28 bytes, 7 insns) */
void f_11a74713(void) {
  FTRACE(0x11a74713u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74713 cmp dword ptr [0x11a784e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11a784e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7471a jne 0x11a7472e */
  if (!C.zf) goto L_11a7472e;
  /* 11a7471c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11a7471e call 0x11a7433b */
  push32(0x11a74723u); f_11a7433b();
  /* 11a74723 pop ecx */
  ECX = (pop32());
  /* 11a74724 mov dword ptr [0x11a784e8], 1 */
  w32((uint32_t)(0x11a784e8), (0x1u));
L_11a7472e:;
  /* 11a7472e ret  */
  ESPCHK(0x11a74713u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x11a74730 (664 bytes, 270 insns) [15 switch table(s)] */
void f_11a74730(void) {
  FTRACE(0x11a74730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74730 push ebp */
  push32((uint32_t)(EBP));
  /* 11a74731 mov ebp, esp */
  EBP = (ESP);
  /* 11a74733 push edi */
  push32((uint32_t)(EDI));
  /* 11a74734 push esi */
  push32((uint32_t)(ESI));
  /* 11a74735 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74738 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a7473b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a7473e mov eax, ecx */
  EAX = (ECX);
  /* 11a74740 mov edx, ecx */
  EDX = (ECX);
  /* 11a74742 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74744 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74746 jbe 0x11a74750 */
  if ((C.cf||C.zf)) goto L_11a74750;
  /* 11a74748 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7474a jb 0x11a748c8 */
  if (C.cf) goto L_11a748c8;
L_11a74750:;
  /* 11a74750 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a74756 jne 0x11a7476c */
  if (!C.zf) goto L_11a7476c;
  /* 11a74758 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7475b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a7475e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74761 jb 0x11a7478c */
  if (C.cf) goto L_11a7478c;
  /* 11a74763 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a74765 jmp dword ptr [edx*4 + 0x11a74878] */
  switch (EDX) {
    case 0: goto L_11a74888;
    case 1: goto L_11a74890;
    case 2: goto L_11a7489c;
    case 3: goto L_11a748b0;
    default: x86_unimpl("switch@0x11a74765 out of table"); return;
  }
L_11a7476c:;
  /* 11a7476c mov eax, edi */
  EAX = (EDI);
  /* 11a7476e mov edx, 3 */
  EDX = (0x3u);
  /* 11a74773 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74776 jb 0x11a74784 */
  if (C.cf) goto L_11a74784;
  /* 11a74778 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a7477b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7477d jmp dword ptr [eax*4 + 0x11a74790] */
  switch (EAX) {
    case 1: goto L_11a747a0;
    case 2: goto L_11a747cc;
    case 3: goto L_11a747f0;
    default: x86_unimpl("switch@0x11a7477d out of table"); return;
  }
L_11a74784:;
  /* 11a74784 jmp dword ptr [ecx*4 + 0x11a74888] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a74888)))); return;
  /* 11a7478b nop  */
  /* nop */
L_11a7478c:;
  /* 11a7478c jmp dword ptr [ecx*4 + 0x11a7480c] */
  switch (ECX) {
    case 0: goto L_11a7486f;
    case 1: goto L_11a7485c;
    case 2: goto L_11a74854;
    case 3: goto L_11a7484c;
    case 4: goto L_11a74844;
    case 5: goto L_11a7483c;
    case 6: goto L_11a74834;
    case 7: goto L_11a7482c;
    default: x86_unimpl("switch@0x11a7478c out of table"); return;
  }
  /* 11a74793 nop  */
  /* nop */
L_11a747a0:;
  /* 11a747a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a747a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a747a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a747a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a747a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a747ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a747af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a747b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a747b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a747b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a747bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a747be jb 0x11a7478c */
  if (C.cf) goto L_11a7478c;
  /* 11a747c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a747c2 jmp dword ptr [edx*4 + 0x11a74878] */
  switch (EDX) {
    case 0: goto L_11a74888;
    case 1: goto L_11a74890;
    case 2: goto L_11a7489c;
    case 3: goto L_11a748b0;
    default: x86_unimpl("switch@0x11a747c2 out of table"); return;
  }
  /* 11a747c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a747cc:;
  /* 11a747cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a747ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a747d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a747d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a747d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a747d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a747db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a747de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a747e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a747e4 jb 0x11a7478c */
  if (C.cf) goto L_11a7478c;
  /* 11a747e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a747e8 jmp dword ptr [edx*4 + 0x11a74878] */
  switch (EDX) {
    case 0: goto L_11a74888;
    case 1: goto L_11a74890;
    case 2: goto L_11a7489c;
    case 3: goto L_11a748b0;
    default: x86_unimpl("switch@0x11a747e8 out of table"); return;
  }
  /* 11a747ef nop  */
  /* nop */
L_11a747f0:;
  /* 11a747f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a747f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a747f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a747f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a747f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a747fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a747fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a747fe jb 0x11a7478c */
  if (C.cf) goto L_11a7478c;
  /* 11a74800 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a74802 jmp dword ptr [edx*4 + 0x11a74878] */
  switch (EDX) {
    case 0: goto L_11a74888;
    case 1: goto L_11a74890;
    case 2: goto L_11a7489c;
    case 3: goto L_11a748b0;
    default: x86_unimpl("switch@0x11a74802 out of table"); return;
  }
  /* 11a74809 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a7482c:;
  /* 11a7482c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a74830 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a74834:;
  /* 11a74834 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a74838 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a7483c:;
  /* 11a7483c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a74840 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a74844:;
  /* 11a74844 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a74848 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a7484c:;
  /* 11a7484c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a74850 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a74854:;
  /* 11a74854 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a74858 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a7485c:;
  /* 11a7485c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a74860 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a74864 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a7486b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7486d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a7486f:;
  /* 11a7486f jmp dword ptr [edx*4 + 0x11a74878] */
  switch (EDX) {
    case 0: goto L_11a74888;
    case 1: goto L_11a74890;
    case 2: goto L_11a7489c;
    case 3: goto L_11a748b0;
    default: x86_unimpl("switch@0x11a7486f out of table"); return;
  }
  /* 11a74876 mov edi, edi */
  EDI = (EDI);
L_11a74888:;
  /* 11a74888 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a7488b pop esi */
  ESI = (pop32());
  /* 11a7488c pop edi */
  EDI = (pop32());
  /* 11a7488d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a7488e ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a7488f nop  */
  /* nop */
L_11a74890:;
  /* 11a74890 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a74892 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a74894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74897 pop esi */
  ESI = (pop32());
  /* 11a74898 pop edi */
  EDI = (pop32());
  /* 11a74899 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a7489a ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a7489b nop  */
  /* nop */
L_11a7489c:;
  /* 11a7489c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a7489e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a748a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a748a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a748a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a748a9 pop esi */
  ESI = (pop32());
  /* 11a748aa pop edi */
  EDI = (pop32());
  /* 11a748ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a748ac ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a748ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a748b0:;
  /* 11a748b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a748b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a748b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a748b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a748ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a748bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a748c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a748c3 pop esi */
  ESI = (pop32());
  /* 11a748c4 pop edi */
  EDI = (pop32());
  /* 11a748c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a748c6 ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a748c7 nop  */
  /* nop */
L_11a748c8:;
  /* 11a748c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a748cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a748d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a748d6 jne 0x11a748fc */
  if (!C.zf) goto L_11a748fc;
  /* 11a748d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a748db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a748de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a748e1 jb 0x11a748f0 */
  if (C.cf) goto L_11a748f0;
  /* 11a748e3 std  */
  C.df=1;
  /* 11a748e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a748e6 cld  */
  C.df=0;
  /* 11a748e7 jmp dword ptr [edx*4 + 0x11a74a10] */
  switch (EDX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a748e7 out of table"); return;
  }
  /* 11a748ee mov edi, edi */
  EDI = (EDI);
L_11a748f0:;
  /* 11a748f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a748f2 jmp dword ptr [ecx*4 + 0x11a749c0] */
  switch (ECX) {
    case 0: goto L_11a74a07;
    default: x86_unimpl("switch@0x11a748f2 out of table"); return;
  }
  /* 11a748f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a748fc:;
  /* 11a748fc mov eax, edi */
  EAX = (EDI);
  /* 11a748fe mov edx, 3 */
  EDX = (0x3u);
  /* 11a74903 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74906 jb 0x11a74914 */
  if (C.cf) goto L_11a74914;
  /* 11a74908 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a7490b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7490d jmp dword ptr [eax*4 + 0x11a74918] */
  switch (EAX) {
    case 1: goto L_11a74928;
    case 2: goto L_11a74948;
    case 3: goto L_11a74970;
    default: x86_unimpl("switch@0x11a7490d out of table"); return;
  }
L_11a74914:;
  /* 11a74914 jmp dword ptr [ecx*4 + 0x11a74a10] */
  switch (ECX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a74914 out of table"); return;
  }
  /* 11a7491b nop  */
  /* nop */
L_11a74928:;
  /* 11a74928 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a7492b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a7492d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74930 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a74931 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a74934 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a74935 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74938 jb 0x11a748f0 */
  if (C.cf) goto L_11a748f0;
  /* 11a7493a std  */
  C.df=1;
  /* 11a7493b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a7493d cld  */
  C.df=0;
  /* 11a7493e jmp dword ptr [edx*4 + 0x11a74a10] */
  switch (EDX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a7493e out of table"); return;
  }
  /* 11a74945 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a74948:;
  /* 11a74948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a7494b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a7494d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74950 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a74953 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a74956 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a74959 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7495c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7495f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74962 jb 0x11a748f0 */
  if (C.cf) goto L_11a748f0;
  /* 11a74964 std  */
  C.df=1;
  /* 11a74965 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a74967 cld  */
  C.df=0;
  /* 11a74968 jmp dword ptr [edx*4 + 0x11a74a10] */
  switch (EDX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a74968 out of table"); return;
  }
  /* 11a7496f nop  */
  /* nop */
L_11a74970:;
  /* 11a74970 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a74973 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a74975 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74978 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a7497b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a7497e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a74981 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a74984 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a74987 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7498a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7498d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74990 jb 0x11a748f0 */
  if (C.cf) goto L_11a748f0;
  /* 11a74996 std  */
  C.df=1;
  /* 11a74997 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a74999 cld  */
  C.df=0;
  /* 11a7499a jmp dword ptr [edx*4 + 0x11a74a10] */
  switch (EDX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a7499a out of table"); return;
  }
  /* 11a749a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a749a4 les ecx, ptr [ecx - 0x59] */
  x86_unimpl("les @ 0x11a749a4");
  /* 11a749a7 adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749a9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749aa cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749ab adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749ae cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749af adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749b1 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749b2 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749b3 adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749b6 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749b7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749b9 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749ba cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749bb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a749bd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a749be cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a749c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a749c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a749cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a749d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a749d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a749d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a749dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a749e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a749e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a749e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a749ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a749f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a749f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a749f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a749fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a74a03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74a05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a74a07:;
  /* 11a74a07 jmp dword ptr [edx*4 + 0x11a74a10] */
  switch (EDX) {
    case 0: goto L_11a74a20;
    case 1: goto L_11a74a28;
    case 2: goto L_11a74a38;
    case 3: goto L_11a74a4c;
    default: x86_unimpl("switch@0x11a74a07 out of table"); return;
  }
  /* 11a74a0e mov edi, edi */
  EDI = (EDI);
L_11a74a20:;
  /* 11a74a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74a23 pop esi */
  ESI = (pop32());
  /* 11a74a24 pop edi */
  EDI = (pop32());
  /* 11a74a25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74a26 ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a74a27 nop  */
  /* nop */
L_11a74a28:;
  /* 11a74a28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a74a2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74a31 pop esi */
  ESI = (pop32());
  /* 11a74a32 pop edi */
  EDI = (pop32());
  /* 11a74a33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74a34 ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a74a35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a74a38:;
  /* 11a74a38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a74a3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74a3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a74a41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a74a44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74a47 pop esi */
  ESI = (pop32());
  /* 11a74a48 pop edi */
  EDI = (pop32());
  /* 11a74a49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74a4a ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
  /* 11a74a4b nop  */
  /* nop */
L_11a74a4c:;
  /* 11a74a4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a74a4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a74a52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a74a55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a74a58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a74a5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a74a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74a61 pop esi */
  ESI = (pop32());
  /* 11a74a62 pop edi */
  EDI = (pop32());
  /* 11a74a63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74a64 ret  */
  ESPCHK(0x11a74730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a65 @ 0x11a74a65 (62 bytes, 15 insns) */
void f_11a74a65(void) {
  FTRACE(0x11a74a65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74a65 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a74a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a74a6c push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a74a72 call dword ptr [0x11a7603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7603c))), 0x11a74a78u);
  /* 11a74a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a74a7a mov dword ptr [0x11a78194], eax */
  w32((uint32_t)(0x11a78194), (EAX));
  /* 11a74a7f jne 0x11a74a82 */
  if (!C.zf) goto L_11a74a82;
  /* 11a74a81 ret  */
  ESPCHK(0x11a74a65u, _esp0);
  ESP += 4; return;
L_11a74a82:;
  /* 11a74a82 and dword ptr [0x11a7818c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a7818c)))&(0x0u); w32((uint32_t)(0x11a7818c), (_r)); fl_logic(_r,32); }
  /* 11a74a89 and dword ptr [0x11a78190], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a78190)))&(0x0u); w32((uint32_t)(0x11a78190), (_r)); fl_logic(_r,32); }
  /* 11a74a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a74a92 mov dword ptr [0x11a78188], eax */
  w32((uint32_t)(0x11a78188), (EAX));
  /* 11a74a97 mov dword ptr [0x11a78180], 0x10 */
  w32((uint32_t)(0x11a78180), (0x10u));
  /* 11a74aa1 pop eax */
  EAX = (pop32());
  /* 11a74aa2 ret  */
  ESPCHK(0x11a74a65u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa3 @ 0x11a74aa3 (43 bytes, 14 insns) */
void f_11a74aa3(void) {
  FTRACE(0x11a74aa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74aa3 mov eax, dword ptr [0x11a78190] */
  EAX = (r32((uint32_t)(0x11a78190)));
  /* 11a74aa8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11a74aab mov eax, dword ptr [0x11a78194] */
  EAX = (r32((uint32_t)(0x11a78194)));
  /* 11a74ab0 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11a74ab3:;
  /* 11a74ab3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74ab5 jae 0x11a74acb */
  if (!C.cf) goto L_11a74acb;
  /* 11a74ab7 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a74abb sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74abe cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74ac4 jb 0x11a74acd */
  if (C.cf) goto L_11a74acd;
  /* 11a74ac6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74ac9 jmp 0x11a74ab3 */
  goto L_11a74ab3;
L_11a74acb:;
  /* 11a74acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a74acd:;
  /* 11a74acd ret  */
  ESPCHK(0x11a74aa3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ace @ 0x11a74ace (811 bytes, 264 insns) */
void f_11a74ace(void) {
  FTRACE(0x11a74aceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74ace push ebp */
  push32((uint32_t)(EBP));
  /* 11a74acf mov ebp, esp */
  EBP = (ESP);
  /* 11a74ad1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74ad4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74ad7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74ada push ebx */
  push32((uint32_t)(EBX));
  /* 11a74adb push esi */
  push32((uint32_t)(ESI));
  /* 11a74adc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a74adf mov esi, edx */
  ESI = (EDX);
  /* 11a74ae1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74ae4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a74ae7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74aea push edi */
  push32((uint32_t)(EDI));
  /* 11a74aeb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11a74aee mov ecx, esi */
  ECX = (ESI);
  /* 11a74af0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11a74af3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a74af9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a74afa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a74afd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a74b04 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a74b07 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a74b0a mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11a74b0d test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11a74b10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a74b13 jne 0x11a74b94 */
  if (!C.zf) goto L_11a74b94;
  /* 11a74b15 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a74b18 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a74b1a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a74b1b pop edi */
  EDI = (pop32());
  /* 11a74b1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a74b1f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74b21 jbe 0x11a74b26 */
  if ((C.cf||C.zf)) goto L_11a74b26;
  /* 11a74b23 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11a74b26:;
  /* 11a74b26 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a74b2a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74b2e jne 0x11a74b78 */
  if (!C.zf) goto L_11a74b78;
  /* 11a74b30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74b33 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74b36 jae 0x11a74b54 */
  if (!C.cf) goto L_11a74b54;
  /* 11a74b38 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a74b3d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a74b3f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a74b43 not edi */
  EDI = (~(EDI));
  /* 11a74b45 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a74b49 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a74b4b jne 0x11a74b78 */
  if (!C.zf) goto L_11a74b78;
  /* 11a74b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74b50 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a74b52 jmp 0x11a74b78 */
  goto L_11a74b78;
L_11a74b54:;
  /* 11a74b54 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74b57 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a74b5c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a74b5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74b61 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a74b65 not edi */
  EDI = (~(EDI));
  /* 11a74b67 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a74b6e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a74b70 jne 0x11a74b78 */
  if (!C.zf) goto L_11a74b78;
  /* 11a74b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74b75 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a74b78:;
  /* 11a74b78 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a74b7c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a74b80 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a74b83 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11a74b87 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11a74b8b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74b8e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a74b91 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11a74b94:;
  /* 11a74b94 mov edi, ebx */
  EDI = (EBX);
  /* 11a74b96 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a74b99 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a74b9a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74b9d jbe 0x11a74ba2 */
  if ((C.cf||C.zf)) goto L_11a74ba2;
  /* 11a74b9f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a74ba1 pop edi */
  EDI = (pop32());
L_11a74ba2:;
  /* 11a74ba2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a74ba5 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a74ba8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a74bab jne 0x11a74c51 */
  if (!C.zf) goto L_11a74c51;
  /* 11a74bb1 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74bb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a74bb7 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a74bba push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a74bbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a74bbf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a74bc0 pop edx */
  EDX = (pop32());
  /* 11a74bc1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74bc3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a74bc6 jbe 0x11a74bcd */
  if ((C.cf||C.zf)) goto L_11a74bcd;
  /* 11a74bc8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a74bcb mov ecx, edx */
  ECX = (EDX);
L_11a74bcd:;
  /* 11a74bcd add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74bd0 mov edi, ebx */
  EDI = (EBX);
  /* 11a74bd2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11a74bd5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11a74bd8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a74bd9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74bdb jbe 0x11a74bdf */
  if ((C.cf||C.zf)) goto L_11a74bdf;
  /* 11a74bdd mov edi, edx */
  EDI = (EDX);
L_11a74bdf:;
  /* 11a74bdf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74be1 je 0x11a74c4e */
  if (C.zf) goto L_11a74c4e;
  /* 11a74be3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a74be6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a74be9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74bec jne 0x11a74c36 */
  if (!C.zf) goto L_11a74c36;
  /* 11a74bee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74bf1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74bf4 jae 0x11a74c12 */
  if (!C.cf) goto L_11a74c12;
  /* 11a74bf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a74bfb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a74bfd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a74c01 not edx */
  EDX = (~(EDX));
  /* 11a74c03 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a74c07 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a74c09 jne 0x11a74c36 */
  if (!C.zf) goto L_11a74c36;
  /* 11a74c0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74c0e and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a74c10 jmp 0x11a74c36 */
  goto L_11a74c36;
L_11a74c12:;
  /* 11a74c12 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74c15 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a74c1a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a74c1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a74c1f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11a74c23 not edx */
  EDX = (~(EDX));
  /* 11a74c25 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a74c2c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11a74c2e jne 0x11a74c36 */
  if (!C.zf) goto L_11a74c36;
  /* 11a74c30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74c33 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a74c36:;
  /* 11a74c36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a74c39 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a74c3c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a74c3f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a74c42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a74c45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a74c48 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a74c4b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11a74c4e:;
  /* 11a74c4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11a74c51:;
  /* 11a74c51 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74c55 jne 0x11a74c60 */
  if (!C.zf) goto L_11a74c60;
  /* 11a74c57 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74c5a je 0x11a74ce9 */
  if (C.zf) goto L_11a74ce9;
L_11a74c60:;
  /* 11a74c60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a74c63 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a74c66 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a74c69 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a74c6c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a74c6f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11a74c72 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a74c75 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a74c78 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a74c7b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a74c7e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a74c81 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74c84 jne 0x11a74ce9 */
  if (!C.zf) goto L_11a74ce9;
  /* 11a74c86 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11a74c8a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74c8d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11a74c90 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a74c92 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11a74c96 jae 0x11a74cbd */
  if (!C.cf) goto L_11a74cbd;
  /* 11a74c98 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a74c9c jne 0x11a74cac */
  if (!C.zf) goto L_11a74cac;
  /* 11a74c9e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a74ca3 mov ecx, edi */
  ECX = (EDI);
  /* 11a74ca5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a74ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74caa or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11a74cac:;
  /* 11a74cac mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a74cb1 mov ecx, edi */
  ECX = (EDI);
  /* 11a74cb3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a74cb5 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11a74cb9 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a74cbb jmp 0x11a74ce6 */
  goto L_11a74ce6;
L_11a74cbd:;
  /* 11a74cbd cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a74cc1 jne 0x11a74cd3 */
  if (!C.zf) goto L_11a74cd3;
  /* 11a74cc3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a74cc6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a74ccb shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a74ccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74cd0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11a74cd3:;
  /* 11a74cd3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a74cd6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a74cdb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a74cdd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11a74ce4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11a74ce6:;
  /* 11a74ce6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11a74ce9:;
  /* 11a74ce9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a74cec mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11a74cee mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11a74cf2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11a74cf4 jne 0x11a74df4 */
  if (!C.zf) goto L_11a74df4;
  /* 11a74cfa mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a74d01 je 0x11a74de6 */
  if (C.zf) goto L_11a74de6;
  /* 11a74d07 mov ecx, dword ptr [0x11a78184] */
  ECX = (r32((uint32_t)(0x11a78184)));
  /* 11a74d0d mov edi, dword ptr [0x11a76054] */
  EDI = (r32((uint32_t)(0x11a76054)));
  /* 11a74d13 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a74d16 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74d19 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11a74d1e push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a74d23 push ebx */
  push32((uint32_t)(EBX));
  /* 11a74d24 push ecx */
  push32((uint32_t)(ECX));
  /* 11a74d25 call edi */
  call_ind((uint32_t)(EDI), 0x11a74d27u);
  /* 11a74d27 mov ecx, dword ptr [0x11a78184] */
  ECX = (r32((uint32_t)(0x11a78184)));
  /* 11a74d2d mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74d32 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a74d37 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a74d39 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a74d3c mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74d41 mov ecx, dword ptr [0x11a78184] */
  ECX = (r32((uint32_t)(0x11a78184)));
  /* 11a74d47 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a74d4a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11a74d52 mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74d57 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a74d5a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11a74d5d mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74d62 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a74d65 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a74d69 jne 0x11a74d74 */
  if (!C.zf) goto L_11a74d74;
  /* 11a74d6b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a74d6f mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
L_11a74d74:;
  /* 11a74d74 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74d78 jne 0x11a74de6 */
  if (!C.zf) goto L_11a74de6;
  /* 11a74d7a push ebx */
  push32((uint32_t)(EBX));
  /* 11a74d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a74d7d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11a74d80 call edi */
  call_ind((uint32_t)(EDI), 0x11a74d82u);
  /* 11a74d82 mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74d87 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11a74d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a74d8c push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a74d92 call dword ptr [0x11a76050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76050))), 0x11a74d98u);
  /* 11a74d98 mov eax, dword ptr [0x11a78190] */
  EAX = (r32((uint32_t)(0x11a78190)));
  /* 11a74d9d mov edx, dword ptr [0x11a78194] */
  EDX = (r32((uint32_t)(0x11a78194)));
  /* 11a74da3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a74da6 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a74da9 mov ecx, eax */
  ECX = (EAX);
  /* 11a74dab mov eax, dword ptr [0x11a7818c] */
  EAX = (r32((uint32_t)(0x11a7818c)));
  /* 11a74db0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74db2 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11a74db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a74db7 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11a74dba push ecx */
  push32((uint32_t)(ECX));
  /* 11a74dbb push eax */
  push32((uint32_t)(EAX));
  /* 11a74dbc call 0x11a75850 */
  push32(0x11a74dc1u); f_11a75850();
  /* 11a74dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74dc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74dc7 dec dword ptr [0x11a78190] */
  { uint32_t _r=(r32((uint32_t)(0x11a78190)))-1; w32((uint32_t)(0x11a78190), (_r)); fl_dec(_r,32); }
  /* 11a74dcd cmp eax, dword ptr [0x11a7818c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11a7818c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74dd3 jbe 0x11a74dd8 */
  if ((C.cf||C.zf)) goto L_11a74dd8;
  /* 11a74dd5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a74dd8:;
  /* 11a74dd8 mov ecx, dword ptr [0x11a78194] */
  ECX = (r32((uint32_t)(0x11a78194)));
  /* 11a74dde mov dword ptr [0x11a78188], ecx */
  w32((uint32_t)(0x11a78188), (ECX));
  /* 11a74de4 jmp 0x11a74de9 */
  goto L_11a74de9;
L_11a74de6:;
  /* 11a74de6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11a74de9:;
  /* 11a74de9 mov dword ptr [0x11a7818c], eax */
  w32((uint32_t)(0x11a7818c), (EAX));
  /* 11a74dee mov dword ptr [0x11a78184], esi */
  w32((uint32_t)(0x11a78184), (ESI));
L_11a74df4:;
  /* 11a74df4 pop edi */
  EDI = (pop32());
  /* 11a74df5 pop esi */
  ESI = (pop32());
  /* 11a74df6 pop ebx */
  EBX = (pop32());
  /* 11a74df7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a74df8 ret  */
  ESPCHK(0x11a74aceu, _esp0);
  ESP += 4; return;
}

/* FUN_10004df9 @ 0x11a74df9 (777 bytes, 275 insns) */
void f_11a74df9(void) {
  FTRACE(0x11a74df9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a74df9 push ebp */
  push32((uint32_t)(EBP));
  /* 11a74dfa mov ebp, esp */
  EBP = (ESP);
  /* 11a74dfc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74dff mov eax, dword ptr [0x11a78190] */
  EAX = (r32((uint32_t)(0x11a78190)));
  /* 11a74e04 mov edx, dword ptr [0x11a78194] */
  EDX = (r32((uint32_t)(0x11a78194)));
  /* 11a74e0a push ebx */
  push32((uint32_t)(EBX));
  /* 11a74e0b push esi */
  push32((uint32_t)(ESI));
  /* 11a74e0c lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a74e0f push edi */
  push32((uint32_t)(EDI));
  /* 11a74e10 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11a74e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74e16 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a74e19 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11a74e1c and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a74e1f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a74e22 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a74e25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a74e26 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e29 jge 0x11a74e39 */
  if ((C.sf==C.of)) goto L_11a74e39;
  /* 11a74e2b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11a74e2e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a74e30 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a74e34 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a74e37 jmp 0x11a74e49 */
  goto L_11a74e49;
L_11a74e39:;
  /* 11a74e39 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74e3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a74e3f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11a74e41 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a74e43 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11a74e46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a74e49:;
  /* 11a74e49 mov eax, dword ptr [0x11a78188] */
  EAX = (r32((uint32_t)(0x11a78188)));
  /* 11a74e4e mov ebx, eax */
  EBX = (EAX);
  /* 11a74e50 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e52 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74e55 jae 0x11a74e70 */
  if (!C.cf) goto L_11a74e70;
L_11a74e57:;
  /* 11a74e57 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a74e5a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a74e5c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a74e5f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a74e61 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a74e63 jne 0x11a74e70 */
  if (!C.zf) goto L_11a74e70;
  /* 11a74e65 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74e68 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e6b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74e6e jb 0x11a74e57 */
  if (C.cf) goto L_11a74e57;
L_11a74e70:;
  /* 11a74e70 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e73 jne 0x11a74eee */
  if (!C.zf) goto L_11a74eee;
  /* 11a74e75 mov ebx, edx */
  EBX = (EDX);
L_11a74e77:;
  /* 11a74e77 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e79 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74e7c jae 0x11a74e93 */
  if (!C.cf) goto L_11a74e93;
  /* 11a74e7e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11a74e81 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11a74e83 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a74e86 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a74e88 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a74e8a jne 0x11a74e91 */
  if (!C.zf) goto L_11a74e91;
  /* 11a74e8c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74e8f jmp 0x11a74e77 */
  goto L_11a74e77;
L_11a74e91:;
  /* 11a74e91 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a74e93:;
  /* 11a74e93 jne 0x11a74eee */
  if (!C.zf) goto L_11a74eee;
L_11a74e95:;
  /* 11a74e95 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e98 jae 0x11a74eab */
  if (!C.cf) goto L_11a74eab;
  /* 11a74e9a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74e9e jne 0x11a74ea8 */
  if (!C.zf) goto L_11a74ea8;
  /* 11a74ea0 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74ea3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74ea6 jmp 0x11a74e95 */
  goto L_11a74e95;
L_11a74ea8:;
  /* 11a74ea8 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a74eab:;
  /* 11a74eab jne 0x11a74ed3 */
  if (!C.zf) goto L_11a74ed3;
  /* 11a74ead mov ebx, edx */
  EBX = (EDX);
L_11a74eaf:;
  /* 11a74eaf cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74eb1 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74eb4 jae 0x11a74ec3 */
  if (!C.cf) goto L_11a74ec3;
  /* 11a74eb6 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74eba jne 0x11a74ec1 */
  if (!C.zf) goto L_11a74ec1;
  /* 11a74ebc add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74ebf jmp 0x11a74eaf */
  goto L_11a74eaf;
L_11a74ec1:;
  /* 11a74ec1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11a74ec3:;
  /* 11a74ec3 jne 0x11a74ed3 */
  if (!C.zf) goto L_11a74ed3;
  /* 11a74ec5 call 0x11a75102 */
  push32(0x11a74ecau); f_11a75102();
  /* 11a74eca mov ebx, eax */
  EBX = (EAX);
  /* 11a74ecc test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a74ece mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11a74ed1 je 0x11a74ee7 */
  if (C.zf) goto L_11a74ee7;
L_11a74ed3:;
  /* 11a74ed3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a74ed4 call 0x11a751b3 */
  push32(0x11a74ed9u); f_11a751b3();
  /* 11a74ed9 pop ecx */
  ECX = (pop32());
  /* 11a74eda mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a74edd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a74edf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a74ee2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74ee5 jne 0x11a74eee */
  if (!C.zf) goto L_11a74eee;
L_11a74ee7:;
  /* 11a74ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a74ee9 jmp 0x11a750fd */
  goto L_11a750fd;
L_11a74eee:;
  /* 11a74eee mov dword ptr [0x11a78188], ebx */
  w32((uint32_t)(0x11a78188), (EBX));
  /* 11a74ef4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11a74ef7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11a74ef9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74efc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a74eff je 0x11a74f15 */
  if (C.zf) goto L_11a74f15;
  /* 11a74f01 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a74f08 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a74f0c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a74f0f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11a74f11 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11a74f13 jne 0x11a74f4c */
  if (!C.zf) goto L_11a74f4c;
L_11a74f15:;
  /* 11a74f15 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11a74f1b mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11a74f1e and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a74f21 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11a74f24 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a74f28 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11a74f2b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a74f2d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a74f30 jne 0x11a74f49 */
  if (!C.zf) goto L_11a74f49;
L_11a74f32:;
  /* 11a74f32 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11a74f38 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11a74f3b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a74f3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a74f41 mov edi, esi */
  EDI = (ESI);
  /* 11a74f43 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11a74f45 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11a74f47 je 0x11a74f32 */
  if (C.zf) goto L_11a74f32;
L_11a74f49:;
  /* 11a74f49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_11a74f4c:;
  /* 11a74f4c mov ecx, edx */
  ECX = (EDX);
  /* 11a74f4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a74f50 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a74f56 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a74f5d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a74f60 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11a74f64 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11a74f66 jne 0x11a74f75 */
  if (!C.zf) goto L_11a74f75;
  /* 11a74f68 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11a74f6f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a74f71 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11a74f74 pop edi */
  EDI = (pop32());
L_11a74f75:;
  /* 11a74f75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a74f77 jl 0x11a74f7e */
  if ((C.sf!=C.of)) goto L_11a74f7e;
  /* 11a74f79 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a74f7b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a74f7c jmp 0x11a74f75 */
  goto L_11a74f75;
L_11a74f7e:;
  /* 11a74f7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a74f81 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11a74f85 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11a74f87 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a74f8a mov esi, ecx */
  ESI = (ECX);
  /* 11a74f8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a74f8f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11a74f92 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a74f93 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74f96 jle 0x11a74f9b */
  if ((C.zf||C.sf!=C.of)) goto L_11a74f9b;
  /* 11a74f98 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a74f9a pop esi */
  ESI = (pop32());
L_11a74f9b:;
  /* 11a74f9b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74f9d je 0x11a750b0 */
  if (C.zf) goto L_11a750b0;
  /* 11a74fa3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a74fa6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74fa9 jne 0x11a7500c */
  if (!C.zf) goto L_11a7500c;
  /* 11a74fab cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a74fae jge 0x11a74fdb */
  if ((C.sf==C.of)) goto L_11a74fdb;
  /* 11a74fb0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a74fb5 mov ecx, edi */
  ECX = (EDI);
  /* 11a74fb7 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a74fb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a74fbc lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a74fc0 not ebx */
  EBX = (~(EBX));
  /* 11a74fc2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a74fc5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11a74fc9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 11a74fcd dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a74fcf jne 0x11a75009 */
  if (!C.zf) goto L_11a75009;
  /* 11a74fd1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a74fd4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a74fd7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11a74fd9 jmp 0x11a7500c */
  goto L_11a7500c;
L_11a74fdb:;
  /* 11a74fdb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11a74fde mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11a74fe3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11a74fe5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a74fe8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11a74fec lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a74ff3 not ebx */
  EBX = (~(EBX));
  /* 11a74ff5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11a74ff7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11a74ff9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11a74ffc jne 0x11a75009 */
  if (!C.zf) goto L_11a75009;
  /* 11a74ffe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75001 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a75004 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11a75007 jmp 0x11a7500c */
  goto L_11a7500c;
L_11a75009:;
  /* 11a75009 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11a7500c:;
  /* 11a7500c mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a7500f mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11a75012 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75016 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11a75019 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a7501c mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11a7501f mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11a75022 je 0x11a750bc */
  if (C.zf) goto L_11a750bc;
  /* 11a75028 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a7502b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 11a7502f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11a75032 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11a75035 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a75038 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a7503b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a7503e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a75041 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a75044 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75047 jne 0x11a750ad */
  if (!C.zf) goto L_11a750ad;
  /* 11a75049 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 11a7504d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75050 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11a75053 jge 0x11a7507e */
  if ((C.sf==C.of)) goto L_11a7507e;
  /* 11a75055 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a75057 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a7505b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a7505f jne 0x11a7506c */
  if (!C.zf) goto L_11a7506c;
  /* 11a75061 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a75066 mov ecx, esi */
  ECX = (ESI);
  /* 11a75068 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a7506a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_11a7506c:;
  /* 11a7506c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a75071 mov ecx, esi */
  ECX = (ESI);
  /* 11a75073 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a75075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a75078 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a7507c jmp 0x11a750ad */
  goto L_11a750ad;
L_11a7507e:;
  /* 11a7507e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a75080 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a75084 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11a75088 jne 0x11a75097 */
  if (!C.zf) goto L_11a75097;
  /* 11a7508a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a7508d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11a75092 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11a75094 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11a75097:;
  /* 11a75097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a7509a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11a750a1 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11a750a4 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11a750a9 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11a750ab or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11a750ad:;
  /* 11a750ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a750b0:;
  /* 11a750b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a750b2 je 0x11a750bf */
  if (C.zf) goto L_11a750bf;
  /* 11a750b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a750b6 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 11a750ba jmp 0x11a750bf */
  goto L_11a750bf;
L_11a750bc:;
  /* 11a750bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11a750bf:;
  /* 11a750bf mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11a750c2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a750c4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11a750c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a750c9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 11a750cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11a750d0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11a750d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a750d4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11a750d7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a750d9 jne 0x11a750f5 */
  if (!C.zf) goto L_11a750f5;
  /* 11a750db cmp ebx, dword ptr [0x11a7818c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11a7818c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a750e1 jne 0x11a750f5 */
  if (!C.zf) goto L_11a750f5;
  /* 11a750e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a750e6 cmp ecx, dword ptr [0x11a78184] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11a78184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a750ec jne 0x11a750f5 */
  if (!C.zf) goto L_11a750f5;
  /* 11a750ee and dword ptr [0x11a7818c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11a7818c)))&(0x0u); w32((uint32_t)(0x11a7818c), (_r)); fl_logic(_r,32); }
L_11a750f5:;
  /* 11a750f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a750f8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a750fa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_11a750fd:;
  /* 11a750fd pop edi */
  EDI = (pop32());
  /* 11a750fe pop esi */
  ESI = (pop32());
  /* 11a750ff pop ebx */
  EBX = (pop32());
  /* 11a75100 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75101 ret  */
  ESPCHK(0x11a74df9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005102 @ 0x11a75102 (177 bytes, 53 insns) */
void f_11a75102(void) {
  FTRACE(0x11a75102u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75102 mov eax, dword ptr [0x11a78190] */
  EAX = (r32((uint32_t)(0x11a78190)));
  /* 11a75107 mov ecx, dword ptr [0x11a78180] */
  ECX = (r32((uint32_t)(0x11a78180)));
  /* 11a7510d push esi */
  push32((uint32_t)(ESI));
  /* 11a7510e push edi */
  push32((uint32_t)(EDI));
  /* 11a7510f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a75111 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75113 jne 0x11a75145 */
  if (!C.zf) goto L_11a75145;
  /* 11a75115 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 11a75119 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11a7511c push eax */
  push32((uint32_t)(EAX));
  /* 11a7511d push dword ptr [0x11a78194] */
  push32((uint32_t)(r32((uint32_t)(0x11a78194))));
  /* 11a75123 push edi */
  push32((uint32_t)(EDI));
  /* 11a75124 push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a7512a call dword ptr [0x11a76028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76028))), 0x11a75130u);
  /* 11a75130 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75132 je 0x11a75195 */
  if (C.zf) goto L_11a75195;
  /* 11a75134 add dword ptr [0x11a78180], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11a78180))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11a78180), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a7513b mov dword ptr [0x11a78194], eax */
  w32((uint32_t)(0x11a78194), (EAX));
  /* 11a75140 mov eax, dword ptr [0x11a78190] */
  EAX = (r32((uint32_t)(0x11a78190)));
L_11a75145:;
  /* 11a75145 mov ecx, dword ptr [0x11a78194] */
  ECX = (r32((uint32_t)(0x11a78194)));
  /* 11a7514b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a75150 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a75152 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11a75155 push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a7515b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11a7515e call dword ptr [0x11a7603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7603c))), 0x11a75164u);
  /* 11a75164 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75166 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11a75169 je 0x11a75195 */
  if (C.zf) goto L_11a75195;
  /* 11a7516b push 4 */
  push32((uint32_t)(0x4u));
  /* 11a7516d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a75172 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a75177 push edi */
  push32((uint32_t)(EDI));
  /* 11a75178 call dword ptr [0x11a7602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7602c))), 0x11a7517eu);
  /* 11a7517e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75180 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11a75183 jne 0x11a75199 */
  if (!C.zf) goto L_11a75199;
  /* 11a75185 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11a75188 push edi */
  push32((uint32_t)(EDI));
  /* 11a75189 push dword ptr [0x11a783c8] */
  push32((uint32_t)(r32((uint32_t)(0x11a783c8))));
  /* 11a7518f call dword ptr [0x11a76050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76050))), 0x11a75195u);
L_11a75195:;
  /* 11a75195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a75197 jmp 0x11a751b0 */
  goto L_11a751b0;
L_11a75199:;
  /* 11a75199 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a7519d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11a7519f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11a751a2 inc dword ptr [0x11a78190] */
  { uint32_t _r=(r32((uint32_t)(0x11a78190)))+1; w32((uint32_t)(0x11a78190), (_r)); fl_inc(_r,32); }
  /* 11a751a8 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11a751ab or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11a751ae mov eax, esi */
  EAX = (ESI);
L_11a751b0:;
  /* 11a751b0 pop edi */
  EDI = (pop32());
  /* 11a751b1 pop esi */
  ESI = (pop32());
  /* 11a751b2 ret  */
  ESPCHK(0x11a75102u, _esp0);
  ESP += 4; return;
}

/* FUN_100051b3 @ 0x11a751b3 (251 bytes, 85 insns) */
void f_11a751b3(void) {
  FTRACE(0x11a751b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a751b3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a751b4 mov ebp, esp */
  EBP = (ESP);
  /* 11a751b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a751b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a751ba push ebx */
  push32((uint32_t)(EBX));
  /* 11a751bb push esi */
  push32((uint32_t)(ESI));
  /* 11a751bc push edi */
  push32((uint32_t)(EDI));
  /* 11a751bd mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11a751c0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a751c3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11a751c5:;
  /* 11a751c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a751c7 jl 0x11a751ce */
  if ((C.sf!=C.of)) goto L_11a751ce;
  /* 11a751c9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a751cb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11a751cc jmp 0x11a751c5 */
  goto L_11a751c5;
L_11a751ce:;
  /* 11a751ce mov eax, ebx */
  EAX = (EBX);
  /* 11a751d0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11a751d2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a751d8 pop edx */
  EDX = (pop32());
  /* 11a751d9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11a751e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a751e3:;
  /* 11a751e3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11a751e6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11a751e9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a751ec dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a751ed jne 0x11a751e3 */
  if (!C.zf) goto L_11a751e3;
  /* 11a751ef mov edi, ebx */
  EDI = (EBX);
  /* 11a751f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a751f3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11a751f6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a751f9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a751fe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a75203 push edi */
  push32((uint32_t)(EDI));
  /* 11a75204 call dword ptr [0x11a7602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7602c))), 0x11a7520au);
  /* 11a7520a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7520c jne 0x11a75216 */
  if (!C.zf) goto L_11a75216;
  /* 11a7520e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a75211 jmp 0x11a752a9 */
  goto L_11a752a9;
L_11a75216:;
  /* 11a75216 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 11a7521c cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7521e ja 0x11a7525c */
  if ((!C.cf&&!C.zf)) goto L_11a7525c;
  /* 11a75220 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11a75223:;
  /* 11a75223 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11a75227 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 11a7522e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11a75234 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 11a7523b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a7523d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11a75243 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a75246 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11a75250 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75255 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11a75258 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7525a jbe 0x11a75223 */
  if ((C.cf||C.zf)) goto L_11a75223;
L_11a7525c:;
  /* 11a7525c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a7525f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11a75262 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75267 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a75269 pop edi */
  EDI = (pop32());
  /* 11a7526a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a7526d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a75270 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11a75273 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a75276 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a75279 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11a7527e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11a75285 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11a75288 mov cl, al */
  CL = (AL);
  /* 11a7528a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11a7528c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7528e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75291 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11a75294 jne 0x11a75299 */
  if (!C.zf) goto L_11a75299;
  /* 11a75296 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11a75299:;
  /* 11a75299 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a7529e mov ecx, ebx */
  ECX = (EBX);
  /* 11a752a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a752a2 not edx */
  EDX = (~(EDX));
  /* 11a752a4 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11a752a7 mov eax, ebx */
  EAX = (EBX);
L_11a752a9:;
  /* 11a752a9 pop edi */
  EDI = (pop32());
  /* 11a752aa pop esi */
  ESI = (pop32());
  /* 11a752ab pop ebx */
  EBX = (pop32());
  /* 11a752ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a752ad ret  */
  ESPCHK(0x11a751b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100052ae @ 0x11a752ae (137 bytes, 50 insns) */
void f_11a752ae(void) {
  FTRACE(0x11a752aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a752ae push ebx */
  push32((uint32_t)(EBX));
  /* 11a752af xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a752b1 cmp dword ptr [0x11a78144], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11a78144))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a752b7 push esi */
  push32((uint32_t)(ESI));
  /* 11a752b8 push edi */
  push32((uint32_t)(EDI));
  /* 11a752b9 jne 0x11a752fd */
  if (!C.zf) goto L_11a752fd;
  /* 11a752bb push 0x11a76480 */
  push32((uint32_t)(0x11a76480u));
  /* 11a752c0 call dword ptr [0x11a76020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76020))), 0x11a752c6u);
  /* 11a752c6 mov edi, eax */
  EDI = (EAX);
  /* 11a752c8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a752ca je 0x11a75333 */
  if (C.zf) goto L_11a75333;
  /* 11a752cc mov esi, dword ptr [0x11a76024] */
  ESI = (r32((uint32_t)(0x11a76024)));
  /* 11a752d2 push 0x11a76474 */
  push32((uint32_t)(0x11a76474u));
  /* 11a752d7 push edi */
  push32((uint32_t)(EDI));
  /* 11a752d8 call esi */
  call_ind((uint32_t)(ESI), 0x11a752dau);
  /* 11a752da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a752dc mov dword ptr [0x11a78144], eax */
  w32((uint32_t)(0x11a78144), (EAX));
  /* 11a752e1 je 0x11a75333 */
  if (C.zf) goto L_11a75333;
  /* 11a752e3 push 0x11a76464 */
  push32((uint32_t)(0x11a76464u));
  /* 11a752e8 push edi */
  push32((uint32_t)(EDI));
  /* 11a752e9 call esi */
  call_ind((uint32_t)(ESI), 0x11a752ebu);
  /* 11a752eb push 0x11a76450 */
  push32((uint32_t)(0x11a76450u));
  /* 11a752f0 push edi */
  push32((uint32_t)(EDI));
  /* 11a752f1 mov dword ptr [0x11a78148], eax */
  w32((uint32_t)(0x11a78148), (EAX));
  /* 11a752f6 call esi */
  call_ind((uint32_t)(ESI), 0x11a752f8u);
  /* 11a752f8 mov dword ptr [0x11a7814c], eax */
  w32((uint32_t)(0x11a7814c), (EAX));
L_11a752fd:;
  /* 11a752fd mov eax, dword ptr [0x11a78148] */
  EAX = (r32((uint32_t)(0x11a78148)));
  /* 11a75302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a75304 je 0x11a7531c */
  if (C.zf) goto L_11a7531c;
  /* 11a75306 call eax */
  call_ind((uint32_t)(EAX), 0x11a75308u);
  /* 11a75308 mov ebx, eax */
  EBX = (EAX);
  /* 11a7530a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11a7530c je 0x11a7531c */
  if (C.zf) goto L_11a7531c;
  /* 11a7530e mov eax, dword ptr [0x11a7814c] */
  EAX = (r32((uint32_t)(0x11a7814c)));
  /* 11a75313 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a75315 je 0x11a7531c */
  if (C.zf) goto L_11a7531c;
  /* 11a75317 push ebx */
  push32((uint32_t)(EBX));
  /* 11a75318 call eax */
  call_ind((uint32_t)(EAX), 0x11a7531au);
  /* 11a7531a mov ebx, eax */
  EBX = (EAX);
L_11a7531c:;
  /* 11a7531c push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a75320 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a75324 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11a75328 push ebx */
  push32((uint32_t)(EBX));
  /* 11a75329 call dword ptr [0x11a78144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a78144))), 0x11a7532fu);
L_11a7532f:;
  /* 11a7532f pop edi */
  EDI = (pop32());
  /* 11a75330 pop esi */
  ESI = (pop32());
  /* 11a75331 pop ebx */
  EBX = (pop32());
  /* 11a75332 ret  */
  ESPCHK(0x11a752aeu, _esp0);
  ESP += 4; return;
L_11a75333:;
  /* 11a75333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a75335 jmp 0x11a7532f */
  goto L_11a7532f;
}

/* _strncpy @ 0x11a75340 (254 bytes, 109 insns) */
void f_11a75340(void) {
  FTRACE(0x11a75340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75340 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a75344 push edi */
  push32((uint32_t)(EDI));
  /* 11a75345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a75347 je 0x11a753c3 */
  if (C.zf) goto L_11a753c3;
  /* 11a75349 push esi */
  push32((uint32_t)(ESI));
  /* 11a7534a push ebx */
  push32((uint32_t)(EBX));
  /* 11a7534b mov ebx, ecx */
  EBX = (ECX);
  /* 11a7534d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a75351 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a75357 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a7535b jne 0x11a75364 */
  if (!C.zf) goto L_11a75364;
  /* 11a7535d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a75360 jne 0x11a753d1 */
  if (!C.zf) goto L_11a753d1;
  /* 11a75362 jmp 0x11a75385 */
  goto L_11a75385;
L_11a75364:;
  /* 11a75364 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a75366 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a75367 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a75369 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a7536a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a7536b je 0x11a75392 */
  if (C.zf) goto L_11a75392;
  /* 11a7536d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7536f je 0x11a7539a */
  if (C.zf) goto L_11a7539a;
  /* 11a75371 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a75377 jne 0x11a75364 */
  if (!C.zf) goto L_11a75364;
  /* 11a75379 mov ebx, ecx */
  EBX = (ECX);
  /* 11a7537b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7537e jne 0x11a753d1 */
  if (!C.zf) goto L_11a753d1;
L_11a75380:;
  /* 11a75380 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a75383 je 0x11a75392 */
  if (C.zf) goto L_11a75392;
L_11a75385:;
  /* 11a75385 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a75387 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a75388 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a7538a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a7538b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a7538d je 0x11a753be */
  if (C.zf) goto L_11a753be;
  /* 11a7538f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a75390 jne 0x11a75385 */
  if (!C.zf) goto L_11a75385;
L_11a75392:;
  /* 11a75392 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a75396 pop ebx */
  EBX = (pop32());
  /* 11a75397 pop esi */
  ESI = (pop32());
  /* 11a75398 pop edi */
  EDI = (pop32());
  /* 11a75399 ret  */
  ESPCHK(0x11a75340u, _esp0);
  ESP += 4; return;
L_11a7539a:;
  /* 11a7539a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a753a0 je 0x11a753b4 */
  if (C.zf) goto L_11a753b4;
L_11a753a2:;
  /* 11a753a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a753a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a753a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a753a6 je 0x11a75436 */
  if (C.zf) goto L_11a75436;
  /* 11a753ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a753b2 jne 0x11a753a2 */
  if (!C.zf) goto L_11a753a2;
L_11a753b4:;
  /* 11a753b4 mov ebx, ecx */
  EBX = (ECX);
  /* 11a753b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a753b9 jne 0x11a75427 */
  if (!C.zf) goto L_11a75427;
L_11a753bb:;
  /* 11a753bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a753bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a753be:;
  /* 11a753be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a753bf jne 0x11a753bb */
  if (!C.zf) goto L_11a753bb;
  /* 11a753c1 pop ebx */
  EBX = (pop32());
  /* 11a753c2 pop esi */
  ESI = (pop32());
L_11a753c3:;
  /* 11a753c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a753c7 pop edi */
  EDI = (pop32());
  /* 11a753c8 ret  */
  ESPCHK(0x11a75340u, _esp0);
  ESP += 4; return;
L_11a753c9:;
  /* 11a753c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a753cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a753ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a753cf je 0x11a75380 */
  if (C.zf) goto L_11a75380;
L_11a753d1:;
  /* 11a753d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a753d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a753d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a753da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a753dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a753df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a753e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a753e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a753e9 je 0x11a753c9 */
  if (C.zf) goto L_11a753c9;
  /* 11a753eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a753ed je 0x11a7541b */
  if (C.zf) goto L_11a7541b;
  /* 11a753ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a753f1 je 0x11a75411 */
  if (C.zf) goto L_11a75411;
  /* 11a753f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a753f9 je 0x11a75407 */
  if (C.zf) goto L_11a75407;
  /* 11a753fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a75401 jne 0x11a753c9 */
  if (!C.zf) goto L_11a753c9;
  /* 11a75403 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a75405 jmp 0x11a7541f */
  goto L_11a7541f;
L_11a75407:;
  /* 11a75407 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a7540d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a7540f jmp 0x11a7541f */
  goto L_11a7541f;
L_11a75411:;
  /* 11a75411 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a75417 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a75419 jmp 0x11a7541f */
  goto L_11a7541f;
L_11a7541b:;
  /* 11a7541b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a7541d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a7541f:;
  /* 11a7541f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75422 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a75424 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a75425 je 0x11a75431 */
  if (C.zf) goto L_11a75431;
L_11a75427:;
  /* 11a75427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a75429:;
  /* 11a75429 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a7542b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7542e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a7542f jne 0x11a75429 */
  if (!C.zf) goto L_11a75429;
L_11a75431:;
  /* 11a75431 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a75434 jne 0x11a753bb */
  if (!C.zf) goto L_11a753bb;
L_11a75436:;
  /* 11a75436 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a7543a pop ebx */
  EBX = (pop32());
  /* 11a7543b pop esi */
  ESI = (pop32());
  /* 11a7543c pop edi */
  EDI = (pop32());
  /* 11a7543d ret  */
  ESPCHK(0x11a75340u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a75440 (88 bytes, 40 insns) */
void f_11a75440(void) {
  FTRACE(0x11a75440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75440 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a75444 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a75448 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a7544a je 0x11a75493 */
  if (C.zf) goto L_11a75493;
  /* 11a7544c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a7544e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a75452 push edi */
  push32((uint32_t)(EDI));
  /* 11a75453 mov edi, ecx */
  EDI = (ECX);
  /* 11a75455 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75458 jb 0x11a75487 */
  if (C.cf) goto L_11a75487;
  /* 11a7545a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a7545c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a7545f je 0x11a75469 */
  if (C.zf) goto L_11a75469;
  /* 11a75461 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a75463:;
  /* 11a75463 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a75465 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a75466 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a75467 jne 0x11a75463 */
  if (!C.zf) goto L_11a75463;
L_11a75469:;
  /* 11a75469 mov ecx, eax */
  ECX = (EAX);
  /* 11a7546b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a7546e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75470 mov ecx, eax */
  ECX = (EAX);
  /* 11a75472 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a75475 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75477 mov ecx, edx */
  ECX = (EDX);
  /* 11a75479 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a7547c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7547f je 0x11a75487 */
  if (C.zf) goto L_11a75487;
  /* 11a75481 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a75483 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a75485 je 0x11a7548d */
  if (C.zf) goto L_11a7548d;
L_11a75487:;
  /* 11a75487 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a75489 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a7548a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a7548b jne 0x11a75487 */
  if (!C.zf) goto L_11a75487;
L_11a7548d:;
  /* 11a7548d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a75491 pop edi */
  EDI = (pop32());
  /* 11a75492 ret  */
  ESPCHK(0x11a75440u, _esp0);
  ESP += 4; return;
L_11a75493:;
  /* 11a75493 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a75497 ret  */
  ESPCHK(0x11a75440u, _esp0);
  ESP += 4; return;
}

/* FUN_10005498 @ 0x11a75498 (27 bytes, 13 insns) */
void f_11a75498(void) {
  FTRACE(0x11a75498u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75498 mov eax, dword ptr [0x11a78150] */
  EAX = (r32((uint32_t)(0x11a78150)));
  /* 11a7549d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7549f je 0x11a754b0 */
  if (C.zf) goto L_11a754b0;
  /* 11a754a1 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11a754a5 call eax */
  call_ind((uint32_t)(EAX), 0x11a754a7u);
  /* 11a754a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a754a9 pop ecx */
  ECX = (pop32());
  /* 11a754aa je 0x11a754b0 */
  if (C.zf) goto L_11a754b0;
  /* 11a754ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11a754ae pop eax */
  EAX = (pop32());
  /* 11a754af ret  */
  ESPCHK(0x11a75498u, _esp0);
  ESP += 4; return;
L_11a754b0:;
  /* 11a754b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a754b2 ret  */
  ESPCHK(0x11a75498u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b3 @ 0x11a754b3 (511 bytes, 193 insns) */
void f_11a754b3(void) {
  FTRACE(0x11a754b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a754b3 push ebp */
  push32((uint32_t)(EBP));
  /* 11a754b4 mov ebp, esp */
  EBP = (ESP);
  /* 11a754b6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a754b8 push 0x11a76498 */
  push32((uint32_t)(0x11a76498u));
  /* 11a754bd push 0x11a75c80 */
  push32((uint32_t)(0x11a75c80u));
  /* 11a754c2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a754c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a754c9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a754d0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a754d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11a754d4 push esi */
  push32((uint32_t)(ESI));
  /* 11a754d5 push edi */
  push32((uint32_t)(EDI));
  /* 11a754d6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a754d9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a754db cmp dword ptr [0x11a78178], edi */
  { uint32_t _a=(r32((uint32_t)(0x11a78178))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a754e1 jne 0x11a75529 */
  if (!C.zf) goto L_11a75529;
  /* 11a754e3 push edi */
  push32((uint32_t)(EDI));
  /* 11a754e4 push edi */
  push32((uint32_t)(EDI));
  /* 11a754e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a754e7 pop ebx */
  EBX = (pop32());
  /* 11a754e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11a754e9 push 0x11a76490 */
  push32((uint32_t)(0x11a76490u));
  /* 11a754ee mov esi, 0x100 */
  ESI = (0x100u);
  /* 11a754f3 push esi */
  push32((uint32_t)(ESI));
  /* 11a754f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a754f5 call dword ptr [0x11a76014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76014))), 0x11a754fbu);
  /* 11a754fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a754fd je 0x11a75507 */
  if (C.zf) goto L_11a75507;
  /* 11a754ff mov dword ptr [0x11a78178], ebx */
  w32((uint32_t)(0x11a78178), (EBX));
  /* 11a75505 jmp 0x11a75529 */
  goto L_11a75529;
L_11a75507:;
  /* 11a75507 push edi */
  push32((uint32_t)(EDI));
  /* 11a75508 push edi */
  push32((uint32_t)(EDI));
  /* 11a75509 push ebx */
  push32((uint32_t)(EBX));
  /* 11a7550a push 0x11a7648c */
  push32((uint32_t)(0x11a7648cu));
  /* 11a7550f push esi */
  push32((uint32_t)(ESI));
  /* 11a75510 push edi */
  push32((uint32_t)(EDI));
  /* 11a75511 call dword ptr [0x11a76018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76018))), 0x11a75517u);
  /* 11a75517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a75519 je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a7551f mov dword ptr [0x11a78178], 2 */
  w32((uint32_t)(0x11a78178), (0x2u));
L_11a75529:;
  /* 11a75529 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7552c jle 0x11a7553e */
  if ((C.zf||C.sf!=C.of)) goto L_11a7553e;
  /* 11a7552e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a75531 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a75534 call 0x11a756d7 */
  push32(0x11a75539u); f_11a756d7();
  /* 11a75539 pop ecx */
  ECX = (pop32());
  /* 11a7553a pop ecx */
  ECX = (pop32());
  /* 11a7553b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11a7553e:;
  /* 11a7553e mov eax, dword ptr [0x11a78178] */
  EAX = (r32((uint32_t)(0x11a78178)));
  /* 11a75543 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75546 jne 0x11a75565 */
  if (!C.zf) goto L_11a75565;
  /* 11a75548 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a7554b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a7554e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a75551 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a75554 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a75557 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a7555a call dword ptr [0x11a76018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76018))), 0x11a75560u);
  /* 11a75560 jmp 0x11a75643 */
  goto L_11a75643;
L_11a75565:;
  /* 11a75565 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75568 jne 0x11a75641 */
  if (!C.zf) goto L_11a75641;
  /* 11a7556e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75571 jne 0x11a7557b */
  if (!C.zf) goto L_11a7557b;
  /* 11a75573 mov eax, dword ptr [0x11a78170] */
  EAX = (r32((uint32_t)(0x11a78170)));
  /* 11a75578 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11a7557b:;
  /* 11a7557b push edi */
  push32((uint32_t)(EDI));
  /* 11a7557c push edi */
  push32((uint32_t)(EDI));
  /* 11a7557d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a75580 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a75583 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11a75586 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a75588 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a7558a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a7558d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a7558e push eax */
  push32((uint32_t)(EAX));
  /* 11a7558f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a75592 call dword ptr [0x11a7601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7601c))), 0x11a75598u);
  /* 11a75598 mov ebx, eax */
  EBX = (EAX);
  /* 11a7559a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11a7559d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7559f je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a755a5 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11a755a8 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11a755ab add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a755ae and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a755b0 call 0x11a75d60 */
  push32(0x11a755b5u); f_11a75d60();
  /* 11a755b5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a755b8 mov eax, esp */
  EAX = (ESP);
  /* 11a755ba mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a755bd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a755c1 jmp 0x11a755d6 */
  goto L_11a755d6;
  /* 11a755c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a755c5 pop eax */
  EAX = (pop32());
  /* 11a755c6 ret  */
  ESPCHK(0x11a754b3u, _esp0);
  ESP += 4; return;
  /* 11a755c7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a755ca xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a755cc mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11a755cf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a755d3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11a755d6:;
  /* 11a755d6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a755d9 je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a755db push ebx */
  push32((uint32_t)(EBX));
  /* 11a755dc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a755df push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a755e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a755e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a755e7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a755ea call dword ptr [0x11a7601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7601c))), 0x11a755f0u);
  /* 11a755f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a755f2 je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a755f4 push edi */
  push32((uint32_t)(EDI));
  /* 11a755f5 push edi */
  push32((uint32_t)(EDI));
  /* 11a755f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a755f7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a755fa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a755fd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a75600 call dword ptr [0x11a76014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76014))), 0x11a75606u);
  /* 11a75606 mov esi, eax */
  ESI = (EAX);
  /* 11a75608 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11a7560b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7560d je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a7560f test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11a75613 je 0x11a75655 */
  if (C.zf) goto L_11a75655;
  /* 11a75615 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75618 je 0x11a756d0 */
  if (C.zf) goto L_11a756d0;
  /* 11a7561e cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75621 jg 0x11a75641 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a75641;
  /* 11a75623 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a75626 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a75629 push ebx */
  push32((uint32_t)(EBX));
  /* 11a7562a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a7562d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a75630 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a75633 call dword ptr [0x11a76014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76014))), 0x11a75639u);
  /* 11a75639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a7563b jne 0x11a756d0 */
  if (!C.zf) goto L_11a756d0;
L_11a75641:;
  /* 11a75641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a75643:;
  /* 11a75643 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11a75646 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a75649 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a75650 pop edi */
  EDI = (pop32());
  /* 11a75651 pop esi */
  ESI = (pop32());
  /* 11a75652 pop ebx */
  EBX = (pop32());
  /* 11a75653 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75654 ret  */
  ESPCHK(0x11a754b3u, _esp0);
  ESP += 4; return;
L_11a75655:;
  /* 11a75655 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a7565c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11a7565f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75662 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a75664 call 0x11a75d60 */
  push32(0x11a75669u); f_11a75d60();
  /* 11a75669 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a7566c mov ebx, esp */
  EBX = (ESP);
  /* 11a7566e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11a75671 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a75675 jmp 0x11a75689 */
  goto L_11a75689;
  /* 11a75677 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a75679 pop eax */
  EAX = (pop32());
  /* 11a7567a ret  */
  ESPCHK(0x11a754b3u, _esp0);
  ESP += 4; return;
  /* 11a7567b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a7567e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11a75680 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a75682 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a75686 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11a75689:;
  /* 11a75689 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7568b je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a7568d push esi */
  push32((uint32_t)(ESI));
  /* 11a7568e push ebx */
  push32((uint32_t)(EBX));
  /* 11a7568f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11a75692 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11a75695 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a75698 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a7569b call dword ptr [0x11a76014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76014))), 0x11a756a1u);
  /* 11a756a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a756a3 je 0x11a75641 */
  if (C.zf) goto L_11a75641;
  /* 11a756a5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a756a8 push edi */
  push32((uint32_t)(EDI));
  /* 11a756a9 push edi */
  push32((uint32_t)(EDI));
  /* 11a756aa jne 0x11a756b0 */
  if (!C.zf) goto L_11a756b0;
  /* 11a756ac push edi */
  push32((uint32_t)(EDI));
  /* 11a756ad push edi */
  push32((uint32_t)(EDI));
  /* 11a756ae jmp 0x11a756b6 */
  goto L_11a756b6;
L_11a756b0:;
  /* 11a756b0 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11a756b3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11a756b6:;
  /* 11a756b6 push esi */
  push32((uint32_t)(ESI));
  /* 11a756b7 push ebx */
  push32((uint32_t)(EBX));
  /* 11a756b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a756bd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11a756c0 call dword ptr [0x11a76068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76068))), 0x11a756c6u);
  /* 11a756c6 mov esi, eax */
  ESI = (EAX);
  /* 11a756c8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a756ca je 0x11a75641 */
  if (C.zf) goto L_11a75641;
L_11a756d0:;
  /* 11a756d0 mov eax, esi */
  EAX = (ESI);
  /* 11a756d2 jmp 0x11a75643 */
  goto L_11a75643;
}

/* FUN_100056d7 @ 0x11a756d7 (43 bytes, 20 insns) */
void f_11a756d7(void) {
  FTRACE(0x11a756d7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a756d7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a756db mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a756df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a756e1 push esi */
  push32((uint32_t)(ESI));
  /* 11a756e2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11a756e5 je 0x11a756f4 */
  if (C.zf) goto L_11a756f4;
L_11a756e7:;
  /* 11a756e7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a756ea je 0x11a756f4 */
  if (C.zf) goto L_11a756f4;
  /* 11a756ec inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a756ed mov esi, ecx */
  ESI = (ECX);
  /* 11a756ef dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a756f0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11a756f2 jne 0x11a756e7 */
  if (!C.zf) goto L_11a756e7;
L_11a756f4:;
  /* 11a756f4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a756f7 pop esi */
  ESI = (pop32());
  /* 11a756f8 jne 0x11a756ff */
  if (!C.zf) goto L_11a756ff;
  /* 11a756fa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a756fe ret  */
  ESPCHK(0x11a756d7u, _esp0);
  ESP += 4; return;
L_11a756ff:;
  /* 11a756ff mov eax, edx */
  EAX = (EDX);
  /* 11a75701 ret  */
  ESPCHK(0x11a756d7u, _esp0);
  ESP += 4; return;
}

/* FUN_10005702 @ 0x11a75702 (318 bytes, 123 insns) */
void f_11a75702(void) {
  FTRACE(0x11a75702u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75702 push ebp */
  push32((uint32_t)(EBP));
  /* 11a75703 mov ebp, esp */
  EBP = (ESP);
  /* 11a75705 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11a75707 push 0x11a764b0 */
  push32((uint32_t)(0x11a764b0u));
  /* 11a7570c push 0x11a75c80 */
  push32((uint32_t)(0x11a75c80u));
  /* 11a75711 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11a75717 push eax */
  push32((uint32_t)(EAX));
  /* 11a75718 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11a7571f sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75722 push ebx */
  push32((uint32_t)(EBX));
  /* 11a75723 push esi */
  push32((uint32_t)(ESI));
  /* 11a75724 push edi */
  push32((uint32_t)(EDI));
  /* 11a75725 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a75728 mov eax, dword ptr [0x11a7817c] */
  EAX = (r32((uint32_t)(0x11a7817c)));
  /* 11a7572d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a7572f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75731 jne 0x11a75771 */
  if (!C.zf) goto L_11a75771;
  /* 11a75733 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a75736 push eax */
  push32((uint32_t)(EAX));
  /* 11a75737 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a75739 pop esi */
  ESI = (pop32());
  /* 11a7573a push esi */
  push32((uint32_t)(ESI));
  /* 11a7573b push 0x11a76490 */
  push32((uint32_t)(0x11a76490u));
  /* 11a75740 push esi */
  push32((uint32_t)(ESI));
  /* 11a75741 call dword ptr [0x11a7600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7600c))), 0x11a75747u);
  /* 11a75747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a75749 je 0x11a7574f */
  if (C.zf) goto L_11a7574f;
  /* 11a7574b mov eax, esi */
  EAX = (ESI);
  /* 11a7574d jmp 0x11a7576c */
  goto L_11a7576c;
L_11a7574f:;
  /* 11a7574f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11a75752 push eax */
  push32((uint32_t)(EAX));
  /* 11a75753 push esi */
  push32((uint32_t)(ESI));
  /* 11a75754 push 0x11a7648c */
  push32((uint32_t)(0x11a7648cu));
  /* 11a75759 push esi */
  push32((uint32_t)(ESI));
  /* 11a7575a push ebx */
  push32((uint32_t)(EBX));
  /* 11a7575b call dword ptr [0x11a76010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76010))), 0x11a75761u);
  /* 11a75761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a75763 je 0x11a75837 */
  if (C.zf) goto L_11a75837;
  /* 11a75769 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a7576b pop eax */
  EAX = (pop32());
L_11a7576c:;
  /* 11a7576c mov dword ptr [0x11a7817c], eax */
  w32((uint32_t)(0x11a7817c), (EAX));
L_11a75771:;
  /* 11a75771 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75774 jne 0x11a7579a */
  if (!C.zf) goto L_11a7579a;
  /* 11a75776 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11a75779 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7577b jne 0x11a75782 */
  if (!C.zf) goto L_11a75782;
  /* 11a7577d mov eax, dword ptr [0x11a78160] */
  EAX = (r32((uint32_t)(0x11a78160)));
L_11a75782:;
  /* 11a75782 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a75785 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a75788 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a7578b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a7578e push eax */
  push32((uint32_t)(EAX));
  /* 11a7578f call dword ptr [0x11a76010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a76010))), 0x11a75795u);
  /* 11a75795 jmp 0x11a75839 */
  goto L_11a75839;
L_11a7579a:;
  /* 11a7579a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7579d jne 0x11a75837 */
  if (!C.zf) goto L_11a75837;
  /* 11a757a3 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a757a6 jne 0x11a757b0 */
  if (!C.zf) goto L_11a757b0;
  /* 11a757a8 mov eax, dword ptr [0x11a78170] */
  EAX = (r32((uint32_t)(0x11a78170)));
  /* 11a757ad mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11a757b0:;
  /* 11a757b0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a757b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11a757b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a757b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a757b8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11a757bb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a757bd sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a757bf and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11a757c2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11a757c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a757c4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a757c7 call dword ptr [0x11a7601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7601c))), 0x11a757cdu);
  /* 11a757cd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a757d0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a757d2 je 0x11a75837 */
  if (C.zf) goto L_11a75837;
  /* 11a757d4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11a757d7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11a757da mov eax, edi */
  EAX = (EDI);
  /* 11a757dc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a757df and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11a757e1 call 0x11a75d60 */
  push32(0x11a757e6u); f_11a75d60();
  /* 11a757e6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11a757e9 mov esi, esp */
  ESI = (ESP);
  /* 11a757eb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11a757ee push edi */
  push32((uint32_t)(EDI));
  /* 11a757ef push ebx */
  push32((uint32_t)(EBX));
  /* 11a757f0 push esi */
  push32((uint32_t)(ESI));
  /* 11a757f1 call 0x11a75440 */
  push32(0x11a757f6u); f_11a75440();
  /* 11a757f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a757f9 jmp 0x11a75806 */
  goto L_11a75806;
  /* 11a757fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11a757fd pop eax */
  EAX = (pop32());
  /* 11a757fe ret  */
  ESPCHK(0x11a75702u, _esp0);
  ESP += 4; return;
  /* 11a757ff mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11a75802 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11a75804 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11a75806:;
  /* 11a75806 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11a7580a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7580c je 0x11a75837 */
  if (C.zf) goto L_11a75837;
  /* 11a7580e push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11a75811 push esi */
  push32((uint32_t)(ESI));
  /* 11a75812 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11a75815 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11a75818 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a7581a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11a7581d call dword ptr [0x11a7601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7601c))), 0x11a75823u);
  /* 11a75823 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75825 je 0x11a75837 */
  if (C.zf) goto L_11a75837;
  /* 11a75827 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11a7582a push eax */
  push32((uint32_t)(EAX));
  /* 11a7582b push esi */
  push32((uint32_t)(ESI));
  /* 11a7582c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a7582f call dword ptr [0x11a7600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11a7600c))), 0x11a75835u);
  /* 11a75835 jmp 0x11a75839 */
  goto L_11a75839;
L_11a75837:;
  /* 11a75837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a75839:;
  /* 11a75839 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11a7583c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a7583f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11a75846 pop edi */
  EDI = (pop32());
  /* 11a75847 pop esi */
  ESI = (pop32());
  /* 11a75848 pop ebx */
  EBX = (pop32());
  /* 11a75849 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a7584a ret  */
  ESPCHK(0x11a75702u, _esp0);
  ESP += 4; return;
}

/* FUN_10005850 @ 0x11a75850 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11a75850(void) {
  FTRACE(0x11a75850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75850 push ebp */
  push32((uint32_t)(EBP));
  /* 11a75851 mov ebp, esp */
  EBP = (ESP);
  /* 11a75853 push edi */
  push32((uint32_t)(EDI));
  /* 11a75854 push esi */
  push32((uint32_t)(ESI));
  /* 11a75855 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a75858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a7585b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a7585e mov eax, ecx */
  EAX = (ECX);
  /* 11a75860 mov edx, ecx */
  EDX = (ECX);
  /* 11a75862 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75864 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75866 jbe 0x11a75870 */
  if ((C.cf||C.zf)) goto L_11a75870;
  /* 11a75868 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7586a jb 0x11a759e8 */
  if (C.cf) goto L_11a759e8;
L_11a75870:;
  /* 11a75870 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a75876 jne 0x11a7588c */
  if (!C.zf) goto L_11a7588c;
  /* 11a75878 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7587b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a7587e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75881 jb 0x11a758ac */
  if (C.cf) goto L_11a758ac;
  /* 11a75883 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75885 jmp dword ptr [edx*4 + 0x11a75998] */
  switch (EDX) {
    case 0: goto L_11a759a8;
    case 1: goto L_11a759b0;
    case 2: goto L_11a759bc;
    case 3: goto L_11a759d0;
    default: x86_unimpl("switch@0x11a75885 out of table"); return;
  }
L_11a7588c:;
  /* 11a7588c mov eax, edi */
  EAX = (EDI);
  /* 11a7588e mov edx, 3 */
  EDX = (0x3u);
  /* 11a75893 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75896 jb 0x11a758a4 */
  if (C.cf) goto L_11a758a4;
  /* 11a75898 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a7589b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7589d jmp dword ptr [eax*4 + 0x11a758b0] */
  switch (EAX) {
    case 1: goto L_11a758c0;
    case 2: goto L_11a758ec;
    case 3: goto L_11a75910;
    default: x86_unimpl("switch@0x11a7589d out of table"); return;
  }
L_11a758a4:;
  /* 11a758a4 jmp dword ptr [ecx*4 + 0x11a759a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a759a8)))); return;
  /* 11a758ab nop  */
  /* nop */
L_11a758ac:;
  /* 11a758ac jmp dword ptr [ecx*4 + 0x11a7592c] */
  switch (ECX) {
    case 0: goto L_11a7598f;
    case 1: goto L_11a7597c;
    case 2: goto L_11a75974;
    case 3: goto L_11a7596c;
    case 4: goto L_11a75964;
    case 5: goto L_11a7595c;
    case 6: goto L_11a75954;
    case 7: goto L_11a7594c;
    default: x86_unimpl("switch@0x11a758ac out of table"); return;
  }
  /* 11a758b3 nop  */
  /* nop */
L_11a758c0:;
  /* 11a758c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a758c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a758c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a758c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a758c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a758cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a758cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a758d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a758d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a758d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a758db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a758de jb 0x11a758ac */
  if (C.cf) goto L_11a758ac;
  /* 11a758e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a758e2 jmp dword ptr [edx*4 + 0x11a75998] */
  switch (EDX) {
    case 0: goto L_11a759a8;
    case 1: goto L_11a759b0;
    case 2: goto L_11a759bc;
    case 3: goto L_11a759d0;
    default: x86_unimpl("switch@0x11a758e2 out of table"); return;
  }
  /* 11a758e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a758ec:;
  /* 11a758ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a758ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a758f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a758f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a758f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a758f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a758fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a758fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75901 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75904 jb 0x11a758ac */
  if (C.cf) goto L_11a758ac;
  /* 11a75906 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75908 jmp dword ptr [edx*4 + 0x11a75998] */
  switch (EDX) {
    case 0: goto L_11a759a8;
    case 1: goto L_11a759b0;
    case 2: goto L_11a759bc;
    case 3: goto L_11a759d0;
    default: x86_unimpl("switch@0x11a75908 out of table"); return;
  }
  /* 11a7590f nop  */
  /* nop */
L_11a75910:;
  /* 11a75910 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a75912 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a75914 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a75916 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a75917 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a7591a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a7591b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a7591e jb 0x11a758ac */
  if (C.cf) goto L_11a758ac;
  /* 11a75920 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75922 jmp dword ptr [edx*4 + 0x11a75998] */
  switch (EDX) {
    case 0: goto L_11a759a8;
    case 1: goto L_11a759b0;
    case 2: goto L_11a759bc;
    case 3: goto L_11a759d0;
    default: x86_unimpl("switch@0x11a75922 out of table"); return;
  }
  /* 11a75929 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a7594c:;
  /* 11a7594c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a75950 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a75954:;
  /* 11a75954 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a75958 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a7595c:;
  /* 11a7595c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a75960 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a75964:;
  /* 11a75964 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a75968 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a7596c:;
  /* 11a7596c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a75970 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a75974:;
  /* 11a75974 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a75978 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a7597c:;
  /* 11a7597c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a75980 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a75984 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a7598b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a7598d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a7598f:;
  /* 11a7598f jmp dword ptr [edx*4 + 0x11a75998] */
  switch (EDX) {
    case 0: goto L_11a759a8;
    case 1: goto L_11a759b0;
    case 2: goto L_11a759bc;
    case 3: goto L_11a759d0;
    default: x86_unimpl("switch@0x11a7598f out of table"); return;
  }
  /* 11a75996 mov edi, edi */
  EDI = (EDI);
L_11a759a8:;
  /* 11a759a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a759ab pop esi */
  ESI = (pop32());
  /* 11a759ac pop edi */
  EDI = (pop32());
  /* 11a759ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a759ae ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a759af nop  */
  /* nop */
L_11a759b0:;
  /* 11a759b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a759b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a759b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a759b7 pop esi */
  ESI = (pop32());
  /* 11a759b8 pop edi */
  EDI = (pop32());
  /* 11a759b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a759ba ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a759bb nop  */
  /* nop */
L_11a759bc:;
  /* 11a759bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a759be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a759c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a759c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a759c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a759c9 pop esi */
  ESI = (pop32());
  /* 11a759ca pop edi */
  EDI = (pop32());
  /* 11a759cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a759cc ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a759cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a759d0:;
  /* 11a759d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a759d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a759d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a759d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a759da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a759dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a759e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a759e3 pop esi */
  ESI = (pop32());
  /* 11a759e4 pop edi */
  EDI = (pop32());
  /* 11a759e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a759e6 ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a759e7 nop  */
  /* nop */
L_11a759e8:;
  /* 11a759e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a759ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a759f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a759f6 jne 0x11a75a1c */
  if (!C.zf) goto L_11a75a1c;
  /* 11a759f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a759fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a759fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75a01 jb 0x11a75a10 */
  if (C.cf) goto L_11a75a10;
  /* 11a75a03 std  */
  C.df=1;
  /* 11a75a04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75a06 cld  */
  C.df=0;
  /* 11a75a07 jmp dword ptr [edx*4 + 0x11a75b30] */
  switch (EDX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75a07 out of table"); return;
  }
  /* 11a75a0e mov edi, edi */
  EDI = (EDI);
L_11a75a10:;
  /* 11a75a10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a75a12 jmp dword ptr [ecx*4 + 0x11a75ae0] */
  switch (ECX) {
    case 0: goto L_11a75b27;
    default: x86_unimpl("switch@0x11a75a12 out of table"); return;
  }
  /* 11a75a19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a75a1c:;
  /* 11a75a1c mov eax, edi */
  EAX = (EDI);
  /* 11a75a1e mov edx, 3 */
  EDX = (0x3u);
  /* 11a75a23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75a26 jb 0x11a75a34 */
  if (C.cf) goto L_11a75a34;
  /* 11a75a28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a75a2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75a2d jmp dword ptr [eax*4 + 0x11a75a38] */
  switch (EAX) {
    case 1: goto L_11a75a48;
    case 2: goto L_11a75a68;
    case 3: goto L_11a75a90;
    default: x86_unimpl("switch@0x11a75a2d out of table"); return;
  }
L_11a75a34:;
  /* 11a75a34 jmp dword ptr [ecx*4 + 0x11a75b30] */
  switch (ECX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75a34 out of table"); return;
  }
  /* 11a75a3b nop  */
  /* nop */
L_11a75a48:;
  /* 11a75a48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75a4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a75a4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75a50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a75a51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a75a54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a75a55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75a58 jb 0x11a75a10 */
  if (C.cf) goto L_11a75a10;
  /* 11a75a5a std  */
  C.df=1;
  /* 11a75a5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75a5d cld  */
  C.df=0;
  /* 11a75a5e jmp dword ptr [edx*4 + 0x11a75b30] */
  switch (EDX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75a5e out of table"); return;
  }
  /* 11a75a65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a75a68:;
  /* 11a75a68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75a6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a75a6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75a70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a75a73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a75a76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a75a79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75a7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75a7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75a82 jb 0x11a75a10 */
  if (C.cf) goto L_11a75a10;
  /* 11a75a84 std  */
  C.df=1;
  /* 11a75a85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75a87 cld  */
  C.df=0;
  /* 11a75a88 jmp dword ptr [edx*4 + 0x11a75b30] */
  switch (EDX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75a88 out of table"); return;
  }
  /* 11a75a8f nop  */
  /* nop */
L_11a75a90:;
  /* 11a75a90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75a93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a75a95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75a98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a75a9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a75a9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a75aa1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a75aa4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a75aa7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75aaa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75aad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75ab0 jb 0x11a75a10 */
  if (C.cf) goto L_11a75a10;
  /* 11a75ab6 std  */
  C.df=1;
  /* 11a75ab7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a75ab9 cld  */
  C.df=0;
  /* 11a75aba jmp dword ptr [edx*4 + 0x11a75b30] */
  switch (EDX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75aba out of table"); return;
  }
  /* 11a75ac1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a75ac4 in al, 0x5a */
  x86_unimpl("in @ 0x11a75ac4");
  /* 11a75ac6 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75ac7 adc esp, ebp */
  { uint32_t _a=(ESP),_b=(EBP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75ac9 pop edx */
  EDX = (pop32());
  /* 11a75aca cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75acb adc esp, esi */
  { uint32_t _a=(ESP),_b=(ESI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75acd pop edx */
  EDX = (pop32());
  /* 11a75ace cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75acf adc esp, edi */
  { uint32_t _a=(ESP),_b=(EDI),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75ad1 pop edx */
  EDX = (pop32());
  /* 11a75ad2 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75ad3 adc dword ptr [ebx + ebx*2], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + EBX*2))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a75ad6 cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75ad7 adc dword ptr [ebx + ebx*2], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EBX*2))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a75ada cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75adb adc dword ptr [ebx + ebx*2], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + EBX*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 11a75ade cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t _a=r32(ESI),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11a75ae4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a75ae8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a75aec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a75af0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a75af4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a75af8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a75afc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a75b00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a75b04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a75b08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a75b0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a75b10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a75b14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a75b18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a75b1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a75b23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75b25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a75b27:;
  /* 11a75b27 jmp dword ptr [edx*4 + 0x11a75b30] */
  switch (EDX) {
    case 0: goto L_11a75b40;
    case 1: goto L_11a75b48;
    case 2: goto L_11a75b58;
    case 3: goto L_11a75b6c;
    default: x86_unimpl("switch@0x11a75b27 out of table"); return;
  }
  /* 11a75b2e mov edi, edi */
  EDI = (EDI);
L_11a75b40:;
  /* 11a75b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75b43 pop esi */
  ESI = (pop32());
  /* 11a75b44 pop edi */
  EDI = (pop32());
  /* 11a75b45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75b46 ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a75b47 nop  */
  /* nop */
L_11a75b48:;
  /* 11a75b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75b4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75b4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75b51 pop esi */
  ESI = (pop32());
  /* 11a75b52 pop edi */
  EDI = (pop32());
  /* 11a75b53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75b54 ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a75b55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a75b58:;
  /* 11a75b58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75b5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75b5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a75b61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a75b64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75b67 pop esi */
  ESI = (pop32());
  /* 11a75b68 pop edi */
  EDI = (pop32());
  /* 11a75b69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75b6a ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
  /* 11a75b6b nop  */
  /* nop */
L_11a75b6c:;
  /* 11a75b6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a75b6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a75b72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a75b75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a75b78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a75b7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a75b7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75b81 pop esi */
  ESI = (pop32());
  /* 11a75b82 pop edi */
  EDI = (pop32());
  /* 11a75b83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a75b84 ret  */
  ESPCHK(0x11a75850u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11a75b88 (32 bytes, 18 insns) */
void f_11a75b88(void) {
  FTRACE(0x11a75b88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75b88 push ebp */
  push32((uint32_t)(EBP));
  /* 11a75b89 mov ebp, esp */
  EBP = (ESP);
  /* 11a75b8b push ebx */
  push32((uint32_t)(EBX));
  /* 11a75b8c push esi */
  push32((uint32_t)(ESI));
  /* 11a75b8d push edi */
  push32((uint32_t)(EDI));
  /* 11a75b8e push ebp */
  push32((uint32_t)(EBP));
  /* 11a75b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a75b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a75b93 push 0x11a75ba0 */
  push32((uint32_t)(0x11a75ba0u));
  /* 11a75b98 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11a75b9b call 0x11a75d90 */
  push32(0x11a75ba0u); f_11a75d90();
  /* 11a75ba0 pop ebp */
  EBP = (pop32());
  /* 11a75ba1 pop edi */
  EDI = (pop32());
  /* 11a75ba2 pop esi */
  ESI = (pop32());
  /* 11a75ba3 pop ebx */
  EBX = (pop32());
  /* 11a75ba4 mov esp, ebp */
  ESP = (EBP);
  /* 11a75ba6 pop ebp */
  EBP = (pop32());
  /* 11a75ba7 ret  */
  ESPCHK(0x11a75b88u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11a75bca (104 bytes, 33 insns) */
void f_11a75bca(void) {
  FTRACE(0x11a75bcau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75bca push ebx */
  push32((uint32_t)(EBX));
  /* 11a75bcb push esi */
  push32((uint32_t)(ESI));
  /* 11a75bcc push edi */
  push32((uint32_t)(EDI));
  /* 11a75bcd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a75bd1 push eax */
  push32((uint32_t)(EAX));
  /* 11a75bd2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11a75bd4 push 0x11a75ba8 */
  push32((uint32_t)(0x11a75ba8u));
  /* 11a75bd9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11a75be0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11a75be7:;
  /* 11a75be7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11a75beb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a75bee mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11a75bf1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75bf4 je 0x11a75c24 */
  if (C.zf) goto L_11a75c24;
  /* 11a75bf6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75bfa je 0x11a75c24 */
  if (C.zf) goto L_11a75c24;
  /* 11a75bfc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11a75bff mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11a75c02 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11a75c06 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a75c09 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75c0e jne 0x11a75c22 */
  if (!C.zf) goto L_11a75c22;
  /* 11a75c10 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11a75c15 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11a75c19 call 0x11a75c5e */
  push32(0x11a75c1eu); f_11a75c5e();
  /* 11a75c1e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11a75c22u);
L_11a75c22:;
  /* 11a75c22 jmp 0x11a75be7 */
  goto L_11a75be7;
L_11a75c24:;
  /* 11a75c24 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11a75c2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75c2e pop edi */
  EDI = (pop32());
  /* 11a75c2f pop esi */
  ESI = (pop32());
  /* 11a75c30 pop ebx */
  EBX = (pop32());
  /* 11a75c31 ret  */
  ESPCHK(0x11a75bcau, _esp0);
  ESP += 4; return;
}

/* FUN_10005c5e @ 0x11a75c5e (24 bytes, 10 insns) */
void f_11a75c5e(void) {
  FTRACE(0x11a75c5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75c5e push ebx */
  push32((uint32_t)(EBX));
  /* 11a75c5f push ecx */
  push32((uint32_t)(ECX));
  /* 11a75c60 mov ebx, 0x11a77ad0 */
  EBX = (0x11a77ad0u);
  /* 11a75c65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a75c68 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11a75c6b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11a75c6e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11a75c71 pop ecx */
  ECX = (pop32());
  /* 11a75c72 pop ebx */
  EBX = (pop32());
  /* 11a75c73 ret 4 */
  ESPCHK(0x11a75c5eu, _esp0);
  ESP += 8; return;
}

/* FUN_10005d3d @ 0x11a75d3d (27 bytes, 11 insns) */
void f_11a75d3d(void) {
  FTRACE(0x11a75d3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75d3d push ebp */
  push32((uint32_t)(EBP));
  /* 11a75d3e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a75d42 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11a75d44 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11a75d47 push eax */
  push32((uint32_t)(EAX));
  /* 11a75d48 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a75d4b push eax */
  push32((uint32_t)(EAX));
  /* 11a75d4c call 0x11a75bca */
  push32(0x11a75d51u); f_11a75bca();
  /* 11a75d51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a75d54 pop ebp */
  EBP = (pop32());
  /* 11a75d55 ret 4 */
  ESPCHK(0x11a75d3du, _esp0);
  ESP += 8; return;
}

/* FUN_10005d60 @ 0x11a75d60 (47 bytes, 17 insns) */
void f_11a75d60(void) {
  FTRACE(0x11a75d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75d60 push ecx */
  push32((uint32_t)(ECX));
  /* 11a75d61 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75d66 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a75d6a jb 0x11a75d80 */
  if (C.cf) goto L_11a75d80;
L_11a75d6c:;
  /* 11a75d6c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75d72 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75d77 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a75d79 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a75d7e jae 0x11a75d6c */
  if (!C.cf) goto L_11a75d6c;
L_11a75d80:;
  /* 11a75d80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a75d82 mov eax, esp */
  EAX = (ESP);
  /* 11a75d84 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a75d86 mov esp, ecx */
  ESP = (ECX);
  /* 11a75d88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a75d8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a75d8d push eax */
  push32((uint32_t)(EAX));
  /* 11a75d8e ret  */
  ESPCHK(0x11a75d60u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11a75d90 (6 bytes, 1 insns) */
void f_11a75d90(void) {
  FTRACE(0x11a75d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a75d90 jmp dword ptr [0x11a76008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11a76008)))); return;
}

