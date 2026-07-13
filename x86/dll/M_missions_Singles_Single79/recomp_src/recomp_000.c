#include "recomp.h"

/* FUN_10001000 @ 0x11d11000 (157 bytes, 61 insns) */
void f_11d11000(void) {
  FTRACE(0x11d11000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d11000 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11003 push esi */
  push32((uint32_t)(ESI));
  /* 11d11004 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d11008 push edi */
  push32((uint32_t)(EDI));
  /* 11d11009 mov edi, dword ptr [esp + 0x18] */
  EDI = (r32((uint32_t)(ESP + 0x18)));
  /* 11d1100d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1100f jne 0x11d11025 */
  if (!C.zf) goto L_11d11025;
  /* 11d11011 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d11013 jne 0x11d11025 */
  if (!C.zf) goto L_11d11025;
  /* 11d11015 mov eax, 0xc0 */
  EAX = (0xc0u);
  /* 11d1101a pop edi */
  EDI = (pop32());
  /* 11d1101b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d11020 pop esi */
  ESI = (pop32());
  /* 11d11021 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11024 ret  */
  ESPCHK(0x11d11000u, _esp0);
  ESP += 4; return;
L_11d11025:;
  /* 11d11025 mov eax, esi */
  EAX = (ESI);
  /* 11d11027 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d11028 mov ecx, eax */
  ECX = (EAX);
  /* 11d1102a mov eax, edi */
  EAX = (EDI);
  /* 11d1102c xor ecx, edx */
  { uint32_t _r=(ECX)^(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d1102e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11030 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d11031 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11d11033 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11035 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11037 jle 0x11d11057 */
  if ((C.zf||C.sf!=C.of)) goto L_11d11057;
  /* 11d11039 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d1103c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1103d push eax */
  push32((uint32_t)(EAX));
  /* 11d1103e call 0x11d12f27 */
  push32(0x11d11043u); f_11d12f27();
  /* 11d11043 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11046 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d11048 mov cl, byte ptr [eax*2 + 0x11d21498] */
  CL = (r8((uint32_t)(EAX*2 + 0x11d21498)));
  /* 11d1104f mov dword ptr [esp + 0xc], edx */
  w32((uint32_t)(ESP + 0xc), (EDX));
  /* 11d11053 mov eax, ecx */
  EAX = (ECX);
  /* 11d11055 jmp 0x11d11078 */
  goto L_11d11078;
L_11d11057:;
  /* 11d11057 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d1105a push eax */
  push32((uint32_t)(EAX));
  /* 11d1105b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1105c call 0x11d12f27 */
  push32(0x11d11061u); f_11d12f27();
  /* 11d11061 mov dword ptr [esp + 0x14], edx */
  w32((uint32_t)(ESP + 0x14), (EDX));
  /* 11d11065 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d11067 mov dl, byte ptr [eax*2 + 0x11d21498] */
  DL = (r8((uint32_t)(EAX*2 + 0x11d21498)));
  /* 11d1106e mov eax, 0x40 */
  EAX = (0x40u);
  /* 11d11073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11076 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11d11078:;
  /* 11d11078 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1107a jge 0x11d11085 */
  if ((C.sf==C.of)) goto L_11d11085;
  /* 11d1107c mov ecx, 0x80 */
  ECX = (0x80u);
  /* 11d11081 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11083 mov eax, ecx */
  EAX = (ECX);
L_11d11085:;
  /* 11d11085 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d11087 jge 0x11d11092 */
  if ((C.sf==C.of)) goto L_11d11092;
  /* 11d11089 mov edx, 0x100 */
  EDX = (0x100u);
  /* 11d1108e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11090 mov eax, edx */
  EAX = (EDX);
L_11d11092:;
  /* 11d11092 pop edi */
  EDI = (pop32());
  /* 11d11093 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d11098 pop esi */
  ESI = (pop32());
  /* 11d11099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1109c ret  */
  ESPCHK(0x11d11000u, _esp0);
  ESP += 4; return;
}

/* FUN_100010a0 @ 0x11d110a0 (44 bytes, 21 insns) */
void f_11d110a0(void) {
  FTRACE(0x11d110a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d110a0 push edi */
  push32((uint32_t)(EDI));
  /* 11d110a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d110a5 push edi */
  push32((uint32_t)(EDI));
  /* 11d110a6 call dword ptr [0x11d1c1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c0))), 0x11d110acu);
  /* 11d110ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d110af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d110b1 jle 0x11d110ca */
  if ((C.zf||C.sf!=C.of)) goto L_11d110ca;
  /* 11d110b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d110b4 mov ebx, dword ptr [0x11d1c1b8] */
  EBX = (r32((uint32_t)(0x11d1c1b8)));
  /* 11d110ba push esi */
  push32((uint32_t)(ESI));
  /* 11d110bb mov esi, eax */
  ESI = (EAX);
L_11d110bd:;
  /* 11d110bd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d110bf push edi */
  push32((uint32_t)(EDI));
  /* 11d110c0 call ebx */
  call_ind((uint32_t)(EBX), 0x11d110c2u);
  /* 11d110c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d110c5 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d110c6 jne 0x11d110bd */
  if (!C.zf) goto L_11d110bd;
  /* 11d110c8 pop esi */
  ESI = (pop32());
  /* 11d110c9 pop ebx */
  EBX = (pop32());
L_11d110ca:;
  /* 11d110ca pop edi */
  EDI = (pop32());
  /* 11d110cb ret  */
  ESPCHK(0x11d110a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100010d0 @ 0x11d110d0 (126 bytes, 44 insns) */
void f_11d110d0(void) {
  FTRACE(0x11d110d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d110d0 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d110d3 push esi */
  push32((uint32_t)(ESI));
  /* 11d110d4 mov esi, dword ptr [esp + 0x18] */
  ESI = (r32((uint32_t)(ESP + 0x18)));
  /* 11d110d8 push edi */
  push32((uint32_t)(EDI));
  /* 11d110d9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d110db lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 11d110df push esi */
  push32((uint32_t)(ESI));
  /* 11d110e0 push eax */
  push32((uint32_t)(EAX));
  /* 11d110e1 call dword ptr [0x11d1c1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1b0))), 0x11d110e7u);
  /* 11d110e7 mov edi, dword ptr [esp + 0x2c] */
  EDI = (r32((uint32_t)(ESP + 0x2c)));
  /* 11d110eb lea ecx, [esp + 0x28] */
  ECX = ((uint32_t)(ESP + 0x28));
  /* 11d110ef lea edx, [esp + 0x14] */
  EDX = ((uint32_t)(ESP + 0x14));
  /* 11d110f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d110f4 push edx */
  push32((uint32_t)(EDX));
  /* 11d110f5 push edi */
  push32((uint32_t)(EDI));
  /* 11d110f6 call dword ptr [0x11d1c1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1b4))), 0x11d110fcu);
  /* 11d110fc mov eax, dword ptr [esp + 0x26] */
  EAX = (r32((uint32_t)(ESP + 0x26)));
  /* 11d11100 mov ecx, dword ptr [esp + 0x34] */
  ECX = (r32((uint32_t)(ESP + 0x34)));
  /* 11d11104 mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 11d11108 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1110d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1110f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d11113 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d11119 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1111a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1111c push eax */
  push32((uint32_t)(EAX));
  /* 11d1111d call 0x11d11000 */
  push32(0x11d11122u); f_11d11000();
  /* 11d11122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11124 push esi */
  push32((uint32_t)(ESI));
  /* 11d11125 mov byte ptr [esp + 0x48], al */
  w8((uint32_t)(ESP + 0x48), (AL));
  /* 11d11129 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d1112fu);
  /* 11d1112f mov ecx, dword ptr [esp + 0x4c] */
  ECX = (r32((uint32_t)(ESP + 0x4c)));
  /* 11d11133 mov edx, dword ptr [esp + 0x48] */
  EDX = (r32((uint32_t)(ESP + 0x48)));
  /* 11d11137 mov eax, dword ptr [esp + 0x40] */
  EAX = (r32((uint32_t)(ESP + 0x40)));
  /* 11d1113b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1113c push edx */
  push32((uint32_t)(EDX));
  /* 11d1113d push edi */
  push32((uint32_t)(EDI));
  /* 11d1113e push eax */
  push32((uint32_t)(EAX));
  /* 11d1113f call dword ptr [0x11d1c1bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1bc))), 0x11d11145u);
  /* 11d11145 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11148 pop edi */
  EDI = (pop32());
  /* 11d11149 pop esi */
  ESI = (pop32());
  /* 11d1114a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1114d ret  */
  ESPCHK(0x11d110d0u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11d11360 (760 bytes, 189 insns) */
void f_11d11360(void) {
  FTRACE(0x11d11360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d11360 push ebx */
  push32((uint32_t)(EBX));
  /* 11d11361 push esi */
  push32((uint32_t)(ESI));
  /* 11d11362 mov esi, dword ptr [0x11d1c18c] */
  ESI = (r32((uint32_t)(0x11d1c18c)));
  /* 11d11368 push edi */
  push32((uint32_t)(EDI));
  /* 11d11369 push 0x11d1e25c */
  push32((uint32_t)(0x11d1e25cu));
  /* 11d1136e push 0x11d332b0 */
  push32((uint32_t)(0x11d332b0u));
  /* 11d11373 call esi */
  call_ind((uint32_t)(ESI), 0x11d11375u);
  /* 11d11375 push 0x11d1e254 */
  push32((uint32_t)(0x11d1e254u));
  /* 11d1137a push 0x11d21bb8 */
  push32((uint32_t)(0x11d21bb8u));
  /* 11d1137f call dword ptr [0x11d1c190] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c190))), 0x11d11385u);
  /* 11d11385 mov edi, dword ptr [0x11d1c188] */
  EDI = (r32((uint32_t)(0x11d1c188)));
  /* 11d1138b push 0x11d1e24c */
  push32((uint32_t)(0x11d1e24cu));
  /* 11d11390 push 0x11d21b78 */
  push32((uint32_t)(0x11d21b78u));
  /* 11d11395 call edi */
  call_ind((uint32_t)(EDI), 0x11d11397u);
  /* 11d11397 push 0x11d1e244 */
  push32((uint32_t)(0x11d1e244u));
  /* 11d1139c push 0x11d21b70 */
  push32((uint32_t)(0x11d21b70u));
  /* 11d113a1 call edi */
  call_ind((uint32_t)(EDI), 0x11d113a3u);
  /* 11d113a3 push 0x11d1e23c */
  push32((uint32_t)(0x11d1e23cu));
  /* 11d113a8 push 0x11d21b88 */
  push32((uint32_t)(0x11d21b88u));
  /* 11d113ad call edi */
  call_ind((uint32_t)(EDI), 0x11d113afu);
  /* 11d113af push 0x11d1e234 */
  push32((uint32_t)(0x11d1e234u));
  /* 11d113b4 push 0x11d21b80 */
  push32((uint32_t)(0x11d21b80u));
  /* 11d113b9 call edi */
  call_ind((uint32_t)(EDI), 0x11d113bbu);
  /* 11d113bb push 0x11d1e228 */
  push32((uint32_t)(0x11d1e228u));
  /* 11d113c0 push 0x11d31298 */
  push32((uint32_t)(0x11d31298u));
  /* 11d113c5 call edi */
  call_ind((uint32_t)(EDI), 0x11d113c7u);
  /* 11d113c7 push 0x11d1e21c */
  push32((uint32_t)(0x11d1e21cu));
  /* 11d113cc push 0x11d33200 */
  push32((uint32_t)(0x11d33200u));
  /* 11d113d1 call edi */
  call_ind((uint32_t)(EDI), 0x11d113d3u);
  /* 11d113d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d113d6 push 0x11d1e20c */
  push32((uint32_t)(0x11d1e20cu));
  /* 11d113db push 0x11d33270 */
  push32((uint32_t)(0x11d33270u));
  /* 11d113e0 call esi */
  call_ind((uint32_t)(ESI), 0x11d113e2u);
  /* 11d113e2 mov eax, dword ptr [0x11d334c0] */
  EAX = (r32((uint32_t)(0x11d334c0)));
  /* 11d113e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d113ea mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d113ef push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d113f1 push 0x11d1e204 */
  push32((uint32_t)(0x11d1e204u));
  /* 11d113f6 push 0x11d1e1fc */
  push32((uint32_t)(0x11d1e1fcu));
  /* 11d113fb push eax */
  push32((uint32_t)(EAX));
  /* 11d113fc call 0x11d120a0 */
  push32(0x11d11401u); f_11d120a0();
  /* 11d11401 mov ecx, dword ptr [0x11d334c0] */
  ECX = (r32((uint32_t)(0x11d334c0)));
  /* 11d11407 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11409 push 0x11d1e1f4 */
  push32((uint32_t)(0x11d1e1f4u));
  /* 11d1140e push 0x11d1e1ec */
  push32((uint32_t)(0x11d1e1ecu));
  /* 11d11413 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11414 mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d11419 call 0x11d120a0 */
  push32(0x11d1141eu); f_11d120a0();
  /* 11d1141e mov edx, dword ptr [0x11d334c0] */
  EDX = (r32((uint32_t)(0x11d334c0)));
  /* 11d11424 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11426 push 0x11d1e1e4 */
  push32((uint32_t)(0x11d1e1e4u));
  /* 11d1142b push 0x11d1e1dc */
  push32((uint32_t)(0x11d1e1dcu));
  /* 11d11430 push edx */
  push32((uint32_t)(EDX));
  /* 11d11431 mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d11436 call 0x11d120a0 */
  push32(0x11d1143bu); f_11d120a0();
  /* 11d1143b mov eax, dword ptr [0x11d334c0] */
  EAX = (r32((uint32_t)(0x11d334c0)));
  /* 11d11440 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11442 push 0x11d1e1d4 */
  push32((uint32_t)(0x11d1e1d4u));
  /* 11d11447 push 0x11d1e1cc */
  push32((uint32_t)(0x11d1e1ccu));
  /* 11d1144c push eax */
  push32((uint32_t)(EAX));
  /* 11d1144d mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d11452 call 0x11d120a0 */
  push32(0x11d11457u); f_11d120a0();
  /* 11d11457 mov ecx, dword ptr [0x11d334c0] */
  ECX = (r32((uint32_t)(0x11d334c0)));
  /* 11d1145d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d1145f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11461 push 0x11d1e1c4 */
  push32((uint32_t)(0x11d1e1c4u));
  /* 11d11466 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11467 mov ecx, 0x11d312a0 */
  ECX = (0x11d312a0u);
  /* 11d1146c call 0x11d120a0 */
  push32(0x11d11471u); f_11d120a0();
  /* 11d11471 mov edx, dword ptr [0x11d334c0] */
  EDX = (r32((uint32_t)(0x11d334c0)));
  /* 11d11477 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d11479 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1147b push 0x11d1e1bc */
  push32((uint32_t)(0x11d1e1bcu));
  /* 11d11480 push edx */
  push32((uint32_t)(EDX));
  /* 11d11481 mov ecx, 0x11d31318 */
  ECX = (0x11d31318u);
  /* 11d11486 call 0x11d120a0 */
  push32(0x11d1148bu); f_11d120a0();
  /* 11d1148b push 0x11d1e1ac */
  push32((uint32_t)(0x11d1e1acu));
  /* 11d11490 push 0x11d33288 */
  push32((uint32_t)(0x11d33288u));
  /* 11d11495 call esi */
  call_ind((uint32_t)(ESI), 0x11d11497u);
  /* 11d11497 push 0x11d1e1a4 */
  push32((uint32_t)(0x11d1e1a4u));
  /* 11d1149c push 0x11d33290 */
  push32((uint32_t)(0x11d33290u));
  /* 11d114a1 call esi */
  call_ind((uint32_t)(ESI), 0x11d114a3u);
  /* 11d114a3 push 0x11d1e19c */
  push32((uint32_t)(0x11d1e19cu));
  /* 11d114a8 push 0x11d33280 */
  push32((uint32_t)(0x11d33280u));
  /* 11d114ad call esi */
  call_ind((uint32_t)(ESI), 0x11d114afu);
  /* 11d114af mov ebx, dword ptr [0x11d1c198] */
  EBX = (r32((uint32_t)(0x11d1c198)));
  /* 11d114b5 push 0x11d1e188 */
  push32((uint32_t)(0x11d1e188u));
  /* 11d114ba push 0x11d21b90 */
  push32((uint32_t)(0x11d21b90u));
  /* 11d114bf call ebx */
  call_ind((uint32_t)(EBX), 0x11d114c1u);
  /* 11d114c1 push 0x11d1e178 */
  push32((uint32_t)(0x11d1e178u));
  /* 11d114c6 push 0x11d21ba8 */
  push32((uint32_t)(0x11d21ba8u));
  /* 11d114cb call ebx */
  call_ind((uint32_t)(EBX), 0x11d114cdu);
  /* 11d114cd push 0x11d1e16c */
  push32((uint32_t)(0x11d1e16cu));
  /* 11d114d2 push 0x11d31290 */
  push32((uint32_t)(0x11d31290u));
  /* 11d114d7 call ebx */
  call_ind((uint32_t)(EBX), 0x11d114d9u);
  /* 11d114d9 push 0x11d1e160 */
  push32((uint32_t)(0x11d1e160u));
  /* 11d114de push 0x11d332c0 */
  push32((uint32_t)(0x11d332c0u));
  /* 11d114e3 call ebx */
  call_ind((uint32_t)(EBX), 0x11d114e5u);
  /* 11d114e5 push 0x11d1e154 */
  push32((uint32_t)(0x11d1e154u));
  /* 11d114ea push 0x11d33278 */
  push32((uint32_t)(0x11d33278u));
  /* 11d114ef call ebx */
  call_ind((uint32_t)(EBX), 0x11d114f1u);
  /* 11d114f1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d114f4 push 0x11d1e14c */
  push32((uint32_t)(0x11d1e14cu));
  /* 11d114f9 push 0x11d334b8 */
  push32((uint32_t)(0x11d334b8u));
  /* 11d114fe call esi */
  call_ind((uint32_t)(ESI), 0x11d11500u);
  /* 11d11500 push 0x11d1e144 */
  push32((uint32_t)(0x11d1e144u));
  /* 11d11505 push 0x11d33298 */
  push32((uint32_t)(0x11d33298u));
  /* 11d1150a call esi */
  call_ind((uint32_t)(ESI), 0x11d1150cu);
  /* 11d1150c push 0x11d1e13c */
  push32((uint32_t)(0x11d1e13cu));
  /* 11d11511 push 0x11d332a0 */
  push32((uint32_t)(0x11d332a0u));
  /* 11d11516 call esi */
  call_ind((uint32_t)(ESI), 0x11d11518u);
  /* 11d11518 push 0x11d1e1e4 */
  push32((uint32_t)(0x11d1e1e4u));
  /* 11d1151d push 0x11d21b98 */
  push32((uint32_t)(0x11d21b98u));
  /* 11d11522 call esi */
  call_ind((uint32_t)(ESI), 0x11d11524u);
  /* 11d11524 push 0x11d1e1d4 */
  push32((uint32_t)(0x11d1e1d4u));
  /* 11d11529 push 0x11d21ba0 */
  push32((uint32_t)(0x11d21ba0u));
  /* 11d1152e call esi */
  call_ind((uint32_t)(ESI), 0x11d11530u);
  /* 11d11530 push 0x11d1e134 */
  push32((uint32_t)(0x11d1e134u));
  /* 11d11535 push 0x11d332a8 */
  push32((uint32_t)(0x11d332a8u));
  /* 11d1153a call esi */
  call_ind((uint32_t)(ESI), 0x11d1153cu);
  /* 11d1153c mov ebx, dword ptr [0x11d1c19c] */
  EBX = (r32((uint32_t)(0x11d1c19c)));
  /* 11d11542 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11d11547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11549 call ebx */
  call_ind((uint32_t)(EBX), 0x11d1154bu);
  /* 11d1154b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11d11550 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11552 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11554u);
  /* 11d11554 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11557 mov ecx, 0x11d330ae */
  ECX = (0x11d330aeu);
  /* 11d1155c push 0x11d1e128 */
  push32((uint32_t)(0x11d1e128u));
  /* 11d11561 push 0x11d1e11c */
  push32((uint32_t)(0x11d1e11cu));
  /* 11d11566 push 0x11d1e134 */
  push32((uint32_t)(0x11d1e134u));
  /* 11d1156b push 0x11d1e114 */
  push32((uint32_t)(0x11d1e114u));
  /* 11d11570 call 0x11d12a40 */
  push32(0x11d11575u); f_11d12a40();
  /* 11d11575 mov eax, dword ptr [0x11d334a8] */
  EAX = (r32((uint32_t)(0x11d334a8)));
  /* 11d1157a mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d1157f push eax */
  push32((uint32_t)(EAX));
  /* 11d11580 push eax */
  push32((uint32_t)(EAX));
  /* 11d11581 call 0x11d12e90 */
  push32(0x11d11586u); f_11d12e90();
  /* 11d11586 push 0x11d1e108 */
  push32((uint32_t)(0x11d1e108u));
  /* 11d1158b push 0x11d1e0fc */
  push32((uint32_t)(0x11d1e0fcu));
  /* 11d11590 push 0x11d1e144 */
  push32((uint32_t)(0x11d1e144u));
  /* 11d11595 push 0x11d1e0f0 */
  push32((uint32_t)(0x11d1e0f0u));
  /* 11d1159a mov ecx, 0x11d3217e */
  ECX = (0x11d3217eu);
  /* 11d1159f call 0x11d12a40 */
  push32(0x11d115a4u); f_11d12a40();
  /* 11d115a4 mov eax, dword ptr [0x11d334c0] */
  EAX = (r32((uint32_t)(0x11d334c0)));
  /* 11d115a9 mov ecx, 0x11d313a0 */
  ECX = (0x11d313a0u);
  /* 11d115ae push eax */
  push32((uint32_t)(EAX));
  /* 11d115af push eax */
  push32((uint32_t)(EAX));
  /* 11d115b0 call 0x11d12e90 */
  push32(0x11d115b5u); f_11d12e90();
  /* 11d115b5 push 0x11d1e0e8 */
  push32((uint32_t)(0x11d1e0e8u));
  /* 11d115ba push 0x11d31390 */
  push32((uint32_t)(0x11d31390u));
  /* 11d115bf call edi */
  call_ind((uint32_t)(EDI), 0x11d115c1u);
  /* 11d115c1 push 0x11d1e0e0 */
  push32((uint32_t)(0x11d1e0e0u));
  /* 11d115c6 push 0x11d31398 */
  push32((uint32_t)(0x11d31398u));
  /* 11d115cb call edi */
  call_ind((uint32_t)(EDI), 0x11d115cdu);
  /* 11d115cd push 0x11d1e19c */
  push32((uint32_t)(0x11d1e19cu));
  /* 11d115d2 push 0x11d21b68 */
  push32((uint32_t)(0x11d21b68u));
  /* 11d115d7 call esi */
  call_ind((uint32_t)(ESI), 0x11d115d9u);
  /* 11d115d9 push 0x11d21b68 */
  push32((uint32_t)(0x11d21b68u));
  /* 11d115de push 0x11d33244 */
  push32((uint32_t)(0x11d33244u));
  /* 11d115e3 call dword ptr [0x11d1c194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c194))), 0x11d115e9u);
  /* 11d115e9 push 0x11d1e0d8 */
  push32((uint32_t)(0x11d1e0d8u));
  /* 11d115ee push 0x11d1e0cc */
  push32((uint32_t)(0x11d1e0ccu));
  /* 11d115f3 call dword ptr [0x11d1c1a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a4))), 0x11d115f9u);
  /* 11d115f9 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d115fc mov ecx, 0x11d21e58 */
  ECX = (0x11d21e58u);
  /* 11d11601 push 0x11d21aa8 */
  push32((uint32_t)(0x11d21aa8u));
  /* 11d11606 call 0x11d127a0 */
  push32(0x11d1160bu); f_11d127a0();
  /* 11d1160b push 0x11d21aa8 */
  push32((uint32_t)(0x11d21aa8u));
  /* 11d11610 mov ecx, 0x11d334a8 */
  ECX = (0x11d334a8u);
  /* 11d11615 call 0x11d127a0 */
  push32(0x11d1161au); f_11d127a0();
  /* 11d1161a push 0x11d334b1 */
  push32((uint32_t)(0x11d334b1u));
  /* 11d1161f mov ecx, 0x11d334c0 */
  ECX = (0x11d334c0u);
  /* 11d11624 call 0x11d127a0 */
  push32(0x11d11629u); f_11d127a0();
  /* 11d11629 push 0x11d334b1 */
  push32((uint32_t)(0x11d334b1u));
  /* 11d1162e mov ecx, 0x11d21ab0 */
  ECX = (0x11d21ab0u);
  /* 11d11633 call 0x11d127a0 */
  push32(0x11d11638u); f_11d127a0();
  /* 11d11638 push 0x11d334b1 */
  push32((uint32_t)(0x11d334b1u));
  /* 11d1163d mov ecx, 0x11d21ab8 */
  ECX = (0x11d21ab8u);
  /* 11d11642 call 0x11d127a0 */
  push32(0x11d11647u); f_11d127a0();
  /* 11d11647 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11649 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1164b call dword ptr [0x11d1c1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a8))), 0x11d11651u);
  /* 11d11651 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11654 pop edi */
  EDI = (pop32());
  /* 11d11655 pop esi */
  ESI = (pop32());
  /* 11d11656 pop ebx */
  EBX = (pop32());
  /* 11d11657 ret  */
  ESPCHK(0x11d11360u, _esp0);
  ESP += 4; return;
}

/* FUN_10001660 @ 0x11d11660 (64 bytes, 18 insns) */
void f_11d11660(void) {
  FTRACE(0x11d11660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d11660 push esi */
  push32((uint32_t)(ESI));
  /* 11d11661 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d11665 cmp dword ptr [esi*8 + 0x11d21b2c], 0x554e4954 */
  { uint32_t _a=(r32((uint32_t)(ESI*8 + 0x11d21b2c))),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11670 je 0x11d11683 */
  if (C.zf) goto L_11d11683;
  /* 11d11672 lea eax, [esi*8 + 0x11d21b28] */
  EAX = ((uint32_t)(ESI*8 + 0x11d21b28));
  /* 11d11679 push eax */
  push32((uint32_t)(EAX));
  /* 11d1167a call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d11680u);
  /* 11d11680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d11683:;
  /* 11d11683 lea ecx, [esi*8 + 0x11d21b28] */
  ECX = ((uint32_t)(ESI*8 + 0x11d21b28));
  /* 11d1168a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1168c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1168d push esi */
  push32((uint32_t)(ESI));
  /* 11d1168e call dword ptr [0x11d1c184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c184))), 0x11d11694u);
  /* 11d11694 push esi */
  push32((uint32_t)(ESI));
  /* 11d11695 call dword ptr [0x11d1c17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c17c))), 0x11d1169bu);
  /* 11d1169b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1169e pop esi */
  ESI = (pop32());
  /* 11d1169f ret  */
  ESPCHK(0x11d11660u, _esp0);
  ESP += 4; return;
}

/* FUN_100016a0 @ 0x11d116a0 (33 bytes, 11 insns) */
void f_11d116a0(void) {
  FTRACE(0x11d116a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d116a0 push esi */
  push32((uint32_t)(ESI));
  /* 11d116a1 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d116a5 push esi */
  push32((uint32_t)(ESI));
  /* 11d116a6 call dword ptr [0x11d1c17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c17c))), 0x11d116acu);
  /* 11d116ac lea eax, [esi*8 + 0x11d21b28] */
  EAX = ((uint32_t)(ESI*8 + 0x11d21b28));
  /* 11d116b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d116b5 push eax */
  push32((uint32_t)(EAX));
  /* 11d116b6 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d116bcu);
  /* 11d116bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d116bf pop esi */
  ESI = (pop32());
  /* 11d116c0 ret  */
  ESPCHK(0x11d116a0u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11d116d0 (1674 bytes, 473 insns) */
void f_11d116d0(void) {
  FTRACE(0x11d116d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d116d0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d116d1 push ebp */
  push32((uint32_t)(EBP));
  /* 11d116d2 push esi */
  push32((uint32_t)(ESI));
  /* 11d116d3 push edi */
  push32((uint32_t)(EDI));
  /* 11d116d4 mov edi, dword ptr [0x11d1c134] */
  EDI = (r32((uint32_t)(0x11d1c134)));
  /* 11d116da push 0 */
  push32((uint32_t)(0x0u));
  /* 11d116dc call edi */
  call_ind((uint32_t)(EDI), 0x11d116deu);
  /* 11d116de mov ebx, dword ptr [0x11d1c1ac] */
  EBX = (r32((uint32_t)(0x11d1c1ac)));
  /* 11d116e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d116e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d116e9 je 0x11d11a1a */
  if (C.zf) goto L_11d11a1a;
  /* 11d116ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11d116f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d116f3 call dword ptr [0x11d1c1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a8))), 0x11d116f9u);
  /* 11d116f9 push 0x11d1e354 */
  push32((uint32_t)(0x11d1e354u));
  /* 11d116fe call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d11704u);
  /* 11d11704 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11706 push 0x11d31390 */
  push32((uint32_t)(0x11d31390u));
  /* 11d1170b call ebx */
  call_ind((uint32_t)(EBX), 0x11d1170du);
  /* 11d1170d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11710 mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d11715 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11719 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1171b push 6 */
  push32((uint32_t)(0x6u));
  /* 11d1171d call 0x11d12b20 */
  push32(0x11d11722u); f_11d12b20();
  /* 11d11722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11724 push 0x11d31398 */
  push32((uint32_t)(0x11d31398u));
  /* 11d11729 call ebx */
  call_ind((uint32_t)(EBX), 0x11d1172bu);
  /* 11d1172b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1172e mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d11733 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11737 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11739 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d1173b call 0x11d12b20 */
  push32(0x11d11740u); f_11d12b20();
  /* 11d11740 mov al, byte ptr [0x11d21aa8] */
  AL = (r8((uint32_t)(0x11d21aa8)));
  /* 11d11745 push 0x11d21bb8 */
  push32((uint32_t)(0x11d21bb8u));
  /* 11d1174a push eax */
  push32((uint32_t)(EAX));
  /* 11d1174b call dword ptr [0x11d1c148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c148))), 0x11d11751u);
  /* 11d11751 mov cl, byte ptr [0x11d334c0] */
  CL = (r8((uint32_t)(0x11d334c0)));
  /* 11d11757 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11758 call dword ptr [0x11d1c17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c17c))), 0x11d1175eu);
  /* 11d1175e mov ebp, dword ptr [0x11d1c140] */
  EBP = (r32((uint32_t)(0x11d1c140)));
  /* 11d11764 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11766 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11768u);
  /* 11d11768 mov esi, dword ptr [0x11d1c150] */
  ESI = (r32((uint32_t)(0x11d1c150)));
  /* 11d1176e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11773 jne 0x11d1179e */
  if (!C.zf) goto L_11d1179e;
  /* 11d11775 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11777 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d11779 push 0x11d332b0 */
  push32((uint32_t)(0x11d332b0u));
  /* 11d1177e call esi */
  call_ind((uint32_t)(ESI), 0x11d11780u);
  /* 11d11780 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11782 push 0x11d21b78 */
  push32((uint32_t)(0x11d21b78u));
  /* 11d11787 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11789u);
  /* 11d11789 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1178b push 0x11d21b70 */
  push32((uint32_t)(0x11d21b70u));
  /* 11d11790 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11792u);
  /* 11d11792 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11794 push 0x11d31298 */
  push32((uint32_t)(0x11d31298u));
  /* 11d11799 call ebx */
  call_ind((uint32_t)(EBX), 0x11d1179bu);
  /* 11d1179b add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1179e:;
  /* 11d1179e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d117a0 call ebp */
  call_ind((uint32_t)(EBP), 0x11d117a2u);
  /* 11d117a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d117a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d117a8 jne 0x11d117c9 */
  if (!C.zf) goto L_11d117c9;
  /* 11d117aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11d117ac push eax */
  push32((uint32_t)(EAX));
  /* 11d117ad push 0x11d332b0 */
  push32((uint32_t)(0x11d332b0u));
  /* 11d117b2 call esi */
  call_ind((uint32_t)(ESI), 0x11d117b4u);
  /* 11d117b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d117b6 push 0x11d21b88 */
  push32((uint32_t)(0x11d21b88u));
  /* 11d117bb call ebx */
  call_ind((uint32_t)(EBX), 0x11d117bdu);
  /* 11d117bd push 1 */
  push32((uint32_t)(0x1u));
  /* 11d117bf push 0x11d21b80 */
  push32((uint32_t)(0x11d21b80u));
  /* 11d117c4 call ebx */
  call_ind((uint32_t)(EBX), 0x11d117c6u);
  /* 11d117c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d117c9:;
  /* 11d117c9 mov dl, byte ptr [0x11d334c0] */
  DL = (r8((uint32_t)(0x11d334c0)));
  /* 11d117cf push edx */
  push32((uint32_t)(EDX));
  /* 11d117d0 call dword ptr [0x11d1c154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c154))), 0x11d117d6u);
  /* 11d117d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d117d8 call ebp */
  call_ind((uint32_t)(EBP), 0x11d117dau);
  /* 11d117da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d117dd cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d117e0 jne 0x11d117f3 */
  if (!C.zf) goto L_11d117f3;
  /* 11d117e2 mov esi, dword ptr [0x11d1c14c] */
  ESI = (r32((uint32_t)(0x11d1c14c)));
  /* 11d117e8 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11d117ea call esi */
  call_ind((uint32_t)(ESI), 0x11d117ecu);
  /* 11d117ec push 0x44 */
  push32((uint32_t)(0x44u));
  /* 11d117ee call esi */
  call_ind((uint32_t)(ESI), 0x11d117f0u);
  /* 11d117f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d117f3:;
  /* 11d117f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d117f5 push 0x11d33200 */
  push32((uint32_t)(0x11d33200u));
  /* 11d117fa call ebx */
  call_ind((uint32_t)(EBX), 0x11d117fcu);
  /* 11d117fc mov al, byte ptr [0x11d334c0] */
  AL = (r8((uint32_t)(0x11d334c0)));
  /* 11d11801 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11803 push 0x11d33270 */
  push32((uint32_t)(0x11d33270u));
  /* 11d11808 push eax */
  push32((uint32_t)(EAX));
  /* 11d11809 call dword ptr [0x11d1c15c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c15c))), 0x11d1180fu);
  /* 11d1180f push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11811 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11813u);
  /* 11d11813 mov edi, eax */
  EDI = (EAX);
  /* 11d11815 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11818 mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d1181d lea esi, [edi + 2] */
  ESI = ((uint32_t)(EDI + 0x2));
  /* 11d11820 push esi */
  push32((uint32_t)(ESI));
  /* 11d11821 call 0x11d12150 */
  push32(0x11d11826u); f_11d12150();
  /* 11d11826 push esi */
  push32((uint32_t)(ESI));
  /* 11d11827 mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d1182c call 0x11d12150 */
  push32(0x11d11831u); f_11d12150();
  /* 11d11831 push esi */
  push32((uint32_t)(ESI));
  /* 11d11832 mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d11837 call 0x11d12150 */
  push32(0x11d1183cu); f_11d12150();
  /* 11d1183c push esi */
  push32((uint32_t)(ESI));
  /* 11d1183d mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d11842 call 0x11d12150 */
  push32(0x11d11847u); f_11d12150();
  /* 11d11847 lea eax, [edi + edi*4] */
  EAX = ((uint32_t)(EDI + EDI*4));
  /* 11d1184a mov esi, 0xdac */
  ESI = (0xdacu);
  /* 11d1184f push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d11854 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11d11857 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11d1185a sub esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1185c mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d11861 push esi */
  push32((uint32_t)(ESI));
  /* 11d11862 push 0x11d1e348 */
  push32((uint32_t)(0x11d1e348u));
  /* 11d11867 call 0x11d12160 */
  push32(0x11d1186cu); f_11d12160();
  /* 11d1186c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d1186e push esi */
  push32((uint32_t)(ESI));
  /* 11d1186f push 0x11d1e33c */
  push32((uint32_t)(0x11d1e33cu));
  /* 11d11874 mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d11879 call 0x11d12190 */
  push32(0x11d1187eu); f_11d12190();
  /* 11d1187e push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d11883 push esi */
  push32((uint32_t)(ESI));
  /* 11d11884 push 0x11d1e330 */
  push32((uint32_t)(0x11d1e330u));
  /* 11d11889 mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d1188e call 0x11d12160 */
  push32(0x11d11893u); f_11d12160();
  /* 11d11893 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11895 push esi */
  push32((uint32_t)(ESI));
  /* 11d11896 push 0x11d1e324 */
  push32((uint32_t)(0x11d1e324u));
  /* 11d1189b mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d118a0 call 0x11d12190 */
  push32(0x11d118a5u); f_11d12190();
  /* 11d118a5 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d118aa push esi */
  push32((uint32_t)(ESI));
  /* 11d118ab push 0x11d1e0b4 */
  push32((uint32_t)(0x11d1e0b4u));
  /* 11d118b0 mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d118b5 call 0x11d12160 */
  push32(0x11d118bau); f_11d12160();
  /* 11d118ba push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d118bc push esi */
  push32((uint32_t)(ESI));
  /* 11d118bd push 0x11d1e318 */
  push32((uint32_t)(0x11d1e318u));
  /* 11d118c2 mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d118c7 call 0x11d12190 */
  push32(0x11d118ccu); f_11d12190();
  /* 11d118cc push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d118d1 push esi */
  push32((uint32_t)(ESI));
  /* 11d118d2 push 0x11d1e16c */
  push32((uint32_t)(0x11d1e16cu));
  /* 11d118d7 mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d118dc call 0x11d12160 */
  push32(0x11d118e1u); f_11d12160();
  /* 11d118e1 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d118e3 push esi */
  push32((uint32_t)(ESI));
  /* 11d118e4 push 0x11d1e30c */
  push32((uint32_t)(0x11d1e30cu));
  /* 11d118e9 mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d118ee call 0x11d12190 */
  push32(0x11d118f3u); f_11d12190();
  /* 11d118f3 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d118f8 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11d118fd push 0x11d1e2f8 */
  push32((uint32_t)(0x11d1e2f8u));
  /* 11d11902 mov ecx, 0x11d312a0 */
  ECX = (0x11d312a0u);
  /* 11d11907 call 0x11d12160 */
  push32(0x11d1190cu); f_11d12160();
  /* 11d1190c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d1190e push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11d11913 push 0x11d1e2e4 */
  push32((uint32_t)(0x11d1e2e4u));
  /* 11d11918 mov ecx, 0x11d312a0 */
  ECX = (0x11d312a0u);
  /* 11d1191d call 0x11d12190 */
  push32(0x11d11922u); f_11d12190();
  /* 11d11922 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d11927 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11d1192c push 0x11d1e2d0 */
  push32((uint32_t)(0x11d1e2d0u));
  /* 11d11931 mov ecx, 0x11d31318 */
  ECX = (0x11d31318u);
  /* 11d11936 call 0x11d12160 */
  push32(0x11d1193bu); f_11d12160();
  /* 11d1193b push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d1193d push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11d11942 push 0x11d1e2bc */
  push32((uint32_t)(0x11d1e2bcu));
  /* 11d11947 mov ecx, 0x11d31318 */
  ECX = (0x11d31318u);
  /* 11d1194c call 0x11d12190 */
  push32(0x11d11951u); f_11d12190();
  /* 11d11951 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11953 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11955u);
  /* 11d11955 mov ecx, 6 */
  ECX = (0x6u);
  /* 11d1195a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1195d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1195f lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 11d11962 mov ecx, 0x11d21aa8 */
  ECX = (0x11d21aa8u);
  /* 11d11967 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11d1196a lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11d1196d shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11d11970 push edx */
  push32((uint32_t)(EDX));
  /* 11d11971 call 0x11d12750 */
  push32(0x11d11976u); f_11d12750();
  /* 11d11976 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d1197b mov ecx, 0x11d21e58 */
  ECX = (0x11d21e58u);
  /* 11d11980 call 0x11d12750 */
  push32(0x11d11985u); f_11d12750();
  /* 11d11985 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d1198a mov ecx, 0x11d334b1 */
  ECX = (0x11d334b1u);
  /* 11d1198f call 0x11d12750 */
  push32(0x11d11994u); f_11d12750();
  /* 11d11994 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d11999 mov ecx, 0x11d21ab0 */
  ECX = (0x11d21ab0u);
  /* 11d1199e call 0x11d12750 */
  push32(0x11d119a3u); f_11d12750();
  /* 11d119a3 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 11d119a8 mov ecx, 0x11d21ab8 */
  ECX = (0x11d21ab8u);
  /* 11d119ad call 0x11d12750 */
  push32(0x11d119b2u); f_11d12750();
  /* 11d119b2 mov al, byte ptr [0x11d21e58] */
  AL = (r8((uint32_t)(0x11d21e58)));
  /* 11d119b7 mov esi, dword ptr [0x11d1c160] */
  ESI = (r32((uint32_t)(0x11d1c160)));
  /* 11d119bd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d119bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119c3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d119c5 push 0x11d1e2b0 */
  push32((uint32_t)(0x11d1e2b0u));
  /* 11d119ca push eax */
  push32((uint32_t)(EAX));
  /* 11d119cb call esi */
  call_ind((uint32_t)(ESI), 0x11d119cdu);
  /* 11d119cd mov cl, byte ptr [0x11d334b1] */
  CL = (r8((uint32_t)(0x11d334b1)));
  /* 11d119d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d119d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119db push 0x11d1e2a8 */
  push32((uint32_t)(0x11d1e2a8u));
  /* 11d119e0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d119e1 call esi */
  call_ind((uint32_t)(ESI), 0x11d119e3u);
  /* 11d119e3 mov dl, byte ptr [0x11d21ab0] */
  DL = (r8((uint32_t)(0x11d21ab0)));
  /* 11d119e9 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d119eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11d119ef push 3 */
  push32((uint32_t)(0x3u));
  /* 11d119f1 push 0x11d1e2a8 */
  push32((uint32_t)(0x11d1e2a8u));
  /* 11d119f6 push edx */
  push32((uint32_t)(EDX));
  /* 11d119f7 call esi */
  call_ind((uint32_t)(ESI), 0x11d119f9u);
  /* 11d119f9 mov al, byte ptr [0x11d21ab8] */
  AL = (r8((uint32_t)(0x11d21ab8)));
  /* 11d119fe add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a01 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d11a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11a07 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d11a09 push 0x11d1e29c */
  push32((uint32_t)(0x11d1e29cu));
  /* 11d11a0e push eax */
  push32((uint32_t)(EAX));
  /* 11d11a0f call esi */
  call_ind((uint32_t)(ESI), 0x11d11a11u);
  /* 11d11a11 mov edi, dword ptr [0x11d1c134] */
  EDI = (r32((uint32_t)(0x11d1c134)));
  /* 11d11a17 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d11a1a:;
  /* 11d11a1a mov cl, byte ptr [0x11d334b1] */
  CL = (r8((uint32_t)(0x11d334b1)));
  /* 11d11a20 mov ebp, dword ptr [0x11d1c158] */
  EBP = (r32((uint32_t)(0x11d1c158)));
  /* 11d11a26 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11a27 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11a29u);
  /* 11d11a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a2c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11a2e je 0x11d11a48 */
  if (C.zf) goto L_11d11a48;
  /* 11d11a30 mov esi, dword ptr [0x11d1c144] */
  ESI = (r32((uint32_t)(0x11d1c144)));
  /* 11d11a36 push 0x11d1e290 */
  push32((uint32_t)(0x11d1e290u));
  /* 11d11a3b call esi */
  call_ind((uint32_t)(ESI), 0x11d11a3du);
  /* 11d11a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a40 call dword ptr [0x11d1c168] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c168))), 0x11d11a46u);
  /* 11d11a46 jmp 0x11d11a4e */
  goto L_11d11a4e;
L_11d11a48:;
  /* 11d11a48 mov esi, dword ptr [0x11d1c144] */
  ESI = (r32((uint32_t)(0x11d1c144)));
L_11d11a4e:;
  /* 11d11a4e push 2 */
  push32((uint32_t)(0x2u));
  /* 11d11a50 call edi */
  call_ind((uint32_t)(EDI), 0x11d11a52u);
  /* 11d11a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a55 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11a57 je 0x11d11a7d */
  if (C.zf) goto L_11d11a7d;
  /* 11d11a59 mov dl, byte ptr [0x11d21ab0] */
  DL = (r8((uint32_t)(0x11d21ab0)));
  /* 11d11a5f push edx */
  push32((uint32_t)(EDX));
  /* 11d11a60 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11a62u);
  /* 11d11a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11a67 je 0x11d11a7d */
  if (C.zf) goto L_11d11a7d;
  /* 11d11a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11a6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11d11a6d call dword ptr [0x11d1c1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a8))), 0x11d11a73u);
  /* 11d11a73 push 0x11d1e284 */
  push32((uint32_t)(0x11d1e284u));
  /* 11d11a78 call esi */
  call_ind((uint32_t)(ESI), 0x11d11a7au);
  /* 11d11a7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d11a7d:;
  /* 11d11a7d push 3 */
  push32((uint32_t)(0x3u));
  /* 11d11a7f call edi */
  call_ind((uint32_t)(EDI), 0x11d11a81u);
  /* 11d11a81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a84 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11a86 je 0x11d11aab */
  if (C.zf) goto L_11d11aab;
  /* 11d11a88 mov al, byte ptr [0x11d21ab8] */
  AL = (r8((uint32_t)(0x11d21ab8)));
  /* 11d11a8d push eax */
  push32((uint32_t)(EAX));
  /* 11d11a8e call ebp */
  call_ind((uint32_t)(EBP), 0x11d11a90u);
  /* 11d11a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11a93 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11a95 je 0x11d11aab */
  if (C.zf) goto L_11d11aab;
  /* 11d11a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11a99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d11a9b call dword ptr [0x11d1c1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a8))), 0x11d11aa1u);
  /* 11d11aa1 push 0x11d1e278 */
  push32((uint32_t)(0x11d1e278u));
  /* 11d11aa6 call esi */
  call_ind((uint32_t)(ESI), 0x11d11aa8u);
  /* 11d11aa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d11aab:;
  /* 11d11aab mov cl, byte ptr [0x11d21aa8] */
  CL = (r8((uint32_t)(0x11d21aa8)));
  /* 11d11ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11ab2 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11ab4u);
  /* 11d11ab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11ab7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11ab9 je 0x11d11acb */
  if (C.zf) goto L_11d11acb;
  /* 11d11abb push 0x11d1e270 */
  push32((uint32_t)(0x11d1e270u));
  /* 11d11ac0 call esi */
  call_ind((uint32_t)(ESI), 0x11d11ac2u);
  /* 11d11ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11ac5 call dword ptr [0x11d1c16c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c16c))), 0x11d11acbu);
L_11d11acb:;
  /* 11d11acb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11acd call dword ptr [0x11d1c164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c164))), 0x11d11ad3u);
  /* 11d11ad3 mov esi, dword ptr [0x11d1c19c] */
  ESI = (r32((uint32_t)(0x11d1c19c)));
  /* 11d11ad9 mov edi, dword ptr [0x11d1c174] */
  EDI = (r32((uint32_t)(0x11d1c174)));
  /* 11d11adf mov ebp, dword ptr [0x11d1c178] */
  EBP = (r32((uint32_t)(0x11d1c178)));
  /* 11d11ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11ae8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11aea je 0x11d11b71 */
  if (C.zf) goto L_11d11b71;
  /* 11d11af0 mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d11af5 call 0x11d12ad0 */
  push32(0x11d11afau); f_11d12ad0();
  /* 11d11afa cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11afd jge 0x11d11b71 */
  if ((C.sf==C.of)) goto L_11d11b71;
  /* 11d11aff mov dl, byte ptr [0x11d334a8] */
  DL = (r8((uint32_t)(0x11d334a8)));
  /* 11d11b05 push edx */
  push32((uint32_t)(EDX));
  /* 11d11b06 push 0x11d332a8 */
  push32((uint32_t)(0x11d332a8u));
  /* 11d11b0b call dword ptr [0x11d1c170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c170))), 0x11d11b11u);
  /* 11d11b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11b16 jne 0x11d11b71 */
  if (!C.zf) goto L_11d11b71;
  /* 11d11b18 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11d11b1d push eax */
  push32((uint32_t)(EAX));
  /* 11d11b1e call esi */
  call_ind((uint32_t)(ESI), 0x11d11b20u);
  /* 11d11b20 mov al, byte ptr [0x11d334a8] */
  AL = (r8((uint32_t)(0x11d334a8)));
  /* 11d11b25 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11b27 push 0x11d332a8 */
  push32((uint32_t)(0x11d332a8u));
  /* 11d11b2c push eax */
  push32((uint32_t)(EAX));
  /* 11d11b2d push 0x11d332c0 */
  push32((uint32_t)(0x11d332c0u));
  /* 11d11b32 push 0x11d21bb0 */
  push32((uint32_t)(0x11d21bb0u));
  /* 11d11b37 push 0x11d332b8 */
  push32((uint32_t)(0x11d332b8u));
  /* 11d11b3c call edi */
  call_ind((uint32_t)(EDI), 0x11d11b3eu);
  /* 11d11b3e mov cl, byte ptr [0x11d21e58] */
  CL = (r8((uint32_t)(0x11d21e58)));
  /* 11d11b44 push 0xffffff38 */
  push32((uint32_t)(0xffffff38u));
  /* 11d11b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11b4b push ecx */
  push32((uint32_t)(ECX));
  /* 11d11b4c call ebp */
  call_ind((uint32_t)(EBP), 0x11d11b4eu);
  /* 11d11b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11b50 push 0x11d332b8 */
  push32((uint32_t)(0x11d332b8u));
  /* 11d11b55 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11b57u);
  /* 11d11b57 mov edx, dword ptr [0x11d334a8] */
  EDX = (r32((uint32_t)(0x11d334a8)));
  /* 11d11b5d add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11b60 mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d11b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11b69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11b6b push edx */
  push32((uint32_t)(EDX));
  /* 11d11b6c call 0x11d12b20 */
  push32(0x11d11b71u); f_11d12b20();
L_11d11b71:;
  /* 11d11b71 push 0x11d11f20 */
  push32((uint32_t)(0x11d11f20u));
  /* 11d11b76 mov ecx, 0x11d322d0 */
  ECX = (0x11d322d0u);
  /* 11d11b7b call 0x11d12bf0 */
  push32(0x11d11b80u); f_11d12bf0();
  /* 11d11b80 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11b82 call dword ptr [0x11d1c164] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c164))), 0x11d11b88u);
  /* 11d11b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11b8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11b8d je 0x11d11c14 */
  if (C.zf) goto L_11d11c14;
  /* 11d11b93 mov ecx, 0x11d313a0 */
  ECX = (0x11d313a0u);
  /* 11d11b98 call 0x11d12ad0 */
  push32(0x11d11b9du); f_11d12ad0();
  /* 11d11b9d cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11ba0 jge 0x11d11c14 */
  if ((C.sf==C.of)) goto L_11d11c14;
  /* 11d11ba2 mov al, byte ptr [0x11d334c0] */
  AL = (r8((uint32_t)(0x11d334c0)));
  /* 11d11ba7 push eax */
  push32((uint32_t)(EAX));
  /* 11d11ba8 push 0x11d33298 */
  push32((uint32_t)(0x11d33298u));
  /* 11d11bad call dword ptr [0x11d1c170] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c170))), 0x11d11bb3u);
  /* 11d11bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11bb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11bb8 jne 0x11d11c14 */
  if (!C.zf) goto L_11d11c14;
  /* 11d11bba push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 11d11bbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11bc1 call esi */
  call_ind((uint32_t)(ESI), 0x11d11bc3u);
  /* 11d11bc3 mov cl, byte ptr [0x11d334c0] */
  CL = (r8((uint32_t)(0x11d334c0)));
  /* 11d11bc9 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d11bcb push 0x11d33298 */
  push32((uint32_t)(0x11d33298u));
  /* 11d11bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11bd1 push 0x11d33278 */
  push32((uint32_t)(0x11d33278u));
  /* 11d11bd6 push 0x11d21bb0 */
  push32((uint32_t)(0x11d21bb0u));
  /* 11d11bdb push 0x11d332b8 */
  push32((uint32_t)(0x11d332b8u));
  /* 11d11be0 call edi */
  call_ind((uint32_t)(EDI), 0x11d11be2u);
  /* 11d11be2 mov dl, byte ptr [0x11d334b1] */
  DL = (r8((uint32_t)(0x11d334b1)));
  /* 11d11be8 push 0xffffff38 */
  push32((uint32_t)(0xffffff38u));
  /* 11d11bed push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11bef push edx */
  push32((uint32_t)(EDX));
  /* 11d11bf0 call ebp */
  call_ind((uint32_t)(EBP), 0x11d11bf2u);
  /* 11d11bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11bf4 push 0x11d332b8 */
  push32((uint32_t)(0x11d332b8u));
  /* 11d11bf9 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11bfbu);
  /* 11d11bfb mov eax, dword ptr [0x11d334c0] */
  EAX = (r32((uint32_t)(0x11d334c0)));
  /* 11d11c00 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11c03 mov ecx, 0x11d313a0 */
  ECX = (0x11d313a0u);
  /* 11d11c08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11c0e push eax */
  push32((uint32_t)(EAX));
  /* 11d11c0f call 0x11d12b20 */
  push32(0x11d11c14u); f_11d12b20();
L_11d11c14:;
  /* 11d11c14 push 0x11d11f70 */
  push32((uint32_t)(0x11d11f70u));
  /* 11d11c19 mov ecx, 0x11d313a0 */
  ECX = (0x11d313a0u);
  /* 11d11c1e call 0x11d12bf0 */
  push32(0x11d11c23u); f_11d12bf0();
  /* 11d11c23 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11d11c28 push 0x11d33244 */
  push32((uint32_t)(0x11d33244u));
  /* 11d11c2d push 0x11d3324c */
  push32((uint32_t)(0x11d3324cu));
  /* 11d11c32 call dword ptr [0x11d1c1b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1b0))), 0x11d11c38u);
  /* 11d11c38 push 0x11d371c4 */
  push32((uint32_t)(0x11d371c4u));
  /* 11d11c3d push 0x11d3324c */
  push32((uint32_t)(0x11d3324cu));
  /* 11d11c42 call dword ptr [0x11d1c1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c8))), 0x11d11c48u);
  /* 11d11c48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11c4d pop edi */
  EDI = (pop32());
  /* 11d11c4e pop esi */
  ESI = (pop32());
  /* 11d11c4f pop ebp */
  EBP = (pop32());
  /* 11d11c50 pop ebx */
  EBX = (pop32());
  /* 11d11c51 je 0x11d11c8c */
  if (C.zf) goto L_11d11c8c;
  /* 11d11c53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11c55 call dword ptr [0x11d1c134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c134))), 0x11d11c5bu);
  /* 11d11c5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11c5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11c60 jne 0x11d11c7a */
  if (!C.zf) goto L_11d11c7a;
  /* 11d11c62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11c66 call dword ptr [0x11d1c1a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a8))), 0x11d11c6cu);
  /* 11d11c6c push 0x11d1e268 */
  push32((uint32_t)(0x11d1e268u));
  /* 11d11c71 call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d11c77u);
  /* 11d11c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d11c7a:;
  /* 11d11c7a mov eax, dword ptr [0x11d3322c] */
  EAX = (r32((uint32_t)(0x11d3322c)));
  /* 11d11c7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11c81 jne 0x11d11c9d */
  if (!C.zf) goto L_11d11c9d;
  /* 11d11c83 mov ecx, dword ptr [0x11d371b8] */
  ECX = (r32((uint32_t)(0x11d371b8)));
  /* 11d11c89 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11c8a jmp 0x11d11c93 */
  goto L_11d11c93;
L_11d11c8c:;
  /* 11d11c8c mov edx, dword ptr [0x11d334a8] */
  EDX = (r32((uint32_t)(0x11d334a8)));
  /* 11d11c92 push edx */
  push32((uint32_t)(EDX));
L_11d11c93:;
  /* 11d11c93 mov ecx, 0x11d33238 */
  ECX = (0x11d33238u);
  /* 11d11c98 call 0x11d124d0 */
  push32(0x11d11c9du); f_11d124d0();
L_11d11c9d:;
  /* 11d11c9d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11c9f mov ecx, 0x11d371b8 */
  ECX = (0x11d371b8u);
  /* 11d11ca4 call 0x11d12610 */
  push32(0x11d11ca9u); f_11d12610();
  /* 11d11ca9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11cab mov ecx, 0x11d33238 */
  ECX = (0x11d33238u);
  /* 11d11cb0 call 0x11d12610 */
  push32(0x11d11cb5u); f_11d12610();
  /* 11d11cb5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11cb7 je 0x11d11cbe */
  if (C.zf) goto L_11d11cbe;
  /* 11d11cb9 call 0x11d11d60 */
  push32(0x11d11cbeu); f_11d11d60();
L_11d11cbe:;
  /* 11d11cbe push 0x11d33238 */
  push32((uint32_t)(0x11d33238u));
  /* 11d11cc3 mov ecx, 0x11d33208 */
  ECX = (0x11d33208u);
  /* 11d11cc8 call 0x11d128f0 */
  push32(0x11d11ccdu); f_11d128f0();
  /* 11d11ccd mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d11cd2 call 0x11d12200 */
  push32(0x11d11cd7u); f_11d12200();
  /* 11d11cd7 mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d11cdc call 0x11d12200 */
  push32(0x11d11ce1u); f_11d12200();
  /* 11d11ce1 mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d11ce6 call 0x11d12200 */
  push32(0x11d11cebu); f_11d12200();
  /* 11d11ceb mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d11cf0 call 0x11d12200 */
  push32(0x11d11cf5u); f_11d12200();
  /* 11d11cf5 mov ecx, 0x11d312a0 */
  ECX = (0x11d312a0u);
  /* 11d11cfa call 0x11d12200 */
  push32(0x11d11cffu); f_11d12200();
  /* 11d11cff mov ecx, 0x11d31318 */
  ECX = (0x11d31318u);
  /* 11d11d04 call 0x11d12200 */
  push32(0x11d11d09u); f_11d12200();
  /* 11d11d09 push 0x11d33290 */
  push32((uint32_t)(0x11d33290u));
  /* 11d11d0e push 0x11d33288 */
  push32((uint32_t)(0x11d33288u));
  /* 11d11d13 mov ecx, 0x11d332c8 */
  ECX = (0x11d332c8u);
  /* 11d11d18 call 0x11d123b0 */
  push32(0x11d11d1du); f_11d123b0();
  /* 11d11d1d push 0x11d33288 */
  push32((uint32_t)(0x11d33288u));
  /* 11d11d22 push 0x11d33280 */
  push32((uint32_t)(0x11d33280u));
  /* 11d11d27 mov ecx, 0x11d33340 */
  ECX = (0x11d33340u);
  /* 11d11d2c call 0x11d123b0 */
  push32(0x11d11d31u); f_11d123b0();
  /* 11d11d31 push 0x11d33280 */
  push32((uint32_t)(0x11d33280u));
  /* 11d11d36 push 0x11d33290 */
  push32((uint32_t)(0x11d33290u));
  /* 11d11d3b mov ecx, 0x11d333b8 */
  ECX = (0x11d333b8u);
  /* 11d11d40 call 0x11d123b0 */
  push32(0x11d11d45u); f_11d123b0();
  /* 11d11d45 push 0x11d33280 */
  push32((uint32_t)(0x11d33280u));
  /* 11d11d4a push 0x11d33290 */
  push32((uint32_t)(0x11d33290u));
  /* 11d11d4f mov ecx, 0x11d33430 */
  ECX = (0x11d33430u);
  /* 11d11d54 call 0x11d123b0 */
  push32(0x11d11d59u); f_11d123b0();
  /* 11d11d59 ret  */
  ESPCHK(0x11d116d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d60 @ 0x11d11d60 (413 bytes, 122 insns) [1 switch table(s)] */
void f_11d11d60(void) {
  FTRACE(0x11d11d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d11d60 push ebx */
  push32((uint32_t)(EBX));
  /* 11d11d61 mov ebx, dword ptr [0x11d1c130] */
  EBX = (r32((uint32_t)(0x11d1c130)));
  /* 11d11d67 push ebp */
  push32((uint32_t)(EBP));
  /* 11d11d68 mov ebp, dword ptr [0x11d1c128] */
  EBP = (r32((uint32_t)(0x11d1c128)));
  /* 11d11d6e push esi */
  push32((uint32_t)(ESI));
  /* 11d11d6f mov esi, dword ptr [0x11d1c178] */
  ESI = (r32((uint32_t)(0x11d1c178)));
  /* 11d11d75 push edi */
  push32((uint32_t)(EDI));
  /* 11d11d76 mov edi, dword ptr [0x11d1c138] */
  EDI = (r32((uint32_t)(0x11d1c138)));
L_11d11d7c:;
  /* 11d11d7c call edi */
  call_ind((uint32_t)(EDI), 0x11d11d7eu);
  /* 11d11d7e push 0x11d1e384 */
  push32((uint32_t)(0x11d1e384u));
  /* 11d11d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11d85 push 0x11d1e378 */
  push32((uint32_t)(0x11d1e378u));
  /* 11d11d8a push 9 */
  push32((uint32_t)(0x9u));
  /* 11d11d8c call ebp */
  call_ind((uint32_t)(EBP), 0x11d11d8eu);
  /* 11d11d8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11d91 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11d94 ja 0x11d11d7c */
  if ((!C.cf&&!C.zf)) goto L_11d11d7c;
  /* 11d11d96 jmp dword ptr [eax*4 + 0x11d11f00] */
  switch (EAX) {
    case 0: goto L_11d11d9d;
    case 1: goto L_11d11dd0;
    case 2: goto L_11d11e2f;
    case 3: goto L_11d11e6f;
    case 4: goto L_11d11eb9;
    case 5: goto L_11d11ee1;
    case 6: goto L_11d11ef8;
    default: x86_unimpl("switch@0x11d11d96 out of table"); return;
  }
L_11d11d9d:;
  /* 11d11d9d call edi */
  call_ind((uint32_t)(EDI), 0x11d11d9fu);
  /* 11d11d9f mov eax, dword ptr [0x11d33228] */
  EAX = (r32((uint32_t)(0x11d33228)));
  /* 11d11da4 mov ecx, dword ptr [0x11d3321c] */
  ECX = (r32((uint32_t)(0x11d3321c)));
  /* 11d11daa mov edx, dword ptr [0x11d33218] */
  EDX = (r32((uint32_t)(0x11d33218)));
  /* 11d11db0 push eax */
  push32((uint32_t)(EAX));
  /* 11d11db1 mov eax, dword ptr [0x11d3320c] */
  EAX = (r32((uint32_t)(0x11d3320c)));
  /* 11d11db6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11db7 mov ecx, dword ptr [0x11d33208] */
  ECX = (r32((uint32_t)(0x11d33208)));
  /* 11d11dbd push edx */
  push32((uint32_t)(EDX));
  /* 11d11dbe push eax */
  push32((uint32_t)(EAX));
  /* 11d11dbf push ecx */
  push32((uint32_t)(ECX));
  /* 11d11dc0 push 0x11d1e36c */
  push32((uint32_t)(0x11d1e36cu));
  /* 11d11dc5 call dword ptr [0x11d1c13c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c13c))), 0x11d11dcbu);
  /* 11d11dcb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11dce jmp 0x11d11d7c */
  goto L_11d11d7c;
L_11d11dd0:;
  /* 11d11dd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11dd4 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11dd6u);
  /* 11d11dd6 mov ecx, dword ptr [0x11d33208] */
  ECX = (r32((uint32_t)(0x11d33208)));
  /* 11d11ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11ddf cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11de1 jle 0x11d11e1a */
  if ((C.zf||C.sf!=C.of)) goto L_11d11e1a;
  /* 11d11de3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d11de5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11dea call esi */
  call_ind((uint32_t)(ESI), 0x11d11decu);
  /* 11d11dec mov eax, dword ptr [0x11d33208] */
  EAX = (r32((uint32_t)(0x11d33208)));
  /* 11d11df1 mov edx, dword ptr [0x11d33228] */
  EDX = (r32((uint32_t)(0x11d33228)));
  /* 11d11df7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11df9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11dfc mov dword ptr [0x11d33208], eax */
  w32((uint32_t)(0x11d33208), (EAX));
  /* 11d11e01 mov eax, dword ptr [0x11d3320c] */
  EAX = (r32((uint32_t)(0x11d3320c)));
  /* 11d11e06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e09 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d11e0a mov dword ptr [0x11d33228], edx */
  w32((uint32_t)(0x11d33228), (EDX));
  /* 11d11e10 mov dword ptr [0x11d3320c], eax */
  w32((uint32_t)(0x11d3320c), (EAX));
  /* 11d11e15 jmp 0x11d11d7c */
  goto L_11d11d7c;
L_11d11e1a:;
  /* 11d11e1a call edi */
  call_ind((uint32_t)(EDI), 0x11d11e1cu);
  /* 11d11e1c push 0x11d1e35c */
  push32((uint32_t)(0x11d1e35cu));
  /* 11d11e21 call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d11e27u);
  /* 11d11e27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e2a jmp 0x11d11d7c */
  goto L_11d11d7c;
L_11d11e2f:;
  /* 11d11e2f mov eax, dword ptr [0x11d3320c] */
  EAX = (r32((uint32_t)(0x11d3320c)));
  /* 11d11e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11e36 jle 0x11d11d7c */
  if ((C.zf||C.sf!=C.of)) goto L_11d11d7c;
  /* 11d11e3c mov edx, eax */
  EDX = (EAX);
  /* 11d11e3e mov eax, dword ptr [0x11d33208] */
  EAX = (r32((uint32_t)(0x11d33208)));
  /* 11d11e43 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d11e44 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11e47 mov dword ptr [0x11d3320c], edx */
  w32((uint32_t)(0x11d3320c), (EDX));
  /* 11d11e4d mov dword ptr [0x11d33208], eax */
  w32((uint32_t)(0x11d33208), (EAX));
L_11d11e52:;
  /* 11d11e52 mov edx, dword ptr [0x11d33228] */
  EDX = (r32((uint32_t)(0x11d33228)));
  /* 11d11e58 push eax */
  push32((uint32_t)(EAX));
  /* 11d11e59 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11e5b push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11e5f mov dword ptr [0x11d33228], edx */
  w32((uint32_t)(0x11d33228), (EDX));
  /* 11d11e65 call esi */
  call_ind((uint32_t)(ESI), 0x11d11e67u);
  /* 11d11e67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e6a jmp 0x11d11d7c */
  goto L_11d11d7c;
L_11d11e6f:;
  /* 11d11e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11e73 call ebx */
  call_ind((uint32_t)(EBX), 0x11d11e75u);
  /* 11d11e75 mov ecx, dword ptr [0x11d33218] */
  ECX = (r32((uint32_t)(0x11d33218)));
  /* 11d11e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e7e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d11e80 jle 0x11d11e1a */
  if ((C.zf||C.sf!=C.of)) goto L_11d11e1a;
  /* 11d11e82 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d11e84 push ecx */
  push32((uint32_t)(ECX));
  /* 11d11e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d11e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d11e89 call esi */
  call_ind((uint32_t)(ESI), 0x11d11e8bu);
  /* 11d11e8b mov eax, dword ptr [0x11d33218] */
  EAX = (r32((uint32_t)(0x11d33218)));
  /* 11d11e90 mov edx, dword ptr [0x11d33228] */
  EDX = (r32((uint32_t)(0x11d33228)));
  /* 11d11e96 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e98 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11e9b mov dword ptr [0x11d33218], eax */
  w32((uint32_t)(0x11d33218), (EAX));
  /* 11d11ea0 mov eax, dword ptr [0x11d3321c] */
  EAX = (r32((uint32_t)(0x11d3321c)));
  /* 11d11ea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d11ea8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d11ea9 mov dword ptr [0x11d33228], edx */
  w32((uint32_t)(0x11d33228), (EDX));
  /* 11d11eaf mov dword ptr [0x11d3321c], eax */
  w32((uint32_t)(0x11d3321c), (EAX));
  /* 11d11eb4 jmp 0x11d11d7c */
  goto L_11d11d7c;
L_11d11eb9:;
  /* 11d11eb9 mov eax, dword ptr [0x11d3321c] */
  EAX = (r32((uint32_t)(0x11d3321c)));
  /* 11d11ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d11ec0 jle 0x11d11d7c */
  if ((C.zf||C.sf!=C.of)) goto L_11d11d7c;
  /* 11d11ec6 mov edx, eax */
  EDX = (EAX);
  /* 11d11ec8 mov eax, dword ptr [0x11d33218] */
  EAX = (r32((uint32_t)(0x11d33218)));
  /* 11d11ecd dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d11ece sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d11ed1 mov dword ptr [0x11d3321c], edx */
  w32((uint32_t)(0x11d3321c), (EDX));
  /* 11d11ed7 mov dword ptr [0x11d33218], eax */
  w32((uint32_t)(0x11d33218), (EAX));
  /* 11d11edc jmp 0x11d11e52 */
  goto L_11d11e52;
L_11d11ee1:;
  /* 11d11ee1 push 0x11d33238 */
  push32((uint32_t)(0x11d33238u));
  /* 11d11ee6 mov ecx, 0x11d33208 */
  ECX = (0x11d33208u);
  /* 11d11eeb call 0x11d12830 */
  push32(0x11d11ef0u); f_11d12830();
  /* 11d11ef0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d11ef2 je 0x11d11d7c */
  if (C.zf) goto L_11d11d7c;
L_11d11ef8:;
  /* 11d11ef8 pop edi */
  EDI = (pop32());
  /* 11d11ef9 pop esi */
  ESI = (pop32());
  /* 11d11efa pop ebp */
  EBP = (pop32());
  /* 11d11efb pop ebx */
  EBX = (pop32());
  /* 11d11efc ret  */
  ESPCHK(0x11d11d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ff0 @ 0x11d11ff0 (20 bytes, 6 insns) */
void f_11d11ff0(void) {
  FTRACE(0x11d11ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d11ff0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d11ff4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d11ff5 jne 0x11d11ffc */
  if (!C.zf) goto L_11d11ffc;
  /* 11d11ff7 call 0x11d11360 */
  push32(0x11d11ffcu); f_11d11360();
L_11d11ffc:;
  /* 11d11ffc mov eax, 1 */
  EAX = (0x1u);
  /* 11d12001 ret 0xc */
  ESPCHK(0x11d11ff0u, _esp0);
  ESP += 16; return;
}

/* FUN_10002020 @ 0x11d12020 (13 bytes, 4 insns) */
void f_11d12020(void) {
  FTRACE(0x11d12020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12020 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d12022 mov ecx, 0x11d21ac0 */
  ECX = (0x11d21ac0u);
  /* 11d12027 call 0x11d19a44 */
  push32(0x11d1202cu); f_11d19a44();
  /* 11d1202c ret  */
  ESPCHK(0x11d12020u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x11d12030 (12 bytes, 4 insns) */
void f_11d12030(void) {
  FTRACE(0x11d12030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12030 push 0x11d12040 */
  push32((uint32_t)(0x11d12040u));
  /* 11d12035 call 0x11d12fca */
  push32(0x11d1203au); f_11d12fca();
  /* 11d1203a pop ecx */
  ECX = (pop32());
  /* 11d1203b ret  */
  ESPCHK(0x11d12030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x11d12080 (22 bytes, 9 insns) */
void f_11d12080(void) {
  FTRACE(0x11d12080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12080 push esi */
  push32((uint32_t)(ESI));
  /* 11d12081 mov esi, ecx */
  ESI = (ECX);
  /* 11d12083 push 0x11d1e3e0 */
  push32((uint32_t)(0x11d1e3e0u));
  /* 11d12088 push esi */
  push32((uint32_t)(ESI));
  /* 11d12089 call dword ptr [0x11d1c12c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c12c))), 0x11d1208fu);
  /* 11d1208f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12092 mov eax, esi */
  EAX = (ESI);
  /* 11d12094 pop esi */
  ESI = (pop32());
  /* 11d12095 ret  */
  ESPCHK(0x11d12080u, _esp0);
  ESP += 4; return;
}

/* FUN_100020a0 @ 0x11d120a0 (162 bytes, 58 insns) */
void f_11d120a0(void) {
  FTRACE(0x11d120a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d120a0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d120a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11d120a2 push esi */
  push32((uint32_t)(ESI));
  /* 11d120a3 push edi */
  push32((uint32_t)(EDI));
  /* 11d120a4 mov esi, ecx */
  ESI = (ECX);
  /* 11d120a6 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d120a8 push esi */
  push32((uint32_t)(ESI));
  /* 11d120a9 call dword ptr [0x11d1c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c11c))), 0x11d120afu);
  /* 11d120af mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d120b3 mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11d120b7 lea ebx, [esi + 4] */
  EBX = ((uint32_t)(ESI + 0x4));
  /* 11d120ba push ecx */
  push32((uint32_t)(ECX));
  /* 11d120bb push ebx */
  push32((uint32_t)(EBX));
  /* 11d120bc mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d120be call dword ptr [0x11d1c188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c188))), 0x11d120c4u);
  /* 11d120c4 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11d120c8 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11d120ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d120cd cmp eax, ebp */
  { uint32_t _a=(EAX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d120cf je 0x11d120e7 */
  if (C.zf) goto L_11d120e7;
  /* 11d120d1 lea edi, [esi + 0xc] */
  EDI = ((uint32_t)(ESI + 0xc));
  /* 11d120d4 push eax */
  push32((uint32_t)(EAX));
  /* 11d120d5 push edi */
  push32((uint32_t)(EDI));
  /* 11d120d6 call dword ptr [0x11d1c18c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c18c))), 0x11d120dcu);
  /* 11d120dc push edi */
  push32((uint32_t)(EDI));
  /* 11d120dd push ebx */
  push32((uint32_t)(EBX));
  /* 11d120de call dword ptr [0x11d1c194] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c194))), 0x11d120e4u);
  /* 11d120e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d120e7:;
  /* 11d120e7 mov edi, dword ptr [0x11d1c180] */
  EDI = (r32((uint32_t)(0x11d1c180)));
  /* 11d120ed lea edx, [esi + 0x14] */
  EDX = ((uint32_t)(ESI + 0x14));
  /* 11d120f0 push edx */
  push32((uint32_t)(EDX));
  /* 11d120f1 call edi */
  call_ind((uint32_t)(EDI), 0x11d120f3u);
  /* 11d120f3 lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11d120f6 push eax */
  push32((uint32_t)(EAX));
  /* 11d120f7 call edi */
  call_ind((uint32_t)(EDI), 0x11d120f9u);
  /* 11d120f9 lea ecx, [esi + 0x6c] */
  ECX = ((uint32_t)(ESI + 0x6c));
  /* 11d120fc push ecx */
  push32((uint32_t)(ECX));
  /* 11d120fd call edi */
  call_ind((uint32_t)(EDI), 0x11d120ffu);
  /* 11d120ff mov edx, dword ptr [esp + 0x2c] */
  EDX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11d12103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12106 mov eax, 1 */
  EAX = (0x1u);
  /* 11d1210b mov dword ptr [esi + 0x30], ebp */
  w32((uint32_t)(ESI + 0x30), (EBP));
  /* 11d1210e mov dword ptr [esi + 0x34], ebp */
  w32((uint32_t)(ESI + 0x34), (EBP));
  /* 11d12111 mov dword ptr [esi + 0x38], 0x3c */
  w32((uint32_t)(ESI + 0x38), (0x3cu));
  /* 11d12118 mov dword ptr [esi + 0x44], ebp */
  w32((uint32_t)(ESI + 0x44), (EBP));
  /* 11d1211b mov dword ptr [esi + 0x48], ebp */
  w32((uint32_t)(ESI + 0x48), (EBP));
  /* 11d1211e mov dword ptr [esi + 0x4c], 0x78 */
  w32((uint32_t)(ESI + 0x4c), (0x78u));
  /* 11d12125 mov dword ptr [esi + 0x54], ebp */
  w32((uint32_t)(ESI + 0x54), (EBP));
  /* 11d12128 mov dword ptr [esi + 0x50], eax */
  w32((uint32_t)(ESI + 0x50), (EAX));
  /* 11d1212b mov dword ptr [esi + 0x58], 0xa */
  w32((uint32_t)(ESI + 0x58), (0xau));
  /* 11d12132 mov dword ptr [esi + 0x5c], eax */
  w32((uint32_t)(ESI + 0x5c), (EAX));
  /* 11d12135 mov dword ptr [esi + 0x60], ebp */
  w32((uint32_t)(ESI + 0x60), (EBP));
  /* 11d12138 mov dword ptr [esi + 0x24], edx */
  w32((uint32_t)(ESI + 0x24), (EDX));
  /* 11d1213b pop edi */
  EDI = (pop32());
  /* 11d1213c pop esi */
  ESI = (pop32());
  /* 11d1213d pop ebp */
  EBP = (pop32());
  /* 11d1213e pop ebx */
  EBX = (pop32());
  /* 11d1213f ret 0x10 */
  ESPCHK(0x11d120a0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002150 @ 0x11d12150 (10 bytes, 3 insns) */
void f_11d12150(void) {
  FTRACE(0x11d12150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12150 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d12154 mov dword ptr [ecx + 0x58], eax */
  w32((uint32_t)(ECX + 0x58), (EAX));
  /* 11d12157 ret 4 */
  ESPCHK(0x11d12150u, _esp0);
  ESP += 8; return;
}

/* FUN_10002160 @ 0x11d12160 (39 bytes, 14 insns) */
void f_11d12160(void) {
  FTRACE(0x11d12160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12160 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d12164 push esi */
  push32((uint32_t)(ESI));
  /* 11d12165 mov esi, ecx */
  ESI = (ECX);
  /* 11d12167 push eax */
  push32((uint32_t)(EAX));
  /* 11d12168 lea ecx, [esi + 0x28] */
  ECX = ((uint32_t)(ESI + 0x28));
  /* 11d1216b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1216c call dword ptr [0x11d1c198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c198))), 0x11d12172u);
  /* 11d12172 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d12176 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d1217a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1217d mov dword ptr [esi + 0x30], edx */
  w32((uint32_t)(ESI + 0x30), (EDX));
  /* 11d12180 mov dword ptr [esi + 0x34], eax */
  w32((uint32_t)(ESI + 0x34), (EAX));
  /* 11d12183 pop esi */
  ESI = (pop32());
  /* 11d12184 ret 0xc */
  ESPCHK(0x11d12160u, _esp0);
  ESP += 16; return;
}

/* FUN_10002190 @ 0x11d12190 (39 bytes, 14 insns) */
void f_11d12190(void) {
  FTRACE(0x11d12190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12190 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d12194 push esi */
  push32((uint32_t)(ESI));
  /* 11d12195 mov esi, ecx */
  ESI = (ECX);
  /* 11d12197 push eax */
  push32((uint32_t)(EAX));
  /* 11d12198 lea ecx, [esi + 0x3c] */
  ECX = ((uint32_t)(ESI + 0x3c));
  /* 11d1219b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1219c call dword ptr [0x11d1c198] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c198))), 0x11d121a2u);
  /* 11d121a2 mov edx, dword ptr [esp + 0x14] */
  EDX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d121a6 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d121aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d121ad mov dword ptr [esi + 0x44], edx */
  w32((uint32_t)(ESI + 0x44), (EDX));
  /* 11d121b0 mov dword ptr [esi + 0x48], eax */
  w32((uint32_t)(ESI + 0x48), (EAX));
  /* 11d121b3 pop esi */
  ESI = (pop32());
  /* 11d121b4 ret 0xc */
  ESPCHK(0x11d12190u, _esp0);
  ESP += 16; return;
}

/* FUN_100021c0 @ 0x11d121c0 (18 bytes, 6 insns) */
void f_11d121c0(void) {
  FTRACE(0x11d121c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d121c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d121c4 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11d121c6 mov dword ptr [ecx + 0x64], edx */
  w32((uint32_t)(ECX + 0x64), (EDX));
  /* 11d121c9 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d121cc mov dword ptr [ecx + 0x68], eax */
  w32((uint32_t)(ECX + 0x68), (EAX));
  /* 11d121cf ret 4 */
  ESPCHK(0x11d121c0u, _esp0);
  ESP += 8; return;
}

/* FUN_100021e0 @ 0x11d121e0 (20 bytes, 8 insns) */
void f_11d121e0(void) {
  FTRACE(0x11d121e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d121e0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d121e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d121e4 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d121eau);
  /* 11d121ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d121ed neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d121ef sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d121f1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d121f3 ret  */
  ESPCHK(0x11d121e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x11d12200 (229 bytes, 92 insns) */
void f_11d12200(void) {
  FTRACE(0x11d12200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12200 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12201 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12202 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12203 mov ebp, dword ptr [0x11d1c120] */
  EBP = (r32((uint32_t)(0x11d1c120)));
  /* 11d12209 push esi */
  push32((uint32_t)(ESI));
  /* 11d1220a mov esi, ecx */
  ESI = (ECX);
  /* 11d1220c push edi */
  push32((uint32_t)(EDI));
  /* 11d1220d lea ebx, [esi + 0x1c] */
  EBX = ((uint32_t)(ESI + 0x1c));
  /* 11d12210 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12211 call ebp */
  call_ind((uint32_t)(EBP), 0x11d12213u);
  /* 11d12213 lea edi, [esi + 0x14] */
  EDI = ((uint32_t)(ESI + 0x14));
  /* 11d12216 mov dword ptr [esp + 0x14], eax */
  w32((uint32_t)(ESP + 0x14), (EAX));
  /* 11d1221a push edi */
  push32((uint32_t)(EDI));
  /* 11d1221b call ebp */
  call_ind((uint32_t)(EBP), 0x11d1221du);
  /* 11d1221d mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d12221 mov ecx, dword ptr [esi + 0x24] */
  ECX = (r32((uint32_t)(ESI + 0x24)));
  /* 11d12224 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12229 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1222b jle 0x11d12236 */
  if ((C.zf||C.sf!=C.of)) goto L_11d12236;
  /* 11d1222d pop edi */
  EDI = (pop32());
  /* 11d1222e pop esi */
  ESI = (pop32());
  /* 11d1222f pop ebp */
  EBP = (pop32());
  /* 11d12230 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d12233 pop ebx */
  EBX = (pop32());
  /* 11d12234 pop ecx */
  ECX = (pop32());
  /* 11d12235 ret  */
  ESPCHK(0x11d12200u, _esp0);
  ESP += 4; return;
L_11d12236:;
  /* 11d12236 mov ecx, esi */
  ECX = (ESI);
  /* 11d12238 call 0x11d121e0 */
  push32(0x11d1223du); f_11d121e0();
  /* 11d1223d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1223f je 0x11d122dd */
  if (C.zf) goto L_11d122dd;
  /* 11d12245 lea ebp, [esi + 4] */
  EBP = ((uint32_t)(ESI + 0x4));
  /* 11d12248 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12249 call dword ptr [0x11d1c114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c114))), 0x11d1224fu);
  /* 11d1224f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12252 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d12254 je 0x11d122dd */
  if (C.zf) goto L_11d122dd;
  /* 11d1225a mov eax, dword ptr [esi + 0x54] */
  EAX = (r32((uint32_t)(ESI + 0x54)));
  /* 11d1225d mov ecx, dword ptr [esi + 0x50] */
  ECX = (r32((uint32_t)(ESI + 0x50)));
  /* 11d12260 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12262 jl 0x11d1226f */
  if ((C.sf!=C.of)) goto L_11d1226f;
  /* 11d12264 mov edi, ebx */
  EDI = (EBX);
  /* 11d12266 mov dword ptr [esi + 0x54], 0 */
  w32((uint32_t)(ESI + 0x54), (0x0u));
  /* 11d1226d jmp 0x11d12273 */
  goto L_11d12273;
L_11d1226f:;
  /* 11d1226f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d12270 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
L_11d12273:;
  /* 11d12273 mov ebx, dword ptr [0x11d1c118] */
  EBX = (r32((uint32_t)(0x11d1c118)));
  /* 11d12279 call ebx */
  call_ind((uint32_t)(EBX), 0x11d1227bu);
  /* 11d1227b cmp eax, dword ptr [esi + 0x60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1227e jle 0x11d122dd */
  if ((C.zf||C.sf!=C.of)) goto L_11d122dd;
  /* 11d12280 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12282u);
  /* 11d12282 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
  /* 11d12285 call 0x11d1300b */
  push32(0x11d1228au); f_11d1300b();
  /* 11d1228a mov ecx, dword ptr [esi + 0x34] */
  ECX = (r32((uint32_t)(ESI + 0x34)));
  /* 11d1228d mov ebx, dword ptr [0x11d1c110] */
  EBX = (r32((uint32_t)(0x11d1c110)));
  /* 11d12293 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d12298 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1229a jl 0x11d122b4 */
  if ((C.sf!=C.of)) goto L_11d122b4;
  /* 11d1229c push 3 */
  push32((uint32_t)(0x3u));
  /* 11d1229e lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11d122a1 push edi */
  push32((uint32_t)(EDI));
  /* 11d122a2 push eax */
  push32((uint32_t)(EAX));
  /* 11d122a3 push ebp */
  push32((uint32_t)(EBP));
  /* 11d122a4 call ebx */
  call_ind((uint32_t)(EBX), 0x11d122a6u);
  /* 11d122a6 mov ecx, dword ptr [esi + 0x30] */
  ECX = (r32((uint32_t)(ESI + 0x30)));
  /* 11d122a9 mov eax, dword ptr [esi + 0x60] */
  EAX = (r32((uint32_t)(ESI + 0x60)));
  /* 11d122ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d122af add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d122b1 mov dword ptr [esi + 0x60], eax */
  w32((uint32_t)(ESI + 0x60), (EAX));
L_11d122b4:;
  /* 11d122b4 call 0x11d1300b */
  push32(0x11d122b9u); f_11d1300b();
  /* 11d122b9 mov ecx, dword ptr [esi + 0x48] */
  ECX = (r32((uint32_t)(ESI + 0x48)));
  /* 11d122bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d122c1 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d122c3 jl 0x11d122dd */
  if ((C.sf!=C.of)) goto L_11d122dd;
  /* 11d122c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d122c7 lea edx, [esi + 0x3c] */
  EDX = ((uint32_t)(ESI + 0x3c));
  /* 11d122ca push edi */
  push32((uint32_t)(EDI));
  /* 11d122cb push edx */
  push32((uint32_t)(EDX));
  /* 11d122cc push ebp */
  push32((uint32_t)(EBP));
  /* 11d122cd call ebx */
  call_ind((uint32_t)(EBX), 0x11d122cfu);
  /* 11d122cf mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11d122d2 mov ecx, dword ptr [esi + 0x60] */
  ECX = (r32((uint32_t)(ESI + 0x60)));
  /* 11d122d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d122d8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d122da mov dword ptr [esi + 0x60], ecx */
  w32((uint32_t)(ESI + 0x60), (ECX));
L_11d122dd:;
  /* 11d122dd pop edi */
  EDI = (pop32());
  /* 11d122de pop esi */
  ESI = (pop32());
  /* 11d122df pop ebp */
  EBP = (pop32());
  /* 11d122e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d122e2 pop ebx */
  EBX = (pop32());
  /* 11d122e3 pop ecx */
  ECX = (pop32());
  /* 11d122e4 ret  */
  ESPCHK(0x11d12200u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f0 @ 0x11d122f0 (43 bytes, 18 insns) */
void f_11d122f0(void) {
  FTRACE(0x11d122f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d122f0 push esi */
  push32((uint32_t)(ESI));
  /* 11d122f1 mov esi, ecx */
  ESI = (ECX);
  /* 11d122f3 call 0x11d121e0 */
  push32(0x11d122f8u); f_11d121e0();
  /* 11d122f8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d122fa je 0x11d12317 */
  if (C.zf) goto L_11d12317;
  /* 11d122fc lea eax, [esi + 0x1c] */
  EAX = ((uint32_t)(ESI + 0x1c));
  /* 11d122ff push eax */
  push32((uint32_t)(EAX));
  /* 11d12300 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d12306u);
  /* 11d12306 mov ecx, dword ptr [esi + 0x58] */
  ECX = (r32((uint32_t)(ESI + 0x58)));
  /* 11d12309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1230c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1230e jl 0x11d12317 */
  if ((C.sf!=C.of)) goto L_11d12317;
  /* 11d12310 mov eax, 1 */
  EAX = (0x1u);
  /* 11d12315 pop esi */
  ESI = (pop32());
  /* 11d12316 ret  */
  ESPCHK(0x11d122f0u, _esp0);
  ESP += 4; return;
L_11d12317:;
  /* 11d12317 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12319 pop esi */
  ESI = (pop32());
  /* 11d1231a ret  */
  ESPCHK(0x11d122f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002320 @ 0x11d12320 (42 bytes, 18 insns) */
void f_11d12320(void) {
  FTRACE(0x11d12320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12320 push esi */
  push32((uint32_t)(ESI));
  /* 11d12321 mov esi, ecx */
  ESI = (ECX);
  /* 11d12323 push edi */
  push32((uint32_t)(EDI));
  /* 11d12324 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11d12327 push edi */
  push32((uint32_t)(EDI));
  /* 11d12328 call dword ptr [0x11d1c1c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c0))), 0x11d1232eu);
  /* 11d1232e lea eax, [esi + 0x6c] */
  EAX = ((uint32_t)(ESI + 0x6c));
  /* 11d12331 push eax */
  push32((uint32_t)(EAX));
  /* 11d12332 push edi */
  push32((uint32_t)(EDI));
  /* 11d12333 call dword ptr [0x11d1c10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c10c))), 0x11d12339u);
  /* 11d12339 mov ecx, dword ptr [esi + 0x5c] */
  ECX = (r32((uint32_t)(ESI + 0x5c)));
  /* 11d1233c mov eax, dword ptr [esi + 0x58] */
  EAX = (r32((uint32_t)(ESI + 0x58)));
  /* 11d1233f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12342 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12344 mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
  /* 11d12347 pop edi */
  EDI = (pop32());
  /* 11d12348 pop esi */
  ESI = (pop32());
  /* 11d12349 ret  */
  ESPCHK(0x11d12320u, _esp0);
  ESP += 4; return;
}

/* FUN_10002350 @ 0x11d12350 (94 bytes, 35 insns) */
void f_11d12350(void) {
  FTRACE(0x11d12350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12350 push esi */
  push32((uint32_t)(ESI));
  /* 11d12351 mov esi, ecx */
  ESI = (ECX);
  /* 11d12353 call 0x11d121e0 */
  push32(0x11d12358u); f_11d121e0();
  /* 11d12358 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1235a je 0x11d123ac */
  if (C.zf) goto L_11d123ac;
  /* 11d1235c mov ecx, esi */
  ECX = (ESI);
  /* 11d1235e call 0x11d12200 */
  push32(0x11d12363u); f_11d12200();
  /* 11d12363 mov ecx, esi */
  ECX = (ESI);
  /* 11d12365 call 0x11d122f0 */
  push32(0x11d1236au); f_11d122f0();
  /* 11d1236a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1236c je 0x11d123ac */
  if (C.zf) goto L_11d123ac;
  /* 11d1236e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d12370 push eax */
  push32((uint32_t)(EAX));
  /* 11d12371 call 0x11d11660 */
  push32(0x11d12376u); f_11d11660();
  /* 11d12376 lea ecx, [esi + 0x1c] */
  ECX = ((uint32_t)(ESI + 0x1c));
  /* 11d12379 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1237b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1237c call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d12382u);
  /* 11d12382 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12385 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12387 call 0x11d1300b */
  push32(0x11d1238cu); f_11d1300b();
  /* 11d1238c push eax */
  push32((uint32_t)(EAX));
  /* 11d1238d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d1238f lea edx, [esi + 0x64] */
  EDX = ((uint32_t)(ESI + 0x64));
  /* 11d12392 push edx */
  push32((uint32_t)(EDX));
  /* 11d12393 push eax */
  push32((uint32_t)(EAX));
  /* 11d12394 call dword ptr [0x11d1c1a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1a0))), 0x11d1239au);
  /* 11d1239a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11d1239c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1239d call 0x11d116a0 */
  push32(0x11d123a2u); f_11d116a0();
  /* 11d123a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d123a5 mov ecx, esi */
  ECX = (ESI);
  /* 11d123a7 call 0x11d12320 */
  push32(0x11d123acu); f_11d12320();
L_11d123ac:;
  /* 11d123ac pop esi */
  ESI = (pop32());
  /* 11d123ad ret  */
  ESPCHK(0x11d12350u, _esp0);
  ESP += 4; return;
}

/* FUN_100023b0 @ 0x11d123b0 (75 bytes, 25 insns) */
void f_11d123b0(void) {
  FTRACE(0x11d123b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d123b0 push esi */
  push32((uint32_t)(ESI));
  /* 11d123b1 mov esi, ecx */
  ESI = (ECX);
  /* 11d123b3 call 0x11d122f0 */
  push32(0x11d123b8u); f_11d122f0();
  /* 11d123b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d123ba je 0x11d123f0 */
  if (C.zf) goto L_11d123f0;
  /* 11d123bc call 0x11d1300b */
  push32(0x11d123c1u); f_11d1300b();
  /* 11d123c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d123c6 cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d123cb jge 0x11d123e4 */
  if ((C.sf==C.of)) goto L_11d123e4;
  /* 11d123cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d123d1 mov ecx, esi */
  ECX = (ESI);
  /* 11d123d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d123d4 call 0x11d121c0 */
  push32(0x11d123d9u); f_11d121c0();
  /* 11d123d9 mov ecx, esi */
  ECX = (ESI);
  /* 11d123db call 0x11d12350 */
  push32(0x11d123e0u); f_11d12350();
  /* 11d123e0 pop esi */
  ESI = (pop32());
  /* 11d123e1 ret 8 */
  ESPCHK(0x11d123b0u, _esp0);
  ESP += 12; return;
L_11d123e4:;
  /* 11d123e4 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d123e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11d123e9 mov ecx, esi */
  ECX = (ESI);
  /* 11d123eb call 0x11d121c0 */
  push32(0x11d123f0u); f_11d121c0();
L_11d123f0:;
  /* 11d123f0 mov ecx, esi */
  ECX = (ESI);
  /* 11d123f2 call 0x11d12350 */
  push32(0x11d123f7u); f_11d12350();
  /* 11d123f7 pop esi */
  ESI = (pop32());
  /* 11d123f8 ret 8 */
  ESPCHK(0x11d123b0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002400 @ 0x11d12400 (13 bytes, 3 insns) */
void f_11d12400(void) {
  FTRACE(0x11d12400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12400 mov eax, ecx */
  EAX = (ECX);
  /* 11d12402 mov dword ptr [eax + 0x320], 0 */
  w32((uint32_t)(EAX + 0x320), (0x0u));
  /* 11d1240c ret  */
  ESPCHK(0x11d12400u, _esp0);
  ESP += 4; return;
}

/* FUN_100024a0 @ 0x11d124a0 (40 bytes, 16 insns) */
void f_11d124a0(void) {
  FTRACE(0x11d124a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d124a0 push esi */
  push32((uint32_t)(ESI));
  /* 11d124a1 mov esi, ecx */
  ESI = (ECX);
  /* 11d124a3 push edi */
  push32((uint32_t)(EDI));
  /* 11d124a4 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11d124a7 mov dword ptr [esi], 0 */
  w32((uint32_t)(ESI), (0x0u));
  /* 11d124ad push eax */
  push32((uint32_t)(EAX));
  /* 11d124ae call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d124b4u);
  /* 11d124b4 lea edi, [esi + 0x1c] */
  EDI = ((uint32_t)(ESI + 0x1c));
  /* 11d124b7 mov ecx, 6 */
  ECX = (0x6u);
  /* 11d124bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d124be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d124c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11d124c3 mov eax, esi */
  EAX = (ESI);
  /* 11d124c5 pop edi */
  EDI = (pop32());
  /* 11d124c6 pop esi */
  ESI = (pop32());
  /* 11d124c7 ret  */
  ESPCHK(0x11d124a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100024d0 @ 0x11d124d0 (67 bytes, 29 insns) */
void f_11d124d0(void) {
  FTRACE(0x11d124d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d124d0 push esi */
  push32((uint32_t)(ESI));
  /* 11d124d1 mov esi, ecx */
  ESI = (ECX);
  /* 11d124d3 push edi */
  push32((uint32_t)(EDI));
  /* 11d124d4 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d124d8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d124da cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d124dc jne 0x11d124e5 */
  if (!C.zf) goto L_11d124e5;
  /* 11d124de pop edi */
  EDI = (pop32());
  /* 11d124df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d124e1 pop esi */
  ESI = (pop32());
  /* 11d124e2 ret 4 */
  ESPCHK(0x11d124d0u, _esp0);
  ESP += 8; return;
L_11d124e5:;
  /* 11d124e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d124e6 call 0x11d11660 */
  push32(0x11d124ebu); f_11d11660();
  /* 11d124eb lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11d124ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11d124f0 push eax */
  push32((uint32_t)(EAX));
  /* 11d124f1 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d124f7u);
  /* 11d124f7 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11d124f9 push edi */
  push32((uint32_t)(EDI));
  /* 11d124fa push ecx */
  push32((uint32_t)(ECX));
  /* 11d124fb call dword ptr [0x11d1c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c124))), 0x11d12501u);
  /* 11d12501 mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11d12503 push edx */
  push32((uint32_t)(EDX));
  /* 11d12504 call 0x11d116a0 */
  push32(0x11d12509u); f_11d116a0();
  /* 11d12509 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1250c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11d1250e pop edi */
  EDI = (pop32());
  /* 11d1250f pop esi */
  ESI = (pop32());
  /* 11d12510 ret 4 */
  ESPCHK(0x11d124d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002520 @ 0x11d12520 (23 bytes, 9 insns) */
void f_11d12520(void) {
  FTRACE(0x11d12520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12520 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12523 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12524 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d1252au);
  /* 11d1252a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1252d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d1252f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12531 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11d12534 mov al, cl */
  AL = (CL);
  /* 11d12536 ret  */
  ESPCHK(0x11d12520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002540 @ 0x11d12540 (127 bytes, 48 insns) */
void f_11d12540(void) {
  FTRACE(0x11d12540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12540 sub esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12543 push esi */
  push32((uint32_t)(ESI));
  /* 11d12544 push edi */
  push32((uint32_t)(EDI));
  /* 11d12545 mov edi, ecx */
  EDI = (ECX);
  /* 11d12547 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d12549 lea esi, [eax*8 + 0x11d21b28] */
  ESI = ((uint32_t)(EAX*8 + 0x11d21b28));
  /* 11d12550 mov eax, dword ptr [eax*8 + 0x11d21b2c] */
  EAX = (r32((uint32_t)(EAX*8 + 0x11d21b2c)));
  /* 11d12557 cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1255c je 0x11d12568 */
  if (C.zf) goto L_11d12568;
  /* 11d1255e push esi */
  push32((uint32_t)(ESI));
  /* 11d1255f call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d12565u);
  /* 11d12565 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12568:;
  /* 11d12568 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11d1256a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1256c push esi */
  push32((uint32_t)(ESI));
  /* 11d1256d push ecx */
  push32((uint32_t)(ECX));
  /* 11d1256e call dword ptr [0x11d1c184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c184))), 0x11d12574u);
  /* 11d12574 push esi */
  push32((uint32_t)(ESI));
  /* 11d12575 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d1257bu);
  /* 11d1257b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1257e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12581 jne 0x11d125b7 */
  if (!C.zf) goto L_11d125b7;
  /* 11d12583 lea edx, [esp + 8] */
  EDX = ((uint32_t)(ESP + 0x8));
  /* 11d12587 add edi, 0xc */
  { uint32_t _a=(EDI),_b=(0xcu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1258a push edx */
  push32((uint32_t)(EDX));
  /* 11d1258b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1258d push edi */
  push32((uint32_t)(EDI));
  /* 11d1258e mov edi, dword ptr [0x11d1c1c4] */
  EDI = (r32((uint32_t)(0x11d1c1c4)));
  /* 11d12594 call edi */
  call_ind((uint32_t)(EDI), 0x11d12596u);
  /* 11d12596 lea eax, [esp + 0x40] */
  EAX = ((uint32_t)(ESP + 0x40));
  /* 11d1259a push eax */
  push32((uint32_t)(EAX));
  /* 11d1259b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1259d push esi */
  push32((uint32_t)(ESI));
  /* 11d1259e call edi */
  call_ind((uint32_t)(EDI), 0x11d125a0u);
  /* 11d125a0 mov cx, word ptr [esp + 0x20] */
  CX = (r16((uint32_t)(ESP + 0x20)));
  /* 11d125a5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d125a8 cmp cx, word ptr [esp + 0x34] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(ESP + 0x34))),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d125ad jne 0x11d125b7 */
  if (!C.zf) goto L_11d125b7;
  /* 11d125af pop edi */
  EDI = (pop32());
  /* 11d125b0 mov al, 1 */
  AL = (0x1u);
  /* 11d125b2 pop esi */
  ESI = (pop32());
  /* 11d125b3 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d125b6 ret  */
  ESPCHK(0x11d12540u, _esp0);
  ESP += 4; return;
L_11d125b7:;
  /* 11d125b7 pop edi */
  EDI = (pop32());
  /* 11d125b8 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d125ba pop esi */
  ESI = (pop32());
  /* 11d125bb add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d125be ret  */
  ESPCHK(0x11d12540u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c0 @ 0x11d125c0 (16 bytes, 7 insns) */
void f_11d125c0(void) {
  FTRACE(0x11d125c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d125c0 push esi */
  push32((uint32_t)(ESI));
  /* 11d125c1 mov esi, ecx */
  ESI = (ECX);
  /* 11d125c3 call 0x11d124a0 */
  push32(0x11d125c8u); f_11d124a0();
  /* 11d125c8 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11d125cc mov eax, esi */
  EAX = (ESI);
  /* 11d125ce pop esi */
  ESI = (pop32());
  /* 11d125cf ret  */
  ESPCHK(0x11d125c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100025d0 @ 0x11d125d0 (51 bytes, 18 insns) */
void f_11d125d0(void) {
  FTRACE(0x11d125d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d125d0 push esi */
  push32((uint32_t)(ESI));
  /* 11d125d1 mov esi, ecx */
  ESI = (ECX);
  /* 11d125d3 call 0x11d124a0 */
  push32(0x11d125d8u); f_11d124a0();
  /* 11d125d8 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11d125da push esi */
  push32((uint32_t)(ESI));
  /* 11d125db call dword ptr [0x11d1c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c11c))), 0x11d125e1u);
  /* 11d125e1 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d125e5 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11d125e8 push eax */
  push32((uint32_t)(EAX));
  /* 11d125e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d125ea call dword ptr [0x11d1c188] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c188))), 0x11d125f0u);
  /* 11d125f0 mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11d125f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d125f7 mov dword ptr [esi], edx */
  w32((uint32_t)(ESI), (EDX));
  /* 11d125f9 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11d125fd mov eax, esi */
  EAX = (ESI);
  /* 11d125ff pop esi */
  ESI = (pop32());
  /* 11d12600 ret 8 */
  ESPCHK(0x11d125d0u, _esp0);
  ESP += 12; return;
}

/* FUN_10002610 @ 0x11d12610 (58 bytes, 23 insns) */
void f_11d12610(void) {
  FTRACE(0x11d12610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12610 push esi */
  push32((uint32_t)(ESI));
  /* 11d12611 mov esi, ecx */
  ESI = (ECX);
  /* 11d12613 call 0x11d12520 */
  push32(0x11d12618u); f_11d12520();
  /* 11d12618 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1261a je 0x11d12644 */
  if (C.zf) goto L_11d12644;
  /* 11d1261c mov ecx, esi */
  ECX = (ESI);
  /* 11d1261e call 0x11d12540 */
  push32(0x11d12623u); f_11d12540();
  /* 11d12623 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d12625 je 0x11d12640 */
  if (C.zf) goto L_11d12640;
  /* 11d12627 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11d1262b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1262d je 0x11d12640 */
  if (C.zf) goto L_11d12640;
  /* 11d1262f mov al, byte ptr [esi + 0x34] */
  AL = (r8((uint32_t)(ESI + 0x34)));
  /* 11d12632 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d12634 je 0x11d12644 */
  if (C.zf) goto L_11d12644;
  /* 11d12636 mov byte ptr [esi + 0x34], 0 */
  w8((uint32_t)(ESI + 0x34), (0x0u));
  /* 11d1263a mov al, 1 */
  AL = (0x1u);
  /* 11d1263c pop esi */
  ESI = (pop32());
  /* 11d1263d ret 4 */
  ESPCHK(0x11d12610u, _esp0);
  ESP += 8; return;
L_11d12640:;
  /* 11d12640 mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
L_11d12644:;
  /* 11d12644 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d12646 pop esi */
  ESI = (pop32());
  /* 11d12647 ret 4 */
  ESPCHK(0x11d12610u, _esp0);
  ESP += 8; return;
}

/* FUN_10002650 @ 0x11d12650 (126 bytes, 34 insns) */
void f_11d12650(void) {
  FTRACE(0x11d12650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12650 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12651 push esi */
  push32((uint32_t)(ESI));
  /* 11d12652 push edi */
  push32((uint32_t)(EDI));
  /* 11d12653 mov esi, ecx */
  ESI = (ECX);
  /* 11d12655 call 0x11d125c0 */
  push32(0x11d1265au); f_11d125c0();
  /* 11d1265a lea edi, [esi + 0x3d] */
  EDI = ((uint32_t)(ESI + 0x3d));
  /* 11d1265d mov ecx, edi */
  ECX = (EDI);
  /* 11d1265f call 0x11d124a0 */
  push32(0x11d12664u); f_11d124a0();
  /* 11d12664 lea ecx, [edi + 0x6c] */
  ECX = ((uint32_t)(EDI + 0x6c));
  /* 11d12667 call 0x11d126f0 */
  push32(0x11d1266cu); f_11d126f0();
  /* 11d1266c lea edi, [esi + 0x3e5] */
  EDI = ((uint32_t)(ESI + 0x3e5));
  /* 11d12672 mov ebx, 0x64 */
  EBX = (0x64u);
L_11d12677:;
  /* 11d12677 mov ecx, edi */
  ECX = (EDI);
  /* 11d12679 call 0x11d124a0 */
  push32(0x11d1267eu); f_11d124a0();
  /* 11d1267e add edi, 0x34 */
  { uint32_t _a=(EDI),_b=(0x34u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12681 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d12682 jne 0x11d12677 */
  if (!C.zf) goto L_11d12677;
  /* 11d12684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12686 mov dword ptr [esi + 0x185a], 5 */
  w32((uint32_t)(ESI + 0x185a), (0x5u));
  /* 11d12690 mov dword ptr [esi + 0x1835], eax */
  w32((uint32_t)(ESI + 0x1835), (EAX));
  /* 11d12696 mov byte ptr [esi + 0x184d], al */
  w8((uint32_t)(ESI + 0x184d), (AL));
  /* 11d1269c mov dword ptr [esi + 0x184e], eax */
  w32((uint32_t)(ESI + 0x184e), (EAX));
  /* 11d126a2 mov dword ptr [esi + 0x1852], eax */
  w32((uint32_t)(ESI + 0x1852), (EAX));
  /* 11d126a8 mov dword ptr [esi + 0x1856], eax */
  w32((uint32_t)(ESI + 0x1856), (EAX));
  /* 11d126ae lea eax, [esi + 0x1862] */
  EAX = ((uint32_t)(ESI + 0x1862));
  /* 11d126b4 push eax */
  push32((uint32_t)(EAX));
  /* 11d126b5 mov dword ptr [esi + 0x185e], 0xa */
  w32((uint32_t)(ESI + 0x185e), (0xau));
  /* 11d126bf call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d126c5u);
  /* 11d126c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d126c8 mov eax, esi */
  EAX = (ESI);
  /* 11d126ca pop edi */
  EDI = (pop32());
  /* 11d126cb pop esi */
  ESI = (pop32());
  /* 11d126cc pop ebx */
  EBX = (pop32());
  /* 11d126cd ret  */
  ESPCHK(0x11d12650u, _esp0);
  ESP += 4; return;
}

/* FUN_100026d0 @ 0x11d126d0 (20 bytes, 8 insns) */
void f_11d126d0(void) {
  FTRACE(0x11d126d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d126d0 push esi */
  push32((uint32_t)(ESI));
  /* 11d126d1 mov esi, ecx */
  ESI = (ECX);
  /* 11d126d3 call 0x11d125c0 */
  push32(0x11d126d8u); f_11d125c0();
  /* 11d126d8 mov byte ptr [esi + 0x41], 0 */
  w8((uint32_t)(ESI + 0x41), (0x0u));
  /* 11d126dc mov byte ptr [esi + 0x34], 1 */
  w8((uint32_t)(ESI + 0x34), (0x1u));
  /* 11d126e0 mov eax, esi */
  EAX = (ESI);
  /* 11d126e2 pop esi */
  ESI = (pop32());
  /* 11d126e3 ret  */
  ESPCHK(0x11d126d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x11d126f0 (25 bytes, 8 insns) */
void f_11d126f0(void) {
  FTRACE(0x11d126f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d126f0 push esi */
  push32((uint32_t)(ESI));
  /* 11d126f1 mov esi, ecx */
  ESI = (ECX);
  /* 11d126f3 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11d126f6 call 0x11d12400 */
  push32(0x11d126fbu); f_11d12400();
  /* 11d126fb mov dword ptr [esi + 0x334], 0 */
  w32((uint32_t)(ESI + 0x334), (0x0u));
  /* 11d12705 mov eax, esi */
  EAX = (ESI);
  /* 11d12707 pop esi */
  ESI = (pop32());
  /* 11d12708 ret  */
  ESPCHK(0x11d126f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002710 @ 0x11d12710 (53 bytes, 21 insns) */
void f_11d12710(void) {
  FTRACE(0x11d12710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12710 push esi */
  push32((uint32_t)(ESI));
  /* 11d12711 mov esi, ecx */
  ESI = (ECX);
  /* 11d12713 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d12715 push esi */
  push32((uint32_t)(ESI));
  /* 11d12716 call dword ptr [0x11d1c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c11c))), 0x11d1271cu);
  /* 11d1271c mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d12720 mov al, 1 */
  AL = (0x1u);
  /* 11d12722 shl al, cl */
  AL = (sh_shl((uint32_t)(AL), (CL)&0x1f, 8));
  /* 11d12724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12727 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11d12729 mov byte ptr [esi + 4], al */
  w8((uint32_t)(ESI + 0x4), (AL));
  /* 11d1272c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d12730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12732 je 0x11d1273f */
  if (C.zf) goto L_11d1273f;
  /* 11d12734 push eax */
  push32((uint32_t)(EAX));
  /* 11d12735 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12736 call dword ptr [0x11d1c0fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0fc))), 0x11d1273cu);
  /* 11d1273c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1273f:;
  /* 11d1273f mov eax, esi */
  EAX = (ESI);
  /* 11d12741 pop esi */
  ESI = (pop32());
  /* 11d12742 ret 8 */
  ESPCHK(0x11d12710u, _esp0);
  ESP += 12; return;
}

/* FUN_10002750 @ 0x11d12750 (72 bytes, 41 insns) */
void f_11d12750(void) {
  FTRACE(0x11d12750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12750 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12751 mov ebx, dword ptr [0x11d1c104] */
  EBX = (r32((uint32_t)(0x11d1c104)));
  /* 11d12757 push esi */
  push32((uint32_t)(ESI));
  /* 11d12758 push edi */
  push32((uint32_t)(EDI));
  /* 11d12759 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1275d mov esi, ecx */
  ESI = (ECX);
  /* 11d1275f push edi */
  push32((uint32_t)(EDI));
  /* 11d12760 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d12762 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d12764 push eax */
  push32((uint32_t)(EAX));
  /* 11d12765 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12767u);
  /* 11d12767 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11d12769 push edi */
  push32((uint32_t)(EDI));
  /* 11d1276a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1276c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1276d call ebx */
  call_ind((uint32_t)(EBX), 0x11d1276fu);
  /* 11d1276f mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11d12771 push edi */
  push32((uint32_t)(EDI));
  /* 11d12772 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d12774 push edx */
  push32((uint32_t)(EDX));
  /* 11d12775 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12777u);
  /* 11d12777 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d12779 push edi */
  push32((uint32_t)(EDI));
  /* 11d1277a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1277c push eax */
  push32((uint32_t)(EAX));
  /* 11d1277d call ebx */
  call_ind((uint32_t)(EBX), 0x11d1277fu);
  /* 11d1277f mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11d12781 push edi */
  push32((uint32_t)(EDI));
  /* 11d12782 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d12784 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12785 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12787u);
  /* 11d12787 mov dl, byte ptr [esi] */
  DL = (r8((uint32_t)(ESI)));
  /* 11d12789 push edi */
  push32((uint32_t)(EDI));
  /* 11d1278a push 5 */
  push32((uint32_t)(0x5u));
  /* 11d1278c push edx */
  push32((uint32_t)(EDX));
  /* 11d1278d call ebx */
  call_ind((uint32_t)(EBX), 0x11d1278fu);
  /* 11d1278f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12792 pop edi */
  EDI = (pop32());
  /* 11d12793 pop esi */
  ESI = (pop32());
  /* 11d12794 pop ebx */
  EBX = (pop32());
  /* 11d12795 ret 4 */
  ESPCHK(0x11d12750u, _esp0);
  ESP += 8; return;
}

/* FUN_100027a0 @ 0x11d127a0 (36 bytes, 14 insns) */
void f_11d127a0(void) {
  FTRACE(0x11d127a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d127a0 mov eax, ecx */
  EAX = (ECX);
  /* 11d127a2 mov dl, 1 */
  DL = (0x1u);
  /* 11d127a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d127a8 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11d127aa shl dl, cl */
  DL = (sh_shl((uint32_t)(DL), (CL)&0x1f, 8));
  /* 11d127ac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d127af or cl, dl */
  { uint32_t _r=(CL)|(DL); CL = (_r); fl_logic(_r,8); }
  /* 11d127b1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d127b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d127b4 push edx */
  push32((uint32_t)(EDX));
  /* 11d127b5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11d127b8 call dword ptr [0x11d1c100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c100))), 0x11d127beu);
  /* 11d127be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d127c1 ret 4 */
  ESPCHK(0x11d127a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100027d0 @ 0x11d127d0 (88 bytes, 34 insns) */
void f_11d127d0(void) {
  FTRACE(0x11d127d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d127d0 push esi */
  push32((uint32_t)(ESI));
  /* 11d127d1 push edi */
  push32((uint32_t)(EDI));
  /* 11d127d2 mov esi, ecx */
  ESI = (ECX);
  /* 11d127d4 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d127d6 push esi */
  push32((uint32_t)(ESI));
  /* 11d127d7 call dword ptr [0x11d1c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c11c))), 0x11d127ddu);
  /* 11d127dd mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d127e1 mov edi, dword ptr [0x11d1c198] */
  EDI = (r32((uint32_t)(0x11d1c198)));
  /* 11d127e7 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11d127ea push eax */
  push32((uint32_t)(EAX));
  /* 11d127eb push ecx */
  push32((uint32_t)(ECX));
  /* 11d127ec call edi */
  call_ind((uint32_t)(EDI), 0x11d127eeu);
  /* 11d127ee mov edx, dword ptr [esp + 0x24] */
  EDX = (r32((uint32_t)(ESP + 0x24)));
  /* 11d127f2 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11d127f5 push edx */
  push32((uint32_t)(EDX));
  /* 11d127f6 push eax */
  push32((uint32_t)(EAX));
  /* 11d127f7 call edi */
  call_ind((uint32_t)(EDI), 0x11d127f9u);
  /* 11d127f9 mov ecx, dword ptr [esp + 0x28] */
  ECX = (r32((uint32_t)(ESP + 0x28)));
  /* 11d127fd mov edx, dword ptr [esp + 0x30] */
  EDX = (r32((uint32_t)(ESP + 0x30)));
  /* 11d12801 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12803 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11d12805 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d12808 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11d1280b mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11d1280e mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11d12811 lea eax, [esi + 0x28] */
  EAX = ((uint32_t)(ESI + 0x28));
  /* 11d12814 mov dword ptr [esi + 0x10], edx */
  w32((uint32_t)(ESI + 0x10), (EDX));
  /* 11d12817 push eax */
  push32((uint32_t)(EAX));
  /* 11d12818 call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d1281eu);
  /* 11d1281e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12821 mov eax, esi */
  EAX = (ESI);
  /* 11d12823 pop edi */
  EDI = (pop32());
  /* 11d12824 pop esi */
  ESI = (pop32());
  /* 11d12825 ret 0x10 */
  ESPCHK(0x11d127d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10002830 @ 0x11d12830 (191 bytes, 75 insns) */
void f_11d12830(void) {
  FTRACE(0x11d12830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12830 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12831 push esi */
  push32((uint32_t)(ESI));
  /* 11d12832 mov esi, ecx */
  ESI = (ECX);
  /* 11d12834 call dword ptr [0x11d1c138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c138))), 0x11d1283au);
  /* 11d1283a mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1283d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1283f jne 0x11d1285d */
  if (!C.zf) goto L_11d1285d;
  /* 11d12841 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11d12844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12846 jne 0x11d1285d */
  if (!C.zf) goto L_11d1285d;
  /* 11d12848 push 0x11d1e3f4 */
  push32((uint32_t)(0x11d1e3f4u));
  /* 11d1284d call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d12853u);
  /* 11d12853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12856 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d12858 pop esi */
  ESI = (pop32());
  /* 11d12859 pop ecx */
  ECX = (pop32());
  /* 11d1285a ret 4 */
  ESPCHK(0x11d12830u, _esp0);
  ESP += 8; return;
L_11d1285d:;
  /* 11d1285d push ebx */
  push32((uint32_t)(EBX));
  /* 11d1285e push ebp */
  push32((uint32_t)(EBP));
  /* 11d1285f push edi */
  push32((uint32_t)(EDI));
  /* 11d12860 push 0x11d1e3e8 */
  push32((uint32_t)(0x11d1e3e8u));
  /* 11d12865 call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d1286bu);
  /* 11d1286b mov ecx, dword ptr [esp + 0x1c] */
  ECX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11d1286f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12872 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d12874 call 0x11d124d0 */
  push32(0x11d12879u); f_11d124d0();
  /* 11d12879 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1287c mov ebx, dword ptr [0x11d1c110] */
  EBX = (r32((uint32_t)(0x11d1c110)));
  /* 11d12882 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d12884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12886 jle 0x11d128af */
  if ((C.zf||C.sf!=C.of)) goto L_11d128af;
  /* 11d12888 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d1288c lea ebp, [esi + 0x28] */
  EBP = ((uint32_t)(ESI + 0x28));
  /* 11d1288f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12892 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
L_11d12896:;
  /* 11d12896 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1289a push 6 */
  push32((uint32_t)(0x6u));
  /* 11d1289c lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11d1289f push ebp */
  push32((uint32_t)(EBP));
  /* 11d128a0 push eax */
  push32((uint32_t)(EAX));
  /* 11d128a1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d128a2 call ebx */
  call_ind((uint32_t)(EBX), 0x11d128a4u);
  /* 11d128a4 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d128a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d128aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d128ab cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d128ad jl 0x11d12896 */
  if ((C.sf!=C.of)) goto L_11d12896;
L_11d128af:;
  /* 11d128af mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11d128b2 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d128b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d128b6 jle 0x11d128df */
  if ((C.zf||C.sf!=C.of)) goto L_11d128df;
  /* 11d128b8 mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d128bc lea ebp, [esi + 0x28] */
  EBP = ((uint32_t)(ESI + 0x28));
  /* 11d128bf add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d128c2 mov dword ptr [esp + 0x10], edx */
  w32((uint32_t)(ESP + 0x10), (EDX));
L_11d128c6:;
  /* 11d128c6 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d128c8 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 11d128cb push ebp */
  push32((uint32_t)(EBP));
  /* 11d128cc push eax */
  push32((uint32_t)(EAX));
  /* 11d128cd mov eax, dword ptr [esp + 0x1c] */
  EAX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11d128d1 push eax */
  push32((uint32_t)(EAX));
  /* 11d128d2 call ebx */
  call_ind((uint32_t)(EBX), 0x11d128d4u);
  /* 11d128d4 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11d128d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d128da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d128db cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d128dd jl 0x11d128c6 */
  if ((C.sf!=C.of)) goto L_11d128c6;
L_11d128df:;
  /* 11d128df mov eax, 1 */
  EAX = (0x1u);
  /* 11d128e4 pop edi */
  EDI = (pop32());
  /* 11d128e5 pop ebp */
  EBP = (pop32());
  /* 11d128e6 mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11d128e9 pop ebx */
  EBX = (pop32());
  /* 11d128ea pop esi */
  ESI = (pop32());
  /* 11d128eb pop ecx */
  ECX = (pop32());
  /* 11d128ec ret 4 */
  ESPCHK(0x11d12830u, _esp0);
  ESP += 8; return;
}

/* FUN_100028f0 @ 0x11d128f0 (100 bytes, 33 insns) */
void f_11d128f0(void) {
  FTRACE(0x11d128f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d128f0 push esi */
  push32((uint32_t)(ESI));
  /* 11d128f1 mov esi, ecx */
  ESI = (ECX);
  /* 11d128f3 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11d128f6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d128f7 jne 0x11d12950 */
  if (!C.zf) goto L_11d12950;
  /* 11d128f9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d128fd add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12900 push eax */
  push32((uint32_t)(EAX));
  /* 11d12901 call dword ptr [0x11d1c114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c114))), 0x11d12907u);
  /* 11d12907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1290a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d1290c je 0x11d12950 */
  if (C.zf) goto L_11d12950;
  /* 11d1290e push edi */
  push32((uint32_t)(EDI));
  /* 11d1290f push 0x11d1e400 */
  push32((uint32_t)(0x11d1e400u));
  /* 11d12914 call dword ptr [0x11d1c144] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c144))), 0x11d1291au);
  /* 11d1291a push 6 */
  push32((uint32_t)(0x6u));
  /* 11d1291c call dword ptr [0x11d1c17c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c17c))), 0x11d12922u);
  /* 11d12922 lea edi, [esi + 0x28] */
  EDI = ((uint32_t)(ESI + 0x28));
  /* 11d12925 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12927 push edi */
  push32((uint32_t)(EDI));
  /* 11d12928 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d1292eu);
  /* 11d1292e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12930 push 6 */
  push32((uint32_t)(0x6u));
  /* 11d12932 call dword ptr [0x11d1c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c124))), 0x11d12938u);
  /* 11d12938 push edi */
  push32((uint32_t)(EDI));
  /* 11d12939 call 0x11d110a0 */
  push32(0x11d1293eu); f_11d110a0();
  /* 11d1293e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12941 mov ecx, esi */
  ECX = (ESI);
  /* 11d12943 call 0x11d12960 */
  push32(0x11d12948u); f_11d12960();
  /* 11d12948 mov dword ptr [esi + 0x24], 0 */
  w32((uint32_t)(ESI + 0x24), (0x0u));
  /* 11d1294f pop edi */
  EDI = (pop32());
L_11d12950:;
  /* 11d12950 pop esi */
  ESI = (pop32());
  /* 11d12951 ret 4 */
  ESPCHK(0x11d128f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002960 @ 0x11d12960 (12 bytes, 5 insns) */
void f_11d12960(void) {
  FTRACE(0x11d12960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12960 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12962 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d12965 mov dword ptr [ecx + 0x14], eax */
  w32((uint32_t)(ECX + 0x14), (EAX));
  /* 11d12968 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11d1296b ret  */
  ESPCHK(0x11d12960u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x11d12970 (196 bytes, 68 insns) */
void f_11d12970(void) {
  FTRACE(0x11d12970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12970 push edi */
  push32((uint32_t)(EDI));
  /* 11d12971 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d12975 mov eax, 0x554e4954 */
  EAX = (0x554e4954u);
  /* 11d1297a cmp dword ptr [edi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1297d jne 0x11d12a32 */
  if (!C.zf) goto L_11d12a32;
  /* 11d12983 cmp dword ptr [0x11d3128c], eax */
  { uint32_t _a=(r32((uint32_t)(0x11d3128c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12989 je 0x11d12999 */
  if (C.zf) goto L_11d12999;
  /* 11d1298b push 0x11d31288 */
  push32((uint32_t)(0x11d31288u));
  /* 11d12990 call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d12996u);
  /* 11d12996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12999:;
  /* 11d12999 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1299a push esi */
  push32((uint32_t)(ESI));
  /* 11d1299b mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11d1299f push esi */
  push32((uint32_t)(ESI));
  /* 11d129a0 call 0x11d11660 */
  push32(0x11d129a5u); f_11d11660();
  /* 11d129a5 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d129a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d129ab push esi */
  push32((uint32_t)(ESI));
  /* 11d129ac push eax */
  push32((uint32_t)(EAX));
  /* 11d129ad call dword ptr [0x11d1c0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0f8))), 0x11d129b3u);
  /* 11d129b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d129b5 push 0x11d31288 */
  push32((uint32_t)(0x11d31288u));
  /* 11d129ba push esi */
  push32((uint32_t)(ESI));
  /* 11d129bb call dword ptr [0x11d1c184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c184))), 0x11d129c1u);
  /* 11d129c1 push esi */
  push32((uint32_t)(ESI));
  /* 11d129c2 call 0x11d116a0 */
  push32(0x11d129c7u); f_11d116a0();
  /* 11d129c7 mov esi, dword ptr [esp + 0x3c] */
  ESI = (r32((uint32_t)(ESP + 0x3c)));
  /* 11d129cb push esi */
  push32((uint32_t)(ESI));
  /* 11d129cc call 0x11d11660 */
  push32(0x11d129d1u); f_11d11660();
  /* 11d129d1 push 0x11d31288 */
  push32((uint32_t)(0x11d31288u));
  /* 11d129d6 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d129dcu);
  /* 11d129dc add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d129df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d129e1 je 0x11d12a08 */
  if (C.zf) goto L_11d12a08;
  /* 11d129e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d129e5 push edi */
  push32((uint32_t)(EDI));
  /* 11d129e6 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d129ecu);
  /* 11d129ec push 0x11d31288 */
  push32((uint32_t)(0x11d31288u));
  /* 11d129f1 push esi */
  push32((uint32_t)(ESI));
  /* 11d129f2 call dword ptr [0x11d1c0f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0f4))), 0x11d129f8u);
  /* 11d129f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d129fb push esi */
  push32((uint32_t)(ESI));
  /* 11d129fc call 0x11d116a0 */
  push32(0x11d12a01u); f_11d116a0();
  /* 11d12a01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a04 pop esi */
  ESI = (pop32());
  /* 11d12a05 pop ebx */
  EBX = (pop32());
  /* 11d12a06 pop edi */
  EDI = (pop32());
  /* 11d12a07 ret  */
  ESPCHK(0x11d12970u, _esp0);
  ESP += 4; return;
L_11d12a08:;
  /* 11d12a08 mov ebx, dword ptr [esp + 0x20] */
  EBX = (r32((uint32_t)(ESP + 0x20)));
  /* 11d12a0c push edi */
  push32((uint32_t)(EDI));
  /* 11d12a0d push ebx */
  push32((uint32_t)(EBX));
  /* 11d12a0e call dword ptr [0x11d1c1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c8))), 0x11d12a14u);
  /* 11d12a14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12a19 jne 0x11d12a27 */
  if (!C.zf) goto L_11d12a27;
  /* 11d12a1b push eax */
  push32((uint32_t)(EAX));
  /* 11d12a1c push ebx */
  push32((uint32_t)(EBX));
  /* 11d12a1d push edi */
  push32((uint32_t)(EDI));
  /* 11d12a1e push esi */
  push32((uint32_t)(ESI));
  /* 11d12a1f call 0x11d110d0 */
  push32(0x11d12a24u); f_11d110d0();
  /* 11d12a24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12a27:;
  /* 11d12a27 push esi */
  push32((uint32_t)(ESI));
  /* 11d12a28 call 0x11d116a0 */
  push32(0x11d12a2du); f_11d116a0();
  /* 11d12a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a30 pop esi */
  ESI = (pop32());
  /* 11d12a31 pop ebx */
  EBX = (pop32());
L_11d12a32:;
  /* 11d12a32 pop edi */
  EDI = (pop32());
  /* 11d12a33 ret  */
  ESPCHK(0x11d12970u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a40 @ 0x11d12a40 (59 bytes, 27 insns) */
void f_11d12a40(void) {
  FTRACE(0x11d12a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12a40 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d12a44 push esi */
  push32((uint32_t)(ESI));
  /* 11d12a45 push edi */
  push32((uint32_t)(EDI));
  /* 11d12a46 mov edi, dword ptr [0x11d1c18c] */
  EDI = (r32((uint32_t)(0x11d1c18c)));
  /* 11d12a4c mov esi, ecx */
  ESI = (ECX);
  /* 11d12a4e push eax */
  push32((uint32_t)(EAX));
  /* 11d12a4f push esi */
  push32((uint32_t)(ESI));
  /* 11d12a50 call edi */
  call_ind((uint32_t)(EDI), 0x11d12a52u);
  /* 11d12a52 mov ecx, dword ptr [esp + 0x18] */
  ECX = (r32((uint32_t)(ESP + 0x18)));
  /* 11d12a56 lea edx, [esi + 8] */
  EDX = ((uint32_t)(ESI + 0x8));
  /* 11d12a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12a5a push edx */
  push32((uint32_t)(EDX));
  /* 11d12a5b call edi */
  call_ind((uint32_t)(EDI), 0x11d12a5du);
  /* 11d12a5d mov eax, dword ptr [esp + 0x24] */
  EAX = (r32((uint32_t)(ESP + 0x24)));
  /* 11d12a61 lea ecx, [esi + 0x10] */
  ECX = ((uint32_t)(ESI + 0x10));
  /* 11d12a64 push eax */
  push32((uint32_t)(EAX));
  /* 11d12a65 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12a66 call edi */
  call_ind((uint32_t)(EDI), 0x11d12a68u);
  /* 11d12a68 mov edx, dword ptr [esp + 0x30] */
  EDX = (r32((uint32_t)(ESP + 0x30)));
  /* 11d12a6c add esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a6f push edx */
  push32((uint32_t)(EDX));
  /* 11d12a70 push esi */
  push32((uint32_t)(ESI));
  /* 11d12a71 call edi */
  call_ind((uint32_t)(EDI), 0x11d12a73u);
  /* 11d12a73 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a76 pop edi */
  EDI = (pop32());
  /* 11d12a77 pop esi */
  ESI = (pop32());
  /* 11d12a78 ret 0x10 */
  ESPCHK(0x11d12a40u, _esp0);
  ESP += 20; return;
}

/* FUN_10002a80 @ 0x11d12a80 (71 bytes, 24 insns) */
void f_11d12a80(void) {
  FTRACE(0x11d12a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12a80 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12a81 push esi */
  push32((uint32_t)(ESI));
  /* 11d12a82 push edi */
  push32((uint32_t)(EDI));
  /* 11d12a83 mov edi, ecx */
  EDI = (ECX);
  /* 11d12a85 mov esi, edi */
  ESI = (EDI);
  /* 11d12a87 mov ebx, 0x32 */
  EBX = (0x32u);
L_11d12a8c:;
  /* 11d12a8c mov ecx, esi */
  ECX = (ESI);
  /* 11d12a8e call 0x11d125c0 */
  push32(0x11d12a93u); f_11d125c0();
  /* 11d12a93 add esi, 0x47 */
  { uint32_t _a=(ESI),_b=(0x47u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12a96 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d12a97 jne 0x11d12a8c */
  if (!C.zf) goto L_11d12a8c;
  /* 11d12a99 push 0xf29 */
  push32((uint32_t)(0xf29u));
  /* 11d12a9e push edi */
  push32((uint32_t)(EDI));
  /* 11d12a9f call dword ptr [0x11d1c11c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c11c))), 0x11d12aa5u);
  /* 11d12aa5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12aaa mov word ptr [edi + 0xf1e], ax */
  w16((uint32_t)(EDI + 0xf1e), (AX));
  /* 11d12ab1 mov dword ptr [edi + 0xf20], eax */
  w32((uint32_t)(EDI + 0xf20), (EAX));
  /* 11d12ab7 mov dword ptr [edi + 0xf24], 6 */
  w32((uint32_t)(EDI + 0xf24), (0x6u));
  /* 11d12ac1 mov eax, edi */
  EAX = (EDI);
  /* 11d12ac3 pop edi */
  EDI = (pop32());
  /* 11d12ac4 pop esi */
  ESI = (pop32());
  /* 11d12ac5 pop ebx */
  EBX = (pop32());
  /* 11d12ac6 ret  */
  ESPCHK(0x11d12a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ad0 @ 0x11d12ad0 (67 bytes, 33 insns) */
void f_11d12ad0(void) {
  FTRACE(0x11d12ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12ad1 push esi */
  push32((uint32_t)(ESI));
  /* 11d12ad2 push edi */
  push32((uint32_t)(EDI));
  /* 11d12ad3 mov edi, ecx */
  EDI = (ECX);
  /* 11d12ad5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d12ad7 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 11d12ad9 cmp word ptr [edi + 0xf1e], si */
  { uint32_t _a=(r16((uint32_t)(EDI + 0xf1e))),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d12ae0 jbe 0x11d12b0d */
  if ((C.cf||C.zf)) goto L_11d12b0d;
  /* 11d12ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12ae3 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11d12ae6:;
  /* 11d12ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12ae7 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d12aedu);
  /* 11d12aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12af2 je 0x11d12af5 */
  if (C.zf) goto L_11d12af5;
  /* 11d12af4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
L_11d12af5:;
  /* 11d12af5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12af7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d12af8 mov ax, word ptr [edi + 0xf1e] */
  AX = (r16((uint32_t)(EDI + 0xf1e)));
  /* 11d12aff add ebx, 0x47 */
  { uint32_t _a=(EBX),_b=(0x47u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12b02 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12b04 jl 0x11d12ae6 */
  if ((C.sf!=C.of)) goto L_11d12ae6;
  /* 11d12b06 pop ebx */
  EBX = (pop32());
  /* 11d12b07 pop edi */
  EDI = (pop32());
  /* 11d12b08 mov eax, ebp */
  EAX = (EBP);
  /* 11d12b0a pop esi */
  ESI = (pop32());
  /* 11d12b0b pop ebp */
  EBP = (pop32());
  /* 11d12b0c ret  */
  ESPCHK(0x11d12ad0u, _esp0);
  ESP += 4; return;
L_11d12b0d:;
  /* 11d12b0d pop edi */
  EDI = (pop32());
  /* 11d12b0e mov eax, ebp */
  EAX = (EBP);
  /* 11d12b10 pop esi */
  ESI = (pop32());
  /* 11d12b11 pop ebp */
  EBP = (pop32());
  /* 11d12b12 ret  */
  ESPCHK(0x11d12ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b20 @ 0x11d12b20 (200 bytes, 70 insns) */
void f_11d12b20(void) {
  FTRACE(0x11d12b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12b20 mov dx, word ptr [ecx + 0xf1e] */
  DX = (r16((uint32_t)(ECX + 0xf1e)));
  /* 11d12b27 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12b2a cmp dx, 0x32 */
  { uint32_t _a=(DX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d12b2e jb 0x11d12b38 */
  if (C.cf) goto L_11d12b38;
  /* 11d12b30 xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11d12b32 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12b35 ret 0x10 */
  ESPCHK(0x11d12b20u, _esp0);
  ESP += 20; return;
L_11d12b38:;
  /* 11d12b38 mov eax, edx */
  EAX = (EDX);
  /* 11d12b3a push ebx */
  push32((uint32_t)(EBX));
  /* 11d12b3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d12b40 push esi */
  push32((uint32_t)(ESI));
  /* 11d12b41 push edi */
  push32((uint32_t)(EDI));
  /* 11d12b42 mov edi, dword ptr [esp + 0x3c] */
  EDI = (r32((uint32_t)(ESP + 0x3c)));
  /* 11d12b46 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11d12b49 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11d12b4c sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12b4e mov eax, dword ptr [esp + 0x40] */
  EAX = (r32((uint32_t)(ESP + 0x40)));
  /* 11d12b52 add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12b54 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11d12b55 mov word ptr [ecx + 0xf1e], dx */
  w16((uint32_t)(ECX + 0xf1e), (DX));
  /* 11d12b5c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12b5f mov dword ptr [esi + 0x35], eax */
  w32((uint32_t)(ESI + 0x35), (EAX));
  /* 11d12b62 jne 0x11d12b71 */
  if (!C.zf) goto L_11d12b71;
  /* 11d12b64 mov eax, dword ptr [ecx + 0xf20] */
  EAX = (r32((uint32_t)(ECX + 0xf20)));
  /* 11d12b6a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12b6c je 0x11d12b88 */
  if (C.zf) goto L_11d12b88;
  /* 11d12b6e push eax */
  push32((uint32_t)(EAX));
  /* 11d12b6f jmp 0x11d12b7e */
  goto L_11d12b7e;
L_11d12b71:;
  /* 11d12b71 mov eax, dword ptr [ecx + 0xf24] */
  EAX = (r32((uint32_t)(ECX + 0xf24)));
  /* 11d12b77 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12b79 je 0x11d12b88 */
  if (C.zf) goto L_11d12b88;
  /* 11d12b7b mov cl, al */
  CL = (AL);
  /* 11d12b7d push ecx */
  push32((uint32_t)(ECX));
L_11d12b7e:;
  /* 11d12b7e push edi */
  push32((uint32_t)(EDI));
  /* 11d12b7f call dword ptr [0x11d1c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c124))), 0x11d12b85u);
  /* 11d12b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12b88:;
  /* 11d12b88 lea ebx, [esi + 0xc] */
  EBX = ((uint32_t)(ESI + 0xc));
  /* 11d12b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12b8d push ebx */
  push32((uint32_t)(EBX));
  /* 11d12b8e push edi */
  push32((uint32_t)(EDI));
  /* 11d12b8f call dword ptr [0x11d1c184] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c184))), 0x11d12b95u);
  /* 11d12b95 mov eax, dword ptr [esi + 0x43] */
  EAX = (r32((uint32_t)(ESI + 0x43)));
  /* 11d12b98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12b9b cmp eax, 0x554e4954 */
  { uint32_t _a=(EAX),_b=(0x554e4954u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12ba0 mov dword ptr [esi + 0x3b], 0 */
  w32((uint32_t)(ESI + 0x3b), (0x0u));
  /* 11d12ba7 je 0x11d12bb6 */
  if (C.zf) goto L_11d12bb6;
  /* 11d12ba9 lea edx, [esi + 0x3f] */
  EDX = ((uint32_t)(ESI + 0x3f));
  /* 11d12bac push edx */
  push32((uint32_t)(EDX));
  /* 11d12bad call dword ptr [0x11d1c180] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c180))), 0x11d12bb3u);
  /* 11d12bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12bb6:;
  /* 11d12bb6 mov eax, dword ptr [esp + 0x48] */
  EAX = (r32((uint32_t)(ESP + 0x48)));
  /* 11d12bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12bbc je 0x11d12bcc */
  if (C.zf) goto L_11d12bcc;
  /* 11d12bbe add esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12bc1 push esi */
  push32((uint32_t)(ESI));
  /* 11d12bc2 push eax */
  push32((uint32_t)(EAX));
  /* 11d12bc3 call dword ptr [0x11d1c10c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c10c))), 0x11d12bc9u);
  /* 11d12bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12bcc:;
  /* 11d12bcc lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11d12bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11d12bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12bd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d12bd4 call dword ptr [0x11d1c1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c4))), 0x11d12bdau);
  /* 11d12bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12bdd mov al, 1 */
  AL = (0x1u);
  /* 11d12bdf pop edi */
  EDI = (pop32());
  /* 11d12be0 pop esi */
  ESI = (pop32());
  /* 11d12be1 pop ebx */
  EBX = (pop32());
  /* 11d12be2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12be5 ret 0x10 */
  ESPCHK(0x11d12b20u, _esp0);
  ESP += 20; return;
}

/* FUN_10002bf0 @ 0x11d12bf0 (651 bytes, 193 insns) [1 switch table(s)] */
void f_11d12bf0(void) {
  FTRACE(0x11d12bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12bf0 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12bf3 push edi */
  push32((uint32_t)(EDI));
  /* 11d12bf4 mov edi, ecx */
  EDI = (ECX);
  /* 11d12bf6 mov dword ptr [esp + 4], 0 */
  w32((uint32_t)(ESP + 0x4), (0x0u));
  /* 11d12bfe cmp word ptr [edi + 0xf1e], 0 */
  { uint32_t _a=(r16((uint32_t)(EDI + 0xf1e))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d12c06 jbe 0x11d12e74 */
  if ((C.cf||C.zf)) goto L_11d12e74;
  /* 11d12c0c push ebx */
  push32((uint32_t)(EBX));
  /* 11d12c0d mov ebx, dword ptr [0x11d1c118] */
  EBX = (r32((uint32_t)(0x11d1c118)));
  /* 11d12c13 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12c14 push esi */
  push32((uint32_t)(ESI));
  /* 11d12c15 lea esi, [edi + 0xc] */
  ESI = ((uint32_t)(EDI + 0xc));
L_11d12c18:;
  /* 11d12c18 push esi */
  push32((uint32_t)(ESI));
  /* 11d12c19 call dword ptr [0x11d1c120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c120))), 0x11d12c1fu);
  /* 11d12c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12c24 je 0x11d12e54 */
  if (C.zf) goto L_11d12e54;
  /* 11d12c2a mov eax, dword ptr [edi + 0xf20] */
  EAX = (r32((uint32_t)(EDI + 0xf20)));
  /* 11d12c30 push eax */
  push32((uint32_t)(EAX));
  /* 11d12c31 call 0x11d11660 */
  push32(0x11d12c36u); f_11d11660();
  /* 11d12c36 mov ecx, dword ptr [edi + 0xf24] */
  ECX = (r32((uint32_t)(EDI + 0xf24)));
  /* 11d12c3c push ecx */
  push32((uint32_t)(ECX));
  /* 11d12c3d call 0x11d11660 */
  push32(0x11d12c42u); f_11d11660();
  /* 11d12c42 mov ebp, dword ptr [0x11d1c1b0] */
  EBP = (r32((uint32_t)(0x11d1c1b0)));
  /* 11d12c48 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 11d12c4d lea edx, [esp + 0x30] */
  EDX = ((uint32_t)(ESP + 0x30));
  /* 11d12c51 push esi */
  push32((uint32_t)(ESI));
  /* 11d12c52 push edx */
  push32((uint32_t)(EDX));
  /* 11d12c53 call ebp */
  call_ind((uint32_t)(EBP), 0x11d12c55u);
  /* 11d12c55 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11d12c5a lea eax, [esp + 0x34] */
  EAX = ((uint32_t)(ESP + 0x34));
  /* 11d12c5e push esi */
  push32((uint32_t)(ESI));
  /* 11d12c5f push eax */
  push32((uint32_t)(EAX));
  /* 11d12c60 call ebp */
  call_ind((uint32_t)(EBP), 0x11d12c62u);
  /* 11d12c62 mov eax, dword ptr [esi + 0x29] */
  EAX = (r32((uint32_t)(ESI + 0x29)));
  /* 11d12c65 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12c68 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12c6b ja 0x11d12e39 */
  if ((!C.cf&&!C.zf)) goto L_11d12e39;
  /* 11d12c71 jmp dword ptr [eax*4 + 0x11d12e7c] */
  switch (EAX) {
    case 0: goto L_11d12c78;
    case 1: goto L_11d12d04;
    case 2: goto L_11d12d6d;
    case 3: goto L_11d12dea;
    default: x86_unimpl("switch@0x11d12c71 out of table"); return;
  }
L_11d12c78:;
  /* 11d12c78 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d12c7a push esi */
  push32((uint32_t)(ESI));
  /* 11d12c7b mov cl, byte ptr [esi + 0x2d] */
  CL = (r8((uint32_t)(ESI + 0x2d)));
  /* 11d12c7e shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d12c81 lea ebp, [ecx + edi + 0xdee] */
  EBP = ((uint32_t)(ECX + EDI*1 + 0xdee));
  /* 11d12c88 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12c89 call dword ptr [0x11d1c1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c8))), 0x11d12c8fu);
  /* 11d12c8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12c92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12c94 je 0x11d12cd2 */
  if (C.zf) goto L_11d12cd2;
  /* 11d12c96 mov dword ptr [esi + 0x29], 1 */
  w32((uint32_t)(ESI + 0x29), (0x1u));
  /* 11d12c9d call ebx */
  call_ind((uint32_t)(EBX), 0x11d12c9fu);
  /* 11d12c9f lea edx, [esp + 0x2c] */
  EDX = ((uint32_t)(ESP + 0x2c));
  /* 11d12ca3 add eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12ca8 push edx */
  push32((uint32_t)(EDX));
  /* 11d12ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12cab push esi */
  push32((uint32_t)(ESI));
  /* 11d12cac mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
  /* 11d12caf call dword ptr [0x11d1c1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c4))), 0x11d12cb5u);
  /* 11d12cb5 lea eax, [esp + 0x38] */
  EAX = ((uint32_t)(ESP + 0x38));
  /* 11d12cb9 mov dword ptr [esp + 0x4c], 0x3c00 */
  w32((uint32_t)(ESP + 0x4c), (0x3c00u));
  /* 11d12cc1 push eax */
  push32((uint32_t)(EAX));
  /* 11d12cc2 mov dword ptr [esp + 0x54], 0 */
  w32((uint32_t)(ESP + 0x54), (0x0u));
  /* 11d12cca call dword ptr [0x11d1c108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c108))), 0x11d12cd0u);
  /* 11d12cd0 jmp 0x11d12ce2 */
  goto L_11d12ce2;
L_11d12cd2:;
  /* 11d12cd2 mov cl, byte ptr [edi + 0xf24] */
  CL = (r8((uint32_t)(EDI + 0xf24)));
  /* 11d12cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12cda push ebp */
  push32((uint32_t)(EBP));
  /* 11d12cdb push esi */
  push32((uint32_t)(ESI));
  /* 11d12cdc push ecx */
  push32((uint32_t)(ECX));
  /* 11d12cdd call 0x11d110d0 */
  push32(0x11d12ce2u); f_11d110d0();
L_11d12ce2:;
  /* 11d12ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12ce5 lea edx, [esp + 0x1c] */
  EDX = ((uint32_t)(ESP + 0x1c));
  /* 11d12ce9 lea eax, [esi + 0x33] */
  EAX = ((uint32_t)(ESI + 0x33));
  /* 11d12cec lea ecx, [esp + 0x24] */
  ECX = ((uint32_t)(ESP + 0x24));
  /* 11d12cf0 push edx */
  push32((uint32_t)(EDX));
  /* 11d12cf1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11d12cf3 push eax */
  push32((uint32_t)(EAX));
  /* 11d12cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12cf6 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12cf7 call 0x11d12970 */
  push32(0x11d12cfcu); f_11d12970();
  /* 11d12cfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12cff jmp 0x11d12e39 */
  goto L_11d12e39;
L_11d12d04:;
  /* 11d12d04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d12d06 mov dl, byte ptr [esi + 0x2d] */
  DL = (r8((uint32_t)(ESI + 0x2d)));
  /* 11d12d09 shl edx, 5 */
  EDX = (sh_shl((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11d12d0c lea ebp, [edx + edi + 0xdf6] */
  EBP = ((uint32_t)(EDX + EDI*1 + 0xdf6));
  /* 11d12d13 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12d15u);
  /* 11d12d15 cmp eax, dword ptr [esi + 0x2f] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12d18 jle 0x11d12e39 */
  if ((C.zf||C.sf!=C.of)) goto L_11d12e39;
  /* 11d12d1e lea eax, [esp + 0x18] */
  EAX = ((uint32_t)(ESP + 0x18));
  /* 11d12d22 lea ecx, [esp + 0x14] */
  ECX = ((uint32_t)(ESP + 0x14));
  /* 11d12d26 push eax */
  push32((uint32_t)(EAX));
  /* 11d12d27 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12d28 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12d29 mov dword ptr [esi + 0x29], 2 */
  w32((uint32_t)(ESI + 0x29), (0x2u));
  /* 11d12d30 call dword ptr [0x11d1c1b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1b4))), 0x11d12d36u);
  /* 11d12d36 lea edx, [esp + 0x64] */
  EDX = ((uint32_t)(ESP + 0x64));
  /* 11d12d3a push edx */
  push32((uint32_t)(EDX));
  /* 11d12d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12d3d push esi */
  push32((uint32_t)(ESI));
  /* 11d12d3e call dword ptr [0x11d1c1c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c4))), 0x11d12d44u);
  /* 11d12d44 mov eax, dword ptr [esp + 0x2c] */
  EAX = (r32((uint32_t)(ESP + 0x2c)));
  /* 11d12d48 mov ecx, dword ptr [esp + 0x30] */
  ECX = (r32((uint32_t)(ESP + 0x30)));
  /* 11d12d4c lea edx, [esp + 0x70] */
  EDX = ((uint32_t)(ESP + 0x70));
  /* 11d12d50 mov dword ptr [esp + 0x84], eax */
  w32((uint32_t)(ESP + 0x84), (EAX));
  /* 11d12d57 push edx */
  push32((uint32_t)(EDX));
  /* 11d12d58 mov dword ptr [esp + 0x8c], ecx */
  w32((uint32_t)(ESP + 0x8c), (ECX));
  /* 11d12d5f call dword ptr [0x11d1c108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c108))), 0x11d12d65u);
  /* 11d12d65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12d68 jmp 0x11d12e39 */
  goto L_11d12e39;
L_11d12d6d:;
  /* 11d12d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d12d6f push esi */
  push32((uint32_t)(ESI));
  /* 11d12d70 mov al, byte ptr [esi + 0x2d] */
  AL = (r8((uint32_t)(ESI + 0x2d)));
  /* 11d12d73 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11d12d76 lea ebp, [eax + edi + 0xde6] */
  EBP = ((uint32_t)(EAX + EDI*1 + 0xde6));
  /* 11d12d7d push ebp */
  push32((uint32_t)(EBP));
  /* 11d12d7e call dword ptr [0x11d1c1c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1c8))), 0x11d12d84u);
  /* 11d12d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12d89 je 0x11d12dbb */
  if (C.zf) goto L_11d12dbb;
  /* 11d12d8b mov dword ptr [esi + 0x29], 3 */
  w32((uint32_t)(ESI + 0x29), (0x3u));
  /* 11d12d92 call ebx */
  call_ind((uint32_t)(EBX), 0x11d12d94u);
  /* 11d12d94 add eax, 0x190 */
  { uint32_t _a=(EAX),_b=(0x190u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12d9b push esi */
  push32((uint32_t)(ESI));
  /* 11d12d9c mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
  /* 11d12d9f call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d12da5u);
  /* 11d12da5 mov cl, byte ptr [edi + 0xf20] */
  CL = (r8((uint32_t)(EDI + 0xf20)));
  /* 11d12dab mov dl, byte ptr [edi + 0xf24] */
  DL = (r8((uint32_t)(EDI + 0xf24)));
  /* 11d12db1 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12db2 push edx */
  push32((uint32_t)(EDX));
  /* 11d12db3 call dword ptr [0x11d1c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c124))), 0x11d12db9u);
  /* 11d12db9 jmp 0x11d12dcb */
  goto L_11d12dcb;
L_11d12dbb:;
  /* 11d12dbb mov al, byte ptr [edi + 0xf24] */
  AL = (r8((uint32_t)(EDI + 0xf24)));
  /* 11d12dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12dc3 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12dc4 push esi */
  push32((uint32_t)(ESI));
  /* 11d12dc5 push eax */
  push32((uint32_t)(EAX));
  /* 11d12dc6 call 0x11d110d0 */
  push32(0x11d12dcbu); f_11d110d0();
L_11d12dcb:;
  /* 11d12dcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12dce lea ecx, [esp + 0x1c] */
  ECX = ((uint32_t)(ESP + 0x1c));
  /* 11d12dd2 lea edx, [esi + 0x33] */
  EDX = ((uint32_t)(ESI + 0x33));
  /* 11d12dd5 lea eax, [esp + 0x24] */
  EAX = ((uint32_t)(ESP + 0x24));
  /* 11d12dd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d12dda push 5 */
  push32((uint32_t)(0x5u));
  /* 11d12ddc push edx */
  push32((uint32_t)(EDX));
  /* 11d12ddd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12ddf push eax */
  push32((uint32_t)(EAX));
  /* 11d12de0 call 0x11d12970 */
  push32(0x11d12de5u); f_11d12970();
  /* 11d12de5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12de8 jmp 0x11d12e39 */
  goto L_11d12e39;
L_11d12dea:;
  /* 11d12dea call ebx */
  call_ind((uint32_t)(EBX), 0x11d12decu);
  /* 11d12dec cmp eax, dword ptr [esi + 0x2f] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x2f))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12def jle 0x11d12e39 */
  if ((C.zf||C.sf!=C.of)) goto L_11d12e39;
  /* 11d12df1 mov cl, byte ptr [esp + 0x10] */
  CL = (r8((uint32_t)(ESP + 0x10)));
  /* 11d12df5 mov byte ptr [edi + 0xf28], cl */
  w8((uint32_t)(EDI + 0xf28), (CL));
  /* 11d12dfb call dword ptr [esp + 0x88] */
  call_ind((uint32_t)(r32((uint32_t)(ESP + 0x88))), 0x11d12e02u);
  /* 11d12e02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d12e04 je 0x11d12e2f */
  if (C.zf) goto L_11d12e2f;
  /* 11d12e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d12e08 push esi */
  push32((uint32_t)(ESI));
  /* 11d12e09 mov dword ptr [esi + 0x29], 0 */
  w32((uint32_t)(ESI + 0x29), (0x0u));
  /* 11d12e10 call dword ptr [0x11d1c1ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c1ac))), 0x11d12e16u);
  /* 11d12e16 mov dl, byte ptr [edi + 0xf24] */
  DL = (r8((uint32_t)(EDI + 0xf24)));
  /* 11d12e1c mov al, byte ptr [edi + 0xf20] */
  AL = (r8((uint32_t)(EDI + 0xf20)));
  /* 11d12e22 push edx */
  push32((uint32_t)(EDX));
  /* 11d12e23 push eax */
  push32((uint32_t)(EAX));
  /* 11d12e24 call dword ptr [0x11d1c124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c124))), 0x11d12e2au);
  /* 11d12e2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12e2d jmp 0x11d12e39 */
  goto L_11d12e39;
L_11d12e2f:;
  /* 11d12e2f call ebx */
  call_ind((uint32_t)(EBX), 0x11d12e31u);
  /* 11d12e31 add eax, 0x190 */
  { uint32_t _a=(EAX),_b=(0x190u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12e36 mov dword ptr [esi + 0x2f], eax */
  w32((uint32_t)(ESI + 0x2f), (EAX));
L_11d12e39:;
  /* 11d12e39 mov ecx, dword ptr [edi + 0xf20] */
  ECX = (r32((uint32_t)(EDI + 0xf20)));
  /* 11d12e3f push ecx */
  push32((uint32_t)(ECX));
  /* 11d12e40 call 0x11d116a0 */
  push32(0x11d12e45u); f_11d116a0();
  /* 11d12e45 mov edx, dword ptr [edi + 0xf24] */
  EDX = (r32((uint32_t)(EDI + 0xf24)));
  /* 11d12e4b push edx */
  push32((uint32_t)(EDX));
  /* 11d12e4c call 0x11d116a0 */
  push32(0x11d12e51u); f_11d116a0();
  /* 11d12e51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d12e54:;
  /* 11d12e54 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d12e58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d12e5a mov cx, word ptr [edi + 0xf1e] */
  CX = (r16((uint32_t)(EDI + 0xf1e)));
  /* 11d12e61 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d12e62 add esi, 0x47 */
  { uint32_t _a=(ESI),_b=(0x47u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12e65 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12e67 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11d12e6b jl 0x11d12c18 */
  if ((C.sf!=C.of)) goto L_11d12c18;
  /* 11d12e71 pop esi */
  ESI = (pop32());
  /* 11d12e72 pop ebp */
  EBP = (pop32());
  /* 11d12e73 pop ebx */
  EBX = (pop32());
L_11d12e74:;
  /* 11d12e74 pop edi */
  EDI = (pop32());
  /* 11d12e75 add esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12e78 ret 4 */
  ESPCHK(0x11d12bf0u, _esp0);
  ESP += 8; return;
}

/* FUN_10002e90 @ 0x11d12e90 (23 bytes, 5 insns) */
void f_11d12e90(void) {
  FTRACE(0x11d12e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12e90 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d12e94 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d12e98 mov dword ptr [ecx + 0xf20], eax */
  w32((uint32_t)(ECX + 0xf20), (EAX));
  /* 11d12e9e mov dword ptr [ecx + 0xf24], edx */
  w32((uint32_t)(ECX + 0xf24), (EDX));
  /* 11d12ea4 ret 8 */
  ESPCHK(0x11d12e90u, _esp0);
  ESP += 12; return;
}

/* FUN_10002eb0 @ 0x11d12eb0 (23 bytes, 6 insns) */
void f_11d12eb0(void) {
  FTRACE(0x11d12eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12eb0 call 0x11d12ec8 */
  push32(0x11d12eb5u); f_11d12ec8();
  /* 11d12eb5 call 0x11d13226 */
  push32(0x11d12ebau); f_11d13226();
  /* 11d12eba mov dword ptr [0x11d371f8], eax */
  w32((uint32_t)(0x11d371f8), (EAX));
  /* 11d12ebf call 0x11d131d6 */
  push32(0x11d12ec4u); f_11d131d6();
  /* 11d12ec4 fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11d12ec6 ret  */
  ESPCHK(0x11d12eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec8 @ 0x11d12ec8 (56 bytes, 8 insns) */
void f_11d12ec8(void) {
  FTRACE(0x11d12ec8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12ec8 mov eax, 0x11d135ff */
  EAX = (0x11d135ffu);
  /* 11d12ecd mov dword ptr [0x11d1e428], 0x11d132a9 */
  w32((uint32_t)(0x11d1e428), (0x11d132a9u));
  /* 11d12ed7 mov dword ptr [0x11d1e424], eax */
  w32((uint32_t)(0x11d1e424), (EAX));
  /* 11d12edc mov dword ptr [0x11d1e42c], 0x11d1330f */
  w32((uint32_t)(0x11d1e42c), (0x11d1330fu));
  /* 11d12ee6 mov dword ptr [0x11d1e430], 0x11d1324f */
  w32((uint32_t)(0x11d1e430), (0x11d1324fu));
  /* 11d12ef0 mov dword ptr [0x11d1e434], 0x11d132f7 */
  w32((uint32_t)(0x11d1e434), (0x11d132f7u));
  /* 11d12efa mov dword ptr [0x11d1e438], eax */
  w32((uint32_t)(0x11d1e438), (EAX));
  /* 11d12eff ret  */
  ESPCHK(0x11d12ec8u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11d12f00 (39 bytes, 16 insns) */
void f_11d12f00(void) {
  FTRACE(0x11d12f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12f01 mov ebp, esp */
  EBP = (ESP);
  /* 11d12f03 add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12f06 wait  */
  /* wait (no observable integer/reg state) */
  /* 11d12f07 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11d12f0a wait  */
  /* wait (no observable integer/reg state) */
  /* 11d12f0b mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11d12f0f or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11d12f12 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11d12f16 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11d12f19 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11d12f1c fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11d12f1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d12f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d12f25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d12f26 ret  */
  ESPCHK(0x11d12f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f27 @ 0x11d12f27 (37 bytes, 18 insns) */
void f_11d12f27(void) {
  FTRACE(0x11d12f27u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12f27 push ebp */
  push32((uint32_t)(EBP));
  /* 11d12f28 mov ebp, esp */
  EBP = (ESP);
  /* 11d12f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d12f2d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d12f2e idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d12f31 mov ecx, eax */
  ECX = (EAX);
  /* 11d12f33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d12f36 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d12f37 idiv dword ptr [ebp + 0xc] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + 0xc))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d12f3a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12f3e jge 0x11d12f48 */
  if ((C.sf==C.of)) goto L_11d12f48;
  /* 11d12f40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d12f42 jle 0x11d12f48 */
  if ((C.zf||C.sf!=C.of)) goto L_11d12f48;
  /* 11d12f44 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d12f45 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11d12f48:;
  /* 11d12f48 mov eax, ecx */
  EAX = (ECX);
  /* 11d12f4a pop ebp */
  EBP = (pop32());
  /* 11d12f4b ret  */
  ESPCHK(0x11d12f27u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f4c @ 0x11d12f4c (126 bytes, 37 insns) */
void f_11d12f4c(void) {
  FTRACE(0x11d12f4cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12f4c push esi */
  push32((uint32_t)(ESI));
  /* 11d12f4d call 0x11d13767 */
  push32(0x11d12f52u); f_11d13767();
  /* 11d12f52 push dword ptr [0x11d38950] */
  push32((uint32_t)(r32((uint32_t)(0x11d38950))));
  /* 11d12f58 call 0x11d13ac2 */
  push32(0x11d12f5du); f_11d13ac2();
  /* 11d12f5d mov edx, dword ptr [0x11d38950] */
  EDX = (r32((uint32_t)(0x11d38950)));
  /* 11d12f63 pop ecx */
  ECX = (pop32());
  /* 11d12f64 mov ecx, dword ptr [0x11d3894c] */
  ECX = (r32((uint32_t)(0x11d3894c)));
  /* 11d12f6a mov esi, ecx */
  ESI = (ECX);
  /* 11d12f6c sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12f6e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12f71 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d12f73 jae 0x11d12fb2 */
  if (!C.cf) goto L_11d12fb2;
  /* 11d12f75 push edx */
  push32((uint32_t)(EDX));
  /* 11d12f76 call 0x11d13ac2 */
  push32(0x11d12f7bu); f_11d13ac2();
  /* 11d12f7b add eax, 0x10 */
  { uint32_t _a=(EAX),_b=(0x10u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12f7e push eax */
  push32((uint32_t)(EAX));
  /* 11d12f7f push dword ptr [0x11d38950] */
  push32((uint32_t)(r32((uint32_t)(0x11d38950))));
  /* 11d12f85 call 0x11d13793 */
  push32(0x11d12f8au); f_11d13793();
  /* 11d12f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d12f8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d12f8f jne 0x11d12f95 */
  if (!C.zf) goto L_11d12f95;
  /* 11d12f91 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d12f93 jmp 0x11d12fc1 */
  goto L_11d12fc1;
L_11d12f95:;
  /* 11d12f95 mov ecx, dword ptr [0x11d3894c] */
  ECX = (r32((uint32_t)(0x11d3894c)));
  /* 11d12f9b sub ecx, dword ptr [0x11d38950] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11d38950))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12fa1 mov dword ptr [0x11d38950], eax */
  w32((uint32_t)(0x11d38950), (EAX));
  /* 11d12fa6 sar ecx, 2 */
  ECX = (sh_sar((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11d12fa9 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
  /* 11d12fac mov dword ptr [0x11d3894c], ecx */
  w32((uint32_t)(0x11d3894c), (ECX));
L_11d12fb2:;
  /* 11d12fb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d12fb6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d12fb8 add dword ptr [0x11d3894c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x11d3894c))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(0x11d3894c), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d12fbf mov esi, eax */
  ESI = (EAX);
L_11d12fc1:;
  /* 11d12fc1 call 0x11d13770 */
  push32(0x11d12fc6u); f_11d13770();
  /* 11d12fc6 mov eax, esi */
  EAX = (ESI);
  /* 11d12fc8 pop esi */
  ESI = (pop32());
  /* 11d12fc9 ret  */
  ESPCHK(0x11d12f4cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002fca @ 0x11d12fca (18 bytes, 8 insns) */
void f_11d12fca(void) {
  FTRACE(0x11d12fcau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d12fca push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d12fce call 0x11d12f4c */
  push32(0x11d12fd3u); f_11d12f4c();
  /* 11d12fd3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d12fd5 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d12fd7 pop ecx */
  ECX = (pop32());
  /* 11d12fd8 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d12fda dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d12fdb ret  */
  ESPCHK(0x11d12fcau, _esp0);
  ESP += 4; return;
}

/* _rand @ 0x11d1300b (34 bytes, 9 insns) */
void f_11d1300b(void) {
  FTRACE(0x11d1300bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1300b call 0x11d13d6f */
  push32(0x11d13010u); f_11d13d6f();
  /* 11d13010 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11d13013 imul ecx, ecx, 0x343fd */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x343fdu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11d13019 add ecx, 0x269ec3 */
  { uint32_t _a=(ECX),_b=(0x269ec3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1301f mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11d13022 mov eax, ecx */
  EAX = (ECX);
  /* 11d13024 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d13027 and eax, 0x7fff */
  { uint32_t _r=(EAX)&(0x7fffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1302c ret  */
  ESPCHK(0x11d1300bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000302d @ 0x11d1302d (217 bytes, 57 insns) */
void f_11d1302d(void) {
  FTRACE(0x11d1302du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1302d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d13031 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13034 jne 0x11d130c2 */
  if (!C.zf) goto L_11d130c2;
  /* 11d1303a call dword ptr [0x11d1c0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0bc))), 0x11d13040u);
  /* 11d13040 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13042 mov dword ptr [0x11d37214], eax */
  w32((uint32_t)(0x11d37214), (EAX));
  /* 11d13047 call 0x11d14633 */
  push32(0x11d1304cu); f_11d14633();
  /* 11d1304c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1304e pop ecx */
  ECX = (pop32());
  /* 11d1304f je 0x11d1308d */
  if (C.zf) goto L_11d1308d;
  /* 11d13051 mov eax, dword ptr [0x11d37214] */
  EAX = (r32((uint32_t)(0x11d37214)));
  /* 11d13056 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d13058 mov cl, byte ptr [0x11d37215] */
  CL = (r8((uint32_t)(0x11d37215)));
  /* 11d1305e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d13063 shr dword ptr [0x11d37214], 0x10 */
  w32((uint32_t)(0x11d37214), (sh_shr((uint32_t)(r32((uint32_t)(0x11d37214))), (0x10u)&0x1f, 32)));
  /* 11d1306a mov dword ptr [0x11d3721c], eax */
  w32((uint32_t)(0x11d3721c), (EAX));
  /* 11d1306f mov dword ptr [0x11d37220], ecx */
  w32((uint32_t)(0x11d37220), (ECX));
  /* 11d13075 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d13078 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1307a mov dword ptr [0x11d37218], eax */
  w32((uint32_t)(0x11d37218), (EAX));
  /* 11d1307f call 0x11d13cea */
  push32(0x11d13084u); f_11d13cea();
  /* 11d13084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13086 jne 0x11d13091 */
  if (!C.zf) goto L_11d13091;
  /* 11d13088 call 0x11d14690 */
  push32(0x11d1308du); f_11d14690();
L_11d1308d:;
  /* 11d1308d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1308f jmp 0x11d13103 */
  goto L_11d13103;
L_11d13091:;
  /* 11d13091 call dword ptr [0x11d1c0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b8))), 0x11d13097u);
  /* 11d13097 mov dword ptr [0x11d38954], eax */
  w32((uint32_t)(0x11d38954), (EAX));
  /* 11d1309c call 0x11d1438c */
  push32(0x11d130a1u); f_11d1438c();
  /* 11d130a1 mov dword ptr [0x11d37200], eax */
  w32((uint32_t)(0x11d37200), (EAX));
  /* 11d130a6 call 0x11d13e76 */
  push32(0x11d130abu); f_11d13e76();
  /* 11d130ab call 0x11d1413f */
  push32(0x11d130b0u); f_11d1413f();
  /* 11d130b0 call 0x11d14086 */
  push32(0x11d130b5u); f_11d14086();
  /* 11d130b5 call 0x11d13675 */
  push32(0x11d130bau); f_11d13675();
  /* 11d130ba inc dword ptr [0x11d371fc] */
  { uint32_t _r=(r32((uint32_t)(0x11d371fc)))+1; w32((uint32_t)(0x11d371fc), (_r)); fl_inc(_r,32); }
  /* 11d130c0 jmp 0x11d13100 */
  goto L_11d13100;
L_11d130c2:;
  /* 11d130c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d130c4 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d130c6 jne 0x11d130f4 */
  if (!C.zf) goto L_11d130f4;
  /* 11d130c8 cmp dword ptr [0x11d371fc], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11d371fc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d130ce jle 0x11d1308d */
  if ((C.zf||C.sf!=C.of)) goto L_11d1308d;
  /* 11d130d0 dec dword ptr [0x11d371fc] */
  { uint32_t _r=(r32((uint32_t)(0x11d371fc)))-1; w32((uint32_t)(0x11d371fc), (_r)); fl_dec(_r,32); }
  /* 11d130d6 cmp dword ptr [0x11d3724c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11d3724c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d130dc jne 0x11d130e3 */
  if (!C.zf) goto L_11d130e3;
  /* 11d130de call 0x11d136b3 */
  push32(0x11d130e3u); f_11d136b3();
L_11d130e3:;
  /* 11d130e3 call 0x11d14032 */
  push32(0x11d130e8u); f_11d14032();
  /* 11d130e8 call 0x11d13d3e */
  push32(0x11d130edu); f_11d13d3e();
  /* 11d130ed call 0x11d14690 */
  push32(0x11d130f2u); f_11d14690();
  /* 11d130f2 jmp 0x11d13100 */
  goto L_11d13100;
L_11d130f4:;
  /* 11d130f4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d130f7 jne 0x11d13100 */
  if (!C.zf) goto L_11d13100;
  /* 11d130f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d130fa call 0x11d13dd6 */
  push32(0x11d130ffu); f_11d13dd6();
  /* 11d130ff pop ecx */
  ECX = (pop32());
L_11d13100:;
  /* 11d13100 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13102 pop eax */
  EAX = (pop32());
L_11d13103:;
  /* 11d13103 ret 0xc */
  ESPCHK(0x11d1302du, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11d13106 (157 bytes, 73 insns) */
void f_11d13106(void) {
  FTRACE(0x11d13106u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13106 push ebp */
  push32((uint32_t)(EBP));
  /* 11d13107 mov ebp, esp */
  EBP = (ESP);
  /* 11d13109 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1310a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1310d push esi */
  push32((uint32_t)(ESI));
  /* 11d1310e mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13111 push edi */
  push32((uint32_t)(EDI));
  /* 11d13112 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d13115 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13117 jne 0x11d13122 */
  if (!C.zf) goto L_11d13122;
  /* 11d13119 cmp dword ptr [0x11d371fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d371fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13120 jmp 0x11d13148 */
  goto L_11d13148;
L_11d13122:;
  /* 11d13122 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13125 je 0x11d1312c */
  if (C.zf) goto L_11d1312c;
  /* 11d13127 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1312a jne 0x11d1314e */
  if (!C.zf) goto L_11d1314e;
L_11d1312c:;
  /* 11d1312c mov eax, dword ptr [0x11d38958] */
  EAX = (r32((uint32_t)(0x11d38958)));
  /* 11d13131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13133 je 0x11d1313e */
  if (C.zf) goto L_11d1313e;
  /* 11d13135 push edi */
  push32((uint32_t)(EDI));
  /* 11d13136 push esi */
  push32((uint32_t)(ESI));
  /* 11d13137 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13138 call eax */
  call_ind((uint32_t)(EAX), 0x11d1313au);
  /* 11d1313a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1313c je 0x11d1314a */
  if (C.zf) goto L_11d1314a;
L_11d1313e:;
  /* 11d1313e push edi */
  push32((uint32_t)(EDI));
  /* 11d1313f push esi */
  push32((uint32_t)(ESI));
  /* 11d13140 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13141 call 0x11d1302d */
  push32(0x11d13146u); f_11d1302d();
  /* 11d13146 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_11d13148:;
  /* 11d13148 jne 0x11d1314e */
  if (!C.zf) goto L_11d1314e;
L_11d1314a:;
  /* 11d1314a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1314c jmp 0x11d1319c */
  goto L_11d1319c;
L_11d1314e:;
  /* 11d1314e push edi */
  push32((uint32_t)(EDI));
  /* 11d1314f push esi */
  push32((uint32_t)(ESI));
  /* 11d13150 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13151 call 0x11d11ff0 */
  push32(0x11d13156u); f_11d11ff0();
  /* 11d13156 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13159 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d1315c jne 0x11d1316a */
  if (!C.zf) goto L_11d1316a;
  /* 11d1315e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13160 jne 0x11d13199 */
  if (!C.zf) goto L_11d13199;
  /* 11d13162 push edi */
  push32((uint32_t)(EDI));
  /* 11d13163 push eax */
  push32((uint32_t)(EAX));
  /* 11d13164 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13165 call 0x11d1302d */
  push32(0x11d1316au); f_11d1302d();
L_11d1316a:;
  /* 11d1316a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1316c je 0x11d13173 */
  if (C.zf) goto L_11d13173;
  /* 11d1316e cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13171 jne 0x11d13199 */
  if (!C.zf) goto L_11d13199;
L_11d13173:;
  /* 11d13173 push edi */
  push32((uint32_t)(EDI));
  /* 11d13174 push esi */
  push32((uint32_t)(ESI));
  /* 11d13175 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13176 call 0x11d1302d */
  push32(0x11d1317bu); f_11d1302d();
  /* 11d1317b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1317d jne 0x11d13182 */
  if (!C.zf) goto L_11d13182;
  /* 11d1317f and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11d13182:;
  /* 11d13182 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13186 je 0x11d13199 */
  if (C.zf) goto L_11d13199;
  /* 11d13188 mov eax, dword ptr [0x11d38958] */
  EAX = (r32((uint32_t)(0x11d38958)));
  /* 11d1318d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1318f je 0x11d13199 */
  if (C.zf) goto L_11d13199;
  /* 11d13191 push edi */
  push32((uint32_t)(EDI));
  /* 11d13192 push esi */
  push32((uint32_t)(ESI));
  /* 11d13193 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13194 call eax */
  call_ind((uint32_t)(EAX), 0x11d13196u);
  /* 11d13196 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11d13199:;
  /* 11d13199 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d1319c:;
  /* 11d1319c pop edi */
  EDI = (pop32());
  /* 11d1319d pop esi */
  ESI = (pop32());
  /* 11d1319e pop ebx */
  EBX = (pop32());
  /* 11d1319f pop ebp */
  EBP = (pop32());
  /* 11d131a0 ret 0xc */
  ESPCHK(0x11d13106u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11d131a3 (48 bytes, 15 insns) */
void f_11d131a3(void) {
  FTRACE(0x11d131a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d131a3 mov eax, dword ptr [0x11d37208] */
  EAX = (r32((uint32_t)(0x11d37208)));
  /* 11d131a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d131ab je 0x11d131ba */
  if (C.zf) goto L_11d131ba;
  /* 11d131ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d131af jne 0x11d131bf */
  if (!C.zf) goto L_11d131bf;
  /* 11d131b1 cmp dword ptr [0x11d3720c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d3720c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d131b8 jne 0x11d131bf */
  if (!C.zf) goto L_11d131bf;
L_11d131ba:;
  /* 11d131ba call 0x11d14738 */
  push32(0x11d131bfu); f_11d14738();
L_11d131bf:;
  /* 11d131bf push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d131c3 call 0x11d14771 */
  push32(0x11d131c8u); f_11d14771();
  /* 11d131c8 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d131cd call dword ptr [0x11d1e420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1e420))), 0x11d131d3u);
  /* 11d131d3 pop ecx */
  ECX = (pop32());
  /* 11d131d4 pop ecx */
  ECX = (pop32());
  /* 11d131d5 ret  */
  ESPCHK(0x11d131a3u, _esp0);
  ESP += 4; return;
}

/* FUN_100031d6 @ 0x11d131d6 (18 bytes, 6 insns) */
void f_11d131d6(void) {
  FTRACE(0x11d131d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d131d6 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11d131db push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11d131e0 call 0x11d148f9 */
  push32(0x11d131e5u); f_11d148f9();
  /* 11d131e5 pop ecx */
  ECX = (pop32());
  /* 11d131e6 pop ecx */
  ECX = (pop32());
  /* 11d131e7 ret  */
  ESPCHK(0x11d131d6u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e8 @ 0x11d131e8 (62 bytes, 24 insns) */
void f_11d131e8(void) {
  FTRACE(0x11d131e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d131e8 push ebp */
  push32((uint32_t)(EBP));
  /* 11d131e9 mov ebp, esp */
  EBP = (ESP);
  /* 11d131eb sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d131ee fld qword ptr [0x11d1c1e0] */
  fpu_push(rf64((uint32_t)(0x11d1c1e0)));
  /* 11d131f4 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11d131f7 fld qword ptr [0x11d1c1d8] */
  fpu_push(rf64((uint32_t)(0x11d1c1d8)));
  /* 11d131fd fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11d13200 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11d13203 fdiv qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x8)));
  /* 11d13206 fmul qword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x8)));
  /* 11d13209 fsubr qword ptr [ebp - 0x10] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x10))) - FPU_ST(0);
  /* 11d1320c fstp qword ptr [ebp - 0x18] */
  wf64((uint32_t)(EBP + -0x18), FPU_ST(0));
  (void)fpu_pop();
  /* 11d1320f fld qword ptr [ebp - 0x18] */
  fpu_push(rf64((uint32_t)(EBP + -0x18)));
  /* 11d13212 fcomp qword ptr [0x11d1c1d0] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11d1c1d0)));
  (void)fpu_pop();
  /* 11d13218 fnstsw ax */
  AX = fpu_status();
  /* 11d1321a sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11d1321b jbe 0x11d13222 */
  if ((C.cf||C.zf)) goto L_11d13222;
  /* 11d1321d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1321f pop eax */
  EAX = (pop32());
  /* 11d13220 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d13221 ret  */
  ESPCHK(0x11d131e8u, _esp0);
  ESP += 4; return;
L_11d13222:;
  /* 11d13222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d13224 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d13225 ret  */
  ESPCHK(0x11d131e8u, _esp0);
  ESP += 4; return;
}

/* FUN_10003226 @ 0x11d13226 (41 bytes, 13 insns) */
void f_11d13226(void) {
  FTRACE(0x11d13226u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13226 push 0x11d1c204 */
  push32((uint32_t)(0x11d1c204u));
  /* 11d1322b call dword ptr [0x11d1c0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0c4))), 0x11d13231u);
  /* 11d13231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13233 je 0x11d1324a */
  if (C.zf) goto L_11d1324a;
  /* 11d13235 push 0x11d1c1e8 */
  push32((uint32_t)(0x11d1c1e8u));
  /* 11d1323a push eax */
  push32((uint32_t)(EAX));
  /* 11d1323b call dword ptr [0x11d1c0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0c0))), 0x11d13241u);
  /* 11d13241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13243 je 0x11d1324a */
  if (C.zf) goto L_11d1324a;
  /* 11d13245 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13247 call eax */
  call_ind((uint32_t)(EAX), 0x11d13249u);
  /* 11d13249 ret  */
  ESPCHK(0x11d13226u, _esp0);
  ESP += 4; return;
L_11d1324a:;
  /* 11d1324a jmp 0x11d131e8 */
  f_11d131e8(); return;
}

/* FUN_1000324f @ 0x11d1324f (90 bytes, 37 insns) */
void f_11d1324f(void) {
  FTRACE(0x11d1324fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1324f push esi */
  push32((uint32_t)(ESI));
  /* 11d13250 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d13254 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11d13257 push eax */
  push32((uint32_t)(EAX));
  /* 11d13258 call 0x11d14a9f */
  push32(0x11d1325du); f_11d14a9f();
  /* 11d1325d cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13260 pop ecx */
  ECX = (pop32());
  /* 11d13261 je 0x11d1328f */
  if (C.zf) goto L_11d1328f;
L_11d13263:;
  /* 11d13263 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d13264 cmp dword ptr [0x11d1e500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1326b jle 0x11d1327c */
  if ((C.zf||C.sf!=C.of)) goto L_11d1327c;
  /* 11d1326d movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11d13270 push 4 */
  push32((uint32_t)(0x4u));
  /* 11d13272 push eax */
  push32((uint32_t)(EAX));
  /* 11d13273 call 0x11d14a2a */
  push32(0x11d13278u); f_11d14a2a();
  /* 11d13278 pop ecx */
  ECX = (pop32());
  /* 11d13279 pop ecx */
  ECX = (pop32());
  /* 11d1327a jmp 0x11d1328b */
  goto L_11d1328b;
L_11d1327c:;
  /* 11d1327c movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 11d1327f mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d13285 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11d13288 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11d1328b:;
  /* 11d1328b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1328d jne 0x11d13263 */
  if (!C.zf) goto L_11d13263;
L_11d1328f:;
  /* 11d1328f mov cl, byte ptr [0x11d1e504] */
  CL = (r8((uint32_t)(0x11d1e504)));
  /* 11d13295 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d13297 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11d13299 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d1329a:;
  /* 11d1329a mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11d1329c mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
  /* 11d1329e mov al, cl */
  AL = (CL);
  /* 11d132a0 mov cl, byte ptr [esi] */
  CL = (r8((uint32_t)(ESI)));
  /* 11d132a2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d132a3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11d132a5 jne 0x11d1329a */
  if (!C.zf) goto L_11d1329a;
  /* 11d132a7 pop esi */
  ESI = (pop32());
  /* 11d132a8 ret  */
  ESPCHK(0x11d1324fu, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11d1330f (62 bytes, 29 insns) */
void f_11d1330f(void) {
  FTRACE(0x11d1330fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1330f push ebp */
  push32((uint32_t)(EBP));
  /* 11d13310 mov ebp, esp */
  EBP = (ESP);
  /* 11d13312 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13313 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13314 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13318 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1331b je 0x11d13338 */
  if (C.zf) goto L_11d13338;
  /* 11d1331d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d13320 push eax */
  push32((uint32_t)(EAX));
  /* 11d13321 call 0x11d14f6b */
  push32(0x11d13326u); f_11d14f6b();
  /* 11d13326 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13329 pop ecx */
  ECX = (pop32());
  /* 11d1332a pop ecx */
  ECX = (pop32());
  /* 11d1332b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1332e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d13330 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d13333 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11d13336 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d13337 ret  */
  ESPCHK(0x11d1330fu, _esp0);
  ESP += 4; return;
L_11d13338:;
  /* 11d13338 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11d1333b push eax */
  push32((uint32_t)(EAX));
  /* 11d1333c call 0x11d14f98 */
  push32(0x11d13341u); f_11d14f98();
  /* 11d13341 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13344 pop ecx */
  ECX = (pop32());
  /* 11d13345 pop ecx */
  ECX = (pop32());
  /* 11d13346 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d13349 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d1334b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1334c ret  */
  ESPCHK(0x11d1330fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000334d @ 0x11d1334d (97 bytes, 42 insns) */
void f_11d1334d(void) {
  FTRACE(0x11d1334du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1334d push ebp */
  push32((uint32_t)(EBP));
  /* 11d1334e mov ebp, esp */
  EBP = (ESP);
  /* 11d13350 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13353 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d13356 push esi */
  push32((uint32_t)(ESI));
  /* 11d13357 push eax */
  push32((uint32_t)(EAX));
  /* 11d13358 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d1335b push eax */
  push32((uint32_t)(EAX));
  /* 11d1335c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1335f push ecx */
  push32((uint32_t)(ECX));
  /* 11d13360 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13361 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11d13363 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11d13366 call 0x11d1503c */
  push32(0x11d1336bu); f_11d1503c();
  /* 11d1336b mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1336e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d13371 push eax */
  push32((uint32_t)(EAX));
  /* 11d13372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13375 lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 11d13378 push eax */
  push32((uint32_t)(EAX));
  /* 11d13379 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1337b cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1337f sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d13382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d13384 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13386 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11d13389 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1338b add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1338d push ecx */
  push32((uint32_t)(ECX));
  /* 11d1338e call 0x11d14fc5 */
  push32(0x11d13393u); f_11d14fc5();
  /* 11d13393 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d13396 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13398 push eax */
  push32((uint32_t)(EAX));
  /* 11d13399 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1339c push esi */
  push32((uint32_t)(ESI));
  /* 11d1339d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d133a0 call 0x11d133ae */
  push32(0x11d133a5u); f_11d133ae();
  /* 11d133a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d133a8 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d133ab pop esi */
  ESI = (pop32());
  /* 11d133ac leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d133ad ret  */
  ESPCHK(0x11d1334du, _esp0);
  ESP += 4; return;
}

/* FUN_100033ae @ 0x11d133ae (194 bytes, 91 insns) */
void f_11d133ae(void) {
  FTRACE(0x11d133aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d133ae push ebp */
  push32((uint32_t)(EBP));
  /* 11d133af mov ebp, esp */
  EBP = (ESP);
  /* 11d133b1 push ebx */
  push32((uint32_t)(EBX));
  /* 11d133b2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d133b4 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d133b7 push esi */
  push32((uint32_t)(ESI));
  /* 11d133b8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11d133bb push edi */
  push32((uint32_t)(EDI));
  /* 11d133bc mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d133bf je 0x11d133dc */
  if (C.zf) goto L_11d133dc;
  /* 11d133c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d133c3 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d133c6 setg al */
  AL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11d133c9 push eax */
  push32((uint32_t)(EAX));
  /* 11d133ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d133cc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d133cf sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d133d2 add eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d133d4 push eax */
  push32((uint32_t)(EAX));
  /* 11d133d5 call 0x11d13650 */
  push32(0x11d133dau); f_11d13650();
  /* 11d133da pop ecx */
  ECX = (pop32());
  /* 11d133db pop ecx */
  ECX = (pop32());
L_11d133dc:;
  /* 11d133dc cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d133df mov eax, edi */
  EAX = (EDI);
  /* 11d133e1 jne 0x11d133e9 */
  if (!C.zf) goto L_11d133e9;
  /* 11d133e3 mov byte ptr [edi], 0x2d */
  w8((uint32_t)(EDI), (0x2du));
  /* 11d133e6 lea eax, [edi + 1] */
  EAX = ((uint32_t)(EDI + 0x1));
L_11d133e9:;
  /* 11d133e9 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d133ec jle 0x11d13400 */
  if ((C.zf||C.sf!=C.of)) goto L_11d13400;
  /* 11d133ee mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d133f1 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11d133f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11d133f6 mov eax, ecx */
  EAX = (ECX);
  /* 11d133f8 mov cl, byte ptr [0x11d1e504] */
  CL = (r8((uint32_t)(0x11d1e504)));
  /* 11d133fe mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
L_11d13400:;
  /* 11d13400 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d13402 cmp byte ptr [ebp + 0x18], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x18))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d13405 push 0x11d1c218 */
  push32((uint32_t)(0x11d1c218u));
  /* 11d1340a sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d1340d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1340f add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13412 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13413 call 0x11d15150 */
  push32(0x11d13418u); f_11d15150();
  /* 11d13418 cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1341b pop ecx */
  ECX = (pop32());
  /* 11d1341c pop ecx */
  ECX = (pop32());
  /* 11d1341d mov ecx, eax */
  ECX = (EAX);
  /* 11d1341f je 0x11d13424 */
  if (C.zf) goto L_11d13424;
  /* 11d13421 mov byte ptr [ecx], 0x45 */
  w8((uint32_t)(ECX), (0x45u));
L_11d13424:;
  /* 11d13424 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d13427 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d13428 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1342b je 0x11d13469 */
  if (C.zf) goto L_11d13469;
  /* 11d1342d mov ebx, dword ptr [esi + 4] */
  EBX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d13430 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d13431 jns 0x11d13438 */
  if (!C.sf) goto L_11d13438;
  /* 11d13433 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d13435 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
L_11d13438:;
  /* 11d13438 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d13439 cmp ebx, 0x64 */
  { uint32_t _a=(EBX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1343c jl 0x11d1344f */
  if ((C.sf!=C.of)) goto L_11d1344f;
  /* 11d1343e mov eax, ebx */
  EAX = (EBX);
  /* 11d13440 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11d13442 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d13443 pop esi */
  ESI = (pop32());
  /* 11d13444 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d13446 add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11d13448 mov eax, ebx */
  EAX = (EBX);
  /* 11d1344a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d1344b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d1344d mov ebx, edx */
  EBX = (EDX);
L_11d1344f:;
  /* 11d1344f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d13450 cmp ebx, 0xa */
  { uint32_t _a=(EBX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13453 jl 0x11d13466 */
  if ((C.sf!=C.of)) goto L_11d13466;
  /* 11d13455 mov eax, ebx */
  EAX = (EBX);
  /* 11d13457 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d13459 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d1345a pop esi */
  ESI = (pop32());
  /* 11d1345b idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d1345d add byte ptr [ecx], al */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(AL),_r=_a+_b; w8((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,8); }
  /* 11d1345f mov eax, ebx */
  EAX = (EBX);
  /* 11d13461 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d13462 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d13464 mov ebx, edx */
  EBX = (EDX);
L_11d13466:;
  /* 11d13466 add byte ptr [ecx + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x1))),_b=(BL),_r=_a+_b; w8((uint32_t)(ECX + 0x1), (_r)); fl_add(_a,_b,_r,8); }
L_11d13469:;
  /* 11d13469 mov eax, edi */
  EAX = (EDI);
  /* 11d1346b pop edi */
  EDI = (pop32());
  /* 11d1346c pop esi */
  ESI = (pop32());
  /* 11d1346d pop ebx */
  EBX = (pop32());
  /* 11d1346e pop ebp */
  EBP = (pop32());
  /* 11d1346f ret  */
  ESPCHK(0x11d133aeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003470 @ 0x11d13470 (85 bytes, 37 insns) */
void f_11d13470(void) {
  FTRACE(0x11d13470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13470 push ebp */
  push32((uint32_t)(EBP));
  /* 11d13471 mov ebp, esp */
  EBP = (ESP);
  /* 11d13473 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13476 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d13479 push esi */
  push32((uint32_t)(ESI));
  /* 11d1347a push eax */
  push32((uint32_t)(EAX));
  /* 11d1347b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d1347e push eax */
  push32((uint32_t)(EAX));
  /* 11d1347f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13482 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13483 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13484 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11d13486 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11d13489 call 0x11d1503c */
  push32(0x11d1348eu); f_11d1503c();
  /* 11d1348e mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d13491 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d13494 push eax */
  push32((uint32_t)(EAX));
  /* 11d13495 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d13498 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1349a push eax */
  push32((uint32_t)(EAX));
  /* 11d1349b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1349d cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d134a1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d134a4 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d134a7 push eax */
  push32((uint32_t)(EAX));
  /* 11d134a8 call 0x11d14fc5 */
  push32(0x11d134adu); f_11d14fc5();
  /* 11d134ad lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d134b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d134b2 push eax */
  push32((uint32_t)(EAX));
  /* 11d134b3 push esi */
  push32((uint32_t)(ESI));
  /* 11d134b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d134b7 call 0x11d134c5 */
  push32(0x11d134bcu); f_11d134c5();
  /* 11d134bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d134bf add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d134c2 pop esi */
  ESI = (pop32());
  /* 11d134c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d134c4 ret  */
  ESPCHK(0x11d13470u, _esp0);
  ESP += 4; return;
}

/* FUN_100034c5 @ 0x11d134c5 (167 bytes, 73 insns) */
void f_11d134c5(void) {
  FTRACE(0x11d134c5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d134c5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d134c6 mov ebp, esp */
  EBP = (ESP);
  /* 11d134c8 push ebx */
  push32((uint32_t)(EBX));
  /* 11d134c9 push esi */
  push32((uint32_t)(ESI));
  /* 11d134ca mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d134cd mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d134d0 push edi */
  push32((uint32_t)(EDI));
  /* 11d134d1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d134d4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d134d5 cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d134d9 je 0x11d134f5 */
  if (C.zf) goto L_11d134f5;
  /* 11d134db cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d134de jne 0x11d134f5 */
  if (!C.zf) goto L_11d134f5;
  /* 11d134e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d134e2 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d134e5 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11d134e8 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d134ea add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d134ec mov eax, ecx */
  EAX = (ECX);
  /* 11d134ee mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11d134f1 and byte ptr [eax + 1], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1)))&(0x0u); w8((uint32_t)(EAX + 0x1), (_r)); fl_logic(_r,8); }
L_11d134f5:;
  /* 11d134f5 cmp dword ptr [esi], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d134f8 mov edi, ebx */
  EDI = (EBX);
  /* 11d134fa jne 0x11d13502 */
  if (!C.zf) goto L_11d13502;
  /* 11d134fc mov byte ptr [ebx], 0x2d */
  w8((uint32_t)(EBX), (0x2du));
  /* 11d134ff lea edi, [ebx + 1] */
  EDI = ((uint32_t)(EBX + 0x1));
L_11d13502:;
  /* 11d13502 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d13505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13507 jg 0x11d13519 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d13519;
  /* 11d13509 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1350b push edi */
  push32((uint32_t)(EDI));
  /* 11d1350c call 0x11d13650 */
  push32(0x11d13511u); f_11d13650();
  /* 11d13511 pop ecx */
  ECX = (pop32());
  /* 11d13512 mov byte ptr [edi], 0x30 */
  w8((uint32_t)(EDI), (0x30u));
  /* 11d13515 pop ecx */
  ECX = (pop32());
  /* 11d13516 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d13517 jmp 0x11d1351b */
  goto L_11d1351b;
L_11d13519:;
  /* 11d13519 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11d1351b:;
  /* 11d1351b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1351f jle 0x11d13565 */
  if ((C.zf||C.sf!=C.of)) goto L_11d13565;
  /* 11d13521 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13523 push edi */
  push32((uint32_t)(EDI));
  /* 11d13524 call 0x11d13650 */
  push32(0x11d13529u); f_11d13650();
  /* 11d13529 mov al, byte ptr [0x11d1e504] */
  AL = (r8((uint32_t)(0x11d1e504)));
  /* 11d1352e pop ecx */
  ECX = (pop32());
  /* 11d1352f mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d13531 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11d13534 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d13535 pop ecx */
  ECX = (pop32());
  /* 11d13536 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13538 jge 0x11d13565 */
  if ((C.sf==C.of)) goto L_11d13565;
  /* 11d1353a cmp byte ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1353e je 0x11d13544 */
  if (C.zf) goto L_11d13544;
  /* 11d13540 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11d13542 jmp 0x11d1354b */
  goto L_11d1354b;
L_11d13544:;
  /* 11d13544 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 11d13546 cmp dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13549 jl 0x11d1354e */
  if ((C.sf!=C.of)) goto L_11d1354e;
L_11d1354b:;
  /* 11d1354b mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11d1354e:;
  /* 11d1354e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d13551 push edi */
  push32((uint32_t)(EDI));
  /* 11d13552 call 0x11d13650 */
  push32(0x11d13557u); f_11d13650();
  /* 11d13557 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1355a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11d1355c push edi */
  push32((uint32_t)(EDI));
  /* 11d1355d call 0x11d15240 */
  push32(0x11d13562u); f_11d15240();
  /* 11d13562 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d13565:;
  /* 11d13565 pop edi */
  EDI = (pop32());
  /* 11d13566 mov eax, ebx */
  EAX = (EBX);
  /* 11d13568 pop esi */
  ESI = (pop32());
  /* 11d13569 pop ebx */
  EBX = (pop32());
  /* 11d1356a pop ebp */
  EBP = (pop32());
  /* 11d1356b ret  */
  ESPCHK(0x11d134c5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000356c @ 0x11d1356c (147 bytes, 66 insns) */
void f_11d1356c(void) {
  FTRACE(0x11d1356cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1356c push ebp */
  push32((uint32_t)(EBP));
  /* 11d1356d mov ebp, esp */
  EBP = (ESP);
  /* 11d1356f sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13572 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13573 push esi */
  push32((uint32_t)(ESI));
  /* 11d13574 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d13577 push edi */
  push32((uint32_t)(EDI));
  /* 11d13578 push eax */
  push32((uint32_t)(EAX));
  /* 11d13579 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d1357c push eax */
  push32((uint32_t)(EAX));
  /* 11d1357d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13580 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13581 push ecx */
  push32((uint32_t)(ECX));
  /* 11d13582 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11d13584 fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11d13587 call 0x11d1503c */
  push32(0x11d1358cu); f_11d1503c();
  /* 11d1358c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1358f mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d13592 lea esi, [eax - 1] */
  ESI = ((uint32_t)(EAX + -0x1));
  /* 11d13595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d13597 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1359b sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d1359e add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d135a1 mov edi, eax */
  EDI = (EAX);
  /* 11d135a3 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d135a6 push eax */
  push32((uint32_t)(EAX));
  /* 11d135a7 push ebx */
  push32((uint32_t)(EBX));
  /* 11d135a8 push edi */
  push32((uint32_t)(EDI));
  /* 11d135a9 call 0x11d14fc5 */
  push32(0x11d135aeu); f_11d14fc5();
  /* 11d135ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d135b1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d135b4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d135b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d135b7 setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11d135ba cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d135bd jl 0x11d135e5 */
  if ((C.sf!=C.of)) goto L_11d135e5;
  /* 11d135bf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d135c1 jge 0x11d135e5 */
  if ((C.sf==C.of)) goto L_11d135e5;
  /* 11d135c3 test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11d135c5 je 0x11d135d1 */
  if (C.zf) goto L_11d135d1;
L_11d135c7:;
  /* 11d135c7 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11d135c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d135ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11d135cc jne 0x11d135c7 */
  if (!C.zf) goto L_11d135c7;
  /* 11d135ce and byte ptr [edi - 2], al */
  { uint32_t _r=(r8((uint32_t)(EDI + -0x2)))&(AL); w8((uint32_t)(EDI + -0x2), (_r)); fl_logic(_r,8); }
L_11d135d1:;
  /* 11d135d1 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d135d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d135d6 push eax */
  push32((uint32_t)(EAX));
  /* 11d135d7 push ebx */
  push32((uint32_t)(EBX));
  /* 11d135d8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d135db call 0x11d134c5 */
  push32(0x11d135e0u); f_11d134c5();
  /* 11d135e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d135e3 jmp 0x11d135fa */
  goto L_11d135fa;
L_11d135e5:;
  /* 11d135e5 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11d135e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d135ea push eax */
  push32((uint32_t)(EAX));
  /* 11d135eb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d135ee push ebx */
  push32((uint32_t)(EBX));
  /* 11d135ef push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d135f2 call 0x11d133ae */
  push32(0x11d135f7u); f_11d133ae();
  /* 11d135f7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d135fa:;
  /* 11d135fa pop edi */
  EDI = (pop32());
  /* 11d135fb pop esi */
  ESI = (pop32());
  /* 11d135fc pop ebx */
  EBX = (pop32());
  /* 11d135fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d135fe ret  */
  ESPCHK(0x11d1356cu, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11d135ff (81 bytes, 29 insns) */
void f_11d135ff(void) {
  FTRACE(0x11d135ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d135ff push ebp */
  push32((uint32_t)(EBP));
  /* 11d13600 mov ebp, esp */
  EBP = (ESP);
  /* 11d13602 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13606 je 0x11d1363a */
  if (C.zf) goto L_11d1363a;
  /* 11d13608 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1360c je 0x11d1363a */
  if (C.zf) goto L_11d1363a;
  /* 11d1360e cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13612 jne 0x11d13627 */
  if (!C.zf) goto L_11d13627;
  /* 11d13614 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d13617 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1361a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1361d call 0x11d13470 */
  push32(0x11d13622u); f_11d13470();
  /* 11d13622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13625 pop ebp */
  EBP = (pop32());
  /* 11d13626 ret  */
  ESPCHK(0x11d135ffu, _esp0);
  ESP += 4; return;
L_11d13627:;
  /* 11d13627 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1362a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1362d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d13630 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d13633 call 0x11d1356c */
  push32(0x11d13638u); f_11d1356c();
  /* 11d13638 jmp 0x11d1364b */
  goto L_11d1364b;
L_11d1363a:;
  /* 11d1363a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1363d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d13640 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d13643 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d13646 call 0x11d1334d */
  push32(0x11d1364bu); f_11d1334d();
L_11d1364b:;
  /* 11d1364b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1364e pop ebp */
  EBP = (pop32());
  /* 11d1364f ret  */
  ESPCHK(0x11d135ffu, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x11d13650 (37 bytes, 18 insns) */
void f_11d13650(void) {
  FTRACE(0x11d13650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13650 push edi */
  push32((uint32_t)(EDI));
  /* 11d13651 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d13655 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d13657 je 0x11d13673 */
  if (C.zf) goto L_11d13673;
  /* 11d13659 push esi */
  push32((uint32_t)(ESI));
  /* 11d1365a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1365e push esi */
  push32((uint32_t)(ESI));
  /* 11d1365f call 0x11d155e0 */
  push32(0x11d13664u); f_11d155e0();
  /* 11d13664 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d13665 push eax */
  push32((uint32_t)(EAX));
  /* 11d13666 push esi */
  push32((uint32_t)(ESI));
  /* 11d13667 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13669 push esi */
  push32((uint32_t)(ESI));
  /* 11d1366a call 0x11d152a0 */
  push32(0x11d1366fu); f_11d152a0();
  /* 11d1366f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13672 pop esi */
  ESI = (pop32());
L_11d13673:;
  /* 11d13673 pop edi */
  EDI = (pop32());
  /* 11d13674 ret  */
  ESPCHK(0x11d13650u, _esp0);
  ESP += 4; return;
}

/* FUN_10003675 @ 0x11d13675 (45 bytes, 12 insns) */
void f_11d13675(void) {
  FTRACE(0x11d13675u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13675 mov eax, dword ptr [0x11d1e414] */
  EAX = (r32((uint32_t)(0x11d1e414)));
  /* 11d1367a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1367c je 0x11d13680 */
  if (C.zf) goto L_11d13680;
  /* 11d1367e call eax */
  call_ind((uint32_t)(EAX), 0x11d13680u);
L_11d13680:;
  /* 11d13680 push 0x11d1e060 */
  push32((uint32_t)(0x11d1e060u));
  /* 11d13685 push 0x11d1e04c */
  push32((uint32_t)(0x11d1e04cu));
  /* 11d1368a call 0x11d13779 */
  push32(0x11d1368fu); f_11d13779();
  /* 11d1368f push 0x11d1e048 */
  push32((uint32_t)(0x11d1e048u));
  /* 11d13694 push 0x11d1e000 */
  push32((uint32_t)(0x11d1e000u));
  /* 11d13699 call 0x11d13779 */
  push32(0x11d1369eu); f_11d13779();
  /* 11d1369e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d136a1 ret  */
  ESPCHK(0x11d13675u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11d136a2 (17 bytes, 6 insns) */
void f_11d136a2(void) {
  FTRACE(0x11d136a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d136a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d136a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d136a6 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d136aa call 0x11d136c2 */
  push32(0x11d136afu); f_11d136c2();
  /* 11d136af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d136b2 ret  */
  ESPCHK(0x11d136a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b3 @ 0x11d136b3 (15 bytes, 6 insns) */
void f_11d136b3(void) {
  FTRACE(0x11d136b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d136b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d136b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d136b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d136b9 call 0x11d136c2 */
  push32(0x11d136beu); f_11d136c2();
  /* 11d136be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d136c1 ret  */
  ESPCHK(0x11d136b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100036c2 @ 0x11d136c2 (163 bytes, 53 insns) */
void f_11d136c2(void) {
  FTRACE(0x11d136c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d136c2 push edi */
  push32((uint32_t)(EDI));
  /* 11d136c3 call 0x11d13767 */
  push32(0x11d136c8u); f_11d13767();
  /* 11d136c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d136ca pop edi */
  EDI = (pop32());
  /* 11d136cb cmp dword ptr [0x11d37250], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d37250))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d136d1 jne 0x11d136e4 */
  if (!C.zf) goto L_11d136e4;
  /* 11d136d3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d136d7 call dword ptr [0x11d1c0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0d0))), 0x11d136ddu);
  /* 11d136dd push eax */
  push32((uint32_t)(EAX));
  /* 11d136de call dword ptr [0x11d1c0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0cc))), 0x11d136e4u);
L_11d136e4:;
  /* 11d136e4 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d136e9 push ebx */
  push32((uint32_t)(EBX));
  /* 11d136ea mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d136ee mov dword ptr [0x11d3724c], edi */
  w32((uint32_t)(0x11d3724c), (EDI));
  /* 11d136f4 mov byte ptr [0x11d37248], bl */
  w8((uint32_t)(0x11d37248), (BL));
  /* 11d136fa jne 0x11d13738 */
  if (!C.zf) goto L_11d13738;
  /* 11d136fc mov eax, dword ptr [0x11d38950] */
  EAX = (r32((uint32_t)(0x11d38950)));
  /* 11d13701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13703 je 0x11d13727 */
  if (C.zf) goto L_11d13727;
  /* 11d13705 mov ecx, dword ptr [0x11d3894c] */
  ECX = (r32((uint32_t)(0x11d3894c)));
  /* 11d1370b push esi */
  push32((uint32_t)(ESI));
  /* 11d1370c lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11d1370f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13711 jb 0x11d13726 */
  if (C.cf) goto L_11d13726;
L_11d13713:;
  /* 11d13713 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d13715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13717 je 0x11d1371b */
  if (C.zf) goto L_11d1371b;
  /* 11d13719 call eax */
  call_ind((uint32_t)(EAX), 0x11d1371bu);
L_11d1371b:;
  /* 11d1371b sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1371e cmp esi, dword ptr [0x11d38950] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38950))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13724 jae 0x11d13713 */
  if (!C.cf) goto L_11d13713;
L_11d13726:;
  /* 11d13726 pop esi */
  ESI = (pop32());
L_11d13727:;
  /* 11d13727 push 0x11d1e06c */
  push32((uint32_t)(0x11d1e06cu));
  /* 11d1372c push 0x11d1e064 */
  push32((uint32_t)(0x11d1e064u));
  /* 11d13731 call 0x11d13779 */
  push32(0x11d13736u); f_11d13779();
  /* 11d13736 pop ecx */
  ECX = (pop32());
  /* 11d13737 pop ecx */
  ECX = (pop32());
L_11d13738:;
  /* 11d13738 push 0x11d1e078 */
  push32((uint32_t)(0x11d1e078u));
  /* 11d1373d push 0x11d1e070 */
  push32((uint32_t)(0x11d1e070u));
  /* 11d13742 call 0x11d13779 */
  push32(0x11d13747u); f_11d13779();
  /* 11d13747 pop ecx */
  ECX = (pop32());
  /* 11d13748 pop ecx */
  ECX = (pop32());
  /* 11d13749 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d1374b pop ebx */
  EBX = (pop32());
  /* 11d1374c je 0x11d13755 */
  if (C.zf) goto L_11d13755;
  /* 11d1374e call 0x11d13770 */
  push32(0x11d13753u); f_11d13770();
  /* 11d13753 pop edi */
  EDI = (pop32());
  /* 11d13754 ret  */
  ESPCHK(0x11d136c2u, _esp0);
  ESP += 4; return;
L_11d13755:;
  /* 11d13755 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d13759 mov dword ptr [0x11d37250], edi */
  w32((uint32_t)(0x11d37250), (EDI));
  /* 11d1375f call dword ptr [0x11d1c0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0c8))), 0x11d13765u);
  /* 11d13765 pop edi */
  EDI = (pop32());
  /* 11d13766 ret  */
  ESPCHK(0x11d136c2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003767 @ 0x11d13767 (9 bytes, 4 insns) */
void f_11d13767(void) {
  FTRACE(0x11d13767u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13767 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d13769 call 0x11d156f9 */
  push32(0x11d1376eu); f_11d156f9();
  /* 11d1376e pop ecx */
  ECX = (pop32());
  /* 11d1376f ret  */
  ESPCHK(0x11d13767u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x11d13770 (9 bytes, 4 insns) */
void f_11d13770(void) {
  FTRACE(0x11d13770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13770 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11d13772 call 0x11d1575a */
  push32(0x11d13777u); f_11d1575a();
  /* 11d13777 pop ecx */
  ECX = (pop32());
  /* 11d13778 ret  */
  ESPCHK(0x11d13770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003779 @ 0x11d13779 (26 bytes, 12 insns) */
void f_11d13779(void) {
  FTRACE(0x11d13779u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13779 push esi */
  push32((uint32_t)(ESI));
  /* 11d1377a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11d1377e:;
  /* 11d1377e cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13782 jae 0x11d13791 */
  if (!C.cf) goto L_11d13791;
  /* 11d13784 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d13786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13788 je 0x11d1378c */
  if (C.zf) goto L_11d1378c;
  /* 11d1378a call eax */
  call_ind((uint32_t)(EAX), 0x11d1378cu);
L_11d1378c:;
  /* 11d1378c add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1378f jmp 0x11d1377e */
  goto L_11d1377e;
L_11d13791:;
  /* 11d13791 pop esi */
  ESI = (pop32());
  /* 11d13792 ret  */
  ESPCHK(0x11d13779u, _esp0);
  ESP += 4; return;
}

/* FUN_10003793 @ 0x11d13793 (781 bytes, 277 insns) */
void f_11d13793(void) {
  FTRACE(0x11d13793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13793 push ebp */
  push32((uint32_t)(EBP));
  /* 11d13794 mov ebp, esp */
  EBP = (ESP);
  /* 11d13796 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d13798 push 0x11d1c220 */
  push32((uint32_t)(0x11d1c220u));
  /* 11d1379d push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d137a2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d137a8 push eax */
  push32((uint32_t)(EAX));
  /* 11d137a9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d137b0 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d137b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11d137b4 push esi */
  push32((uint32_t)(ESI));
  /* 11d137b5 push edi */
  push32((uint32_t)(EDI));
  /* 11d137b6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d137b9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d137bb cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d137bd jne 0x11d137cd */
  if (!C.zf) goto L_11d137cd;
  /* 11d137bf push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d137c2 call 0x11d13bb0 */
  push32(0x11d137c7u); f_11d13bb0();
  /* 11d137c7 pop ecx */
  ECX = (pop32());
  /* 11d137c8 jmp 0x11d13ab3 */
  jmp_ind(0x11d13ab3u); return;
L_11d137cd:;
  /* 11d137cd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d137d0 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d137d2 jne 0x11d137e0 */
  if (!C.zf) goto L_11d137e0;
  /* 11d137d4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d137d5 call 0x11d16cd5 */
  push32(0x11d137dau); f_11d16cd5();
  /* 11d137da pop ecx */
  ECX = (pop32());
  /* 11d137db jmp 0x11d13ab1 */
  jmp_ind(0x11d13ab1u); return;
L_11d137e0:;
  /* 11d137e0 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d137e5 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d137e8 jne 0x11d13927 */
  if (!C.zf) goto L_11d13927;
L_11d137ee:;
  /* 11d137ee mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11d137f1 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d137f4 ja 0x11d138eb */
  if ((!C.cf&&!C.zf)) goto L_11d138eb;
  /* 11d137fa push 9 */
  push32((uint32_t)(0x9u));
  /* 11d137fc call 0x11d156f9 */
  push32(0x11d13801u); f_11d156f9();
  /* 11d13801 pop ecx */
  ECX = (pop32());
  /* 11d13802 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11d13805 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13806 call 0x11d157b7 */
  push32(0x11d1380bu); f_11d157b7();
  /* 11d1380b pop ecx */
  ECX = (pop32());
  /* 11d1380c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d1380f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13811 je 0x11d138bb */
  if (C.zf) goto L_11d138bb;
  /* 11d13817 cmp esi, dword ptr [0x11d3881c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d3881c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1381d ja 0x11d1386b */
  if ((!C.cf&&!C.zf)) goto L_11d1386b;
  /* 11d1381f push esi */
  push32((uint32_t)(ESI));
  /* 11d13820 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13821 push eax */
  push32((uint32_t)(EAX));
  /* 11d13822 call 0x11d15fc0 */
  push32(0x11d13827u); f_11d15fc0();
  /* 11d13827 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1382a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1382c je 0x11d13833 */
  if (C.zf) goto L_11d13833;
  /* 11d1382e mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11d13831 jmp 0x11d1386b */
  goto L_11d1386b;
L_11d13833:;
  /* 11d13833 push esi */
  push32((uint32_t)(ESI));
  /* 11d13834 call 0x11d15b0b */
  push32(0x11d13839u); f_11d15b0b();
  /* 11d13839 pop ecx */
  ECX = (pop32());
  /* 11d1383a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d1383d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1383f je 0x11d1386b */
  if (C.zf) goto L_11d1386b;
  /* 11d13841 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11d13844 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d13845 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d13848 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1384a jb 0x11d1384e */
  if (C.cf) goto L_11d1384e;
  /* 11d1384c mov eax, esi */
  EAX = (ESI);
L_11d1384e:;
  /* 11d1384e push eax */
  push32((uint32_t)(EAX));
  /* 11d1384f push ebx */
  push32((uint32_t)(EBX));
  /* 11d13850 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d13853 call 0x11d169a0 */
  push32(0x11d13858u); f_11d169a0();
  /* 11d13858 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13859 call 0x11d157b7 */
  push32(0x11d1385eu); f_11d157b7();
  /* 11d1385e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d13861 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13862 push eax */
  push32((uint32_t)(EAX));
  /* 11d13863 call 0x11d157e2 */
  push32(0x11d13868u); f_11d157e2();
  /* 11d13868 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1386b:;
  /* 11d1386b cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1386e jne 0x11d138bb */
  if (!C.zf) goto L_11d138bb;
  /* 11d13870 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13872 jne 0x11d1387a */
  if (!C.zf) goto L_11d1387a;
  /* 11d13874 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13876 pop esi */
  ESI = (pop32());
  /* 11d13877 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11d1387a:;
  /* 11d1387a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1387d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d13880 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11d13883 push esi */
  push32((uint32_t)(ESI));
  /* 11d13884 push edi */
  push32((uint32_t)(EDI));
  /* 11d13885 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d1388b call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d13891u);
  /* 11d13891 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d13894 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13896 je 0x11d138bb */
  if (C.zf) goto L_11d138bb;
  /* 11d13898 mov eax, dword ptr [ebx - 4] */
  EAX = (r32((uint32_t)(EBX + -0x4)));
  /* 11d1389b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d1389c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d1389f cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d138a1 jb 0x11d138a5 */
  if (C.cf) goto L_11d138a5;
  /* 11d138a3 mov eax, esi */
  EAX = (ESI);
L_11d138a5:;
  /* 11d138a5 push eax */
  push32((uint32_t)(EAX));
  /* 11d138a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d138a7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d138aa call 0x11d169a0 */
  push32(0x11d138afu); f_11d169a0();
  /* 11d138af push ebx */
  push32((uint32_t)(EBX));
  /* 11d138b0 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 11d138b3 call 0x11d157e2 */
  push32(0x11d138b8u); f_11d157e2();
  /* 11d138b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d138bb:;
  /* 11d138bb or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d138bf call 0x11d1391e */
  push32(0x11d138c4u); f_11d1391e();
  /* 11d138c4 cmp dword ptr [ebp - 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d138c7 jne 0x11d138eb */
  if (!C.zf) goto L_11d138eb;
  /* 11d138c9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d138cb jne 0x11d138d0 */
  if (!C.zf) goto L_11d138d0;
  /* 11d138cd push 1 */
  push32((uint32_t)(0x1u));
  /* 11d138cf pop esi */
  ESI = (pop32());
L_11d138d0:;
  /* 11d138d0 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d138d3 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d138d6 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11d138d9 push esi */
  push32((uint32_t)(ESI));
  /* 11d138da push ebx */
  push32((uint32_t)(EBX));
  /* 11d138db push edi */
  push32((uint32_t)(EDI));
  /* 11d138dc push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d138e2 call dword ptr [0x11d1c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c000))), 0x11d138e8u);
  /* 11d138e8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d138eb:;
  /* 11d138eb mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d138ee cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d138f0 jne 0x11d13ab3 */
  if (!C.zf) { jmp_ind(0x11d13ab3u); return; }
  /* 11d138f6 cmp dword ptr [0x11d373c8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d373c8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d138fc je 0x11d13ab3 */
  if (C.zf) { jmp_ind(0x11d13ab3u); return; }
  /* 11d13902 push esi */
  push32((uint32_t)(ESI));
  /* 11d13903 call 0x11d16983 */
  push32(0x11d13908u); f_11d16983();
  /* 11d13908 pop ecx */
  ECX = (pop32());
  /* 11d13909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1390b jne 0x11d137ee */
  if (!C.zf) goto L_11d137ee;
  /* 11d13911 jmp 0x11d13ab1 */
  jmp_ind(0x11d13ab1u); return;
  /* 11d13916 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13919 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1391c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d1391e push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13920 call 0x11d1575a */
  push32(0x11d13925u); f_11d1575a();
  /* 11d13925 pop ecx */
  ECX = (pop32());
  /* 11d13926 ret  */
  ESPCHK(0x11d13793u, _esp0);
  ESP += 4; return;
L_11d13927:;
  /* 11d13927 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1392a jne 0x11d13a77 */
  if (!C.zf) goto L_11d13a77;
  /* 11d13930 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13933 ja 0x11d13947 */
  if ((!C.cf&&!C.zf)) goto L_11d13947;
  /* 11d13935 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13937 jbe 0x11d13941 */
  if ((C.cf||C.zf)) goto L_11d13941;
  /* 11d13939 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1393c and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d1393f jmp 0x11d13944 */
  goto L_11d13944;
L_11d13941:;
  /* 11d13941 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d13943 pop esi */
  ESI = (pop32());
L_11d13944:;
  /* 11d13944 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
L_11d13947:;
  /* 11d13947 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11d1394a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1394d ja 0x11d13a46 */
  if ((!C.cf&&!C.zf)) goto L_11d13a46;
  /* 11d13953 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13955 call 0x11d156f9 */
  push32(0x11d1395au); f_11d156f9();
  /* 11d1395a pop ecx */
  ECX = (pop32());
  /* 11d1395b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d13962 lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11d13965 push eax */
  push32((uint32_t)(EAX));
  /* 11d13966 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11d13969 push eax */
  push32((uint32_t)(EAX));
  /* 11d1396a push ebx */
  push32((uint32_t)(EBX));
  /* 11d1396b call 0x11d16512 */
  push32(0x11d13970u); f_11d16512();
  /* 11d13970 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13973 mov edi, eax */
  EDI = (EAX);
  /* 11d13975 mov dword ptr [ebp - 0x30], edi */
  w32((uint32_t)(EBP + -0x30), (EDI));
  /* 11d13978 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d1397a je 0x11d13a2a */
  if (C.zf) goto L_11d13a2a;
  /* 11d13980 cmp esi, dword ptr [0x11d20834] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d20834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13986 jae 0x11d139e4 */
  if (!C.cf) goto L_11d139e4;
  /* 11d13988 mov ebx, esi */
  EBX = (ESI);
  /* 11d1398a shr ebx, 4 */
  EBX = (sh_shr((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 11d1398d push ebx */
  push32((uint32_t)(EBX));
  /* 11d1398e push edi */
  push32((uint32_t)(EDI));
  /* 11d1398f push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11d13992 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11d13995 call 0x11d168da */
  push32(0x11d1399au); f_11d168da();
  /* 11d1399a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1399d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1399f je 0x11d139a9 */
  if (C.zf) goto L_11d139a9;
  /* 11d139a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d139a4 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d139a7 jmp 0x11d139e1 */
  goto L_11d139e1;
L_11d139a9:;
  /* 11d139a9 push ebx */
  push32((uint32_t)(EBX));
  /* 11d139aa call 0x11d165ae */
  push32(0x11d139afu); f_11d165ae();
  /* 11d139af pop ecx */
  ECX = (pop32());
  /* 11d139b0 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d139b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d139b5 je 0x11d139e1 */
  if (C.zf) goto L_11d139e1;
  /* 11d139b7 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11d139ba shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d139bd mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11d139c0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d139c2 jb 0x11d139c6 */
  if (C.cf) goto L_11d139c6;
  /* 11d139c4 mov eax, esi */
  EAX = (ESI);
L_11d139c6:;
  /* 11d139c6 push eax */
  push32((uint32_t)(EAX));
  /* 11d139c7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d139ca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d139cd call 0x11d169a0 */
  push32(0x11d139d2u); f_11d169a0();
  /* 11d139d2 push edi */
  push32((uint32_t)(EDI));
  /* 11d139d3 push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11d139d6 push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11d139d9 call 0x11d16569 */
  push32(0x11d139deu); f_11d16569();
  /* 11d139de add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d139e1:;
  /* 11d139e1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11d139e4:;
  /* 11d139e4 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d139e8 jne 0x11d13a3d */
  if (!C.zf) goto L_11d13a3d;
  /* 11d139ea push esi */
  push32((uint32_t)(ESI));
  /* 11d139eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11d139ed push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d139f3 call dword ptr [0x11d1c004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c004))), 0x11d139f9u);
  /* 11d139f9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11d139fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d139fe je 0x11d13a3d */
  if (C.zf) goto L_11d13a3d;
  /* 11d13a00 movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11d13a03 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d13a06 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11d13a09 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a0b jb 0x11d13a0f */
  if (C.cf) goto L_11d13a0f;
  /* 11d13a0d mov eax, esi */
  EAX = (ESI);
L_11d13a0f:;
  /* 11d13a0f push eax */
  push32((uint32_t)(EAX));
  /* 11d13a10 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13a11 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11d13a14 call 0x11d169a0 */
  push32(0x11d13a19u); f_11d169a0();
  /* 11d13a19 push edi */
  push32((uint32_t)(EDI));
  /* 11d13a1a push dword ptr [ebp - 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x2c))));
  /* 11d13a1d push dword ptr [ebp - 0x38] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x38))));
  /* 11d13a20 call 0x11d16569 */
  push32(0x11d13a25u); f_11d16569();
  /* 11d13a25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13a28 jmp 0x11d13a3d */
  goto L_11d13a3d;
L_11d13a2a:;
  /* 11d13a2a push esi */
  push32((uint32_t)(ESI));
  /* 11d13a2b push ebx */
  push32((uint32_t)(EBX));
  /* 11d13a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13a2e push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d13a34 call dword ptr [0x11d1c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c000))), 0x11d13a3au);
  /* 11d13a3a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11d13a3d:;
  /* 11d13a3d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13a41 call 0x11d13a6c */
  push32(0x11d13a46u); f_11d13a6c();
L_11d13a46:;
  /* 11d13a46 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11d13a49 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a4b jne 0x11d13ab3 */
  if (!C.zf) { jmp_ind(0x11d13ab3u); return; }
  /* 11d13a4d cmp dword ptr [0x11d373c8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d373c8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a53 je 0x11d13ab3 */
  if (C.zf) { jmp_ind(0x11d13ab3u); return; }
  /* 11d13a55 push esi */
  push32((uint32_t)(ESI));
  /* 11d13a56 call 0x11d16983 */
  push32(0x11d13a5bu); f_11d16983();
  /* 11d13a5b pop ecx */
  ECX = (pop32());
  /* 11d13a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13a5e jne 0x11d13947 */
  if (!C.zf) goto L_11d13947;
  /* 11d13a64 jmp 0x11d13ab1 */
  jmp_ind(0x11d13ab1u); return;
  /* 11d13a66 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d13a69 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13a6c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13a6e call 0x11d1575a */
  push32(0x11d13a73u); f_11d1575a();
  /* 11d13a73 pop ecx */
  ECX = (pop32());
  /* 11d13a74 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d13a76 ret  */
  ESPCHK(0x11d13793u, _esp0);
  ESP += 4; return;
L_11d13a77:;
  /* 11d13a77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d13a79 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a7c ja 0x11d13a9a */
  if ((!C.cf&&!C.zf)) goto L_11d13a9a;
  /* 11d13a7e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a80 jne 0x11d13a85 */
  if (!C.zf) goto L_11d13a85;
  /* 11d13a82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13a84 pop esi */
  ESI = (pop32());
L_11d13a85:;
  /* 11d13a85 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13a88 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d13a8b push esi */
  push32((uint32_t)(ESI));
  /* 11d13a8c push ebx */
  push32((uint32_t)(EBX));
  /* 11d13a8d push edi */
  push32((uint32_t)(EDI));
  /* 11d13a8e push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d13a94 call dword ptr [0x11d1c000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c000))), 0x11d13a9au);
L_11d13a9a:;
  /* 11d13a9a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13a9c jne 0x11d13ab3 */
  if (!C.zf) { jmp_ind(0x11d13ab3u); return; }
}

/* FUN_1000391e @ 0x11d1391e (9 bytes, 4 insns) */
void f_11d1391e(void) {
  FTRACE(0x11d1391eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1391e push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13920 call 0x11d1575a */
  push32(0x11d13925u); f_11d1575a();
  /* 11d13925 pop ecx */
  ECX = (pop32());
  /* 11d13926 ret  */
  ESPCHK(0x11d1391eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003a6c @ 0x11d13a6c (11 bytes, 5 insns) */
void f_11d13a6c(void) {
  FTRACE(0x11d13a6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13a6c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13a6e call 0x11d1575a */
  push32(0x11d13a73u); f_11d1575a();
  /* 11d13a73 pop ecx */
  ECX = (pop32());
  /* 11d13a74 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d13a76 ret  */
  ESPCHK(0x11d13a6cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac2 @ 0x11d13ac2 (214 bytes, 72 insns) */
void f_11d13ac2(void) {
  FTRACE(0x11d13ac2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13ac2 push ebp */
  push32((uint32_t)(EBP));
  /* 11d13ac3 mov ebp, esp */
  EBP = (ESP);
  /* 11d13ac5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d13ac7 push 0x11d1c238 */
  push32((uint32_t)(0x11d1c238u));
  /* 11d13acc push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d13ad1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d13ad7 push eax */
  push32((uint32_t)(EAX));
  /* 11d13ad8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d13adf sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d13ae3 push esi */
  push32((uint32_t)(ESI));
  /* 11d13ae4 push edi */
  push32((uint32_t)(EDI));
  /* 11d13ae5 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d13aea cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13aed jne 0x11d13b35 */
  if (!C.zf) goto L_11d13b35;
  /* 11d13aef push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13af1 call 0x11d156f9 */
  push32(0x11d13af6u); f_11d156f9();
  /* 11d13af6 pop ecx */
  ECX = (pop32());
  /* 11d13af7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13afb mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13afe push esi */
  push32((uint32_t)(ESI));
  /* 11d13aff call 0x11d157b7 */
  push32(0x11d13b04u); f_11d157b7();
  /* 11d13b04 pop ecx */
  ECX = (pop32());
  /* 11d13b05 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d13b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13b0a je 0x11d13b17 */
  if (C.zf) goto L_11d13b17;
  /* 11d13b0c mov esi, dword ptr [esi - 4] */
  ESI = (r32((uint32_t)(ESI + -0x4)));
  /* 11d13b0f sub esi, 9 */
  { uint32_t _a=(ESI),_b=(0x9u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13b12 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11d13b15 jmp 0x11d13b1a */
  goto L_11d13b1a;
L_11d13b17:;
  /* 11d13b17 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11d13b1a:;
  /* 11d13b1a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13b1e call 0x11d13b2c */
  push32(0x11d13b23u); f_11d13b2c();
  /* 11d13b23 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13b27 jmp 0x11d13b7e */
  goto L_11d13b7e;
  /* 11d13b29 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
  /* 11d13b2c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13b2e call 0x11d1575a */
  push32(0x11d13b33u); f_11d1575a();
  /* 11d13b33 pop ecx */
  ECX = (pop32());
  /* 11d13b34 ret  */
  ESPCHK(0x11d13ac2u, _esp0);
  ESP += 4; return;
L_11d13b35:;
  /* 11d13b35 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13b38 jne 0x11d13b80 */
  if (!C.zf) goto L_11d13b80;
  /* 11d13b3a push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13b3c call 0x11d156f9 */
  push32(0x11d13b41u); f_11d156f9();
  /* 11d13b41 pop ecx */
  ECX = (pop32());
  /* 11d13b42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d13b49 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11d13b4c push eax */
  push32((uint32_t)(EAX));
  /* 11d13b4d lea eax, [ebp - 0x2c] */
  EAX = ((uint32_t)(EBP + -0x2c));
  /* 11d13b50 push eax */
  push32((uint32_t)(EAX));
  /* 11d13b51 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d13b54 call 0x11d16512 */
  push32(0x11d13b59u); f_11d16512();
  /* 11d13b59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13b5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d13b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13b61 je 0x11d13b6e */
  if (C.zf) goto L_11d13b6e;
  /* 11d13b63 movzx esi, byte ptr [eax] */
  ESI = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11d13b66 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11d13b69 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11d13b6c jmp 0x11d13b71 */
  goto L_11d13b71;
L_11d13b6e:;
  /* 11d13b6e mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11d13b71:;
  /* 11d13b71 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13b75 call 0x11d13ba7 */
  push32(0x11d13b7au); f_11d13ba7();
  /* 11d13b7a cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11d13b7e:;
  /* 11d13b7e jne 0x11d13b93 */
  if (!C.zf) goto L_11d13b93;
L_11d13b80:;
  /* 11d13b80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d13b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13b85 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d13b8b call dword ptr [0x11d1c0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0d8))), 0x11d13b91u);
  /* 11d13b91 mov esi, eax */
  ESI = (EAX);
L_11d13b93:;
  /* 11d13b93 mov eax, esi */
  EAX = (ESI);
  /* 11d13b95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
}

/* FUN_10003b2c @ 0x11d13b2c (9 bytes, 4 insns) */
void f_11d13b2c(void) {
  FTRACE(0x11d13b2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13b2c push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13b2e call 0x11d1575a */
  push32(0x11d13b33u); f_11d1575a();
  /* 11d13b33 pop ecx */
  ECX = (pop32());
  /* 11d13b34 ret  */
  ESPCHK(0x11d13b2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba7 @ 0x11d13ba7 (9 bytes, 4 insns) */
void f_11d13ba7(void) {
  FTRACE(0x11d13ba7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13ba9 call 0x11d1575a */
  push32(0x11d13baeu); f_11d1575a();
  /* 11d13bae pop ecx */
  ECX = (pop32());
  /* 11d13baf ret  */
  ESPCHK(0x11d13ba7u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11d13bb0 (18 bytes, 6 insns) */
void f_11d13bb0(void) {
  FTRACE(0x11d13bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13bb0 push dword ptr [0x11d373c8] */
  push32((uint32_t)(r32((uint32_t)(0x11d373c8))));
  /* 11d13bb6 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d13bba call 0x11d13bc2 */
  push32(0x11d13bbfu); f_11d13bc2();
  /* 11d13bbf pop ecx */
  ECX = (pop32());
  /* 11d13bc0 pop ecx */
  ECX = (pop32());
  /* 11d13bc1 ret  */
  ESPCHK(0x11d13bb0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11d13bc2 (44 bytes, 16 insns) */
void f_11d13bc2(void) {
  FTRACE(0x11d13bc2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13bc2 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13bc7 ja 0x11d13beb */
  if ((!C.cf&&!C.zf)) goto L_11d13beb;
L_11d13bc9:;
  /* 11d13bc9 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d13bcd call 0x11d13bee */
  push32(0x11d13bd2u); f_11d13bee();
  /* 11d13bd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13bd4 pop ecx */
  ECX = (pop32());
  /* 11d13bd5 jne 0x11d13bed */
  if (!C.zf) goto L_11d13bed;
  /* 11d13bd7 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13bdb je 0x11d13bed */
  if (C.zf) goto L_11d13bed;
  /* 11d13bdd push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d13be1 call 0x11d16983 */
  push32(0x11d13be6u); f_11d16983();
  /* 11d13be6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13be8 pop ecx */
  ECX = (pop32());
  /* 11d13be9 jne 0x11d13bc9 */
  if (!C.zf) goto L_11d13bc9;
L_11d13beb:;
  /* 11d13beb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d13bed:;
  /* 11d13bed ret  */
  ESPCHK(0x11d13bc2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bee @ 0x11d13bee (231 bytes, 81 insns) */
void f_11d13bee(void) {
  FTRACE(0x11d13beeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13bee push ebp */
  push32((uint32_t)(EBP));
  /* 11d13bef mov ebp, esp */
  EBP = (ESP);
  /* 11d13bf1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d13bf3 push 0x11d1c250 */
  push32((uint32_t)(0x11d1c250u));
  /* 11d13bf8 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d13bfd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d13c03 push eax */
  push32((uint32_t)(EAX));
  /* 11d13c04 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d13c0b sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13c0e push ebx */
  push32((uint32_t)(EBX));
  /* 11d13c0f push esi */
  push32((uint32_t)(ESI));
  /* 11d13c10 push edi */
  push32((uint32_t)(EDI));
  /* 11d13c11 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d13c16 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13c19 jne 0x11d13c5e */
  if (!C.zf) goto L_11d13c5e;
  /* 11d13c1b mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13c1e cmp esi, dword ptr [0x11d3881c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d3881c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13c24 ja 0x11d13cbd */
  if ((!C.cf&&!C.zf)) goto L_11d13cbd;
  /* 11d13c2a push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13c2c call 0x11d156f9 */
  push32(0x11d13c31u); f_11d156f9();
  /* 11d13c31 pop ecx */
  ECX = (pop32());
  /* 11d13c32 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13c36 push esi */
  push32((uint32_t)(ESI));
  /* 11d13c37 call 0x11d15b0b */
  push32(0x11d13c3cu); f_11d15b0b();
  /* 11d13c3c pop ecx */
  ECX = (pop32());
  /* 11d13c3d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d13c40 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13c44 call 0x11d13c55 */
  push32(0x11d13c49u); f_11d13c55();
  /* 11d13c49 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d13c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13c4e je 0x11d13cbd */
  if (C.zf) goto L_11d13cbd;
  /* 11d13c50 jmp 0x11d13cdb */
  jmp_ind(0x11d13cdbu); return;
  /* 11d13c55 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13c57 call 0x11d1575a */
  push32(0x11d13c5cu); f_11d1575a();
  /* 11d13c5c pop ecx */
  ECX = (pop32());
  /* 11d13c5d ret  */
  ESPCHK(0x11d13beeu, _esp0);
  ESP += 4; return;
L_11d13c5e:;
  /* 11d13c5e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13c61 jne 0x11d13cbd */
  if (!C.zf) goto L_11d13cbd;
  /* 11d13c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13c68 je 0x11d13c72 */
  if (C.zf) goto L_11d13c72;
  /* 11d13c6a lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 11d13c6d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11d13c70 jmp 0x11d13c75 */
  goto L_11d13c75;
L_11d13c72:;
  /* 11d13c72 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d13c74 pop esi */
  ESI = (pop32());
L_11d13c75:;
  /* 11d13c75 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11d13c78 cmp esi, dword ptr [0x11d20834] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d20834))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13c7e ja 0x11d13cae */
  if ((!C.cf&&!C.zf)) goto L_11d13cae;
  /* 11d13c80 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13c82 call 0x11d156f9 */
  push32(0x11d13c87u); f_11d156f9();
  /* 11d13c87 pop ecx */
  ECX = (pop32());
  /* 11d13c88 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d13c8f mov eax, esi */
  EAX = (ESI);
  /* 11d13c91 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d13c94 push eax */
  push32((uint32_t)(EAX));
  /* 11d13c95 call 0x11d165ae */
  push32(0x11d13c9au); f_11d165ae();
  /* 11d13c9a pop ecx */
  ECX = (pop32());
  /* 11d13c9b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d13c9e or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d13ca2 call 0x11d13cb4 */
  push32(0x11d13ca7u); f_11d13cb4();
  /* 11d13ca7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d13caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13cac jne 0x11d13cdb */
  if (!C.zf) { jmp_ind(0x11d13cdbu); return; }
L_11d13cae:;
  /* 11d13cae push esi */
  push32((uint32_t)(ESI));
  /* 11d13caf jmp 0x11d13ccd */
  goto L_11d13ccd;
  /* 11d13cb1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13cb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13cb6 call 0x11d1575a */
  push32(0x11d13cbbu); f_11d1575a();
  /* 11d13cbb pop ecx */
  ECX = (pop32());
  /* 11d13cbc ret  */
  ESPCHK(0x11d13beeu, _esp0);
  ESP += 4; return;
L_11d13cbd:;
  /* 11d13cbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d13cc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13cc2 jne 0x11d13cc7 */
  if (!C.zf) goto L_11d13cc7;
  /* 11d13cc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13cc6 pop eax */
  EAX = (pop32());
L_11d13cc7:;
  /* 11d13cc7 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13cca and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11d13ccc push eax */
  push32((uint32_t)(EAX));
L_11d13ccd:;
  /* 11d13ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13ccf push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
}

/* FUN_10003c55 @ 0x11d13c55 (9 bytes, 4 insns) */
void f_11d13c55(void) {
  FTRACE(0x11d13c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13c55 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13c57 call 0x11d1575a */
  push32(0x11d13c5cu); f_11d1575a();
  /* 11d13c5c pop ecx */
  ECX = (pop32());
  /* 11d13c5d ret  */
  ESPCHK(0x11d13c55u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb4 @ 0x11d13cb4 (9 bytes, 4 insns) */
void f_11d13cb4(void) {
  FTRACE(0x11d13cb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13cb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d13cb6 call 0x11d1575a */
  push32(0x11d13cbbu); f_11d1575a();
  /* 11d13cbb pop ecx */
  ECX = (pop32());
  /* 11d13cbc ret  */
  ESPCHK(0x11d13cb4u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cea @ 0x11d13cea (84 bytes, 32 insns) */
void f_11d13cea(void) {
  FTRACE(0x11d13ceau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13cea push esi */
  push32((uint32_t)(ESI));
  /* 11d13ceb call 0x11d15664 */
  push32(0x11d13cf0u); f_11d15664();
  /* 11d13cf0 call dword ptr [0x11d1c0e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0e4))), 0x11d13cf6u);
  /* 11d13cf6 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13cf9 mov dword ptr [0x11d1e43c], eax */
  w32((uint32_t)(0x11d1e43c), (EAX));
  /* 11d13cfe je 0x11d13d3a */
  if (C.zf) goto L_11d13d3a;
  /* 11d13d00 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d13d02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13d04 call 0x11d16f90 */
  push32(0x11d13d09u); f_11d16f90();
  /* 11d13d09 mov esi, eax */
  ESI = (EAX);
  /* 11d13d0b pop ecx */
  ECX = (pop32());
  /* 11d13d0c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13d0e pop ecx */
  ECX = (pop32());
  /* 11d13d0f je 0x11d13d3a */
  if (C.zf) goto L_11d13d3a;
  /* 11d13d11 push esi */
  push32((uint32_t)(ESI));
  /* 11d13d12 push dword ptr [0x11d1e43c] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e43c))));
  /* 11d13d18 call dword ptr [0x11d1c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0e0))), 0x11d13d1eu);
  /* 11d13d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13d20 je 0x11d13d3a */
  if (C.zf) goto L_11d13d3a;
  /* 11d13d22 push esi */
  push32((uint32_t)(ESI));
  /* 11d13d23 call 0x11d13d5c */
  push32(0x11d13d28u); f_11d13d5c();
  /* 11d13d28 pop ecx */
  ECX = (pop32());
  /* 11d13d29 call dword ptr [0x11d1c0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0dc))), 0x11d13d2fu);
  /* 11d13d2f or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d13d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13d35 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d13d37 pop eax */
  EAX = (pop32());
  /* 11d13d38 pop esi */
  ESI = (pop32());
  /* 11d13d39 ret  */
  ESPCHK(0x11d13ceau, _esp0);
  ESP += 4; return;
L_11d13d3a:;
  /* 11d13d3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d13d3c pop esi */
  ESI = (pop32());
  /* 11d13d3d ret  */
  ESPCHK(0x11d13ceau, _esp0);
  ESP += 4; return;
}

/* FUN_10003d3e @ 0x11d13d3e (30 bytes, 8 insns) */
void f_11d13d3e(void) {
  FTRACE(0x11d13d3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13d3e call 0x11d1568d */
  push32(0x11d13d43u); f_11d1568d();
  /* 11d13d43 mov eax, dword ptr [0x11d1e43c] */
  EAX = (r32((uint32_t)(0x11d1e43c)));
  /* 11d13d48 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13d4b je 0x11d13d5b */
  if (C.zf) goto L_11d13d5b;
  /* 11d13d4d push eax */
  push32((uint32_t)(EAX));
  /* 11d13d4e call dword ptr [0x11d1c0e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0e8))), 0x11d13d54u);
  /* 11d13d54 or dword ptr [0x11d1e43c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11d1e43c)))|(0xffffffffu); w32((uint32_t)(0x11d1e43c), (_r)); fl_logic(_r,32); }
L_11d13d5b:;
  /* 11d13d5b ret  */
  ESPCHK(0x11d13d3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d5c @ 0x11d13d5c (19 bytes, 4 insns) */
void f_11d13d5c(void) {
  FTRACE(0x11d13d5cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13d5c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d13d60 mov dword ptr [eax + 0x50], 0x11d20850 */
  w32((uint32_t)(EAX + 0x50), (0x11d20850u));
  /* 11d13d67 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11d13d6e ret  */
  ESPCHK(0x11d13d5cu, _esp0);
  ESP += 4; return;
}

/* FUN_10003d6f @ 0x11d13d6f (103 bytes, 38 insns) */
void f_11d13d6f(void) {
  FTRACE(0x11d13d6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13d6f push esi */
  push32((uint32_t)(ESI));
  /* 11d13d70 push edi */
  push32((uint32_t)(EDI));
  /* 11d13d71 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d13d77u);
  /* 11d13d77 push dword ptr [0x11d1e43c] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e43c))));
  /* 11d13d7d mov edi, eax */
  EDI = (EAX);
  /* 11d13d7f call dword ptr [0x11d1c0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0d4))), 0x11d13d85u);
  /* 11d13d85 mov esi, eax */
  ESI = (EAX);
  /* 11d13d87 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13d89 jne 0x11d13dca */
  if (!C.zf) goto L_11d13dca;
  /* 11d13d8b push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11d13d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 11d13d8f call 0x11d16f90 */
  push32(0x11d13d94u); f_11d16f90();
  /* 11d13d94 mov esi, eax */
  ESI = (EAX);
  /* 11d13d96 pop ecx */
  ECX = (pop32());
  /* 11d13d97 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13d99 pop ecx */
  ECX = (pop32());
  /* 11d13d9a je 0x11d13dc2 */
  if (C.zf) goto L_11d13dc2;
  /* 11d13d9c push esi */
  push32((uint32_t)(ESI));
  /* 11d13d9d push dword ptr [0x11d1e43c] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e43c))));
  /* 11d13da3 call dword ptr [0x11d1c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0e0))), 0x11d13da9u);
  /* 11d13da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13dab je 0x11d13dc2 */
  if (C.zf) goto L_11d13dc2;
  /* 11d13dad push esi */
  push32((uint32_t)(ESI));
  /* 11d13dae call 0x11d13d5c */
  push32(0x11d13db3u); f_11d13d5c();
  /* 11d13db3 pop ecx */
  ECX = (pop32());
  /* 11d13db4 call dword ptr [0x11d1c0dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0dc))), 0x11d13dbau);
  /* 11d13dba or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d13dbe mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d13dc0 jmp 0x11d13dca */
  goto L_11d13dca;
L_11d13dc2:;
  /* 11d13dc2 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d13dc4 call 0x11d131a3 */
  push32(0x11d13dc9u); f_11d131a3();
  /* 11d13dc9 pop ecx */
  ECX = (pop32());
L_11d13dca:;
  /* 11d13dca push edi */
  push32((uint32_t)(EDI));
  /* 11d13dcb call dword ptr [0x11d1c0ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0ec))), 0x11d13dd1u);
  /* 11d13dd1 mov eax, esi */
  EAX = (ESI);
  /* 11d13dd3 pop edi */
  EDI = (pop32());
  /* 11d13dd4 pop esi */
  ESI = (pop32());
  /* 11d13dd5 ret  */
  ESPCHK(0x11d13d6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003dd6 @ 0x11d13dd6 (160 bytes, 62 insns) */
void f_11d13dd6(void) {
  FTRACE(0x11d13dd6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13dd6 mov eax, dword ptr [0x11d1e43c] */
  EAX = (r32((uint32_t)(0x11d1e43c)));
  /* 11d13ddb cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13dde je 0x11d13e75 */
  if (C.zf) goto L_11d13e75;
  /* 11d13de4 push esi */
  push32((uint32_t)(ESI));
  /* 11d13de5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d13de9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13deb jne 0x11d13dfa */
  if (!C.zf) goto L_11d13dfa;
  /* 11d13ded push eax */
  push32((uint32_t)(EAX));
  /* 11d13dee call dword ptr [0x11d1c0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0d4))), 0x11d13df4u);
  /* 11d13df4 mov esi, eax */
  ESI = (EAX);
  /* 11d13df6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13df8 je 0x11d13e66 */
  if (C.zf) goto L_11d13e66;
L_11d13dfa:;
  /* 11d13dfa mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11d13dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13dff je 0x11d13e08 */
  if (C.zf) goto L_11d13e08;
  /* 11d13e01 push eax */
  push32((uint32_t)(EAX));
  /* 11d13e02 call 0x11d16cd5 */
  push32(0x11d13e07u); f_11d16cd5();
  /* 11d13e07 pop ecx */
  ECX = (pop32());
L_11d13e08:;
  /* 11d13e08 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d13e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13e0d je 0x11d13e16 */
  if (C.zf) goto L_11d13e16;
  /* 11d13e0f push eax */
  push32((uint32_t)(EAX));
  /* 11d13e10 call 0x11d16cd5 */
  push32(0x11d13e15u); f_11d16cd5();
  /* 11d13e15 pop ecx */
  ECX = (pop32());
L_11d13e16:;
  /* 11d13e16 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11d13e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13e1b je 0x11d13e24 */
  if (C.zf) goto L_11d13e24;
  /* 11d13e1d push eax */
  push32((uint32_t)(EAX));
  /* 11d13e1e call 0x11d16cd5 */
  push32(0x11d13e23u); f_11d16cd5();
  /* 11d13e23 pop ecx */
  ECX = (pop32());
L_11d13e24:;
  /* 11d13e24 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11d13e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13e29 je 0x11d13e32 */
  if (C.zf) goto L_11d13e32;
  /* 11d13e2b push eax */
  push32((uint32_t)(EAX));
  /* 11d13e2c call 0x11d16cd5 */
  push32(0x11d13e31u); f_11d16cd5();
  /* 11d13e31 pop ecx */
  ECX = (pop32());
L_11d13e32:;
  /* 11d13e32 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11d13e35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13e37 je 0x11d13e40 */
  if (C.zf) goto L_11d13e40;
  /* 11d13e39 push eax */
  push32((uint32_t)(EAX));
  /* 11d13e3a call 0x11d16cd5 */
  push32(0x11d13e3fu); f_11d16cd5();
  /* 11d13e3f pop ecx */
  ECX = (pop32());
L_11d13e40:;
  /* 11d13e40 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11d13e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13e45 je 0x11d13e4e */
  if (C.zf) goto L_11d13e4e;
  /* 11d13e47 push eax */
  push32((uint32_t)(EAX));
  /* 11d13e48 call 0x11d16cd5 */
  push32(0x11d13e4du); f_11d16cd5();
  /* 11d13e4d pop ecx */
  ECX = (pop32());
L_11d13e4e:;
  /* 11d13e4e mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11d13e51 cmp eax, 0x11d20850 */
  { uint32_t _a=(EAX),_b=(0x11d20850u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13e56 je 0x11d13e5f */
  if (C.zf) goto L_11d13e5f;
  /* 11d13e58 push eax */
  push32((uint32_t)(EAX));
  /* 11d13e59 call 0x11d16cd5 */
  push32(0x11d13e5eu); f_11d16cd5();
  /* 11d13e5e pop ecx */
  ECX = (pop32());
L_11d13e5f:;
  /* 11d13e5f push esi */
  push32((uint32_t)(ESI));
  /* 11d13e60 call 0x11d16cd5 */
  push32(0x11d13e65u); f_11d16cd5();
  /* 11d13e65 pop ecx */
  ECX = (pop32());
L_11d13e66:;
  /* 11d13e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d13e68 push dword ptr [0x11d1e43c] */
  push32((uint32_t)(r32((uint32_t)(0x11d1e43c))));
  /* 11d13e6e call dword ptr [0x11d1c0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0e0))), 0x11d13e74u);
  /* 11d13e74 pop esi */
  ESI = (pop32());
L_11d13e75:;
  /* 11d13e75 ret  */
  ESPCHK(0x11d13dd6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e76 @ 0x11d13e76 (444 bytes, 150 insns) */
void f_11d13e76(void) {
  FTRACE(0x11d13e76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d13e76 push ebp */
  push32((uint32_t)(EBP));
  /* 11d13e77 mov ebp, esp */
  EBP = (ESP);
  /* 11d13e79 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13e7c push ebx */
  push32((uint32_t)(EBX));
  /* 11d13e7d push esi */
  push32((uint32_t)(ESI));
  /* 11d13e7e push edi */
  push32((uint32_t)(EDI));
  /* 11d13e7f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d13e84 call 0x11d13bb0 */
  push32(0x11d13e89u); f_11d13bb0();
  /* 11d13e89 mov esi, eax */
  ESI = (EAX);
  /* 11d13e8b pop ecx */
  ECX = (pop32());
  /* 11d13e8c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d13e8e jne 0x11d13e98 */
  if (!C.zf) goto L_11d13e98;
  /* 11d13e90 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11d13e92 call 0x11d131a3 */
  push32(0x11d13e97u); f_11d131a3();
  /* 11d13e97 pop ecx */
  ECX = (pop32());
L_11d13e98:;
  /* 11d13e98 mov dword ptr [0x11d38840], esi */
  w32((uint32_t)(0x11d38840), (ESI));
  /* 11d13e9e mov dword ptr [0x11d38940], 0x20 */
  w32((uint32_t)(0x11d38940), (0x20u));
  /* 11d13ea8 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11d13eae:;
  /* 11d13eae cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13eb0 jae 0x11d13ed0 */
  if (!C.cf) goto L_11d13ed0;
  /* 11d13eb2 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d13eb6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11d13eb9 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d13ebd mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11d13ec1 mov eax, dword ptr [0x11d38840] */
  EAX = (r32((uint32_t)(0x11d38840)));
  /* 11d13ec6 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13ec9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13ece jmp 0x11d13eae */
  goto L_11d13eae;
L_11d13ed0:;
  /* 11d13ed0 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11d13ed3 push eax */
  push32((uint32_t)(EAX));
  /* 11d13ed4 call dword ptr [0x11d1c0a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a0))), 0x11d13edau);
  /* 11d13eda cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d13edf je 0x11d13fb6 */
  if (C.zf) goto L_11d13fb6;
  /* 11d13ee5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d13ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13eea je 0x11d13fb6 */
  if (C.zf) goto L_11d13fb6;
  /* 11d13ef0 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11d13ef2 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11d13ef5 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11d13ef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d13efb mov eax, 0x800 */
  EAX = (0x800u);
  /* 11d13f00 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13f02 jl 0x11d13f06 */
  if ((C.sf!=C.of)) goto L_11d13f06;
  /* 11d13f04 mov edi, eax */
  EDI = (EAX);
L_11d13f06:;
  /* 11d13f06 cmp dword ptr [0x11d38940], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d38940))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13f0c jge 0x11d13f64 */
  if ((C.sf==C.of)) goto L_11d13f64;
  /* 11d13f0e mov esi, 0x11d38844 */
  ESI = (0x11d38844u);
L_11d13f13:;
  /* 11d13f13 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11d13f18 call 0x11d13bb0 */
  push32(0x11d13f1du); f_11d13bb0();
  /* 11d13f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13f1f pop ecx */
  ECX = (pop32());
  /* 11d13f20 je 0x11d13f5e */
  if (C.zf) goto L_11d13f5e;
  /* 11d13f22 add dword ptr [0x11d38940], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11d38940))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11d38940), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d13f29 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d13f2b lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11d13f31:;
  /* 11d13f31 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13f33 jae 0x11d13f51 */
  if (!C.cf) goto L_11d13f51;
  /* 11d13f35 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d13f39 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d13f3c and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11d13f40 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11d13f44 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11d13f46 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13f49 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13f4f jmp 0x11d13f31 */
  goto L_11d13f31;
L_11d13f51:;
  /* 11d13f51 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d13f54 cmp dword ptr [0x11d38940], edi */
  { uint32_t _a=(r32((uint32_t)(0x11d38940))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13f5a jl 0x11d13f13 */
  if ((C.sf!=C.of)) goto L_11d13f13;
  /* 11d13f5c jmp 0x11d13f64 */
  goto L_11d13f64;
L_11d13f5e:;
  /* 11d13f5e mov edi, dword ptr [0x11d38940] */
  EDI = (r32((uint32_t)(0x11d38940)));
L_11d13f64:;
  /* 11d13f64 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d13f66 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d13f68 jle 0x11d13fb6 */
  if ((C.zf||C.sf!=C.of)) goto L_11d13fb6;
L_11d13f6a:;
  /* 11d13f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d13f6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11d13f6f cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13f72 je 0x11d13fac */
  if (C.zf) goto L_11d13fac;
  /* 11d13f74 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11d13f76 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11d13f78 je 0x11d13fac */
  if (C.zf) goto L_11d13fac;
  /* 11d13f7a test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11d13f7c jne 0x11d13f89 */
  if (!C.zf) goto L_11d13f89;
  /* 11d13f7e push ecx */
  push32((uint32_t)(ECX));
  /* 11d13f7f call dword ptr [0x11d1c0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b0))), 0x11d13f85u);
  /* 11d13f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13f87 je 0x11d13fac */
  if (C.zf) goto L_11d13fac;
L_11d13f89:;
  /* 11d13f89 mov ecx, esi */
  ECX = (ESI);
  /* 11d13f8b mov eax, esi */
  EAX = (ESI);
  /* 11d13f8d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d13f90 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d13f93 mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d13f9a lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d13f9d lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11d13fa0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d13fa3 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11d13fa5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11d13fa7 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11d13fa9 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11d13fac:;
  /* 11d13fac add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d13fb0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d13fb1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d13fb2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13fb4 jl 0x11d13f6a */
  if ((C.sf!=C.of)) goto L_11d13f6a;
L_11d13fb6:;
  /* 11d13fb6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d13fb8:;
  /* 11d13fb8 mov ecx, dword ptr [0x11d38840] */
  ECX = (r32((uint32_t)(0x11d38840)));
  /* 11d13fbe lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11d13fc1 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13fc5 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11d13fc8 jne 0x11d14017 */
  if (!C.zf) goto L_11d14017;
  /* 11d13fca test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d13fcc mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11d13fd0 jne 0x11d13fd7 */
  if (!C.zf) goto L_11d13fd7;
  /* 11d13fd2 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11d13fd4 pop eax */
  EAX = (pop32());
  /* 11d13fd5 jmp 0x11d13fe1 */
  goto L_11d13fe1;
L_11d13fd7:;
  /* 11d13fd7 mov eax, ebx */
  EAX = (EBX);
  /* 11d13fd9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d13fda neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d13fdc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d13fde add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d13fe1:;
  /* 11d13fe1 push eax */
  push32((uint32_t)(EAX));
  /* 11d13fe2 call dword ptr [0x11d1c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a8))), 0x11d13fe8u);
  /* 11d13fe8 mov edi, eax */
  EDI = (EAX);
  /* 11d13fea cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d13fed je 0x11d14006 */
  if (C.zf) goto L_11d14006;
  /* 11d13fef push edi */
  push32((uint32_t)(EDI));
  /* 11d13ff0 call dword ptr [0x11d1c0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b0))), 0x11d13ff6u);
  /* 11d13ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d13ff8 je 0x11d14006 */
  if (C.zf) goto L_11d14006;
  /* 11d13ffa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d13fff mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11d14001 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14004 jne 0x11d1400c */
  if (!C.zf) goto L_11d1400c;
L_11d14006:;
  /* 11d14006 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d1400a jmp 0x11d1401b */
  goto L_11d1401b;
L_11d1400c:;
  /* 11d1400c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1400f jne 0x11d1401b */
  if (!C.zf) goto L_11d1401b;
  /* 11d14011 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11d14015 jmp 0x11d1401b */
  goto L_11d1401b;
L_11d14017:;
  /* 11d14017 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11d1401b:;
  /* 11d1401b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1401c cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1401f jl 0x11d13fb8 */
  if ((C.sf!=C.of)) goto L_11d13fb8;
  /* 11d14021 push dword ptr [0x11d38940] */
  push32((uint32_t)(r32((uint32_t)(0x11d38940))));
  /* 11d14027 call dword ptr [0x11d1c0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0ac))), 0x11d1402du);
  /* 11d1402d pop edi */
  EDI = (pop32());
  /* 11d1402e pop esi */
  ESI = (pop32());
  /* 11d1402f pop ebx */
  EBX = (pop32());
  /* 11d14030 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14031 ret  */
  ESPCHK(0x11d13e76u, _esp0);
  ESP += 4; return;
}

/* FUN_10004032 @ 0x11d14032 (84 bytes, 33 insns) */
void f_11d14032(void) {
  FTRACE(0x11d14032u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14032 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14033 push esi */
  push32((uint32_t)(ESI));
  /* 11d14034 push edi */
  push32((uint32_t)(EDI));
  /* 11d14035 mov esi, 0x11d38840 */
  ESI = (0x11d38840u);
L_11d1403a:;
  /* 11d1403a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1403c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1403e je 0x11d14077 */
  if (C.zf) goto L_11d14077;
  /* 11d14040 mov edi, eax */
  EDI = (EAX);
  /* 11d14042 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14047 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14049 jae 0x11d1406c */
  if (!C.cf) goto L_11d1406c;
  /* 11d1404b lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11d1404e:;
  /* 11d1404e cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14052 je 0x11d1405b */
  if (C.zf) goto L_11d1405b;
  /* 11d14054 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14055 call dword ptr [0x11d1c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c09c))), 0x11d1405bu);
L_11d1405b:;
  /* 11d1405b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1405d add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14060 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14065 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14068 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1406a jb 0x11d1404e */
  if (C.cf) goto L_11d1404e;
L_11d1406c:;
  /* 11d1406c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d1406e call 0x11d16cd5 */
  push32(0x11d14073u); f_11d16cd5();
  /* 11d14073 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11d14076 pop ecx */
  ECX = (pop32());
L_11d14077:;
  /* 11d14077 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1407a cmp esi, 0x11d38940 */
  { uint32_t _a=(ESI),_b=(0x11d38940u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14080 jl 0x11d1403a */
  if ((C.sf!=C.of)) goto L_11d1403a;
  /* 11d14082 pop edi */
  EDI = (pop32());
  /* 11d14083 pop esi */
  ESI = (pop32());
  /* 11d14084 pop ebx */
  EBX = (pop32());
  /* 11d14085 ret  */
  ESPCHK(0x11d14032u, _esp0);
  ESP += 4; return;
}

/* FUN_10004086 @ 0x11d14086 (185 bytes, 71 insns) */
void f_11d14086(void) {
  FTRACE(0x11d14086u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14086 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14087 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d14089 cmp dword ptr [0x11d38948], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d38948))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1408f push esi */
  push32((uint32_t)(ESI));
  /* 11d14090 push edi */
  push32((uint32_t)(EDI));
  /* 11d14091 jne 0x11d14098 */
  if (!C.zf) goto L_11d14098;
  /* 11d14093 call 0x11d179bd */
  push32(0x11d14098u); f_11d179bd();
L_11d14098:;
  /* 11d14098 mov esi, dword ptr [0x11d37200] */
  ESI = (r32((uint32_t)(0x11d37200)));
  /* 11d1409e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11d140a0:;
  /* 11d140a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d140a2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d140a4 je 0x11d140b8 */
  if (C.zf) goto L_11d140b8;
  /* 11d140a6 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d140a8 je 0x11d140ab */
  if (C.zf) goto L_11d140ab;
  /* 11d140aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11d140ab:;
  /* 11d140ab push esi */
  push32((uint32_t)(ESI));
  /* 11d140ac call 0x11d155e0 */
  push32(0x11d140b1u); f_11d155e0();
  /* 11d140b1 pop ecx */
  ECX = (pop32());
  /* 11d140b2 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11d140b6 jmp 0x11d140a0 */
  goto L_11d140a0;
L_11d140b8:;
  /* 11d140b8 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11d140bf push eax */
  push32((uint32_t)(EAX));
  /* 11d140c0 call 0x11d13bb0 */
  push32(0x11d140c5u); f_11d13bb0();
  /* 11d140c5 mov esi, eax */
  ESI = (EAX);
  /* 11d140c7 pop ecx */
  ECX = (pop32());
  /* 11d140c8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d140ca mov dword ptr [0x11d37230], esi */
  w32((uint32_t)(0x11d37230), (ESI));
  /* 11d140d0 jne 0x11d140da */
  if (!C.zf) goto L_11d140da;
  /* 11d140d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d140d4 call 0x11d131a3 */
  push32(0x11d140d9u); f_11d131a3();
  /* 11d140d9 pop ecx */
  ECX = (pop32());
L_11d140da:;
  /* 11d140da mov edi, dword ptr [0x11d37200] */
  EDI = (r32((uint32_t)(0x11d37200)));
  /* 11d140e0 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d140e2 je 0x11d1411d */
  if (C.zf) goto L_11d1411d;
  /* 11d140e4 push ebp */
  push32((uint32_t)(EBP));
L_11d140e5:;
  /* 11d140e5 push edi */
  push32((uint32_t)(EDI));
  /* 11d140e6 call 0x11d155e0 */
  push32(0x11d140ebu); f_11d155e0();
  /* 11d140eb mov ebp, eax */
  EBP = (EAX);
  /* 11d140ed pop ecx */
  ECX = (pop32());
  /* 11d140ee inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11d140ef cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d140f2 je 0x11d14116 */
  if (C.zf) goto L_11d14116;
  /* 11d140f4 push ebp */
  push32((uint32_t)(EBP));
  /* 11d140f5 call 0x11d13bb0 */
  push32(0x11d140fau); f_11d13bb0();
  /* 11d140fa cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d140fc pop ecx */
  ECX = (pop32());
  /* 11d140fd mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11d140ff jne 0x11d14109 */
  if (!C.zf) goto L_11d14109;
  /* 11d14101 push 9 */
  push32((uint32_t)(0x9u));
  /* 11d14103 call 0x11d131a3 */
  push32(0x11d14108u); f_11d131a3();
  /* 11d14108 pop ecx */
  ECX = (pop32());
L_11d14109:;
  /* 11d14109 push edi */
  push32((uint32_t)(EDI));
  /* 11d1410a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d1410c call 0x11d15150 */
  push32(0x11d14111u); f_11d15150();
  /* 11d14111 pop ecx */
  ECX = (pop32());
  /* 11d14112 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14115 pop ecx */
  ECX = (pop32());
L_11d14116:;
  /* 11d14116 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14118 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1411a jne 0x11d140e5 */
  if (!C.zf) goto L_11d140e5;
  /* 11d1411c pop ebp */
  EBP = (pop32());
L_11d1411d:;
  /* 11d1411d push dword ptr [0x11d37200] */
  push32((uint32_t)(r32((uint32_t)(0x11d37200))));
  /* 11d14123 call 0x11d16cd5 */
  push32(0x11d14128u); f_11d16cd5();
  /* 11d14128 pop ecx */
  ECX = (pop32());
  /* 11d14129 mov dword ptr [0x11d37200], ebx */
  w32((uint32_t)(0x11d37200), (EBX));
  /* 11d1412f mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11d14131 pop edi */
  EDI = (pop32());
  /* 11d14132 pop esi */
  ESI = (pop32());
  /* 11d14133 mov dword ptr [0x11d38944], 1 */
  w32((uint32_t)(0x11d38944), (0x1u));
  /* 11d1413d pop ebx */
  EBX = (pop32());
  /* 11d1413e ret  */
  ESPCHK(0x11d14086u, _esp0);
  ESP += 4; return;
}

/* FUN_1000413f @ 0x11d1413f (153 bytes, 62 insns) */
void f_11d1413f(void) {
  FTRACE(0x11d1413fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1413f push ebp */
  push32((uint32_t)(EBP));
  /* 11d14140 mov ebp, esp */
  EBP = (ESP);
  /* 11d14142 push ecx */
  push32((uint32_t)(ECX));
  /* 11d14143 push ecx */
  push32((uint32_t)(ECX));
  /* 11d14144 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14145 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d14147 cmp dword ptr [0x11d38948], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d38948))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1414d push esi */
  push32((uint32_t)(ESI));
  /* 11d1414e push edi */
  push32((uint32_t)(EDI));
  /* 11d1414f jne 0x11d14156 */
  if (!C.zf) goto L_11d14156;
  /* 11d14151 call 0x11d179bd */
  push32(0x11d14156u); f_11d179bd();
L_11d14156:;
  /* 11d14156 mov esi, 0x11d37254 */
  ESI = (0x11d37254u);
  /* 11d1415b push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d14160 push esi */
  push32((uint32_t)(ESI));
  /* 11d14161 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14162 call dword ptr [0x11d1c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a4))), 0x11d14168u);
  /* 11d14168 mov eax, dword ptr [0x11d38954] */
  EAX = (r32((uint32_t)(0x11d38954)));
  /* 11d1416d mov dword ptr [0x11d37240], esi */
  w32((uint32_t)(0x11d37240), (ESI));
  /* 11d14173 mov edi, esi */
  EDI = (ESI);
  /* 11d14175 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14177 je 0x11d1417b */
  if (C.zf) goto L_11d1417b;
  /* 11d14179 mov edi, eax */
  EDI = (EAX);
L_11d1417b:;
  /* 11d1417b lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d1417e push eax */
  push32((uint32_t)(EAX));
  /* 11d1417f lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d14182 push eax */
  push32((uint32_t)(EAX));
  /* 11d14183 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14184 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14185 push edi */
  push32((uint32_t)(EDI));
  /* 11d14186 call 0x11d141d8 */
  push32(0x11d1418bu); f_11d141d8();
  /* 11d1418b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1418e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d14191 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11d14194 push eax */
  push32((uint32_t)(EAX));
  /* 11d14195 call 0x11d13bb0 */
  push32(0x11d1419au); f_11d13bb0();
  /* 11d1419a mov esi, eax */
  ESI = (EAX);
  /* 11d1419c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1419f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d141a1 jne 0x11d141ab */
  if (!C.zf) goto L_11d141ab;
  /* 11d141a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d141a5 call 0x11d131a3 */
  push32(0x11d141aau); f_11d131a3();
  /* 11d141aa pop ecx */
  ECX = (pop32());
L_11d141ab:;
  /* 11d141ab lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d141ae push eax */
  push32((uint32_t)(EAX));
  /* 11d141af lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d141b2 push eax */
  push32((uint32_t)(EAX));
  /* 11d141b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d141b6 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11d141b9 push eax */
  push32((uint32_t)(EAX));
  /* 11d141ba push esi */
  push32((uint32_t)(ESI));
  /* 11d141bb push edi */
  push32((uint32_t)(EDI));
  /* 11d141bc call 0x11d141d8 */
  push32(0x11d141c1u); f_11d141d8();
  /* 11d141c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d141c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d141c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d141c8 mov dword ptr [0x11d37228], esi */
  w32((uint32_t)(0x11d37228), (ESI));
  /* 11d141ce pop edi */
  EDI = (pop32());
  /* 11d141cf pop esi */
  ESI = (pop32());
  /* 11d141d0 mov dword ptr [0x11d37224], eax */
  w32((uint32_t)(0x11d37224), (EAX));
  /* 11d141d5 pop ebx */
  EBX = (pop32());
  /* 11d141d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d141d7 ret  */
  ESPCHK(0x11d1413fu, _esp0);
  ESP += 4; return;
}

/* FUN_100041d8 @ 0x11d141d8 (436 bytes, 187 insns) */
void f_11d141d8(void) {
  FTRACE(0x11d141d8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d141d8 push ebp */
  push32((uint32_t)(EBP));
  /* 11d141d9 mov ebp, esp */
  EBP = (ESP);
  /* 11d141db mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d141de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d141e1 push ebx */
  push32((uint32_t)(EBX));
  /* 11d141e2 push esi */
  push32((uint32_t)(ESI));
  /* 11d141e3 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11d141e6 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d141e9 push edi */
  push32((uint32_t)(EDI));
  /* 11d141ea mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d141ed mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11d141f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d141f6 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d141f8 je 0x11d14202 */
  if (C.zf) goto L_11d14202;
  /* 11d141fa mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11d141fc add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d141ff mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11d14202:;
  /* 11d14202 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14205 jne 0x11d1424b */
  if (!C.zf) goto L_11d1424b;
L_11d14207:;
  /* 11d14207 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11d1420a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1420b cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1420e je 0x11d14239 */
  if (C.zf) goto L_11d14239;
  /* 11d14210 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d14212 je 0x11d14239 */
  if (C.zf) goto L_11d14239;
  /* 11d14214 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11d14217 test byte ptr [edx + 0x11d376e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11d376e1)))&(0x4u); fl_logic(_r,8); }
  /* 11d1421e je 0x11d1422c */
  if (C.zf) goto L_11d1422c;
  /* 11d14220 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d14222 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14224 je 0x11d1422c */
  if (C.zf) goto L_11d1422c;
  /* 11d14226 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d14228 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d1422a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1422b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d1422c:;
  /* 11d1422c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d1422e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14230 je 0x11d14207 */
  if (C.zf) goto L_11d14207;
  /* 11d14232 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d14234 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d14236 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d14237 jmp 0x11d14207 */
  goto L_11d14207;
L_11d14239:;
  /* 11d14239 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d1423b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1423d je 0x11d14243 */
  if (C.zf) goto L_11d14243;
  /* 11d1423f and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11d14242 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d14243:;
  /* 11d14243 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14246 jne 0x11d1428e */
  if (!C.zf) goto L_11d1428e;
  /* 11d14248 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14249 jmp 0x11d1428e */
  goto L_11d1428e;
L_11d1424b:;
  /* 11d1424b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d1424d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1424f je 0x11d14256 */
  if (C.zf) goto L_11d14256;
  /* 11d14251 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d14253 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d14255 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d14256:;
  /* 11d14256 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d14258 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14259 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11d1425c test byte ptr [ebx + 0x11d376e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11d376e1)))&(0x4u); fl_logic(_r,8); }
  /* 11d14263 je 0x11d14271 */
  if (C.zf) goto L_11d14271;
  /* 11d14265 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d14267 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14269 je 0x11d14270 */
  if (C.zf) goto L_11d14270;
  /* 11d1426b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11d1426d mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11d1426f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d14270:;
  /* 11d14270 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d14271:;
  /* 11d14271 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14274 je 0x11d1427f */
  if (C.zf) goto L_11d1427f;
  /* 11d14276 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d14278 je 0x11d14283 */
  if (C.zf) goto L_11d14283;
  /* 11d1427a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1427d jne 0x11d1424b */
  if (!C.zf) goto L_11d1424b;
L_11d1427f:;
  /* 11d1427f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d14281 jne 0x11d14286 */
  if (!C.zf) goto L_11d14286;
L_11d14283:;
  /* 11d14283 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d14284 jmp 0x11d1428e */
  goto L_11d1428e;
L_11d14286:;
  /* 11d14286 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14288 je 0x11d1428e */
  if (C.zf) goto L_11d1428e;
  /* 11d1428a and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11d1428e:;
  /* 11d1428e and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11d14292:;
  /* 11d14292 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14295 je 0x11d1437b */
  if (C.zf) goto L_11d1437b;
L_11d1429b:;
  /* 11d1429b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d1429d cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142a0 je 0x11d142a7 */
  if (C.zf) goto L_11d142a7;
  /* 11d142a2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142a5 jne 0x11d142aa */
  if (!C.zf) goto L_11d142aa;
L_11d142a7:;
  /* 11d142a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d142a8 jmp 0x11d1429b */
  goto L_11d1429b;
L_11d142aa:;
  /* 11d142aa cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142ad je 0x11d1437b */
  if (C.zf) goto L_11d1437b;
  /* 11d142b3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d142b5 je 0x11d142bf */
  if (C.zf) goto L_11d142bf;
  /* 11d142b7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11d142b9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d142bc mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11d142bf:;
  /* 11d142bf mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d142c2 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11d142c4:;
  /* 11d142c4 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11d142cb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d142cd:;
  /* 11d142cd cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142d0 jne 0x11d142d6 */
  if (!C.zf) goto L_11d142d6;
  /* 11d142d2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d142d3 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d142d4 jmp 0x11d142cd */
  goto L_11d142cd;
L_11d142d6:;
  /* 11d142d6 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142d9 jne 0x11d14307 */
  if (!C.zf) goto L_11d14307;
  /* 11d142db test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11d142de jne 0x11d14305 */
  if (!C.zf) goto L_11d14305;
  /* 11d142e0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d142e2 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d142e5 je 0x11d142f4 */
  if (C.zf) goto L_11d142f4;
  /* 11d142e7 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d142eb lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11d142ee jne 0x11d142f4 */
  if (!C.zf) goto L_11d142f4;
  /* 11d142f0 mov eax, edx */
  EAX = (EDX);
  /* 11d142f2 jmp 0x11d142f7 */
  goto L_11d142f7;
L_11d142f4:;
  /* 11d142f4 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11d142f7:;
  /* 11d142f7 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d142fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11d142fc cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d142ff sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11d14302 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11d14305:;
  /* 11d14305 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11d14307:;
  /* 11d14307 mov edx, ebx */
  EDX = (EBX);
  /* 11d14309 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1430a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d1430c je 0x11d1431c */
  if (C.zf) goto L_11d1431c;
  /* 11d1430e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11d1430f:;
  /* 11d1430f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14311 je 0x11d14317 */
  if (C.zf) goto L_11d14317;
  /* 11d14313 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11d14316 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d14317:;
  /* 11d14317 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d14319 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1431a jne 0x11d1430f */
  if (!C.zf) goto L_11d1430f;
L_11d1431c:;
  /* 11d1431c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d1431e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11d14320 je 0x11d1436c */
  if (C.zf) goto L_11d1436c;
  /* 11d14322 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14326 jne 0x11d14332 */
  if (!C.zf) goto L_11d14332;
  /* 11d14328 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1432b je 0x11d1436c */
  if (C.zf) goto L_11d1436c;
  /* 11d1432d cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14330 je 0x11d1436c */
  if (C.zf) goto L_11d1436c;
L_11d14332:;
  /* 11d14332 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14336 je 0x11d14366 */
  if (C.zf) goto L_11d14366;
  /* 11d14338 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1433a je 0x11d14355 */
  if (C.zf) goto L_11d14355;
  /* 11d1433c movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11d1433f test byte ptr [ebx + 0x11d376e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11d376e1)))&(0x4u); fl_logic(_r,8); }
  /* 11d14346 je 0x11d1434e */
  if (C.zf) goto L_11d1434e;
  /* 11d14348 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d1434a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1434b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1434c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11d1434e:;
  /* 11d1434e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11d14350 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11d14352 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d14353 jmp 0x11d14364 */
  goto L_11d14364;
L_11d14355:;
  /* 11d14355 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11d14358 test byte ptr [edx + 0x11d376e1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11d376e1)))&(0x4u); fl_logic(_r,8); }
  /* 11d1435f je 0x11d14364 */
  if (C.zf) goto L_11d14364;
  /* 11d14361 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14362 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11d14364:;
  /* 11d14364 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11d14366:;
  /* 11d14366 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14367 jmp 0x11d142c4 */
  goto L_11d142c4;
L_11d1436c:;
  /* 11d1436c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1436e je 0x11d14374 */
  if (C.zf) goto L_11d14374;
  /* 11d14370 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11d14373 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11d14374:;
  /* 11d14374 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11d14376 jmp 0x11d14292 */
  goto L_11d14292;
L_11d1437b:;
  /* 11d1437b test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d1437d je 0x11d14382 */
  if (C.zf) goto L_11d14382;
  /* 11d1437f and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11d14382:;
  /* 11d14382 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d14385 pop edi */
  EDI = (pop32());
  /* 11d14386 pop esi */
  ESI = (pop32());
  /* 11d14387 pop ebx */
  EBX = (pop32());
  /* 11d14388 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11d1438a pop ebp */
  EBP = (pop32());
  /* 11d1438b ret  */
  ESPCHK(0x11d141d8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000438c @ 0x11d1438c (306 bytes, 132 insns) */
void f_11d1438c(void) {
  FTRACE(0x11d1438cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1438c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1438d push ecx */
  push32((uint32_t)(ECX));
  /* 11d1438e mov eax, dword ptr [0x11d37358] */
  EAX = (r32((uint32_t)(0x11d37358)));
  /* 11d14393 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14394 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14395 mov ebp, dword ptr [0x11d1c084] */
  EBP = (r32((uint32_t)(0x11d1c084)));
  /* 11d1439b push esi */
  push32((uint32_t)(ESI));
  /* 11d1439c push edi */
  push32((uint32_t)(EDI));
  /* 11d1439d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1439f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d143a1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d143a3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143a5 jne 0x11d143da */
  if (!C.zf) goto L_11d143da;
  /* 11d143a7 call ebp */
  call_ind((uint32_t)(EBP), 0x11d143a9u);
  /* 11d143a9 mov esi, eax */
  ESI = (EAX);
  /* 11d143ab cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143ad je 0x11d143bb */
  if (C.zf) goto L_11d143bb;
  /* 11d143af mov dword ptr [0x11d37358], 1 */
  w32((uint32_t)(0x11d37358), (0x1u));
  /* 11d143b9 jmp 0x11d143e3 */
  goto L_11d143e3;
L_11d143bb:;
  /* 11d143bb call dword ptr [0x11d1c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c088))), 0x11d143c1u);
  /* 11d143c1 mov edi, eax */
  EDI = (EAX);
  /* 11d143c3 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143c5 je 0x11d144b5 */
  if (C.zf) goto L_11d144b5;
  /* 11d143cb mov dword ptr [0x11d37358], 2 */
  w32((uint32_t)(0x11d37358), (0x2u));
  /* 11d143d5 jmp 0x11d14469 */
  goto L_11d14469;
L_11d143da:;
  /* 11d143da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143dd jne 0x11d14464 */
  if (!C.zf) goto L_11d14464;
L_11d143e3:;
  /* 11d143e3 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143e5 jne 0x11d143f3 */
  if (!C.zf) goto L_11d143f3;
  /* 11d143e7 call ebp */
  call_ind((uint32_t)(EBP), 0x11d143e9u);
  /* 11d143e9 mov esi, eax */
  ESI = (EAX);
  /* 11d143eb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d143ed je 0x11d144b5 */
  if (C.zf) goto L_11d144b5;
L_11d143f3:;
  /* 11d143f3 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d143f6 mov eax, esi */
  EAX = (ESI);
  /* 11d143f8 je 0x11d14408 */
  if (C.zf) goto L_11d14408;
L_11d143fa:;
  /* 11d143fa inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d143fb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d143fc cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d143ff jne 0x11d143fa */
  if (!C.zf) goto L_11d143fa;
  /* 11d14401 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14402 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14403 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d14406 jne 0x11d143fa */
  if (!C.zf) goto L_11d143fa;
L_11d14408:;
  /* 11d14408 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1440a mov edi, dword ptr [0x11d1c098] */
  EDI = (r32((uint32_t)(0x11d1c098)));
  /* 11d14410 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11d14412 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14413 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14414 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14415 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14416 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14417 push eax */
  push32((uint32_t)(EAX));
  /* 11d14418 push esi */
  push32((uint32_t)(ESI));
  /* 11d14419 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1441a push ebx */
  push32((uint32_t)(EBX));
  /* 11d1441b mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11d1441f call edi */
  call_ind((uint32_t)(EDI), 0x11d14421u);
  /* 11d14421 mov ebp, eax */
  EBP = (EAX);
  /* 11d14423 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14425 je 0x11d14459 */
  if (C.zf) goto L_11d14459;
  /* 11d14427 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14428 call 0x11d13bb0 */
  push32(0x11d1442du); f_11d13bb0();
  /* 11d1442d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1442f pop ecx */
  ECX = (pop32());
  /* 11d14430 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11d14434 je 0x11d14459 */
  if (C.zf) goto L_11d14459;
  /* 11d14436 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14437 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14438 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14439 push eax */
  push32((uint32_t)(EAX));
  /* 11d1443a push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11d1443e push esi */
  push32((uint32_t)(ESI));
  /* 11d1443f push ebx */
  push32((uint32_t)(EBX));
  /* 11d14440 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14441 call edi */
  call_ind((uint32_t)(EDI), 0x11d14443u);
  /* 11d14443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14445 jne 0x11d14455 */
  if (!C.zf) goto L_11d14455;
  /* 11d14447 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d1444b call 0x11d16cd5 */
  push32(0x11d14450u); f_11d16cd5();
  /* 11d14450 pop ecx */
  ECX = (pop32());
  /* 11d14451 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11d14455:;
  /* 11d14455 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11d14459:;
  /* 11d14459 push esi */
  push32((uint32_t)(ESI));
  /* 11d1445a call dword ptr [0x11d1c090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c090))), 0x11d14460u);
  /* 11d14460 mov eax, ebx */
  EAX = (EBX);
  /* 11d14462 jmp 0x11d144b7 */
  goto L_11d144b7;
L_11d14464:;
  /* 11d14464 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14467 jne 0x11d144b5 */
  if (!C.zf) goto L_11d144b5;
L_11d14469:;
  /* 11d14469 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1446b jne 0x11d14479 */
  if (!C.zf) goto L_11d14479;
  /* 11d1446d call dword ptr [0x11d1c088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c088))), 0x11d14473u);
  /* 11d14473 mov edi, eax */
  EDI = (EAX);
  /* 11d14475 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14477 je 0x11d144b5 */
  if (C.zf) goto L_11d144b5;
L_11d14479:;
  /* 11d14479 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1447b mov eax, edi */
  EAX = (EDI);
  /* 11d1447d je 0x11d14489 */
  if (C.zf) goto L_11d14489;
L_11d1447f:;
  /* 11d1447f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14480 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14482 jne 0x11d1447f */
  if (!C.zf) goto L_11d1447f;
  /* 11d14484 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14485 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14487 jne 0x11d1447f */
  if (!C.zf) goto L_11d1447f;
L_11d14489:;
  /* 11d14489 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1448b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1448c mov ebp, eax */
  EBP = (EAX);
  /* 11d1448e push ebp */
  push32((uint32_t)(EBP));
  /* 11d1448f call 0x11d13bb0 */
  push32(0x11d14494u); f_11d13bb0();
  /* 11d14494 mov esi, eax */
  ESI = (EAX);
  /* 11d14496 pop ecx */
  ECX = (pop32());
  /* 11d14497 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14499 jne 0x11d1449f */
  if (!C.zf) goto L_11d1449f;
  /* 11d1449b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d1449d jmp 0x11d144aa */
  goto L_11d144aa;
L_11d1449f:;
  /* 11d1449f push ebp */
  push32((uint32_t)(EBP));
  /* 11d144a0 push edi */
  push32((uint32_t)(EDI));
  /* 11d144a1 push esi */
  push32((uint32_t)(ESI));
  /* 11d144a2 call 0x11d169a0 */
  push32(0x11d144a7u); f_11d169a0();
  /* 11d144a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d144aa:;
  /* 11d144aa push edi */
  push32((uint32_t)(EDI));
  /* 11d144ab call dword ptr [0x11d1c094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c094))), 0x11d144b1u);
  /* 11d144b1 mov eax, esi */
  EAX = (ESI);
  /* 11d144b3 jmp 0x11d144b7 */
  goto L_11d144b7;
L_11d144b5:;
  /* 11d144b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d144b7:;
  /* 11d144b7 pop edi */
  EDI = (pop32());
  /* 11d144b8 pop esi */
  ESI = (pop32());
  /* 11d144b9 pop ebp */
  EBP = (pop32());
  /* 11d144ba pop ebx */
  EBX = (pop32());
  /* 11d144bb pop ecx */
  ECX = (pop32());
  /* 11d144bc pop ecx */
  ECX = (pop32());
  /* 11d144bd ret  */
  ESPCHK(0x11d1438cu, _esp0);
  ESP += 4; return;
}

/* FUN_100044be @ 0x11d144be (45 bytes, 17 insns) */
void f_11d144be(void) {
  FTRACE(0x11d144beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d144be push esi */
  push32((uint32_t)(ESI));
  /* 11d144bf mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d144c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d144c5 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11d144c8 call dword ptr [0x11d1c0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0c4))), 0x11d144ceu);
  /* 11d144ce cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11d144d3 jne 0x11d144e9 */
  if (!C.zf) goto L_11d144e9;
  /* 11d144d5 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11d144d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d144da je 0x11d144e9 */
  if (C.zf) goto L_11d144e9;
  /* 11d144dc add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d144de mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 11d144e1 mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11d144e3 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11d144e6 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11d144e9:;
  /* 11d144e9 pop esi */
  ESI = (pop32());
  /* 11d144ea ret  */
  ESPCHK(0x11d144beu, _esp0);
  ESP += 4; return;
}

/* FUN_100044eb @ 0x11d144eb (328 bytes, 115 insns) */
void f_11d144eb(void) {
  FTRACE(0x11d144ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d144eb push ebp */
  push32((uint32_t)(EBP));
  /* 11d144ec mov ebp, esp */
  EBP = (ESP);
  /* 11d144ee mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11d144f3 call 0x11d17d90 */
  push32(0x11d144f8u); f_11d17d90();
  /* 11d144f8 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11d144fe push ebx */
  push32((uint32_t)(EBX));
  /* 11d144ff push eax */
  push32((uint32_t)(EAX));
  /* 11d14500 mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11d1450a call dword ptr [0x11d1c07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c07c))), 0x11d14510u);
  /* 11d14510 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14512 je 0x11d1452e */
  if (C.zf) goto L_11d1452e;
  /* 11d14514 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1451b jne 0x11d1452e */
  if (!C.zf) goto L_11d1452e;
  /* 11d1451d cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14524 jb 0x11d1452e */
  if (C.cf) goto L_11d1452e;
  /* 11d14526 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14528 pop eax */
  EAX = (pop32());
  /* 11d14529 jmp 0x11d14630 */
  goto L_11d14630;
L_11d1452e:;
  /* 11d1452e lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11d14534 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11d14539 push eax */
  push32((uint32_t)(EAX));
  /* 11d1453a push 0x11d1c2f4 */
  push32((uint32_t)(0x11d1c2f4u));
  /* 11d1453f call dword ptr [0x11d1c08c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c08c))), 0x11d14545u);
  /* 11d14545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14547 je 0x11d1461d */
  if (C.zf) goto L_11d1461d;
  /* 11d1454d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1454f lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11d14555 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1455b je 0x11d14570 */
  if (C.zf) goto L_11d14570;
L_11d1455d:;
  /* 11d1455d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d1455f cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14561 jl 0x11d1456b */
  if ((C.sf!=C.of)) goto L_11d1456b;
  /* 11d14563 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14565 jg 0x11d1456b */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1456b;
  /* 11d14567 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d14569 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11d1456b:;
  /* 11d1456b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1456c cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1456e jne 0x11d1455d */
  if (!C.zf) goto L_11d1455d;
L_11d14570:;
  /* 11d14570 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11d14576 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d14578 push eax */
  push32((uint32_t)(EAX));
  /* 11d14579 push 0x11d1c2dc */
  push32((uint32_t)(0x11d1c2dcu));
  /* 11d1457e call 0x11d17d50 */
  push32(0x11d14583u); f_11d17d50();
  /* 11d14583 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14588 jne 0x11d14592 */
  if (!C.zf) goto L_11d14592;
  /* 11d1458a lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11d14590 jmp 0x11d145db */
  goto L_11d145db;
L_11d14592:;
  /* 11d14592 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11d14598 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d1459d push eax */
  push32((uint32_t)(EAX));
  /* 11d1459e push ebx */
  push32((uint32_t)(EBX));
  /* 11d1459f call dword ptr [0x11d1c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a4))), 0x11d145a5u);
  /* 11d145a5 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145ab lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11d145b1 je 0x11d145c6 */
  if (C.zf) goto L_11d145c6;
L_11d145b3:;
  /* 11d145b3 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11d145b5 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145b7 jl 0x11d145c1 */
  if ((C.sf!=C.of)) goto L_11d145c1;
  /* 11d145b9 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145bb jg 0x11d145c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d145c1;
  /* 11d145bd sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11d145bf mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11d145c1:;
  /* 11d145c1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d145c2 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145c4 jne 0x11d145b3 */
  if (!C.zf) goto L_11d145b3;
L_11d145c6:;
  /* 11d145c6 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11d145cc push eax */
  push32((uint32_t)(EAX));
  /* 11d145cd lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11d145d3 push eax */
  push32((uint32_t)(EAX));
  /* 11d145d4 call 0x11d17cd0 */
  push32(0x11d145d9u); f_11d17cd0();
  /* 11d145d9 pop ecx */
  ECX = (pop32());
  /* 11d145da pop ecx */
  ECX = (pop32());
L_11d145db:;
  /* 11d145db cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d145dd je 0x11d1461d */
  if (C.zf) goto L_11d1461d;
  /* 11d145df push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11d145e1 push eax */
  push32((uint32_t)(EAX));
  /* 11d145e2 call 0x11d17c10 */
  push32(0x11d145e7u); f_11d17c10();
  /* 11d145e7 pop ecx */
  ECX = (pop32());
  /* 11d145e8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d145ea pop ecx */
  ECX = (pop32());
  /* 11d145eb je 0x11d1461d */
  if (C.zf) goto L_11d1461d;
  /* 11d145ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d145ee mov ecx, eax */
  ECX = (EAX);
  /* 11d145f0 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145f2 je 0x11d14602 */
  if (C.zf) goto L_11d14602;
L_11d145f4:;
  /* 11d145f4 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d145f7 jne 0x11d145fd */
  if (!C.zf) goto L_11d145fd;
  /* 11d145f9 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11d145fb jmp 0x11d145fe */
  goto L_11d145fe;
L_11d145fd:;
  /* 11d145fd inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11d145fe:;
  /* 11d145fe cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d14600 jne 0x11d145f4 */
  if (!C.zf) goto L_11d145f4;
L_11d14602:;
  /* 11d14602 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d14604 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14605 push eax */
  push32((uint32_t)(EAX));
  /* 11d14606 call 0x11d179d9 */
  push32(0x11d1460bu); f_11d179d9();
  /* 11d1460b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1460e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14611 je 0x11d14630 */
  if (C.zf) goto L_11d14630;
  /* 11d14613 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14616 je 0x11d14630 */
  if (C.zf) goto L_11d14630;
  /* 11d14618 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1461b je 0x11d14630 */
  if (C.zf) goto L_11d14630;
L_11d1461d:;
  /* 11d1461d lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d14620 push eax */
  push32((uint32_t)(EAX));
  /* 11d14621 call 0x11d144be */
  push32(0x11d14626u); f_11d144be();
  /* 11d14626 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1462a pop ecx */
  ECX = (pop32());
  /* 11d1462b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1462d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d14630:;
  /* 11d14630 pop ebx */
  EBX = (pop32());
  /* 11d14631 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14632 ret  */
  ESPCHK(0x11d144ebu, _esp0);
  ESP += 4; return;
}

/* FUN_10004633 @ 0x11d14633 (93 bytes, 30 insns) */
void f_11d14633(void) {
  FTRACE(0x11d14633u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14635 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d14637 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1463b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11d14640 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11d14643 push eax */
  push32((uint32_t)(EAX));
  /* 11d14644 call dword ptr [0x11d1c080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c080))), 0x11d1464au);
  /* 11d1464a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1464c mov dword ptr [0x11d38820], eax */
  w32((uint32_t)(0x11d38820), (EAX));
  /* 11d14651 je 0x11d14689 */
  if (C.zf) goto L_11d14689;
  /* 11d14653 call 0x11d144eb */
  push32(0x11d14658u); f_11d144eb();
  /* 11d14658 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1465b mov dword ptr [0x11d38824], eax */
  w32((uint32_t)(0x11d38824), (EAX));
  /* 11d14660 jne 0x11d1466f */
  if (!C.zf) goto L_11d1466f;
  /* 11d14662 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11d14667 call 0x11d1576f */
  push32(0x11d1466cu); f_11d1576f();
  /* 11d1466c pop ecx */
  ECX = (pop32());
  /* 11d1466d jmp 0x11d14679 */
  goto L_11d14679;
L_11d1466f:;
  /* 11d1466f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14672 jne 0x11d1468c */
  if (!C.zf) goto L_11d1468c;
  /* 11d14674 call 0x11d162b6 */
  push32(0x11d14679u); f_11d162b6();
L_11d14679:;
  /* 11d14679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1467b jne 0x11d1468c */
  if (!C.zf) goto L_11d1468c;
  /* 11d1467d push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d14683 call dword ptr [0x11d1c078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c078))), 0x11d14689u);
L_11d14689:;
  /* 11d14689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1468b ret  */
  ESPCHK(0x11d14633u, _esp0);
  ESP += 4; return;
L_11d1468c:;
  /* 11d1468c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1468e pop eax */
  EAX = (pop32());
  /* 11d1468f ret  */
  ESPCHK(0x11d14633u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x11d14690 (168 bytes, 56 insns) */
void f_11d14690(void) {
  FTRACE(0x11d14690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14690 mov eax, dword ptr [0x11d38824] */
  EAX = (r32((uint32_t)(0x11d38824)));
  /* 11d14695 push esi */
  push32((uint32_t)(ESI));
  /* 11d14696 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14699 push edi */
  push32((uint32_t)(EDI));
  /* 11d1469a jne 0x11d14702 */
  if (!C.zf) goto L_11d14702;
  /* 11d1469c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1469d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d1469f cmp dword ptr [0x11d38814], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d38814))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d146a5 push ebp */
  push32((uint32_t)(EBP));
  /* 11d146a6 mov ebp, dword ptr [0x11d1c06c] */
  EBP = (r32((uint32_t)(0x11d1c06c)));
  /* 11d146ac jle 0x11d146ee */
  if ((C.zf||C.sf!=C.of)) goto L_11d146ee;
  /* 11d146ae mov eax, dword ptr [0x11d38818] */
  EAX = (r32((uint32_t)(0x11d38818)));
  /* 11d146b3 mov edi, dword ptr [0x11d1c070] */
  EDI = (r32((uint32_t)(0x11d1c070)));
  /* 11d146b9 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11d146bc:;
  /* 11d146bc push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11d146c1 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11d146c6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d146c8 call edi */
  call_ind((uint32_t)(EDI), 0x11d146cau);
  /* 11d146ca push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d146cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11d146d1 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d146d3 call edi */
  call_ind((uint32_t)(EDI), 0x11d146d5u);
  /* 11d146d5 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11d146d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d146da push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d146e0 call ebp */
  call_ind((uint32_t)(EBP), 0x11d146e2u);
  /* 11d146e2 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d146e5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d146e6 cmp ebx, dword ptr [0x11d38814] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11d38814))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d146ec jl 0x11d146bc */
  if ((C.sf!=C.of)) goto L_11d146bc;
L_11d146ee:;
  /* 11d146ee push dword ptr [0x11d38818] */
  push32((uint32_t)(r32((uint32_t)(0x11d38818))));
  /* 11d146f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d146f6 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d146fc call ebp */
  call_ind((uint32_t)(EBP), 0x11d146feu);
  /* 11d146fe pop ebp */
  EBP = (pop32());
  /* 11d146ff pop ebx */
  EBX = (pop32());
  /* 11d14700 jmp 0x11d14729 */
  goto L_11d14729;
L_11d14702:;
  /* 11d14702 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14705 jne 0x11d14729 */
  if (!C.zf) goto L_11d14729;
  /* 11d14707 mov edi, 0x11d1e810 */
  EDI = (0x11d1e810u);
  /* 11d1470c mov esi, edi */
  ESI = (EDI);
L_11d1470e:;
  /* 11d1470e mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d14711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14713 je 0x11d14723 */
  if (C.zf) goto L_11d14723;
  /* 11d14715 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11d1471a push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1471c push eax */
  push32((uint32_t)(EAX));
  /* 11d1471d call dword ptr [0x11d1c070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c070))), 0x11d14723u);
L_11d14723:;
  /* 11d14723 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11d14725 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14727 jne 0x11d1470e */
  if (!C.zf) goto L_11d1470e;
L_11d14729:;
  /* 11d14729 push dword ptr [0x11d38820] */
  push32((uint32_t)(r32((uint32_t)(0x11d38820))));
  /* 11d1472f call dword ptr [0x11d1c078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c078))), 0x11d14735u);
  /* 11d14735 pop edi */
  EDI = (pop32());
  /* 11d14736 pop esi */
  ESI = (pop32());
  /* 11d14737 ret  */
  ESPCHK(0x11d14690u, _esp0);
  ESP += 4; return;
}

/* FUN_10004738 @ 0x11d14738 (57 bytes, 18 insns) */
void f_11d14738(void) {
  FTRACE(0x11d14738u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14738 mov eax, dword ptr [0x11d37208] */
  EAX = (r32((uint32_t)(0x11d37208)));
  /* 11d1473d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14740 je 0x11d1474f */
  if (C.zf) goto L_11d1474f;
  /* 11d14742 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14744 jne 0x11d14770 */
  if (!C.zf) goto L_11d14770;
  /* 11d14746 cmp dword ptr [0x11d3720c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d3720c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1474d jne 0x11d14770 */
  if (!C.zf) goto L_11d14770;
L_11d1474f:;
  /* 11d1474f push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11d14754 call 0x11d14771 */
  push32(0x11d14759u); f_11d14771();
  /* 11d14759 mov eax, dword ptr [0x11d3735c] */
  EAX = (r32((uint32_t)(0x11d3735c)));
  /* 11d1475e pop ecx */
  ECX = (pop32());
  /* 11d1475f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14761 je 0x11d14765 */
  if (C.zf) goto L_11d14765;
  /* 11d14763 call eax */
  call_ind((uint32_t)(EAX), 0x11d14765u);
L_11d14765:;
  /* 11d14765 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11d1476a call 0x11d14771 */
  push32(0x11d1476fu); f_11d14771();
  /* 11d1476f pop ecx */
  ECX = (pop32());
L_11d14770:;
  /* 11d14770 ret  */
  ESPCHK(0x11d14738u, _esp0);
  ESP += 4; return;
}

/* FUN_10004771 @ 0x11d14771 (339 bytes, 100 insns) */
void f_11d14771(void) {
  FTRACE(0x11d14771u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14771 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14772 mov ebp, esp */
  EBP = (ESP);
  /* 11d14774 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1477a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1477d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11d1477f mov eax, 0x11d1e470 */
  EAX = (0x11d1e470u);
L_11d14784:;
  /* 11d14784 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14786 je 0x11d14793 */
  if (C.zf) goto L_11d14793;
  /* 11d14788 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1478b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1478c cmp eax, 0x11d1e500 */
  { uint32_t _a=(EAX),_b=(0x11d1e500u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14791 jl 0x11d14784 */
  if ((C.sf!=C.of)) goto L_11d14784;
L_11d14793:;
  /* 11d14793 push esi */
  push32((uint32_t)(ESI));
  /* 11d14794 mov esi, ecx */
  ESI = (ECX);
  /* 11d14796 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11d14799 cmp edx, dword ptr [esi + 0x11d1e470] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11d1e470))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1479f jne 0x11d148c1 */
  if (!C.zf) goto L_11d148c1;
  /* 11d147a5 mov eax, dword ptr [0x11d37208] */
  EAX = (r32((uint32_t)(0x11d37208)));
  /* 11d147aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d147ad je 0x11d1489b */
  if (C.zf) goto L_11d1489b;
  /* 11d147b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d147b5 jne 0x11d147c4 */
  if (!C.zf) goto L_11d147c4;
  /* 11d147b7 cmp dword ptr [0x11d3720c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11d3720c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d147be je 0x11d1489b */
  if (C.zf) goto L_11d1489b;
L_11d147c4:;
  /* 11d147c4 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d147ca je 0x11d148c1 */
  if (C.zf) goto L_11d148c1;
  /* 11d147d0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11d147d6 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11d147db push eax */
  push32((uint32_t)(EAX));
  /* 11d147dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11d147de call dword ptr [0x11d1c0a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a4))), 0x11d147e4u);
  /* 11d147e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d147e6 jne 0x11d147fb */
  if (!C.zf) goto L_11d147fb;
  /* 11d147e8 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11d147ee push 0x11d1c5e4 */
  push32((uint32_t)(0x11d1c5e4u));
  /* 11d147f3 push eax */
  push32((uint32_t)(EAX));
  /* 11d147f4 call 0x11d15150 */
  push32(0x11d147f9u); f_11d15150();
  /* 11d147f9 pop ecx */
  ECX = (pop32());
  /* 11d147fa pop ecx */
  ECX = (pop32());
L_11d147fb:;
  /* 11d147fb lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11d14801 push edi */
  push32((uint32_t)(EDI));
  /* 11d14802 push eax */
  push32((uint32_t)(EAX));
  /* 11d14803 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11d14809 call 0x11d155e0 */
  push32(0x11d1480eu); f_11d155e0();
  /* 11d1480e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1480f pop ecx */
  ECX = (pop32());
  /* 11d14810 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14813 jbe 0x11d1483e */
  if ((C.cf||C.zf)) goto L_11d1483e;
  /* 11d14815 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11d1481b push eax */
  push32((uint32_t)(EAX));
  /* 11d1481c call 0x11d155e0 */
  push32(0x11d14821u); f_11d155e0();
  /* 11d14821 mov edi, eax */
  EDI = (EAX);
  /* 11d14823 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11d14829 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1482c push 3 */
  push32((uint32_t)(0x3u));
  /* 11d1482e add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14830 push 0x11d1c5e0 */
  push32((uint32_t)(0x11d1c5e0u));
  /* 11d14835 push edi */
  push32((uint32_t)(EDI));
  /* 11d14836 call 0x11d17e50 */
  push32(0x11d1483bu); f_11d17e50();
  /* 11d1483b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1483e:;
  /* 11d1483e lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11d14844 push 0x11d1c5c4 */
  push32((uint32_t)(0x11d1c5c4u));
  /* 11d14849 push eax */
  push32((uint32_t)(EAX));
  /* 11d1484a call 0x11d15150 */
  push32(0x11d1484fu); f_11d15150();
  /* 11d1484f lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11d14855 push edi */
  push32((uint32_t)(EDI));
  /* 11d14856 push eax */
  push32((uint32_t)(EAX));
  /* 11d14857 call 0x11d15160 */
  push32(0x11d1485cu); f_11d15160();
  /* 11d1485c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11d14862 push 0x11d1c5c0 */
  push32((uint32_t)(0x11d1c5c0u));
  /* 11d14867 push eax */
  push32((uint32_t)(EAX));
  /* 11d14868 call 0x11d15160 */
  push32(0x11d1486du); f_11d15160();
  /* 11d1486d push dword ptr [esi + 0x11d1e474] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11d1e474))));
  /* 11d14873 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11d14879 push eax */
  push32((uint32_t)(EAX));
  /* 11d1487a call 0x11d15160 */
  push32(0x11d1487fu); f_11d15160();
  /* 11d1487f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11d14884 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11d1488a push 0x11d1c598 */
  push32((uint32_t)(0x11d1c598u));
  /* 11d1488f push eax */
  push32((uint32_t)(EAX));
  /* 11d14890 call 0x11d17dbf */
  push32(0x11d14895u); f_11d17dbf();
  /* 11d14895 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14898 pop edi */
  EDI = (pop32());
  /* 11d14899 jmp 0x11d148c1 */
  goto L_11d148c1;
L_11d1489b:;
  /* 11d1489b lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d1489e lea esi, [esi + 0x11d1e474] */
  ESI = ((uint32_t)(ESI + 0x11d1e474));
  /* 11d148a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d148a6 push eax */
  push32((uint32_t)(EAX));
  /* 11d148a7 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d148a9 call 0x11d155e0 */
  push32(0x11d148aeu); f_11d155e0();
  /* 11d148ae pop ecx */
  ECX = (pop32());
  /* 11d148af push eax */
  push32((uint32_t)(EAX));
  /* 11d148b0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d148b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11d148b4 call dword ptr [0x11d1c0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0a8))), 0x11d148bau);
  /* 11d148ba push eax */
  push32((uint32_t)(EAX));
  /* 11d148bb call dword ptr [0x11d1c074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c074))), 0x11d148c1u);
L_11d148c1:;
  /* 11d148c1 pop esi */
  ESI = (pop32());
  /* 11d148c2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d148c3 ret  */
  ESPCHK(0x11d14771u, _esp0);
  ESP += 4; return;
}

/* FUN_100048c4 @ 0x11d148c4 (53 bytes, 25 insns) */
void f_11d148c4(void) {
  FTRACE(0x11d148c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d148c4 push ebp */
  push32((uint32_t)(EBP));
  /* 11d148c5 mov ebp, esp */
  EBP = (ESP);
  /* 11d148c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d148c8 push esi */
  push32((uint32_t)(ESI));
  /* 11d148c9 wait  */
  /* wait (no observable integer/reg state) */
  /* 11d148ca fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 11d148cd push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11d148d0 call 0x11d1490f */
  push32(0x11d148d5u); f_11d1490f();
  /* 11d148d5 mov esi, eax */
  ESI = (EAX);
  /* 11d148d7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d148da not eax */
  EAX = (~(EAX));
  /* 11d148dc and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11d148de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d148e1 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11d148e4 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 11d148e6 push esi */
  push32((uint32_t)(ESI));
  /* 11d148e7 call 0x11d149a1 */
  push32(0x11d148ecu); f_11d149a1();
  /* 11d148ec pop ecx */
  ECX = (pop32());
  /* 11d148ed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d148f0 pop ecx */
  ECX = (pop32());
  /* 11d148f1 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 11d148f4 mov eax, esi */
  EAX = (ESI);
  /* 11d148f6 pop esi */
  ESI = (pop32());
  /* 11d148f7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d148f8 ret  */
  ESPCHK(0x11d148c4u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f9 @ 0x11d148f9 (22 bytes, 8 insns) */
void f_11d148f9(void) {
  FTRACE(0x11d148f9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d148f9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d148fd and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d14902 push eax */
  push32((uint32_t)(EAX));
  /* 11d14903 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d14907 call 0x11d148c4 */
  push32(0x11d1490cu); f_11d148c4();
  /* 11d1490c pop ecx */
  ECX = (pop32());
  /* 11d1490d pop ecx */
  ECX = (pop32());
  /* 11d1490e ret  */
  ESPCHK(0x11d148f9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000490f @ 0x11d1490f (146 bytes, 58 insns) */
void f_11d1490f(void) {
  FTRACE(0x11d1490fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1490f push ebx */
  push32((uint32_t)(EBX));
  /* 11d14910 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14916 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14917 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11d1491a push edi */
  push32((uint32_t)(EDI));
  /* 11d1491b je 0x11d14920 */
  if (C.zf) goto L_11d14920;
  /* 11d1491d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11d1491f pop eax */
  EAX = (pop32());
L_11d14920:;
  /* 11d14920 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11d14923 je 0x11d14927 */
  if (C.zf) goto L_11d14927;
  /* 11d14925 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11d14927:;
  /* 11d14927 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11d1492a je 0x11d1492e */
  if (C.zf) goto L_11d1492e;
  /* 11d1492c or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11d1492e:;
  /* 11d1492e test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11d14931 je 0x11d14935 */
  if (C.zf) goto L_11d14935;
  /* 11d14933 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11d14935:;
  /* 11d14935 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 11d14938 je 0x11d1493c */
  if (C.zf) goto L_11d1493c;
  /* 11d1493a or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_11d1493c:;
  /* 11d1493c test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11d1493f je 0x11d14946 */
  if (C.zf) goto L_11d14946;
  /* 11d14941 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_11d14946:;
  /* 11d14946 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11d14949 push esi */
  push32((uint32_t)(ESI));
  /* 11d1494a mov edx, ecx */
  EDX = (ECX);
  /* 11d1494c mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 11d14951 mov edi, 0x300 */
  EDI = (0x300u);
  /* 11d14956 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11d14958 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 11d1495d je 0x11d1497e */
  if (C.zf) goto L_11d1497e;
  /* 11d1495f cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14965 je 0x11d1497b */
  if (C.zf) goto L_11d1497b;
  /* 11d14967 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1496d je 0x11d14977 */
  if (C.zf) goto L_11d14977;
  /* 11d1496f cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14971 jne 0x11d1497e */
  if (!C.zf) goto L_11d1497e;
  /* 11d14973 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11d14975 jmp 0x11d1497e */
  goto L_11d1497e;
L_11d14977:;
  /* 11d14977 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 11d14979 jmp 0x11d1497e */
  goto L_11d1497e;
L_11d1497b:;
  /* 11d1497b or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_11d1497e:;
  /* 11d1497e and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11d14980 pop esi */
  ESI = (pop32());
  /* 11d14981 je 0x11d1498e */
  if (C.zf) goto L_11d1498e;
  /* 11d14983 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14985 jne 0x11d14993 */
  if (!C.zf) goto L_11d14993;
  /* 11d14987 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1498c jmp 0x11d14993 */
  goto L_11d14993;
L_11d1498e:;
  /* 11d1498e or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_11d14993:;
  /* 11d14993 pop edi */
  EDI = (pop32());
  /* 11d14994 pop ebp */
  EBP = (pop32());
  /* 11d14995 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 11d14998 pop ebx */
  EBX = (pop32());
  /* 11d14999 je 0x11d149a0 */
  if (C.zf) goto L_11d149a0;
  /* 11d1499b or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_11d149a0:;
  /* 11d149a0 ret  */
  ESPCHK(0x11d1490fu, _esp0);
  ESP += 4; return;
}

/* FUN_100049a1 @ 0x11d149a1 (137 bytes, 53 insns) */
void f_11d149a1(void) {
  FTRACE(0x11d149a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d149a1 push ebx */
  push32((uint32_t)(EBX));
  /* 11d149a2 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d149a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d149a8 push esi */
  push32((uint32_t)(ESI));
  /* 11d149a9 test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 11d149ac je 0x11d149b1 */
  if (C.zf) goto L_11d149b1;
  /* 11d149ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11d149b0 pop eax */
  EAX = (pop32());
L_11d149b1:;
  /* 11d149b1 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 11d149b4 je 0x11d149b8 */
  if (C.zf) goto L_11d149b8;
  /* 11d149b6 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_11d149b8:;
  /* 11d149b8 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 11d149bb je 0x11d149bf */
  if (C.zf) goto L_11d149bf;
  /* 11d149bd or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_11d149bf:;
  /* 11d149bf test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11d149c2 je 0x11d149c6 */
  if (C.zf) goto L_11d149c6;
  /* 11d149c4 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_11d149c6:;
  /* 11d149c6 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11d149c9 je 0x11d149cd */
  if (C.zf) goto L_11d149cd;
  /* 11d149cb or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_11d149cd:;
  /* 11d149cd test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 11d149d3 je 0x11d149d7 */
  if (C.zf) goto L_11d149d7;
  /* 11d149d5 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_11d149d7:;
  /* 11d149d7 mov ecx, ebx */
  ECX = (EBX);
  /* 11d149d9 mov edx, 0x300 */
  EDX = (0x300u);
  /* 11d149de and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11d149e0 mov esi, 0x200 */
  ESI = (0x200u);
  /* 11d149e5 je 0x11d14a04 */
  if (C.zf) goto L_11d14a04;
  /* 11d149e7 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d149ed je 0x11d14a01 */
  if (C.zf) goto L_11d14a01;
  /* 11d149ef cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d149f1 je 0x11d149fc */
  if (C.zf) goto L_11d149fc;
  /* 11d149f3 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d149f5 jne 0x11d14a04 */
  if (!C.zf) goto L_11d14a04;
  /* 11d149f7 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11d149fa jmp 0x11d14a04 */
  goto L_11d14a04;
L_11d149fc:;
  /* 11d149fc or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 11d149ff jmp 0x11d14a04 */
  goto L_11d14a04;
L_11d14a01:;
  /* 11d14a01 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_11d14a04:;
  /* 11d14a04 mov ecx, ebx */
  ECX = (EBX);
  /* 11d14a06 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d14a0c je 0x11d14a1a */
  if (C.zf) goto L_11d14a1a;
  /* 11d14a0e cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14a14 jne 0x11d14a1c */
  if (!C.zf) goto L_11d14a1c;
  /* 11d14a16 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11d14a18 jmp 0x11d14a1c */
  goto L_11d14a1c;
L_11d14a1a:;
  /* 11d14a1a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_11d14a1c:;
  /* 11d14a1c pop esi */
  ESI = (pop32());
  /* 11d14a1d test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 11d14a23 pop ebx */
  EBX = (pop32());
  /* 11d14a24 je 0x11d14a29 */
  if (C.zf) goto L_11d14a29;
  /* 11d14a26 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_11d14a29:;
  /* 11d14a29 ret  */
  ESPCHK(0x11d149a1u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a2a @ 0x11d14a2a (117 bytes, 46 insns) */
void f_11d14a2a(void) {
  FTRACE(0x11d14a2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14a2a push ebp */
  push32((uint32_t)(EBP));
  /* 11d14a2b mov ebp, esp */
  EBP = (ESP);
  /* 11d14a2d push ecx */
  push32((uint32_t)(ECX));
  /* 11d14a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14a31 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 11d14a34 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14a3a ja 0x11d14a48 */
  if ((!C.cf&&!C.zf)) goto L_11d14a48;
  /* 11d14a3c mov ecx, dword ptr [0x11d1e50c] */
  ECX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d14a42 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11d14a46 jmp 0x11d14a9a */
  goto L_11d14a9a;
L_11d14a48:;
  /* 11d14a48 mov ecx, eax */
  ECX = (EAX);
  /* 11d14a4a push esi */
  push32((uint32_t)(ESI));
  /* 11d14a4b mov esi, dword ptr [0x11d1e50c] */
  ESI = (r32((uint32_t)(0x11d1e50c)));
  /* 11d14a51 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11d14a54 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11d14a57 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11d14a5c pop esi */
  ESI = (pop32());
  /* 11d14a5d je 0x11d14a6d */
  if (C.zf) goto L_11d14a6d;
  /* 11d14a5f and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 11d14a63 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11d14a66 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11d14a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d14a6b jmp 0x11d14a76 */
  goto L_11d14a76;
L_11d14a6d:;
  /* 11d14a6d and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 11d14a71 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11d14a74 push 1 */
  push32((uint32_t)(0x1u));
L_11d14a76:;
  /* 11d14a76 pop eax */
  EAX = (pop32());
  /* 11d14a77 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11d14a7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11d14a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d14a80 push ecx */
  push32((uint32_t)(ECX));
  /* 11d14a81 push eax */
  push32((uint32_t)(EAX));
  /* 11d14a82 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d14a85 push eax */
  push32((uint32_t)(EAX));
  /* 11d14a86 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14a88 call 0x11d1810d */
  push32(0x11d14a8du); f_11d1810d();
  /* 11d14a8d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14a92 jne 0x11d14a96 */
  if (!C.zf) goto L_11d14a96;
  /* 11d14a94 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14a95 ret  */
  ESPCHK(0x11d14a2au, _esp0);
  ESP += 4; return;
L_11d14a96:;
  /* 11d14a96 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11d14a9a:;
  /* 11d14a9a and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11d14a9d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14a9e ret  */
  ESPCHK(0x11d14a2au, _esp0);
  ESP += 4; return;
}

/* FUN_10004a9f @ 0x11d14a9f (111 bytes, 44 insns) */
void f_11d14a9f(void) {
  FTRACE(0x11d14a9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14a9f push ebx */
  push32((uint32_t)(EBX));
  /* 11d14aa0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d14aa2 cmp dword ptr [0x11d3740c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d3740c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14aa8 jne 0x11d14abd */
  if (!C.zf) goto L_11d14abd;
  /* 11d14aaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14aae cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14ab1 jl 0x11d14b0c */
  if ((C.sf!=C.of)) goto L_11d14b0c;
  /* 11d14ab3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14ab6 jg 0x11d14b0c */
  if ((!C.zf&&C.sf==C.of)) goto L_11d14b0c;
  /* 11d14ab8 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14abb pop ebx */
  EBX = (pop32());
  /* 11d14abc ret  */
  ESPCHK(0x11d14a9fu, _esp0);
  ESP += 4; return;
L_11d14abd:;
  /* 11d14abd push esi */
  push32((uint32_t)(ESI));
  /* 11d14abe mov esi, 0x11d375b0 */
  ESI = (0x11d375b0u);
  /* 11d14ac3 push edi */
  push32((uint32_t)(EDI));
  /* 11d14ac4 push esi */
  push32((uint32_t)(ESI));
  /* 11d14ac5 call dword ptr [0x11d1c060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c060))), 0x11d14acbu);
  /* 11d14acb cmp dword ptr [0x11d375ac], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11d375ac))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14ad1 mov edi, dword ptr [0x11d1c064] */
  EDI = (r32((uint32_t)(0x11d1c064)));
  /* 11d14ad7 je 0x11d14ae7 */
  if (C.zf) goto L_11d14ae7;
  /* 11d14ad9 push esi */
  push32((uint32_t)(ESI));
  /* 11d14ada call edi */
  call_ind((uint32_t)(EDI), 0x11d14adcu);
  /* 11d14adc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d14ade call 0x11d156f9 */
  push32(0x11d14ae3u); f_11d156f9();
  /* 11d14ae3 pop ecx */
  ECX = (pop32());
  /* 11d14ae4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14ae6 pop ebx */
  EBX = (pop32());
L_11d14ae7:;
  /* 11d14ae7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11d14aeb call 0x11d14b0e */
  push32(0x11d14af0u); f_11d14b0e();
  /* 11d14af0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d14af2 pop ecx */
  ECX = (pop32());
  /* 11d14af3 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11d14af7 je 0x11d14b03 */
  if (C.zf) goto L_11d14b03;
  /* 11d14af9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11d14afb call 0x11d1575a */
  push32(0x11d14b00u); f_11d1575a();
  /* 11d14b00 pop ecx */
  ECX = (pop32());
  /* 11d14b01 jmp 0x11d14b06 */
  goto L_11d14b06;
L_11d14b03:;
  /* 11d14b03 push esi */
  push32((uint32_t)(ESI));
  /* 11d14b04 call edi */
  call_ind((uint32_t)(EDI), 0x11d14b06u);
L_11d14b06:;
  /* 11d14b06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d14b0a pop edi */
  EDI = (pop32());
  /* 11d14b0b pop esi */
  ESI = (pop32());
L_11d14b0c:;
  /* 11d14b0c pop ebx */
  EBX = (pop32());
  /* 11d14b0d ret  */
  ESPCHK(0x11d14a9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004b0e @ 0x11d14b0e (203 bytes, 78 insns) */
void f_11d14b0e(void) {
  FTRACE(0x11d14b0eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14b0e push ebp */
  push32((uint32_t)(EBP));
  /* 11d14b0f mov ebp, esp */
  EBP = (ESP);
  /* 11d14b11 push ecx */
  push32((uint32_t)(ECX));
  /* 11d14b12 cmp dword ptr [0x11d3740c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11d3740c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14b19 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14b1a push esi */
  push32((uint32_t)(ESI));
  /* 11d14b1b push edi */
  push32((uint32_t)(EDI));
  /* 11d14b1c jne 0x11d14b3b */
  if (!C.zf) goto L_11d14b3b;
  /* 11d14b1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14b21 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14b24 jl 0x11d14bd4 */
  if ((C.sf!=C.of)) goto L_11d14bd4;
  /* 11d14b2a cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14b2d jg 0x11d14bd4 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d14bd4;
  /* 11d14b33 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14b36 jmp 0x11d14bd4 */
  goto L_11d14bd4;
L_11d14b3b:;
  /* 11d14b3b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14b3e mov edi, 0x100 */
  EDI = (0x100u);
  /* 11d14b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14b45 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14b47 pop esi */
  ESI = (pop32());
  /* 11d14b48 jge 0x11d14b6f */
  if ((C.sf==C.of)) goto L_11d14b6f;
  /* 11d14b4a cmp dword ptr [0x11d1e500], esi */
  { uint32_t _a=(r32((uint32_t)(0x11d1e500))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14b50 jle 0x11d14b5d */
  if ((C.zf||C.sf!=C.of)) goto L_11d14b5d;
  /* 11d14b52 push esi */
  push32((uint32_t)(ESI));
  /* 11d14b53 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14b54 call 0x11d14a2a */
  push32(0x11d14b59u); f_11d14a2a();
  /* 11d14b59 pop ecx */
  ECX = (pop32());
  /* 11d14b5a pop ecx */
  ECX = (pop32());
  /* 11d14b5b jmp 0x11d14b67 */
  goto L_11d14b67;
L_11d14b5d:;
  /* 11d14b5d mov eax, dword ptr [0x11d1e50c] */
  EAX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d14b62 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11d14b65 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11d14b67:;
  /* 11d14b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14b69 jne 0x11d14b6f */
  if (!C.zf) goto L_11d14b6f;
L_11d14b6b:;
  /* 11d14b6b mov eax, ebx */
  EAX = (EBX);
  /* 11d14b6d jmp 0x11d14bd4 */
  goto L_11d14bd4;
L_11d14b6f:;
  /* 11d14b6f mov edx, dword ptr [0x11d1e50c] */
  EDX = (r32((uint32_t)(0x11d1e50c)));
  /* 11d14b75 mov eax, ebx */
  EAX = (EBX);
  /* 11d14b77 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d14b7a movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11d14b7d test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11d14b82 je 0x11d14b93 */
  if (C.zf) goto L_11d14b93;
  /* 11d14b84 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11d14b88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d14b8a mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11d14b8d mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11d14b90 pop eax */
  EAX = (pop32());
  /* 11d14b91 jmp 0x11d14b9c */
  goto L_11d14b9c;
L_11d14b93:;
  /* 11d14b93 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11d14b97 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11d14b9a mov eax, esi */
  EAX = (ESI);
L_11d14b9c:;
  /* 11d14b9c push esi */
  push32((uint32_t)(ESI));
  /* 11d14b9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11d14b9f lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11d14ba2 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d14ba4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d14ba5 push eax */
  push32((uint32_t)(EAX));
  /* 11d14ba6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11d14ba9 push eax */
  push32((uint32_t)(EAX));
  /* 11d14baa push edi */
  push32((uint32_t)(EDI));
  /* 11d14bab push dword ptr [0x11d3740c] */
  push32((uint32_t)(r32((uint32_t)(0x11d3740c))));
  /* 11d14bb1 call 0x11d18256 */
  push32(0x11d14bb6u); f_11d18256();
  /* 11d14bb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14bbb je 0x11d14b6b */
  if (C.zf) goto L_11d14b6b;
  /* 11d14bbd cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14bbf jne 0x11d14bc7 */
  if (!C.zf) goto L_11d14bc7;
  /* 11d14bc1 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d14bc5 jmp 0x11d14bd4 */
  goto L_11d14bd4;
L_11d14bc7:;
  /* 11d14bc7 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11d14bcb movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11d14bcf shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11d14bd2 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11d14bd4:;
  /* 11d14bd4 pop edi */
  EDI = (pop32());
  /* 11d14bd5 pop esi */
  ESI = (pop32());
  /* 11d14bd6 pop ebx */
  EBX = (pop32());
  /* 11d14bd7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14bd8 ret  */
  ESPCHK(0x11d14b0eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd9 @ 0x11d14bd9 (73 bytes, 36 insns) */
void f_11d14bd9(void) {
  FTRACE(0x11d14bd9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14bd9 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14bdd push esi */
  push32((uint32_t)(ESI));
  /* 11d14bde push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d14be0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14be1 pop ecx */
  ECX = (pop32());
  /* 11d14be2 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14be4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d14be6 mov esi, eax */
  ESI = (EAX);
  /* 11d14be8 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d14bec cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14bed idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14bef pop ecx */
  ECX = (pop32());
  /* 11d14bf0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14bf4 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14bf6 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d14bf9 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d14bfb not edx */
  EDX = (~(EDX));
  /* 11d14bfd test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 11d14c00 jne 0x11d14c1e */
  if (!C.zf) goto L_11d14c1e;
  /* 11d14c02 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d14c03 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14c06 jge 0x11d14c19 */
  if ((C.sf==C.of)) goto L_11d14c19;
  /* 11d14c08 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_11d14c0b:;
  /* 11d14c0b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14c0e jne 0x11d14c1e */
  if (!C.zf) goto L_11d14c1e;
  /* 11d14c10 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d14c11 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14c14 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14c17 jl 0x11d14c0b */
  if ((C.sf!=C.of)) goto L_11d14c0b;
L_11d14c19:;
  /* 11d14c19 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14c1b pop eax */
  EAX = (pop32());
  /* 11d14c1c pop esi */
  ESI = (pop32());
  /* 11d14c1d ret  */
  ESPCHK(0x11d14bd9u, _esp0);
  ESP += 4; return;
L_11d14c1e:;
  /* 11d14c1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14c20 pop esi */
  ESI = (pop32());
  /* 11d14c21 ret  */
  ESPCHK(0x11d14bd9u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c22 @ 0x11d14c22 (86 bytes, 43 insns) */
void f_11d14c22(void) {
  FTRACE(0x11d14c22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14c22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14c26 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14c27 push esi */
  push32((uint32_t)(ESI));
  /* 11d14c28 push edi */
  push32((uint32_t)(EDI));
  /* 11d14c29 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d14c2b mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d14c2f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14c30 pop ecx */
  ECX = (pop32());
  /* 11d14c31 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14c33 mov esi, eax */
  ESI = (EAX);
  /* 11d14c35 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d14c39 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14c3a idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14c3c lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 11d14c3f push edi */
  push32((uint32_t)(EDI));
  /* 11d14c40 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d14c42 pop ecx */
  ECX = (pop32());
  /* 11d14c43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14c45 pop eax */
  EAX = (pop32());
  /* 11d14c46 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14c48 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d14c4a push eax */
  push32((uint32_t)(EAX));
  /* 11d14c4b push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11d14c4d call 0x11d184a5 */
  push32(0x11d14c52u); f_11d184a5();
  /* 11d14c52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14c55 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d14c56 js 0x11d14c74 */
  if (C.sf) goto L_11d14c74;
  /* 11d14c58 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_11d14c5b:;
  /* 11d14c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14c5d je 0x11d14c74 */
  if (C.zf) goto L_11d14c74;
  /* 11d14c5f push edi */
  push32((uint32_t)(EDI));
  /* 11d14c60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14c62 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11d14c64 call 0x11d184a5 */
  push32(0x11d14c69u); f_11d184a5();
  /* 11d14c69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14c6c dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d14c6d sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14c70 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d14c72 jge 0x11d14c5b */
  if ((C.sf==C.of)) goto L_11d14c5b;
L_11d14c74:;
  /* 11d14c74 pop edi */
  EDI = (pop32());
  /* 11d14c75 pop esi */
  ESI = (pop32());
  /* 11d14c76 pop ebx */
  EBX = (pop32());
  /* 11d14c77 ret  */
  ESPCHK(0x11d14c22u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c78 @ 0x11d14c78 (140 bytes, 71 insns) */
void f_11d14c78(void) {
  FTRACE(0x11d14c78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14c78 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14c79 mov ebp, esp */
  EBP = (ESP);
  /* 11d14c7b push ecx */
  push32((uint32_t)(ECX));
  /* 11d14c7c push ecx */
  push32((uint32_t)(ECX));
  /* 11d14c7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14c80 push ebx */
  push32((uint32_t)(EBX));
  /* 11d14c81 push esi */
  push32((uint32_t)(ESI));
  /* 11d14c82 push edi */
  push32((uint32_t)(EDI));
  /* 11d14c83 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 11d14c86 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d14c88 pop ecx */
  ECX = (pop32());
  /* 11d14c89 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d14c8d lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 11d14c90 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d14c92 mov eax, ebx */
  EAX = (EBX);
  /* 11d14c94 pop esi */
  ESI = (pop32());
  /* 11d14c95 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14c96 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14c98 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d14c9a mov ecx, eax */
  ECX = (EAX);
  /* 11d14c9c mov eax, ebx */
  EAX = (EBX);
  /* 11d14c9e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14c9f idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14ca4 pop esi */
  ESI = (pop32());
  /* 11d14ca5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14ca7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d14caa lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11d14cad mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d14cb0 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14cb2 pop edx */
  EDX = (pop32());
  /* 11d14cb3 mov ecx, esi */
  ECX = (ESI);
  /* 11d14cb5 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d14cb7 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 11d14cb9 je 0x11d14cdc */
  if (C.zf) goto L_11d14cdc;
  /* 11d14cbb inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d14cbc push ebx */
  push32((uint32_t)(EBX));
  /* 11d14cbd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d14cc0 call 0x11d14bd9 */
  push32(0x11d14cc5u); f_11d14bd9();
  /* 11d14cc5 pop ecx */
  ECX = (pop32());
  /* 11d14cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14cc8 pop ecx */
  ECX = (pop32());
  /* 11d14cc9 jne 0x11d14cd9 */
  if (!C.zf) goto L_11d14cd9;
  /* 11d14ccb push edi */
  push32((uint32_t)(EDI));
  /* 11d14ccc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d14ccf call 0x11d14c22 */
  push32(0x11d14cd4u); f_11d14c22();
  /* 11d14cd4 pop ecx */
  ECX = (pop32());
  /* 11d14cd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d14cd8 pop ecx */
  ECX = (pop32());
L_11d14cd9:;
  /* 11d14cd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11d14cdc:;
  /* 11d14cdc or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11d14cdf mov ecx, esi */
  ECX = (ESI);
  /* 11d14ce1 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11d14ce3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d14ce5 pop ecx */
  ECX = (pop32());
  /* 11d14ce6 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d14ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d14ceb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14cec cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14cee jge 0x11d14cfc */
  if ((C.sf==C.of)) goto L_11d14cfc;
  /* 11d14cf0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14cf3 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14cf5 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11d14cf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14cfa rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_11d14cfc:;
  /* 11d14cfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d14cff pop edi */
  EDI = (pop32());
  /* 11d14d00 pop esi */
  ESI = (pop32());
  /* 11d14d01 pop ebx */
  EBX = (pop32());
  /* 11d14d02 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14d03 ret  */
  ESPCHK(0x11d14c78u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d04 @ 0x11d14d04 (27 bytes, 13 insns) */
void f_11d14d04(void) {
  FTRACE(0x11d14d04u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14d04 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14d08 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d14d0c push esi */
  push32((uint32_t)(ESI));
  /* 11d14d0d push 3 */
  push32((uint32_t)(0x3u));
  /* 11d14d0f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14d11 pop edx */
  EDX = (pop32());
L_11d14d12:;
  /* 11d14d12 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 11d14d14 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 11d14d17 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14d1a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11d14d1b jne 0x11d14d12 */
  if (!C.zf) goto L_11d14d12;
  /* 11d14d1d pop esi */
  ESI = (pop32());
  /* 11d14d1e ret  */
  ESPCHK(0x11d14d04u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d1f @ 0x11d14d1f (12 bytes, 8 insns) */
void f_11d14d1f(void) {
  FTRACE(0x11d14d1fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14d1f push edi */
  push32((uint32_t)(EDI));
  /* 11d14d20 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d14d24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14d26 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d14d27 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d14d28 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11d14d29 pop edi */
  EDI = (pop32());
  /* 11d14d2a ret  */
  ESPCHK(0x11d14d1fu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d2b @ 0x11d14d2b (27 bytes, 13 insns) */
void f_11d14d2b(void) {
  FTRACE(0x11d14d2bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14d2b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11d14d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11d14d31:;
  /* 11d14d31 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14d34 jne 0x11d14d43 */
  if (!C.zf) goto L_11d14d43;
  /* 11d14d36 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d14d37 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14d3a cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14d3d jl 0x11d14d31 */
  if ((C.sf!=C.of)) goto L_11d14d31;
  /* 11d14d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14d41 pop eax */
  EAX = (pop32());
  /* 11d14d42 ret  */
  ESPCHK(0x11d14d2bu, _esp0);
  ESP += 4; return;
L_11d14d43:;
  /* 11d14d43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d14d45 ret  */
  ESPCHK(0x11d14d2bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004d46 @ 0x11d14d46 (141 bytes, 64 insns) */
void f_11d14d46(void) {
  FTRACE(0x11d14d46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14d46 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14d47 mov ebp, esp */
  EBP = (ESP);
  /* 11d14d49 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14d4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14d4f push ebx */
  push32((uint32_t)(EBX));
  /* 11d14d50 push esi */
  push32((uint32_t)(ESI));
  /* 11d14d51 push edi */
  push32((uint32_t)(EDI));
  /* 11d14d52 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11d14d54 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14d57 pop ebx */
  EBX = (pop32());
  /* 11d14d58 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11d14d5b cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14d5c mov ecx, ebx */
  ECX = (EBX);
  /* 11d14d5e mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 11d14d65 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14d67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d14d6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14d6d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11d14d6e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11d14d70 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d14d74 mov ecx, edx */
  ECX = (EDX);
  /* 11d14d76 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d14d78 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14d7a not esi */
  ESI = (~(ESI));
L_11d14d7c:;
  /* 11d14d7c mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d14d7e mov ecx, eax */
  ECX = (EAX);
  /* 11d14d80 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11d14d82 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d14d85 mov ecx, edx */
  ECX = (EDX);
  /* 11d14d87 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d14d89 or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11d14d8c mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d14d8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d14d91 mov ecx, ebx */
  ECX = (EBX);
  /* 11d14d93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14d96 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11d14d98 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11d14d9b mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11d14d9e jne 0x11d14d7c */
  if (!C.zf) goto L_11d14d7c;
  /* 11d14da0 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 11d14da3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11d14da5 pop ebx */
  EBX = (pop32());
  /* 11d14da6 mov esi, edi */
  ESI = (EDI);
  /* 11d14da8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11d14daa pop ecx */
  ECX = (pop32());
  /* 11d14dab shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_11d14dae:;
  /* 11d14dae cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14db0 jl 0x11d14dc1 */
  if ((C.sf!=C.of)) goto L_11d14dc1;
  /* 11d14db2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14db5 mov eax, ecx */
  EAX = (ECX);
  /* 11d14db7 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14db9 mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11d14dbc mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 11d14dbf jmp 0x11d14dc8 */
  goto L_11d14dc8;
L_11d14dc1:;
  /* 11d14dc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14dc4 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_11d14dc8:;
  /* 11d14dc8 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d14dc9 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14dcc jns 0x11d14dae */
  if (!C.sf) goto L_11d14dae;
  /* 11d14dce pop edi */
  EDI = (pop32());
  /* 11d14dcf pop esi */
  ESI = (pop32());
  /* 11d14dd0 pop ebx */
  EBX = (pop32());
  /* 11d14dd1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14dd2 ret  */
  ESPCHK(0x11d14d46u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd3 @ 0x11d14dd3 (364 bytes, 138 insns) */
void f_11d14dd3(void) {
  FTRACE(0x11d14dd3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d14dd3 push ebp */
  push32((uint32_t)(EBP));
  /* 11d14dd4 mov ebp, esp */
  EBP = (ESP);
  /* 11d14dd6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14dd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14ddc push ebx */
  push32((uint32_t)(EBX));
  /* 11d14ddd push esi */
  push32((uint32_t)(ESI));
  /* 11d14dde push edi */
  push32((uint32_t)(EDI));
  /* 11d14ddf movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 11d14de3 mov ebx, ecx */
  EBX = (ECX);
  /* 11d14de5 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d14deb mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11d14dee mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11d14df1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11d14df4 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11d14df7 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11d14dfa mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d14dfd and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 11d14e03 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14e09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d14e0c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11d14e0f cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14e15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d14e18 jne 0x11d14e40 */
  if (!C.zf) goto L_11d14e40;
  /* 11d14e1a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e1d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d14e1f push eax */
  push32((uint32_t)(EAX));
  /* 11d14e20 call 0x11d14d2b */
  push32(0x11d14e25u); f_11d14d2b();
  /* 11d14e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14e27 pop ecx */
  ECX = (pop32());
  /* 11d14e28 jne 0x11d14eff */
  if (!C.zf) goto L_11d14eff;
  /* 11d14e2e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e31 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e32 call 0x11d14d1f */
  push32(0x11d14e37u); f_11d14d1f();
  /* 11d14e37 pop ecx */
  ECX = (pop32());
L_11d14e38:;
  /* 11d14e38 push 2 */
  push32((uint32_t)(0x2u));
L_11d14e3a:;
  /* 11d14e3a pop eax */
  EAX = (pop32());
  /* 11d14e3b jmp 0x11d14f01 */
  goto L_11d14f01;
L_11d14e40:;
  /* 11d14e40 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e43 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e44 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11d14e47 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e48 call 0x11d14d04 */
  push32(0x11d14e4du); f_11d14d04();
  /* 11d14e4d push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11d14e50 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e53 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e54 call 0x11d14c78 */
  push32(0x11d14e59u); f_11d14c78();
  /* 11d14e59 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d14e5e je 0x11d14e61 */
  if (C.zf) goto L_11d14e61;
  /* 11d14e60 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11d14e61:;
  /* 11d14e61 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d14e64 mov ecx, eax */
  ECX = (EAX);
  /* 11d14e66 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14e69 cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14e6b jge 0x11d14e79 */
  if ((C.sf==C.of)) goto L_11d14e79;
  /* 11d14e6d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e70 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e71 call 0x11d14d1f */
  push32(0x11d14e76u); f_11d14d1f();
  /* 11d14e76 pop ecx */
  ECX = (pop32());
  /* 11d14e77 jmp 0x11d14eb5 */
  goto L_11d14eb5;
L_11d14e79:;
  /* 11d14e79 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14e7b jg 0x11d14ebc */
  if ((!C.zf&&C.sf==C.of)) goto L_11d14ebc;
  /* 11d14e7d sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14e7f mov esi, eax */
  ESI = (EAX);
  /* 11d14e81 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11d14e84 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e85 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e88 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e89 call 0x11d14d04 */
  push32(0x11d14e8eu); f_11d14d04();
  /* 11d14e8e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e91 push esi */
  push32((uint32_t)(ESI));
  /* 11d14e92 push eax */
  push32((uint32_t)(EAX));
  /* 11d14e93 call 0x11d14d46 */
  push32(0x11d14e98u); f_11d14d46();
  /* 11d14e98 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 11d14e9b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14e9e push eax */
  push32((uint32_t)(EAX));
  /* 11d14e9f call 0x11d14c78 */
  push32(0x11d14ea4u); f_11d14c78();
  /* 11d14ea4 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 11d14ea7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d14ea8 push eax */
  push32((uint32_t)(EAX));
  /* 11d14ea9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14eac push eax */
  push32((uint32_t)(EAX));
  /* 11d14ead call 0x11d14d46 */
  push32(0x11d14eb2u); f_11d14d46();
  /* 11d14eb2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d14eb5:;
  /* 11d14eb5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d14eb7 jmp 0x11d14e38 */
  goto L_11d14e38;
L_11d14ebc:;
  /* 11d14ebc cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14ebe jl 0x11d14ee8 */
  if ((C.sf!=C.of)) goto L_11d14ee8;
  /* 11d14ec0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14ec3 push eax */
  push32((uint32_t)(EAX));
  /* 11d14ec4 call 0x11d14d1f */
  push32(0x11d14ec9u); f_11d14d1f();
  /* 11d14ec9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11d14ecc or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11d14ed0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14ed3 push eax */
  push32((uint32_t)(EAX));
  /* 11d14ed4 call 0x11d14d46 */
  push32(0x11d14ed9u); f_11d14d46();
  /* 11d14ed9 mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11d14edc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14edf add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14ee1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d14ee3 jmp 0x11d14e3a */
  goto L_11d14e3a;
L_11d14ee8:;
  /* 11d14ee8 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 11d14eeb mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 11d14eee and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 11d14ef2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d14ef5 push eax */
  push32((uint32_t)(EAX));
  /* 11d14ef6 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d14ef8 call 0x11d14d46 */
  push32(0x11d14efdu); f_11d14d46();
  /* 11d14efd pop ecx */
  ECX = (pop32());
  /* 11d14efe pop ecx */
  ECX = (pop32());
L_11d14eff:;
  /* 11d14eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d14f01:;
  /* 11d14f01 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 11d14f03 pop ecx */
  ECX = (pop32());
  /* 11d14f04 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14f07 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 11d14f0a shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11d14f0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d14f0f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d14f11 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d14f13 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11d14f19 or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 11d14f1b or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11d14f1e cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14f21 jne 0x11d14f30 */
  if (!C.zf) goto L_11d14f30;
  /* 11d14f23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14f26 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d14f29 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11d14f2c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11d14f2e jmp 0x11d14f3a */
  goto L_11d14f3a;
L_11d14f30:;
  /* 11d14f30 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d14f33 jne 0x11d14f3a */
  if (!C.zf) goto L_11d14f3a;
  /* 11d14f35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d14f38 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11d14f3a:;
  /* 11d14f3a pop edi */
  EDI = (pop32());
  /* 11d14f3b pop esi */
  ESI = (pop32());
  /* 11d14f3c pop ebx */
  EBX = (pop32());
  /* 11d14f3d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d14f3e ret  */
  ESPCHK(0x11d14dd3u, _esp0);
  ESP += 4; return;
}

