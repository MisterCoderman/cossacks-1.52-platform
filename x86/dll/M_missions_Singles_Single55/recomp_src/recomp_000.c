#include "recomp.h"

/* FUN_10001000 @ 0x11921000 (18 bytes, 7 insns) */
void f_11921000(void) {
  FTRACE(0x11921000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11921004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921005 jne 0x1192100c */
  if (!C.zf) goto L_1192100c;
  /* 11921007 call 0x11921639 */
  push32(0x1192100cu); f_11921639();
L_1192100c:;
  /* 1192100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192100e pop eax */
  EAX = (pop32());
  /* 1192100f ret 0xc */
  ESPCHK(0x11921000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11921012 (30 bytes, 15 insns) */
void f_11921012(void) {
  FTRACE(0x11921012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921012 push esi */
  push32((uint32_t)(ESI));
  /* 11921013 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11921015:;
  /* 11921015 push esi */
  push32((uint32_t)(ESI));
  /* 11921016 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1192101a call dword ptr [0x11926164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926164))), 0x11921020u);
  /* 11921020 pop ecx */
  ECX = (pop32());
  /* 11921021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11921023 pop ecx */
  ECX = (pop32());
  /* 11921024 jg 0x1192102c */
  if ((!C.zf&&C.sf==C.of)) goto L_1192102c;
  /* 11921026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11921027 cmp esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192102a jl 0x11921015 */
  if ((C.sf!=C.of)) goto L_11921015;
L_1192102c:;
  /* 1192102c mov eax, esi */
  EAX = (ESI);
  /* 1192102e pop esi */
  ESI = (pop32());
  /* 1192102f ret  */
  ESPCHK(0x11921012u, _esp0);
  ESP += 4; return;
}

/* FUN_10001030 @ 0x11921030 (147 bytes, 58 insns) */
void f_11921030(void) {
  FTRACE(0x11921030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921030 push ebp */
  push32((uint32_t)(EBP));
  /* 11921031 mov ebp, esp */
  EBP = (ESP);
  /* 11921033 push ecx */
  push32((uint32_t)(ECX));
  /* 11921034 push esi */
  push32((uint32_t)(ESI));
  /* 11921035 push edi */
  push32((uint32_t)(EDI));
  /* 11921036 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11921039 call 0x11921012 */
  push32(0x1192103eu); f_11921012();
  /* 1192103e push 0 */
  push32((uint32_t)(0x0u));
  /* 11921040 mov esi, dword ptr [0x1192615c] */
  ESI = (r32((uint32_t)(0x1192615c)));
  /* 11921046 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11921049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1192104c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192104e pop edi */
  EDI = (pop32());
  /* 1192104f push edi */
  push32((uint32_t)(EDI));
  /* 11921050 call esi */
  call_ind((uint32_t)(ESI), 0x11921052u);
  /* 11921052 push edi */
  push32((uint32_t)(EDI));
  /* 11921053 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11921056 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921058 call esi */
  call_ind((uint32_t)(ESI), 0x1192105au);
  /* 1192105a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192105d cmp dword ptr [0x11927a98], edi */
  { uint32_t _a=(r32((uint32_t)(0x11927a98))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921063 jle 0x11921081 */
  if ((C.zf||C.sf!=C.of)) goto L_11921081;
  /* 11921065 mov esi, dword ptr [0x11926160] */
  ESI = (r32((uint32_t)(0x11926160)));
  /* 1192106b push edi */
  push32((uint32_t)(EDI));
  /* 1192106c push edi */
  push32((uint32_t)(EDI));
  /* 1192106d push 0x11927c50 */
  push32((uint32_t)(0x11927c50u));
  /* 11921072 call esi */
  call_ind((uint32_t)(ESI), 0x11921074u);
  /* 11921074 push edi */
  push32((uint32_t)(EDI));
  /* 11921075 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921077 push 0x11927ac0 */
  push32((uint32_t)(0x11927ac0u));
  /* 1192107c call esi */
  call_ind((uint32_t)(ESI), 0x1192107eu);
  /* 1192107e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921081:;
  /* 11921081 push 0 */
  push32((uint32_t)(0x0u));
  /* 11921083 call dword ptr [0x11926158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926158))), 0x11921089u);
  /* 11921089 mov esi, dword ptr [0x11926168] */
  ESI = (r32((uint32_t)(0x11926168)));
  /* 1192108f push 0 */
  push32((uint32_t)(0x0u));
  /* 11921091 push edi */
  push32((uint32_t)(EDI));
  /* 11921092 call esi */
  call_ind((uint32_t)(ESI), 0x11921094u);
  /* 11921094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11921096 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921098 call esi */
  call_ind((uint32_t)(ESI), 0x1192109au);
  /* 1192109a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1192109d mov esi, dword ptr [0x1192616c] */
  ESI = (r32((uint32_t)(0x1192616c)));
  /* 119210a3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119210a6 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119210a9 push edi */
  push32((uint32_t)(EDI));
  /* 119210aa call esi */
  call_ind((uint32_t)(ESI), 0x119210acu);
  /* 119210ac push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119210af push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119210b2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119210b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119210b7 call esi */
  call_ind((uint32_t)(ESI), 0x119210b9u);
  /* 119210b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119210bc add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119210bf pop edi */
  EDI = (pop32());
  /* 119210c0 pop esi */
  ESI = (pop32());
  /* 119210c1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119210c2 ret  */
  ESPCHK(0x11921030u, _esp0);
  ESP += 4; return;
}

/* FUN_100010c3 @ 0x119210c3 (24 bytes, 7 insns) */
void f_119210c3(void) {
  FTRACE(0x119210c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119210c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119210c5 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 119210ca push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119210ce push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119210d2 call 0x11921030 */
  push32(0x119210d7u); f_11921030();
  /* 119210d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119210da ret  */
  ESPCHK(0x119210c3u, _esp0);
  ESP += 4; return;
}

/* FUN_100010db @ 0x119210db (23 bytes, 7 insns) */
void f_119210db(void) {
  FTRACE(0x119210dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119210db push 0 */
  push32((uint32_t)(0x0u));
  /* 119210dd push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119210e1 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119210e5 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 119210e9 call 0x11921030 */
  push32(0x119210eeu); f_11921030();
  /* 119210ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119210f1 ret  */
  ESPCHK(0x119210dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100010f2 @ 0x119210f2 (128 bytes, 49 insns) */
void f_119210f2(void) {
  FTRACE(0x119210f2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119210f2 push ebp */
  push32((uint32_t)(EBP));
  /* 119210f3 push edi */
  push32((uint32_t)(EDI));
  /* 119210f4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119210f6 push 0x11927b10 */
  push32((uint32_t)(0x11927b10u));
  /* 119210fb push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 119210ff mov edi, 0x11927cb0 */
  EDI = (0x11927cb0u);
  /* 11921104 push edi */
  push32((uint32_t)(EDI));
  /* 11921105 call dword ptr [0x11926134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926134))), 0x1192110bu);
  /* 1192110b xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1192110d push ebp */
  push32((uint32_t)(EBP));
  /* 1192110e push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 11921112 call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x11921118u);
  /* 11921118 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192111b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192111d je 0x1192116f */
  if (C.zf) goto L_1192116f;
  /* 1192111f push ebx */
  push32((uint32_t)(EBX));
  /* 11921120 push esi */
  push32((uint32_t)(ESI));
  /* 11921121 mov ebx, 0x11927b98 */
  EBX = (0x11927b98u);
  /* 11921126 push ebp */
  push32((uint32_t)(EBP));
  /* 11921127 push ebx */
  push32((uint32_t)(EBX));
  /* 11921128 push ebp */
  push32((uint32_t)(EBP));
  /* 11921129 call dword ptr [0x11926148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926148))), 0x1192112fu);
  /* 1192112f mov esi, dword ptr [0x11926158] */
  ESI = (r32((uint32_t)(0x11926158)));
  /* 11921135 push ebp */
  push32((uint32_t)(EBP));
  /* 11921136 call esi */
  call_ind((uint32_t)(ESI), 0x11921138u);
  /* 11921138 push edi */
  push32((uint32_t)(EDI));
  /* 11921139 push 0x11927ba8 */
  push32((uint32_t)(0x11927ba8u));
  /* 1192113e call 0x119210c3 */
  push32(0x11921143u); f_119210c3();
  /* 11921143 push edi */
  push32((uint32_t)(EDI));
  /* 11921144 push 0x11927bb0 */
  push32((uint32_t)(0x11927bb0u));
  /* 11921149 call 0x119210c3 */
  push32(0x1192114eu); f_119210c3();
  /* 1192114e push 1 */
  push32((uint32_t)(0x1u));
  /* 11921150 call esi */
  call_ind((uint32_t)(ESI), 0x11921152u);
  /* 11921152 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921154 call esi */
  call_ind((uint32_t)(ESI), 0x11921156u);
  /* 11921156 push ebp */
  push32((uint32_t)(EBP));
  /* 11921157 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921159 call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x1192115fu);
  /* 1192115f push ebp */
  push32((uint32_t)(EBP));
  /* 11921160 push ebx */
  push32((uint32_t)(EBX));
  /* 11921161 call dword ptr [0x11926150] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926150))), 0x11921167u);
  /* 11921167 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192116a push 1 */
  push32((uint32_t)(0x1u));
  /* 1192116c pop eax */
  EAX = (pop32());
  /* 1192116d pop esi */
  ESI = (pop32());
  /* 1192116e pop ebx */
  EBX = (pop32());
L_1192116f:;
  /* 1192116f pop edi */
  EDI = (pop32());
  /* 11921170 pop ebp */
  EBP = (pop32());
  /* 11921171 ret  */
  ESPCHK(0x119210f2u, _esp0);
  ESP += 4; return;
}

/* FUN_10001172 @ 0x11921172 (217 bytes, 94 insns) */
void f_11921172(void) {
  FTRACE(0x11921172u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921172 push ebx */
  push32((uint32_t)(EBX));
  /* 11921173 push ebp */
  push32((uint32_t)(EBP));
  /* 11921174 push esi */
  push32((uint32_t)(ESI));
  /* 11921175 push edi */
  push32((uint32_t)(EDI));
  /* 11921176 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 1192117a call 0x11921012 */
  push32(0x1192117fu); f_11921012();
  /* 1192117f mov edi, dword ptr [0x11926130] */
  EDI = (r32((uint32_t)(0x11926130)));
  /* 11921185 mov esi, eax */
  ESI = (EAX);
  /* 11921187 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921189 push esi */
  push32((uint32_t)(ESI));
  /* 1192118a call edi */
  call_ind((uint32_t)(EDI), 0x1192118cu);
  /* 1192118c mov ebp, dword ptr [0x11926128] */
  EBP = (r32((uint32_t)(0x11926128)));
  /* 11921192 mov ebx, 0x3e8 */
  EBX = (0x3e8u);
  /* 11921197 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192119a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192119c jge 0x119211ab */
  if ((C.sf==C.of)) goto L_119211ab;
  /* 1192119e push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119211a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 119211a5 push esi */
  push32((uint32_t)(ESI));
  /* 119211a6 call ebp */
  call_ind((uint32_t)(EBP), 0x119211a8u);
  /* 119211a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119211ab:;
  /* 119211ab push 2 */
  push32((uint32_t)(0x2u));
  /* 119211ad push esi */
  push32((uint32_t)(ESI));
  /* 119211ae call edi */
  call_ind((uint32_t)(EDI), 0x119211b0u);
  /* 119211b0 pop ecx */
  ECX = (pop32());
  /* 119211b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119211b3 pop ecx */
  ECX = (pop32());
  /* 119211b4 jge 0x119211c3 */
  if ((C.sf==C.of)) goto L_119211c3;
  /* 119211b6 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119211bb push 2 */
  push32((uint32_t)(0x2u));
  /* 119211bd push esi */
  push32((uint32_t)(ESI));
  /* 119211be call ebp */
  call_ind((uint32_t)(EBP), 0x119211c0u);
  /* 119211c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119211c3:;
  /* 119211c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119211c5 push esi */
  push32((uint32_t)(ESI));
  /* 119211c6 call edi */
  call_ind((uint32_t)(EDI), 0x119211c8u);
  /* 119211c8 pop ecx */
  ECX = (pop32());
  /* 119211c9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119211cb pop ecx */
  ECX = (pop32());
  /* 119211cc jge 0x119211db */
  if ((C.sf==C.of)) goto L_119211db;
  /* 119211ce push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119211d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119211d5 push esi */
  push32((uint32_t)(ESI));
  /* 119211d6 call ebp */
  call_ind((uint32_t)(EBP), 0x119211d8u);
  /* 119211d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119211db:;
  /* 119211db push 4 */
  push32((uint32_t)(0x4u));
  /* 119211dd push esi */
  push32((uint32_t)(ESI));
  /* 119211de call edi */
  call_ind((uint32_t)(EDI), 0x119211e0u);
  /* 119211e0 pop ecx */
  ECX = (pop32());
  /* 119211e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119211e3 pop ecx */
  ECX = (pop32());
  /* 119211e4 jge 0x119211f3 */
  if ((C.sf==C.of)) goto L_119211f3;
  /* 119211e6 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119211eb push 4 */
  push32((uint32_t)(0x4u));
  /* 119211ed push esi */
  push32((uint32_t)(ESI));
  /* 119211ee call ebp */
  call_ind((uint32_t)(EBP), 0x119211f0u);
  /* 119211f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119211f3:;
  /* 119211f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 119211f5 push esi */
  push32((uint32_t)(ESI));
  /* 119211f6 call edi */
  call_ind((uint32_t)(EDI), 0x119211f8u);
  /* 119211f8 pop ecx */
  ECX = (pop32());
  /* 119211f9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119211fb pop ecx */
  ECX = (pop32());
  /* 119211fc jge 0x1192120b */
  if ((C.sf==C.of)) goto L_1192120b;
  /* 119211fe push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11921203 push 5 */
  push32((uint32_t)(0x5u));
  /* 11921205 push esi */
  push32((uint32_t)(ESI));
  /* 11921206 call ebp */
  call_ind((uint32_t)(EBP), 0x11921208u);
  /* 11921208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192120b:;
  /* 1192120b mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1192120f push esi */
  push32((uint32_t)(ESI));
  /* 11921210 call dword ptr [0x11926138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926138))), 0x11921216u);
  /* 11921216 cmp eax, dword ptr [esp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192121a pop ecx */
  ECX = (pop32());
  /* 1192121b jge 0x11921244 */
  if ((C.sf==C.of)) goto L_11921244;
  /* 1192121d push 0 */
  push32((uint32_t)(0x0u));
  /* 1192121f push esi */
  push32((uint32_t)(ESI));
  /* 11921220 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11921224 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11921228 call dword ptr [0x1192613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192613c))), 0x1192122eu);
  /* 1192122e push dword ptr [esp + 0x34] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x34))));
  /* 11921232 push dword ptr [esp + 0x34] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x34))));
  /* 11921236 push esi */
  push32((uint32_t)(ESI));
  /* 11921237 call 0x119210db */
  push32(0x1192123cu); f_119210db();
  /* 1192123c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192123f push 1 */
  push32((uint32_t)(0x1u));
  /* 11921241 pop eax */
  EAX = (pop32());
  /* 11921242 jmp 0x11921246 */
  goto L_11921246;
L_11921244:;
  /* 11921244 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11921246:;
  /* 11921246 pop edi */
  EDI = (pop32());
  /* 11921247 pop esi */
  ESI = (pop32());
  /* 11921248 pop ebp */
  EBP = (pop32());
  /* 11921249 pop ebx */
  EBX = (pop32());
  /* 1192124a ret  */
  ESPCHK(0x11921172u, _esp0);
  ESP += 4; return;
}

/* FUN_1000124b @ 0x1192124b (287 bytes, 126 insns) */
void f_1192124b(void) {
  FTRACE(0x1192124bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192124b push ebx */
  push32((uint32_t)(EBX));
  /* 1192124c push ebp */
  push32((uint32_t)(EBP));
  /* 1192124d push esi */
  push32((uint32_t)(ESI));
  /* 1192124e push edi */
  push32((uint32_t)(EDI));
  /* 1192124f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11921253 call 0x11921012 */
  push32(0x11921258u); f_11921012();
  /* 11921258 mov edi, dword ptr [0x11926130] */
  EDI = (r32((uint32_t)(0x11926130)));
  /* 1192125e mov esi, eax */
  ESI = (EAX);
  /* 11921260 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921262 push esi */
  push32((uint32_t)(ESI));
  /* 11921263 call edi */
  call_ind((uint32_t)(EDI), 0x11921265u);
  /* 11921265 mov ebp, dword ptr [0x11926128] */
  EBP = (r32((uint32_t)(0x11926128)));
  /* 1192126b mov ebx, 0x3e8 */
  EBX = (0x3e8u);
  /* 11921270 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921273 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921275 jge 0x11921284 */
  if ((C.sf==C.of)) goto L_11921284;
  /* 11921277 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 1192127c push 3 */
  push32((uint32_t)(0x3u));
  /* 1192127e push esi */
  push32((uint32_t)(ESI));
  /* 1192127f call ebp */
  call_ind((uint32_t)(EBP), 0x11921281u);
  /* 11921281 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921284:;
  /* 11921284 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921286 push esi */
  push32((uint32_t)(ESI));
  /* 11921287 call edi */
  call_ind((uint32_t)(EDI), 0x11921289u);
  /* 11921289 pop ecx */
  ECX = (pop32());
  /* 1192128a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192128c pop ecx */
  ECX = (pop32());
  /* 1192128d jge 0x1192129c */
  if ((C.sf==C.of)) goto L_1192129c;
  /* 1192128f push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 11921294 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921296 push esi */
  push32((uint32_t)(ESI));
  /* 11921297 call ebp */
  call_ind((uint32_t)(EBP), 0x11921299u);
  /* 11921299 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192129c:;
  /* 1192129c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192129e push esi */
  push32((uint32_t)(ESI));
  /* 1192129f call edi */
  call_ind((uint32_t)(EDI), 0x119212a1u);
  /* 119212a1 pop ecx */
  ECX = (pop32());
  /* 119212a2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119212a4 pop ecx */
  ECX = (pop32());
  /* 119212a5 jge 0x119212b4 */
  if ((C.sf==C.of)) goto L_119212b4;
  /* 119212a7 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119212ac push 1 */
  push32((uint32_t)(0x1u));
  /* 119212ae push esi */
  push32((uint32_t)(ESI));
  /* 119212af call ebp */
  call_ind((uint32_t)(EBP), 0x119212b1u);
  /* 119212b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119212b4:;
  /* 119212b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 119212b6 push esi */
  push32((uint32_t)(ESI));
  /* 119212b7 call edi */
  call_ind((uint32_t)(EDI), 0x119212b9u);
  /* 119212b9 pop ecx */
  ECX = (pop32());
  /* 119212ba cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119212bc pop ecx */
  ECX = (pop32());
  /* 119212bd jge 0x119212cc */
  if ((C.sf==C.of)) goto L_119212cc;
  /* 119212bf push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119212c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 119212c6 push esi */
  push32((uint32_t)(ESI));
  /* 119212c7 call ebp */
  call_ind((uint32_t)(EBP), 0x119212c9u);
  /* 119212c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119212cc:;
  /* 119212cc push 5 */
  push32((uint32_t)(0x5u));
  /* 119212ce push esi */
  push32((uint32_t)(ESI));
  /* 119212cf call edi */
  call_ind((uint32_t)(EDI), 0x119212d1u);
  /* 119212d1 pop ecx */
  ECX = (pop32());
  /* 119212d2 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119212d4 pop ecx */
  ECX = (pop32());
  /* 119212d5 jge 0x119212e4 */
  if ((C.sf==C.of)) goto L_119212e4;
  /* 119212d7 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 119212dc push 5 */
  push32((uint32_t)(0x5u));
  /* 119212de push esi */
  push32((uint32_t)(ESI));
  /* 119212df call ebp */
  call_ind((uint32_t)(EBP), 0x119212e1u);
  /* 119212e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119212e4:;
  /* 119212e4 mov esi, dword ptr [0x1192611c] */
  ESI = (r32((uint32_t)(0x1192611c)));
  /* 119212ea xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 119212ec mov ebx, 0x11927c60 */
  EBX = (0x11927c60u);
  /* 119212f1 push ebp */
  push32((uint32_t)(EBP));
  /* 119212f2 push ebx */
  push32((uint32_t)(EBX));
  /* 119212f3 call esi */
  call_ind((uint32_t)(ESI), 0x119212f5u);
  /* 119212f5 pop ecx */
  ECX = (pop32());
  /* 119212f6 mov edi, 0x11927cb0 */
  EDI = (0x11927cb0u);
  /* 119212fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119212fd pop ecx */
  ECX = (pop32());
  /* 119212fe jg 0x1192131e */
  if ((!C.zf&&C.sf==C.of)) goto L_1192131e;
  /* 11921300 mov ebx, 0x11927c40 */
  EBX = (0x11927c40u);
  /* 11921305 push ebp */
  push32((uint32_t)(EBP));
  /* 11921306 push ebx */
  push32((uint32_t)(EBX));
  /* 11921307 call esi */
  call_ind((uint32_t)(ESI), 0x11921309u);
  /* 11921309 pop ecx */
  ECX = (pop32());
  /* 1192130a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192130c pop ecx */
  ECX = (pop32());
  /* 1192130d jg 0x1192131e */
  if ((!C.zf&&C.sf==C.of)) goto L_1192131e;
  /* 1192130f mov ebx, 0x11927bb8 */
  EBX = (0x11927bb8u);
  /* 11921314 push ebp */
  push32((uint32_t)(EBP));
  /* 11921315 push ebx */
  push32((uint32_t)(EBX));
  /* 11921316 call esi */
  call_ind((uint32_t)(ESI), 0x11921318u);
  /* 11921318 pop ecx */
  ECX = (pop32());
  /* 11921319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192131b pop ecx */
  ECX = (pop32());
  /* 1192131c jle 0x11921330 */
  if ((C.zf||C.sf!=C.of)) goto L_11921330;
L_1192131e:;
  /* 1192131e push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11921320 push ebp */
  push32((uint32_t)(EBP));
  /* 11921321 push ebx */
  push32((uint32_t)(EBX));
  /* 11921322 push dword ptr [esp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x2c))));
  /* 11921326 push edi */
  push32((uint32_t)(EDI));
  /* 11921327 call dword ptr [0x1192612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192612c))), 0x1192132du);
  /* 1192132d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921330:;
  /* 11921330 mov esi, dword ptr [esp + 0x28] */
  ESI = (r32((uint32_t)(ESP + 0x28)));
  /* 11921334 cmp esi, ebp */
  { uint32_t _a=(ESI),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921336 jle 0x11921351 */
  if ((C.zf||C.sf!=C.of)) goto L_11921351;
L_11921338:;
  /* 11921338 push ebp */
  push32((uint32_t)(EBP));
  /* 11921339 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1192133d push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11921341 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11921345 call dword ptr [0x1192613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192613c))), 0x1192134bu);
  /* 1192134b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192134e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1192134f jne 0x11921338 */
  if (!C.zf) goto L_11921338;
L_11921351:;
  /* 11921351 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11921355 push edi */
  push32((uint32_t)(EDI));
  /* 11921356 push dword ptr [esp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x1c))));
  /* 1192135a call 0x119210db */
  push32(0x1192135fu); f_119210db();
  /* 1192135f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921362 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921364 pop eax */
  EAX = (pop32());
  /* 11921365 pop edi */
  EDI = (pop32());
  /* 11921366 pop esi */
  ESI = (pop32());
  /* 11921367 pop ebp */
  EBP = (pop32());
  /* 11921368 pop ebx */
  EBX = (pop32());
  /* 11921369 ret  */
  ESPCHK(0x1192124bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000136a @ 0x1192136a (719 bytes, 276 insns) */
void f_1192136a(void) {
  FTRACE(0x1192136au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192136a push ebx */
  push32((uint32_t)(EBX));
  /* 1192136b push ebp */
  push32((uint32_t)(EBP));
  /* 1192136c push esi */
  push32((uint32_t)(ESI));
  /* 1192136d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1192136f push edi */
  push32((uint32_t)(EDI));
  /* 11921370 push ebx */
  push32((uint32_t)(EBX));
  /* 11921371 push 0x11927b98 */
  push32((uint32_t)(0x11927b98u));
  /* 11921376 push ebx */
  push32((uint32_t)(EBX));
  /* 11921377 call dword ptr [0x11926148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926148))), 0x1192137du);
  /* 1192137d mov edi, dword ptr [0x11926158] */
  EDI = (r32((uint32_t)(0x11926158)));
  /* 11921383 push ebx */
  push32((uint32_t)(EBX));
  /* 11921384 call edi */
  call_ind((uint32_t)(EDI), 0x11921386u);
  /* 11921386 mov esi, dword ptr [0x11926150] */
  ESI = (r32((uint32_t)(0x11926150)));
  /* 1192138c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192138f cmp dword ptr [0x11927a98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11927a98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921395 jne 0x119213d8 */
  if (!C.zf) goto L_119213d8;
  /* 11921397 push ebx */
  push32((uint32_t)(EBX));
  /* 11921398 push 0x11927ba8 */
  push32((uint32_t)(0x11927ba8u));
  /* 1192139d call esi */
  call_ind((uint32_t)(ESI), 0x1192139fu);
  /* 1192139f push 1 */
  push32((uint32_t)(0x1u));
  /* 119213a1 pop ebp */
  EBP = (pop32());
  /* 119213a2 push ebp */
  push32((uint32_t)(EBP));
  /* 119213a3 push 0x11927b38 */
  push32((uint32_t)(0x11927b38u));
  /* 119213a8 call esi */
  call_ind((uint32_t)(ESI), 0x119213aau);
  /* 119213aa push ebx */
  push32((uint32_t)(EBX));
  /* 119213ab call edi */
  call_ind((uint32_t)(EDI), 0x119213adu);
  /* 119213ad push ebp */
  push32((uint32_t)(EBP));
  /* 119213ae call dword ptr [0x119260f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260f8))), 0x119213b4u);
  /* 119213b4 push ebx */
  push32((uint32_t)(EBX));
  /* 119213b5 push 0x11927bb0 */
  push32((uint32_t)(0x11927bb0u));
  /* 119213ba call esi */
  call_ind((uint32_t)(ESI), 0x119213bcu);
  /* 119213bc push ebp */
  push32((uint32_t)(EBP));
  /* 119213bd push 0x11927b40 */
  push32((uint32_t)(0x11927b40u));
  /* 119213c2 call esi */
  call_ind((uint32_t)(ESI), 0x119213c4u);
  /* 119213c4 push ebx */
  push32((uint32_t)(EBX));
  /* 119213c5 call edi */
  call_ind((uint32_t)(EDI), 0x119213c7u);
  /* 119213c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 119213c9 call dword ptr [0x119260f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260f8))), 0x119213cfu);
  /* 119213cf push 2 */
  push32((uint32_t)(0x2u));
  /* 119213d1 call edi */
  call_ind((uint32_t)(EDI), 0x119213d3u);
  /* 119213d3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119213d6 jmp 0x119213db */
  goto L_119213db;
L_119213d8:;
  /* 119213d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 119213da pop ebp */
  EBP = (pop32());
L_119213db:;
  /* 119213db cmp dword ptr [0x11927a98], ebp */
  { uint32_t _a=(r32((uint32_t)(0x11927a98))),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119213e1 jne 0x11921446 */
  if (!C.zf) goto L_11921446;
  /* 119213e3 push ebx */
  push32((uint32_t)(EBX));
  /* 119213e4 push ebp */
  push32((uint32_t)(EBP));
  /* 119213e5 push 0x11927c50 */
  push32((uint32_t)(0x11927c50u));
  /* 119213ea call dword ptr [0x11926160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926160))), 0x119213f0u);
  /* 119213f0 push ebp */
  push32((uint32_t)(EBP));
  /* 119213f1 call dword ptr [0x11926108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926108))), 0x119213f7u);
  /* 119213f7 push ebp */
  push32((uint32_t)(EBP));
  /* 119213f8 call edi */
  call_ind((uint32_t)(EDI), 0x119213fau);
  /* 119213fa push ebx */
  push32((uint32_t)(EBX));
  /* 119213fb push 2 */
  push32((uint32_t)(0x2u));
  /* 119213fd push 0x11927ac0 */
  push32((uint32_t)(0x11927ac0u));
  /* 11921402 call dword ptr [0x11926160] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926160))), 0x11921408u);
  /* 11921408 push 2 */
  push32((uint32_t)(0x2u));
  /* 1192140a call dword ptr [0x11926108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926108))), 0x11921410u);
  /* 11921410 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921412 call edi */
  call_ind((uint32_t)(EDI), 0x11921414u);
  /* 11921414 push ebx */
  push32((uint32_t)(EBX));
  /* 11921415 push 0x11927ba8 */
  push32((uint32_t)(0x11927ba8u));
  /* 1192141a call esi */
  call_ind((uint32_t)(ESI), 0x1192141cu);
  /* 1192141c push ebx */
  push32((uint32_t)(EBX));
  /* 1192141d call edi */
  call_ind((uint32_t)(EDI), 0x1192141fu);
  /* 1192141f push ebp */
  push32((uint32_t)(EBP));
  /* 11921420 call dword ptr [0x119260f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260f8))), 0x11921426u);
  /* 11921426 push ebx */
  push32((uint32_t)(EBX));
  /* 11921427 push 0x11927b40 */
  push32((uint32_t)(0x11927b40u));
  /* 1192142c call esi */
  call_ind((uint32_t)(ESI), 0x1192142eu);
  /* 1192142e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921431 push ebx */
  push32((uint32_t)(EBX));
  /* 11921432 call edi */
  call_ind((uint32_t)(EDI), 0x11921434u);
  /* 11921434 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921436 call dword ptr [0x119260f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260f8))), 0x1192143cu);
  /* 1192143c push ebp */
  push32((uint32_t)(EBP));
  /* 1192143d call edi */
  call_ind((uint32_t)(EDI), 0x1192143fu);
  /* 1192143f push 2 */
  push32((uint32_t)(0x2u));
  /* 11921441 call edi */
  call_ind((uint32_t)(EDI), 0x11921443u);
  /* 11921443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921446:;
  /* 11921446 push ebp */
  push32((uint32_t)(EBP));
  /* 11921447 call edi */
  call_ind((uint32_t)(EDI), 0x11921449u);
  /* 11921449 push 2 */
  push32((uint32_t)(0x2u));
  /* 1192144b call edi */
  call_ind((uint32_t)(EDI), 0x1192144du);
  /* 1192144d push ebx */
  push32((uint32_t)(EBX));
  /* 1192144e push 0x11927b98 */
  push32((uint32_t)(0x11927b98u));
  /* 11921453 call esi */
  call_ind((uint32_t)(ESI), 0x11921455u);
  /* 11921455 mov edi, dword ptr [0x1192610c] */
  EDI = (r32((uint32_t)(0x1192610c)));
  /* 1192145b push ebp */
  push32((uint32_t)(EBP));
  /* 1192145c call edi */
  call_ind((uint32_t)(EDI), 0x1192145eu);
  /* 1192145e push 2 */
  push32((uint32_t)(0x2u));
  /* 11921460 call edi */
  call_ind((uint32_t)(EDI), 0x11921462u);
  /* 11921462 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921464 call edi */
  call_ind((uint32_t)(EDI), 0x11921466u);
  /* 11921466 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921468 call edi */
  call_ind((uint32_t)(EDI), 0x1192146au);
  /* 1192146a push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1192146c call dword ptr [0x11926104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926104))), 0x11921472u);
  /* 11921472 mov edi, dword ptr [0x11926114] */
  EDI = (r32((uint32_t)(0x11926114)));
  /* 11921478 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1192147a call edi */
  call_ind((uint32_t)(EDI), 0x1192147cu);
  /* 1192147c push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1192147e call edi */
  call_ind((uint32_t)(EDI), 0x11921480u);
  /* 11921480 push 0xa */
  push32((uint32_t)(0xau));
  /* 11921482 mov edi, dword ptr [0x11926128] */
  EDI = (r32((uint32_t)(0x11926128)));
  /* 11921488 pop eax */
  EAX = (pop32());
  /* 11921489 sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1192148f imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11921495 push eax */
  push32((uint32_t)(EAX));
  /* 11921496 push ebx */
  push32((uint32_t)(EBX));
  /* 11921497 push ebx */
  push32((uint32_t)(EBX));
  /* 11921498 call edi */
  call_ind((uint32_t)(EDI), 0x1192149au);
  /* 1192149a push ebx */
  push32((uint32_t)(EBX));
  /* 1192149b push ebx */
  push32((uint32_t)(EBX));
  /* 1192149c call dword ptr [0x11926130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926130))), 0x119214a2u);
  /* 119214a2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119214a5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119214a8 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119214aa push eax */
  push32((uint32_t)(EAX));
  /* 119214ab push 2 */
  push32((uint32_t)(0x2u));
  /* 119214ad push ebx */
  push32((uint32_t)(EBX));
  /* 119214ae call edi */
  call_ind((uint32_t)(EDI), 0x119214b0u);
  /* 119214b0 push ebx */
  push32((uint32_t)(EBX));
  /* 119214b1 push ebx */
  push32((uint32_t)(EBX));
  /* 119214b2 call dword ptr [0x11926130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926130))), 0x119214b8u);
  /* 119214b8 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119214bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119214bd push eax */
  push32((uint32_t)(EAX));
  /* 119214be push ebp */
  push32((uint32_t)(EBP));
  /* 119214bf push ebx */
  push32((uint32_t)(EBX));
  /* 119214c0 call edi */
  call_ind((uint32_t)(EDI), 0x119214c2u);
  /* 119214c2 push ebx */
  push32((uint32_t)(EBX));
  /* 119214c3 push 0x11927ac8 */
  push32((uint32_t)(0x11927ac8u));
  /* 119214c8 call esi */
  call_ind((uint32_t)(ESI), 0x119214cau);
  /* 119214ca mov edi, dword ptr [0x11926118] */
  EDI = (r32((uint32_t)(0x11926118)));
  /* 119214d0 push ebp */
  push32((uint32_t)(EBP));
  /* 119214d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 119214d3 call edi */
  call_ind((uint32_t)(EDI), 0x119214d5u);
  /* 119214d5 push ebx */
  push32((uint32_t)(EBX));
  /* 119214d6 push 0x11927ad0 */
  push32((uint32_t)(0x11927ad0u));
  /* 119214db call esi */
  call_ind((uint32_t)(ESI), 0x119214ddu);
  /* 119214dd push 2 */
  push32((uint32_t)(0x2u));
  /* 119214df push 4 */
  push32((uint32_t)(0x4u));
  /* 119214e1 call edi */
  call_ind((uint32_t)(EDI), 0x119214e3u);
  /* 119214e3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119214e6 push ebx */
  push32((uint32_t)(EBX));
  /* 119214e7 push 0x11927ad8 */
  push32((uint32_t)(0x11927ad8u));
  /* 119214ec call esi */
  call_ind((uint32_t)(ESI), 0x119214eeu);
  /* 119214ee push 2 */
  push32((uint32_t)(0x2u));
  /* 119214f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119214f2 call edi */
  call_ind((uint32_t)(EDI), 0x119214f4u);
  /* 119214f4 push ebx */
  push32((uint32_t)(EBX));
  /* 119214f5 push 0x11927ae8 */
  push32((uint32_t)(0x11927ae8u));
  /* 119214fa call esi */
  call_ind((uint32_t)(ESI), 0x119214fcu);
  /* 119214fc push ebp */
  push32((uint32_t)(EBP));
  /* 119214fd push 4 */
  push32((uint32_t)(0x4u));
  /* 119214ff call edi */
  call_ind((uint32_t)(EDI), 0x11921501u);
  /* 11921501 push ebx */
  push32((uint32_t)(EBX));
  /* 11921502 push dword ptr [esp + 0x3c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x3c))));
  /* 11921506 call esi */
  call_ind((uint32_t)(ESI), 0x11921508u);
  /* 11921508 push ebx */
  push32((uint32_t)(EBX));
  /* 11921509 push 5 */
  push32((uint32_t)(0x5u));
  /* 1192150b call edi */
  call_ind((uint32_t)(EDI), 0x1192150du);
  /* 1192150d push ebx */
  push32((uint32_t)(EBX));
  /* 1192150e push dword ptr [esp + 0x48] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x48))));
  /* 11921512 call esi */
  call_ind((uint32_t)(ESI), 0x11921514u);
  /* 11921514 push ebx */
  push32((uint32_t)(EBX));
  /* 11921515 push ebp */
  push32((uint32_t)(EBP));
  /* 11921516 call edi */
  call_ind((uint32_t)(EDI), 0x11921518u);
  /* 11921518 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192151b push ebx */
  push32((uint32_t)(EBX));
  /* 1192151c push 2 */
  push32((uint32_t)(0x2u));
  /* 1192151e call edi */
  call_ind((uint32_t)(EDI), 0x11921520u);
  /* 11921520 mov ebp, dword ptr [0x11926140] */
  EBP = (r32((uint32_t)(0x11926140)));
  /* 11921526 push ebx */
  push32((uint32_t)(EBX));
  /* 11921527 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11921529 call ebp */
  call_ind((uint32_t)(EBP), 0x1192152bu);
  /* 1192152b push ebx */
  push32((uint32_t)(EBX));
  /* 1192152c push 0xc */
  push32((uint32_t)(0xcu));
  /* 1192152e call ebp */
  call_ind((uint32_t)(EBP), 0x11921530u);
  /* 11921530 push ebx */
  push32((uint32_t)(EBX));
  /* 11921531 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11921533 call ebp */
  call_ind((uint32_t)(EBP), 0x11921535u);
  /* 11921535 push ebx */
  push32((uint32_t)(EBX));
  /* 11921536 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11921538 call ebp */
  call_ind((uint32_t)(EBP), 0x1192153au);
  /* 1192153a push dword ptr [esp + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x50))));
  /* 1192153e push dword ptr [esp + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x58))));
  /* 11921542 call dword ptr [0x11926154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926154))), 0x11921548u);
  /* 11921548 push ebx */
  push32((uint32_t)(EBX));
  /* 11921549 push dword ptr [esp + 0x5c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x5c))));
  /* 1192154d call esi */
  call_ind((uint32_t)(ESI), 0x1192154fu);
  /* 1192154f push 3 */
  push32((uint32_t)(0x3u));
  /* 11921551 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921553 call edi */
  call_ind((uint32_t)(EDI), 0x11921555u);
  /* 11921555 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921558 push 3 */
  push32((uint32_t)(0x3u));
  /* 1192155a push 2 */
  push32((uint32_t)(0x2u));
  /* 1192155c call edi */
  call_ind((uint32_t)(EDI), 0x1192155eu);
  /* 1192155e push ebx */
  push32((uint32_t)(EBX));
  /* 1192155f push dword ptr [esp + 0x30] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x30))));
  /* 11921563 call esi */
  call_ind((uint32_t)(ESI), 0x11921565u);
  /* 11921565 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921567 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921569 call edi */
  call_ind((uint32_t)(EDI), 0x1192156bu);
  /* 1192156b push 3 */
  push32((uint32_t)(0x3u));
  /* 1192156d push 2 */
  push32((uint32_t)(0x2u));
  /* 1192156f call edi */
  call_ind((uint32_t)(EDI), 0x11921571u);
  /* 11921571 push ebx */
  push32((uint32_t)(EBX));
  /* 11921572 push 0x11927aa8 */
  push32((uint32_t)(0x11927aa8u));
  /* 11921577 call esi */
  call_ind((uint32_t)(ESI), 0x11921579u);
  /* 11921579 push 1 */
  push32((uint32_t)(0x1u));
  /* 1192157b push 0x11927aa0 */
  push32((uint32_t)(0x11927aa0u));
  /* 11921580 call esi */
  call_ind((uint32_t)(ESI), 0x11921582u);
  /* 11921582 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921584 push 0x11927ab8 */
  push32((uint32_t)(0x11927ab8u));
  /* 11921589 call esi */
  call_ind((uint32_t)(ESI), 0x1192158bu);
  /* 1192158b push 1 */
  push32((uint32_t)(0x1u));
  /* 1192158d push 0x11927ab0 */
  push32((uint32_t)(0x11927ab0u));
  /* 11921592 call esi */
  call_ind((uint32_t)(ESI), 0x11921594u);
  /* 11921594 mov esi, dword ptr [0x11926110] */
  ESI = (r32((uint32_t)(0x11926110)));
  /* 1192159a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192159d push 5 */
  push32((uint32_t)(0x5u));
  /* 1192159f call esi */
  call_ind((uint32_t)(ESI), 0x119215a1u);
  /* 119215a1 push 3 */
  push32((uint32_t)(0x3u));
  /* 119215a3 call esi */
  call_ind((uint32_t)(ESI), 0x119215a5u);
  /* 119215a5 mov esi, dword ptr [0x1192614c] */
  ESI = (r32((uint32_t)(0x1192614c)));
  /* 119215ab pop ecx */
  ECX = (pop32());
  /* 119215ac pop ecx */
  ECX = (pop32());
  /* 119215ad mov dword ptr [esp + 0x28], 0x14 */
  w32((uint32_t)(ESP + 0x28), (0x14u));
  /* 119215b5 mov edi, 0x11927b48 */
  EDI = (0x11927b48u);
L_119215ba:;
  /* 119215ba push 0x80 */
  push32((uint32_t)(0x80u));
  /* 119215bf push dword ptr [esp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x20))));
  /* 119215c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119215c5 push 0x11927a80 */
  push32((uint32_t)(0x11927a80u));
  /* 119215ca push 0x11927b90 */
  push32((uint32_t)(0x11927b90u));
  /* 119215cf push edi */
  push32((uint32_t)(EDI));
  /* 119215d0 call esi */
  call_ind((uint32_t)(ESI), 0x119215d2u);
  /* 119215d2 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 119215d7 push dword ptr [esp + 0x3c] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x3c))));
  /* 119215db push 2 */
  push32((uint32_t)(0x2u));
  /* 119215dd push 0x11927a88 */
  push32((uint32_t)(0x11927a88u));
  /* 119215e2 push 0x11927b90 */
  push32((uint32_t)(0x11927b90u));
  /* 119215e7 push edi */
  push32((uint32_t)(EDI));
  /* 119215e8 call esi */
  call_ind((uint32_t)(ESI), 0x119215eau);
  /* 119215ea add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119215ed dec dword ptr [esp + 0x28] */
  { uint32_t _r=(r32((uint32_t)(ESP + 0x28)))-1; w32((uint32_t)(ESP + 0x28), (_r)); fl_dec(_r,32); }
  /* 119215f1 jne 0x119215ba */
  if (!C.zf) goto L_119215ba;
  /* 119215f3 push dword ptr [0x11927a98] */
  push32((uint32_t)(r32((uint32_t)(0x11927a98))));
  /* 119215f9 mov esi, dword ptr [0x11926120] */
  ESI = (r32((uint32_t)(0x11926120)));
  /* 119215ff push 1 */
  push32((uint32_t)(0x1u));
  /* 11921601 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921603 push ebx */
  push32((uint32_t)(EBX));
  /* 11921604 push 0x11927040 */
  push32((uint32_t)(0x11927040u));
  /* 11921609 push 1 */
  push32((uint32_t)(0x1u));
  /* 1192160b call esi */
  call_ind((uint32_t)(ESI), 0x1192160du);
  /* 1192160d push dword ptr [0x11927a98] */
  push32((uint32_t)(r32((uint32_t)(0x11927a98))));
  /* 11921613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921615 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921617 push ebx */
  push32((uint32_t)(EBX));
  /* 11921618 push 0x11927038 */
  push32((uint32_t)(0x11927038u));
  /* 1192161d push 2 */
  push32((uint32_t)(0x2u));
  /* 1192161f call esi */
  call_ind((uint32_t)(ESI), 0x11921621u);
  /* 11921621 push ebx */
  push32((uint32_t)(EBX));
  /* 11921622 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11921624 call ebp */
  call_ind((uint32_t)(EBP), 0x11921626u);
  /* 11921626 push 0x11927030 */
  push32((uint32_t)(0x11927030u));
  /* 1192162b call dword ptr [0x11926124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926124))), 0x11921631u);
  /* 11921631 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921634 pop edi */
  EDI = (pop32());
  /* 11921635 pop esi */
  ESI = (pop32());
  /* 11921636 pop ebp */
  EBP = (pop32());
  /* 11921637 pop ebx */
  EBX = (pop32());
  /* 11921638 ret  */
  ESPCHK(0x1192136au, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11921639 (977 bytes, 269 insns) */
void f_11921639(void) {
  FTRACE(0x11921639u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921639 push ebx */
  push32((uint32_t)(EBX));
  /* 1192163a mov ebx, dword ptr [0x119260e8] */
  EBX = (r32((uint32_t)(0x119260e8)));
  /* 11921640 push ebp */
  push32((uint32_t)(EBP));
  /* 11921641 push esi */
  push32((uint32_t)(ESI));
  /* 11921642 push edi */
  push32((uint32_t)(EDI));
  /* 11921643 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921645 push 0x11927a98 */
  push32((uint32_t)(0x11927a98u));
  /* 1192164a call ebx */
  call_ind((uint32_t)(EBX), 0x1192164cu);
  /* 1192164c push 4 */
  push32((uint32_t)(0x4u));
  /* 1192164e push 0x11927c20 */
  push32((uint32_t)(0x11927c20u));
  /* 11921653 call ebx */
  call_ind((uint32_t)(EBX), 0x11921655u);
  /* 11921655 mov esi, dword ptr [0x119260e0] */
  ESI = (r32((uint32_t)(0x119260e0)));
  /* 1192165b mov edi, 0x1192729c */
  EDI = (0x1192729cu);
  /* 11921660 push edi */
  push32((uint32_t)(EDI));
  /* 11921661 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921663 call esi */
  call_ind((uint32_t)(ESI), 0x11921665u);
  /* 11921665 push edi */
  push32((uint32_t)(EDI));
  /* 11921666 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921668 call esi */
  call_ind((uint32_t)(ESI), 0x1192166au);
  /* 1192166a push edi */
  push32((uint32_t)(EDI));
  /* 1192166b push 3 */
  push32((uint32_t)(0x3u));
  /* 1192166d call esi */
  call_ind((uint32_t)(ESI), 0x1192166fu);
  /* 1192166f push 0x11927294 */
  push32((uint32_t)(0x11927294u));
  /* 11921674 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921676 call esi */
  call_ind((uint32_t)(ESI), 0x11921678u);
  /* 11921678 push edi */
  push32((uint32_t)(EDI));
  /* 11921679 push 5 */
  push32((uint32_t)(0x5u));
  /* 1192167b call esi */
  call_ind((uint32_t)(ESI), 0x1192167du);
  /* 1192167d mov esi, dword ptr [0x119260f0] */
  ESI = (r32((uint32_t)(0x119260f0)));
  /* 11921683 push 0x1192728c */
  push32((uint32_t)(0x1192728cu));
  /* 11921688 push 0x11927cb0 */
  push32((uint32_t)(0x11927cb0u));
  /* 1192168d call esi */
  call_ind((uint32_t)(ESI), 0x1192168fu);
  /* 1192168f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921692 push 0x11927288 */
  push32((uint32_t)(0x11927288u));
  /* 11921697 push 0x11927c68 */
  push32((uint32_t)(0x11927c68u));
  /* 1192169c call esi */
  call_ind((uint32_t)(ESI), 0x1192169eu);
  /* 1192169e push 0x11927284 */
  push32((uint32_t)(0x11927284u));
  /* 119216a3 push 0x11927b88 */
  push32((uint32_t)(0x11927b88u));
  /* 119216a8 call esi */
  call_ind((uint32_t)(ESI), 0x119216aau);
  /* 119216aa push 0x11927280 */
  push32((uint32_t)(0x11927280u));
  /* 119216af push 0x11927c28 */
  push32((uint32_t)(0x11927c28u));
  /* 119216b4 call esi */
  call_ind((uint32_t)(ESI), 0x119216b6u);
  /* 119216b6 push 0x1192727c */
  push32((uint32_t)(0x1192727cu));
  /* 119216bb push 0x11927c30 */
  push32((uint32_t)(0x11927c30u));
  /* 119216c0 call esi */
  call_ind((uint32_t)(ESI), 0x119216c2u);
  /* 119216c2 push 0x11927278 */
  push32((uint32_t)(0x11927278u));
  /* 119216c7 push 0x11927c38 */
  push32((uint32_t)(0x11927c38u));
  /* 119216cc call esi */
  call_ind((uint32_t)(ESI), 0x119216ceu);
  /* 119216ce push 0x11927274 */
  push32((uint32_t)(0x11927274u));
  /* 119216d3 push 0x11927c70 */
  push32((uint32_t)(0x11927c70u));
  /* 119216d8 call esi */
  call_ind((uint32_t)(ESI), 0x119216dau);
  /* 119216da push 0x11927270 */
  push32((uint32_t)(0x11927270u));
  /* 119216df push 0x11927c90 */
  push32((uint32_t)(0x11927c90u));
  /* 119216e4 call esi */
  call_ind((uint32_t)(ESI), 0x119216e6u);
  /* 119216e6 push 0x1192726c */
  push32((uint32_t)(0x1192726cu));
  /* 119216eb push 0x11927c78 */
  push32((uint32_t)(0x11927c78u));
  /* 119216f0 call esi */
  call_ind((uint32_t)(ESI), 0x119216f2u);
  /* 119216f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119216f5 push 0x11927268 */
  push32((uint32_t)(0x11927268u));
  /* 119216fa push 0x11927c98 */
  push32((uint32_t)(0x11927c98u));
  /* 119216ff call esi */
  call_ind((uint32_t)(ESI), 0x11921701u);
  /* 11921701 push 0x11927264 */
  push32((uint32_t)(0x11927264u));
  /* 11921706 push 0x11927c80 */
  push32((uint32_t)(0x11927c80u));
  /* 1192170b call esi */
  call_ind((uint32_t)(ESI), 0x1192170du);
  /* 1192170d push 0x11927260 */
  push32((uint32_t)(0x11927260u));
  /* 11921712 push 0x11927ca0 */
  push32((uint32_t)(0x11927ca0u));
  /* 11921717 call esi */
  call_ind((uint32_t)(ESI), 0x11921719u);
  /* 11921719 push 0x1192725c */
  push32((uint32_t)(0x1192725cu));
  /* 1192171e push 0x11927c88 */
  push32((uint32_t)(0x11927c88u));
  /* 11921723 call esi */
  call_ind((uint32_t)(ESI), 0x11921725u);
  /* 11921725 push 0x11927258 */
  push32((uint32_t)(0x11927258u));
  /* 1192172a push 0x11927ca8 */
  push32((uint32_t)(0x11927ca8u));
  /* 1192172f call esi */
  call_ind((uint32_t)(ESI), 0x11921731u);
  /* 11921731 mov esi, dword ptr [0x119260f4] */
  ESI = (r32((uint32_t)(0x119260f4)));
  /* 11921737 push 0x11927250 */
  push32((uint32_t)(0x11927250u));
  /* 1192173c push 0x11927bc0 */
  push32((uint32_t)(0x11927bc0u));
  /* 11921741 call esi */
  call_ind((uint32_t)(ESI), 0x11921743u);
  /* 11921743 mov ebp, dword ptr [0x119260ec] */
  EBP = (r32((uint32_t)(0x119260ec)));
  /* 11921749 push 0x11927b98 */
  push32((uint32_t)(0x11927b98u));
  /* 1192174e call ebp */
  call_ind((uint32_t)(EBP), 0x11921750u);
  /* 11921750 push 0x11927248 */
  push32((uint32_t)(0x11927248u));
  /* 11921755 push 0x11927b10 */
  push32((uint32_t)(0x11927b10u));
  /* 1192175a call esi */
  call_ind((uint32_t)(ESI), 0x1192175cu);
  /* 1192175c push 0x11927240 */
  push32((uint32_t)(0x11927240u));
  /* 11921761 push 0x11927b08 */
  push32((uint32_t)(0x11927b08u));
  /* 11921766 call esi */
  call_ind((uint32_t)(ESI), 0x11921768u);
  /* 11921768 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192176b push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921770 push 0x11927ba8 */
  push32((uint32_t)(0x11927ba8u));
  /* 11921775 call esi */
  call_ind((uint32_t)(ESI), 0x11921777u);
  /* 11921777 push 0x11927238 */
  push32((uint32_t)(0x11927238u));
  /* 1192177c push 0x11927bb0 */
  push32((uint32_t)(0x11927bb0u));
  /* 11921781 call esi */
  call_ind((uint32_t)(ESI), 0x11921783u);
  /* 11921783 push 0x11927230 */
  push32((uint32_t)(0x11927230u));
  /* 11921788 push 0x11927b38 */
  push32((uint32_t)(0x11927b38u));
  /* 1192178d call esi */
  call_ind((uint32_t)(ESI), 0x1192178fu);
  /* 1192178f push 0x11927228 */
  push32((uint32_t)(0x11927228u));
  /* 11921794 push 0x11927b40 */
  push32((uint32_t)(0x11927b40u));
  /* 11921799 call esi */
  call_ind((uint32_t)(ESI), 0x1192179bu);
  /* 1192179b push 0x11927220 */
  push32((uint32_t)(0x11927220u));
  /* 119217a0 push 0x11927ac8 */
  push32((uint32_t)(0x11927ac8u));
  /* 119217a5 call esi */
  call_ind((uint32_t)(ESI), 0x119217a7u);
  /* 119217a7 push 0x11927218 */
  push32((uint32_t)(0x11927218u));
  /* 119217ac push 0x11927ad0 */
  push32((uint32_t)(0x11927ad0u));
  /* 119217b1 call esi */
  call_ind((uint32_t)(ESI), 0x119217b3u);
  /* 119217b3 push 0x11927210 */
  push32((uint32_t)(0x11927210u));
  /* 119217b8 push 0x11927ad8 */
  push32((uint32_t)(0x11927ad8u));
  /* 119217bd call esi */
  call_ind((uint32_t)(ESI), 0x119217bfu);
  /* 119217bf push 0x11927208 */
  push32((uint32_t)(0x11927208u));
  /* 119217c4 push 0x11927ae8 */
  push32((uint32_t)(0x11927ae8u));
  /* 119217c9 call esi */
  call_ind((uint32_t)(ESI), 0x119217cbu);
  /* 119217cb add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119217ce push 0x11927204 */
  push32((uint32_t)(0x11927204u));
  /* 119217d3 push 0x11927bc8 */
  push32((uint32_t)(0x11927bc8u));
  /* 119217d8 call esi */
  call_ind((uint32_t)(ESI), 0x119217dau);
  /* 119217da push 0x11927200 */
  push32((uint32_t)(0x11927200u));
  /* 119217df push 0x11927bd0 */
  push32((uint32_t)(0x11927bd0u));
  /* 119217e4 call esi */
  call_ind((uint32_t)(ESI), 0x119217e6u);
  /* 119217e6 push 0x119271fc */
  push32((uint32_t)(0x119271fcu));
  /* 119217eb push 0x11927bd8 */
  push32((uint32_t)(0x11927bd8u));
  /* 119217f0 call esi */
  call_ind((uint32_t)(ESI), 0x119217f2u);
  /* 119217f2 push 0x119271f8 */
  push32((uint32_t)(0x119271f8u));
  /* 119217f7 push 0x11927be0 */
  push32((uint32_t)(0x11927be0u));
  /* 119217fc call esi */
  call_ind((uint32_t)(ESI), 0x119217feu);
  /* 119217fe push 0x119271f0 */
  push32((uint32_t)(0x119271f0u));
  /* 11921803 push 0x11927b20 */
  push32((uint32_t)(0x11927b20u));
  /* 11921808 call esi */
  call_ind((uint32_t)(ESI), 0x1192180au);
  /* 1192180a push 0x119271e8 */
  push32((uint32_t)(0x119271e8u));
  /* 1192180f push 0x11927b18 */
  push32((uint32_t)(0x11927b18u));
  /* 11921814 call esi */
  call_ind((uint32_t)(ESI), 0x11921816u);
  /* 11921816 push 0x119271e0 */
  push32((uint32_t)(0x119271e0u));
  /* 1192181b push 0x11927b30 */
  push32((uint32_t)(0x11927b30u));
  /* 11921820 call esi */
  call_ind((uint32_t)(ESI), 0x11921822u);
  /* 11921822 push 0x119271d8 */
  push32((uint32_t)(0x119271d8u));
  /* 11921827 push 0x11927b28 */
  push32((uint32_t)(0x11927b28u));
  /* 1192182c call esi */
  call_ind((uint32_t)(ESI), 0x1192182eu);
  /* 1192182e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921831 push 0x119271d0 */
  push32((uint32_t)(0x119271d0u));
  /* 11921836 push 0x11927aa8 */
  push32((uint32_t)(0x11927aa8u));
  /* 1192183b call esi */
  call_ind((uint32_t)(ESI), 0x1192183du);
  /* 1192183d push 0x119271c8 */
  push32((uint32_t)(0x119271c8u));
  /* 11921842 push 0x11927aa0 */
  push32((uint32_t)(0x11927aa0u));
  /* 11921847 call esi */
  call_ind((uint32_t)(ESI), 0x11921849u);
  /* 11921849 push 0x119271c0 */
  push32((uint32_t)(0x119271c0u));
  /* 1192184e push 0x11927ab8 */
  push32((uint32_t)(0x11927ab8u));
  /* 11921853 call esi */
  call_ind((uint32_t)(ESI), 0x11921855u);
  /* 11921855 push 0x119271b8 */
  push32((uint32_t)(0x119271b8u));
  /* 1192185a push 0x11927ab0 */
  push32((uint32_t)(0x11927ab0u));
  /* 1192185f call esi */
  call_ind((uint32_t)(ESI), 0x11921861u);
  /* 11921861 push 0x119271b0 */
  push32((uint32_t)(0x119271b0u));
  /* 11921866 push 0x11927b50 */
  push32((uint32_t)(0x11927b50u));
  /* 1192186b call esi */
  call_ind((uint32_t)(ESI), 0x1192186du);
  /* 1192186d push 0x119271a8 */
  push32((uint32_t)(0x119271a8u));
  /* 11921872 push 0x11927b58 */
  push32((uint32_t)(0x11927b58u));
  /* 11921877 call esi */
  call_ind((uint32_t)(ESI), 0x11921879u);
  /* 11921879 push 0x119271a0 */
  push32((uint32_t)(0x119271a0u));
  /* 1192187e push 0x11927be8 */
  push32((uint32_t)(0x11927be8u));
  /* 11921883 call esi */
  call_ind((uint32_t)(ESI), 0x11921885u);
  /* 11921885 push 0x11927198 */
  push32((uint32_t)(0x11927198u));
  /* 1192188a push 0x11927bf0 */
  push32((uint32_t)(0x11927bf0u));
  /* 1192188f call esi */
  call_ind((uint32_t)(ESI), 0x11921891u);
  /* 11921891 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921894 push 0x11927190 */
  push32((uint32_t)(0x11927190u));
  /* 11921899 push 0x11927bf8 */
  push32((uint32_t)(0x11927bf8u));
  /* 1192189e call esi */
  call_ind((uint32_t)(ESI), 0x119218a0u);
  /* 119218a0 push 0x11927188 */
  push32((uint32_t)(0x11927188u));
  /* 119218a5 push 0x11927c00 */
  push32((uint32_t)(0x11927c00u));
  /* 119218aa call esi */
  call_ind((uint32_t)(ESI), 0x119218acu);
  /* 119218ac push 0x11927180 */
  push32((uint32_t)(0x11927180u));
  /* 119218b1 push 0x11927af0 */
  push32((uint32_t)(0x11927af0u));
  /* 119218b6 call esi */
  call_ind((uint32_t)(ESI), 0x119218b8u);
  /* 119218b8 mov edi, 0x11927b68 */
  EDI = (0x11927b68u);
  /* 119218bd push edi */
  push32((uint32_t)(EDI));
  /* 119218be call ebp */
  call_ind((uint32_t)(EBP), 0x119218c0u);
  /* 119218c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 119218c2 push edi */
  push32((uint32_t)(EDI));
  /* 119218c3 call ebx */
  call_ind((uint32_t)(EBX), 0x119218c5u);
  /* 119218c5 mov edi, dword ptr [0x119260fc] */
  EDI = (r32((uint32_t)(0x119260fc)));
  /* 119218cb push 0x11927170 */
  push32((uint32_t)(0x11927170u));
  /* 119218d0 push 0x11927cb8 */
  push32((uint32_t)(0x11927cb8u));
  /* 119218d5 call edi */
  call_ind((uint32_t)(EDI), 0x119218d7u);
  /* 119218d7 push 0x11927160 */
  push32((uint32_t)(0x11927160u));
  /* 119218dc push 0x11927ba0 */
  push32((uint32_t)(0x11927ba0u));
  /* 119218e1 call edi */
  call_ind((uint32_t)(EDI), 0x119218e3u);
  /* 119218e3 push 0x1192714c */
  push32((uint32_t)(0x1192714cu));
  /* 119218e8 push 0x11927ae0 */
  push32((uint32_t)(0x11927ae0u));
  /* 119218ed call edi */
  call_ind((uint32_t)(EDI), 0x119218efu);
  /* 119218ef push 0x11927144 */
  push32((uint32_t)(0x11927144u));
  /* 119218f4 push 0x11927c10 */
  push32((uint32_t)(0x11927c10u));
  /* 119218f9 call esi */
  call_ind((uint32_t)(ESI), 0x119218fbu);
  /* 119218fb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119218fe push 0x11927b70 */
  push32((uint32_t)(0x11927b70u));
  /* 11921903 call ebp */
  call_ind((uint32_t)(EBP), 0x11921905u);
  /* 11921905 push 8 */
  push32((uint32_t)(0x8u));
  /* 11921907 push 0x11927b70 */
  push32((uint32_t)(0x11927b70u));
  /* 1192190c call ebx */
  call_ind((uint32_t)(EBX), 0x1192190eu);
  /* 1192190e push 0x11927138 */
  push32((uint32_t)(0x11927138u));
  /* 11921913 push 0x11927c58 */
  push32((uint32_t)(0x11927c58u));
  /* 11921918 call edi */
  call_ind((uint32_t)(EDI), 0x1192191au);
  /* 1192191a push 0x11927130 */
  push32((uint32_t)(0x11927130u));
  /* 1192191f push 0x11927af8 */
  push32((uint32_t)(0x11927af8u));
  /* 11921924 call esi */
  call_ind((uint32_t)(ESI), 0x11921926u);
  /* 11921926 push 0x11927b78 */
  push32((uint32_t)(0x11927b78u));
  /* 1192192b call ebp */
  call_ind((uint32_t)(EBP), 0x1192192du);
  /* 1192192d push 8 */
  push32((uint32_t)(0x8u));
  /* 1192192f push 0x11927b78 */
  push32((uint32_t)(0x11927b78u));
  /* 11921934 call ebx */
  call_ind((uint32_t)(EBX), 0x11921936u);
  /* 11921936 push 0x11927120 */
  push32((uint32_t)(0x11927120u));
  /* 1192193b push 0x11927c48 */
  push32((uint32_t)(0x11927c48u));
  /* 11921940 call edi */
  call_ind((uint32_t)(EDI), 0x11921942u);
  /* 11921942 push 0x11927118 */
  push32((uint32_t)(0x11927118u));
  /* 11921947 push 0x11927b00 */
  push32((uint32_t)(0x11927b00u));
  /* 1192194c call esi */
  call_ind((uint32_t)(ESI), 0x1192194eu);
  /* 1192194e push 0x11927110 */
  push32((uint32_t)(0x11927110u));
  /* 11921953 push 0x11927c18 */
  push32((uint32_t)(0x11927c18u));
  /* 11921958 call esi */
  call_ind((uint32_t)(ESI), 0x1192195au);
  /* 1192195a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192195d mov esi, 0x11927b80 */
  ESI = (0x11927b80u);
  /* 11921962 push esi */
  push32((uint32_t)(ESI));
  /* 11921963 call ebp */
  call_ind((uint32_t)(EBP), 0x11921965u);
  /* 11921965 push 8 */
  push32((uint32_t)(0x8u));
  /* 11921967 push esi */
  push32((uint32_t)(ESI));
  /* 11921968 call ebx */
  call_ind((uint32_t)(EBX), 0x1192196au);
  /* 1192196a push 0x11927104 */
  push32((uint32_t)(0x11927104u));
  /* 1192196f push 0x11927cc0 */
  push32((uint32_t)(0x11927cc0u));
  /* 11921974 call edi */
  call_ind((uint32_t)(EDI), 0x11921976u);
  /* 11921976 push 0x119270f0 */
  push32((uint32_t)(0x119270f0u));
  /* 1192197b push 0x11927a90 */
  push32((uint32_t)(0x11927a90u));
  /* 11921980 call edi */
  call_ind((uint32_t)(EDI), 0x11921982u);
  /* 11921982 push 0x119270e0 */
  push32((uint32_t)(0x119270e0u));
  /* 11921987 push 0x11927c50 */
  push32((uint32_t)(0x11927c50u));
  /* 1192198c call edi */
  call_ind((uint32_t)(EDI), 0x1192198eu);
  /* 1192198e push 0x119270d0 */
  push32((uint32_t)(0x119270d0u));
  /* 11921993 push 0x11927ac0 */
  push32((uint32_t)(0x11927ac0u));
  /* 11921998 call edi */
  call_ind((uint32_t)(EDI), 0x1192199au);
  /* 1192199a push 0x119270b8 */
  push32((uint32_t)(0x119270b8u));
  /* 1192199f push 0x11927a80 */
  push32((uint32_t)(0x11927a80u));
  /* 119219a4 call edi */
  call_ind((uint32_t)(EDI), 0x119219a6u);
  /* 119219a6 push 0x119270a0 */
  push32((uint32_t)(0x119270a0u));
  /* 119219ab push 0x11927a88 */
  push32((uint32_t)(0x11927a88u));
  /* 119219b0 call edi */
  call_ind((uint32_t)(EDI), 0x119219b2u);
  /* 119219b2 push 0x11927094 */
  push32((uint32_t)(0x11927094u));
  /* 119219b7 push 0x11927c08 */
  push32((uint32_t)(0x11927c08u));
  /* 119219bc call edi */
  call_ind((uint32_t)(EDI), 0x119219beu);
  /* 119219be add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119219c1 push 0x11927080 */
  push32((uint32_t)(0x11927080u));
  /* 119219c6 push 0x11927c60 */
  push32((uint32_t)(0x11927c60u));
  /* 119219cb call edi */
  call_ind((uint32_t)(EDI), 0x119219cdu);
  /* 119219cd push 0x1192706c */
  push32((uint32_t)(0x1192706cu));
  /* 119219d2 push 0x11927c40 */
  push32((uint32_t)(0x11927c40u));
  /* 119219d7 call edi */
  call_ind((uint32_t)(EDI), 0x119219d9u);
  /* 119219d9 push 0x11927058 */
  push32((uint32_t)(0x11927058u));
  /* 119219de push 0x11927bb8 */
  push32((uint32_t)(0x11927bb8u));
  /* 119219e3 call edi */
  call_ind((uint32_t)(EDI), 0x119219e5u);
  /* 119219e5 mov esi, 0x11927b60 */
  ESI = (0x11927b60u);
  /* 119219ea push esi */
  push32((uint32_t)(ESI));
  /* 119219eb call ebp */
  call_ind((uint32_t)(EBP), 0x119219edu);
  /* 119219ed push 8 */
  push32((uint32_t)(0x8u));
  /* 119219ef push esi */
  push32((uint32_t)(ESI));
  /* 119219f0 call ebx */
  call_ind((uint32_t)(EBX), 0x119219f2u);
  /* 119219f2 push 0x11927050 */
  push32((uint32_t)(0x11927050u));
  /* 119219f7 push 0x11927b90 */
  push32((uint32_t)(0x11927b90u));
  /* 119219fc call dword ptr [0x11926100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926100))), 0x11921a02u);
  /* 11921a02 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921a05 pop edi */
  EDI = (pop32());
  /* 11921a06 pop esi */
  ESI = (pop32());
  /* 11921a07 pop ebp */
  EBP = (pop32());
  /* 11921a08 pop ebx */
  EBX = (pop32());
  /* 11921a09 ret  */
  ESPCHK(0x11921639u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11921a0a (3469 bytes, 1292 insns) */
void f_11921a0a(void) {
  FTRACE(0x11921a0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11921a0a push ecx */
  push32((uint32_t)(ECX));
  /* 11921a0b push ebx */
  push32((uint32_t)(EBX));
  /* 11921a0c push ebp */
  push32((uint32_t)(EBP));
  /* 11921a0d push esi */
  push32((uint32_t)(ESI));
  /* 11921a0e mov esi, dword ptr [0x119260b4] */
  ESI = (r32((uint32_t)(0x119260b4)));
  /* 11921a14 push edi */
  push32((uint32_t)(EDI));
  /* 11921a15 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11921a17 call esi */
  call_ind((uint32_t)(ESI), 0x11921a19u);
  /* 11921a19 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11921a1b pop ecx */
  ECX = (pop32());
  /* 11921a1c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11921a1e je 0x1192214c */
  if (C.zf) goto L_1192214c;
  /* 11921a24 push ebx */
  push32((uint32_t)(EBX));
  /* 11921a25 call dword ptr [0x119260b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260b8))), 0x11921a2bu);
  /* 11921a2b mov esi, dword ptr [0x119260b0] */
  ESI = (r32((uint32_t)(0x119260b0)));
  /* 11921a31 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11921a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921a35 mov dword ptr [0x11927a98], eax */
  w32((uint32_t)(0x11927a98), (EAX));
  /* 11921a3a mov dword ptr [0x11927c20], ebx */
  w32((uint32_t)(0x11927c20), (EBX));
  /* 11921a40 call esi */
  call_ind((uint32_t)(ESI), 0x11921a42u);
  /* 11921a42 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11921a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921a46 call esi */
  call_ind((uint32_t)(ESI), 0x11921a48u);
  /* 11921a48 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11921a4a push 3 */
  push32((uint32_t)(0x3u));
  /* 11921a4c call esi */
  call_ind((uint32_t)(ESI), 0x11921a4eu);
  /* 11921a4e push 0xff */
  push32((uint32_t)(0xffu));
  /* 11921a53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921a55 call esi */
  call_ind((uint32_t)(ESI), 0x11921a57u);
  /* 11921a57 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 11921a59 push 5 */
  push32((uint32_t)(0x5u));
  /* 11921a5b call esi */
  call_ind((uint32_t)(ESI), 0x11921a5du);
  /* 11921a5d mov edi, dword ptr [0x11926108] */
  EDI = (r32((uint32_t)(0x11926108)));
  /* 11921a63 mov esi, dword ptr [0x11926158] */
  ESI = (r32((uint32_t)(0x11926158)));
  /* 11921a69 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921a6c cmp dword ptr [0x11927a98], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11927a98))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921a72 jne 0x11921aa1 */
  if (!C.zf) goto L_11921aa1;
  /* 11921a74 mov ebp, dword ptr [0x11926160] */
  EBP = (r32((uint32_t)(0x11926160)));
  /* 11921a7a push ebx */
  push32((uint32_t)(EBX));
  /* 11921a7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11921a7d push 0x11927c50 */
  push32((uint32_t)(0x11927c50u));
  /* 11921a82 call ebp */
  call_ind((uint32_t)(EBP), 0x11921a84u);
  /* 11921a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921a86 call edi */
  call_ind((uint32_t)(EDI), 0x11921a88u);
  /* 11921a88 push ebx */
  push32((uint32_t)(EBX));
  /* 11921a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921a8b push 0x11927ac0 */
  push32((uint32_t)(0x11927ac0u));
  /* 11921a90 call ebp */
  call_ind((uint32_t)(EBP), 0x11921a92u);
  /* 11921a92 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921a94 call edi */
  call_ind((uint32_t)(EDI), 0x11921a96u);
  /* 11921a96 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921a98 call esi */
  call_ind((uint32_t)(ESI), 0x11921a9au);
  /* 11921a9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11921a9c call esi */
  call_ind((uint32_t)(ESI), 0x11921a9eu);
  /* 11921a9e add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921aa1:;
  /* 11921aa1 cmp dword ptr [0x11927a98], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11927a98))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11921aa8 mov ebp, dword ptr [0x11926150] */
  EBP = (r32((uint32_t)(0x11926150)));
  /* 11921aae jge 0x11921adb */
  if ((C.sf==C.of)) goto L_11921adb;
  /* 11921ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 11921ab1 push 0x11927b50 */
  push32((uint32_t)(0x11927b50u));
  /* 11921ab6 call ebp */
  call_ind((uint32_t)(EBP), 0x11921ab8u);
  /* 11921ab8 mov edi, dword ptr [0x119260c0] */
  EDI = (r32((uint32_t)(0x119260c0)));
  /* 11921abe push ebx */
  push32((uint32_t)(EBX));
  /* 11921abf push 1 */
  push32((uint32_t)(0x1u));
  /* 11921ac1 call edi */
  call_ind((uint32_t)(EDI), 0x11921ac3u);
  /* 11921ac3 push ebx */
  push32((uint32_t)(EBX));
  /* 11921ac4 push 0x11927b58 */
  push32((uint32_t)(0x11927b58u));
  /* 11921ac9 call ebp */
  call_ind((uint32_t)(EBP), 0x11921acbu);
  /* 11921acb push ebx */
  push32((uint32_t)(EBX));
  /* 11921acc push 2 */
  push32((uint32_t)(0x2u));
  /* 11921ace call edi */
  call_ind((uint32_t)(EDI), 0x11921ad0u);
  /* 11921ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921ad2 call esi */
  call_ind((uint32_t)(ESI), 0x11921ad4u);
  /* 11921ad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921ad6 call esi */
  call_ind((uint32_t)(ESI), 0x11921ad8u);
  /* 11921ad8 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921adb:;
  /* 11921adb mov esi, dword ptr [0x119260c4] */
  ESI = (r32((uint32_t)(0x119260c4)));
  /* 11921ae1 mov edi, 0x11927248 */
  EDI = (0x11927248u);
  /* 11921ae6 push 0x1192774c */
  push32((uint32_t)(0x1192774cu));
  /* 11921aeb push edi */
  push32((uint32_t)(EDI));
  /* 11921aec call esi */
  call_ind((uint32_t)(ESI), 0x11921aeeu);
  /* 11921aee mov eax, dword ptr [0x11927a98] */
  EAX = (r32((uint32_t)(0x11927a98)));
  /* 11921af3 pop ecx */
  ECX = (pop32());
  /* 11921af4 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11921af6 pop ecx */
  ECX = (pop32());
  /* 11921af7 je 0x11921b07 */
  if (C.zf) goto L_11921b07;
  /* 11921af9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921afa je 0x11921b1a */
  if (C.zf) goto L_11921b1a;
  /* 11921afc dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921afd je 0x11921b55 */
  if (C.zf) goto L_11921b55;
  /* 11921aff dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921b00 je 0x11921b68 */
  if (C.zf) goto L_11921b68;
  /* 11921b02 jmp 0x11921b8b */
  goto L_11921b8b;
L_11921b07:;
  /* 11921b07 push 0x11927744 */
  push32((uint32_t)(0x11927744u));
  /* 11921b0c push edi */
  push32((uint32_t)(EDI));
  /* 11921b0d call esi */
  call_ind((uint32_t)(ESI), 0x11921b0fu);
  /* 11921b0f push 0x1192773c */
  push32((uint32_t)(0x1192773cu));
  /* 11921b14 push edi */
  push32((uint32_t)(EDI));
  /* 11921b15 call esi */
  call_ind((uint32_t)(ESI), 0x11921b17u);
  /* 11921b17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921b1a:;
  /* 11921b1a push 0x11927734 */
  push32((uint32_t)(0x11927734u));
  /* 11921b1f push edi */
  push32((uint32_t)(EDI));
  /* 11921b20 call esi */
  call_ind((uint32_t)(ESI), 0x11921b22u);
  /* 11921b22 push 0x1192772c */
  push32((uint32_t)(0x1192772cu));
  /* 11921b27 push edi */
  push32((uint32_t)(EDI));
  /* 11921b28 call esi */
  call_ind((uint32_t)(ESI), 0x11921b2au);
  /* 11921b2a push 0x11927724 */
  push32((uint32_t)(0x11927724u));
  /* 11921b2f push edi */
  push32((uint32_t)(EDI));
  /* 11921b30 call esi */
  call_ind((uint32_t)(ESI), 0x11921b32u);
  /* 11921b32 push 0x1192771c */
  push32((uint32_t)(0x1192771cu));
  /* 11921b37 push edi */
  push32((uint32_t)(EDI));
  /* 11921b38 call esi */
  call_ind((uint32_t)(ESI), 0x11921b3au);
  /* 11921b3a push 0x11927714 */
  push32((uint32_t)(0x11927714u));
  /* 11921b3f push edi */
  push32((uint32_t)(EDI));
  /* 11921b40 call esi */
  call_ind((uint32_t)(ESI), 0x11921b42u);
  /* 11921b42 push 0x1192770c */
  push32((uint32_t)(0x1192770cu));
  /* 11921b47 push edi */
  push32((uint32_t)(EDI));
  /* 11921b48 call esi */
  call_ind((uint32_t)(ESI), 0x11921b4au);
  /* 11921b4a push 0x11927704 */
  push32((uint32_t)(0x11927704u));
  /* 11921b4f push edi */
  push32((uint32_t)(EDI));
  /* 11921b50 call esi */
  call_ind((uint32_t)(ESI), 0x11921b52u);
  /* 11921b52 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921b55:;
  /* 11921b55 push 0x119276fc */
  push32((uint32_t)(0x119276fcu));
  /* 11921b5a push edi */
  push32((uint32_t)(EDI));
  /* 11921b5b call esi */
  call_ind((uint32_t)(ESI), 0x11921b5du);
  /* 11921b5d push 0x119276f4 */
  push32((uint32_t)(0x119276f4u));
  /* 11921b62 push edi */
  push32((uint32_t)(EDI));
  /* 11921b63 call esi */
  call_ind((uint32_t)(ESI), 0x11921b65u);
  /* 11921b65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921b68:;
  /* 11921b68 push 0x119276ec */
  push32((uint32_t)(0x119276ecu));
  /* 11921b6d push edi */
  push32((uint32_t)(EDI));
  /* 11921b6e call esi */
  call_ind((uint32_t)(ESI), 0x11921b70u);
  /* 11921b70 push 0x119276d4 */
  push32((uint32_t)(0x119276d4u));
  /* 11921b75 push edi */
  push32((uint32_t)(EDI));
  /* 11921b76 call esi */
  call_ind((uint32_t)(ESI), 0x11921b78u);
  /* 11921b78 push 0x119276b8 */
  push32((uint32_t)(0x119276b8u));
  /* 11921b7d push edi */
  push32((uint32_t)(EDI));
  /* 11921b7e call esi */
  call_ind((uint32_t)(ESI), 0x11921b80u);
  /* 11921b80 push 0x1192769c */
  push32((uint32_t)(0x1192769cu));
  /* 11921b85 push edi */
  push32((uint32_t)(EDI));
  /* 11921b86 call esi */
  call_ind((uint32_t)(ESI), 0x11921b88u);
  /* 11921b88 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921b8b:;
  /* 11921b8b mov eax, dword ptr [0x11927a98] */
  EAX = (r32((uint32_t)(0x11927a98)));
  /* 11921b90 sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11921b92 je 0x11921ca4 */
  if (C.zf) goto L_11921ca4;
  /* 11921b98 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921b99 je 0x11921c0f */
  if (C.zf) goto L_11921c0f;
  /* 11921b9b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921b9c je 0x11921bcd */
  if (C.zf) goto L_11921bcd;
  /* 11921b9e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921b9f jne 0x11921d6d */
  if (!C.zf) goto L_11921d6d;
  /* 11921ba5 push 0x11927688 */
  push32((uint32_t)(0x11927688u));
  /* 11921baa push edi */
  push32((uint32_t)(EDI));
  /* 11921bab call esi */
  call_ind((uint32_t)(ESI), 0x11921badu);
  /* 11921bad push 0x11927674 */
  push32((uint32_t)(0x11927674u));
  /* 11921bb2 push edi */
  push32((uint32_t)(EDI));
  /* 11921bb3 call esi */
  call_ind((uint32_t)(ESI), 0x11921bb5u);
  /* 11921bb5 push 0x11927660 */
  push32((uint32_t)(0x11927660u));
  /* 11921bba push edi */
  push32((uint32_t)(EDI));
  /* 11921bbb call esi */
  call_ind((uint32_t)(ESI), 0x11921bbdu);
  /* 11921bbd push 0x1192764c */
  push32((uint32_t)(0x1192764cu));
  /* 11921bc2 push edi */
  push32((uint32_t)(EDI));
  /* 11921bc3 call esi */
  call_ind((uint32_t)(ESI), 0x11921bc5u);
  /* 11921bc5 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921bc8 jmp 0x11921d6d */
  goto L_11921d6d;
L_11921bcd:;
  /* 11921bcd push 0x11927688 */
  push32((uint32_t)(0x11927688u));
  /* 11921bd2 push edi */
  push32((uint32_t)(EDI));
  /* 11921bd3 call esi */
  call_ind((uint32_t)(ESI), 0x11921bd5u);
  /* 11921bd5 push 0x11927638 */
  push32((uint32_t)(0x11927638u));
  /* 11921bda push edi */
  push32((uint32_t)(EDI));
  /* 11921bdb call esi */
  call_ind((uint32_t)(ESI), 0x11921bddu);
  /* 11921bdd push 0x11927674 */
  push32((uint32_t)(0x11927674u));
  /* 11921be2 push edi */
  push32((uint32_t)(EDI));
  /* 11921be3 call esi */
  call_ind((uint32_t)(ESI), 0x11921be5u);
  /* 11921be5 push 0x11927624 */
  push32((uint32_t)(0x11927624u));
  /* 11921bea push edi */
  push32((uint32_t)(EDI));
  /* 11921beb call esi */
  call_ind((uint32_t)(ESI), 0x11921bedu);
  /* 11921bed push 0x11927660 */
  push32((uint32_t)(0x11927660u));
  /* 11921bf2 push edi */
  push32((uint32_t)(EDI));
  /* 11921bf3 call esi */
  call_ind((uint32_t)(ESI), 0x11921bf5u);
  /* 11921bf5 push 0x11927610 */
  push32((uint32_t)(0x11927610u));
  /* 11921bfa push edi */
  push32((uint32_t)(EDI));
  /* 11921bfb call esi */
  call_ind((uint32_t)(ESI), 0x11921bfdu);
  /* 11921bfd push 0x1192764c */
  push32((uint32_t)(0x1192764cu));
  /* 11921c02 push edi */
  push32((uint32_t)(EDI));
  /* 11921c03 call esi */
  call_ind((uint32_t)(ESI), 0x11921c05u);
  /* 11921c05 push 0x119275fc */
  push32((uint32_t)(0x119275fcu));
  /* 11921c0a jmp 0x11921d67 */
  goto L_11921d67;
L_11921c0f:;
  /* 11921c0f push 0x11927688 */
  push32((uint32_t)(0x11927688u));
  /* 11921c14 push edi */
  push32((uint32_t)(EDI));
  /* 11921c15 call esi */
  call_ind((uint32_t)(ESI), 0x11921c17u);
  /* 11921c17 push 0x11927638 */
  push32((uint32_t)(0x11927638u));
  /* 11921c1c push edi */
  push32((uint32_t)(EDI));
  /* 11921c1d call esi */
  call_ind((uint32_t)(ESI), 0x11921c1fu);
  /* 11921c1f push 0x119275e8 */
  push32((uint32_t)(0x119275e8u));
  /* 11921c24 push edi */
  push32((uint32_t)(EDI));
  /* 11921c25 call esi */
  call_ind((uint32_t)(ESI), 0x11921c27u);
  /* 11921c27 push 0x119275d4 */
  push32((uint32_t)(0x119275d4u));
  /* 11921c2c push edi */
  push32((uint32_t)(EDI));
  /* 11921c2d call esi */
  call_ind((uint32_t)(ESI), 0x11921c2fu);
  /* 11921c2f push 0x11927674 */
  push32((uint32_t)(0x11927674u));
  /* 11921c34 push edi */
  push32((uint32_t)(EDI));
  /* 11921c35 call esi */
  call_ind((uint32_t)(ESI), 0x11921c37u);
  /* 11921c37 push 0x11927624 */
  push32((uint32_t)(0x11927624u));
  /* 11921c3c push edi */
  push32((uint32_t)(EDI));
  /* 11921c3d call esi */
  call_ind((uint32_t)(ESI), 0x11921c3fu);
  /* 11921c3f push 0x119275c0 */
  push32((uint32_t)(0x119275c0u));
  /* 11921c44 push edi */
  push32((uint32_t)(EDI));
  /* 11921c45 call esi */
  call_ind((uint32_t)(ESI), 0x11921c47u);
  /* 11921c47 push 0x119275ac */
  push32((uint32_t)(0x119275acu));
  /* 11921c4c push edi */
  push32((uint32_t)(EDI));
  /* 11921c4d call esi */
  call_ind((uint32_t)(ESI), 0x11921c4fu);
  /* 11921c4f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921c52 push 0x11927660 */
  push32((uint32_t)(0x11927660u));
  /* 11921c57 push edi */
  push32((uint32_t)(EDI));
  /* 11921c58 call esi */
  call_ind((uint32_t)(ESI), 0x11921c5au);
  /* 11921c5a push 0x11927610 */
  push32((uint32_t)(0x11927610u));
  /* 11921c5f push edi */
  push32((uint32_t)(EDI));
  /* 11921c60 call esi */
  call_ind((uint32_t)(ESI), 0x11921c62u);
  /* 11921c62 push 0x11927598 */
  push32((uint32_t)(0x11927598u));
  /* 11921c67 push edi */
  push32((uint32_t)(EDI));
  /* 11921c68 call esi */
  call_ind((uint32_t)(ESI), 0x11921c6au);
  /* 11921c6a push 0x11927584 */
  push32((uint32_t)(0x11927584u));
  /* 11921c6f push edi */
  push32((uint32_t)(EDI));
  /* 11921c70 call esi */
  call_ind((uint32_t)(ESI), 0x11921c72u);
  /* 11921c72 push 0x1192764c */
  push32((uint32_t)(0x1192764cu));
  /* 11921c77 push edi */
  push32((uint32_t)(EDI));
  /* 11921c78 call esi */
  call_ind((uint32_t)(ESI), 0x11921c7au);
  /* 11921c7a push 0x119275fc */
  push32((uint32_t)(0x119275fcu));
  /* 11921c7f push edi */
  push32((uint32_t)(EDI));
  /* 11921c80 call esi */
  call_ind((uint32_t)(ESI), 0x11921c82u);
  /* 11921c82 push 0x11927570 */
  push32((uint32_t)(0x11927570u));
  /* 11921c87 push edi */
  push32((uint32_t)(EDI));
  /* 11921c88 call esi */
  call_ind((uint32_t)(ESI), 0x11921c8au);
  /* 11921c8a push 0x1192755c */
  push32((uint32_t)(0x1192755cu));
  /* 11921c8f push edi */
  push32((uint32_t)(EDI));
  /* 11921c90 call esi */
  call_ind((uint32_t)(ESI), 0x11921c92u);
  /* 11921c92 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921c95 push 0x1192755c */
  push32((uint32_t)(0x1192755cu));
  /* 11921c9a push edi */
  push32((uint32_t)(EDI));
  /* 11921c9b call esi */
  call_ind((uint32_t)(ESI), 0x11921c9du);
  /* 11921c9d pop ecx */
  ECX = (pop32());
  /* 11921c9e pop ecx */
  ECX = (pop32());
  /* 11921c9f jmp 0x11921d6d */
  goto L_11921d6d;
L_11921ca4:;
  /* 11921ca4 push 0x11927688 */
  push32((uint32_t)(0x11927688u));
  /* 11921ca9 push edi */
  push32((uint32_t)(EDI));
  /* 11921caa call esi */
  call_ind((uint32_t)(ESI), 0x11921cacu);
  /* 11921cac push 0x11927638 */
  push32((uint32_t)(0x11927638u));
  /* 11921cb1 push edi */
  push32((uint32_t)(EDI));
  /* 11921cb2 call esi */
  call_ind((uint32_t)(ESI), 0x11921cb4u);
  /* 11921cb4 push 0x119275e8 */
  push32((uint32_t)(0x119275e8u));
  /* 11921cb9 push edi */
  push32((uint32_t)(EDI));
  /* 11921cba call esi */
  call_ind((uint32_t)(ESI), 0x11921cbcu);
  /* 11921cbc push 0x119275d4 */
  push32((uint32_t)(0x119275d4u));
  /* 11921cc1 push edi */
  push32((uint32_t)(EDI));
  /* 11921cc2 call esi */
  call_ind((uint32_t)(ESI), 0x11921cc4u);
  /* 11921cc4 push 0x11927548 */
  push32((uint32_t)(0x11927548u));
  /* 11921cc9 push edi */
  push32((uint32_t)(EDI));
  /* 11921cca call esi */
  call_ind((uint32_t)(ESI), 0x11921cccu);
  /* 11921ccc push 0x11927534 */
  push32((uint32_t)(0x11927534u));
  /* 11921cd1 push edi */
  push32((uint32_t)(EDI));
  /* 11921cd2 call esi */
  call_ind((uint32_t)(ESI), 0x11921cd4u);
  /* 11921cd4 push 0x11927674 */
  push32((uint32_t)(0x11927674u));
  /* 11921cd9 push edi */
  push32((uint32_t)(EDI));
  /* 11921cda call esi */
  call_ind((uint32_t)(ESI), 0x11921cdcu);
  /* 11921cdc push 0x11927624 */
  push32((uint32_t)(0x11927624u));
  /* 11921ce1 push edi */
  push32((uint32_t)(EDI));
  /* 11921ce2 call esi */
  call_ind((uint32_t)(ESI), 0x11921ce4u);
  /* 11921ce4 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921ce7 push 0x119275c0 */
  push32((uint32_t)(0x119275c0u));
  /* 11921cec push edi */
  push32((uint32_t)(EDI));
  /* 11921ced call esi */
  call_ind((uint32_t)(ESI), 0x11921cefu);
  /* 11921cef push 0x119275ac */
  push32((uint32_t)(0x119275acu));
  /* 11921cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11921cf5 call esi */
  call_ind((uint32_t)(ESI), 0x11921cf7u);
  /* 11921cf7 push 0x11927520 */
  push32((uint32_t)(0x11927520u));
  /* 11921cfc push edi */
  push32((uint32_t)(EDI));
  /* 11921cfd call esi */
  call_ind((uint32_t)(ESI), 0x11921cffu);
  /* 11921cff push 0x1192750c */
  push32((uint32_t)(0x1192750cu));
  /* 11921d04 push edi */
  push32((uint32_t)(EDI));
  /* 11921d05 call esi */
  call_ind((uint32_t)(ESI), 0x11921d07u);
  /* 11921d07 push 0x11927660 */
  push32((uint32_t)(0x11927660u));
  /* 11921d0c push edi */
  push32((uint32_t)(EDI));
  /* 11921d0d call esi */
  call_ind((uint32_t)(ESI), 0x11921d0fu);
  /* 11921d0f push 0x11927610 */
  push32((uint32_t)(0x11927610u));
  /* 11921d14 push edi */
  push32((uint32_t)(EDI));
  /* 11921d15 call esi */
  call_ind((uint32_t)(ESI), 0x11921d17u);
  /* 11921d17 push 0x11927598 */
  push32((uint32_t)(0x11927598u));
  /* 11921d1c push edi */
  push32((uint32_t)(EDI));
  /* 11921d1d call esi */
  call_ind((uint32_t)(ESI), 0x11921d1fu);
  /* 11921d1f push 0x11927584 */
  push32((uint32_t)(0x11927584u));
  /* 11921d24 push edi */
  push32((uint32_t)(EDI));
  /* 11921d25 call esi */
  call_ind((uint32_t)(ESI), 0x11921d27u);
  /* 11921d27 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921d2a push 0x119274f8 */
  push32((uint32_t)(0x119274f8u));
  /* 11921d2f push edi */
  push32((uint32_t)(EDI));
  /* 11921d30 call esi */
  call_ind((uint32_t)(ESI), 0x11921d32u);
  /* 11921d32 push 0x119274e4 */
  push32((uint32_t)(0x119274e4u));
  /* 11921d37 push edi */
  push32((uint32_t)(EDI));
  /* 11921d38 call esi */
  call_ind((uint32_t)(ESI), 0x11921d3au);
  /* 11921d3a push 0x1192764c */
  push32((uint32_t)(0x1192764cu));
  /* 11921d3f push edi */
  push32((uint32_t)(EDI));
  /* 11921d40 call esi */
  call_ind((uint32_t)(ESI), 0x11921d42u);
  /* 11921d42 push 0x119275fc */
  push32((uint32_t)(0x119275fcu));
  /* 11921d47 push edi */
  push32((uint32_t)(EDI));
  /* 11921d48 call esi */
  call_ind((uint32_t)(ESI), 0x11921d4au);
  /* 11921d4a push 0x11927570 */
  push32((uint32_t)(0x11927570u));
  /* 11921d4f push edi */
  push32((uint32_t)(EDI));
  /* 11921d50 call esi */
  call_ind((uint32_t)(ESI), 0x11921d52u);
  /* 11921d52 push 0x1192755c */
  push32((uint32_t)(0x1192755cu));
  /* 11921d57 push edi */
  push32((uint32_t)(EDI));
  /* 11921d58 call esi */
  call_ind((uint32_t)(ESI), 0x11921d5au);
  /* 11921d5a push 0x119274d0 */
  push32((uint32_t)(0x119274d0u));
  /* 11921d5f push edi */
  push32((uint32_t)(EDI));
  /* 11921d60 call esi */
  call_ind((uint32_t)(ESI), 0x11921d62u);
  /* 11921d62 push 0x119274bc */
  push32((uint32_t)(0x119274bcu));
L_11921d67:;
  /* 11921d67 push edi */
  push32((uint32_t)(EDI));
  /* 11921d68 call esi */
  call_ind((uint32_t)(ESI), 0x11921d6au);
  /* 11921d6a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921d6d:;
  /* 11921d6d push 0x119274b4 */
  push32((uint32_t)(0x119274b4u));
  /* 11921d72 push 0x11927250 */
  push32((uint32_t)(0x11927250u));
  /* 11921d77 call esi */
  call_ind((uint32_t)(ESI), 0x11921d79u);
  /* 11921d79 mov edi, 0x119274ac */
  EDI = (0x119274acu);
  /* 11921d7e push edi */
  push32((uint32_t)(EDI));
  /* 11921d7f push 0x11927250 */
  push32((uint32_t)(0x11927250u));
  /* 11921d84 call esi */
  call_ind((uint32_t)(ESI), 0x11921d86u);
  /* 11921d86 push 0x119274b4 */
  push32((uint32_t)(0x119274b4u));
  /* 11921d8b push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921d90 call esi */
  call_ind((uint32_t)(ESI), 0x11921d92u);
  /* 11921d92 push edi */
  push32((uint32_t)(EDI));
  /* 11921d93 mov edi, 0x11927238 */
  EDI = (0x11927238u);
  /* 11921d98 push edi */
  push32((uint32_t)(EDI));
  /* 11921d99 call esi */
  call_ind((uint32_t)(ESI), 0x11921d9bu);
  /* 11921d9b mov eax, dword ptr [0x11927a98] */
  EAX = (r32((uint32_t)(0x11927a98)));
  /* 11921da0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921da3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921da4 je 0x11921edb */
  if (C.zf) goto L_11921edb;
  /* 11921daa dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921dab je 0x11921e1e */
  if (C.zf) goto L_11921e1e;
  /* 11921dad dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11921dae jne 0x11921f1a */
  if (!C.zf) goto L_11921f1a;
  /* 11921db4 push 0x11927494 */
  push32((uint32_t)(0x11927494u));
  /* 11921db9 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921dbe call esi */
  call_ind((uint32_t)(ESI), 0x11921dc0u);
  /* 11921dc0 push 0x1192747c */
  push32((uint32_t)(0x1192747cu));
  /* 11921dc5 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921dca call esi */
  call_ind((uint32_t)(ESI), 0x11921dccu);
  /* 11921dcc push 0x11927474 */
  push32((uint32_t)(0x11927474u));
  /* 11921dd1 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921dd6 call esi */
  call_ind((uint32_t)(ESI), 0x11921dd8u);
  /* 11921dd8 push 0x1192746c */
  push32((uint32_t)(0x1192746cu));
  /* 11921ddd push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921de2 call esi */
  call_ind((uint32_t)(ESI), 0x11921de4u);
  /* 11921de4 push 0x11927464 */
  push32((uint32_t)(0x11927464u));
  /* 11921de9 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921dee call esi */
  call_ind((uint32_t)(ESI), 0x11921df0u);
  /* 11921df0 push 0x1192744c */
  push32((uint32_t)(0x1192744cu));
  /* 11921df5 push edi */
  push32((uint32_t)(EDI));
  /* 11921df6 call esi */
  call_ind((uint32_t)(ESI), 0x11921df8u);
  /* 11921df8 push 0x11927434 */
  push32((uint32_t)(0x11927434u));
  /* 11921dfd push edi */
  push32((uint32_t)(EDI));
  /* 11921dfe call esi */
  call_ind((uint32_t)(ESI), 0x11921e00u);
  /* 11921e00 push 0x1192742c */
  push32((uint32_t)(0x1192742cu));
  /* 11921e05 push edi */
  push32((uint32_t)(EDI));
  /* 11921e06 call esi */
  call_ind((uint32_t)(ESI), 0x11921e08u);
  /* 11921e08 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921e0b push 0x11927424 */
  push32((uint32_t)(0x11927424u));
  /* 11921e10 push edi */
  push32((uint32_t)(EDI));
  /* 11921e11 call esi */
  call_ind((uint32_t)(ESI), 0x11921e13u);
  /* 11921e13 push 0x1192741c */
  push32((uint32_t)(0x1192741cu));
  /* 11921e18 push edi */
  push32((uint32_t)(EDI));
  /* 11921e19 call esi */
  call_ind((uint32_t)(ESI), 0x11921e1bu);
  /* 11921e1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921e1e:;
  /* 11921e1e push 0x11927404 */
  push32((uint32_t)(0x11927404u));
  /* 11921e23 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e28 call esi */
  call_ind((uint32_t)(ESI), 0x11921e2au);
  /* 11921e2a push 0x119273ec */
  push32((uint32_t)(0x119273ecu));
  /* 11921e2f push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e34 call esi */
  call_ind((uint32_t)(ESI), 0x11921e36u);
  /* 11921e36 push 0x119273e4 */
  push32((uint32_t)(0x119273e4u));
  /* 11921e3b push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e40 call esi */
  call_ind((uint32_t)(ESI), 0x11921e42u);
  /* 11921e42 push 0x119273dc */
  push32((uint32_t)(0x119273dcu));
  /* 11921e47 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e4c call esi */
  call_ind((uint32_t)(ESI), 0x11921e4eu);
  /* 11921e4e push 0x119273d4 */
  push32((uint32_t)(0x119273d4u));
  /* 11921e53 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e58 call esi */
  call_ind((uint32_t)(ESI), 0x11921e5au);
  /* 11921e5a push 0x119273cc */
  push32((uint32_t)(0x119273ccu));
  /* 11921e5f push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e64 call esi */
  call_ind((uint32_t)(ESI), 0x11921e66u);
  /* 11921e66 push 0x119273c4 */
  push32((uint32_t)(0x119273c4u));
  /* 11921e6b push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e70 call esi */
  call_ind((uint32_t)(ESI), 0x11921e72u);
  /* 11921e72 push 0x119273bc */
  push32((uint32_t)(0x119273bcu));
  /* 11921e77 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e7c call esi */
  call_ind((uint32_t)(ESI), 0x11921e7eu);
  /* 11921e7e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921e81 push 0x119273b4 */
  push32((uint32_t)(0x119273b4u));
  /* 11921e86 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921e8b call esi */
  call_ind((uint32_t)(ESI), 0x11921e8du);
  /* 11921e8d push 0x1192739c */
  push32((uint32_t)(0x1192739cu));
  /* 11921e92 push edi */
  push32((uint32_t)(EDI));
  /* 11921e93 call esi */
  call_ind((uint32_t)(ESI), 0x11921e95u);
  /* 11921e95 push 0x11927384 */
  push32((uint32_t)(0x11927384u));
  /* 11921e9a push edi */
  push32((uint32_t)(EDI));
  /* 11921e9b call esi */
  call_ind((uint32_t)(ESI), 0x11921e9du);
  /* 11921e9d push 0x1192737c */
  push32((uint32_t)(0x1192737cu));
  /* 11921ea2 push edi */
  push32((uint32_t)(EDI));
  /* 11921ea3 call esi */
  call_ind((uint32_t)(ESI), 0x11921ea5u);
  /* 11921ea5 push 0x11927374 */
  push32((uint32_t)(0x11927374u));
  /* 11921eaa push edi */
  push32((uint32_t)(EDI));
  /* 11921eab call esi */
  call_ind((uint32_t)(ESI), 0x11921eadu);
  /* 11921ead push 0x1192736c */
  push32((uint32_t)(0x1192736cu));
  /* 11921eb2 push edi */
  push32((uint32_t)(EDI));
  /* 11921eb3 call esi */
  call_ind((uint32_t)(ESI), 0x11921eb5u);
  /* 11921eb5 push 0x11927364 */
  push32((uint32_t)(0x11927364u));
  /* 11921eba push edi */
  push32((uint32_t)(EDI));
  /* 11921ebb call esi */
  call_ind((uint32_t)(ESI), 0x11921ebdu);
  /* 11921ebd push 0x1192735c */
  push32((uint32_t)(0x1192735cu));
  /* 11921ec2 push edi */
  push32((uint32_t)(EDI));
  /* 11921ec3 call esi */
  call_ind((uint32_t)(ESI), 0x11921ec5u);
  /* 11921ec5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921ec8 push 0x11927354 */
  push32((uint32_t)(0x11927354u));
  /* 11921ecd push edi */
  push32((uint32_t)(EDI));
  /* 11921ece call esi */
  call_ind((uint32_t)(ESI), 0x11921ed0u);
  /* 11921ed0 push 0x1192734c */
  push32((uint32_t)(0x1192734cu));
  /* 11921ed5 push edi */
  push32((uint32_t)(EDI));
  /* 11921ed6 call esi */
  call_ind((uint32_t)(ESI), 0x11921ed8u);
  /* 11921ed8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921edb:;
  /* 11921edb push 0x11927334 */
  push32((uint32_t)(0x11927334u));
  /* 11921ee0 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921ee5 call esi */
  call_ind((uint32_t)(ESI), 0x11921ee7u);
  /* 11921ee7 push 0x1192731c */
  push32((uint32_t)(0x1192731cu));
  /* 11921eec push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921ef1 call esi */
  call_ind((uint32_t)(ESI), 0x11921ef3u);
  /* 11921ef3 push 0x11927314 */
  push32((uint32_t)(0x11927314u));
  /* 11921ef8 push 0x1192723c */
  push32((uint32_t)(0x1192723cu));
  /* 11921efd call esi */
  call_ind((uint32_t)(ESI), 0x11921effu);
  /* 11921eff push 0x119272fc */
  push32((uint32_t)(0x119272fcu));
  /* 11921f04 push edi */
  push32((uint32_t)(EDI));
  /* 11921f05 call esi */
  call_ind((uint32_t)(ESI), 0x11921f07u);
  /* 11921f07 push 0x119272e4 */
  push32((uint32_t)(0x119272e4u));
  /* 11921f0c push edi */
  push32((uint32_t)(EDI));
  /* 11921f0d call esi */
  call_ind((uint32_t)(ESI), 0x11921f0fu);
  /* 11921f0f push 0x119272dc */
  push32((uint32_t)(0x119272dcu));
  /* 11921f14 push edi */
  push32((uint32_t)(EDI));
  /* 11921f15 call esi */
  call_ind((uint32_t)(ESI), 0x11921f17u);
  /* 11921f17 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11921f1a:;
  /* 11921f1a push 5 */
  push32((uint32_t)(0x5u));
  /* 11921f1c mov esi, dword ptr [0x11926128] */
  ESI = (r32((uint32_t)(0x11926128)));
  /* 11921f22 pop eax */
  EAX = (pop32());
  /* 11921f23 sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11921f29 imul eax, eax, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2710u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11921f2f push eax */
  push32((uint32_t)(EAX));
  /* 11921f30 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f32 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f33 call esi */
  call_ind((uint32_t)(ESI), 0x11921f35u);
  /* 11921f35 mov edi, dword ptr [0x11926130] */
  EDI = (r32((uint32_t)(0x11926130)));
  /* 11921f3b push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f3d push ebx */
  push32((uint32_t)(EBX));
  /* 11921f3e call edi */
  call_ind((uint32_t)(EDI), 0x11921f40u);
  /* 11921f40 push eax */
  push32((uint32_t)(EAX));
  /* 11921f41 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f43 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f44 call esi */
  call_ind((uint32_t)(ESI), 0x11921f46u);
  /* 11921f46 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f48 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f49 call edi */
  call_ind((uint32_t)(EDI), 0x11921f4bu);
  /* 11921f4b push eax */
  push32((uint32_t)(EAX));
  /* 11921f4c push 4 */
  push32((uint32_t)(0x4u));
  /* 11921f4e push ebx */
  push32((uint32_t)(EBX));
  /* 11921f4f call esi */
  call_ind((uint32_t)(ESI), 0x11921f51u);
  /* 11921f51 push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f53 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f54 call edi */
  call_ind((uint32_t)(EDI), 0x11921f56u);
  /* 11921f56 push eax */
  push32((uint32_t)(EAX));
  /* 11921f57 push 5 */
  push32((uint32_t)(0x5u));
  /* 11921f59 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f5a call esi */
  call_ind((uint32_t)(ESI), 0x11921f5cu);
  /* 11921f5c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921f5f push ebx */
  push32((uint32_t)(EBX));
  /* 11921f60 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f61 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f62 call esi */
  call_ind((uint32_t)(ESI), 0x11921f64u);
  /* 11921f64 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921f67 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f68 call esi */
  call_ind((uint32_t)(ESI), 0x11921f6au);
  /* 11921f6a push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f6c push ebx */
  push32((uint32_t)(EBX));
  /* 11921f6d call edi */
  call_ind((uint32_t)(EDI), 0x11921f6fu);
  /* 11921f6f lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11921f72 push eax */
  push32((uint32_t)(EAX));
  /* 11921f73 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f76 call esi */
  call_ind((uint32_t)(ESI), 0x11921f78u);
  /* 11921f78 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f79 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f7b call edi */
  call_ind((uint32_t)(EDI), 0x11921f7du);
  /* 11921f7d push eax */
  push32((uint32_t)(EAX));
  /* 11921f7e push 3 */
  push32((uint32_t)(0x3u));
  /* 11921f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f82 call esi */
  call_ind((uint32_t)(ESI), 0x11921f84u);
  /* 11921f84 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921f87 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f88 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f8a call edi */
  call_ind((uint32_t)(EDI), 0x11921f8cu);
  /* 11921f8c push eax */
  push32((uint32_t)(EAX));
  /* 11921f8d push 2 */
  push32((uint32_t)(0x2u));
  /* 11921f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f91 call esi */
  call_ind((uint32_t)(ESI), 0x11921f93u);
  /* 11921f93 push ebx */
  push32((uint32_t)(EBX));
  /* 11921f94 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f96 call edi */
  call_ind((uint32_t)(EDI), 0x11921f98u);
  /* 11921f98 push eax */
  push32((uint32_t)(EAX));
  /* 11921f99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11921f9d call esi */
  call_ind((uint32_t)(ESI), 0x11921f9fu);
  /* 11921f9f push ebx */
  push32((uint32_t)(EBX));
  /* 11921fa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fa2 call edi */
  call_ind((uint32_t)(EDI), 0x11921fa4u);
  /* 11921fa4 push eax */
  push32((uint32_t)(EAX));
  /* 11921fa5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921fa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fa9 call esi */
  call_ind((uint32_t)(ESI), 0x11921fabu);
  /* 11921fab push ebx */
  push32((uint32_t)(EBX));
  /* 11921fac push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fae call edi */
  call_ind((uint32_t)(EDI), 0x11921fb0u);
  /* 11921fb0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921fb3 push eax */
  push32((uint32_t)(EAX));
  /* 11921fb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 11921fb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fb8 call esi */
  call_ind((uint32_t)(ESI), 0x11921fbau);
  /* 11921fba push ebx */
  push32((uint32_t)(EBX));
  /* 11921fbb push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fbd call edi */
  call_ind((uint32_t)(EDI), 0x11921fbfu);
  /* 11921fbf push eax */
  push32((uint32_t)(EAX));
  /* 11921fc0 push ebx */
  push32((uint32_t)(EBX));
  /* 11921fc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fc3 call esi */
  call_ind((uint32_t)(ESI), 0x11921fc5u);
  /* 11921fc5 push ebx */
  push32((uint32_t)(EBX));
  /* 11921fc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fc8 call edi */
  call_ind((uint32_t)(EDI), 0x11921fcau);
  /* 11921fca push eax */
  push32((uint32_t)(EAX));
  /* 11921fcb push 3 */
  push32((uint32_t)(0x3u));
  /* 11921fcd push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fcf call esi */
  call_ind((uint32_t)(ESI), 0x11921fd1u);
  /* 11921fd1 push ebx */
  push32((uint32_t)(EBX));
  /* 11921fd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fd4 call edi */
  call_ind((uint32_t)(EDI), 0x11921fd6u);
  /* 11921fd6 push eax */
  push32((uint32_t)(EAX));
  /* 11921fd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fdb call esi */
  call_ind((uint32_t)(ESI), 0x11921fddu);
  /* 11921fdd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11921fe0 push ebx */
  push32((uint32_t)(EBX));
  /* 11921fe1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fe3 call edi */
  call_ind((uint32_t)(EDI), 0x11921fe5u);
  /* 11921fe5 push eax */
  push32((uint32_t)(EAX));
  /* 11921fe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11921fe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fea call esi */
  call_ind((uint32_t)(ESI), 0x11921fecu);
  /* 11921fec push ebx */
  push32((uint32_t)(EBX));
  /* 11921fed push 2 */
  push32((uint32_t)(0x2u));
  /* 11921fef call edi */
  call_ind((uint32_t)(EDI), 0x11921ff1u);
  /* 11921ff1 push eax */
  push32((uint32_t)(EAX));
  /* 11921ff2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11921ff4 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921ff6 call esi */
  call_ind((uint32_t)(ESI), 0x11921ff8u);
  /* 11921ff8 push ebx */
  push32((uint32_t)(EBX));
  /* 11921ff9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11921ffb call edi */
  call_ind((uint32_t)(EDI), 0x11921ffdu);
  /* 11921ffd push eax */
  push32((uint32_t)(EAX));
  /* 11921ffe push 5 */
  push32((uint32_t)(0x5u));
  /* 11922000 push 2 */
  push32((uint32_t)(0x2u));
  /* 11922002 call esi */
  call_ind((uint32_t)(ESI), 0x11922004u);
  /* 11922004 push 0x5f5e100 */
  push32((uint32_t)(0x5f5e100u));
  /* 11922009 push ebx */
  push32((uint32_t)(EBX));
  /* 1192200a push 3 */
  push32((uint32_t)(0x3u));
  /* 1192200c call esi */
  call_ind((uint32_t)(ESI), 0x1192200eu);
  /* 1192200e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11922011 push ebx */
  push32((uint32_t)(EBX));
  /* 11922012 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922014 call edi */
  call_ind((uint32_t)(EDI), 0x11922016u);
  /* 11922016 push eax */
  push32((uint32_t)(EAX));
  /* 11922017 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922019 push 3 */
  push32((uint32_t)(0x3u));
  /* 1192201b call esi */
  call_ind((uint32_t)(ESI), 0x1192201du);
  /* 1192201d push ebx */
  push32((uint32_t)(EBX));
  /* 1192201e push 3 */
  push32((uint32_t)(0x3u));
  /* 11922020 call edi */
  call_ind((uint32_t)(EDI), 0x11922022u);
  /* 11922022 push eax */
  push32((uint32_t)(EAX));
  /* 11922023 push 2 */
  push32((uint32_t)(0x2u));
  /* 11922025 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922027 call esi */
  call_ind((uint32_t)(ESI), 0x11922029u);
  /* 11922029 push ebx */
  push32((uint32_t)(EBX));
  /* 1192202a push 3 */
  push32((uint32_t)(0x3u));
  /* 1192202c call edi */
  call_ind((uint32_t)(EDI), 0x1192202eu);
  /* 1192202e push eax */
  push32((uint32_t)(EAX));
  /* 1192202f push 1 */
  push32((uint32_t)(0x1u));
  /* 11922031 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922033 call esi */
  call_ind((uint32_t)(ESI), 0x11922035u);
  /* 11922035 push ebx */
  push32((uint32_t)(EBX));
  /* 11922036 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922038 call edi */
  call_ind((uint32_t)(EDI), 0x1192203au);
  /* 1192203a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192203d push eax */
  push32((uint32_t)(EAX));
  /* 1192203e push 4 */
  push32((uint32_t)(0x4u));
  /* 11922040 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922042 call esi */
  call_ind((uint32_t)(ESI), 0x11922044u);
  /* 11922044 push ebx */
  push32((uint32_t)(EBX));
  /* 11922045 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922047 call edi */
  call_ind((uint32_t)(EDI), 0x11922049u);
  /* 11922049 push eax */
  push32((uint32_t)(EAX));
  /* 1192204a push 5 */
  push32((uint32_t)(0x5u));
  /* 1192204c push 3 */
  push32((uint32_t)(0x3u));
  /* 1192204e call esi */
  call_ind((uint32_t)(ESI), 0x11922050u);
  /* 11922050 mov esi, dword ptr [0x11926154] */
  ESI = (r32((uint32_t)(0x11926154)));
  /* 11922056 push 0x11927b68 */
  push32((uint32_t)(0x11927b68u));
  /* 1192205b push 0x11927be8 */
  push32((uint32_t)(0x11927be8u));
  /* 11922060 call esi */
  call_ind((uint32_t)(ESI), 0x11922062u);
  /* 11922062 push 0x11927b70 */
  push32((uint32_t)(0x11927b70u));
  /* 11922067 push 0x11927bf0 */
  push32((uint32_t)(0x11927bf0u));
  /* 1192206c call esi */
  call_ind((uint32_t)(ESI), 0x1192206eu);
  /* 1192206e push 0x11927b78 */
  push32((uint32_t)(0x11927b78u));
  /* 11922073 push 0x11927bf8 */
  push32((uint32_t)(0x11927bf8u));
  /* 11922078 call esi */
  call_ind((uint32_t)(ESI), 0x1192207au);
  /* 1192207a push 0x11927b80 */
  push32((uint32_t)(0x11927b80u));
  /* 1192207f push 0x11927c00 */
  push32((uint32_t)(0x11927c00u));
  /* 11922084 call esi */
  call_ind((uint32_t)(ESI), 0x11922086u);
  /* 11922086 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11922089 push ebx */
  push32((uint32_t)(EBX));
  /* 1192208a push 0x11927ac8 */
  push32((uint32_t)(0x11927ac8u));
  /* 1192208f call ebp */
  call_ind((uint32_t)(EBP), 0x11922091u);
  /* 11922091 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922093 pop esi */
  ESI = (pop32());
  /* 11922094 push esi */
  push32((uint32_t)(ESI));
  /* 11922095 push 0x11927ad0 */
  push32((uint32_t)(0x11927ad0u));
  /* 1192209a call ebp */
  call_ind((uint32_t)(EBP), 0x1192209cu);
  /* 1192209c push esi */
  push32((uint32_t)(ESI));
  /* 1192209d push 0x11927ad8 */
  push32((uint32_t)(0x11927ad8u));
  /* 119220a2 call ebp */
  call_ind((uint32_t)(EBP), 0x119220a4u);
  /* 119220a4 push esi */
  push32((uint32_t)(ESI));
  /* 119220a5 push 0x11927ae8 */
  push32((uint32_t)(0x11927ae8u));
  /* 119220aa call ebp */
  call_ind((uint32_t)(EBP), 0x119220acu);
  /* 119220ac push 4 */
  push32((uint32_t)(0x4u));
  /* 119220ae pop edi */
  EDI = (pop32());
  /* 119220af push edi */
  push32((uint32_t)(EDI));
  /* 119220b0 push esi */
  push32((uint32_t)(ESI));
  /* 119220b1 mov esi, dword ptr [0x11926118] */
  ESI = (r32((uint32_t)(0x11926118)));
  /* 119220b7 call esi */
  call_ind((uint32_t)(ESI), 0x119220b9u);
  /* 119220b9 push edi */
  push32((uint32_t)(EDI));
  /* 119220ba push 2 */
  push32((uint32_t)(0x2u));
  /* 119220bc call esi */
  call_ind((uint32_t)(ESI), 0x119220beu);
  /* 119220be push ebx */
  push32((uint32_t)(EBX));
  /* 119220bf push 0x11927bc0 */
  push32((uint32_t)(0x11927bc0u));
  /* 119220c4 call ebp */
  call_ind((uint32_t)(EBP), 0x119220c6u);
  /* 119220c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 119220c8 call dword ptr [0x11926108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926108))), 0x119220ceu);
  /* 119220ce mov esi, dword ptr [0x119260bc] */
  ESI = (r32((uint32_t)(0x119260bc)));
  /* 119220d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 119220d6 push edi */
  push32((uint32_t)(EDI));
  /* 119220d7 push 0x11927c90 */
  push32((uint32_t)(0x11927c90u));
  /* 119220dc call esi */
  call_ind((uint32_t)(ESI), 0x119220deu);
  /* 119220de add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119220e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 119220e3 push edi */
  push32((uint32_t)(EDI));
  /* 119220e4 push 0x11927c98 */
  push32((uint32_t)(0x11927c98u));
  /* 119220e9 call esi */
  call_ind((uint32_t)(ESI), 0x119220ebu);
  /* 119220eb push 3 */
  push32((uint32_t)(0x3u));
  /* 119220ed push edi */
  push32((uint32_t)(EDI));
  /* 119220ee push 0x11927ca0 */
  push32((uint32_t)(0x11927ca0u));
  /* 119220f3 call esi */
  call_ind((uint32_t)(ESI), 0x119220f5u);
  /* 119220f5 push edi */
  push32((uint32_t)(EDI));
  /* 119220f6 push edi */
  push32((uint32_t)(EDI));
  /* 119220f7 push 0x11927ca8 */
  push32((uint32_t)(0x11927ca8u));
  /* 119220fc call esi */
  call_ind((uint32_t)(ESI), 0x119220feu);
  /* 119220fe push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11922100 call dword ptr [0x11926114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926114))), 0x11922106u);
  /* 11922106 mov esi, dword ptr [0x11926104] */
  ESI = (r32((uint32_t)(0x11926104)));
  /* 1192210c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1192210e call esi */
  call_ind((uint32_t)(ESI), 0x11922110u);
  /* 11922110 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11922112 call esi */
  call_ind((uint32_t)(ESI), 0x11922114u);
  /* 11922114 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11922116 call esi */
  call_ind((uint32_t)(ESI), 0x11922118u);
  /* 11922118 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1192211a call esi */
  call_ind((uint32_t)(ESI), 0x1192211cu);
  /* 1192211c push 0x119272d4 */
  push32((uint32_t)(0x119272d4u));
  /* 11922121 call dword ptr [0x11926124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926124))), 0x11922127u);
  /* 11922127 push ebx */
  push32((uint32_t)(EBX));
  /* 11922128 mov esi, dword ptr [0x119260cc] */
  ESI = (r32((uint32_t)(0x119260cc)));
  /* 1192212e push 1 */
  push32((uint32_t)(0x1u));
  /* 11922130 call esi */
  call_ind((uint32_t)(ESI), 0x11922132u);
  /* 11922132 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11922135 push ebx */
  push32((uint32_t)(EBX));
  /* 11922136 push 2 */
  push32((uint32_t)(0x2u));
  /* 11922138 call esi */
  call_ind((uint32_t)(ESI), 0x1192213au);
  /* 1192213a push ebx */
  push32((uint32_t)(EBX));
  /* 1192213b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1192213d call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x11922143u);
  /* 11922143 mov esi, dword ptr [0x119260b4] */
  ESI = (r32((uint32_t)(0x119260b4)));
  /* 11922149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192214c:;
  /* 1192214c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192214e pop edi */
  EDI = (pop32());
  /* 1192214f push edi */
  push32((uint32_t)(EDI));
  /* 11922150 call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x11922156u);
  /* 11922156 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922158 pop ecx */
  ECX = (pop32());
  /* 11922159 je 0x1192217d */
  if (C.zf) goto L_1192217d;
  /* 1192215b mov eax, dword ptr [0x11927a98] */
  EAX = (r32((uint32_t)(0x11927a98)));
  /* 11922160 mov ecx, 0x1b58 */
  ECX = (0x1b58u);
  /* 11922165 add dword ptr [0x11927c20], eax */
  { uint32_t _a=(r32((uint32_t)(0x11927c20))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x11927c20), (_r)); fl_add(_a,_b,_r,32); }
  /* 1192216b imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11922171 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922173 push ecx */
  push32((uint32_t)(ECX));
  /* 11922174 push edi */
  push32((uint32_t)(EDI));
  /* 11922175 call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x1192217bu);
  /* 1192217b pop ecx */
  ECX = (pop32());
  /* 1192217c pop ecx */
  ECX = (pop32());
L_1192217d:;
  /* 1192217d push edi */
  push32((uint32_t)(EDI));
  /* 1192217e call esi */
  call_ind((uint32_t)(ESI), 0x11922180u);
  /* 11922180 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922182 pop ecx */
  ECX = (pop32());
  /* 11922183 je 0x119221a8 */
  if (C.zf) goto L_119221a8;
  /* 11922185 push 0x11927c30 */
  push32((uint32_t)(0x11927c30u));
  /* 1192218a call 0x119210f2 */
  push32(0x1192218fu); f_119210f2();
  /* 1192218f mov dword ptr [esp], 0x11927c38 */
  w32((uint32_t)(ESP), (0x11927c38u));
  /* 11922196 call 0x119210f2 */
  push32(0x1192219bu); f_119210f2();
  /* 1192219b mov dword ptr [esp], 0x11927c28 */
  w32((uint32_t)(ESP), (0x11927c28u));
  /* 119221a2 call 0x119210f2 */
  push32(0x119221a7u); f_119210f2();
  /* 119221a7 pop ecx */
  ECX = (pop32());
L_119221a8:;
  /* 119221a8 push edi */
  push32((uint32_t)(EDI));
  /* 119221a9 call esi */
  call_ind((uint32_t)(ESI), 0x119221abu);
  /* 119221ab mov ebp, dword ptr [0x11926138] */
  EBP = (r32((uint32_t)(0x11926138)));
  /* 119221b1 pop ecx */
  ECX = (pop32());
  /* 119221b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119221b4 je 0x11922228 */
  if (C.zf) goto L_11922228;
  /* 119221b6 push 0x11927b10 */
  push32((uint32_t)(0x11927b10u));
  /* 119221bb call ebp */
  call_ind((uint32_t)(EBP), 0x119221bdu);
  /* 119221bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119221bf pop ecx */
  ECX = (pop32());
  /* 119221c0 je 0x11922228 */
  if (C.zf) goto L_11922228;
  /* 119221c2 mov edi, 0x11927b88 */
  EDI = (0x11927b88u);
  /* 119221c7 push ebx */
  push32((uint32_t)(EBX));
  /* 119221c8 push edi */
  push32((uint32_t)(EDI));
  /* 119221c9 call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x119221cfu);
  /* 119221cf mov edx, eax */
  EDX = (EAX);
  /* 119221d1 push 0x11927b10 */
  push32((uint32_t)(0x11927b10u));
  /* 119221d6 mov dword ptr [esp + 0x1c], edx */
  w32((uint32_t)(ESP + 0x1c), (EDX));
  /* 119221da call ebp */
  call_ind((uint32_t)(EBP), 0x119221dcu);
  /* 119221dc mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 119221e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119221e3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119221e4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119221e6 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119221e8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119221ea jle 0x11922228 */
  if ((C.zf||C.sf!=C.of)) goto L_11922228;
  /* 119221ec push ebx */
  push32((uint32_t)(EBX));
  /* 119221ed push edi */
  push32((uint32_t)(EDI));
  /* 119221ee call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x119221f4u);
  /* 119221f4 pop ecx */
  ECX = (pop32());
  /* 119221f5 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119221f8 pop ecx */
  ECX = (pop32());
  /* 119221f9 jge 0x11922228 */
  if ((C.sf==C.of)) goto L_11922228;
  /* 119221fb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 119221fd call dword ptr [0x11926104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926104))), 0x11922203u);
  /* 11922203 mov edi, dword ptr [0x11926114] */
  EDI = (r32((uint32_t)(0x11926114)));
  /* 11922209 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1192220b call edi */
  call_ind((uint32_t)(EDI), 0x1192220du);
  /* 1192220d push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1192220f call edi */
  call_ind((uint32_t)(EDI), 0x11922211u);
  /* 11922211 push 0x119272cc */
  push32((uint32_t)(0x119272ccu));
  /* 11922216 call dword ptr [0x11926124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926124))), 0x1192221cu);
  /* 1192221c push ebx */
  push32((uint32_t)(EBX));
  /* 1192221d push 1 */
  push32((uint32_t)(0x1u));
  /* 1192221f call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x11922225u);
  /* 11922225 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922228:;
  /* 11922228 push 2 */
  push32((uint32_t)(0x2u));
  /* 1192222a call esi */
  call_ind((uint32_t)(ESI), 0x1192222cu);
  /* 1192222c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192222e pop ecx */
  ECX = (pop32());
  /* 1192222f je 0x11922251 */
  if (C.zf) goto L_11922251;
  /* 11922231 mov edi, dword ptr [0x119260c8] */
  EDI = (r32((uint32_t)(0x119260c8)));
  /* 11922237 mov ebp, 0x11927cb0 */
  EBP = (0x11927cb0u);
  /* 1192223c push ebx */
  push32((uint32_t)(EBX));
  /* 1192223d push ebp */
  push32((uint32_t)(EBP));
  /* 1192223e push 0x11927b38 */
  push32((uint32_t)(0x11927b38u));
  /* 11922243 call edi */
  call_ind((uint32_t)(EDI), 0x11922245u);
  /* 11922245 push ebx */
  push32((uint32_t)(EBX));
  /* 11922246 push ebp */
  push32((uint32_t)(EBP));
  /* 11922247 push 0x11927b40 */
  push32((uint32_t)(0x11927b40u));
  /* 1192224c call edi */
  call_ind((uint32_t)(EDI), 0x1192224eu);
  /* 1192224e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922251:;
  /* 11922251 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11922253 call esi */
  call_ind((uint32_t)(ESI), 0x11922255u);
  /* 11922255 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922257 pop ecx */
  ECX = (pop32());
  /* 11922258 mov edi, 0x11927af0 */
  EDI = (0x11927af0u);
  /* 1192225d je 0x119222a3 */
  if (C.zf) goto L_119222a3;
  /* 1192225f mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 11922264 mov ebp, 0x11927c90 */
  EBP = (0x11927c90u);
  /* 11922269 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1192226a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1192226c sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1192226e push eax */
  push32((uint32_t)(EAX));
  /* 1192226f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11922271 push ebp */
  push32((uint32_t)(EBP));
  /* 11922272 push 0x11927ba0 */
  push32((uint32_t)(0x11927ba0u));
  /* 11922277 push edi */
  push32((uint32_t)(EDI));
  /* 11922278 push 0x11927b68 */
  push32((uint32_t)(0x11927b68u));
  /* 1192227d call 0x11921172 */
  push32(0x11922282u); f_11921172();
  /* 11922282 mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 11922287 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11922288 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1192228a sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1192228c push eax */
  push32((uint32_t)(EAX));
  /* 1192228d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1192228f push ebp */
  push32((uint32_t)(EBP));
  /* 11922290 push 0x11927ae0 */
  push32((uint32_t)(0x11927ae0u));
  /* 11922295 push edi */
  push32((uint32_t)(EDI));
  /* 11922296 push 0x11927b68 */
  push32((uint32_t)(0x11927b68u));
  /* 1192229b call 0x11921172 */
  push32(0x119222a0u); f_11921172();
  /* 119222a0 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119222a3:;
  /* 119222a3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 119222a5 call esi */
  call_ind((uint32_t)(ESI), 0x119222a7u);
  /* 119222a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119222a9 pop ecx */
  ECX = (pop32());
  /* 119222aa je 0x119222d6 */
  if (C.zf) goto L_119222d6;
  /* 119222ac mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 119222b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 119222b3 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119222b4 pop ecx */
  ECX = (pop32());
  /* 119222b5 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 119222b7 push eax */
  push32((uint32_t)(EAX));
  /* 119222b8 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 119222ba push 0x11927c98 */
  push32((uint32_t)(0x11927c98u));
  /* 119222bf push 0x11927c58 */
  push32((uint32_t)(0x11927c58u));
  /* 119222c4 push 0x11927c10 */
  push32((uint32_t)(0x11927c10u));
  /* 119222c9 push 0x11927b70 */
  push32((uint32_t)(0x11927b70u));
  /* 119222ce call 0x11921172 */
  push32(0x119222d3u); f_11921172();
  /* 119222d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119222d6:;
  /* 119222d6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 119222d8 call esi */
  call_ind((uint32_t)(ESI), 0x119222dau);
  /* 119222da test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119222dc pop ecx */
  ECX = (pop32());
  /* 119222dd je 0x11922308 */
  if (C.zf) goto L_11922308;
  /* 119222df mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 119222e4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 119222e5 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119222e7 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 119222e9 push eax */
  push32((uint32_t)(EAX));
  /* 119222ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119222ec push 0x11927ca0 */
  push32((uint32_t)(0x11927ca0u));
  /* 119222f1 push 0x11927c48 */
  push32((uint32_t)(0x11927c48u));
  /* 119222f6 push 0x11927af8 */
  push32((uint32_t)(0x11927af8u));
  /* 119222fb push 0x11927b78 */
  push32((uint32_t)(0x11927b78u));
  /* 11922300 call 0x11921172 */
  push32(0x11922305u); f_11921172();
  /* 11922305 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922308:;
  /* 11922308 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1192230a call esi */
  call_ind((uint32_t)(ESI), 0x1192230cu);
  /* 1192230c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192230e pop ecx */
  ECX = (pop32());
  /* 1192230f je 0x11922356 */
  if (C.zf) goto L_11922356;
  /* 11922311 mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 11922316 push 3 */
  push32((uint32_t)(0x3u));
  /* 11922318 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11922319 pop ecx */
  ECX = (pop32());
  /* 1192231a mov edi, 0x11927ca8 */
  EDI = (0x11927ca8u);
  /* 1192231f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11922321 mov ebp, 0x11927b80 */
  EBP = (0x11927b80u);
  /* 11922326 push eax */
  push32((uint32_t)(EAX));
  /* 11922327 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11922329 push edi */
  push32((uint32_t)(EDI));
  /* 1192232a push 0x11927cc0 */
  push32((uint32_t)(0x11927cc0u));
  /* 1192232f push 0x11927c18 */
  push32((uint32_t)(0x11927c18u));
  /* 11922334 push ebp */
  push32((uint32_t)(EBP));
  /* 11922335 call 0x11921172 */
  push32(0x1192233au); f_11921172();
  /* 1192233a push dword ptr [0x11927c20] */
  push32((uint32_t)(r32((uint32_t)(0x11927c20))));
  /* 11922340 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11922342 push edi */
  push32((uint32_t)(EDI));
  /* 11922343 push 0x11927a90 */
  push32((uint32_t)(0x11927a90u));
  /* 11922348 push 0x11927b00 */
  push32((uint32_t)(0x11927b00u));
  /* 1192234d push ebp */
  push32((uint32_t)(EBP));
  /* 1192234e call 0x11921172 */
  push32(0x11922353u); f_11921172();
  /* 11922353 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922356:;
  /* 11922356 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922358 call esi */
  call_ind((uint32_t)(ESI), 0x1192235au);
  /* 1192235a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192235c pop ecx */
  ECX = (pop32());
  /* 1192235d mov edi, 0x11927c78 */
  EDI = (0x11927c78u);
  /* 11922362 je 0x119223b8 */
  if (C.zf) goto L_119223b8;
  /* 11922364 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11922366 call esi */
  call_ind((uint32_t)(ESI), 0x11922368u);
  /* 11922368 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192236a pop ecx */
  ECX = (pop32());
  /* 1192236b je 0x119223b8 */
  if (C.zf) goto L_119223b8;
  /* 1192236d push 1 */
  push32((uint32_t)(0x1u));
  /* 1192236f push 0x11927c70 */
  push32((uint32_t)(0x11927c70u));
  /* 11922374 call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x1192237au);
  /* 1192237a pop ecx */
  ECX = (pop32());
  /* 1192237b pop ecx */
  ECX = (pop32());
  /* 1192237c mov ecx, dword ptr [0x11927a98] */
  ECX = (r32((uint32_t)(0x11927a98)));
  /* 11922382 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11922383 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922385 jge 0x119223b8 */
  if ((C.sf==C.of)) goto L_119223b8;
  /* 11922387 push 0x11927bf8 */
  push32((uint32_t)(0x11927bf8u));
  /* 1192238c push 0x11927b78 */
  push32((uint32_t)(0x11927b78u));
  /* 11922391 push 0x11927bd8 */
  push32((uint32_t)(0x11927bd8u));
  /* 11922396 push edi */
  push32((uint32_t)(EDI));
  /* 11922397 push 0x11927c88 */
  push32((uint32_t)(0x11927c88u));
  /* 1192239c push 0x11927b20 */
  push32((uint32_t)(0x11927b20u));
  /* 119223a1 push 0x11927ac8 */
  push32((uint32_t)(0x11927ac8u));
  /* 119223a6 call 0x1192136a */
  push32(0x119223abu); f_1192136a();
  /* 119223ab push 1 */
  push32((uint32_t)(0x1u));
  /* 119223ad push 0xd */
  push32((uint32_t)(0xdu));
  /* 119223af call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x119223b5u);
  /* 119223b5 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119223b8:;
  /* 119223b8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119223ba call esi */
  call_ind((uint32_t)(ESI), 0x119223bcu);
  /* 119223bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119223be pop ecx */
  ECX = (pop32());
  /* 119223bf mov ebp, 0x11927c80 */
  EBP = (0x11927c80u);
  /* 119223c4 je 0x11922416 */
  if (C.zf) goto L_11922416;
  /* 119223c6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 119223c8 call esi */
  call_ind((uint32_t)(ESI), 0x119223cau);
  /* 119223ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119223cc pop ecx */
  ECX = (pop32());
  /* 119223cd je 0x11922416 */
  if (C.zf) goto L_11922416;
  /* 119223cf push 2 */
  push32((uint32_t)(0x2u));
  /* 119223d1 push edi */
  push32((uint32_t)(EDI));
  /* 119223d2 call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x119223d8u);
  /* 119223d8 pop ecx */
  ECX = (pop32());
  /* 119223d9 pop ecx */
  ECX = (pop32());
  /* 119223da mov ecx, dword ptr [0x11927a98] */
  ECX = (r32((uint32_t)(0x11927a98)));
  /* 119223e0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119223e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119223e3 jge 0x11922416 */
  if ((C.sf==C.of)) goto L_11922416;
  /* 119223e5 push 0x11927c00 */
  push32((uint32_t)(0x11927c00u));
  /* 119223ea push 0x11927b80 */
  push32((uint32_t)(0x11927b80u));
  /* 119223ef push 0x11927be0 */
  push32((uint32_t)(0x11927be0u));
  /* 119223f4 push ebp */
  push32((uint32_t)(EBP));
  /* 119223f5 push 0x11927c70 */
  push32((uint32_t)(0x11927c70u));
  /* 119223fa push 0x11927b18 */
  push32((uint32_t)(0x11927b18u));
  /* 119223ff push 0x11927ad0 */
  push32((uint32_t)(0x11927ad0u));
  /* 11922404 call 0x1192136a */
  push32(0x11922409u); f_1192136a();
  /* 11922409 push 1 */
  push32((uint32_t)(0x1u));
  /* 1192240b push 0xe */
  push32((uint32_t)(0xeu));
  /* 1192240d call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x11922413u);
  /* 11922413 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922416:;
  /* 11922416 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922418 call esi */
  call_ind((uint32_t)(ESI), 0x1192241au);
  /* 1192241a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192241c pop ecx */
  ECX = (pop32());
  /* 1192241d je 0x1192246f */
  if (C.zf) goto L_1192246f;
  /* 1192241f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11922421 call esi */
  call_ind((uint32_t)(ESI), 0x11922423u);
  /* 11922423 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922425 pop ecx */
  ECX = (pop32());
  /* 11922426 je 0x1192246f */
  if (C.zf) goto L_1192246f;
  /* 11922428 push 2 */
  push32((uint32_t)(0x2u));
  /* 1192242a push ebp */
  push32((uint32_t)(EBP));
  /* 1192242b call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x11922431u);
  /* 11922431 pop ecx */
  ECX = (pop32());
  /* 11922432 pop ecx */
  ECX = (pop32());
  /* 11922433 mov ecx, dword ptr [0x11927a98] */
  ECX = (r32((uint32_t)(0x11927a98)));
  /* 11922439 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1192243a cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192243c jge 0x1192246f */
  if ((C.sf==C.of)) goto L_1192246f;
  /* 1192243e push 0x11927be8 */
  push32((uint32_t)(0x11927be8u));
  /* 11922443 push 0x11927b68 */
  push32((uint32_t)(0x11927b68u));
  /* 11922448 push 0x11927bc8 */
  push32((uint32_t)(0x11927bc8u));
  /* 1192244d push edi */
  push32((uint32_t)(EDI));
  /* 1192244e push 0x11927c88 */
  push32((uint32_t)(0x11927c88u));
  /* 11922453 push 0x11927b30 */
  push32((uint32_t)(0x11927b30u));
  /* 11922458 push 0x11927ad8 */
  push32((uint32_t)(0x11927ad8u));
  /* 1192245d call 0x1192136a */
  push32(0x11922462u); f_1192136a();
  /* 11922462 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922464 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11922466 call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x1192246cu);
  /* 1192246c add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192246f:;
  /* 1192246f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922471 call esi */
  call_ind((uint32_t)(ESI), 0x11922473u);
  /* 11922473 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922475 pop ecx */
  ECX = (pop32());
  /* 11922476 je 0x119224cc */
  if (C.zf) goto L_119224cc;
  /* 11922478 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1192247a call esi */
  call_ind((uint32_t)(ESI), 0x1192247cu);
  /* 1192247c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192247e pop ecx */
  ECX = (pop32());
  /* 1192247f je 0x119224cc */
  if (C.zf) goto L_119224cc;
  /* 11922481 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922483 push 0x11927c88 */
  push32((uint32_t)(0x11927c88u));
  /* 11922488 call dword ptr [0x11926144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926144))), 0x1192248eu);
  /* 1192248e pop ecx */
  ECX = (pop32());
  /* 1192248f pop ecx */
  ECX = (pop32());
  /* 11922490 mov ecx, dword ptr [0x11927a98] */
  ECX = (r32((uint32_t)(0x11927a98)));
  /* 11922496 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11922497 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922499 jge 0x119224cc */
  if ((C.sf==C.of)) goto L_119224cc;
  /* 1192249b push 0x11927bf0 */
  push32((uint32_t)(0x11927bf0u));
  /* 119224a0 push 0x11927b70 */
  push32((uint32_t)(0x11927b70u));
  /* 119224a5 push 0x11927bd0 */
  push32((uint32_t)(0x11927bd0u));
  /* 119224aa push ebp */
  push32((uint32_t)(EBP));
  /* 119224ab push 0x11927c70 */
  push32((uint32_t)(0x11927c70u));
  /* 119224b0 push 0x11927b28 */
  push32((uint32_t)(0x11927b28u));
  /* 119224b5 push 0x11927ae8 */
  push32((uint32_t)(0x11927ae8u));
  /* 119224ba call 0x1192136a */
  push32(0x119224bfu); f_1192136a();
  /* 119224bf push 1 */
  push32((uint32_t)(0x1u));
  /* 119224c1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 119224c3 call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x119224c9u);
  /* 119224c9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119224cc:;
  /* 119224cc push 0xd */
  push32((uint32_t)(0xdu));
  /* 119224ce call esi */
  call_ind((uint32_t)(ESI), 0x119224d0u);
  /* 119224d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119224d2 pop ecx */
  ECX = (pop32());
  /* 119224d3 mov ebp, 0x11927b60 */
  EBP = (0x11927b60u);
  /* 119224d8 je 0x11922528 */
  if (C.zf) goto L_11922528;
  /* 119224da push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119224dc call esi */
  call_ind((uint32_t)(ESI), 0x119224deu);
  /* 119224de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119224e0 pop ecx */
  ECX = (pop32());
  /* 119224e1 jne 0x11922528 */
  if (!C.zf) goto L_11922528;
  /* 119224e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 119224e5 call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x119224ebu);
  /* 119224eb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119224ed pop ecx */
  ECX = (pop32());
  /* 119224ee je 0x11922528 */
  if (C.zf) goto L_11922528;
  /* 119224f0 push dword ptr [0x11927c20] */
  push32((uint32_t)(r32((uint32_t)(0x11927c20))));
  /* 119224f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119224f8 push 0x11927c70 */
  push32((uint32_t)(0x11927c70u));
  /* 119224fd push 0x11927c48 */
  push32((uint32_t)(0x11927c48u));
  /* 11922502 push 0x11927af8 */
  push32((uint32_t)(0x11927af8u));
  /* 11922507 push ebp */
  push32((uint32_t)(EBP));
  /* 11922508 call 0x1192124b */
  push32(0x1192250du); f_1192124b();
  /* 1192250d push 4 */
  push32((uint32_t)(0x4u));
  /* 1192250f pop eax */
  EAX = (pop32());
  /* 11922510 sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922516 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1192251c push eax */
  push32((uint32_t)(EAX));
  /* 1192251d push 2 */
  push32((uint32_t)(0x2u));
  /* 1192251f call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x11922525u);
  /* 11922525 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922528:;
  /* 11922528 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1192252a call esi */
  call_ind((uint32_t)(ESI), 0x1192252cu);
  /* 1192252c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192252e pop ecx */
  ECX = (pop32());
  /* 1192252f je 0x1192259a */
  if (C.zf) goto L_1192259a;
  /* 11922531 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922533 call esi */
  call_ind((uint32_t)(ESI), 0x11922535u);
  /* 11922535 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922537 pop ecx */
  ECX = (pop32());
  /* 11922538 jne 0x1192259a */
  if (!C.zf) goto L_1192259a;
  /* 1192253a push 2 */
  push32((uint32_t)(0x2u));
  /* 1192253c call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x11922542u);
  /* 11922542 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922544 pop ecx */
  ECX = (pop32());
  /* 11922545 je 0x1192259a */
  if (C.zf) goto L_1192259a;
  /* 11922547 mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 1192254c push 3 */
  push32((uint32_t)(0x3u));
  /* 1192254e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1192254f pop ecx */
  ECX = (pop32());
  /* 11922550 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11922552 push eax */
  push32((uint32_t)(EAX));
  /* 11922553 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11922555 push edi */
  push32((uint32_t)(EDI));
  /* 11922556 push 0x11927cc0 */
  push32((uint32_t)(0x11927cc0u));
  /* 1192255b push 0x11927c18 */
  push32((uint32_t)(0x11927c18u));
  /* 11922560 push ebp */
  push32((uint32_t)(EBP));
  /* 11922561 call 0x1192124b */
  push32(0x11922566u); f_1192124b();
  /* 11922566 push dword ptr [0x11927c20] */
  push32((uint32_t)(r32((uint32_t)(0x11927c20))));
  /* 1192256c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1192256e push edi */
  push32((uint32_t)(EDI));
  /* 1192256f push 0x11927a90 */
  push32((uint32_t)(0x11927a90u));
  /* 11922574 push 0x11927b00 */
  push32((uint32_t)(0x11927b00u));
  /* 11922579 push ebp */
  push32((uint32_t)(EBP));
  /* 1192257a call 0x1192124b */
  push32(0x1192257fu); f_1192124b();
  /* 1192257f push 4 */
  push32((uint32_t)(0x4u));
  /* 11922581 pop eax */
  EAX = (pop32());
  /* 11922582 sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922588 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1192258e push eax */
  push32((uint32_t)(EAX));
  /* 1192258f push 2 */
  push32((uint32_t)(0x2u));
  /* 11922591 call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x11922597u);
  /* 11922597 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192259a:;
  /* 1192259a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1192259c call esi */
  call_ind((uint32_t)(ESI), 0x1192259eu);
  /* 1192259e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119225a0 pop ecx */
  ECX = (pop32());
  /* 119225a1 je 0x1192260b */
  if (C.zf) goto L_1192260b;
  /* 119225a3 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119225a5 call esi */
  call_ind((uint32_t)(ESI), 0x119225a7u);
  /* 119225a7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119225a9 pop ecx */
  ECX = (pop32());
  /* 119225aa jne 0x1192260b */
  if (!C.zf) goto L_1192260b;
  /* 119225ac push 2 */
  push32((uint32_t)(0x2u));
  /* 119225ae call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x119225b4u);
  /* 119225b4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119225b6 pop ecx */
  ECX = (pop32());
  /* 119225b7 je 0x1192260b */
  if (C.zf) goto L_1192260b;
  /* 119225b9 push dword ptr [0x11927c20] */
  push32((uint32_t)(r32((uint32_t)(0x11927c20))));
  /* 119225bf mov edi, 0x11927c80 */
  EDI = (0x11927c80u);
  /* 119225c4 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119225c6 push edi */
  push32((uint32_t)(EDI));
  /* 119225c7 push 0x11927ba0 */
  push32((uint32_t)(0x11927ba0u));
  /* 119225cc push 0x11927af0 */
  push32((uint32_t)(0x11927af0u));
  /* 119225d1 push ebp */
  push32((uint32_t)(EBP));
  /* 119225d2 call 0x1192124b */
  push32(0x119225d7u); f_1192124b();
  /* 119225d7 push dword ptr [0x11927c20] */
  push32((uint32_t)(r32((uint32_t)(0x11927c20))));
  /* 119225dd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 119225df push edi */
  push32((uint32_t)(EDI));
  /* 119225e0 push 0x11927ae0 */
  push32((uint32_t)(0x11927ae0u));
  /* 119225e5 push 0x11927af0 */
  push32((uint32_t)(0x11927af0u));
  /* 119225ea push ebp */
  push32((uint32_t)(EBP));
  /* 119225eb call 0x1192124b */
  push32(0x119225f0u); f_1192124b();
  /* 119225f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119225f2 pop eax */
  EAX = (pop32());
  /* 119225f3 sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119225f9 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119225ff push eax */
  push32((uint32_t)(EAX));
  /* 11922600 push 2 */
  push32((uint32_t)(0x2u));
  /* 11922602 call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x11922608u);
  /* 11922608 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1192260b:;
  /* 1192260b push 0xc */
  push32((uint32_t)(0xcu));
  /* 1192260d call esi */
  call_ind((uint32_t)(ESI), 0x1192260fu);
  /* 1192260f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922611 pop ecx */
  ECX = (pop32());
  /* 11922612 je 0x11922667 */
  if (C.zf) goto L_11922667;
  /* 11922614 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922616 call esi */
  call_ind((uint32_t)(ESI), 0x11922618u);
  /* 11922618 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192261a pop ecx */
  ECX = (pop32());
  /* 1192261b jne 0x11922667 */
  if (!C.zf) goto L_11922667;
  /* 1192261d push 2 */
  push32((uint32_t)(0x2u));
  /* 1192261f call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x11922625u);
  /* 11922625 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922627 pop ecx */
  ECX = (pop32());
  /* 11922628 je 0x11922667 */
  if (C.zf) goto L_11922667;
  /* 1192262a mov eax, dword ptr [0x11927c20] */
  EAX = (r32((uint32_t)(0x11927c20)));
  /* 1192262f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11922630 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922632 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11922634 push eax */
  push32((uint32_t)(EAX));
  /* 11922635 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11922637 push 0x11927c88 */
  push32((uint32_t)(0x11927c88u));
  /* 1192263c push 0x11927c58 */
  push32((uint32_t)(0x11927c58u));
  /* 11922641 push 0x11927c10 */
  push32((uint32_t)(0x11927c10u));
  /* 11922646 push ebp */
  push32((uint32_t)(EBP));
  /* 11922647 call 0x1192124b */
  push32(0x1192264cu); f_1192124b();
  /* 1192264c push 4 */
  push32((uint32_t)(0x4u));
  /* 1192264e pop eax */
  EAX = (pop32());
  /* 1192264f sub eax, dword ptr [0x11927a98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927a98))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922655 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1192265b push eax */
  push32((uint32_t)(EAX));
  /* 1192265c push 2 */
  push32((uint32_t)(0x2u));
  /* 1192265e call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x11922664u);
  /* 11922664 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922667:;
  /* 11922667 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11922669 call esi */
  call_ind((uint32_t)(ESI), 0x1192266bu);
  /* 1192266b mov edi, dword ptr [0x119260d8] */
  EDI = (r32((uint32_t)(0x119260d8)));
  /* 11922671 pop ecx */
  ECX = (pop32());
  /* 11922672 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922674 jne 0x119226a3 */
  if (!C.zf) goto L_119226a3;
  /* 11922676 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11922678 call esi */
  call_ind((uint32_t)(ESI), 0x1192267au);
  /* 1192267a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192267c pop ecx */
  ECX = (pop32());
  /* 1192267d je 0x119226a3 */
  if (C.zf) goto L_119226a3;
  /* 1192267f push 1 */
  push32((uint32_t)(0x1u));
  /* 11922681 call edi */
  call_ind((uint32_t)(EDI), 0x11922683u);
  /* 11922683 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922685 pop ecx */
  ECX = (pop32());
  /* 11922686 je 0x119226a3 */
  if (C.zf) goto L_119226a3;
  /* 11922688 mov ebp, dword ptr [0x11926124] */
  EBP = (r32((uint32_t)(0x11926124)));
  /* 1192268e push 0x119272c4 */
  push32((uint32_t)(0x119272c4u));
  /* 11922693 call ebp */
  call_ind((uint32_t)(EBP), 0x11922695u);
  /* 11922695 push ebx */
  push32((uint32_t)(EBX));
  /* 11922696 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11922698 call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x1192269eu);
  /* 1192269e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119226a1 jmp 0x119226a9 */
  goto L_119226a9;
L_119226a3:;
  /* 119226a3 mov ebp, dword ptr [0x11926124] */
  EBP = (r32((uint32_t)(0x11926124)));
L_119226a9:;
  /* 119226a9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119226ab call esi */
  call_ind((uint32_t)(ESI), 0x119226adu);
  /* 119226ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226af pop ecx */
  ECX = (pop32());
  /* 119226b0 jne 0x119226d7 */
  if (!C.zf) goto L_119226d7;
  /* 119226b2 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 119226b4 call esi */
  call_ind((uint32_t)(ESI), 0x119226b6u);
  /* 119226b6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226b8 pop ecx */
  ECX = (pop32());
  /* 119226b9 je 0x119226d7 */
  if (C.zf) goto L_119226d7;
  /* 119226bb push 2 */
  push32((uint32_t)(0x2u));
  /* 119226bd call edi */
  call_ind((uint32_t)(EDI), 0x119226bfu);
  /* 119226bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226c1 pop ecx */
  ECX = (pop32());
  /* 119226c2 je 0x119226d7 */
  if (C.zf) goto L_119226d7;
  /* 119226c4 push 0x119272bc */
  push32((uint32_t)(0x119272bcu));
  /* 119226c9 call ebp */
  call_ind((uint32_t)(EBP), 0x119226cbu);
  /* 119226cb push ebx */
  push32((uint32_t)(EBX));
  /* 119226cc push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 119226ce call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x119226d4u);
  /* 119226d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119226d7:;
  /* 119226d7 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 119226d9 call esi */
  call_ind((uint32_t)(ESI), 0x119226dbu);
  /* 119226db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226dd pop ecx */
  ECX = (pop32());
  /* 119226de jne 0x11922705 */
  if (!C.zf) goto L_11922705;
  /* 119226e0 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 119226e2 call esi */
  call_ind((uint32_t)(ESI), 0x119226e4u);
  /* 119226e4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226e6 pop ecx */
  ECX = (pop32());
  /* 119226e7 je 0x11922705 */
  if (C.zf) goto L_11922705;
  /* 119226e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 119226eb call edi */
  call_ind((uint32_t)(EDI), 0x119226edu);
  /* 119226ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119226ef pop ecx */
  ECX = (pop32());
  /* 119226f0 je 0x11922705 */
  if (C.zf) goto L_11922705;
  /* 119226f2 push 0x119272b4 */
  push32((uint32_t)(0x119272b4u));
  /* 119226f7 call ebp */
  call_ind((uint32_t)(EBP), 0x119226f9u);
  /* 119226f9 push ebx */
  push32((uint32_t)(EBX));
  /* 119226fa push 0x5d */
  push32((uint32_t)(0x5du));
  /* 119226fc call dword ptr [0x11926140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926140))), 0x11922702u);
  /* 11922702 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11922705:;
  /* 11922705 push ebx */
  push32((uint32_t)(EBX));
  /* 11922706 call edi */
  call_ind((uint32_t)(EDI), 0x11922708u);
  /* 11922708 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192270a pop ecx */
  ECX = (pop32());
  /* 1192270b je 0x1192274b */
  if (C.zf) goto L_1192274b;
  /* 1192270d push 0x11927b10 */
  push32((uint32_t)(0x11927b10u));
  /* 11922712 call dword ptr [0x11926138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926138))), 0x11922718u);
  /* 11922718 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192271a pop ecx */
  ECX = (pop32());
  /* 1192271b jne 0x1192274b */
  if (!C.zf) goto L_1192274b;
  /* 1192271d push 1 */
  push32((uint32_t)(0x1u));
  /* 1192271f pop edi */
  EDI = (pop32());
L_11922720:;
  /* 11922720 push edi */
  push32((uint32_t)(EDI));
  /* 11922721 call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x11922727u);
  /* 11922727 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922729 pop ecx */
  ECX = (pop32());
  /* 1192272a jne 0x11922737 */
  if (!C.zf) goto L_11922737;
  /* 1192272c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192272e push edi */
  push32((uint32_t)(EDI));
  /* 1192272f call dword ptr [0x119260cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260cc))), 0x11922735u);
  /* 11922735 pop ecx */
  ECX = (pop32());
  /* 11922736 pop ecx */
  ECX = (pop32());
L_11922737:;
  /* 11922737 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11922738 cmp edi, 0x1e */
  { uint32_t _a=(EDI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192273b jl 0x11922720 */
  if ((C.sf!=C.of)) goto L_11922720;
  /* 1192273d push 0x119272ac */
  push32((uint32_t)(0x119272acu));
  /* 11922742 call ebp */
  call_ind((uint32_t)(EBP), 0x11922744u);
  /* 11922744 pop ecx */
  ECX = (pop32());
  /* 11922745 call dword ptr [0x119260dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260dc))), 0x1192274bu);
L_1192274b:;
  /* 1192274b push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1192274d call esi */
  call_ind((uint32_t)(ESI), 0x1192274fu);
  /* 1192274f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922751 pop ecx */
  ECX = (pop32());
  /* 11922752 jne 0x11922791 */
  if (!C.zf) goto L_11922791;
  /* 11922754 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11922756 call esi */
  call_ind((uint32_t)(ESI), 0x11922758u);
  /* 11922758 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192275a pop ecx */
  ECX = (pop32());
  /* 1192275b jne 0x11922791 */
  if (!C.zf) goto L_11922791;
  /* 1192275d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1192275f call esi */
  call_ind((uint32_t)(ESI), 0x11922761u);
  /* 11922761 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922763 pop ecx */
  ECX = (pop32());
  /* 11922764 jne 0x11922791 */
  if (!C.zf) goto L_11922791;
  /* 11922766 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922768 pop esi */
  ESI = (pop32());
L_11922769:;
  /* 11922769 push esi */
  push32((uint32_t)(ESI));
  /* 1192276a call dword ptr [0x119260d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d0))), 0x11922770u);
  /* 11922770 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11922772 pop ecx */
  ECX = (pop32());
  /* 11922773 jne 0x1192277d */
  if (!C.zf) goto L_1192277d;
  /* 11922775 push esi */
  push32((uint32_t)(ESI));
  /* 11922776 call dword ptr [0x119260d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260d4))), 0x1192277cu);
  /* 1192277c pop ecx */
  ECX = (pop32());
L_1192277d:;
  /* 1192277d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1192277e cmp esi, 0x1e */
  { uint32_t _a=(ESI),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922781 jl 0x11922769 */
  if ((C.sf!=C.of)) goto L_11922769;
  /* 11922783 push 0x119272a4 */
  push32((uint32_t)(0x119272a4u));
  /* 11922788 call ebp */
  call_ind((uint32_t)(EBP), 0x1192278au);
  /* 1192278a pop ecx */
  ECX = (pop32());
  /* 1192278b call dword ptr [0x119260e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260e4))), 0x11922791u);
L_11922791:;
  /* 11922791 pop edi */
  EDI = (pop32());
  /* 11922792 pop esi */
  ESI = (pop32());
  /* 11922793 pop ebp */
  EBP = (pop32());
  /* 11922794 pop ebx */
  EBX = (pop32());
  /* 11922795 pop ecx */
  ECX = (pop32());
  /* 11922796 ret  */
  ESPCHK(0x11921a0au, _esp0);
  ESP += 4; return;
}

/* FUN_10002797 @ 0x11922797 (217 bytes, 57 insns) */
void f_11922797(void) {
  FTRACE(0x11922797u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922797 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1192279b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192279e jne 0x1192282c */
  if (!C.zf) goto L_1192282c;
  /* 119227a4 call dword ptr [0x11926004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926004))), 0x119227aau);
  /* 119227aa push 1 */
  push32((uint32_t)(0x1u));
  /* 119227ac mov dword ptr [0x11927ce4], eax */
  w32((uint32_t)(0x11927ce4), (EAX));
  /* 119227b1 call 0x119231cb */
  push32(0x119227b6u); f_119231cb();
  /* 119227b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119227b8 pop ecx */
  ECX = (pop32());
  /* 119227b9 je 0x119227f7 */
  if (C.zf) goto L_119227f7;
  /* 119227bb mov eax, dword ptr [0x11927ce4] */
  EAX = (r32((uint32_t)(0x11927ce4)));
  /* 119227c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119227c2 mov cl, byte ptr [0x11927ce5] */
  CL = (r8((uint32_t)(0x11927ce5)));
  /* 119227c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 119227cd shr dword ptr [0x11927ce4], 0x10 */
  w32((uint32_t)(0x11927ce4), (sh_shr((uint32_t)(r32((uint32_t)(0x11927ce4))), (0x10u)&0x1f, 32)));
  /* 119227d4 mov dword ptr [0x11927cec], eax */
  w32((uint32_t)(0x11927cec), (EAX));
  /* 119227d9 mov dword ptr [0x11927cf0], ecx */
  w32((uint32_t)(0x11927cf0), (ECX));
  /* 119227df shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119227e2 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119227e4 mov dword ptr [0x11927ce8], eax */
  w32((uint32_t)(0x11927ce8), (EAX));
  /* 119227e9 call 0x11922a5e */
  push32(0x119227eeu); f_11922a5e();
  /* 119227ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119227f0 jne 0x119227fb */
  if (!C.zf) goto L_119227fb;
  /* 119227f2 call 0x11923207 */
  push32(0x119227f7u); f_11923207();
L_119227f7:;
  /* 119227f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119227f9 jmp 0x1192286d */
  goto L_1192286d;
L_119227fb:;
  /* 119227fb call dword ptr [0x11926000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926000))), 0x11922801u);
  /* 11922801 mov dword ptr [0x11928238], eax */
  w32((uint32_t)(0x11928238), (EAX));
  /* 11922806 call 0x11923099 */
  push32(0x1192280bu); f_11923099();
  /* 1192280b mov dword ptr [0x11927cd0], eax */
  w32((uint32_t)(0x11927cd0), (EAX));
  /* 11922810 call 0x11922b83 */
  push32(0x11922815u); f_11922b83();
  /* 11922815 call 0x11922e4c */
  push32(0x1192281au); f_11922e4c();
  /* 1192281a call 0x11922d93 */
  push32(0x1192281fu); f_11922d93();
  /* 1192281f call 0x11922940 */
  push32(0x11922824u); f_11922940();
  /* 11922824 inc dword ptr [0x11927ccc] */
  { uint32_t _r=(r32((uint32_t)(0x11927ccc)))+1; w32((uint32_t)(0x11927ccc), (_r)); fl_inc(_r,32); }
  /* 1192282a jmp 0x1192286a */
  goto L_1192286a;
L_1192282c:;
  /* 1192282c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1192282e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922830 jne 0x1192285e */
  if (!C.zf) goto L_1192285e;
  /* 11922832 cmp dword ptr [0x11927ccc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11927ccc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922838 jle 0x119227f7 */
  if ((C.zf||C.sf!=C.of)) goto L_119227f7;
  /* 1192283a dec dword ptr [0x11927ccc] */
  { uint32_t _r=(r32((uint32_t)(0x11927ccc)))-1; w32((uint32_t)(0x11927ccc), (_r)); fl_dec(_r,32); }
  /* 11922840 cmp dword ptr [0x11927d1c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11927d1c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922846 jne 0x1192284d */
  if (!C.zf) goto L_1192284d;
  /* 11922848 call 0x1192297e */
  push32(0x1192284du); f_1192297e();
L_1192284d:;
  /* 1192284d call 0x11922d3f */
  push32(0x11922852u); f_11922d3f();
  /* 11922852 call 0x11922ab2 */
  push32(0x11922857u); f_11922ab2();
  /* 11922857 call 0x11923207 */
  push32(0x1192285cu); f_11923207();
  /* 1192285c jmp 0x1192286a */
  goto L_1192286a;
L_1192285e:;
  /* 1192285e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922861 jne 0x1192286a */
  if (!C.zf) goto L_1192286a;
  /* 11922863 push ecx */
  push32((uint32_t)(ECX));
  /* 11922864 call 0x11922ae3 */
  push32(0x11922869u); f_11922ae3();
  /* 11922869 pop ecx */
  ECX = (pop32());
L_1192286a:;
  /* 1192286a push 1 */
  push32((uint32_t)(0x1u));
  /* 1192286c pop eax */
  EAX = (pop32());
L_1192286d:;
  /* 1192286d ret 0xc */
  ESPCHK(0x11922797u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11922870 (157 bytes, 73 insns) */
void f_11922870(void) {
  FTRACE(0x11922870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922870 push ebp */
  push32((uint32_t)(EBP));
  /* 11922871 mov ebp, esp */
  EBP = (ESP);
  /* 11922873 push ebx */
  push32((uint32_t)(EBX));
  /* 11922874 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11922877 push esi */
  push32((uint32_t)(ESI));
  /* 11922878 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1192287b push edi */
  push32((uint32_t)(EDI));
  /* 1192287c mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1192287f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922881 jne 0x1192288c */
  if (!C.zf) goto L_1192288c;
  /* 11922883 cmp dword ptr [0x11927ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11927ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192288a jmp 0x119228b2 */
  goto L_119228b2;
L_1192288c:;
  /* 1192288c cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192288f je 0x11922896 */
  if (C.zf) goto L_11922896;
  /* 11922891 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922894 jne 0x119228b8 */
  if (!C.zf) goto L_119228b8;
L_11922896:;
  /* 11922896 mov eax, dword ptr [0x1192823c] */
  EAX = (r32((uint32_t)(0x1192823c)));
  /* 1192289b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192289d je 0x119228a8 */
  if (C.zf) goto L_119228a8;
  /* 1192289f push edi */
  push32((uint32_t)(EDI));
  /* 119228a0 push esi */
  push32((uint32_t)(ESI));
  /* 119228a1 push ebx */
  push32((uint32_t)(EBX));
  /* 119228a2 call eax */
  call_ind((uint32_t)(EAX), 0x119228a4u);
  /* 119228a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119228a6 je 0x119228b4 */
  if (C.zf) goto L_119228b4;
L_119228a8:;
  /* 119228a8 push edi */
  push32((uint32_t)(EDI));
  /* 119228a9 push esi */
  push32((uint32_t)(ESI));
  /* 119228aa push ebx */
  push32((uint32_t)(EBX));
  /* 119228ab call 0x11922797 */
  push32(0x119228b0u); f_11922797();
  /* 119228b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_119228b2:;
  /* 119228b2 jne 0x119228b8 */
  if (!C.zf) goto L_119228b8;
L_119228b4:;
  /* 119228b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119228b6 jmp 0x11922906 */
  goto L_11922906;
L_119228b8:;
  /* 119228b8 push edi */
  push32((uint32_t)(EDI));
  /* 119228b9 push esi */
  push32((uint32_t)(ESI));
  /* 119228ba push ebx */
  push32((uint32_t)(EBX));
  /* 119228bb call 0x11921000 */
  push32(0x119228c0u); f_11921000();
  /* 119228c0 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119228c3 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 119228c6 jne 0x119228d4 */
  if (!C.zf) goto L_119228d4;
  /* 119228c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119228ca jne 0x11922903 */
  if (!C.zf) goto L_11922903;
  /* 119228cc push edi */
  push32((uint32_t)(EDI));
  /* 119228cd push eax */
  push32((uint32_t)(EAX));
  /* 119228ce push ebx */
  push32((uint32_t)(EBX));
  /* 119228cf call 0x11922797 */
  push32(0x119228d4u); f_11922797();
L_119228d4:;
  /* 119228d4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119228d6 je 0x119228dd */
  if (C.zf) goto L_119228dd;
  /* 119228d8 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119228db jne 0x11922903 */
  if (!C.zf) goto L_11922903;
L_119228dd:;
  /* 119228dd push edi */
  push32((uint32_t)(EDI));
  /* 119228de push esi */
  push32((uint32_t)(ESI));
  /* 119228df push ebx */
  push32((uint32_t)(EBX));
  /* 119228e0 call 0x11922797 */
  push32(0x119228e5u); f_11922797();
  /* 119228e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119228e7 jne 0x119228ec */
  if (!C.zf) goto L_119228ec;
  /* 119228e9 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_119228ec:;
  /* 119228ec cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119228f0 je 0x11922903 */
  if (C.zf) goto L_11922903;
  /* 119228f2 mov eax, dword ptr [0x1192823c] */
  EAX = (r32((uint32_t)(0x1192823c)));
  /* 119228f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119228f9 je 0x11922903 */
  if (C.zf) goto L_11922903;
  /* 119228fb push edi */
  push32((uint32_t)(EDI));
  /* 119228fc push esi */
  push32((uint32_t)(ESI));
  /* 119228fd push ebx */
  push32((uint32_t)(EBX));
  /* 119228fe call eax */
  call_ind((uint32_t)(EAX), 0x11922900u);
  /* 11922900 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11922903:;
  /* 11922903 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11922906:;
  /* 11922906 pop edi */
  EDI = (pop32());
  /* 11922907 pop esi */
  ESI = (pop32());
  /* 11922908 pop ebx */
  EBX = (pop32());
  /* 11922909 pop ebp */
  EBP = (pop32());
  /* 1192290a ret 0xc */
  ESPCHK(0x11922870u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x1192290d (48 bytes, 15 insns) */
void f_1192290d(void) {
  FTRACE(0x1192290du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192290d mov eax, dword ptr [0x11927cd8] */
  EAX = (r32((uint32_t)(0x11927cd8)));
  /* 11922912 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922915 je 0x11922924 */
  if (C.zf) goto L_11922924;
  /* 11922917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922919 jne 0x11922929 */
  if (!C.zf) goto L_11922929;
  /* 1192291b cmp dword ptr [0x11927cdc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11927cdc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922922 jne 0x11922929 */
  if (!C.zf) goto L_11922929;
L_11922924:;
  /* 11922924 call 0x1192327c */
  push32(0x11922929u); f_1192327c();
L_11922929:;
  /* 11922929 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1192292d call 0x119232b5 */
  push32(0x11922932u); f_119232b5();
  /* 11922932 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11922937 call dword ptr [0x11927754] */
  call_ind((uint32_t)(r32((uint32_t)(0x11927754))), 0x1192293du);
  /* 1192293d pop ecx */
  ECX = (pop32());
  /* 1192293e pop ecx */
  ECX = (pop32());
  /* 1192293f ret  */
  ESPCHK(0x1192290du, _esp0);
  ESP += 4; return;
}

/* FUN_10002940 @ 0x11922940 (45 bytes, 12 insns) */
void f_11922940(void) {
  FTRACE(0x11922940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922940 mov eax, dword ptr [0x11928234] */
  EAX = (r32((uint32_t)(0x11928234)));
  /* 11922945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922947 je 0x1192294b */
  if (C.zf) goto L_1192294b;
  /* 11922949 call eax */
  call_ind((uint32_t)(EAX), 0x1192294bu);
L_1192294b:;
  /* 1192294b push 0x11927010 */
  push32((uint32_t)(0x11927010u));
  /* 11922950 push 0x11927008 */
  push32((uint32_t)(0x11927008u));
  /* 11922955 call 0x11922a44 */
  push32(0x1192295au); f_11922a44();
  /* 1192295a push 0x11927004 */
  push32((uint32_t)(0x11927004u));
  /* 1192295f push 0x11927000 */
  push32((uint32_t)(0x11927000u));
  /* 11922964 call 0x11922a44 */
  push32(0x11922969u); f_11922a44();
  /* 11922969 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192296c ret  */
  ESPCHK(0x11922940u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x1192296d (17 bytes, 6 insns) */
void f_1192296d(void) {
  FTRACE(0x1192296du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192296d push 0 */
  push32((uint32_t)(0x0u));
  /* 1192296f push 1 */
  push32((uint32_t)(0x1u));
  /* 11922971 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11922975 call 0x1192298d */
  push32(0x1192297au); f_1192298d();
  /* 1192297a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192297d ret  */
  ESPCHK(0x1192296du, _esp0);
  ESP += 4; return;
}

/* FUN_1000297e @ 0x1192297e (15 bytes, 6 insns) */
void f_1192297e(void) {
  FTRACE(0x1192297eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192297e push 1 */
  push32((uint32_t)(0x1u));
  /* 11922980 push 0 */
  push32((uint32_t)(0x0u));
  /* 11922982 push 0 */
  push32((uint32_t)(0x0u));
  /* 11922984 call 0x1192298d */
  push32(0x11922989u); f_1192298d();
  /* 11922989 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192298c ret  */
  ESPCHK(0x1192297eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000298d @ 0x1192298d (163 bytes, 53 insns) */
void f_1192298d(void) {
  FTRACE(0x1192298du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192298d push edi */
  push32((uint32_t)(EDI));
  /* 1192298e call 0x11922a32 */
  push32(0x11922993u); f_11922a32();
  /* 11922993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922995 pop edi */
  EDI = (pop32());
  /* 11922996 cmp dword ptr [0x11927d20], edi */
  { uint32_t _a=(r32((uint32_t)(0x11927d20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192299c jne 0x119229af */
  if (!C.zf) goto L_119229af;
  /* 1192299e push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119229a2 call dword ptr [0x119260a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260a8))), 0x119229a8u);
  /* 119229a8 push eax */
  push32((uint32_t)(EAX));
  /* 119229a9 call dword ptr [0x1192609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192609c))), 0x119229afu);
L_119229af:;
  /* 119229af cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119229b4 push ebx */
  push32((uint32_t)(EBX));
  /* 119229b5 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 119229b9 mov dword ptr [0x11927d1c], edi */
  w32((uint32_t)(0x11927d1c), (EDI));
  /* 119229bf mov byte ptr [0x11927d18], bl */
  w8((uint32_t)(0x11927d18), (BL));
  /* 119229c5 jne 0x11922a03 */
  if (!C.zf) goto L_11922a03;
  /* 119229c7 mov eax, dword ptr [0x11928230] */
  EAX = (r32((uint32_t)(0x11928230)));
  /* 119229cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119229ce je 0x119229f2 */
  if (C.zf) goto L_119229f2;
  /* 119229d0 mov ecx, dword ptr [0x1192822c] */
  ECX = (r32((uint32_t)(0x1192822c)));
  /* 119229d6 push esi */
  push32((uint32_t)(ESI));
  /* 119229d7 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 119229da cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119229dc jb 0x119229f1 */
  if (C.cf) goto L_119229f1;
L_119229de:;
  /* 119229de mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119229e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119229e2 je 0x119229e6 */
  if (C.zf) goto L_119229e6;
  /* 119229e4 call eax */
  call_ind((uint32_t)(EAX), 0x119229e6u);
L_119229e6:;
  /* 119229e6 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119229e9 cmp esi, dword ptr [0x11928230] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11928230))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119229ef jae 0x119229de */
  if (!C.cf) goto L_119229de;
L_119229f1:;
  /* 119229f1 pop esi */
  ESI = (pop32());
L_119229f2:;
  /* 119229f2 push 0x11927018 */
  push32((uint32_t)(0x11927018u));
  /* 119229f7 push 0x11927014 */
  push32((uint32_t)(0x11927014u));
  /* 119229fc call 0x11922a44 */
  push32(0x11922a01u); f_11922a44();
  /* 11922a01 pop ecx */
  ECX = (pop32());
  /* 11922a02 pop ecx */
  ECX = (pop32());
L_11922a03:;
  /* 11922a03 push 0x11927020 */
  push32((uint32_t)(0x11927020u));
  /* 11922a08 push 0x1192701c */
  push32((uint32_t)(0x1192701cu));
  /* 11922a0d call 0x11922a44 */
  push32(0x11922a12u); f_11922a44();
  /* 11922a12 pop ecx */
  ECX = (pop32());
  /* 11922a13 pop ecx */
  ECX = (pop32());
  /* 11922a14 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11922a16 pop ebx */
  EBX = (pop32());
  /* 11922a17 je 0x11922a20 */
  if (C.zf) goto L_11922a20;
  /* 11922a19 call 0x11922a3b */
  push32(0x11922a1eu); f_11922a3b();
  /* 11922a1e pop edi */
  EDI = (pop32());
  /* 11922a1f ret  */
  ESPCHK(0x1192298du, _esp0);
  ESP += 4; return;
L_11922a20:;
  /* 11922a20 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11922a24 mov dword ptr [0x11927d20], edi */
  w32((uint32_t)(0x11927d20), (EDI));
  /* 11922a2a call dword ptr [0x119260a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260a0))), 0x11922a30u);
  /* 11922a30 pop edi */
  EDI = (pop32());
  /* 11922a31 ret  */
  ESPCHK(0x1192298du, _esp0);
  ESP += 4; return;
}

/* FUN_10002a32 @ 0x11922a32 (9 bytes, 4 insns) */
void f_11922a32(void) {
  FTRACE(0x11922a32u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922a32 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11922a34 call 0x1192349d */
  push32(0x11922a39u); f_1192349d();
  /* 11922a39 pop ecx */
  ECX = (pop32());
  /* 11922a3a ret  */
  ESPCHK(0x11922a32u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a3b @ 0x11922a3b (9 bytes, 4 insns) */
void f_11922a3b(void) {
  FTRACE(0x11922a3bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922a3b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11922a3d call 0x119234fe */
  push32(0x11922a42u); f_119234fe();
  /* 11922a42 pop ecx */
  ECX = (pop32());
  /* 11922a43 ret  */
  ESPCHK(0x11922a3bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a44 @ 0x11922a44 (26 bytes, 12 insns) */
void f_11922a44(void) {
  FTRACE(0x11922a44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922a44 push esi */
  push32((uint32_t)(ESI));
  /* 11922a45 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11922a49:;
  /* 11922a49 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922a4d jae 0x11922a5c */
  if (!C.cf) goto L_11922a5c;
  /* 11922a4f mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11922a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922a53 je 0x11922a57 */
  if (C.zf) goto L_11922a57;
  /* 11922a55 call eax */
  call_ind((uint32_t)(EAX), 0x11922a57u);
L_11922a57:;
  /* 11922a57 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922a5a jmp 0x11922a49 */
  goto L_11922a49;
L_11922a5c:;
  /* 11922a5c pop esi */
  ESI = (pop32());
  /* 11922a5d ret  */
  ESPCHK(0x11922a44u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a5e @ 0x11922a5e (84 bytes, 32 insns) */
void f_11922a5e(void) {
  FTRACE(0x11922a5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922a5e push esi */
  push32((uint32_t)(ESI));
  /* 11922a5f call 0x11923408 */
  push32(0x11922a64u); f_11923408();
  /* 11922a64 call dword ptr [0x119260a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119260a4))), 0x11922a6au);
  /* 11922a6a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922a6d mov dword ptr [0x11927758], eax */
  w32((uint32_t)(0x11927758), (EAX));
  /* 11922a72 je 0x11922aae */
  if (C.zf) goto L_11922aae;
  /* 11922a74 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11922a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922a78 call 0x11923513 */
  push32(0x11922a7du); f_11923513();
  /* 11922a7d mov esi, eax */
  ESI = (EAX);
  /* 11922a7f pop ecx */
  ECX = (pop32());
  /* 11922a80 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922a82 pop ecx */
  ECX = (pop32());
  /* 11922a83 je 0x11922aae */
  if (C.zf) goto L_11922aae;
  /* 11922a85 push esi */
  push32((uint32_t)(ESI));
  /* 11922a86 push dword ptr [0x11927758] */
  push32((uint32_t)(r32((uint32_t)(0x11927758))));
  /* 11922a8c call dword ptr [0x11926094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926094))), 0x11922a92u);
  /* 11922a92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922a94 je 0x11922aae */
  if (C.zf) goto L_11922aae;
  /* 11922a96 push esi */
  push32((uint32_t)(ESI));
  /* 11922a97 call 0x11922ad0 */
  push32(0x11922a9cu); f_11922ad0();
  /* 11922a9c pop ecx */
  ECX = (pop32());
  /* 11922a9d call dword ptr [0x11926098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926098))), 0x11922aa3u);
  /* 11922aa3 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11922aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11922aa9 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11922aab pop eax */
  EAX = (pop32());
  /* 11922aac pop esi */
  ESI = (pop32());
  /* 11922aad ret  */
  ESPCHK(0x11922a5eu, _esp0);
  ESP += 4; return;
L_11922aae:;
  /* 11922aae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11922ab0 pop esi */
  ESI = (pop32());
  /* 11922ab1 ret  */
  ESPCHK(0x11922a5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab2 @ 0x11922ab2 (30 bytes, 8 insns) */
void f_11922ab2(void) {
  FTRACE(0x11922ab2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922ab2 call 0x11923431 */
  push32(0x11922ab7u); f_11923431();
  /* 11922ab7 mov eax, dword ptr [0x11927758] */
  EAX = (r32((uint32_t)(0x11927758)));
  /* 11922abc cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922abf je 0x11922acf */
  if (C.zf) goto L_11922acf;
  /* 11922ac1 push eax */
  push32((uint32_t)(EAX));
  /* 11922ac2 call dword ptr [0x1192608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192608c))), 0x11922ac8u);
  /* 11922ac8 or dword ptr [0x11927758], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11927758)))|(0xffffffffu); w32((uint32_t)(0x11927758), (_r)); fl_logic(_r,32); }
L_11922acf:;
  /* 11922acf ret  */
  ESPCHK(0x11922ab2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad0 @ 0x11922ad0 (19 bytes, 4 insns) */
void f_11922ad0(void) {
  FTRACE(0x11922ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922ad0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11922ad4 mov dword ptr [eax + 0x50], 0x119278d8 */
  w32((uint32_t)(EAX + 0x50), (0x119278d8u));
  /* 11922adb mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11922ae2 ret  */
  ESPCHK(0x11922ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ae3 @ 0x11922ae3 (160 bytes, 62 insns) */
void f_11922ae3(void) {
  FTRACE(0x11922ae3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922ae3 mov eax, dword ptr [0x11927758] */
  EAX = (r32((uint32_t)(0x11927758)));
  /* 11922ae8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922aeb je 0x11922b82 */
  if (C.zf) goto L_11922b82;
  /* 11922af1 push esi */
  push32((uint32_t)(ESI));
  /* 11922af2 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11922af6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922af8 jne 0x11922b07 */
  if (!C.zf) goto L_11922b07;
  /* 11922afa push eax */
  push32((uint32_t)(EAX));
  /* 11922afb call dword ptr [0x11926090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926090))), 0x11922b01u);
  /* 11922b01 mov esi, eax */
  ESI = (EAX);
  /* 11922b03 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922b05 je 0x11922b73 */
  if (C.zf) goto L_11922b73;
L_11922b07:;
  /* 11922b07 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11922b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b0c je 0x11922b15 */
  if (C.zf) goto L_11922b15;
  /* 11922b0e push eax */
  push32((uint32_t)(EAX));
  /* 11922b0f call 0x119235a0 */
  push32(0x11922b14u); f_119235a0();
  /* 11922b14 pop ecx */
  ECX = (pop32());
L_11922b15:;
  /* 11922b15 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11922b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b1a je 0x11922b23 */
  if (C.zf) goto L_11922b23;
  /* 11922b1c push eax */
  push32((uint32_t)(EAX));
  /* 11922b1d call 0x119235a0 */
  push32(0x11922b22u); f_119235a0();
  /* 11922b22 pop ecx */
  ECX = (pop32());
L_11922b23:;
  /* 11922b23 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11922b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b28 je 0x11922b31 */
  if (C.zf) goto L_11922b31;
  /* 11922b2a push eax */
  push32((uint32_t)(EAX));
  /* 11922b2b call 0x119235a0 */
  push32(0x11922b30u); f_119235a0();
  /* 11922b30 pop ecx */
  ECX = (pop32());
L_11922b31:;
  /* 11922b31 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11922b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b36 je 0x11922b3f */
  if (C.zf) goto L_11922b3f;
  /* 11922b38 push eax */
  push32((uint32_t)(EAX));
  /* 11922b39 call 0x119235a0 */
  push32(0x11922b3eu); f_119235a0();
  /* 11922b3e pop ecx */
  ECX = (pop32());
L_11922b3f:;
  /* 11922b3f mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11922b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b44 je 0x11922b4d */
  if (C.zf) goto L_11922b4d;
  /* 11922b46 push eax */
  push32((uint32_t)(EAX));
  /* 11922b47 call 0x119235a0 */
  push32(0x11922b4cu); f_119235a0();
  /* 11922b4c pop ecx */
  ECX = (pop32());
L_11922b4d:;
  /* 11922b4d mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11922b50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922b52 je 0x11922b5b */
  if (C.zf) goto L_11922b5b;
  /* 11922b54 push eax */
  push32((uint32_t)(EAX));
  /* 11922b55 call 0x119235a0 */
  push32(0x11922b5au); f_119235a0();
  /* 11922b5a pop ecx */
  ECX = (pop32());
L_11922b5b:;
  /* 11922b5b mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11922b5e cmp eax, 0x119278d8 */
  { uint32_t _a=(EAX),_b=(0x119278d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922b63 je 0x11922b6c */
  if (C.zf) goto L_11922b6c;
  /* 11922b65 push eax */
  push32((uint32_t)(EAX));
  /* 11922b66 call 0x119235a0 */
  push32(0x11922b6bu); f_119235a0();
  /* 11922b6b pop ecx */
  ECX = (pop32());
L_11922b6c:;
  /* 11922b6c push esi */
  push32((uint32_t)(ESI));
  /* 11922b6d call 0x119235a0 */
  push32(0x11922b72u); f_119235a0();
  /* 11922b72 pop ecx */
  ECX = (pop32());
L_11922b73:;
  /* 11922b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11922b75 push dword ptr [0x11927758] */
  push32((uint32_t)(r32((uint32_t)(0x11927758))));
  /* 11922b7b call dword ptr [0x11926094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926094))), 0x11922b81u);
  /* 11922b81 pop esi */
  ESI = (pop32());
L_11922b82:;
  /* 11922b82 ret  */
  ESPCHK(0x11922ae3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b83 @ 0x11922b83 (444 bytes, 150 insns) */
void f_11922b83(void) {
  FTRACE(0x11922b83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922b83 push ebp */
  push32((uint32_t)(EBP));
  /* 11922b84 mov ebp, esp */
  EBP = (ESP);
  /* 11922b86 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922b89 push ebx */
  push32((uint32_t)(EBX));
  /* 11922b8a push esi */
  push32((uint32_t)(ESI));
  /* 11922b8b push edi */
  push32((uint32_t)(EDI));
  /* 11922b8c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11922b91 call 0x119235e8 */
  push32(0x11922b96u); f_119235e8();
  /* 11922b96 mov esi, eax */
  ESI = (EAX);
  /* 11922b98 pop ecx */
  ECX = (pop32());
  /* 11922b99 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922b9b jne 0x11922ba5 */
  if (!C.zf) goto L_11922ba5;
  /* 11922b9d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11922b9f call 0x1192290d */
  push32(0x11922ba4u); f_1192290d();
  /* 11922ba4 pop ecx */
  ECX = (pop32());
L_11922ba5:;
  /* 11922ba5 mov dword ptr [0x11928120], esi */
  w32((uint32_t)(0x11928120), (ESI));
  /* 11922bab mov dword ptr [0x11928220], 0x20 */
  w32((uint32_t)(0x11928220), (0x20u));
  /* 11922bb5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11922bbb:;
  /* 11922bbb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922bbd jae 0x11922bdd */
  if (!C.cf) goto L_11922bdd;
  /* 11922bbf and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11922bc3 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11922bc6 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11922bca mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11922bce mov eax, dword ptr [0x11928120] */
  EAX = (r32((uint32_t)(0x11928120)));
  /* 11922bd3 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922bd6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922bdb jmp 0x11922bbb */
  goto L_11922bbb;
L_11922bdd:;
  /* 11922bdd lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11922be0 push eax */
  push32((uint32_t)(EAX));
  /* 11922be1 call dword ptr [0x11926084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926084))), 0x11922be7u);
  /* 11922be7 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11922bec je 0x11922cc3 */
  if (C.zf) goto L_11922cc3;
  /* 11922bf2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11922bf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922bf7 je 0x11922cc3 */
  if (C.zf) goto L_11922cc3;
  /* 11922bfd mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11922bff lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11922c02 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11922c05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11922c08 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11922c0d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922c0f jl 0x11922c13 */
  if ((C.sf!=C.of)) goto L_11922c13;
  /* 11922c11 mov edi, eax */
  EDI = (EAX);
L_11922c13:;
  /* 11922c13 cmp dword ptr [0x11928220], edi */
  { uint32_t _a=(r32((uint32_t)(0x11928220))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922c19 jge 0x11922c71 */
  if ((C.sf==C.of)) goto L_11922c71;
  /* 11922c1b mov esi, 0x11928124 */
  ESI = (0x11928124u);
L_11922c20:;
  /* 11922c20 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11922c25 call 0x119235e8 */
  push32(0x11922c2au); f_119235e8();
  /* 11922c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922c2c pop ecx */
  ECX = (pop32());
  /* 11922c2d je 0x11922c6b */
  if (C.zf) goto L_11922c6b;
  /* 11922c2f add dword ptr [0x11928220], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11928220))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11928220), (_r)); fl_add(_a,_b,_r,32); }
  /* 11922c36 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11922c38 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11922c3e:;
  /* 11922c3e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922c40 jae 0x11922c5e */
  if (!C.cf) goto L_11922c5e;
  /* 11922c42 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11922c46 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11922c49 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11922c4d mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11922c51 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11922c53 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922c56 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922c5c jmp 0x11922c3e */
  goto L_11922c3e;
L_11922c5e:;
  /* 11922c5e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922c61 cmp dword ptr [0x11928220], edi */
  { uint32_t _a=(r32((uint32_t)(0x11928220))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922c67 jl 0x11922c20 */
  if ((C.sf!=C.of)) goto L_11922c20;
  /* 11922c69 jmp 0x11922c71 */
  goto L_11922c71;
L_11922c6b:;
  /* 11922c6b mov edi, dword ptr [0x11928220] */
  EDI = (r32((uint32_t)(0x11928220)));
L_11922c71:;
  /* 11922c71 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11922c73 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11922c75 jle 0x11922cc3 */
  if ((C.zf||C.sf!=C.of)) goto L_11922cc3;
L_11922c77:;
  /* 11922c77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11922c7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11922c7c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922c7f je 0x11922cb9 */
  if (C.zf) goto L_11922cb9;
  /* 11922c81 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11922c83 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11922c85 je 0x11922cb9 */
  if (C.zf) goto L_11922cb9;
  /* 11922c87 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11922c89 jne 0x11922c96 */
  if (!C.zf) goto L_11922c96;
  /* 11922c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11922c8c call dword ptr [0x1192607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192607c))), 0x11922c92u);
  /* 11922c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922c94 je 0x11922cb9 */
  if (C.zf) goto L_11922cb9;
L_11922c96:;
  /* 11922c96 mov ecx, esi */
  ECX = (ESI);
  /* 11922c98 mov eax, esi */
  EAX = (ESI);
  /* 11922c9a sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11922c9d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11922ca0 mov ecx, dword ptr [ecx*4 + 0x11928120] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11928120)));
  /* 11922ca7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11922caa lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11922cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11922cb0 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11922cb2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11922cb4 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11922cb6 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11922cb9:;
  /* 11922cb9 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11922cbd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11922cbe inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11922cbf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922cc1 jl 0x11922c77 */
  if ((C.sf!=C.of)) goto L_11922c77;
L_11922cc3:;
  /* 11922cc3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11922cc5:;
  /* 11922cc5 mov ecx, dword ptr [0x11928120] */
  ECX = (r32((uint32_t)(0x11928120)));
  /* 11922ccb lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11922cce cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922cd2 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11922cd5 jne 0x11922d24 */
  if (!C.zf) goto L_11922d24;
  /* 11922cd7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11922cd9 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11922cdd jne 0x11922ce4 */
  if (!C.zf) goto L_11922ce4;
  /* 11922cdf push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11922ce1 pop eax */
  EAX = (pop32());
  /* 11922ce2 jmp 0x11922cee */
  goto L_11922cee;
L_11922ce4:;
  /* 11922ce4 mov eax, ebx */
  EAX = (EBX);
  /* 11922ce6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11922ce7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11922ce9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11922ceb add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11922cee:;
  /* 11922cee push eax */
  push32((uint32_t)(EAX));
  /* 11922cef call dword ptr [0x11926080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926080))), 0x11922cf5u);
  /* 11922cf5 mov edi, eax */
  EDI = (EAX);
  /* 11922cf7 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922cfa je 0x11922d13 */
  if (C.zf) goto L_11922d13;
  /* 11922cfc push edi */
  push32((uint32_t)(EDI));
  /* 11922cfd call dword ptr [0x1192607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192607c))), 0x11922d03u);
  /* 11922d03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922d05 je 0x11922d13 */
  if (C.zf) goto L_11922d13;
  /* 11922d07 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11922d0c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11922d0e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d11 jne 0x11922d19 */
  if (!C.zf) goto L_11922d19;
L_11922d13:;
  /* 11922d13 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11922d17 jmp 0x11922d28 */
  goto L_11922d28;
L_11922d19:;
  /* 11922d19 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d1c jne 0x11922d28 */
  if (!C.zf) goto L_11922d28;
  /* 11922d1e or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11922d22 jmp 0x11922d28 */
  goto L_11922d28;
L_11922d24:;
  /* 11922d24 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11922d28:;
  /* 11922d28 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11922d29 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d2c jl 0x11922cc5 */
  if ((C.sf!=C.of)) goto L_11922cc5;
  /* 11922d2e push dword ptr [0x11928220] */
  push32((uint32_t)(r32((uint32_t)(0x11928220))));
  /* 11922d34 call dword ptr [0x11926088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926088))), 0x11922d3au);
  /* 11922d3a pop edi */
  EDI = (pop32());
  /* 11922d3b pop esi */
  ESI = (pop32());
  /* 11922d3c pop ebx */
  EBX = (pop32());
  /* 11922d3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11922d3e ret  */
  ESPCHK(0x11922b83u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d3f @ 0x11922d3f (84 bytes, 33 insns) */
void f_11922d3f(void) {
  FTRACE(0x11922d3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922d3f push ebx */
  push32((uint32_t)(EBX));
  /* 11922d40 push esi */
  push32((uint32_t)(ESI));
  /* 11922d41 push edi */
  push32((uint32_t)(EDI));
  /* 11922d42 mov esi, 0x11928120 */
  ESI = (0x11928120u);
L_11922d47:;
  /* 11922d47 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11922d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11922d4b je 0x11922d84 */
  if (C.zf) goto L_11922d84;
  /* 11922d4d mov edi, eax */
  EDI = (EAX);
  /* 11922d4f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922d54 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d56 jae 0x11922d79 */
  if (!C.cf) goto L_11922d79;
  /* 11922d58 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11922d5b:;
  /* 11922d5b cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d5f je 0x11922d68 */
  if (C.zf) goto L_11922d68;
  /* 11922d61 push ebx */
  push32((uint32_t)(EBX));
  /* 11922d62 call dword ptr [0x11926074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926074))), 0x11922d68u);
L_11922d68:;
  /* 11922d68 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11922d6a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922d6d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922d72 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11922d75 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d77 jb 0x11922d5b */
  if (C.cf) goto L_11922d5b;
L_11922d79:;
  /* 11922d79 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11922d7b call 0x119235a0 */
  push32(0x11922d80u); f_119235a0();
  /* 11922d80 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11922d83 pop ecx */
  ECX = (pop32());
L_11922d84:;
  /* 11922d84 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922d87 cmp esi, 0x11928220 */
  { uint32_t _a=(ESI),_b=(0x11928220u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d8d jl 0x11922d47 */
  if ((C.sf!=C.of)) goto L_11922d47;
  /* 11922d8f pop edi */
  EDI = (pop32());
  /* 11922d90 pop esi */
  ESI = (pop32());
  /* 11922d91 pop ebx */
  EBX = (pop32());
  /* 11922d92 ret  */
  ESPCHK(0x11922d3fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d93 @ 0x11922d93 (185 bytes, 71 insns) */
void f_11922d93(void) {
  FTRACE(0x11922d93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922d93 push ebx */
  push32((uint32_t)(EBX));
  /* 11922d94 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11922d96 cmp dword ptr [0x11928228], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11928228))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922d9c push esi */
  push32((uint32_t)(ESI));
  /* 11922d9d push edi */
  push32((uint32_t)(EDI));
  /* 11922d9e jne 0x11922da5 */
  if (!C.zf) goto L_11922da5;
  /* 11922da0 call 0x11923bc3 */
  push32(0x11922da5u); f_11923bc3();
L_11922da5:;
  /* 11922da5 mov esi, dword ptr [0x11927cd0] */
  ESI = (r32((uint32_t)(0x11927cd0)));
  /* 11922dab xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11922dad:;
  /* 11922dad mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11922daf cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922db1 je 0x11922dc5 */
  if (C.zf) goto L_11922dc5;
  /* 11922db3 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922db5 je 0x11922db8 */
  if (C.zf) goto L_11922db8;
  /* 11922db7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11922db8:;
  /* 11922db8 push esi */
  push32((uint32_t)(ESI));
  /* 11922db9 call 0x11923770 */
  push32(0x11922dbeu); f_11923770();
  /* 11922dbe pop ecx */
  ECX = (pop32());
  /* 11922dbf lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11922dc3 jmp 0x11922dad */
  goto L_11922dad;
L_11922dc5:;
  /* 11922dc5 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11922dcc push eax */
  push32((uint32_t)(EAX));
  /* 11922dcd call 0x119235e8 */
  push32(0x11922dd2u); f_119235e8();
  /* 11922dd2 mov esi, eax */
  ESI = (EAX);
  /* 11922dd4 pop ecx */
  ECX = (pop32());
  /* 11922dd5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922dd7 mov dword ptr [0x11927d00], esi */
  w32((uint32_t)(0x11927d00), (ESI));
  /* 11922ddd jne 0x11922de7 */
  if (!C.zf) goto L_11922de7;
  /* 11922ddf push 9 */
  push32((uint32_t)(0x9u));
  /* 11922de1 call 0x1192290d */
  push32(0x11922de6u); f_1192290d();
  /* 11922de6 pop ecx */
  ECX = (pop32());
L_11922de7:;
  /* 11922de7 mov edi, dword ptr [0x11927cd0] */
  EDI = (r32((uint32_t)(0x11927cd0)));
  /* 11922ded cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922def je 0x11922e2a */
  if (C.zf) goto L_11922e2a;
  /* 11922df1 push ebp */
  push32((uint32_t)(EBP));
L_11922df2:;
  /* 11922df2 push edi */
  push32((uint32_t)(EDI));
  /* 11922df3 call 0x11923770 */
  push32(0x11922df8u); f_11923770();
  /* 11922df8 mov ebp, eax */
  EBP = (EAX);
  /* 11922dfa pop ecx */
  ECX = (pop32());
  /* 11922dfb inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11922dfc cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922dff je 0x11922e23 */
  if (C.zf) goto L_11922e23;
  /* 11922e01 push ebp */
  push32((uint32_t)(EBP));
  /* 11922e02 call 0x119235e8 */
  push32(0x11922e07u); f_119235e8();
  /* 11922e07 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922e09 pop ecx */
  ECX = (pop32());
  /* 11922e0a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11922e0c jne 0x11922e16 */
  if (!C.zf) goto L_11922e16;
  /* 11922e0e push 9 */
  push32((uint32_t)(0x9u));
  /* 11922e10 call 0x1192290d */
  push32(0x11922e15u); f_1192290d();
  /* 11922e15 pop ecx */
  ECX = (pop32());
L_11922e16:;
  /* 11922e16 push edi */
  push32((uint32_t)(EDI));
  /* 11922e17 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11922e19 call 0x11923680 */
  push32(0x11922e1eu); f_11923680();
  /* 11922e1e pop ecx */
  ECX = (pop32());
  /* 11922e1f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922e22 pop ecx */
  ECX = (pop32());
L_11922e23:;
  /* 11922e23 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922e25 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922e27 jne 0x11922df2 */
  if (!C.zf) goto L_11922df2;
  /* 11922e29 pop ebp */
  EBP = (pop32());
L_11922e2a:;
  /* 11922e2a push dword ptr [0x11927cd0] */
  push32((uint32_t)(r32((uint32_t)(0x11927cd0))));
  /* 11922e30 call 0x119235a0 */
  push32(0x11922e35u); f_119235a0();
  /* 11922e35 pop ecx */
  ECX = (pop32());
  /* 11922e36 mov dword ptr [0x11927cd0], ebx */
  w32((uint32_t)(0x11927cd0), (EBX));
  /* 11922e3c mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11922e3e pop edi */
  EDI = (pop32());
  /* 11922e3f pop esi */
  ESI = (pop32());
  /* 11922e40 mov dword ptr [0x11928224], 1 */
  w32((uint32_t)(0x11928224), (0x1u));
  /* 11922e4a pop ebx */
  EBX = (pop32());
  /* 11922e4b ret  */
  ESPCHK(0x11922d93u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e4c @ 0x11922e4c (153 bytes, 62 insns) */
void f_11922e4c(void) {
  FTRACE(0x11922e4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922e4c push ebp */
  push32((uint32_t)(EBP));
  /* 11922e4d mov ebp, esp */
  EBP = (ESP);
  /* 11922e4f push ecx */
  push32((uint32_t)(ECX));
  /* 11922e50 push ecx */
  push32((uint32_t)(ECX));
  /* 11922e51 push ebx */
  push32((uint32_t)(EBX));
  /* 11922e52 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11922e54 cmp dword ptr [0x11928228], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11928228))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922e5a push esi */
  push32((uint32_t)(ESI));
  /* 11922e5b push edi */
  push32((uint32_t)(EDI));
  /* 11922e5c jne 0x11922e63 */
  if (!C.zf) goto L_11922e63;
  /* 11922e5e call 0x11923bc3 */
  push32(0x11922e63u); f_11923bc3();
L_11922e63:;
  /* 11922e63 mov esi, 0x11927d24 */
  ESI = (0x11927d24u);
  /* 11922e68 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11922e6d push esi */
  push32((uint32_t)(ESI));
  /* 11922e6e push ebx */
  push32((uint32_t)(EBX));
  /* 11922e6f call dword ptr [0x11926070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926070))), 0x11922e75u);
  /* 11922e75 mov eax, dword ptr [0x11928238] */
  EAX = (r32((uint32_t)(0x11928238)));
  /* 11922e7a mov dword ptr [0x11927d10], esi */
  w32((uint32_t)(0x11927d10), (ESI));
  /* 11922e80 mov edi, esi */
  EDI = (ESI);
  /* 11922e82 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922e84 je 0x11922e88 */
  if (C.zf) goto L_11922e88;
  /* 11922e86 mov edi, eax */
  EDI = (EAX);
L_11922e88:;
  /* 11922e88 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11922e8b push eax */
  push32((uint32_t)(EAX));
  /* 11922e8c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11922e8f push eax */
  push32((uint32_t)(EAX));
  /* 11922e90 push ebx */
  push32((uint32_t)(EBX));
  /* 11922e91 push ebx */
  push32((uint32_t)(EBX));
  /* 11922e92 push edi */
  push32((uint32_t)(EDI));
  /* 11922e93 call 0x11922ee5 */
  push32(0x11922e98u); f_11922ee5();
  /* 11922e98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11922e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11922e9e lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11922ea1 push eax */
  push32((uint32_t)(EAX));
  /* 11922ea2 call 0x119235e8 */
  push32(0x11922ea7u); f_119235e8();
  /* 11922ea7 mov esi, eax */
  ESI = (EAX);
  /* 11922ea9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11922eac cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922eae jne 0x11922eb8 */
  if (!C.zf) goto L_11922eb8;
  /* 11922eb0 push 8 */
  push32((uint32_t)(0x8u));
  /* 11922eb2 call 0x1192290d */
  push32(0x11922eb7u); f_1192290d();
  /* 11922eb7 pop ecx */
  ECX = (pop32());
L_11922eb8:;
  /* 11922eb8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11922ebb push eax */
  push32((uint32_t)(EAX));
  /* 11922ebc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11922ebf push eax */
  push32((uint32_t)(EAX));
  /* 11922ec0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11922ec3 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11922ec6 push eax */
  push32((uint32_t)(EAX));
  /* 11922ec7 push esi */
  push32((uint32_t)(ESI));
  /* 11922ec8 push edi */
  push32((uint32_t)(EDI));
  /* 11922ec9 call 0x11922ee5 */
  push32(0x11922eceu); f_11922ee5();
  /* 11922ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11922ed1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11922ed4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11922ed5 mov dword ptr [0x11927cf8], esi */
  w32((uint32_t)(0x11927cf8), (ESI));
  /* 11922edb pop edi */
  EDI = (pop32());
  /* 11922edc pop esi */
  ESI = (pop32());
  /* 11922edd mov dword ptr [0x11927cf4], eax */
  w32((uint32_t)(0x11927cf4), (EAX));
  /* 11922ee2 pop ebx */
  EBX = (pop32());
  /* 11922ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11922ee4 ret  */
  ESPCHK(0x11922e4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee5 @ 0x11922ee5 (436 bytes, 187 insns) */
void f_11922ee5(void) {
  FTRACE(0x11922ee5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11922ee5 push ebp */
  push32((uint32_t)(EBP));
  /* 11922ee6 mov ebp, esp */
  EBP = (ESP);
  /* 11922ee8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11922eeb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11922eee push ebx */
  push32((uint32_t)(EBX));
  /* 11922eef push esi */
  push32((uint32_t)(ESI));
  /* 11922ef0 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11922ef3 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11922ef6 push edi */
  push32((uint32_t)(EDI));
  /* 11922ef7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11922efa mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11922f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11922f03 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11922f05 je 0x11922f0f */
  if (C.zf) goto L_11922f0f;
  /* 11922f07 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11922f09 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922f0c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11922f0f:;
  /* 11922f0f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922f12 jne 0x11922f58 */
  if (!C.zf) goto L_11922f58;
L_11922f14:;
  /* 11922f14 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11922f17 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11922f18 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922f1b je 0x11922f46 */
  if (C.zf) goto L_11922f46;
  /* 11922f1d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11922f1f je 0x11922f46 */
  if (C.zf) goto L_11922f46;
  /* 11922f21 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11922f24 test byte ptr [edx + 0x11928001], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11928001)))&(0x4u); fl_logic(_r,8); }
  /* 11922f2b je 0x11922f39 */
  if (C.zf) goto L_11922f39;
  /* 11922f2d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11922f2f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f31 je 0x11922f39 */
  if (C.zf) goto L_11922f39;
  /* 11922f33 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11922f35 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11922f37 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11922f38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11922f39:;
  /* 11922f39 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11922f3b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f3d je 0x11922f14 */
  if (C.zf) goto L_11922f14;
  /* 11922f3f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11922f41 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11922f43 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11922f44 jmp 0x11922f14 */
  goto L_11922f14;
L_11922f46:;
  /* 11922f46 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11922f48 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f4a je 0x11922f50 */
  if (C.zf) goto L_11922f50;
  /* 11922f4c and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11922f4f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11922f50:;
  /* 11922f50 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922f53 jne 0x11922f9b */
  if (!C.zf) goto L_11922f9b;
  /* 11922f55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11922f56 jmp 0x11922f9b */
  goto L_11922f9b;
L_11922f58:;
  /* 11922f58 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11922f5a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f5c je 0x11922f63 */
  if (C.zf) goto L_11922f63;
  /* 11922f5e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11922f60 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11922f62 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11922f63:;
  /* 11922f63 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11922f65 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11922f66 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11922f69 test byte ptr [ebx + 0x11928001], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11928001)))&(0x4u); fl_logic(_r,8); }
  /* 11922f70 je 0x11922f7e */
  if (C.zf) goto L_11922f7e;
  /* 11922f72 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11922f74 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f76 je 0x11922f7d */
  if (C.zf) goto L_11922f7d;
  /* 11922f78 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11922f7a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11922f7c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11922f7d:;
  /* 11922f7d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11922f7e:;
  /* 11922f7e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922f81 je 0x11922f8c */
  if (C.zf) goto L_11922f8c;
  /* 11922f83 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11922f85 je 0x11922f90 */
  if (C.zf) goto L_11922f90;
  /* 11922f87 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922f8a jne 0x11922f58 */
  if (!C.zf) goto L_11922f58;
L_11922f8c:;
  /* 11922f8c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11922f8e jne 0x11922f93 */
  if (!C.zf) goto L_11922f93;
L_11922f90:;
  /* 11922f90 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11922f91 jmp 0x11922f9b */
  goto L_11922f9b;
L_11922f93:;
  /* 11922f93 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11922f95 je 0x11922f9b */
  if (C.zf) goto L_11922f9b;
  /* 11922f97 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11922f9b:;
  /* 11922f9b and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11922f9f:;
  /* 11922f9f cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fa2 je 0x11923088 */
  if (C.zf) goto L_11923088;
L_11922fa8:;
  /* 11922fa8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11922faa cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fad je 0x11922fb4 */
  if (C.zf) goto L_11922fb4;
  /* 11922faf cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fb2 jne 0x11922fb7 */
  if (!C.zf) goto L_11922fb7;
L_11922fb4:;
  /* 11922fb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11922fb5 jmp 0x11922fa8 */
  goto L_11922fa8;
L_11922fb7:;
  /* 11922fb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fba je 0x11923088 */
  if (C.zf) goto L_11923088;
  /* 11922fc0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11922fc2 je 0x11922fcc */
  if (C.zf) goto L_11922fcc;
  /* 11922fc4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11922fc6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11922fc9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11922fcc:;
  /* 11922fcc mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11922fcf inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11922fd1:;
  /* 11922fd1 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11922fd8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11922fda:;
  /* 11922fda cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fdd jne 0x11922fe3 */
  if (!C.zf) goto L_11922fe3;
  /* 11922fdf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11922fe0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11922fe1 jmp 0x11922fda */
  goto L_11922fda;
L_11922fe3:;
  /* 11922fe3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922fe6 jne 0x11923014 */
  if (!C.zf) goto L_11923014;
  /* 11922fe8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11922feb jne 0x11923012 */
  if (!C.zf) goto L_11923012;
  /* 11922fed xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11922fef cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11922ff2 je 0x11923001 */
  if (C.zf) goto L_11923001;
  /* 11922ff4 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11922ff8 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11922ffb jne 0x11923001 */
  if (!C.zf) goto L_11923001;
  /* 11922ffd mov eax, edx */
  EAX = (EDX);
  /* 11922fff jmp 0x11923004 */
  goto L_11923004;
L_11923001:;
  /* 11923001 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11923004:;
  /* 11923004 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11923007 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11923009 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192300c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1192300f mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11923012:;
  /* 11923012 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11923014:;
  /* 11923014 mov edx, ebx */
  EDX = (EBX);
  /* 11923016 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11923017 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11923019 je 0x11923029 */
  if (C.zf) goto L_11923029;
  /* 1192301b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_1192301c:;
  /* 1192301c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1192301e je 0x11923024 */
  if (C.zf) goto L_11923024;
  /* 11923020 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11923023 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11923024:;
  /* 11923024 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11923026 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11923027 jne 0x1192301c */
  if (!C.zf) goto L_1192301c;
L_11923029:;
  /* 11923029 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1192302b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1192302d je 0x11923079 */
  if (C.zf) goto L_11923079;
  /* 1192302f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923033 jne 0x1192303f */
  if (!C.zf) goto L_1192303f;
  /* 11923035 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11923038 je 0x11923079 */
  if (C.zf) goto L_11923079;
  /* 1192303a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1192303d je 0x11923079 */
  if (C.zf) goto L_11923079;
L_1192303f:;
  /* 1192303f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923043 je 0x11923073 */
  if (C.zf) goto L_11923073;
  /* 11923045 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11923047 je 0x11923062 */
  if (C.zf) goto L_11923062;
  /* 11923049 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 1192304c test byte ptr [ebx + 0x11928001], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11928001)))&(0x4u); fl_logic(_r,8); }
  /* 11923053 je 0x1192305b */
  if (C.zf) goto L_1192305b;
  /* 11923055 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11923057 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11923058 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923059 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1192305b:;
  /* 1192305b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1192305d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1192305f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11923060 jmp 0x11923071 */
  goto L_11923071;
L_11923062:;
  /* 11923062 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11923065 test byte ptr [edx + 0x11928001], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11928001)))&(0x4u); fl_logic(_r,8); }
  /* 1192306c je 0x11923071 */
  if (C.zf) goto L_11923071;
  /* 1192306e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1192306f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11923071:;
  /* 11923071 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11923073:;
  /* 11923073 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923074 jmp 0x11922fd1 */
  goto L_11922fd1;
L_11923079:;
  /* 11923079 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1192307b je 0x11923081 */
  if (C.zf) goto L_11923081;
  /* 1192307d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11923080 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11923081:;
  /* 11923081 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11923083 jmp 0x11922f9f */
  goto L_11922f9f;
L_11923088:;
  /* 11923088 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1192308a je 0x1192308f */
  if (C.zf) goto L_1192308f;
  /* 1192308c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1192308f:;
  /* 1192308f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11923092 pop edi */
  EDI = (pop32());
  /* 11923093 pop esi */
  ESI = (pop32());
  /* 11923094 pop ebx */
  EBX = (pop32());
  /* 11923095 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11923097 pop ebp */
  EBP = (pop32());
  /* 11923098 ret  */
  ESPCHK(0x11922ee5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003099 @ 0x11923099 (306 bytes, 132 insns) */
void f_11923099(void) {
  FTRACE(0x11923099u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923099 push ecx */
  push32((uint32_t)(ECX));
  /* 1192309a push ecx */
  push32((uint32_t)(ECX));
  /* 1192309b mov eax, dword ptr [0x11927e28] */
  EAX = (r32((uint32_t)(0x11927e28)));
  /* 119230a0 push ebx */
  push32((uint32_t)(EBX));
  /* 119230a1 push ebp */
  push32((uint32_t)(EBP));
  /* 119230a2 mov ebp, dword ptr [0x1192605c] */
  EBP = (r32((uint32_t)(0x1192605c)));
  /* 119230a8 push esi */
  push32((uint32_t)(ESI));
  /* 119230a9 push edi */
  push32((uint32_t)(EDI));
  /* 119230aa xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119230ac xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119230ae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119230b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230b2 jne 0x119230e7 */
  if (!C.zf) goto L_119230e7;
  /* 119230b4 call ebp */
  call_ind((uint32_t)(EBP), 0x119230b6u);
  /* 119230b6 mov esi, eax */
  ESI = (EAX);
  /* 119230b8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230ba je 0x119230c8 */
  if (C.zf) goto L_119230c8;
  /* 119230bc mov dword ptr [0x11927e28], 1 */
  w32((uint32_t)(0x11927e28), (0x1u));
  /* 119230c6 jmp 0x119230f0 */
  goto L_119230f0;
L_119230c8:;
  /* 119230c8 call dword ptr [0x1192606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192606c))), 0x119230ceu);
  /* 119230ce mov edi, eax */
  EDI = (EAX);
  /* 119230d0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230d2 je 0x119231c2 */
  if (C.zf) goto L_119231c2;
  /* 119230d8 mov dword ptr [0x11927e28], 2 */
  w32((uint32_t)(0x11927e28), (0x2u));
  /* 119230e2 jmp 0x11923176 */
  goto L_11923176;
L_119230e7:;
  /* 119230e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230ea jne 0x11923171 */
  if (!C.zf) goto L_11923171;
L_119230f0:;
  /* 119230f0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230f2 jne 0x11923100 */
  if (!C.zf) goto L_11923100;
  /* 119230f4 call ebp */
  call_ind((uint32_t)(EBP), 0x119230f6u);
  /* 119230f6 mov esi, eax */
  ESI = (EAX);
  /* 119230f8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119230fa je 0x119231c2 */
  if (C.zf) goto L_119231c2;
L_11923100:;
  /* 11923100 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11923103 mov eax, esi */
  EAX = (ESI);
  /* 11923105 je 0x11923115 */
  if (C.zf) goto L_11923115;
L_11923107:;
  /* 11923107 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923109 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1192310c jne 0x11923107 */
  if (!C.zf) goto L_11923107;
  /* 1192310e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1192310f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923110 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11923113 jne 0x11923107 */
  if (!C.zf) goto L_11923107;
L_11923115:;
  /* 11923115 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923117 mov edi, dword ptr [0x11926064] */
  EDI = (r32((uint32_t)(0x11926064)));
  /* 1192311d sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1192311f push ebx */
  push32((uint32_t)(EBX));
  /* 11923120 push ebx */
  push32((uint32_t)(EBX));
  /* 11923121 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923122 push ebx */
  push32((uint32_t)(EBX));
  /* 11923123 push ebx */
  push32((uint32_t)(EBX));
  /* 11923124 push eax */
  push32((uint32_t)(EAX));
  /* 11923125 push esi */
  push32((uint32_t)(ESI));
  /* 11923126 push ebx */
  push32((uint32_t)(EBX));
  /* 11923127 push ebx */
  push32((uint32_t)(EBX));
  /* 11923128 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 1192312c call edi */
  call_ind((uint32_t)(EDI), 0x1192312eu);
  /* 1192312e mov ebp, eax */
  EBP = (EAX);
  /* 11923130 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923132 je 0x11923166 */
  if (C.zf) goto L_11923166;
  /* 11923134 push ebp */
  push32((uint32_t)(EBP));
  /* 11923135 call 0x119235e8 */
  push32(0x1192313au); f_119235e8();
  /* 1192313a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192313c pop ecx */
  ECX = (pop32());
  /* 1192313d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11923141 je 0x11923166 */
  if (C.zf) goto L_11923166;
  /* 11923143 push ebx */
  push32((uint32_t)(EBX));
  /* 11923144 push ebx */
  push32((uint32_t)(EBX));
  /* 11923145 push ebp */
  push32((uint32_t)(EBP));
  /* 11923146 push eax */
  push32((uint32_t)(EAX));
  /* 11923147 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 1192314b push esi */
  push32((uint32_t)(ESI));
  /* 1192314c push ebx */
  push32((uint32_t)(EBX));
  /* 1192314d push ebx */
  push32((uint32_t)(EBX));
  /* 1192314e call edi */
  call_ind((uint32_t)(EDI), 0x11923150u);
  /* 11923150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923152 jne 0x11923162 */
  if (!C.zf) goto L_11923162;
  /* 11923154 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11923158 call 0x119235a0 */
  push32(0x1192315du); f_119235a0();
  /* 1192315d pop ecx */
  ECX = (pop32());
  /* 1192315e mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11923162:;
  /* 11923162 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11923166:;
  /* 11923166 push esi */
  push32((uint32_t)(ESI));
  /* 11923167 call dword ptr [0x11926068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926068))), 0x1192316du);
  /* 1192316d mov eax, ebx */
  EAX = (EBX);
  /* 1192316f jmp 0x119231c4 */
  goto L_119231c4;
L_11923171:;
  /* 11923171 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923174 jne 0x119231c2 */
  if (!C.zf) goto L_119231c2;
L_11923176:;
  /* 11923176 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923178 jne 0x11923186 */
  if (!C.zf) goto L_11923186;
  /* 1192317a call dword ptr [0x1192606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192606c))), 0x11923180u);
  /* 11923180 mov edi, eax */
  EDI = (EAX);
  /* 11923182 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923184 je 0x119231c2 */
  if (C.zf) goto L_119231c2;
L_11923186:;
  /* 11923186 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11923188 mov eax, edi */
  EAX = (EDI);
  /* 1192318a je 0x11923196 */
  if (C.zf) goto L_11923196;
L_1192318c:;
  /* 1192318c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1192318d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1192318f jne 0x1192318c */
  if (!C.zf) goto L_1192318c;
  /* 11923191 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923192 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11923194 jne 0x1192318c */
  if (!C.zf) goto L_1192318c;
L_11923196:;
  /* 11923196 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923198 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923199 mov ebp, eax */
  EBP = (EAX);
  /* 1192319b push ebp */
  push32((uint32_t)(EBP));
  /* 1192319c call 0x119235e8 */
  push32(0x119231a1u); f_119235e8();
  /* 119231a1 mov esi, eax */
  ESI = (EAX);
  /* 119231a3 pop ecx */
  ECX = (pop32());
  /* 119231a4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119231a6 jne 0x119231ac */
  if (!C.zf) goto L_119231ac;
  /* 119231a8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119231aa jmp 0x119231b7 */
  goto L_119231b7;
L_119231ac:;
  /* 119231ac push ebp */
  push32((uint32_t)(EBP));
  /* 119231ad push edi */
  push32((uint32_t)(EDI));
  /* 119231ae push esi */
  push32((uint32_t)(ESI));
  /* 119231af call 0x11923be0 */
  push32(0x119231b4u); f_11923be0();
  /* 119231b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119231b7:;
  /* 119231b7 push edi */
  push32((uint32_t)(EDI));
  /* 119231b8 call dword ptr [0x11926078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926078))), 0x119231beu);
  /* 119231be mov eax, esi */
  EAX = (ESI);
  /* 119231c0 jmp 0x119231c4 */
  goto L_119231c4;
L_119231c2:;
  /* 119231c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119231c4:;
  /* 119231c4 pop edi */
  EDI = (pop32());
  /* 119231c5 pop esi */
  ESI = (pop32());
  /* 119231c6 pop ebp */
  EBP = (pop32());
  /* 119231c7 pop ebx */
  EBX = (pop32());
  /* 119231c8 pop ecx */
  ECX = (pop32());
  /* 119231c9 pop ecx */
  ECX = (pop32());
  /* 119231ca ret  */
  ESPCHK(0x11923099u, _esp0);
  ESP += 4; return;
}

/* FUN_100031cb @ 0x119231cb (60 bytes, 20 insns) */
void f_119231cb(void) {
  FTRACE(0x119231cbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119231cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119231cd push 0 */
  push32((uint32_t)(0x0u));
  /* 119231cf cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119231d3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119231d8 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 119231db push eax */
  push32((uint32_t)(EAX));
  /* 119231dc call dword ptr [0x11926060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926060))), 0x119231e2u);
  /* 119231e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119231e4 mov dword ptr [0x11928108], eax */
  w32((uint32_t)(0x11928108), (EAX));
  /* 119231e9 je 0x11923200 */
  if (C.zf) goto L_11923200;
  /* 119231eb call 0x11923f15 */
  push32(0x119231f0u); f_11923f15();
  /* 119231f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119231f2 jne 0x11923203 */
  if (!C.zf) goto L_11923203;
  /* 119231f4 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 119231fa call dword ptr [0x11926058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926058))), 0x11923200u);
L_11923200:;
  /* 11923200 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923202 ret  */
  ESPCHK(0x119231cbu, _esp0);
  ESP += 4; return;
L_11923203:;
  /* 11923203 push 1 */
  push32((uint32_t)(0x1u));
  /* 11923205 pop eax */
  EAX = (pop32());
  /* 11923206 ret  */
  ESPCHK(0x119231cbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003207 @ 0x11923207 (117 bytes, 38 insns) */
void f_11923207(void) {
  FTRACE(0x11923207u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923207 push ebx */
  push32((uint32_t)(EBX));
  /* 11923208 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1192320a cmp dword ptr [0x11927ee0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11927ee0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923210 push ebp */
  push32((uint32_t)(EBP));
  /* 11923211 mov ebp, dword ptr [0x1192604c] */
  EBP = (r32((uint32_t)(0x1192604c)));
  /* 11923217 jle 0x1192325d */
  if ((C.zf||C.sf!=C.of)) goto L_1192325d;
  /* 11923219 mov eax, dword ptr [0x11927ee4] */
  EAX = (r32((uint32_t)(0x11927ee4)));
  /* 1192321e push esi */
  push32((uint32_t)(ESI));
  /* 1192321f push edi */
  push32((uint32_t)(EDI));
  /* 11923220 mov edi, dword ptr [0x11926050] */
  EDI = (r32((uint32_t)(0x11926050)));
  /* 11923226 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11923229:;
  /* 11923229 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1192322e push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11923233 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11923235 call edi */
  call_ind((uint32_t)(EDI), 0x11923237u);
  /* 11923237 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1192323c push 0 */
  push32((uint32_t)(0x0u));
  /* 1192323e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11923240 call edi */
  call_ind((uint32_t)(EDI), 0x11923242u);
  /* 11923242 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11923245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923247 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 1192324d call ebp */
  call_ind((uint32_t)(EBP), 0x1192324fu);
  /* 1192324f add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923252 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11923253 cmp ebx, dword ptr [0x11927ee0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11927ee0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923259 jl 0x11923229 */
  if ((C.sf!=C.of)) goto L_11923229;
  /* 1192325b pop edi */
  EDI = (pop32());
  /* 1192325c pop esi */
  ESI = (pop32());
L_1192325d:;
  /* 1192325d push dword ptr [0x11927ee4] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee4))));
  /* 11923263 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923265 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 1192326b call ebp */
  call_ind((uint32_t)(EBP), 0x1192326du);
  /* 1192326d push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 11923273 call dword ptr [0x11926058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926058))), 0x11923279u);
  /* 11923279 pop ebp */
  EBP = (pop32());
  /* 1192327a pop ebx */
  EBX = (pop32());
  /* 1192327b ret  */
  ESPCHK(0x11923207u, _esp0);
  ESP += 4; return;
}

/* FUN_1000327c @ 0x1192327c (57 bytes, 18 insns) */
void f_1192327c(void) {
  FTRACE(0x1192327cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192327c mov eax, dword ptr [0x11927cd8] */
  EAX = (r32((uint32_t)(0x11927cd8)));
  /* 11923281 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923284 je 0x11923293 */
  if (C.zf) goto L_11923293;
  /* 11923286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923288 jne 0x119232b4 */
  if (!C.zf) goto L_119232b4;
  /* 1192328a cmp dword ptr [0x11927cdc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11927cdc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923291 jne 0x119232b4 */
  if (!C.zf) goto L_119232b4;
L_11923293:;
  /* 11923293 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11923298 call 0x119232b5 */
  push32(0x1192329du); f_119232b5();
  /* 1192329d mov eax, dword ptr [0x11927e2c] */
  EAX = (r32((uint32_t)(0x11927e2c)));
  /* 119232a2 pop ecx */
  ECX = (pop32());
  /* 119232a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119232a5 je 0x119232a9 */
  if (C.zf) goto L_119232a9;
  /* 119232a7 call eax */
  call_ind((uint32_t)(EAX), 0x119232a9u);
L_119232a9:;
  /* 119232a9 push 0xff */
  push32((uint32_t)(0xffu));
  /* 119232ae call 0x119232b5 */
  push32(0x119232b3u); f_119232b5();
  /* 119232b3 pop ecx */
  ECX = (pop32());
L_119232b4:;
  /* 119232b4 ret  */
  ESPCHK(0x1192327cu, _esp0);
  ESP += 4; return;
}

/* FUN_100032b5 @ 0x119232b5 (339 bytes, 100 insns) */
void f_119232b5(void) {
  FTRACE(0x119232b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119232b5 push ebp */
  push32((uint32_t)(EBP));
  /* 119232b6 mov ebp, esp */
  EBP = (ESP);
  /* 119232b8 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119232be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 119232c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 119232c3 mov eax, 0x11927788 */
  EAX = (0x11927788u);
L_119232c8:;
  /* 119232c8 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119232ca je 0x119232d7 */
  if (C.zf) goto L_119232d7;
  /* 119232cc add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119232cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119232d0 cmp eax, 0x11927818 */
  { uint32_t _a=(EAX),_b=(0x11927818u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119232d5 jl 0x119232c8 */
  if ((C.sf!=C.of)) goto L_119232c8;
L_119232d7:;
  /* 119232d7 push esi */
  push32((uint32_t)(ESI));
  /* 119232d8 mov esi, ecx */
  ESI = (ECX);
  /* 119232da shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 119232dd cmp edx, dword ptr [esi + 0x11927788] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11927788))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119232e3 jne 0x11923405 */
  if (!C.zf) goto L_11923405;
  /* 119232e9 mov eax, dword ptr [0x11927cd8] */
  EAX = (r32((uint32_t)(0x11927cd8)));
  /* 119232ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119232f1 je 0x119233df */
  if (C.zf) goto L_119233df;
  /* 119232f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119232f9 jne 0x11923308 */
  if (!C.zf) goto L_11923308;
  /* 119232fb cmp dword ptr [0x11927cdc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11927cdc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923302 je 0x119233df */
  if (C.zf) goto L_119233df;
L_11923308:;
  /* 11923308 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192330e je 0x11923405 */
  if (C.zf) goto L_11923405;
  /* 11923314 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1192331a push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1192331f push eax */
  push32((uint32_t)(EAX));
  /* 11923320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923322 call dword ptr [0x11926070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926070))), 0x11923328u);
  /* 11923328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192332a jne 0x1192333f */
  if (!C.zf) goto L_1192333f;
  /* 1192332c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11923332 push 0x11926450 */
  push32((uint32_t)(0x11926450u));
  /* 11923337 push eax */
  push32((uint32_t)(EAX));
  /* 11923338 call 0x11923680 */
  push32(0x1192333du); f_11923680();
  /* 1192333d pop ecx */
  ECX = (pop32());
  /* 1192333e pop ecx */
  ECX = (pop32());
L_1192333f:;
  /* 1192333f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11923345 push edi */
  push32((uint32_t)(EDI));
  /* 11923346 push eax */
  push32((uint32_t)(EAX));
  /* 11923347 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 1192334d call 0x11923770 */
  push32(0x11923352u); f_11923770();
  /* 11923352 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923353 pop ecx */
  ECX = (pop32());
  /* 11923354 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923357 jbe 0x11923382 */
  if ((C.cf||C.zf)) goto L_11923382;
  /* 11923359 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1192335f push eax */
  push32((uint32_t)(EAX));
  /* 11923360 call 0x11923770 */
  push32(0x11923365u); f_11923770();
  /* 11923365 mov edi, eax */
  EDI = (EAX);
  /* 11923367 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1192336d sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923370 push 3 */
  push32((uint32_t)(0x3u));
  /* 11923372 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923374 push 0x1192644c */
  push32((uint32_t)(0x1192644cu));
  /* 11923379 push edi */
  push32((uint32_t)(EDI));
  /* 1192337a call 0x119247f0 */
  push32(0x1192337fu); f_119247f0();
  /* 1192337f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11923382:;
  /* 11923382 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11923388 push 0x11926430 */
  push32((uint32_t)(0x11926430u));
  /* 1192338d push eax */
  push32((uint32_t)(EAX));
  /* 1192338e call 0x11923680 */
  push32(0x11923393u); f_11923680();
  /* 11923393 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11923399 push edi */
  push32((uint32_t)(EDI));
  /* 1192339a push eax */
  push32((uint32_t)(EAX));
  /* 1192339b call 0x11923690 */
  push32(0x119233a0u); f_11923690();
  /* 119233a0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119233a6 push 0x1192642c */
  push32((uint32_t)(0x1192642cu));
  /* 119233ab push eax */
  push32((uint32_t)(EAX));
  /* 119233ac call 0x11923690 */
  push32(0x119233b1u); f_11923690();
  /* 119233b1 push dword ptr [esi + 0x1192778c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1192778c))));
  /* 119233b7 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119233bd push eax */
  push32((uint32_t)(EAX));
  /* 119233be call 0x11923690 */
  push32(0x119233c3u); f_11923690();
  /* 119233c3 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 119233c8 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 119233ce push 0x11926404 */
  push32((uint32_t)(0x11926404u));
  /* 119233d3 push eax */
  push32((uint32_t)(EAX));
  /* 119233d4 call 0x1192475e */
  push32(0x119233d9u); f_1192475e();
  /* 119233d9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119233dc pop edi */
  EDI = (pop32());
  /* 119233dd jmp 0x11923405 */
  goto L_11923405;
L_119233df:;
  /* 119233df lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119233e2 lea esi, [esi + 0x1192778c] */
  ESI = ((uint32_t)(ESI + 0x1192778c));
  /* 119233e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119233ea push eax */
  push32((uint32_t)(EAX));
  /* 119233eb push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119233ed call 0x11923770 */
  push32(0x119233f2u); f_11923770();
  /* 119233f2 pop ecx */
  ECX = (pop32());
  /* 119233f3 push eax */
  push32((uint32_t)(EAX));
  /* 119233f4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119233f6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 119233f8 call dword ptr [0x11926080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926080))), 0x119233feu);
  /* 119233fe push eax */
  push32((uint32_t)(EAX));
  /* 119233ff call dword ptr [0x11926054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926054))), 0x11923405u);
L_11923405:;
  /* 11923405 pop esi */
  ESI = (pop32());
  /* 11923406 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923407 ret  */
  ESPCHK(0x119232b5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003408 @ 0x11923408 (41 bytes, 12 insns) */
void f_11923408(void) {
  FTRACE(0x11923408u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923408 push esi */
  push32((uint32_t)(ESI));
  /* 11923409 mov esi, dword ptr [0x11926044] */
  ESI = (r32((uint32_t)(0x11926044)));
  /* 1192340f push dword ptr [0x1192785c] */
  push32((uint32_t)(r32((uint32_t)(0x1192785c))));
  /* 11923415 call esi */
  call_ind((uint32_t)(ESI), 0x11923417u);
  /* 11923417 push dword ptr [0x1192784c] */
  push32((uint32_t)(r32((uint32_t)(0x1192784c))));
  /* 1192341d call esi */
  call_ind((uint32_t)(ESI), 0x1192341fu);
  /* 1192341f push dword ptr [0x1192783c] */
  push32((uint32_t)(r32((uint32_t)(0x1192783c))));
  /* 11923425 call esi */
  call_ind((uint32_t)(ESI), 0x11923427u);
  /* 11923427 push dword ptr [0x1192781c] */
  push32((uint32_t)(r32((uint32_t)(0x1192781c))));
  /* 1192342d call esi */
  call_ind((uint32_t)(ESI), 0x1192342fu);
  /* 1192342f pop esi */
  ESI = (pop32());
  /* 11923430 ret  */
  ESPCHK(0x11923408u, _esp0);
  ESP += 4; return;
}

/* FUN_10003431 @ 0x11923431 (108 bytes, 34 insns) */
void f_11923431(void) {
  FTRACE(0x11923431u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923431 push esi */
  push32((uint32_t)(ESI));
  /* 11923432 push edi */
  push32((uint32_t)(EDI));
  /* 11923433 mov edi, dword ptr [0x11926074] */
  EDI = (r32((uint32_t)(0x11926074)));
  /* 11923439 mov esi, 0x11927818 */
  ESI = (0x11927818u);
L_1192343e:;
  /* 1192343e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11923440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923442 je 0x1192346f */
  if (C.zf) goto L_1192346f;
  /* 11923444 cmp esi, 0x1192785c */
  { uint32_t _a=(ESI),_b=(0x1192785cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192344a je 0x1192346f */
  if (C.zf) goto L_1192346f;
  /* 1192344c cmp esi, 0x1192784c */
  { uint32_t _a=(ESI),_b=(0x1192784cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923452 je 0x1192346f */
  if (C.zf) goto L_1192346f;
  /* 11923454 cmp esi, 0x1192783c */
  { uint32_t _a=(ESI),_b=(0x1192783cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192345a je 0x1192346f */
  if (C.zf) goto L_1192346f;
  /* 1192345c cmp esi, 0x1192781c */
  { uint32_t _a=(ESI),_b=(0x1192781cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923462 je 0x1192346f */
  if (C.zf) goto L_1192346f;
  /* 11923464 push eax */
  push32((uint32_t)(EAX));
  /* 11923465 call edi */
  call_ind((uint32_t)(EDI), 0x11923467u);
  /* 11923467 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11923469 call 0x119235a0 */
  push32(0x1192346eu); f_119235a0();
  /* 1192346e pop ecx */
  ECX = (pop32());
L_1192346f:;
  /* 1192346f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923472 cmp esi, 0x119278d8 */
  { uint32_t _a=(ESI),_b=(0x119278d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923478 jl 0x1192343e */
  if ((C.sf!=C.of)) goto L_1192343e;
  /* 1192347a push dword ptr [0x1192783c] */
  push32((uint32_t)(r32((uint32_t)(0x1192783c))));
  /* 11923480 call edi */
  call_ind((uint32_t)(EDI), 0x11923482u);
  /* 11923482 push dword ptr [0x1192784c] */
  push32((uint32_t)(r32((uint32_t)(0x1192784c))));
  /* 11923488 call edi */
  call_ind((uint32_t)(EDI), 0x1192348au);
  /* 1192348a push dword ptr [0x1192785c] */
  push32((uint32_t)(r32((uint32_t)(0x1192785c))));
  /* 11923490 call edi */
  call_ind((uint32_t)(EDI), 0x11923492u);
  /* 11923492 push dword ptr [0x1192781c] */
  push32((uint32_t)(r32((uint32_t)(0x1192781c))));
  /* 11923498 call edi */
  call_ind((uint32_t)(EDI), 0x1192349au);
  /* 1192349a pop edi */
  EDI = (pop32());
  /* 1192349b pop esi */
  ESI = (pop32());
  /* 1192349c ret  */
  ESPCHK(0x11923431u, _esp0);
  ESP += 4; return;
}

/* FUN_1000349d @ 0x1192349d (97 bytes, 37 insns) */
void f_1192349d(void) {
  FTRACE(0x1192349du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192349d push ebp */
  push32((uint32_t)(EBP));
  /* 1192349e mov ebp, esp */
  EBP = (ESP);
  /* 119234a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119234a3 push esi */
  push32((uint32_t)(ESI));
  /* 119234a4 cmp dword ptr [eax*4 + 0x11927818], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11927818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119234ac lea esi, [eax*4 + 0x11927818] */
  ESI = ((uint32_t)(EAX*4 + 0x11927818));
  /* 119234b3 jne 0x119234f3 */
  if (!C.zf) goto L_119234f3;
  /* 119234b5 push edi */
  push32((uint32_t)(EDI));
  /* 119234b6 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 119234b8 call 0x119235e8 */
  push32(0x119234bdu); f_119235e8();
  /* 119234bd mov edi, eax */
  EDI = (EAX);
  /* 119234bf pop ecx */
  ECX = (pop32());
  /* 119234c0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119234c2 jne 0x119234cc */
  if (!C.zf) goto L_119234cc;
  /* 119234c4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119234c6 call 0x1192290d */
  push32(0x119234cbu); f_1192290d();
  /* 119234cb pop ecx */
  ECX = (pop32());
L_119234cc:;
  /* 119234cc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119234ce call 0x1192349d */
  push32(0x119234d3u); f_1192349d();
  /* 119234d3 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119234d6 pop ecx */
  ECX = (pop32());
  /* 119234d7 push edi */
  push32((uint32_t)(EDI));
  /* 119234d8 jne 0x119234e4 */
  if (!C.zf) goto L_119234e4;
  /* 119234da call dword ptr [0x11926044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926044))), 0x119234e0u);
  /* 119234e0 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 119234e2 jmp 0x119234ea */
  goto L_119234ea;
L_119234e4:;
  /* 119234e4 call 0x119235a0 */
  push32(0x119234e9u); f_119235a0();
  /* 119234e9 pop ecx */
  ECX = (pop32());
L_119234ea:;
  /* 119234ea push 0x11 */
  push32((uint32_t)(0x11u));
  /* 119234ec call 0x119234fe */
  push32(0x119234f1u); f_119234fe();
  /* 119234f1 pop ecx */
  ECX = (pop32());
  /* 119234f2 pop edi */
  EDI = (pop32());
L_119234f3:;
  /* 119234f3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 119234f5 call dword ptr [0x11926040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926040))), 0x119234fbu);
  /* 119234fb pop esi */
  ESI = (pop32());
  /* 119234fc pop ebp */
  EBP = (pop32());
  /* 119234fd ret  */
  ESPCHK(0x1192349du, _esp0);
  ESP += 4; return;
}

/* FUN_100034fe @ 0x119234fe (21 bytes, 7 insns) */
void f_119234fe(void) {
  FTRACE(0x119234feu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119234fe push ebp */
  push32((uint32_t)(EBP));
  /* 119234ff mov ebp, esp */
  EBP = (ESP);
  /* 11923501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923504 push dword ptr [eax*4 + 0x11927818] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11927818))));
  /* 1192350b call dword ptr [0x11926048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926048))), 0x11923511u);
  /* 11923511 pop ebp */
  EBP = (pop32());
  /* 11923512 ret  */
  ESPCHK(0x119234feu, _esp0);
  ESP += 4; return;
}

/* FUN_10003513 @ 0x11923513 (141 bytes, 56 insns) */
void f_11923513(void) {
  FTRACE(0x11923513u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923513 push ebx */
  push32((uint32_t)(EBX));
  /* 11923514 push esi */
  push32((uint32_t)(ESI));
  /* 11923515 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11923519 push edi */
  push32((uint32_t)(EDI));
  /* 1192351a imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1192351f cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923522 mov ebx, esi */
  EBX = (ESI);
  /* 11923524 ja 0x11923533 */
  if ((!C.cf&&!C.zf)) goto L_11923533;
  /* 11923526 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11923528 jne 0x1192352d */
  if (!C.zf) goto L_1192352d;
  /* 1192352a push 1 */
  push32((uint32_t)(0x1u));
  /* 1192352c pop esi */
  ESI = (pop32());
L_1192352d:;
  /* 1192352d add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923530 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11923533:;
  /* 11923533 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11923535 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923538 ja 0x11923574 */
  if ((!C.cf&&!C.zf)) goto L_11923574;
  /* 1192353a cmp ebx, dword ptr [0x11927a60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11927a60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923540 ja 0x1192355f */
  if ((!C.cf&&!C.zf)) goto L_1192355f;
  /* 11923542 push 9 */
  push32((uint32_t)(0x9u));
  /* 11923544 call 0x1192349d */
  push32(0x11923549u); f_1192349d();
  /* 11923549 push ebx */
  push32((uint32_t)(EBX));
  /* 1192354a call 0x119242a9 */
  push32(0x1192354fu); f_119242a9();
  /* 1192354f push 9 */
  push32((uint32_t)(0x9u));
  /* 11923551 mov edi, eax */
  EDI = (EAX);
  /* 11923553 call 0x119234fe */
  push32(0x11923558u); f_119234fe();
  /* 11923558 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192355b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1192355d jne 0x1192358a */
  if (!C.zf) goto L_1192358a;
L_1192355f:;
  /* 1192355f push esi */
  push32((uint32_t)(ESI));
  /* 11923560 push 8 */
  push32((uint32_t)(0x8u));
  /* 11923562 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 11923568 call dword ptr [0x1192603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192603c))), 0x1192356eu);
  /* 1192356e mov edi, eax */
  EDI = (EAX);
  /* 11923570 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11923572 jne 0x11923596 */
  if (!C.zf) goto L_11923596;
L_11923574:;
  /* 11923574 cmp dword ptr [0x11927ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11927ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192357b je 0x11923596 */
  if (C.zf) goto L_11923596;
  /* 1192357d push esi */
  push32((uint32_t)(ESI));
  /* 1192357e call 0x11924948 */
  push32(0x11923583u); f_11924948();
  /* 11923583 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923585 pop ecx */
  ECX = (pop32());
  /* 11923586 je 0x1192359c */
  if (C.zf) goto L_1192359c;
  /* 11923588 jmp 0x11923533 */
  goto L_11923533;
L_1192358a:;
  /* 1192358a push ebx */
  push32((uint32_t)(EBX));
  /* 1192358b push 0 */
  push32((uint32_t)(0x0u));
  /* 1192358d push edi */
  push32((uint32_t)(EDI));
  /* 1192358e call 0x119248f0 */
  push32(0x11923593u); f_119248f0();
  /* 11923593 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11923596:;
  /* 11923596 mov eax, edi */
  EAX = (EDI);
L_11923598:;
  /* 11923598 pop edi */
  EDI = (pop32());
  /* 11923599 pop esi */
  ESI = (pop32());
  /* 1192359a pop ebx */
  EBX = (pop32());
  /* 1192359b ret  */
  ESPCHK(0x11923513u, _esp0);
  ESP += 4; return;
L_1192359c:;
  /* 1192359c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1192359e jmp 0x11923598 */
  goto L_11923598;
}

/* FUN_100035a0 @ 0x119235a0 (72 bytes, 29 insns) */
void f_119235a0(void) {
  FTRACE(0x119235a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119235a0 push esi */
  push32((uint32_t)(ESI));
  /* 119235a1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 119235a5 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119235a7 je 0x119235e6 */
  if (C.zf) goto L_119235e6;
  /* 119235a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 119235ab call 0x1192349d */
  push32(0x119235b0u); f_1192349d();
  /* 119235b0 push esi */
  push32((uint32_t)(ESI));
  /* 119235b1 call 0x11923f53 */
  push32(0x119235b6u); f_11923f53();
  /* 119235b6 pop ecx */
  ECX = (pop32());
  /* 119235b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119235b9 pop ecx */
  ECX = (pop32());
  /* 119235ba je 0x119235cf */
  if (C.zf) goto L_119235cf;
  /* 119235bc push esi */
  push32((uint32_t)(ESI));
  /* 119235bd push eax */
  push32((uint32_t)(EAX));
  /* 119235be call 0x11923f7e */
  push32(0x119235c3u); f_11923f7e();
  /* 119235c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 119235c5 call 0x119234fe */
  push32(0x119235cau); f_119234fe();
  /* 119235ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119235cd pop esi */
  ESI = (pop32());
  /* 119235ce ret  */
  ESPCHK(0x119235a0u, _esp0);
  ESP += 4; return;
L_119235cf:;
  /* 119235cf push 9 */
  push32((uint32_t)(0x9u));
  /* 119235d1 call 0x119234fe */
  push32(0x119235d6u); f_119234fe();
  /* 119235d6 pop ecx */
  ECX = (pop32());
  /* 119235d7 push esi */
  push32((uint32_t)(ESI));
  /* 119235d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119235da push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 119235e0 call dword ptr [0x1192604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192604c))), 0x119235e6u);
L_119235e6:;
  /* 119235e6 pop esi */
  ESI = (pop32());
  /* 119235e7 ret  */
  ESPCHK(0x119235a0u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x119235e8 (18 bytes, 6 insns) */
void f_119235e8(void) {
  FTRACE(0x119235e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119235e8 push dword ptr [0x11927ea4] */
  push32((uint32_t)(r32((uint32_t)(0x11927ea4))));
  /* 119235ee push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119235f2 call 0x119235fa */
  push32(0x119235f7u); f_119235fa();
  /* 119235f7 pop ecx */
  ECX = (pop32());
  /* 119235f8 pop ecx */
  ECX = (pop32());
  /* 119235f9 ret  */
  ESPCHK(0x119235e8u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x119235fa (44 bytes, 16 insns) */
void f_119235fa(void) {
  FTRACE(0x119235fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119235fa cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119235ff ja 0x11923623 */
  if ((!C.cf&&!C.zf)) goto L_11923623;
L_11923601:;
  /* 11923601 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11923605 call 0x11923626 */
  push32(0x1192360au); f_11923626();
  /* 1192360a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192360c pop ecx */
  ECX = (pop32());
  /* 1192360d jne 0x11923625 */
  if (!C.zf) goto L_11923625;
  /* 1192360f cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923613 je 0x11923625 */
  if (C.zf) goto L_11923625;
  /* 11923615 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11923619 call 0x11924948 */
  push32(0x1192361eu); f_11924948();
  /* 1192361e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923620 pop ecx */
  ECX = (pop32());
  /* 11923621 jne 0x11923601 */
  if (!C.zf) goto L_11923601;
L_11923623:;
  /* 11923623 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11923625:;
  /* 11923625 ret  */
  ESPCHK(0x119235fau, _esp0);
  ESP += 4; return;
}

/* FUN_10003626 @ 0x11923626 (78 bytes, 30 insns) */
void f_11923626(void) {
  FTRACE(0x11923626u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923626 push esi */
  push32((uint32_t)(ESI));
  /* 11923627 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1192362b cmp esi, dword ptr [0x11927a60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11927a60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923631 push edi */
  push32((uint32_t)(EDI));
  /* 11923632 ja 0x11923655 */
  if ((!C.cf&&!C.zf)) goto L_11923655;
  /* 11923634 push 9 */
  push32((uint32_t)(0x9u));
  /* 11923636 call 0x1192349d */
  push32(0x1192363bu); f_1192349d();
  /* 1192363b push esi */
  push32((uint32_t)(ESI));
  /* 1192363c call 0x119242a9 */
  push32(0x11923641u); f_119242a9();
  /* 11923641 push 9 */
  push32((uint32_t)(0x9u));
  /* 11923643 mov edi, eax */
  EDI = (EAX);
  /* 11923645 call 0x119234fe */
  push32(0x1192364au); f_119234fe();
  /* 1192364a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1192364d test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1192364f je 0x11923655 */
  if (C.zf) goto L_11923655;
  /* 11923651 mov eax, edi */
  EAX = (EDI);
  /* 11923653 jmp 0x11923671 */
  goto L_11923671;
L_11923655:;
  /* 11923655 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11923657 jne 0x1192365c */
  if (!C.zf) goto L_1192365c;
  /* 11923659 push 1 */
  push32((uint32_t)(0x1u));
  /* 1192365b pop esi */
  ESI = (pop32());
L_1192365c:;
  /* 1192365c add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1192365f and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11923662 push esi */
  push32((uint32_t)(ESI));
  /* 11923663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923665 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 1192366b call dword ptr [0x1192603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192603c))), 0x11923671u);
L_11923671:;
  /* 11923671 pop edi */
  EDI = (pop32());
  /* 11923672 pop esi */
  ESI = (pop32());
  /* 11923673 ret  */
  ESPCHK(0x11923626u, _esp0);
  ESP += 4; return;
}

/* FUN_10003680 @ 0x11923680 (7 bytes, 3 insns) */
void f_11923680(void) {
  FTRACE(0x11923680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923680 push edi */
  push32((uint32_t)(EDI));
  /* 11923681 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11923685 jmp 0x119236f1 */
  jmp_ind(0x119236f1u); return;
}

/* FUN_10003690 @ 0x11923690 (224 bytes, 84 insns) */
void f_11923690(void) {
  FTRACE(0x11923690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923690 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11923694 push edi */
  push32((uint32_t)(EDI));
  /* 11923695 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1192369b je 0x119236ac */
  if (C.zf) goto L_119236ac;
L_1192369d:;
  /* 1192369d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1192369f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119236a0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119236a2 je 0x119236df */
  if (C.zf) goto L_119236df;
  /* 119236a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119236aa jne 0x1192369d */
  if (!C.zf) goto L_1192369d;
L_119236ac:;
  /* 119236ac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119236ae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119236b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119236b5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119236b8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119236ba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119236bd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119236c2 je 0x119236ac */
  if (C.zf) goto L_119236ac;
  /* 119236c4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119236c7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119236c9 je 0x119236ee */
  if (C.zf) goto L_119236ee;
  /* 119236cb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119236cd je 0x119236e9 */
  if (C.zf) goto L_119236e9;
  /* 119236cf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119236d4 je 0x119236e4 */
  if (C.zf) goto L_119236e4;
  /* 119236d6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119236db je 0x119236df */
  if (C.zf) goto L_119236df;
  /* 119236dd jmp 0x119236ac */
  goto L_119236ac;
L_119236df:;
  /* 119236df lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 119236e2 jmp 0x119236f1 */
  goto L_119236f1;
L_119236e4:;
  /* 119236e4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 119236e7 jmp 0x119236f1 */
  goto L_119236f1;
L_119236e9:;
  /* 119236e9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 119236ec jmp 0x119236f1 */
  goto L_119236f1;
L_119236ee:;
  /* 119236ee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_119236f1:;
  /* 119236f1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119236f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119236fb je 0x11923716 */
  if (C.zf) goto L_11923716;
L_119236fd:;
  /* 119236fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119236ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11923700 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11923702 je 0x11923768 */
  if (C.zf) goto L_11923768;
  /* 11923704 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11923706 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11923707 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1192370d jne 0x119236fd */
  if (!C.zf) goto L_119236fd;
  /* 1192370f jmp 0x11923716 */
  goto L_11923716;
L_11923711:;
  /* 11923711 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11923713 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11923716:;
  /* 11923716 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1192371b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1192371d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192371f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11923722 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11923724 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11923726 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923729 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1192372e je 0x11923711 */
  if (C.zf) goto L_11923711;
  /* 11923730 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11923732 je 0x11923768 */
  if (C.zf) goto L_11923768;
  /* 11923734 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11923736 je 0x1192375f */
  if (C.zf) goto L_1192375f;
  /* 11923738 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1192373e je 0x11923752 */
  if (C.zf) goto L_11923752;
  /* 11923740 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11923746 je 0x1192374a */
  if (C.zf) goto L_1192374a;
  /* 11923748 jmp 0x11923711 */
  goto L_11923711;
L_1192374a:;
  /* 1192374a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1192374c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11923750 pop edi */
  EDI = (pop32());
  /* 11923751 ret  */
  ESPCHK(0x11923690u, _esp0);
  ESP += 4; return;
L_11923752:;
  /* 11923752 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11923755 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11923759 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1192375d pop edi */
  EDI = (pop32());
  /* 1192375e ret  */
  ESPCHK(0x11923690u, _esp0);
  ESP += 4; return;
L_1192375f:;
  /* 1192375f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11923762 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11923766 pop edi */
  EDI = (pop32());
  /* 11923767 ret  */
  ESPCHK(0x11923690u, _esp0);
  ESP += 4; return;
L_11923768:;
  /* 11923768 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1192376a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1192376e pop edi */
  EDI = (pop32());
  /* 1192376f ret  */
  ESPCHK(0x11923690u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11923770 (123 bytes, 44 insns) */
void f_11923770(void) {
  FTRACE(0x11923770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923770 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11923774 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1192377a je 0x11923790 */
  if (C.zf) goto L_11923790;
L_1192377c:;
  /* 1192377c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1192377e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1192377f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11923781 je 0x119237c3 */
  if (C.zf) goto L_119237c3;
  /* 11923783 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11923789 jne 0x1192377c */
  if (!C.zf) goto L_1192377c;
  /* 1192378b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11923790:;
  /* 11923790 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11923792 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11923797 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923799 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1192379c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1192379e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119237a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119237a6 je 0x11923790 */
  if (C.zf) goto L_11923790;
  /* 119237a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 119237ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119237ad je 0x119237e1 */
  if (C.zf) goto L_119237e1;
  /* 119237af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 119237b1 je 0x119237d7 */
  if (C.zf) goto L_119237d7;
  /* 119237b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119237b8 je 0x119237cd */
  if (C.zf) goto L_119237cd;
  /* 119237ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119237bf je 0x119237c3 */
  if (C.zf) goto L_119237c3;
  /* 119237c1 jmp 0x11923790 */
  goto L_11923790;
L_119237c3:;
  /* 119237c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 119237c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119237ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119237cc ret  */
  ESPCHK(0x11923770u, _esp0);
  ESP += 4; return;
L_119237cd:;
  /* 119237cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 119237d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119237d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119237d6 ret  */
  ESPCHK(0x11923770u, _esp0);
  ESP += 4; return;
L_119237d7:;
  /* 119237d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 119237da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119237de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119237e0 ret  */
  ESPCHK(0x11923770u, _esp0);
  ESP += 4; return;
L_119237e1:;
  /* 119237e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 119237e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119237e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119237ea ret  */
  ESPCHK(0x11923770u, _esp0);
  ESP += 4; return;
}

/* FUN_100037eb @ 0x119237eb (429 bytes, 143 insns) */
void f_119237eb(void) {
  FTRACE(0x119237ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119237eb push ebp */
  push32((uint32_t)(EBP));
  /* 119237ec mov ebp, esp */
  EBP = (ESP);
  /* 119237ee sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119237f1 push ebx */
  push32((uint32_t)(EBX));
  /* 119237f2 push esi */
  push32((uint32_t)(ESI));
  /* 119237f3 push edi */
  push32((uint32_t)(EDI));
  /* 119237f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119237f6 call 0x1192349d */
  push32(0x119237fbu); f_1192349d();
  /* 119237fb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119237fe call 0x11923998 */
  push32(0x11923803u); f_11923998();
  /* 11923803 mov ebx, eax */
  EBX = (EAX);
  /* 11923805 pop ecx */
  ECX = (pop32());
  /* 11923806 cmp ebx, dword ptr [0x11927ee8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11927ee8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192380c pop ecx */
  ECX = (pop32());
  /* 1192380d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11923810 jne 0x11923819 */
  if (!C.zf) goto L_11923819;
L_11923812:;
  /* 11923812 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11923814 jmp 0x11923989 */
  goto L_11923989;
L_11923819:;
  /* 11923819 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1192381b je 0x11923977 */
  if (C.zf) goto L_11923977;
  /* 11923821 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11923823 mov eax, 0x11927968 */
  EAX = (0x11927968u);
L_11923828:;
  /* 11923828 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192382a je 0x119238a0 */
  if (C.zf) goto L_119238a0;
  /* 1192382c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192382f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11923830 cmp eax, 0x11927a58 */
  { uint32_t _a=(EAX),_b=(0x11927a58u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923835 jl 0x11923828 */
  if ((C.sf!=C.of)) goto L_11923828;
  /* 11923837 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1192383a push eax */
  push32((uint32_t)(EAX));
  /* 1192383b push ebx */
  push32((uint32_t)(EBX));
  /* 1192383c call dword ptr [0x11926034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926034))), 0x11923842u);
  /* 11923842 push 1 */
  push32((uint32_t)(0x1u));
  /* 11923844 pop esi */
  ESI = (pop32());
  /* 11923845 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923847 jne 0x1192396e */
  if (!C.zf) goto L_1192396e;
  /* 1192384d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1192384f and dword ptr [0x11928104], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11928104)))&(0x0u); w32((uint32_t)(0x11928104), (_r)); fl_logic(_r,32); }
  /* 11923856 pop ecx */
  ECX = (pop32());
  /* 11923857 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923859 mov edi, 0x11928000 */
  EDI = (0x11928000u);
  /* 1192385e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923861 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11923863 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11923864 mov dword ptr [0x11927ee8], ebx */
  w32((uint32_t)(0x11927ee8), (EBX));
  /* 1192386a jbe 0x1192395b */
  if ((C.cf||C.zf)) goto L_1192395b;
  /* 11923870 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11923874 je 0x11923936 */
  if (C.zf) goto L_11923936;
  /* 1192387a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1192387d:;
  /* 1192387d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1192387f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11923881 je 0x11923936 */
  if (C.zf) goto L_11923936;
  /* 11923887 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1192388b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1192388e:;
  /* 1192388e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923890 ja 0x1192392a */
  if ((!C.cf&&!C.zf)) goto L_1192392a;
  /* 11923896 or byte ptr [eax + 0x11928001], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x4u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 1192389d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1192389e jmp 0x1192388e */
  goto L_1192388e;
L_119238a0:;
  /* 119238a0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119238a4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119238a6 pop ecx */
  ECX = (pop32());
  /* 119238a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119238a9 mov edi, 0x11928000 */
  EDI = (0x11928000u);
  /* 119238ae lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 119238b1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119238b3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 119238b6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119238b7 lea ebx, [esi + 0x11927978] */
  EBX = ((uint32_t)(ESI + 0x11927978));
L_119238bd:;
  /* 119238bd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119238c0 mov ecx, ebx */
  ECX = (EBX);
  /* 119238c2 je 0x119238f0 */
  if (C.zf) goto L_119238f0;
L_119238c4:;
  /* 119238c4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 119238c7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119238c9 je 0x119238f0 */
  if (C.zf) goto L_119238f0;
  /* 119238cb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 119238ce movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 119238d1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119238d3 ja 0x119238e9 */
  if ((!C.cf&&!C.zf)) goto L_119238e9;
  /* 119238d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119238d8 mov dl, byte ptr [edx + 0x11927960] */
  DL = (r8((uint32_t)(EDX + 0x11927960)));
L_119238de:;
  /* 119238de or byte ptr [eax + 0x11928001], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(DL); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 119238e4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119238e5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119238e7 jbe 0x119238de */
  if ((C.cf||C.zf)) goto L_119238de;
L_119238e9:;
  /* 119238e9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119238ea inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119238eb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119238ee jne 0x119238c4 */
  if (!C.zf) goto L_119238c4;
L_119238f0:;
  /* 119238f0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119238f3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119238f6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119238fa jb 0x119238bd */
  if (C.cf) goto L_119238bd;
  /* 119238fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119238ff mov dword ptr [0x11927efc], 1 */
  w32((uint32_t)(0x11927efc), (0x1u));
  /* 11923909 push eax */
  push32((uint32_t)(EAX));
  /* 1192390a mov dword ptr [0x11927ee8], eax */
  w32((uint32_t)(0x11927ee8), (EAX));
  /* 1192390f call 0x119239e2 */
  push32(0x11923914u); f_119239e2();
  /* 11923914 lea esi, [esi + 0x1192796c] */
  ESI = ((uint32_t)(ESI + 0x1192796c));
  /* 1192391a mov edi, 0x11927ef0 */
  EDI = (0x11927ef0u);
  /* 1192391f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11923920 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11923921 pop ecx */
  ECX = (pop32());
  /* 11923922 mov dword ptr [0x11928104], eax */
  w32((uint32_t)(0x11928104), (EAX));
  /* 11923927 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11923928 jmp 0x1192397c */
  goto L_1192397c;
L_1192392a:;
  /* 1192392a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1192392b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1192392c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11923930 jne 0x1192387d */
  if (!C.zf) goto L_1192387d;
L_11923936:;
  /* 11923936 mov eax, esi */
  EAX = (ESI);
L_11923938:;
  /* 11923938 or byte ptr [eax + 0x11928001], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x8u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 1192393f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923940 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923945 jb 0x11923938 */
  if (C.cf) goto L_11923938;
  /* 11923947 push ebx */
  push32((uint32_t)(EBX));
  /* 11923948 call 0x119239e2 */
  push32(0x1192394du); f_119239e2();
  /* 1192394d pop ecx */
  ECX = (pop32());
  /* 1192394e mov dword ptr [0x11928104], eax */
  w32((uint32_t)(0x11928104), (EAX));
  /* 11923953 mov dword ptr [0x11927efc], esi */
  w32((uint32_t)(0x11927efc), (ESI));
  /* 11923959 jmp 0x11923962 */
  goto L_11923962;
L_1192395b:;
  /* 1192395b and dword ptr [0x11927efc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11927efc)))&(0x0u); w32((uint32_t)(0x11927efc), (_r)); fl_logic(_r,32); }
L_11923962:;
  /* 11923962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923964 mov edi, 0x11927ef0 */
  EDI = (0x11927ef0u);
  /* 11923969 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1192396a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1192396b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1192396c jmp 0x1192397c */
  goto L_1192397c;
L_1192396e:;
  /* 1192396e cmp dword ptr [0x11927e90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11927e90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923975 je 0x11923986 */
  if (C.zf) goto L_11923986;
L_11923977:;
  /* 11923977 call 0x11923a15 */
  push32(0x1192397cu); f_11923a15();
L_1192397c:;
  /* 1192397c call 0x11923a3e */
  push32(0x11923981u); f_11923a3e();
  /* 11923981 jmp 0x11923812 */
  goto L_11923812;
L_11923986:;
  /* 11923986 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11923989:;
  /* 11923989 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1192398b call 0x119234fe */
  push32(0x11923990u); f_119234fe();
  /* 11923990 pop ecx */
  ECX = (pop32());
  /* 11923991 mov eax, esi */
  EAX = (ESI);
  /* 11923993 pop edi */
  EDI = (pop32());
  /* 11923994 pop esi */
  ESI = (pop32());
  /* 11923995 pop ebx */
  EBX = (pop32());
  /* 11923996 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923997 ret  */
  ESPCHK(0x119237ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10003998 @ 0x11923998 (74 bytes, 15 insns) */
void f_11923998(void) {
  FTRACE(0x11923998u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923998 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1192399c and dword ptr [0x11927e90], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11927e90)))&(0x0u); w32((uint32_t)(0x11927e90), (_r)); fl_logic(_r,32); }
  /* 119239a3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119239a6 jne 0x119239b8 */
  if (!C.zf) goto L_119239b8;
  /* 119239a8 mov dword ptr [0x11927e90], 1 */
  w32((uint32_t)(0x11927e90), (0x1u));
  /* 119239b2 jmp dword ptr [0x11926038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11926038)))); return;
L_119239b8:;
  /* 119239b8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119239bb jne 0x119239cd */
  if (!C.zf) goto L_119239cd;
  /* 119239bd mov dword ptr [0x11927e90], 1 */
  w32((uint32_t)(0x11927e90), (0x1u));
  /* 119239c7 jmp dword ptr [0x11926030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11926030)))); return;
L_119239cd:;
  /* 119239cd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119239d0 jne 0x119239e1 */
  if (!C.zf) goto L_119239e1;
  /* 119239d2 mov eax, dword ptr [0x11927ec0] */
  EAX = (r32((uint32_t)(0x11927ec0)));
  /* 119239d7 mov dword ptr [0x11927e90], 1 */
  w32((uint32_t)(0x11927e90), (0x1u));
L_119239e1:;
  /* 119239e1 ret  */
  ESPCHK(0x11923998u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e2 @ 0x119239e2 (51 bytes, 19 insns) */
void f_119239e2(void) {
  FTRACE(0x119239e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119239e2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119239e6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119239eb je 0x11923a0f */
  if (C.zf) goto L_11923a0f;
  /* 119239ed sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119239f0 je 0x11923a09 */
  if (C.zf) goto L_11923a09;
  /* 119239f2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119239f5 je 0x11923a03 */
  if (C.zf) goto L_11923a03;
  /* 119239f7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119239f8 je 0x119239fd */
  if (C.zf) goto L_119239fd;
  /* 119239fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119239fc ret  */
  ESPCHK(0x119239e2u, _esp0);
  ESP += 4; return;
L_119239fd:;
  /* 119239fd mov eax, 0x404 */
  EAX = (0x404u);
  /* 11923a02 ret  */
  ESPCHK(0x119239e2u, _esp0);
  ESP += 4; return;
L_11923a03:;
  /* 11923a03 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11923a08 ret  */
  ESPCHK(0x119239e2u, _esp0);
  ESP += 4; return;
L_11923a09:;
  /* 11923a09 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11923a0e ret  */
  ESPCHK(0x119239e2u, _esp0);
  ESP += 4; return;
L_11923a0f:;
  /* 11923a0f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11923a14 ret  */
  ESPCHK(0x119239e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a15 @ 0x11923a15 (41 bytes, 17 insns) */
void f_11923a15(void) {
  FTRACE(0x11923a15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923a15 push edi */
  push32((uint32_t)(EDI));
  /* 11923a16 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11923a18 pop ecx */
  ECX = (pop32());
  /* 11923a19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923a1b mov edi, 0x11928000 */
  EDI = (0x11928000u);
  /* 11923a20 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11923a22 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11923a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923a25 mov edi, 0x11927ef0 */
  EDI = (0x11927ef0u);
  /* 11923a2a mov dword ptr [0x11927ee8], eax */
  w32((uint32_t)(0x11927ee8), (EAX));
  /* 11923a2f mov dword ptr [0x11927efc], eax */
  w32((uint32_t)(0x11927efc), (EAX));
  /* 11923a34 mov dword ptr [0x11928104], eax */
  w32((uint32_t)(0x11928104), (EAX));
  /* 11923a39 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11923a3a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11923a3b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11923a3c pop edi */
  EDI = (pop32());
  /* 11923a3d ret  */
  ESPCHK(0x11923a15u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a3e @ 0x11923a3e (389 bytes, 124 insns) */
void f_11923a3e(void) {
  FTRACE(0x11923a3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923a3e push ebp */
  push32((uint32_t)(EBP));
  /* 11923a3f mov ebp, esp */
  EBP = (ESP);
  /* 11923a41 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923a47 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11923a4a push esi */
  push32((uint32_t)(ESI));
  /* 11923a4b push eax */
  push32((uint32_t)(EAX));
  /* 11923a4c push dword ptr [0x11927ee8] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee8))));
  /* 11923a52 call dword ptr [0x11926034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926034))), 0x11923a58u);
  /* 11923a58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923a5b jne 0x11923b77 */
  if (!C.zf) goto L_11923b77;
  /* 11923a61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923a63 mov esi, 0x100 */
  ESI = (0x100u);
L_11923a68:;
  /* 11923a68 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11923a6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923a70 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923a72 jb 0x11923a68 */
  if (C.cf) goto L_11923a68;
  /* 11923a74 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11923a77 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11923a7e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11923a80 je 0x11923ab9 */
  if (C.zf) goto L_11923ab9;
  /* 11923a82 push ebx */
  push32((uint32_t)(EBX));
  /* 11923a83 push edi */
  push32((uint32_t)(EDI));
  /* 11923a84 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11923a87:;
  /* 11923a87 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11923a8a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11923a8d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923a8f ja 0x11923aae */
  if ((!C.cf&&!C.zf)) goto L_11923aae;
  /* 11923a91 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923a93 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11923a9a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11923a9b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11923aa0 mov ebx, ecx */
  EBX = (ECX);
  /* 11923aa2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923aa5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11923aa7 mov ecx, ebx */
  ECX = (EBX);
  /* 11923aa9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11923aac rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11923aae:;
  /* 11923aae inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11923aaf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11923ab0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11923ab3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11923ab5 jne 0x11923a87 */
  if (!C.zf) goto L_11923a87;
  /* 11923ab7 pop edi */
  EDI = (pop32());
  /* 11923ab8 pop ebx */
  EBX = (pop32());
L_11923ab9:;
  /* 11923ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923abb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11923ac1 push dword ptr [0x11928104] */
  push32((uint32_t)(r32((uint32_t)(0x11928104))));
  /* 11923ac7 push dword ptr [0x11927ee8] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee8))));
  /* 11923acd push eax */
  push32((uint32_t)(EAX));
  /* 11923ace lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11923ad4 push esi */
  push32((uint32_t)(ESI));
  /* 11923ad5 push eax */
  push32((uint32_t)(EAX));
  /* 11923ad6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11923ad8 call 0x11924bb2 */
  push32(0x11923addu); f_11924bb2();
  /* 11923add push 0 */
  push32((uint32_t)(0x0u));
  /* 11923adf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11923ae5 push dword ptr [0x11927ee8] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee8))));
  /* 11923aeb push esi */
  push32((uint32_t)(ESI));
  /* 11923aec push eax */
  push32((uint32_t)(EAX));
  /* 11923aed lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11923af3 push esi */
  push32((uint32_t)(ESI));
  /* 11923af4 push eax */
  push32((uint32_t)(EAX));
  /* 11923af5 push esi */
  push32((uint32_t)(ESI));
  /* 11923af6 push dword ptr [0x11928104] */
  push32((uint32_t)(r32((uint32_t)(0x11928104))));
  /* 11923afc call 0x11924963 */
  push32(0x11923b01u); f_11924963();
  /* 11923b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11923b03 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11923b09 push dword ptr [0x11927ee8] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee8))));
  /* 11923b0f push esi */
  push32((uint32_t)(ESI));
  /* 11923b10 push eax */
  push32((uint32_t)(EAX));
  /* 11923b11 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11923b17 push esi */
  push32((uint32_t)(ESI));
  /* 11923b18 push eax */
  push32((uint32_t)(EAX));
  /* 11923b19 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11923b1e push dword ptr [0x11928104] */
  push32((uint32_t)(r32((uint32_t)(0x11928104))));
  /* 11923b24 call 0x11924963 */
  push32(0x11923b29u); f_11924963();
  /* 11923b29 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11923b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923b2e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11923b34:;
  /* 11923b34 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11923b37 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11923b3a je 0x11923b52 */
  if (C.zf) goto L_11923b52;
  /* 11923b3c or byte ptr [eax + 0x11928001], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x10u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 11923b43 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11923b4a:;
  /* 11923b4a mov byte ptr [eax + 0x11927f00], dl */
  w8((uint32_t)(EAX + 0x11927f00), (DL));
  /* 11923b50 jmp 0x11923b6e */
  goto L_11923b6e;
L_11923b52:;
  /* 11923b52 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11923b55 je 0x11923b67 */
  if (C.zf) goto L_11923b67;
  /* 11923b57 or byte ptr [eax + 0x11928001], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x20u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 11923b5e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11923b65 jmp 0x11923b4a */
  goto L_11923b4a;
L_11923b67:;
  /* 11923b67 and byte ptr [eax + 0x11927f00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11927f00)))&(0x0u); w8((uint32_t)(EAX + 0x11927f00), (_r)); fl_logic(_r,8); }
L_11923b6e:;
  /* 11923b6e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923b6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11923b70 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11923b71 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923b73 jb 0x11923b34 */
  if (C.cf) goto L_11923b34;
  /* 11923b75 jmp 0x11923bc0 */
  goto L_11923bc0;
L_11923b77:;
  /* 11923b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11923b79 mov esi, 0x100 */
  ESI = (0x100u);
L_11923b7e:;
  /* 11923b7e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923b81 jb 0x11923b9c */
  if (C.cf) goto L_11923b9c;
  /* 11923b83 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923b86 ja 0x11923b9c */
  if ((!C.cf&&!C.zf)) goto L_11923b9c;
  /* 11923b88 or byte ptr [eax + 0x11928001], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x10u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 11923b8f mov cl, al */
  CL = (AL);
  /* 11923b91 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11923b94:;
  /* 11923b94 mov byte ptr [eax + 0x11927f00], cl */
  w8((uint32_t)(EAX + 0x11927f00), (CL));
  /* 11923b9a jmp 0x11923bbb */
  goto L_11923bbb;
L_11923b9c:;
  /* 11923b9c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923b9f jb 0x11923bb4 */
  if (C.cf) goto L_11923bb4;
  /* 11923ba1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923ba4 ja 0x11923bb4 */
  if ((!C.cf&&!C.zf)) goto L_11923bb4;
  /* 11923ba6 or byte ptr [eax + 0x11928001], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11928001)))|(0x20u); w8((uint32_t)(EAX + 0x11928001), (_r)); fl_logic(_r,8); }
  /* 11923bad mov cl, al */
  CL = (AL);
  /* 11923baf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11923bb2 jmp 0x11923b94 */
  goto L_11923b94;
L_11923bb4:;
  /* 11923bb4 and byte ptr [eax + 0x11927f00], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11927f00)))&(0x0u); w8((uint32_t)(EAX + 0x11927f00), (_r)); fl_logic(_r,8); }
L_11923bbb:;
  /* 11923bbb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11923bbc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923bbe jb 0x11923b7e */
  if (C.cf) goto L_11923b7e;
L_11923bc0:;
  /* 11923bc0 pop esi */
  ESI = (pop32());
  /* 11923bc1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923bc2 ret  */
  ESPCHK(0x11923a3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc3 @ 0x11923bc3 (28 bytes, 7 insns) */
void f_11923bc3(void) {
  FTRACE(0x11923bc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923bc3 cmp dword ptr [0x11928228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11928228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923bca jne 0x11923bde */
  if (!C.zf) goto L_11923bde;
  /* 11923bcc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11923bce call 0x119237eb */
  push32(0x11923bd3u); f_119237eb();
  /* 11923bd3 pop ecx */
  ECX = (pop32());
  /* 11923bd4 mov dword ptr [0x11928228], 1 */
  w32((uint32_t)(0x11928228), (0x1u));
L_11923bde:;
  /* 11923bde ret  */
  ESPCHK(0x11923bc3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003be0 @ 0x11923be0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11923be0(void) {
  FTRACE(0x11923be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11923be1 mov ebp, esp */
  EBP = (ESP);
  /* 11923be3 push edi */
  push32((uint32_t)(EDI));
  /* 11923be4 push esi */
  push32((uint32_t)(ESI));
  /* 11923be5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11923be8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11923beb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11923bee mov eax, ecx */
  EAX = (ECX);
  /* 11923bf0 mov edx, ecx */
  EDX = (ECX);
  /* 11923bf2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923bf4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923bf6 jbe 0x11923c00 */
  if ((C.cf||C.zf)) goto L_11923c00;
  /* 11923bf8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923bfa jb 0x11923d78 */
  if (C.cf) goto L_11923d78;
L_11923c00:;
  /* 11923c00 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11923c06 jne 0x11923c1c */
  if (!C.zf) goto L_11923c1c;
  /* 11923c08 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923c0b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11923c0e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923c11 jb 0x11923c3c */
  if (C.cf) goto L_11923c3c;
  /* 11923c13 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923c15 jmp dword ptr [edx*4 + 0x11923d28] */
  switch (EDX) {
    case 0: goto L_11923d38;
    case 1: goto L_11923d40;
    case 2: goto L_11923d4c;
    case 3: goto L_11923d60;
    default: x86_unimpl("switch@0x11923c15 out of table"); return;
  }
L_11923c1c:;
  /* 11923c1c mov eax, edi */
  EAX = (EDI);
  /* 11923c1e mov edx, 3 */
  EDX = (0x3u);
  /* 11923c23 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923c26 jb 0x11923c34 */
  if (C.cf) goto L_11923c34;
  /* 11923c28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11923c2b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923c2d jmp dword ptr [eax*4 + 0x11923c40] */
  switch (EAX) {
    case 1: goto L_11923c50;
    case 2: goto L_11923c7c;
    case 3: goto L_11923ca0;
    default: x86_unimpl("switch@0x11923c2d out of table"); return;
  }
L_11923c34:;
  /* 11923c34 jmp dword ptr [ecx*4 + 0x11923d38] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11923d38)))); return;
  /* 11923c3b nop  */
  /* nop */
L_11923c3c:;
  /* 11923c3c jmp dword ptr [ecx*4 + 0x11923cbc] */
  switch (ECX) {
    case 0: goto L_11923d1f;
    case 1: goto L_11923d0c;
    case 2: goto L_11923d04;
    case 3: goto L_11923cfc;
    case 4: goto L_11923cf4;
    case 5: goto L_11923cec;
    case 6: goto L_11923ce4;
    case 7: goto L_11923cdc;
    default: x86_unimpl("switch@0x11923c3c out of table"); return;
  }
  /* 11923c43 nop  */
  /* nop */
L_11923c50:;
  /* 11923c50 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923c52 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923c54 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923c56 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923c59 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923c5c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923c5f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923c62 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923c65 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923c68 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923c6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923c6e jb 0x11923c3c */
  if (C.cf) goto L_11923c3c;
  /* 11923c70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923c72 jmp dword ptr [edx*4 + 0x11923d28] */
  switch (EDX) {
    case 0: goto L_11923d38;
    case 1: goto L_11923d40;
    case 2: goto L_11923d4c;
    case 3: goto L_11923d60;
    default: x86_unimpl("switch@0x11923c72 out of table"); return;
  }
  /* 11923c79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923c7c:;
  /* 11923c7c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923c7e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923c80 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923c82 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923c85 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923c88 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923c8b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923c8e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923c91 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923c94 jb 0x11923c3c */
  if (C.cf) goto L_11923c3c;
  /* 11923c96 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923c98 jmp dword ptr [edx*4 + 0x11923d28] */
  switch (EDX) {
    case 0: goto L_11923d38;
    case 1: goto L_11923d40;
    case 2: goto L_11923d4c;
    case 3: goto L_11923d60;
    default: x86_unimpl("switch@0x11923c98 out of table"); return;
  }
  /* 11923c9f nop  */
  /* nop */
L_11923ca0:;
  /* 11923ca0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923ca2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923ca4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923ca6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11923ca7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923caa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11923cab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923cae jb 0x11923c3c */
  if (C.cf) goto L_11923c3c;
  /* 11923cb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923cb2 jmp dword ptr [edx*4 + 0x11923d28] */
  switch (EDX) {
    case 0: goto L_11923d38;
    case 1: goto L_11923d40;
    case 2: goto L_11923d4c;
    case 3: goto L_11923d60;
    default: x86_unimpl("switch@0x11923cb2 out of table"); return;
  }
  /* 11923cb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923cdc:;
  /* 11923cdc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11923ce0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11923ce4:;
  /* 11923ce4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11923ce8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11923cec:;
  /* 11923cec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11923cf0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11923cf4:;
  /* 11923cf4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11923cf8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11923cfc:;
  /* 11923cfc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11923d00 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11923d04:;
  /* 11923d04 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11923d08 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11923d0c:;
  /* 11923d0c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11923d10 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11923d14 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11923d1b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923d1d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11923d1f:;
  /* 11923d1f jmp dword ptr [edx*4 + 0x11923d28] */
  switch (EDX) {
    case 0: goto L_11923d38;
    case 1: goto L_11923d40;
    case 2: goto L_11923d4c;
    case 3: goto L_11923d60;
    default: x86_unimpl("switch@0x11923d1f out of table"); return;
  }
  /* 11923d26 mov edi, edi */
  EDI = (EDI);
L_11923d38:;
  /* 11923d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923d3b pop esi */
  ESI = (pop32());
  /* 11923d3c pop edi */
  EDI = (pop32());
  /* 11923d3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923d3e ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923d3f nop  */
  /* nop */
L_11923d40:;
  /* 11923d40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923d42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923d47 pop esi */
  ESI = (pop32());
  /* 11923d48 pop edi */
  EDI = (pop32());
  /* 11923d49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923d4a ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923d4b nop  */
  /* nop */
L_11923d4c:;
  /* 11923d4c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923d4e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923d50 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923d53 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923d56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923d59 pop esi */
  ESI = (pop32());
  /* 11923d5a pop edi */
  EDI = (pop32());
  /* 11923d5b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923d5c ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923d5d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923d60:;
  /* 11923d60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11923d62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11923d64 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923d67 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923d6a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923d6d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923d73 pop esi */
  ESI = (pop32());
  /* 11923d74 pop edi */
  EDI = (pop32());
  /* 11923d75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923d76 ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923d77 nop  */
  /* nop */
L_11923d78:;
  /* 11923d78 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11923d7c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11923d80 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11923d86 jne 0x11923dac */
  if (!C.zf) goto L_11923dac;
  /* 11923d88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923d8b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11923d8e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923d91 jb 0x11923da0 */
  if (C.cf) goto L_11923da0;
  /* 11923d93 std  */
  C.df=1;
  /* 11923d94 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923d96 cld  */
  C.df=0;
  /* 11923d97 jmp dword ptr [edx*4 + 0x11923ec0] */
  switch (EDX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923d97 out of table"); return;
  }
  /* 11923d9e mov edi, edi */
  EDI = (EDI);
L_11923da0:;
  /* 11923da0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11923da2 jmp dword ptr [ecx*4 + 0x11923e70] */
  switch (ECX) {
    case 0: goto L_11923eb7;
    default: x86_unimpl("switch@0x11923da2 out of table"); return;
  }
  /* 11923da9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923dac:;
  /* 11923dac mov eax, edi */
  EAX = (EDI);
  /* 11923dae mov edx, 3 */
  EDX = (0x3u);
  /* 11923db3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923db6 jb 0x11923dc4 */
  if (C.cf) goto L_11923dc4;
  /* 11923db8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11923dbb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923dbd jmp dword ptr [eax*4 + 0x11923dc8] */
  switch (EAX) {
    case 1: goto L_11923dd8;
    case 2: goto L_11923df8;
    case 3: goto L_11923e20;
    default: x86_unimpl("switch@0x11923dbd out of table"); return;
  }
L_11923dc4:;
  /* 11923dc4 jmp dword ptr [ecx*4 + 0x11923ec0] */
  switch (ECX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923dc4 out of table"); return;
  }
  /* 11923dcb nop  */
  /* nop */
L_11923dd8:;
  /* 11923dd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923ddb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923ddd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923de0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11923de1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923de4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11923de5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923de8 jb 0x11923da0 */
  if (C.cf) goto L_11923da0;
  /* 11923dea std  */
  C.df=1;
  /* 11923deb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923ded cld  */
  C.df=0;
  /* 11923dee jmp dword ptr [edx*4 + 0x11923ec0] */
  switch (EDX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923dee out of table"); return;
  }
  /* 11923df5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923df8:;
  /* 11923df8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923dfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923dfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923e00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923e03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923e06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923e09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923e0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923e0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923e12 jb 0x11923da0 */
  if (C.cf) goto L_11923da0;
  /* 11923e14 std  */
  C.df=1;
  /* 11923e15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923e17 cld  */
  C.df=0;
  /* 11923e18 jmp dword ptr [edx*4 + 0x11923ec0] */
  switch (EDX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923e18 out of table"); return;
  }
  /* 11923e1f nop  */
  /* nop */
L_11923e20:;
  /* 11923e20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923e23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11923e25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923e28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923e2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923e2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923e31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11923e34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923e37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923e3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923e3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923e40 jb 0x11923da0 */
  if (C.cf) goto L_11923da0;
  /* 11923e46 std  */
  C.df=1;
  /* 11923e47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11923e49 cld  */
  C.df=0;
  /* 11923e4a jmp dword ptr [edx*4 + 0x11923ec0] */
  switch (EDX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923e4a out of table"); return;
  }
  /* 11923e51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11923e54 je 0x11923e94 */
  if (C.zf) goto L_11923e94;
  /* 11923e56 xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11923e57 adc dword ptr [esi + edi - 0x6e], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + -0x6e))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + -0x6e), (_r)); fl_add(_a,_b,_r,32); }
  /* 11923e5b adc dword ptr [esi + edi + 0x3e8c1192], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0x3e8c1192))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0x3e8c1192), (_r)); fl_add(_a,_b,_r,32); }
  /* 11923e62 xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11923e63 adc dword ptr [esi + edi + 0x3e9c1192], edx */
  { uint32_t _a=(r32((uint32_t)(ESI + EDI*1 + 0x3e9c1192))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ESI + EDI*1 + 0x3e9c1192), (_r)); fl_add(_a,_b,_r,32); }
  /* 11923e6a xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11923e6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11923e6d xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11923e74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11923e78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11923e7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11923e80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11923e84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11923e88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11923e8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11923e90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
L_11923e94:;
  /* 11923e94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11923e98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11923e9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11923ea0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11923ea4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11923ea8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11923eac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11923eb3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11923eb5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11923eb7:;
  /* 11923eb7 jmp dword ptr [edx*4 + 0x11923ec0] */
  switch (EDX) {
    case 0: goto L_11923ed0;
    case 1: goto L_11923ed8;
    case 2: goto L_11923ee8;
    case 3: goto L_11923efc;
    default: x86_unimpl("switch@0x11923eb7 out of table"); return;
  }
  /* 11923ebe mov edi, edi */
  EDI = (EDI);
L_11923ed0:;
  /* 11923ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923ed3 pop esi */
  ESI = (pop32());
  /* 11923ed4 pop edi */
  EDI = (pop32());
  /* 11923ed5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923ed6 ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923ed7 nop  */
  /* nop */
L_11923ed8:;
  /* 11923ed8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923edb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923ede mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923ee1 pop esi */
  ESI = (pop32());
  /* 11923ee2 pop edi */
  EDI = (pop32());
  /* 11923ee3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923ee4 ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923ee5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11923ee8:;
  /* 11923ee8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923eeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923eee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923ef1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923ef4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923ef7 pop esi */
  ESI = (pop32());
  /* 11923ef8 pop edi */
  EDI = (pop32());
  /* 11923ef9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923efa ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
  /* 11923efb nop  */
  /* nop */
L_11923efc:;
  /* 11923efc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11923eff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11923f02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11923f05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11923f08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11923f0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11923f0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923f11 pop esi */
  ESI = (pop32());
  /* 11923f12 pop edi */
  EDI = (pop32());
  /* 11923f13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11923f14 ret  */
  ESPCHK(0x11923be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f15 @ 0x11923f15 (62 bytes, 15 insns) */
void f_11923f15(void) {
  FTRACE(0x11923f15u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923f15 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11923f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11923f1c push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 11923f22 call dword ptr [0x1192603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192603c))), 0x11923f28u);
  /* 11923f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11923f2a mov dword ptr [0x11927ee4], eax */
  w32((uint32_t)(0x11927ee4), (EAX));
  /* 11923f2f jne 0x11923f32 */
  if (!C.zf) goto L_11923f32;
  /* 11923f31 ret  */
  ESPCHK(0x11923f15u, _esp0);
  ESP += 4; return;
L_11923f32:;
  /* 11923f32 and dword ptr [0x11927edc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11927edc)))&(0x0u); w32((uint32_t)(0x11927edc), (_r)); fl_logic(_r,32); }
  /* 11923f39 and dword ptr [0x11927ee0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11927ee0)))&(0x0u); w32((uint32_t)(0x11927ee0), (_r)); fl_logic(_r,32); }
  /* 11923f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11923f42 mov dword ptr [0x11927ed8], eax */
  w32((uint32_t)(0x11927ed8), (EAX));
  /* 11923f47 mov dword ptr [0x11927ed0], 0x10 */
  w32((uint32_t)(0x11927ed0), (0x10u));
  /* 11923f51 pop eax */
  EAX = (pop32());
  /* 11923f52 ret  */
  ESPCHK(0x11923f15u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f53 @ 0x11923f53 (43 bytes, 14 insns) */
void f_11923f53(void) {
  FTRACE(0x11923f53u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923f53 mov eax, dword ptr [0x11927ee0] */
  EAX = (r32((uint32_t)(0x11927ee0)));
  /* 11923f58 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11923f5b mov eax, dword ptr [0x11927ee4] */
  EAX = (r32((uint32_t)(0x11927ee4)));
  /* 11923f60 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11923f63:;
  /* 11923f63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923f65 jae 0x11923f7b */
  if (!C.cf) goto L_11923f7b;
  /* 11923f67 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11923f6b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923f6e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923f74 jb 0x11923f7d */
  if (C.cf) goto L_11923f7d;
  /* 11923f76 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923f79 jmp 0x11923f63 */
  goto L_11923f63;
L_11923f7b:;
  /* 11923f7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11923f7d:;
  /* 11923f7d ret  */
  ESPCHK(0x11923f53u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f7e @ 0x11923f7e (811 bytes, 264 insns) */
void f_11923f7e(void) {
  FTRACE(0x11923f7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11923f7e push ebp */
  push32((uint32_t)(EBP));
  /* 11923f7f mov ebp, esp */
  EBP = (ESP);
  /* 11923f81 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923f84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11923f87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11923f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11923f8b push esi */
  push32((uint32_t)(ESI));
  /* 11923f8c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11923f8f mov esi, edx */
  ESI = (EDX);
  /* 11923f91 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11923f94 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11923f97 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11923f9a push edi */
  push32((uint32_t)(EDI));
  /* 11923f9b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11923f9e mov ecx, esi */
  ECX = (ESI);
  /* 11923fa0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11923fa3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11923fa9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11923faa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11923fad lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11923fb4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11923fb7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11923fba mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11923fbd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11923fc0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11923fc3 jne 0x11924044 */
  if (!C.zf) goto L_11924044;
  /* 11923fc5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11923fc8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11923fca dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11923fcb pop edi */
  EDI = (pop32());
  /* 11923fcc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11923fcf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923fd1 jbe 0x11923fd6 */
  if ((C.cf||C.zf)) goto L_11923fd6;
  /* 11923fd3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11923fd6:;
  /* 11923fd6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11923fda cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923fde jne 0x11924028 */
  if (!C.zf) goto L_11924028;
  /* 11923fe0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11923fe3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11923fe6 jae 0x11924004 */
  if (!C.cf) goto L_11924004;
  /* 11923fe8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11923fed shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11923fef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11923ff3 not edi */
  EDI = (~(EDI));
  /* 11923ff5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11923ff9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11923ffb jne 0x11924028 */
  if (!C.zf) goto L_11924028;
  /* 11923ffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924000 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11924002 jmp 0x11924028 */
  goto L_11924028;
L_11924004:;
  /* 11924004 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924007 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1192400c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1192400e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11924011 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11924015 not edi */
  EDI = (~(EDI));
  /* 11924017 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1192401e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11924020 jne 0x11924028 */
  if (!C.zf) goto L_11924028;
  /* 11924022 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924025 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11924028:;
  /* 11924028 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1192402c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11924030 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11924033 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11924037 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1192403b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192403e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11924041 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11924044:;
  /* 11924044 mov edi, ebx */
  EDI = (EBX);
  /* 11924046 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11924049 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1192404a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192404d jbe 0x11924052 */
  if ((C.cf||C.zf)) goto L_11924052;
  /* 1192404f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11924051 pop edi */
  EDI = (pop32());
L_11924052:;
  /* 11924052 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11924055 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11924058 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1192405b jne 0x11924101 */
  if (!C.zf) goto L_11924101;
  /* 11924061 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11924067 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1192406a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1192406c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1192406f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11924070 pop edx */
  EDX = (pop32());
  /* 11924071 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924073 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11924076 jbe 0x1192407d */
  if ((C.cf||C.zf)) goto L_1192407d;
  /* 11924078 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1192407b mov ecx, edx */
  ECX = (EDX);
L_1192407d:;
  /* 1192407d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924080 mov edi, ebx */
  EDI = (EBX);
  /* 11924082 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11924085 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11924088 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11924089 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192408b jbe 0x1192408f */
  if ((C.cf||C.zf)) goto L_1192408f;
  /* 1192408d mov edi, edx */
  EDI = (EDX);
L_1192408f:;
  /* 1192408f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924091 je 0x119240fe */
  if (C.zf) goto L_119240fe;
  /* 11924093 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11924096 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11924099 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192409c jne 0x119240e6 */
  if (!C.zf) goto L_119240e6;
  /* 1192409e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119240a1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119240a4 jae 0x119240c2 */
  if (!C.cf) goto L_119240c2;
  /* 119240a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119240ab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119240ad lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119240b1 not edx */
  EDX = (~(EDX));
  /* 119240b3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119240b7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119240b9 jne 0x119240e6 */
  if (!C.zf) goto L_119240e6;
  /* 119240bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119240be and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119240c0 jmp 0x119240e6 */
  goto L_119240e6;
L_119240c2:;
  /* 119240c2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119240c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119240ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119240cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119240cf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 119240d3 not edx */
  EDX = (~(EDX));
  /* 119240d5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119240dc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 119240de jne 0x119240e6 */
  if (!C.zf) goto L_119240e6;
  /* 119240e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119240e3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_119240e6:;
  /* 119240e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119240e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 119240ec mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 119240ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 119240f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 119240f5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 119240f8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 119240fb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_119240fe:;
  /* 119240fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11924101:;
  /* 11924101 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924105 jne 0x11924110 */
  if (!C.zf) goto L_11924110;
  /* 11924107 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192410a je 0x11924199 */
  if (C.zf) goto L_11924199;
L_11924110:;
  /* 11924110 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11924113 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11924116 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11924119 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1192411c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1192411f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11924122 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11924125 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11924128 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1192412b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1192412e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11924131 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924134 jne 0x11924199 */
  if (!C.zf) goto L_11924199;
  /* 11924136 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1192413a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192413d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11924140 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11924142 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11924146 jae 0x1192416d */
  if (!C.cf) goto L_1192416d;
  /* 11924148 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1192414c jne 0x1192415c */
  if (!C.zf) goto L_1192415c;
  /* 1192414e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11924153 mov ecx, edi */
  ECX = (EDI);
  /* 11924155 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11924157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1192415a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1192415c:;
  /* 1192415c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11924161 mov ecx, edi */
  ECX = (EDI);
  /* 11924163 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11924165 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11924169 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1192416b jmp 0x11924196 */
  goto L_11924196;
L_1192416d:;
  /* 1192416d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11924171 jne 0x11924183 */
  if (!C.zf) goto L_11924183;
  /* 11924173 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11924176 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1192417b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1192417d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924180 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11924183:;
  /* 11924183 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11924186 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1192418b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1192418d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11924194 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11924196:;
  /* 11924196 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11924199:;
  /* 11924199 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1192419c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 1192419e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 119241a2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 119241a4 jne 0x119242a4 */
  if (!C.zf) goto L_119242a4;
  /* 119241aa mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 119241af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119241b1 je 0x11924296 */
  if (C.zf) goto L_11924296;
  /* 119241b7 mov ecx, dword ptr [0x11927ed4] */
  ECX = (r32((uint32_t)(0x11927ed4)));
  /* 119241bd mov edi, dword ptr [0x11926050] */
  EDI = (r32((uint32_t)(0x11926050)));
  /* 119241c3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 119241c6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119241c9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 119241ce push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119241d3 push ebx */
  push32((uint32_t)(EBX));
  /* 119241d4 push ecx */
  push32((uint32_t)(ECX));
  /* 119241d5 call edi */
  call_ind((uint32_t)(EDI), 0x119241d7u);
  /* 119241d7 mov ecx, dword ptr [0x11927ed4] */
  ECX = (r32((uint32_t)(0x11927ed4)));
  /* 119241dd mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 119241e2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119241e7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119241e9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 119241ec mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 119241f1 mov ecx, dword ptr [0x11927ed4] */
  ECX = (r32((uint32_t)(0x11927ed4)));
  /* 119241f7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 119241fa and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11924202 mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 11924207 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1192420a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1192420d mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 11924212 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11924215 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11924219 jne 0x11924224 */
  if (!C.zf) goto L_11924224;
  /* 1192421b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1192421f mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
L_11924224:;
  /* 11924224 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924228 jne 0x11924296 */
  if (!C.zf) goto L_11924296;
  /* 1192422a push ebx */
  push32((uint32_t)(EBX));
  /* 1192422b push 0 */
  push32((uint32_t)(0x0u));
  /* 1192422d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11924230 call edi */
  call_ind((uint32_t)(EDI), 0x11924232u);
  /* 11924232 mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 11924237 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1192423a push 0 */
  push32((uint32_t)(0x0u));
  /* 1192423c push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 11924242 call dword ptr [0x1192604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192604c))), 0x11924248u);
  /* 11924248 mov eax, dword ptr [0x11927ee0] */
  EAX = (r32((uint32_t)(0x11927ee0)));
  /* 1192424d mov edx, dword ptr [0x11927ee4] */
  EDX = (r32((uint32_t)(0x11927ee4)));
  /* 11924253 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11924256 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11924259 mov ecx, eax */
  ECX = (EAX);
  /* 1192425b mov eax, dword ptr [0x11927edc] */
  EAX = (r32((uint32_t)(0x11927edc)));
  /* 11924260 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924262 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11924266 push ecx */
  push32((uint32_t)(ECX));
  /* 11924267 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1192426a push ecx */
  push32((uint32_t)(ECX));
  /* 1192426b push eax */
  push32((uint32_t)(EAX));
  /* 1192426c call 0x11924d00 */
  push32(0x11924271u); f_11924d00();
  /* 11924271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11924277 dec dword ptr [0x11927ee0] */
  { uint32_t _r=(r32((uint32_t)(0x11927ee0)))-1; w32((uint32_t)(0x11927ee0), (_r)); fl_dec(_r,32); }
  /* 1192427d cmp eax, dword ptr [0x11927edc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11927edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924283 jbe 0x11924288 */
  if ((C.cf||C.zf)) goto L_11924288;
  /* 11924285 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11924288:;
  /* 11924288 mov ecx, dword ptr [0x11927ee4] */
  ECX = (r32((uint32_t)(0x11927ee4)));
  /* 1192428e mov dword ptr [0x11927ed8], ecx */
  w32((uint32_t)(0x11927ed8), (ECX));
  /* 11924294 jmp 0x11924299 */
  goto L_11924299;
L_11924296:;
  /* 11924296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11924299:;
  /* 11924299 mov dword ptr [0x11927edc], eax */
  w32((uint32_t)(0x11927edc), (EAX));
  /* 1192429e mov dword ptr [0x11927ed4], esi */
  w32((uint32_t)(0x11927ed4), (ESI));
L_119242a4:;
  /* 119242a4 pop edi */
  EDI = (pop32());
  /* 119242a5 pop esi */
  ESI = (pop32());
  /* 119242a6 pop ebx */
  EBX = (pop32());
  /* 119242a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119242a8 ret  */
  ESPCHK(0x11923f7eu, _esp0);
  ESP += 4; return;
}

/* FUN_100042a9 @ 0x119242a9 (777 bytes, 275 insns) */
void f_119242a9(void) {
  FTRACE(0x119242a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119242a9 push ebp */
  push32((uint32_t)(EBP));
  /* 119242aa mov ebp, esp */
  EBP = (ESP);
  /* 119242ac sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119242af mov eax, dword ptr [0x11927ee0] */
  EAX = (r32((uint32_t)(0x11927ee0)));
  /* 119242b4 mov edx, dword ptr [0x11927ee4] */
  EDX = (r32((uint32_t)(0x11927ee4)));
  /* 119242ba push ebx */
  push32((uint32_t)(EBX));
  /* 119242bb push esi */
  push32((uint32_t)(ESI));
  /* 119242bc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119242bf push edi */
  push32((uint32_t)(EDI));
  /* 119242c0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 119242c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119242c6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 119242c9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 119242cc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 119242cf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 119242d2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 119242d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119242d6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119242d9 jge 0x119242e9 */
  if ((C.sf==C.of)) goto L_119242e9;
  /* 119242db or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 119242de shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 119242e0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 119242e4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119242e7 jmp 0x119242f9 */
  goto L_119242f9;
L_119242e9:;
  /* 119242e9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119242ec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119242ef xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119242f1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119242f3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119242f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119242f9:;
  /* 119242f9 mov eax, dword ptr [0x11927ed8] */
  EAX = (r32((uint32_t)(0x11927ed8)));
  /* 119242fe mov ebx, eax */
  EBX = (EAX);
  /* 11924300 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924302 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11924305 jae 0x11924320 */
  if (!C.cf) goto L_11924320;
L_11924307:;
  /* 11924307 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1192430a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1192430c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1192430f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11924311 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11924313 jne 0x11924320 */
  if (!C.zf) goto L_11924320;
  /* 11924315 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924318 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192431b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1192431e jb 0x11924307 */
  if (C.cf) goto L_11924307;
L_11924320:;
  /* 11924320 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924323 jne 0x1192439e */
  if (!C.zf) goto L_1192439e;
  /* 11924325 mov ebx, edx */
  EBX = (EDX);
L_11924327:;
  /* 11924327 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924329 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1192432c jae 0x11924343 */
  if (!C.cf) goto L_11924343;
  /* 1192432e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11924331 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11924333 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11924336 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11924338 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1192433a jne 0x11924341 */
  if (!C.zf) goto L_11924341;
  /* 1192433c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192433f jmp 0x11924327 */
  goto L_11924327;
L_11924341:;
  /* 11924341 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11924343:;
  /* 11924343 jne 0x1192439e */
  if (!C.zf) goto L_1192439e;
L_11924345:;
  /* 11924345 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924348 jae 0x1192435b */
  if (!C.cf) goto L_1192435b;
  /* 1192434a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192434e jne 0x11924358 */
  if (!C.zf) goto L_11924358;
  /* 11924350 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924353 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11924356 jmp 0x11924345 */
  goto L_11924345;
L_11924358:;
  /* 11924358 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1192435b:;
  /* 1192435b jne 0x11924383 */
  if (!C.zf) goto L_11924383;
  /* 1192435d mov ebx, edx */
  EBX = (EDX);
L_1192435f:;
  /* 1192435f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924361 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11924364 jae 0x11924373 */
  if (!C.cf) goto L_11924373;
  /* 11924366 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192436a jne 0x11924371 */
  if (!C.zf) goto L_11924371;
  /* 1192436c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192436f jmp 0x1192435f */
  goto L_1192435f;
L_11924371:;
  /* 11924371 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11924373:;
  /* 11924373 jne 0x11924383 */
  if (!C.zf) goto L_11924383;
  /* 11924375 call 0x119245b2 */
  push32(0x1192437au); f_119245b2();
  /* 1192437a mov ebx, eax */
  EBX = (EAX);
  /* 1192437c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1192437e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11924381 je 0x11924397 */
  if (C.zf) goto L_11924397;
L_11924383:;
  /* 11924383 push ebx */
  push32((uint32_t)(EBX));
  /* 11924384 call 0x11924663 */
  push32(0x11924389u); f_11924663();
  /* 11924389 pop ecx */
  ECX = (pop32());
  /* 1192438a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1192438d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1192438f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11924392 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924395 jne 0x1192439e */
  if (!C.zf) goto L_1192439e;
L_11924397:;
  /* 11924397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11924399 jmp 0x119245ad */
  goto L_119245ad;
L_1192439e:;
  /* 1192439e mov dword ptr [0x11927ed8], ebx */
  w32((uint32_t)(0x11927ed8), (EBX));
  /* 119243a4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 119243a7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 119243a9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119243ac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 119243af je 0x119243c5 */
  if (C.zf) goto L_119243c5;
  /* 119243b1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 119243b8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 119243bc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119243bf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119243c1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119243c3 jne 0x119243fc */
  if (!C.zf) goto L_119243fc;
L_119243c5:;
  /* 119243c5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 119243cb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 119243ce and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119243d1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 119243d4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119243d8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 119243db or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 119243dd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 119243e0 jne 0x119243f9 */
  if (!C.zf) goto L_119243f9;
L_119243e2:;
  /* 119243e2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 119243e8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119243eb and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119243ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119243f1 mov edi, esi */
  EDI = (ESI);
  /* 119243f3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 119243f5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 119243f7 je 0x119243e2 */
  if (C.zf) goto L_119243e2;
L_119243f9:;
  /* 119243f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_119243fc:;
  /* 119243fc mov ecx, edx */
  ECX = (EDX);
  /* 119243fe xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11924400 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11924406 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1192440d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11924410 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11924414 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11924416 jne 0x11924425 */
  if (!C.zf) goto L_11924425;
  /* 11924418 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1192441f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11924421 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11924424 pop edi */
  EDI = (pop32());
L_11924425:;
  /* 11924425 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11924427 jl 0x1192442e */
  if ((C.sf!=C.of)) goto L_1192442e;
  /* 11924429 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1192442b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1192442c jmp 0x11924425 */
  goto L_11924425;
L_1192442e:;
  /* 1192442e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11924431 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11924435 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11924437 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1192443a mov esi, ecx */
  ESI = (ECX);
  /* 1192443c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1192443f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11924442 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11924443 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924446 jle 0x1192444b */
  if ((C.zf||C.sf!=C.of)) goto L_1192444b;
  /* 11924448 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1192444a pop esi */
  ESI = (pop32());
L_1192444b:;
  /* 1192444b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192444d je 0x11924560 */
  if (C.zf) goto L_11924560;
  /* 11924453 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11924456 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924459 jne 0x119244bc */
  if (!C.zf) goto L_119244bc;
  /* 1192445b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192445e jge 0x1192448b */
  if ((C.sf==C.of)) goto L_1192448b;
  /* 11924460 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11924465 mov ecx, edi */
  ECX = (EDI);
  /* 11924467 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11924469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1192446c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11924470 not ebx */
  EBX = (~(EBX));
  /* 11924472 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11924475 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11924479 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1192447d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1192447f jne 0x119244b9 */
  if (!C.zf) goto L_119244b9;
  /* 11924481 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924484 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11924487 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 11924489 jmp 0x119244bc */
  goto L_119244bc;
L_1192448b:;
  /* 1192448b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1192448e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11924493 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11924495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11924498 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1192449c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 119244a3 not ebx */
  EBX = (~(EBX));
  /* 119244a5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 119244a7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 119244a9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 119244ac jne 0x119244b9 */
  if (!C.zf) goto L_119244b9;
  /* 119244ae mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 119244b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 119244b4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 119244b7 jmp 0x119244bc */
  goto L_119244bc;
L_119244b9:;
  /* 119244b9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_119244bc:;
  /* 119244bc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 119244bf mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 119244c2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119244c6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 119244c9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119244cc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 119244cf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 119244d2 je 0x1192456c */
  if (C.zf) goto L_1192456c;
  /* 119244d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119244db mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 119244df lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 119244e2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 119244e5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119244e8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119244eb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119244ee mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119244f1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119244f4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119244f7 jne 0x1192455d */
  if (!C.zf) goto L_1192455d;
  /* 119244f9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 119244fd cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924500 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11924503 jge 0x1192452e */
  if ((C.sf==C.of)) goto L_1192452e;
  /* 11924505 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11924507 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1192450b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1192450f jne 0x1192451c */
  if (!C.zf) goto L_1192451c;
  /* 11924511 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11924516 mov ecx, esi */
  ECX = (ESI);
  /* 11924518 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1192451a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1192451c:;
  /* 1192451c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11924521 mov ecx, esi */
  ECX = (ESI);
  /* 11924523 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11924525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11924528 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1192452c jmp 0x1192455d */
  goto L_1192455d;
L_1192452e:;
  /* 1192452e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11924530 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11924534 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11924538 jne 0x11924547 */
  if (!C.zf) goto L_11924547;
  /* 1192453a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1192453d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11924542 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11924544 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11924547:;
  /* 11924547 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1192454a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11924551 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11924554 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11924559 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1192455b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1192455d:;
  /* 1192455d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11924560:;
  /* 11924560 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11924562 je 0x1192456f */
  if (C.zf) goto L_1192456f;
  /* 11924564 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11924566 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1192456a jmp 0x1192456f */
  goto L_1192456f;
L_1192456c:;
  /* 1192456c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1192456f:;
  /* 1192456f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11924572 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924574 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11924577 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11924579 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1192457d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11924580 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11924582 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11924584 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11924587 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11924589 jne 0x119245a5 */
  if (!C.zf) goto L_119245a5;
  /* 1192458b cmp ebx, dword ptr [0x11927edc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11927edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924591 jne 0x119245a5 */
  if (!C.zf) goto L_119245a5;
  /* 11924593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11924596 cmp ecx, dword ptr [0x11927ed4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11927ed4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192459c jne 0x119245a5 */
  if (!C.zf) goto L_119245a5;
  /* 1192459e and dword ptr [0x11927edc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11927edc)))&(0x0u); w32((uint32_t)(0x11927edc), (_r)); fl_logic(_r,32); }
L_119245a5:;
  /* 119245a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119245a8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119245aa lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_119245ad:;
  /* 119245ad pop edi */
  EDI = (pop32());
  /* 119245ae pop esi */
  ESI = (pop32());
  /* 119245af pop ebx */
  EBX = (pop32());
  /* 119245b0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119245b1 ret  */
  ESPCHK(0x119242a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100045b2 @ 0x119245b2 (177 bytes, 53 insns) */
void f_119245b2(void) {
  FTRACE(0x119245b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119245b2 mov eax, dword ptr [0x11927ee0] */
  EAX = (r32((uint32_t)(0x11927ee0)));
  /* 119245b7 mov ecx, dword ptr [0x11927ed0] */
  ECX = (r32((uint32_t)(0x11927ed0)));
  /* 119245bd push esi */
  push32((uint32_t)(ESI));
  /* 119245be push edi */
  push32((uint32_t)(EDI));
  /* 119245bf xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119245c1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119245c3 jne 0x119245f5 */
  if (!C.zf) goto L_119245f5;
  /* 119245c5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 119245c9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 119245cc push eax */
  push32((uint32_t)(EAX));
  /* 119245cd push dword ptr [0x11927ee4] */
  push32((uint32_t)(r32((uint32_t)(0x11927ee4))));
  /* 119245d3 push edi */
  push32((uint32_t)(EDI));
  /* 119245d4 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 119245da call dword ptr [0x11926028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926028))), 0x119245e0u);
  /* 119245e0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119245e2 je 0x11924645 */
  if (C.zf) goto L_11924645;
  /* 119245e4 add dword ptr [0x11927ed0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11927ed0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11927ed0), (_r)); fl_add(_a,_b,_r,32); }
  /* 119245eb mov dword ptr [0x11927ee4], eax */
  w32((uint32_t)(0x11927ee4), (EAX));
  /* 119245f0 mov eax, dword ptr [0x11927ee0] */
  EAX = (r32((uint32_t)(0x11927ee0)));
L_119245f5:;
  /* 119245f5 mov ecx, dword ptr [0x11927ee4] */
  ECX = (r32((uint32_t)(0x11927ee4)));
  /* 119245fb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11924600 push 8 */
  push32((uint32_t)(0x8u));
  /* 11924602 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11924605 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 1192460b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1192460e call dword ptr [0x1192603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192603c))), 0x11924614u);
  /* 11924614 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924616 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11924619 je 0x11924645 */
  if (C.zf) goto L_11924645;
  /* 1192461b push 4 */
  push32((uint32_t)(0x4u));
  /* 1192461d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11924622 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11924627 push edi */
  push32((uint32_t)(EDI));
  /* 11924628 call dword ptr [0x1192602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192602c))), 0x1192462eu);
  /* 1192462e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924630 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11924633 jne 0x11924649 */
  if (!C.zf) goto L_11924649;
  /* 11924635 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11924638 push edi */
  push32((uint32_t)(EDI));
  /* 11924639 push dword ptr [0x11928108] */
  push32((uint32_t)(r32((uint32_t)(0x11928108))));
  /* 1192463f call dword ptr [0x1192604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192604c))), 0x11924645u);
L_11924645:;
  /* 11924645 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11924647 jmp 0x11924660 */
  goto L_11924660;
L_11924649:;
  /* 11924649 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1192464d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1192464f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11924652 inc dword ptr [0x11927ee0] */
  { uint32_t _r=(r32((uint32_t)(0x11927ee0)))+1; w32((uint32_t)(0x11927ee0), (_r)); fl_inc(_r,32); }
  /* 11924658 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1192465b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1192465e mov eax, esi */
  EAX = (ESI);
L_11924660:;
  /* 11924660 pop edi */
  EDI = (pop32());
  /* 11924661 pop esi */
  ESI = (pop32());
  /* 11924662 ret  */
  ESPCHK(0x119245b2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004663 @ 0x11924663 (251 bytes, 85 insns) */
void f_11924663(void) {
  FTRACE(0x11924663u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924663 push ebp */
  push32((uint32_t)(EBP));
  /* 11924664 mov ebp, esp */
  EBP = (ESP);
  /* 11924666 push ecx */
  push32((uint32_t)(ECX));
  /* 11924667 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1192466a push ebx */
  push32((uint32_t)(EBX));
  /* 1192466b push esi */
  push32((uint32_t)(ESI));
  /* 1192466c push edi */
  push32((uint32_t)(EDI));
  /* 1192466d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11924670 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11924673 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11924675:;
  /* 11924675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924677 jl 0x1192467e */
  if ((C.sf!=C.of)) goto L_1192467e;
  /* 11924679 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1192467b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1192467c jmp 0x11924675 */
  goto L_11924675;
L_1192467e:;
  /* 1192467e mov eax, ebx */
  EAX = (EBX);
  /* 11924680 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11924682 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11924688 pop edx */
  EDX = (pop32());
  /* 11924689 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11924690 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11924693:;
  /* 11924693 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11924696 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 11924699 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192469c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1192469d jne 0x11924693 */
  if (!C.zf) goto L_11924693;
  /* 1192469f mov edi, ebx */
  EDI = (EBX);
  /* 119246a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 119246a3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 119246a6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119246a9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119246ae push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 119246b3 push edi */
  push32((uint32_t)(EDI));
  /* 119246b4 call dword ptr [0x1192602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192602c))), 0x119246bau);
  /* 119246ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119246bc jne 0x119246c6 */
  if (!C.zf) goto L_119246c6;
  /* 119246be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119246c1 jmp 0x11924759 */
  goto L_11924759;
L_119246c6:;
  /* 119246c6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 119246cc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119246ce ja 0x1192470c */
  if ((!C.cf&&!C.zf)) goto L_1192470c;
  /* 119246d0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_119246d3:;
  /* 119246d3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 119246d7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 119246de lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 119246e4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 119246eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119246ed lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 119246f3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119246f6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11924700 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924705 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11924708 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192470a jbe 0x119246d3 */
  if ((C.cf||C.zf)) goto L_119246d3;
L_1192470c:;
  /* 1192470c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1192470f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11924712 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924717 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924719 pop edi */
  EDI = (pop32());
  /* 1192471a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1192471d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11924720 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11924723 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11924726 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11924729 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1192472e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11924735 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11924738 mov cl, al */
  CL = (AL);
  /* 1192473a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1192473c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192473e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924741 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11924744 jne 0x11924749 */
  if (!C.zf) goto L_11924749;
  /* 11924746 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11924749:;
  /* 11924749 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1192474e mov ecx, ebx */
  ECX = (EBX);
  /* 11924750 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11924752 not edx */
  EDX = (~(EDX));
  /* 11924754 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11924757 mov eax, ebx */
  EAX = (EBX);
L_11924759:;
  /* 11924759 pop edi */
  EDI = (pop32());
  /* 1192475a pop esi */
  ESI = (pop32());
  /* 1192475b pop ebx */
  EBX = (pop32());
  /* 1192475c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1192475d ret  */
  ESPCHK(0x11924663u, _esp0);
  ESP += 4; return;
}

/* FUN_1000475e @ 0x1192475e (137 bytes, 50 insns) */
void f_1192475e(void) {
  FTRACE(0x1192475eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192475e push ebx */
  push32((uint32_t)(EBX));
  /* 1192475f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11924761 cmp dword ptr [0x11927e94], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11927e94))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924767 push esi */
  push32((uint32_t)(ESI));
  /* 11924768 push edi */
  push32((uint32_t)(EDI));
  /* 11924769 jne 0x119247ad */
  if (!C.zf) goto L_119247ad;
  /* 1192476b push 0x11926498 */
  push32((uint32_t)(0x11926498u));
  /* 11924770 call dword ptr [0x1192601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192601c))), 0x11924776u);
  /* 11924776 mov edi, eax */
  EDI = (EAX);
  /* 11924778 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192477a je 0x119247e3 */
  if (C.zf) goto L_119247e3;
  /* 1192477c mov esi, dword ptr [0x11926020] */
  ESI = (r32((uint32_t)(0x11926020)));
  /* 11924782 push 0x1192648c */
  push32((uint32_t)(0x1192648cu));
  /* 11924787 push edi */
  push32((uint32_t)(EDI));
  /* 11924788 call esi */
  call_ind((uint32_t)(ESI), 0x1192478au);
  /* 1192478a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192478c mov dword ptr [0x11927e94], eax */
  w32((uint32_t)(0x11927e94), (EAX));
  /* 11924791 je 0x119247e3 */
  if (C.zf) goto L_119247e3;
  /* 11924793 push 0x1192647c */
  push32((uint32_t)(0x1192647cu));
  /* 11924798 push edi */
  push32((uint32_t)(EDI));
  /* 11924799 call esi */
  call_ind((uint32_t)(ESI), 0x1192479bu);
  /* 1192479b push 0x11926468 */
  push32((uint32_t)(0x11926468u));
  /* 119247a0 push edi */
  push32((uint32_t)(EDI));
  /* 119247a1 mov dword ptr [0x11927e98], eax */
  w32((uint32_t)(0x11927e98), (EAX));
  /* 119247a6 call esi */
  call_ind((uint32_t)(ESI), 0x119247a8u);
  /* 119247a8 mov dword ptr [0x11927e9c], eax */
  w32((uint32_t)(0x11927e9c), (EAX));
L_119247ad:;
  /* 119247ad mov eax, dword ptr [0x11927e98] */
  EAX = (r32((uint32_t)(0x11927e98)));
  /* 119247b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119247b4 je 0x119247cc */
  if (C.zf) goto L_119247cc;
  /* 119247b6 call eax */
  call_ind((uint32_t)(EAX), 0x119247b8u);
  /* 119247b8 mov ebx, eax */
  EBX = (EAX);
  /* 119247ba test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119247bc je 0x119247cc */
  if (C.zf) goto L_119247cc;
  /* 119247be mov eax, dword ptr [0x11927e9c] */
  EAX = (r32((uint32_t)(0x11927e9c)));
  /* 119247c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119247c5 je 0x119247cc */
  if (C.zf) goto L_119247cc;
  /* 119247c7 push ebx */
  push32((uint32_t)(EBX));
  /* 119247c8 call eax */
  call_ind((uint32_t)(EAX), 0x119247cau);
  /* 119247ca mov ebx, eax */
  EBX = (EAX);
L_119247cc:;
  /* 119247cc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119247d0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119247d4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 119247d8 push ebx */
  push32((uint32_t)(EBX));
  /* 119247d9 call dword ptr [0x11927e94] */
  call_ind((uint32_t)(r32((uint32_t)(0x11927e94))), 0x119247dfu);
L_119247df:;
  /* 119247df pop edi */
  EDI = (pop32());
  /* 119247e0 pop esi */
  ESI = (pop32());
  /* 119247e1 pop ebx */
  EBX = (pop32());
  /* 119247e2 ret  */
  ESPCHK(0x1192475eu, _esp0);
  ESP += 4; return;
L_119247e3:;
  /* 119247e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119247e5 jmp 0x119247df */
  goto L_119247df;
}

/* _strncpy @ 0x119247f0 (254 bytes, 109 insns) */
void f_119247f0(void) {
  FTRACE(0x119247f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119247f0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119247f4 push edi */
  push32((uint32_t)(EDI));
  /* 119247f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119247f7 je 0x11924873 */
  if (C.zf) goto L_11924873;
  /* 119247f9 push esi */
  push32((uint32_t)(ESI));
  /* 119247fa push ebx */
  push32((uint32_t)(EBX));
  /* 119247fb mov ebx, ecx */
  EBX = (ECX);
  /* 119247fd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11924801 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11924807 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1192480b jne 0x11924814 */
  if (!C.zf) goto L_11924814;
  /* 1192480d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924810 jne 0x11924881 */
  if (!C.zf) goto L_11924881;
  /* 11924812 jmp 0x11924835 */
  goto L_11924835;
L_11924814:;
  /* 11924814 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924816 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11924817 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924819 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1192481a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1192481b je 0x11924842 */
  if (C.zf) goto L_11924842;
  /* 1192481d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192481f je 0x1192484a */
  if (C.zf) goto L_1192484a;
  /* 11924821 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11924827 jne 0x11924814 */
  if (!C.zf) goto L_11924814;
  /* 11924829 mov ebx, ecx */
  EBX = (ECX);
  /* 1192482b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1192482e jne 0x11924881 */
  if (!C.zf) goto L_11924881;
L_11924830:;
  /* 11924830 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11924833 je 0x11924842 */
  if (C.zf) goto L_11924842;
L_11924835:;
  /* 11924835 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924837 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11924838 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1192483a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1192483b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1192483d je 0x1192486e */
  if (C.zf) goto L_1192486e;
  /* 1192483f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11924840 jne 0x11924835 */
  if (!C.zf) goto L_11924835;
L_11924842:;
  /* 11924842 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11924846 pop ebx */
  EBX = (pop32());
  /* 11924847 pop esi */
  ESI = (pop32());
  /* 11924848 pop edi */
  EDI = (pop32());
  /* 11924849 ret  */
  ESPCHK(0x119247f0u, _esp0);
  ESP += 4; return;
L_1192484a:;
  /* 1192484a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11924850 je 0x11924864 */
  if (C.zf) goto L_11924864;
L_11924852:;
  /* 11924852 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924854 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11924855 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11924856 je 0x119248e6 */
  if (C.zf) goto L_119248e6;
  /* 1192485c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11924862 jne 0x11924852 */
  if (!C.zf) goto L_11924852;
L_11924864:;
  /* 11924864 mov ebx, ecx */
  EBX = (ECX);
  /* 11924866 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924869 jne 0x119248d7 */
  if (!C.zf) goto L_119248d7;
L_1192486b:;
  /* 1192486b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1192486d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1192486e:;
  /* 1192486e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1192486f jne 0x1192486b */
  if (!C.zf) goto L_1192486b;
  /* 11924871 pop ebx */
  EBX = (pop32());
  /* 11924872 pop esi */
  ESI = (pop32());
L_11924873:;
  /* 11924873 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11924877 pop edi */
  EDI = (pop32());
  /* 11924878 ret  */
  ESPCHK(0x119247f0u, _esp0);
  ESP += 4; return;
L_11924879:;
  /* 11924879 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1192487b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1192487e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1192487f je 0x11924830 */
  if (C.zf) goto L_11924830;
L_11924881:;
  /* 11924881 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11924886 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11924888 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1192488a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1192488d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1192488f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11924891 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924894 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11924899 je 0x11924879 */
  if (C.zf) goto L_11924879;
  /* 1192489b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1192489d je 0x119248cb */
  if (C.zf) goto L_119248cb;
  /* 1192489f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 119248a1 je 0x119248c1 */
  if (C.zf) goto L_119248c1;
  /* 119248a3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 119248a9 je 0x119248b7 */
  if (C.zf) goto L_119248b7;
  /* 119248ab test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 119248b1 jne 0x11924879 */
  if (!C.zf) goto L_11924879;
  /* 119248b3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119248b5 jmp 0x119248cf */
  goto L_119248cf;
L_119248b7:;
  /* 119248b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 119248bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119248bf jmp 0x119248cf */
  goto L_119248cf;
L_119248c1:;
  /* 119248c1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 119248c7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119248c9 jmp 0x119248cf */
  goto L_119248cf;
L_119248cb:;
  /* 119248cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119248cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_119248cf:;
  /* 119248cf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119248d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119248d4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119248d5 je 0x119248e1 */
  if (C.zf) goto L_119248e1;
L_119248d7:;
  /* 119248d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119248d9:;
  /* 119248d9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 119248db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119248de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 119248df jne 0x119248d9 */
  if (!C.zf) goto L_119248d9;
L_119248e1:;
  /* 119248e1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 119248e4 jne 0x1192486b */
  if (!C.zf) goto L_1192486b;
L_119248e6:;
  /* 119248e6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 119248ea pop ebx */
  EBX = (pop32());
  /* 119248eb pop esi */
  ESI = (pop32());
  /* 119248ec pop edi */
  EDI = (pop32());
  /* 119248ed ret  */
  ESPCHK(0x119247f0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x119248f0 (88 bytes, 40 insns) */
void f_119248f0(void) {
  FTRACE(0x119248f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119248f0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 119248f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119248f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 119248fa je 0x11924943 */
  if (C.zf) goto L_11924943;
  /* 119248fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119248fe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11924902 push edi */
  push32((uint32_t)(EDI));
  /* 11924903 mov edi, ecx */
  EDI = (ECX);
  /* 11924905 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924908 jb 0x11924937 */
  if (C.cf) goto L_11924937;
  /* 1192490a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1192490c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1192490f je 0x11924919 */
  if (C.zf) goto L_11924919;
  /* 11924911 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11924913:;
  /* 11924913 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924915 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11924916 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11924917 jne 0x11924913 */
  if (!C.zf) goto L_11924913;
L_11924919:;
  /* 11924919 mov ecx, eax */
  ECX = (EAX);
  /* 1192491b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1192491e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924920 mov ecx, eax */
  ECX = (EAX);
  /* 11924922 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11924925 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924927 mov ecx, edx */
  ECX = (EDX);
  /* 11924929 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1192492c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1192492f je 0x11924937 */
  if (C.zf) goto L_11924937;
  /* 11924931 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11924933 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11924935 je 0x1192493d */
  if (C.zf) goto L_1192493d;
L_11924937:;
  /* 11924937 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1192493a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1192493b jne 0x11924937 */
  if (!C.zf) goto L_11924937;
L_1192493d:;
  /* 1192493d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11924941 pop edi */
  EDI = (pop32());
  /* 11924942 ret  */
  ESPCHK(0x119248f0u, _esp0);
  ESP += 4; return;
L_11924943:;
  /* 11924943 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11924947 ret  */
  ESPCHK(0x119248f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004948 @ 0x11924948 (27 bytes, 13 insns) */
void f_11924948(void) {
  FTRACE(0x11924948u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924948 mov eax, dword ptr [0x11927ea0] */
  EAX = (r32((uint32_t)(0x11927ea0)));
  /* 1192494d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1192494f je 0x11924960 */
  if (C.zf) goto L_11924960;
  /* 11924951 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11924955 call eax */
  call_ind((uint32_t)(EAX), 0x11924957u);
  /* 11924957 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924959 pop ecx */
  ECX = (pop32());
  /* 1192495a je 0x11924960 */
  if (C.zf) goto L_11924960;
  /* 1192495c push 1 */
  push32((uint32_t)(0x1u));
  /* 1192495e pop eax */
  EAX = (pop32());
  /* 1192495f ret  */
  ESPCHK(0x11924948u, _esp0);
  ESP += 4; return;
L_11924960:;
  /* 11924960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11924962 ret  */
  ESPCHK(0x11924948u, _esp0);
  ESP += 4; return;
}

/* FUN_10004963 @ 0x11924963 (511 bytes, 193 insns) */
void f_11924963(void) {
  FTRACE(0x11924963u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924963 push ebp */
  push32((uint32_t)(EBP));
  /* 11924964 mov ebp, esp */
  EBP = (ESP);
  /* 11924966 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11924968 push 0x119264b0 */
  push32((uint32_t)(0x119264b0u));
  /* 1192496d push 0x11925130 */
  push32((uint32_t)(0x11925130u));
  /* 11924972 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11924978 push eax */
  push32((uint32_t)(EAX));
  /* 11924979 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11924980 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924983 push ebx */
  push32((uint32_t)(EBX));
  /* 11924984 push esi */
  push32((uint32_t)(ESI));
  /* 11924985 push edi */
  push32((uint32_t)(EDI));
  /* 11924986 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11924989 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1192498b cmp dword ptr [0x11927ec8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11927ec8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924991 jne 0x119249d9 */
  if (!C.zf) goto L_119249d9;
  /* 11924993 push edi */
  push32((uint32_t)(EDI));
  /* 11924994 push edi */
  push32((uint32_t)(EDI));
  /* 11924995 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924997 pop ebx */
  EBX = (pop32());
  /* 11924998 push ebx */
  push32((uint32_t)(EBX));
  /* 11924999 push 0x119264a8 */
  push32((uint32_t)(0x119264a8u));
  /* 1192499e mov esi, 0x100 */
  ESI = (0x100u);
  /* 119249a3 push esi */
  push32((uint32_t)(ESI));
  /* 119249a4 push edi */
  push32((uint32_t)(EDI));
  /* 119249a5 call dword ptr [0x11926010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926010))), 0x119249abu);
  /* 119249ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119249ad je 0x119249b7 */
  if (C.zf) goto L_119249b7;
  /* 119249af mov dword ptr [0x11927ec8], ebx */
  w32((uint32_t)(0x11927ec8), (EBX));
  /* 119249b5 jmp 0x119249d9 */
  goto L_119249d9;
L_119249b7:;
  /* 119249b7 push edi */
  push32((uint32_t)(EDI));
  /* 119249b8 push edi */
  push32((uint32_t)(EDI));
  /* 119249b9 push ebx */
  push32((uint32_t)(EBX));
  /* 119249ba push 0x119264a4 */
  push32((uint32_t)(0x119264a4u));
  /* 119249bf push esi */
  push32((uint32_t)(ESI));
  /* 119249c0 push edi */
  push32((uint32_t)(EDI));
  /* 119249c1 call dword ptr [0x11926014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926014))), 0x119249c7u);
  /* 119249c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119249c9 je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 119249cf mov dword ptr [0x11927ec8], 2 */
  w32((uint32_t)(0x11927ec8), (0x2u));
L_119249d9:;
  /* 119249d9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119249dc jle 0x119249ee */
  if ((C.zf||C.sf!=C.of)) goto L_119249ee;
  /* 119249de push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119249e1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119249e4 call 0x11924b87 */
  push32(0x119249e9u); f_11924b87();
  /* 119249e9 pop ecx */
  ECX = (pop32());
  /* 119249ea pop ecx */
  ECX = (pop32());
  /* 119249eb mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119249ee:;
  /* 119249ee mov eax, dword ptr [0x11927ec8] */
  EAX = (r32((uint32_t)(0x11927ec8)));
  /* 119249f3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119249f6 jne 0x11924a15 */
  if (!C.zf) goto L_11924a15;
  /* 119249f8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 119249fb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119249fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11924a01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924a04 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924a07 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924a0a call dword ptr [0x11926014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926014))), 0x11924a10u);
  /* 11924a10 jmp 0x11924af3 */
  goto L_11924af3;
L_11924a15:;
  /* 11924a15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924a18 jne 0x11924af1 */
  if (!C.zf) goto L_11924af1;
  /* 11924a1e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924a21 jne 0x11924a2b */
  if (!C.zf) goto L_11924a2b;
  /* 11924a23 mov eax, dword ptr [0x11927ec0] */
  EAX = (r32((uint32_t)(0x11927ec0)));
  /* 11924a28 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11924a2b:;
  /* 11924a2b push edi */
  push32((uint32_t)(EDI));
  /* 11924a2c push edi */
  push32((uint32_t)(EDI));
  /* 11924a2d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11924a30 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924a33 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11924a36 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11924a38 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924a3a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11924a3d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11924a3e push eax */
  push32((uint32_t)(EAX));
  /* 11924a3f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11924a42 call dword ptr [0x11926024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926024))), 0x11924a48u);
  /* 11924a48 mov ebx, eax */
  EBX = (EAX);
  /* 11924a4a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11924a4d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924a4f je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924a55 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11924a58 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11924a5b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924a5e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11924a60 call 0x11925210 */
  push32(0x11924a65u); f_11925210();
  /* 11924a65 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11924a68 mov eax, esp */
  EAX = (ESP);
  /* 11924a6a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11924a6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11924a71 jmp 0x11924a86 */
  goto L_11924a86;
  /* 11924a73 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924a75 pop eax */
  EAX = (pop32());
  /* 11924a76 ret  */
  ESPCHK(0x11924963u, _esp0);
  ESP += 4; return;
  /* 11924a77 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11924a7a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11924a7c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11924a7f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11924a83 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11924a86:;
  /* 11924a86 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924a89 je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924a8b push ebx */
  push32((uint32_t)(EBX));
  /* 11924a8c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11924a8f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11924a92 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924a95 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924a97 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11924a9a call dword ptr [0x11926024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926024))), 0x11924aa0u);
  /* 11924aa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924aa2 je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924aa4 push edi */
  push32((uint32_t)(EDI));
  /* 11924aa5 push edi */
  push32((uint32_t)(EDI));
  /* 11924aa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11924aa7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11924aaa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924aad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924ab0 call dword ptr [0x11926010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926010))), 0x11924ab6u);
  /* 11924ab6 mov esi, eax */
  ESI = (EAX);
  /* 11924ab8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11924abb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924abd je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924abf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11924ac3 je 0x11924b05 */
  if (C.zf) goto L_11924b05;
  /* 11924ac5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924ac8 je 0x11924b80 */
  if (C.zf) goto L_11924b80;
  /* 11924ace cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924ad1 jg 0x11924af1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11924af1;
  /* 11924ad3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11924ad6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11924ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 11924ada push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11924add push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924ae0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924ae3 call dword ptr [0x11926010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926010))), 0x11924ae9u);
  /* 11924ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924aeb jne 0x11924b80 */
  if (!C.zf) goto L_11924b80;
L_11924af1:;
  /* 11924af1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11924af3:;
  /* 11924af3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11924af6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11924af9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11924b00 pop edi */
  EDI = (pop32());
  /* 11924b01 pop esi */
  ESI = (pop32());
  /* 11924b02 pop ebx */
  EBX = (pop32());
  /* 11924b03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924b04 ret  */
  ESPCHK(0x11924963u, _esp0);
  ESP += 4; return;
L_11924b05:;
  /* 11924b05 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11924b0c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11924b0f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924b12 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11924b14 call 0x11925210 */
  push32(0x11924b19u); f_11925210();
  /* 11924b19 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11924b1c mov ebx, esp */
  EBX = (ESP);
  /* 11924b1e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11924b21 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11924b25 jmp 0x11924b39 */
  goto L_11924b39;
  /* 11924b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924b29 pop eax */
  EAX = (pop32());
  /* 11924b2a ret  */
  ESPCHK(0x11924963u, _esp0);
  ESP += 4; return;
  /* 11924b2b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11924b2e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11924b30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11924b32 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11924b36 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11924b39:;
  /* 11924b39 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924b3b je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924b3d push esi */
  push32((uint32_t)(ESI));
  /* 11924b3e push ebx */
  push32((uint32_t)(EBX));
  /* 11924b3f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11924b42 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11924b45 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924b48 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924b4b call dword ptr [0x11926010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926010))), 0x11924b51u);
  /* 11924b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924b53 je 0x11924af1 */
  if (C.zf) goto L_11924af1;
  /* 11924b55 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924b58 push edi */
  push32((uint32_t)(EDI));
  /* 11924b59 push edi */
  push32((uint32_t)(EDI));
  /* 11924b5a jne 0x11924b60 */
  if (!C.zf) goto L_11924b60;
  /* 11924b5c push edi */
  push32((uint32_t)(EDI));
  /* 11924b5d push edi */
  push32((uint32_t)(EDI));
  /* 11924b5e jmp 0x11924b66 */
  goto L_11924b66;
L_11924b60:;
  /* 11924b60 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11924b63 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11924b66:;
  /* 11924b66 push esi */
  push32((uint32_t)(ESI));
  /* 11924b67 push ebx */
  push32((uint32_t)(EBX));
  /* 11924b68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11924b6d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11924b70 call dword ptr [0x11926064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926064))), 0x11924b76u);
  /* 11924b76 mov esi, eax */
  ESI = (EAX);
  /* 11924b78 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924b7a je 0x11924af1 */
  if (C.zf) goto L_11924af1;
L_11924b80:;
  /* 11924b80 mov eax, esi */
  EAX = (ESI);
  /* 11924b82 jmp 0x11924af3 */
  goto L_11924af3;
}

/* FUN_10004b87 @ 0x11924b87 (43 bytes, 20 insns) */
void f_11924b87(void) {
  FTRACE(0x11924b87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924b87 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11924b8b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11924b8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11924b91 push esi */
  push32((uint32_t)(ESI));
  /* 11924b92 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11924b95 je 0x11924ba4 */
  if (C.zf) goto L_11924ba4;
L_11924b97:;
  /* 11924b97 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11924b9a je 0x11924ba4 */
  if (C.zf) goto L_11924ba4;
  /* 11924b9c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11924b9d mov esi, ecx */
  ESI = (ECX);
  /* 11924b9f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11924ba0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11924ba2 jne 0x11924b97 */
  if (!C.zf) goto L_11924b97;
L_11924ba4:;
  /* 11924ba4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11924ba7 pop esi */
  ESI = (pop32());
  /* 11924ba8 jne 0x11924baf */
  if (!C.zf) goto L_11924baf;
  /* 11924baa sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924bae ret  */
  ESPCHK(0x11924b87u, _esp0);
  ESP += 4; return;
L_11924baf:;
  /* 11924baf mov eax, edx */
  EAX = (EDX);
  /* 11924bb1 ret  */
  ESPCHK(0x11924b87u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bb2 @ 0x11924bb2 (318 bytes, 123 insns) */
void f_11924bb2(void) {
  FTRACE(0x11924bb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924bb2 push ebp */
  push32((uint32_t)(EBP));
  /* 11924bb3 mov ebp, esp */
  EBP = (ESP);
  /* 11924bb5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11924bb7 push 0x119264c8 */
  push32((uint32_t)(0x119264c8u));
  /* 11924bbc push 0x11925130 */
  push32((uint32_t)(0x11925130u));
  /* 11924bc1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11924bc7 push eax */
  push32((uint32_t)(EAX));
  /* 11924bc8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11924bcf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924bd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11924bd3 push esi */
  push32((uint32_t)(ESI));
  /* 11924bd4 push edi */
  push32((uint32_t)(EDI));
  /* 11924bd5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11924bd8 mov eax, dword ptr [0x11927ecc] */
  EAX = (r32((uint32_t)(0x11927ecc)));
  /* 11924bdd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11924bdf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924be1 jne 0x11924c21 */
  if (!C.zf) goto L_11924c21;
  /* 11924be3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11924be6 push eax */
  push32((uint32_t)(EAX));
  /* 11924be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924be9 pop esi */
  ESI = (pop32());
  /* 11924bea push esi */
  push32((uint32_t)(ESI));
  /* 11924beb push 0x119264a8 */
  push32((uint32_t)(0x119264a8u));
  /* 11924bf0 push esi */
  push32((uint32_t)(ESI));
  /* 11924bf1 call dword ptr [0x1192600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192600c))), 0x11924bf7u);
  /* 11924bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924bf9 je 0x11924bff */
  if (C.zf) goto L_11924bff;
  /* 11924bfb mov eax, esi */
  EAX = (ESI);
  /* 11924bfd jmp 0x11924c1c */
  goto L_11924c1c;
L_11924bff:;
  /* 11924bff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11924c02 push eax */
  push32((uint32_t)(EAX));
  /* 11924c03 push esi */
  push32((uint32_t)(ESI));
  /* 11924c04 push 0x119264a4 */
  push32((uint32_t)(0x119264a4u));
  /* 11924c09 push esi */
  push32((uint32_t)(ESI));
  /* 11924c0a push ebx */
  push32((uint32_t)(EBX));
  /* 11924c0b call dword ptr [0x11926018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926018))), 0x11924c11u);
  /* 11924c11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11924c13 je 0x11924ce7 */
  if (C.zf) goto L_11924ce7;
  /* 11924c19 push 2 */
  push32((uint32_t)(0x2u));
  /* 11924c1b pop eax */
  EAX = (pop32());
L_11924c1c:;
  /* 11924c1c mov dword ptr [0x11927ecc], eax */
  w32((uint32_t)(0x11927ecc), (EAX));
L_11924c21:;
  /* 11924c21 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924c24 jne 0x11924c4a */
  if (!C.zf) goto L_11924c4a;
  /* 11924c26 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11924c29 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924c2b jne 0x11924c32 */
  if (!C.zf) goto L_11924c32;
  /* 11924c2d mov eax, dword ptr [0x11927eb0] */
  EAX = (r32((uint32_t)(0x11927eb0)));
L_11924c32:;
  /* 11924c32 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11924c35 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924c38 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924c3b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924c3e push eax */
  push32((uint32_t)(EAX));
  /* 11924c3f call dword ptr [0x11926018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926018))), 0x11924c45u);
  /* 11924c45 jmp 0x11924ce9 */
  goto L_11924ce9;
L_11924c4a:;
  /* 11924c4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924c4d jne 0x11924ce7 */
  if (!C.zf) goto L_11924ce7;
  /* 11924c53 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924c56 jne 0x11924c60 */
  if (!C.zf) goto L_11924c60;
  /* 11924c58 mov eax, dword ptr [0x11927ec0] */
  EAX = (r32((uint32_t)(0x11927ec0)));
  /* 11924c5d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11924c60:;
  /* 11924c60 push ebx */
  push32((uint32_t)(EBX));
  /* 11924c61 push ebx */
  push32((uint32_t)(EBX));
  /* 11924c62 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924c68 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11924c6b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11924c6d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924c6f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11924c72 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11924c73 push eax */
  push32((uint32_t)(EAX));
  /* 11924c74 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11924c77 call dword ptr [0x11926024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926024))), 0x11924c7du);
  /* 11924c7d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11924c80 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924c82 je 0x11924ce7 */
  if (C.zf) goto L_11924ce7;
  /* 11924c84 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11924c87 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11924c8a mov eax, edi */
  EAX = (EDI);
  /* 11924c8c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924c8f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11924c91 call 0x11925210 */
  push32(0x11924c96u); f_11925210();
  /* 11924c96 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11924c99 mov esi, esp */
  ESI = (ESP);
  /* 11924c9b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11924c9e push edi */
  push32((uint32_t)(EDI));
  /* 11924c9f push ebx */
  push32((uint32_t)(EBX));
  /* 11924ca0 push esi */
  push32((uint32_t)(ESI));
  /* 11924ca1 call 0x119248f0 */
  push32(0x11924ca6u); f_119248f0();
  /* 11924ca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11924ca9 jmp 0x11924cb6 */
  goto L_11924cb6;
  /* 11924cab push 1 */
  push32((uint32_t)(0x1u));
  /* 11924cad pop eax */
  EAX = (pop32());
  /* 11924cae ret  */
  ESPCHK(0x11924bb2u, _esp0);
  ESP += 4; return;
  /* 11924caf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11924cb2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11924cb4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11924cb6:;
  /* 11924cb6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11924cba cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924cbc je 0x11924ce7 */
  if (C.zf) goto L_11924ce7;
  /* 11924cbe push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11924cc1 push esi */
  push32((uint32_t)(ESI));
  /* 11924cc2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11924cc5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11924cc8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11924cca push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11924ccd call dword ptr [0x11926024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11926024))), 0x11924cd3u);
  /* 11924cd3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924cd5 je 0x11924ce7 */
  if (C.zf) goto L_11924ce7;
  /* 11924cd7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11924cda push eax */
  push32((uint32_t)(EAX));
  /* 11924cdb push esi */
  push32((uint32_t)(ESI));
  /* 11924cdc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11924cdf call dword ptr [0x1192600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1192600c))), 0x11924ce5u);
  /* 11924ce5 jmp 0x11924ce9 */
  goto L_11924ce9;
L_11924ce7:;
  /* 11924ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11924ce9:;
  /* 11924ce9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11924cec mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11924cef mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11924cf6 pop edi */
  EDI = (pop32());
  /* 11924cf7 pop esi */
  ESI = (pop32());
  /* 11924cf8 pop ebx */
  EBX = (pop32());
  /* 11924cf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924cfa ret  */
  ESPCHK(0x11924bb2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d00 @ 0x11924d00 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11924d00(void) {
  FTRACE(0x11924d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11924d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11924d01 mov ebp, esp */
  EBP = (ESP);
  /* 11924d03 push edi */
  push32((uint32_t)(EDI));
  /* 11924d04 push esi */
  push32((uint32_t)(ESI));
  /* 11924d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11924d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11924d0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11924d0e mov eax, ecx */
  EAX = (ECX);
  /* 11924d10 mov edx, ecx */
  EDX = (ECX);
  /* 11924d12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924d14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924d16 jbe 0x11924d20 */
  if ((C.cf||C.zf)) goto L_11924d20;
  /* 11924d18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924d1a jb 0x11924e98 */
  if (C.cf) goto L_11924e98;
L_11924d20:;
  /* 11924d20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11924d26 jne 0x11924d3c */
  if (!C.zf) goto L_11924d3c;
  /* 11924d28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924d2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11924d2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924d31 jb 0x11924d5c */
  if (C.cf) goto L_11924d5c;
  /* 11924d33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924d35 jmp dword ptr [edx*4 + 0x11924e48] */
  switch (EDX) {
    case 0: goto L_11924e58;
    case 1: goto L_11924e60;
    case 2: goto L_11924e6c;
    case 3: goto L_11924e80;
    default: x86_unimpl("switch@0x11924d35 out of table"); return;
  }
L_11924d3c:;
  /* 11924d3c mov eax, edi */
  EAX = (EDI);
  /* 11924d3e mov edx, 3 */
  EDX = (0x3u);
  /* 11924d43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924d46 jb 0x11924d54 */
  if (C.cf) goto L_11924d54;
  /* 11924d48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11924d4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11924d4d jmp dword ptr [eax*4 + 0x11924d60] */
  switch (EAX) {
    case 1: goto L_11924d70;
    case 2: goto L_11924d9c;
    case 3: goto L_11924dc0;
    default: x86_unimpl("switch@0x11924d4d out of table"); return;
  }
L_11924d54:;
  /* 11924d54 jmp dword ptr [ecx*4 + 0x11924e58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11924e58)))); return;
  /* 11924d5b nop  */
  /* nop */
L_11924d5c:;
  /* 11924d5c jmp dword ptr [ecx*4 + 0x11924ddc] */
  switch (ECX) {
    case 0: goto L_11924e3f;
    case 1: goto L_11924e2c;
    case 2: goto L_11924e24;
    case 3: goto L_11924e1c;
    case 4: goto L_11924e14;
    case 5: goto L_11924e0c;
    case 6: goto L_11924e04;
    case 7: goto L_11924dfc;
    default: x86_unimpl("switch@0x11924d5c out of table"); return;
  }
  /* 11924d63 nop  */
  /* nop */
L_11924d70:;
  /* 11924d70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924d72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924d74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924d76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11924d79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11924d7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11924d7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924d82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11924d85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924d88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924d8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924d8e jb 0x11924d5c */
  if (C.cf) goto L_11924d5c;
  /* 11924d90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924d92 jmp dword ptr [edx*4 + 0x11924e48] */
  switch (EDX) {
    case 0: goto L_11924e58;
    case 1: goto L_11924e60;
    case 2: goto L_11924e6c;
    case 3: goto L_11924e80;
    default: x86_unimpl("switch@0x11924d92 out of table"); return;
  }
  /* 11924d99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11924d9c:;
  /* 11924d9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924d9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924da0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924da2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11924da5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924da8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11924dab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924dae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924db1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924db4 jb 0x11924d5c */
  if (C.cf) goto L_11924d5c;
  /* 11924db6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924db8 jmp dword ptr [edx*4 + 0x11924e48] */
  switch (EDX) {
    case 0: goto L_11924e58;
    case 1: goto L_11924e60;
    case 2: goto L_11924e6c;
    case 3: goto L_11924e80;
    default: x86_unimpl("switch@0x11924db8 out of table"); return;
  }
  /* 11924dbf nop  */
  /* nop */
L_11924dc0:;
  /* 11924dc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924dc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924dc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924dc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11924dc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924dca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11924dcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924dce jb 0x11924d5c */
  if (C.cf) goto L_11924d5c;
  /* 11924dd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924dd2 jmp dword ptr [edx*4 + 0x11924e48] */
  switch (EDX) {
    case 0: goto L_11924e58;
    case 1: goto L_11924e60;
    case 2: goto L_11924e6c;
    case 3: goto L_11924e80;
    default: x86_unimpl("switch@0x11924dd2 out of table"); return;
  }
  /* 11924dd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11924dfc:;
  /* 11924dfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11924e00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11924e04:;
  /* 11924e04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11924e08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11924e0c:;
  /* 11924e0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11924e10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11924e14:;
  /* 11924e14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11924e18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11924e1c:;
  /* 11924e1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11924e20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11924e24:;
  /* 11924e24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11924e28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11924e2c:;
  /* 11924e2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11924e30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11924e34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11924e3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924e3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11924e3f:;
  /* 11924e3f jmp dword ptr [edx*4 + 0x11924e48] */
  switch (EDX) {
    case 0: goto L_11924e58;
    case 1: goto L_11924e60;
    case 2: goto L_11924e6c;
    case 3: goto L_11924e80;
    default: x86_unimpl("switch@0x11924e3f out of table"); return;
  }
  /* 11924e46 mov edi, edi */
  EDI = (EDI);
L_11924e58:;
  /* 11924e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924e5b pop esi */
  ESI = (pop32());
  /* 11924e5c pop edi */
  EDI = (pop32());
  /* 11924e5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924e5e ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11924e5f nop  */
  /* nop */
L_11924e60:;
  /* 11924e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924e67 pop esi */
  ESI = (pop32());
  /* 11924e68 pop edi */
  EDI = (pop32());
  /* 11924e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924e6a ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11924e6b nop  */
  /* nop */
L_11924e6c:;
  /* 11924e6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924e6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924e70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11924e73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11924e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924e79 pop esi */
  ESI = (pop32());
  /* 11924e7a pop edi */
  EDI = (pop32());
  /* 11924e7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924e7c ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11924e7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11924e80:;
  /* 11924e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11924e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11924e84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11924e87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11924e8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11924e8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11924e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924e93 pop esi */
  ESI = (pop32());
  /* 11924e94 pop edi */
  EDI = (pop32());
  /* 11924e95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924e96 ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11924e97 nop  */
  /* nop */
L_11924e98:;
  /* 11924e98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11924e9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11924ea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11924ea6 jne 0x11924ecc */
  if (!C.zf) goto L_11924ecc;
  /* 11924ea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924eab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11924eae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924eb1 jb 0x11924ec0 */
  if (C.cf) goto L_11924ec0;
  /* 11924eb3 std  */
  C.df=1;
  /* 11924eb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924eb6 cld  */
  C.df=0;
  /* 11924eb7 jmp dword ptr [edx*4 + 0x11924fe0] */
  switch (EDX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924eb7 out of table"); return;
  }
  /* 11924ebe mov edi, edi */
  EDI = (EDI);
L_11924ec0:;
  /* 11924ec0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11924ec2 jmp dword ptr [ecx*4 + 0x11924f90] */
  switch (ECX) {
    case 0: goto L_11924fd7;
    default: x86_unimpl("switch@0x11924ec2 out of table"); return;
  }
  /* 11924ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11924ecc:;
  /* 11924ecc mov eax, edi */
  EAX = (EDI);
  /* 11924ece mov edx, 3 */
  EDX = (0x3u);
  /* 11924ed3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924ed6 jb 0x11924ee4 */
  if (C.cf) goto L_11924ee4;
  /* 11924ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11924edb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924edd jmp dword ptr [eax*4 + 0x11924ee8] */
  switch (EAX) {
    case 1: goto L_11924ef8;
    case 2: goto L_11924f18;
    case 3: goto L_11924f40;
    default: x86_unimpl("switch@0x11924edd out of table"); return;
  }
L_11924ee4:;
  /* 11924ee4 jmp dword ptr [ecx*4 + 0x11924fe0] */
  switch (ECX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924ee4 out of table"); return;
  }
  /* 11924eeb nop  */
  /* nop */
L_11924ef8:;
  /* 11924ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11924efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11924f00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11924f01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924f04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11924f05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924f08 jb 0x11924ec0 */
  if (C.cf) goto L_11924ec0;
  /* 11924f0a std  */
  C.df=1;
  /* 11924f0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924f0d cld  */
  C.df=0;
  /* 11924f0e jmp dword ptr [edx*4 + 0x11924fe0] */
  switch (EDX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924f0e out of table"); return;
  }
  /* 11924f15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11924f18:;
  /* 11924f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11924f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11924f20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11924f23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924f26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11924f29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924f2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924f2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924f32 jb 0x11924ec0 */
  if (C.cf) goto L_11924ec0;
  /* 11924f34 std  */
  C.df=1;
  /* 11924f35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924f37 cld  */
  C.df=0;
  /* 11924f38 jmp dword ptr [edx*4 + 0x11924fe0] */
  switch (EDX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924f38 out of table"); return;
  }
  /* 11924f3f nop  */
  /* nop */
L_11924f40:;
  /* 11924f40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11924f43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11924f45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11924f48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11924f4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11924f4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11924f51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11924f54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11924f57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924f5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11924f5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11924f60 jb 0x11924ec0 */
  if (C.cf) goto L_11924ec0;
  /* 11924f66 std  */
  C.df=1;
  /* 11924f67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11924f69 cld  */
  C.df=0;
  /* 11924f6a jmp dword ptr [edx*4 + 0x11924fe0] */
  switch (EDX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924f6a out of table"); return;
  }
  /* 11924f71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11924f74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11924f75 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11924f76 xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11924f77 adc dword ptr [edi + ecx*2 + 0x4fa41192], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*2 + 0x4fa41192))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*2 + 0x4fa41192), (_r)); fl_add(_a,_b,_r,32); }
  /* 11924f7e xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11924f7f adc dword ptr [edi + ecx*2 + 0x4fb41192], ebp */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*2 + 0x4fb41192))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*2 + 0x4fb41192), (_r)); fl_add(_a,_b,_r,32); }
  /* 11924f86 xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11924f87 adc dword ptr [edi + ecx*2 + 0x4fc41192], edi */
  { uint32_t _a=(r32((uint32_t)(EDI + ECX*2 + 0x4fc41192))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDI + ECX*2 + 0x4fc41192), (_r)); fl_add(_a,_b,_r,32); }
  /* 11924f8e xchg edx, eax */
  { uint32_t _t=(EDX); EDX = (EAX); EAX = (_t); }
  /* 11924f94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11924f98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11924f9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11924fa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11924fa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11924fa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11924fac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11924fb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11924fb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11924fb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11924fbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11924fc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11924fc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11924fc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11924fcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11924fd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11924fd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11924fd7:;
  /* 11924fd7 jmp dword ptr [edx*4 + 0x11924fe0] */
  switch (EDX) {
    case 0: goto L_11924ff0;
    case 1: goto L_11924ff8;
    case 2: goto L_11925008;
    case 3: goto L_1192501c;
    default: x86_unimpl("switch@0x11924fd7 out of table"); return;
  }
  /* 11924fde mov edi, edi */
  EDI = (EDI);
L_11924ff0:;
  /* 11924ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11924ff3 pop esi */
  ESI = (pop32());
  /* 11924ff4 pop edi */
  EDI = (pop32());
  /* 11924ff5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11924ff6 ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11924ff7 nop  */
  /* nop */
L_11924ff8:;
  /* 11924ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11924ffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11924ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11925001 pop esi */
  ESI = (pop32());
  /* 11925002 pop edi */
  EDI = (pop32());
  /* 11925003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11925004 ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 11925005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11925008:;
  /* 11925008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1192500b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1192500e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11925011 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11925014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11925017 pop esi */
  ESI = (pop32());
  /* 11925018 pop edi */
  EDI = (pop32());
  /* 11925019 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1192501a ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
  /* 1192501b nop  */
  /* nop */
L_1192501c:;
  /* 1192501c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1192501f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11925022 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11925025 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11925028 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1192502b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1192502e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11925031 pop esi */
  ESI = (pop32());
  /* 11925032 pop edi */
  EDI = (pop32());
  /* 11925033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11925034 ret  */
  ESPCHK(0x11924d00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11925038 (32 bytes, 18 insns) */
void f_11925038(void) {
  FTRACE(0x11925038u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11925038 push ebp */
  push32((uint32_t)(EBP));
  /* 11925039 mov ebp, esp */
  EBP = (ESP);
  /* 1192503b push ebx */
  push32((uint32_t)(EBX));
  /* 1192503c push esi */
  push32((uint32_t)(ESI));
  /* 1192503d push edi */
  push32((uint32_t)(EDI));
  /* 1192503e push ebp */
  push32((uint32_t)(EBP));
  /* 1192503f push 0 */
  push32((uint32_t)(0x0u));
  /* 11925041 push 0 */
  push32((uint32_t)(0x0u));
  /* 11925043 push 0x11925050 */
  push32((uint32_t)(0x11925050u));
  /* 11925048 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1192504b call 0x11925240 */
  push32(0x11925050u); f_11925240();
  /* 11925050 pop ebp */
  EBP = (pop32());
  /* 11925051 pop edi */
  EDI = (pop32());
  /* 11925052 pop esi */
  ESI = (pop32());
  /* 11925053 pop ebx */
  EBX = (pop32());
  /* 11925054 mov esp, ebp */
  ESP = (EBP);
  /* 11925056 pop ebp */
  EBP = (pop32());
  /* 11925057 ret  */
  ESPCHK(0x11925038u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1192507a (104 bytes, 33 insns) */
void f_1192507a(void) {
  FTRACE(0x1192507au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192507a push ebx */
  push32((uint32_t)(EBX));
  /* 1192507b push esi */
  push32((uint32_t)(ESI));
  /* 1192507c push edi */
  push32((uint32_t)(EDI));
  /* 1192507d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11925081 push eax */
  push32((uint32_t)(EAX));
  /* 11925082 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11925084 push 0x11925058 */
  push32((uint32_t)(0x11925058u));
  /* 11925089 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11925090 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11925097:;
  /* 11925097 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1192509b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1192509e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 119250a1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119250a4 je 0x119250d4 */
  if (C.zf) goto L_119250d4;
  /* 119250a6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119250aa je 0x119250d4 */
  if (C.zf) goto L_119250d4;
  /* 119250ac lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 119250af mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 119250b2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 119250b6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 119250b9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119250be jne 0x119250d2 */
  if (!C.zf) goto L_119250d2;
  /* 119250c0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 119250c5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 119250c9 call 0x1192510e */
  push32(0x119250ceu); f_1192510e();
  /* 119250ce call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x119250d2u);
L_119250d2:;
  /* 119250d2 jmp 0x11925097 */
  goto L_11925097;
L_119250d4:;
  /* 119250d4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 119250db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119250de pop edi */
  EDI = (pop32());
  /* 119250df pop esi */
  ESI = (pop32());
  /* 119250e0 pop ebx */
  EBX = (pop32());
  /* 119250e1 ret  */
  ESPCHK(0x1192507au, _esp0);
  ESP += 4; return;
}

/* FUN_1000510e @ 0x1192510e (24 bytes, 10 insns) */
void f_1192510e(void) {
  FTRACE(0x1192510eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1192510e push ebx */
  push32((uint32_t)(EBX));
  /* 1192510f push ecx */
  push32((uint32_t)(ECX));
  /* 11925110 mov ebx, 0x11927a70 */
  EBX = (0x11927a70u);
  /* 11925115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11925118 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1192511b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1192511e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11925121 pop ecx */
  ECX = (pop32());
  /* 11925122 pop ebx */
  EBX = (pop32());
  /* 11925123 ret 4 */
  ESPCHK(0x1192510eu, _esp0);
  ESP += 8; return;
}

/* FUN_100051ed @ 0x119251ed (27 bytes, 11 insns) */
void f_119251ed(void) {
  FTRACE(0x119251edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119251ed push ebp */
  push32((uint32_t)(EBP));
  /* 119251ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 119251f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 119251f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 119251f7 push eax */
  push32((uint32_t)(EAX));
  /* 119251f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 119251fb push eax */
  push32((uint32_t)(EAX));
  /* 119251fc call 0x1192507a */
  push32(0x11925201u); f_1192507a();
  /* 11925201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11925204 pop ebp */
  EBP = (pop32());
  /* 11925205 ret 4 */
  ESPCHK(0x119251edu, _esp0);
  ESP += 8; return;
}

/* FUN_10005210 @ 0x11925210 (47 bytes, 17 insns) */
void f_11925210(void) {
  FTRACE(0x11925210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11925210 push ecx */
  push32((uint32_t)(ECX));
  /* 11925211 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11925216 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1192521a jb 0x11925230 */
  if (C.cf) goto L_11925230;
L_1192521c:;
  /* 1192521c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11925222 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11925227 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11925229 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1192522e jae 0x1192521c */
  if (!C.cf) goto L_1192521c;
L_11925230:;
  /* 11925230 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11925232 mov eax, esp */
  EAX = (ESP);
  /* 11925234 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11925236 mov esp, ecx */
  ESP = (ECX);
  /* 11925238 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1192523a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1192523d push eax */
  push32((uint32_t)(EAX));
  /* 1192523e ret  */
  ESPCHK(0x11925210u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11925240 (6 bytes, 1 insns) */
void f_11925240(void) {
  FTRACE(0x11925240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11925240 jmp dword ptr [0x11926008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11926008)))); return;
}

