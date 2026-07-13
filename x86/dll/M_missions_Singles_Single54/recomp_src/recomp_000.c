#include "recomp.h"

/* FUN_10001000 @ 0x11911000 (20 bytes, 6 insns) */
void f_11911000(void) {
  FTRACE(0x11911000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11911004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11911005 jne 0x1191100c */
  if (!C.zf) goto L_1191100c;
  /* 11911007 call 0x11911020 */
  push32(0x1191100cu); f_11911020();
L_1191100c:;
  /* 1191100c mov eax, 1 */
  EAX = (0x1u);
  /* 11911011 ret 0xc */
  ESPCHK(0x11911000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x11911020 (575 bytes, 155 insns) */
void f_11911020(void) {
  FTRACE(0x11911020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911020 push ebx */
  push32((uint32_t)(EBX));
  /* 11911021 push esi */
  push32((uint32_t)(ESI));
  /* 11911022 mov esi, dword ptr [0x1191614c] */
  ESI = (r32((uint32_t)(0x1191614c)));
  /* 11911028 push edi */
  push32((uint32_t)(EDI));
  /* 11911029 push 0x119171d4 */
  push32((uint32_t)(0x119171d4u));
  /* 1191102e push 0x1191a1a0 */
  push32((uint32_t)(0x1191a1a0u));
  /* 11911033 call esi */
  call_ind((uint32_t)(ESI), 0x11911035u);
  /* 11911035 push 0x119171c8 */
  push32((uint32_t)(0x119171c8u));
  /* 1191103a push 0x1191a198 */
  push32((uint32_t)(0x1191a198u));
  /* 1191103f call esi */
  call_ind((uint32_t)(ESI), 0x11911041u);
  /* 11911041 push 0x119171b8 */
  push32((uint32_t)(0x119171b8u));
  /* 11911046 push 0x1191a068 */
  push32((uint32_t)(0x1191a068u));
  /* 1191104b call esi */
  call_ind((uint32_t)(ESI), 0x1191104du);
  /* 1191104d push 0x119171a8 */
  push32((uint32_t)(0x119171a8u));
  /* 11911052 push 0x11919dd8 */
  push32((uint32_t)(0x11919dd8u));
  /* 11911057 call esi */
  call_ind((uint32_t)(ESI), 0x11911059u);
  /* 11911059 push 0x11917198 */
  push32((uint32_t)(0x11917198u));
  /* 1191105e push 0x1191a1c8 */
  push32((uint32_t)(0x1191a1c8u));
  /* 11911063 call esi */
  call_ind((uint32_t)(ESI), 0x11911065u);
  /* 11911065 push 0x1191718c */
  push32((uint32_t)(0x1191718cu));
  /* 1191106a push 0x1191a058 */
  push32((uint32_t)(0x1191a058u));
  /* 1191106f call esi */
  call_ind((uint32_t)(ESI), 0x11911071u);
  /* 11911071 mov edi, dword ptr [0x11916144] */
  EDI = (r32((uint32_t)(0x11916144)));
  /* 11911077 push 0x11917180 */
  push32((uint32_t)(0x11917180u));
  /* 1191107c push 0x1191a1b8 */
  push32((uint32_t)(0x1191a1b8u));
  /* 11911081 call edi */
  call_ind((uint32_t)(EDI), 0x11911083u);
  /* 11911083 push 0x11917174 */
  push32((uint32_t)(0x11917174u));
  /* 11911088 push 0x1191a220 */
  push32((uint32_t)(0x1191a220u));
  /* 1191108d call esi */
  call_ind((uint32_t)(ESI), 0x1191108fu);
  /* 1191108f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911092 push 0x11917168 */
  push32((uint32_t)(0x11917168u));
  /* 11911097 push 0x1191a048 */
  push32((uint32_t)(0x1191a048u));
  /* 1191109c call edi */
  call_ind((uint32_t)(EDI), 0x1191109eu);
  /* 1191109e push 0x1191715c */
  push32((uint32_t)(0x1191715cu));
  /* 119110a3 push 0x1191a010 */
  push32((uint32_t)(0x1191a010u));
  /* 119110a8 call esi */
  call_ind((uint32_t)(ESI), 0x119110aau);
  /* 119110aa push 0x11917150 */
  push32((uint32_t)(0x11917150u));
  /* 119110af push 0x11919de8 */
  push32((uint32_t)(0x11919de8u));
  /* 119110b4 call edi */
  call_ind((uint32_t)(EDI), 0x119110b6u);
  /* 119110b6 push 0x11917144 */
  push32((uint32_t)(0x11917144u));
  /* 119110bb push 0x1191a1b0 */
  push32((uint32_t)(0x1191a1b0u));
  /* 119110c0 call edi */
  call_ind((uint32_t)(EDI), 0x119110c2u);
  /* 119110c2 push 0x11917134 */
  push32((uint32_t)(0x11917134u));
  /* 119110c7 push 0x1191a218 */
  push32((uint32_t)(0x1191a218u));
  /* 119110cc call edi */
  call_ind((uint32_t)(EDI), 0x119110ceu);
  /* 119110ce push 0x1191712c */
  push32((uint32_t)(0x1191712cu));
  /* 119110d3 push 0x1191a1d0 */
  push32((uint32_t)(0x1191a1d0u));
  /* 119110d8 call edi */
  call_ind((uint32_t)(EDI), 0x119110dau);
  /* 119110da push 0x11917124 */
  push32((uint32_t)(0x11917124u));
  /* 119110df push 0x1191a1d8 */
  push32((uint32_t)(0x1191a1d8u));
  /* 119110e4 call edi */
  call_ind((uint32_t)(EDI), 0x119110e6u);
  /* 119110e6 push 0x1191711c */
  push32((uint32_t)(0x1191711cu));
  /* 119110eb push 0x1191a1e0 */
  push32((uint32_t)(0x1191a1e0u));
  /* 119110f0 call edi */
  call_ind((uint32_t)(EDI), 0x119110f2u);
  /* 119110f2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119110f5 push 0x11917114 */
  push32((uint32_t)(0x11917114u));
  /* 119110fa push 0x1191a1e8 */
  push32((uint32_t)(0x1191a1e8u));
  /* 119110ff call edi */
  call_ind((uint32_t)(EDI), 0x11911101u);
  /* 11911101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911104 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11911106:;
  /* 11911106 lea ecx, [ebx + 0x1191a078] */
  ECX = ((uint32_t)(EBX + 0x1191a078));
  /* 1191110c call 0x11911ba0 */
  push32(0x11911111u); f_11911ba0();
  /* 11911111 lea ecx, [ebx + 0x11919df0] */
  ECX = ((uint32_t)(EBX + 0x11919df0));
  /* 11911117 call 0x11911ba0 */
  push32(0x1191111cu); f_11911ba0();
  /* 1191111c lea ecx, [ebx + 0x11919f00] */
  ECX = ((uint32_t)(EBX + 0x11919f00));
  /* 11911122 call 0x11911ba0 */
  push32(0x11911127u); f_11911ba0();
  /* 11911127 add ebx, 0x26 */
  { uint32_t _a=(EBX),_b=(0x26u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191112a cmp ebx, 0x10a */
  { uint32_t _a=(EBX),_b=(0x10au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911130 jl 0x11911106 */
  if ((C.sf!=C.of)) goto L_11911106;
  /* 11911132 push 0x11917108 */
  push32((uint32_t)(0x11917108u));
  /* 11911137 push 0x1191a190 */
  push32((uint32_t)(0x1191a190u));
  /* 1191113c call esi */
  call_ind((uint32_t)(ESI), 0x1191113eu);
  /* 1191113e push 0x119170fc */
  push32((uint32_t)(0x119170fcu));
  /* 11911143 push 0x1191a070 */
  push32((uint32_t)(0x1191a070u));
  /* 11911148 call esi */
  call_ind((uint32_t)(ESI), 0x1191114au);
  /* 1191114a push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 1191114f push 0x1191a1c0 */
  push32((uint32_t)(0x1191a1c0u));
  /* 11911154 call esi */
  call_ind((uint32_t)(ESI), 0x11911156u);
  /* 11911156 push 0x119170e8 */
  push32((uint32_t)(0x119170e8u));
  /* 1191115b push 0x1191a018 */
  push32((uint32_t)(0x1191a018u));
  /* 11911160 call esi */
  call_ind((uint32_t)(ESI), 0x11911162u);
  /* 11911162 push 0x119170e0 */
  push32((uint32_t)(0x119170e0u));
  /* 11911167 push 0x1191a020 */
  push32((uint32_t)(0x1191a020u));
  /* 1191116c call esi */
  call_ind((uint32_t)(ESI), 0x1191116eu);
  /* 1191116e push 0x119170d4 */
  push32((uint32_t)(0x119170d4u));
  /* 11911173 push 0x1191a050 */
  push32((uint32_t)(0x1191a050u));
  /* 11911178 call edi */
  call_ind((uint32_t)(EDI), 0x1191117au);
  /* 1191117a push 0x119170c8 */
  push32((uint32_t)(0x119170c8u));
  /* 1191117f push 0x1191a030 */
  push32((uint32_t)(0x1191a030u));
  /* 11911184 call edi */
  call_ind((uint32_t)(EDI), 0x11911186u);
  /* 11911186 mov ebx, dword ptr [0x11916154] */
  EBX = (r32((uint32_t)(0x11916154)));
  /* 1191118c push 1 */
  push32((uint32_t)(0x1u));
  /* 1191118e push 0x11919de0 */
  push32((uint32_t)(0x11919de0u));
  /* 11911193 call ebx */
  call_ind((uint32_t)(EBX), 0x11911195u);
  /* 11911195 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911198 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191119a push 0x1191a040 */
  push32((uint32_t)(0x1191a040u));
  /* 1191119f call ebx */
  call_ind((uint32_t)(EBX), 0x119111a1u);
  /* 119111a1 push 0x119170bc */
  push32((uint32_t)(0x119170bcu));
  /* 119111a6 push 0x1191a060 */
  push32((uint32_t)(0x1191a060u));
  /* 119111ab call esi */
  call_ind((uint32_t)(ESI), 0x119111adu);
  /* 119111ad push 0x119170ac */
  push32((uint32_t)(0x119170acu));
  /* 119111b2 push 0x1191a028 */
  push32((uint32_t)(0x1191a028u));
  /* 119111b7 call esi */
  call_ind((uint32_t)(ESI), 0x119111b9u);
  /* 119111b9 push 0x119170a0 */
  push32((uint32_t)(0x119170a0u));
  /* 119111be push 0x1191a1f0 */
  push32((uint32_t)(0x1191a1f0u));
  /* 119111c3 call edi */
  call_ind((uint32_t)(EDI), 0x119111c5u);
  /* 119111c5 push 0x11917094 */
  push32((uint32_t)(0x11917094u));
  /* 119111ca push 0x1191a038 */
  push32((uint32_t)(0x1191a038u));
  /* 119111cf call esi */
  call_ind((uint32_t)(ESI), 0x119111d1u);
  /* 119111d1 push 0x11917088 */
  push32((uint32_t)(0x11917088u));
  /* 119111d6 push 0x1191a1a8 */
  push32((uint32_t)(0x1191a1a8u));
  /* 119111db call edi */
  call_ind((uint32_t)(EDI), 0x119111ddu);
  /* 119111dd push 0x1191707c */
  push32((uint32_t)(0x1191707cu));
  /* 119111e2 push 0x1191a210 */
  push32((uint32_t)(0x1191a210u));
  /* 119111e7 call esi */
  call_ind((uint32_t)(ESI), 0x119111e9u);
  /* 119111e9 push 0x11917070 */
  push32((uint32_t)(0x11917070u));
  /* 119111ee push 0x1191a188 */
  push32((uint32_t)(0x1191a188u));
  /* 119111f3 call edi */
  call_ind((uint32_t)(EDI), 0x119111f5u);
  /* 119111f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119111f8 push 0x11917064 */
  push32((uint32_t)(0x11917064u));
  /* 119111fd push 0x1191a1f8 */
  push32((uint32_t)(0x1191a1f8u));
  /* 11911202 call edi */
  call_ind((uint32_t)(EDI), 0x11911204u);
  /* 11911204 push 0x11917058 */
  push32((uint32_t)(0x11917058u));
  /* 11911209 push 0x1191a200 */
  push32((uint32_t)(0x1191a200u));
  /* 1191120e call edi */
  call_ind((uint32_t)(EDI), 0x11911210u);
  /* 11911210 push 0x1191704c */
  push32((uint32_t)(0x1191704cu));
  /* 11911215 push 0x1191a208 */
  push32((uint32_t)(0x1191a208u));
  /* 1191121a call edi */
  call_ind((uint32_t)(EDI), 0x1191121cu);
  /* 1191121c mov esi, dword ptr [0x11916158] */
  ESI = (r32((uint32_t)(0x11916158)));
  /* 11911222 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911224 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911226 call esi */
  call_ind((uint32_t)(ESI), 0x11911228u);
  /* 11911228 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1191122a push 3 */
  push32((uint32_t)(0x3u));
  /* 1191122c call esi */
  call_ind((uint32_t)(ESI), 0x1191122eu);
  /* 1191122e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11911230 push 5 */
  push32((uint32_t)(0x5u));
  /* 11911232 call esi */
  call_ind((uint32_t)(ESI), 0x11911234u);
  /* 11911234 mov esi, dword ptr [0x11916150] */
  ESI = (r32((uint32_t)(0x11916150)));
  /* 1191123a push 0x11917044 */
  push32((uint32_t)(0x11917044u));
  /* 1191123f push 1 */
  push32((uint32_t)(0x1u));
  /* 11911241 call esi */
  call_ind((uint32_t)(ESI), 0x11911243u);
  /* 11911243 push 0x1191703c */
  push32((uint32_t)(0x1191703cu));
  /* 11911248 push 3 */
  push32((uint32_t)(0x3u));
  /* 1191124a call esi */
  call_ind((uint32_t)(ESI), 0x1191124cu);
  /* 1191124c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191124f push 0x11917030 */
  push32((uint32_t)(0x11917030u));
  /* 11911254 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911256 call esi */
  call_ind((uint32_t)(ESI), 0x11911258u);
  /* 11911258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191125b pop edi */
  EDI = (pop32());
  /* 1191125c pop esi */
  ESI = (pop32());
  /* 1191125d pop ebx */
  EBX = (pop32());
  /* 1191125e ret  */
  ESPCHK(0x11911020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x11911260 (2347 bytes, 740 insns) [1 switch table(s)] */
void f_11911260(void) {
  FTRACE(0x11911260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911260 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11911263 push ebx */
  push32((uint32_t)(EBX));
  /* 11911264 push ebp */
  push32((uint32_t)(EBP));
  /* 11911265 push esi */
  push32((uint32_t)(ESI));
  /* 11911266 push edi */
  push32((uint32_t)(EDI));
  /* 11911267 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911269 call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x1191126fu);
  /* 1191126f mov edi, dword ptr [0x119160d8] */
  EDI = (r32((uint32_t)(0x119160d8)));
  /* 11911275 mov esi, dword ptr [0x119160e8] */
  ESI = (r32((uint32_t)(0x119160e8)));
  /* 1191127b mov ebx, dword ptr [0x119160ec] */
  EBX = (r32((uint32_t)(0x119160ec)));
  /* 11911281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911284 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911286 je 0x119115b6 */
  if (C.zf) goto L_119115b6;
  /* 1191128c push 0 */
  push32((uint32_t)(0x0u));
  /* 1191128e push 1 */
  push32((uint32_t)(0x1u));
  /* 11911290 call dword ptr [0x119160e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e4))), 0x11911296u);
  /* 11911296 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911298 call esi */
  call_ind((uint32_t)(ESI), 0x1191129au);
  /* 1191129a mov ecx, 5 */
  ECX = (0x5u);
  /* 1191129f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119112a1 lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 119112a4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119112a7 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119112aa shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 119112ad push eax */
  push32((uint32_t)(EAX));
  /* 119112ae push 0 */
  push32((uint32_t)(0x0u));
  /* 119112b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119112b2 call edi */
  call_ind((uint32_t)(EDI), 0x119112b4u);
  /* 119112b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 119112b6 call esi */
  call_ind((uint32_t)(ESI), 0x119112b8u);
  /* 119112b8 mov ecx, 5 */
  ECX = (0x5u);
  /* 119112bd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119112bf lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 119112c2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119112c5 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 119112c8 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 119112cb push ecx */
  push32((uint32_t)(ECX));
  /* 119112cc push 3 */
  push32((uint32_t)(0x3u));
  /* 119112ce push 0 */
  push32((uint32_t)(0x0u));
  /* 119112d0 call edi */
  call_ind((uint32_t)(EDI), 0x119112d2u);
  /* 119112d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119112d4 call esi */
  call_ind((uint32_t)(ESI), 0x119112d6u);
  /* 119112d6 mov ecx, 5 */
  ECX = (0x5u);
  /* 119112db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119112dd lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 119112e0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119112e3 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 119112e6 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 119112e9 push edx */
  push32((uint32_t)(EDX));
  /* 119112ea push 2 */
  push32((uint32_t)(0x2u));
  /* 119112ec push 0 */
  push32((uint32_t)(0x0u));
  /* 119112ee call edi */
  call_ind((uint32_t)(EDI), 0x119112f0u);
  /* 119112f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119112f2 call esi */
  call_ind((uint32_t)(ESI), 0x119112f4u);
  /* 119112f4 mov ecx, 5 */
  ECX = (0x5u);
  /* 119112f9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119112fb lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 119112fe lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911301 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911304 shl eax, 3 */
  EAX = (sh_shl((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11911307 push eax */
  push32((uint32_t)(EAX));
  /* 11911308 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191130a push 0 */
  push32((uint32_t)(0x0u));
  /* 1191130c call edi */
  call_ind((uint32_t)(EDI), 0x1191130eu);
  /* 1191130e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911311 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911313 call esi */
  call_ind((uint32_t)(ESI), 0x11911315u);
  /* 11911315 mov ecx, 5 */
  ECX = (0x5u);
  /* 1191131a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191131c lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1191131f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911322 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11911325 shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11911328 push ecx */
  push32((uint32_t)(ECX));
  /* 11911329 push 4 */
  push32((uint32_t)(0x4u));
  /* 1191132b push 0 */
  push32((uint32_t)(0x0u));
  /* 1191132d call edi */
  call_ind((uint32_t)(EDI), 0x1191132fu);
  /* 1191132f push 0 */
  push32((uint32_t)(0x0u));
  /* 11911331 call esi */
  call_ind((uint32_t)(ESI), 0x11911333u);
  /* 11911333 mov ecx, 5 */
  ECX = (0x5u);
  /* 11911338 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191133a lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 1191133d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911340 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 11911343 shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 11911346 push edx */
  push32((uint32_t)(EDX));
  /* 11911347 push 5 */
  push32((uint32_t)(0x5u));
  /* 11911349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191134b call edi */
  call_ind((uint32_t)(EDI), 0x1191134du);
  /* 1191134d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11911352 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911354 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911356 call edi */
  call_ind((uint32_t)(EDI), 0x11911358u);
  /* 11911358 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1191135d push 3 */
  push32((uint32_t)(0x3u));
  /* 1191135f push 3 */
  push32((uint32_t)(0x3u));
  /* 11911361 call edi */
  call_ind((uint32_t)(EDI), 0x11911363u);
  /* 11911363 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11911368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1191136a push 3 */
  push32((uint32_t)(0x3u));
  /* 1191136c call edi */
  call_ind((uint32_t)(EDI), 0x1191136eu);
  /* 1191136e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911371 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11911376 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911378 push 3 */
  push32((uint32_t)(0x3u));
  /* 1191137a call edi */
  call_ind((uint32_t)(EDI), 0x1191137cu);
  /* 1191137c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11911381 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911383 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911385 call edi */
  call_ind((uint32_t)(EDI), 0x11911387u);
  /* 11911387 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1191138c push 5 */
  push32((uint32_t)(0x5u));
  /* 1191138e push 3 */
  push32((uint32_t)(0x3u));
  /* 11911390 call edi */
  call_ind((uint32_t)(EDI), 0x11911392u);
  /* 11911392 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911394 call esi */
  call_ind((uint32_t)(ESI), 0x11911396u);
  /* 11911396 push eax */
  push32((uint32_t)(EAX));
  /* 11911397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911399 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191139b push 1 */
  push32((uint32_t)(0x1u));
  /* 1191139d push 0x119173b0 */
  push32((uint32_t)(0x119173b0u));
  /* 119113a2 push 3 */
  push32((uint32_t)(0x3u));
  /* 119113a4 call dword ptr [0x119160f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f4))), 0x119113aau);
  /* 119113aa mov ebp, dword ptr [0x119160f8] */
  EBP = (r32((uint32_t)(0x119160f8)));
  /* 119113b0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119113b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 119113b5 push 0x1191a068 */
  push32((uint32_t)(0x1191a068u));
  /* 119113ba call ebp */
  call_ind((uint32_t)(EBP), 0x119113bcu);
  /* 119113bc push 1 */
  push32((uint32_t)(0x1u));
  /* 119113be push 0x11919dd8 */
  push32((uint32_t)(0x11919dd8u));
  /* 119113c3 call ebp */
  call_ind((uint32_t)(EBP), 0x119113c5u);
  /* 119113c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 119113c7 push 0x1191a1c8 */
  push32((uint32_t)(0x1191a1c8u));
  /* 119113cc call ebp */
  call_ind((uint32_t)(EBP), 0x119113ceu);
  /* 119113ce push 4 */
  push32((uint32_t)(0x4u));
  /* 119113d0 call dword ptr [0x119160f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f0))), 0x119113d6u);
  /* 119113d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119113d8 call dword ptr [0x11916100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916100))), 0x119113deu);
  /* 119113de push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 119113e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 119113e5 call ebx */
  call_ind((uint32_t)(EBX), 0x119113e7u);
  /* 119113e7 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 119113ec push 2 */
  push32((uint32_t)(0x2u));
  /* 119113ee call ebx */
  call_ind((uint32_t)(EBX), 0x119113f0u);
  /* 119113f0 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 119113f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 119113f7 call ebx */
  call_ind((uint32_t)(EBX), 0x119113f9u);
  /* 119113f9 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119113fc mov byte ptr [0x11919de0], 1 */
  w8((uint32_t)(0x11919de0), (0x1u));
  /* 11911403 mov byte ptr [0x1191a040], 0 */
  w8((uint32_t)(0x1191a040), (0x0u));
  /* 1191140a push 1 */
  push32((uint32_t)(0x1u));
  /* 1191140c push 0 */
  push32((uint32_t)(0x0u));
  /* 1191140e call esi */
  call_ind((uint32_t)(ESI), 0x11911410u);
  /* 11911410 mov ebp, dword ptr [0x11916104] */
  EBP = (r32((uint32_t)(0x11916104)));
  /* 11911416 mov ecx, 4 */
  ECX = (0x4u);
  /* 1191141b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191141e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11911420 push ecx */
  push32((uint32_t)(ECX));
  /* 11911421 push 0x1191a1f0 */
  push32((uint32_t)(0x1191a1f0u));
  /* 11911426 call ebp */
  call_ind((uint32_t)(EBP), 0x11911428u);
  /* 11911428 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191142b push 2 */
  push32((uint32_t)(0x2u));
  /* 1191142d push 0 */
  push32((uint32_t)(0x0u));
  /* 1191142f call esi */
  call_ind((uint32_t)(ESI), 0x11911431u);
  /* 11911431 mov edx, 4 */
  EDX = (0x4u);
  /* 11911436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911439 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191143b push edx */
  push32((uint32_t)(EDX));
  /* 1191143c push 0x1191a1f8 */
  push32((uint32_t)(0x1191a1f8u));
  /* 11911441 call ebp */
  call_ind((uint32_t)(EBP), 0x11911443u);
  /* 11911443 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911446 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191144a call esi */
  call_ind((uint32_t)(ESI), 0x1191144cu);
  /* 1191144c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191144f mov ecx, 4 */
  ECX = (0x4u);
  /* 11911454 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11911456 push ecx */
  push32((uint32_t)(ECX));
  /* 11911457 push 0x1191a200 */
  push32((uint32_t)(0x1191a200u));
  /* 1191145c call ebp */
  call_ind((uint32_t)(EBP), 0x1191145eu);
  /* 1191145e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911461 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911463 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911465 call esi */
  call_ind((uint32_t)(ESI), 0x11911467u);
  /* 11911467 mov edx, 4 */
  EDX = (0x4u);
  /* 1191146c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191146f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11911471 push edx */
  push32((uint32_t)(EDX));
  /* 11911472 push 0x1191a208 */
  push32((uint32_t)(0x1191a208u));
  /* 11911477 call ebp */
  call_ind((uint32_t)(EBP), 0x11911479u);
  /* 11911479 push 0x119173a4 */
  push32((uint32_t)(0x119173a4u));
  /* 1191147e call dword ptr [0x119160fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160fc))), 0x11911484u);
  /* 11911484 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911486 call esi */
  call_ind((uint32_t)(ESI), 0x11911488u);
  /* 11911488 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191148b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191148e ja 0x11911591 */
  if ((!C.cf&&!C.zf)) goto L_11911591;
  /* 11911494 mov ebp, dword ptr [0x1191610c] */
  EBP = (r32((uint32_t)(0x1191610c)));
  /* 1191149a jmp dword ptr [eax*4 + 0x11911b8c] */
  switch (EAX) {
    case 0: goto L_1191156a;
    case 1: goto L_11911537;
    case 2: goto L_119114f8;
    case 3: goto L_119114a1;
    default: x86_unimpl("switch@0x1191149a out of table"); return;
  }
L_119114a1:;
  /* 119114a1 push 0x11917390 */
  push32((uint32_t)(0x11917390u));
  /* 119114a6 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114ab call ebp */
  call_ind((uint32_t)(EBP), 0x119114adu);
  /* 119114ad push 0x1191737c */
  push32((uint32_t)(0x1191737cu));
  /* 119114b2 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114b7 call ebp */
  call_ind((uint32_t)(EBP), 0x119114b9u);
  /* 119114b9 push 0x11917368 */
  push32((uint32_t)(0x11917368u));
  /* 119114be push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114c3 call ebp */
  call_ind((uint32_t)(EBP), 0x119114c5u);
  /* 119114c5 push 0x11917354 */
  push32((uint32_t)(0x11917354u));
  /* 119114ca push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114cf call ebp */
  call_ind((uint32_t)(EBP), 0x119114d1u);
  /* 119114d1 push 0x11917340 */
  push32((uint32_t)(0x11917340u));
  /* 119114d6 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114db call ebp */
  call_ind((uint32_t)(EBP), 0x119114ddu);
  /* 119114dd push 0x1191732c */
  push32((uint32_t)(0x1191732cu));
  /* 119114e2 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114e7 call ebp */
  call_ind((uint32_t)(EBP), 0x119114e9u);
  /* 119114e9 push 0x11917318 */
  push32((uint32_t)(0x11917318u));
  /* 119114ee push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 119114f3 call ebp */
  call_ind((uint32_t)(EBP), 0x119114f5u);
  /* 119114f5 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119114f8:;
  /* 119114f8 push 0x11917304 */
  push32((uint32_t)(0x11917304u));
  /* 119114fd push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911502 call ebp */
  call_ind((uint32_t)(EBP), 0x11911504u);
  /* 11911504 push 0x119172f0 */
  push32((uint32_t)(0x119172f0u));
  /* 11911509 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 1191150e call ebp */
  call_ind((uint32_t)(EBP), 0x11911510u);
  /* 11911510 push 0x119172dc */
  push32((uint32_t)(0x119172dcu));
  /* 11911515 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 1191151a call ebp */
  call_ind((uint32_t)(EBP), 0x1191151cu);
  /* 1191151c push 0x119172c8 */
  push32((uint32_t)(0x119172c8u));
  /* 11911521 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911526 call ebp */
  call_ind((uint32_t)(EBP), 0x11911528u);
  /* 11911528 push 0x119172b4 */
  push32((uint32_t)(0x119172b4u));
  /* 1191152d push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911532 call ebp */
  call_ind((uint32_t)(EBP), 0x11911534u);
  /* 11911534 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911537:;
  /* 11911537 push 0x119172a0 */
  push32((uint32_t)(0x119172a0u));
  /* 1191153c push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911541 call ebp */
  call_ind((uint32_t)(EBP), 0x11911543u);
  /* 11911543 push 0x1191728c */
  push32((uint32_t)(0x1191728cu));
  /* 11911548 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 1191154d call ebp */
  call_ind((uint32_t)(EBP), 0x1191154fu);
  /* 1191154f push 0x11917278 */
  push32((uint32_t)(0x11917278u));
  /* 11911554 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911559 call ebp */
  call_ind((uint32_t)(EBP), 0x1191155bu);
  /* 1191155b push 0x11917264 */
  push32((uint32_t)(0x11917264u));
  /* 11911560 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911565 call ebp */
  call_ind((uint32_t)(EBP), 0x11911567u);
  /* 11911567 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1191156a:;
  /* 1191156a push 0x11917250 */
  push32((uint32_t)(0x11917250u));
  /* 1191156f push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911574 call ebp */
  call_ind((uint32_t)(EBP), 0x11911576u);
  /* 11911576 push 0x1191723c */
  push32((uint32_t)(0x1191723cu));
  /* 1191157b push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 11911580 call ebp */
  call_ind((uint32_t)(EBP), 0x11911582u);
  /* 11911582 push 0x11917228 */
  push32((uint32_t)(0x11917228u));
  /* 11911587 push 0x119170f0 */
  push32((uint32_t)(0x119170f0u));
  /* 1191158c call ebp */
  call_ind((uint32_t)(EBP), 0x1191158eu);
  /* 1191158e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911591:;
  /* 11911591 mov ebp, dword ptr [0x11916110] */
  EBP = (r32((uint32_t)(0x11916110)));
  /* 11911597 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11911599 call ebp */
  call_ind((uint32_t)(EBP), 0x1191159bu);
  /* 1191159b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1191159d call ebp */
  call_ind((uint32_t)(EBP), 0x1191159fu);
  /* 1191159f push 0x44 */
  push32((uint32_t)(0x44u));
  /* 119115a1 call ebp */
  call_ind((uint32_t)(EBP), 0x119115a3u);
  /* 119115a3 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 119115a5 call ebp */
  call_ind((uint32_t)(EBP), 0x119115a7u);
  /* 119115a7 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 119115a9 call ebp */
  call_ind((uint32_t)(EBP), 0x119115abu);
  /* 119115ab push 0x43 */
  push32((uint32_t)(0x43u));
  /* 119115ad call dword ptr [0x11916108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916108))), 0x119115b3u);
  /* 119115b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119115b6:;
  /* 119115b6 mov ebp, dword ptr [0x11916118] */
  EBP = (r32((uint32_t)(0x11916118)));
  /* 119115bc lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 119115c0 push eax */
  push32((uint32_t)(EAX));
  /* 119115c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119115c3 push 0x1191a1a0 */
  push32((uint32_t)(0x1191a1a0u));
  /* 119115c8 call ebp */
  call_ind((uint32_t)(EBP), 0x119115cau);
  /* 119115ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119115cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119115cf je 0x119115f0 */
  if (C.zf) goto L_119115f0;
  /* 119115d1 mov ax, word ptr [esp + 0x16] */
  AX = (r16((uint32_t)(ESP + 0x16)));
  /* 119115d6 cmp word ptr [esp + 0x14], ax */
  { uint32_t _a=(r16((uint32_t)(ESP + 0x14))),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119115db jae 0x119115f0 */
  if (!C.cf) goto L_119115f0;
  /* 119115dd lea ecx, [esp + 0x10] */
  ECX = ((uint32_t)(ESP + 0x10));
  /* 119115e1 mov word ptr [esp + 0x14], ax */
  w16((uint32_t)(ESP + 0x14), (AX));
  /* 119115e6 push ecx */
  push32((uint32_t)(ECX));
  /* 119115e7 call dword ptr [0x1191611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191611c))), 0x119115edu);
  /* 119115ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119115f0:;
  /* 119115f0 lea edx, [esp + 0x10] */
  EDX = ((uint32_t)(ESP + 0x10));
  /* 119115f4 push edx */
  push32((uint32_t)(EDX));
  /* 119115f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119115f7 push 0x1191a198 */
  push32((uint32_t)(0x1191a198u));
  /* 119115fc call ebp */
  call_ind((uint32_t)(EBP), 0x119115feu);
  /* 119115fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911601 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911603 je 0x11911624 */
  if (C.zf) goto L_11911624;
  /* 11911605 mov ax, word ptr [esp + 0x16] */
  AX = (r16((uint32_t)(ESP + 0x16)));
  /* 1191160a cmp word ptr [esp + 0x14], ax */
  { uint32_t _a=(r16((uint32_t)(ESP + 0x14))),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1191160f jae 0x11911624 */
  if (!C.cf) goto L_11911624;
  /* 11911611 mov word ptr [esp + 0x14], ax */
  w16((uint32_t)(ESP + 0x14), (AX));
  /* 11911616 lea eax, [esp + 0x10] */
  EAX = ((uint32_t)(ESP + 0x10));
  /* 1191161a push eax */
  push32((uint32_t)(EAX));
  /* 1191161b call dword ptr [0x1191611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191611c))), 0x11911621u);
  /* 11911621 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911624:;
  /* 11911624 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911626 call dword ptr [0x11916114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916114))), 0x1191162cu);
  /* 1191162c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191162f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911631 je 0x11911675 */
  if (C.zf) goto L_11911675;
  /* 11911633 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11911638 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191163a call ebx */
  call_ind((uint32_t)(EBX), 0x1191163cu);
  /* 1191163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191163f mov ebp, 0x1191a078 */
  EBP = (0x1191a078u);
L_11911644:;
  /* 11911644 push 0xa */
  push32((uint32_t)(0xau));
  /* 11911646 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911648 push 0x1191a1b8 */
  push32((uint32_t)(0x1191a1b8u));
  /* 1191164d push 5 */
  push32((uint32_t)(0x5u));
  /* 1191164f push 4 */
  push32((uint32_t)(0x4u));
  /* 11911651 push 0x1191a058 */
  push32((uint32_t)(0x1191a058u));
  /* 11911656 call 0x11911da0 */
  push32(0x1191165bu); f_11911da0();
  /* 1191165b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191165e mov ecx, ebp */
  ECX = (EBP);
  /* 11911660 push eax */
  push32((uint32_t)(EAX));
  /* 11911661 call 0x11911c10 */
  push32(0x11911666u); f_11911c10();
  /* 11911666 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911668 jne 0x11911675 */
  if (!C.zf) goto L_11911675;
  /* 1191166a add ebp, 0x26 */
  { uint32_t _a=(EBP),_b=(0x26u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191166d cmp ebp, 0x1191a182 */
  { uint32_t _a=(EBP),_b=(0x1191a182u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911673 jl 0x11911644 */
  if ((C.sf!=C.of)) goto L_11911644;
L_11911675:;
  /* 11911675 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911677 call dword ptr [0x11916114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916114))), 0x1191167du);
  /* 1191167d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911680 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911682 je 0x119116c6 */
  if (C.zf) goto L_119116c6;
  /* 11911684 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11911689 push 2 */
  push32((uint32_t)(0x2u));
  /* 1191168b call ebx */
  call_ind((uint32_t)(EBX), 0x1191168du);
  /* 1191168d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911690 mov ebp, 0x11919df0 */
  EBP = (0x11919df0u);
L_11911695:;
  /* 11911695 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11911697 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11911699 push 0x1191a048 */
  push32((uint32_t)(0x1191a048u));
  /* 1191169e push 4 */
  push32((uint32_t)(0x4u));
  /* 119116a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 119116a2 push 0x1191a220 */
  push32((uint32_t)(0x1191a220u));
  /* 119116a7 call 0x11911da0 */
  push32(0x119116acu); f_11911da0();
  /* 119116ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119116af mov ecx, ebp */
  ECX = (EBP);
  /* 119116b1 push eax */
  push32((uint32_t)(EAX));
  /* 119116b2 call 0x11911c10 */
  push32(0x119116b7u); f_11911c10();
  /* 119116b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119116b9 jne 0x119116c6 */
  if (!C.zf) goto L_119116c6;
  /* 119116bb add ebp, 0x26 */
  { uint32_t _a=(EBP),_b=(0x26u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 119116be cmp ebp, 0x11919efa */
  { uint32_t _a=(EBP),_b=(0x11919efau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119116c4 jl 0x11911695 */
  if ((C.sf!=C.of)) goto L_11911695;
L_119116c6:;
  /* 119116c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 119116c8 call dword ptr [0x11916114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916114))), 0x119116ceu);
  /* 119116ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119116d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119116d3 je 0x11911717 */
  if (C.zf) goto L_11911717;
  /* 119116d5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 119116da push 3 */
  push32((uint32_t)(0x3u));
  /* 119116dc call ebx */
  call_ind((uint32_t)(EBX), 0x119116deu);
  /* 119116de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119116e1 mov ebx, 0x11919f00 */
  EBX = (0x11919f00u);
L_119116e6:;
  /* 119116e6 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 119116e8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119116ea push 0x11919de8 */
  push32((uint32_t)(0x11919de8u));
  /* 119116ef push 1 */
  push32((uint32_t)(0x1u));
  /* 119116f1 push 4 */
  push32((uint32_t)(0x4u));
  /* 119116f3 push 0x1191a010 */
  push32((uint32_t)(0x1191a010u));
  /* 119116f8 call 0x11911da0 */
  push32(0x119116fdu); f_11911da0();
  /* 119116fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911700 mov ecx, ebx */
  ECX = (EBX);
  /* 11911702 push eax */
  push32((uint32_t)(EAX));
  /* 11911703 call 0x11911c10 */
  push32(0x11911708u); f_11911c10();
  /* 11911708 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1191170a jne 0x11911717 */
  if (!C.zf) goto L_11911717;
  /* 1191170c add ebx, 0x26 */
  { uint32_t _a=(EBX),_b=(0x26u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191170f cmp ebx, 0x1191a00a */
  { uint32_t _a=(EBX),_b=(0x1191a00au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911715 jl 0x119116e6 */
  if ((C.sf!=C.of)) goto L_119116e6;
L_11911717:;
  /* 11911717 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
L_11911719:;
  /* 11911719 push 0x1191a1b0 */
  push32((uint32_t)(0x1191a1b0u));
  /* 1191171e push 0x1191a1b8 */
  push32((uint32_t)(0x1191a1b8u));
  /* 11911723 push 0x1191a058 */
  push32((uint32_t)(0x1191a058u));
  /* 11911728 call 0x11911da0 */
  push32(0x1191172du); f_11911da0();
  /* 1191172d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911730 lea ecx, [ebp + 0x1191a078] */
  ECX = ((uint32_t)(EBP + 0x1191a078));
  /* 11911736 push eax */
  push32((uint32_t)(EAX));
  /* 11911737 call 0x11911d70 */
  push32(0x1191173cu); f_11911d70();
  /* 1191173c push 0x1191a218 */
  push32((uint32_t)(0x1191a218u));
  /* 11911741 push 0x1191a048 */
  push32((uint32_t)(0x1191a048u));
  /* 11911746 push 0x1191a220 */
  push32((uint32_t)(0x1191a220u));
  /* 1191174b call 0x11911da0 */
  push32(0x11911750u); f_11911da0();
  /* 11911750 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911753 lea ecx, [ebp + 0x11919df0] */
  ECX = ((uint32_t)(EBP + 0x11919df0));
  /* 11911759 push eax */
  push32((uint32_t)(EAX));
  /* 1191175a call 0x11911d70 */
  push32(0x1191175fu); f_11911d70();
  /* 1191175f push 0x1191a218 */
  push32((uint32_t)(0x1191a218u));
  /* 11911764 push 0x11919de8 */
  push32((uint32_t)(0x11919de8u));
  /* 11911769 push 0x1191a010 */
  push32((uint32_t)(0x1191a010u));
  /* 1191176e call 0x11911da0 */
  push32(0x11911773u); f_11911da0();
  /* 11911773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911776 lea ecx, [ebp + 0x11919f00] */
  ECX = ((uint32_t)(EBP + 0x11919f00));
  /* 1191177c push eax */
  push32((uint32_t)(EAX));
  /* 1191177d call 0x11911d70 */
  push32(0x11911782u); f_11911d70();
  /* 11911782 add ebp, 0x26 */
  { uint32_t _a=(EBP),_b=(0x26u),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911785 cmp ebp, 0x10a */
  { uint32_t _a=(EBP),_b=(0x10au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191178b jl 0x11911719 */
  if ((C.sf!=C.of)) goto L_11911719;
  /* 1191178d push 2 */
  push32((uint32_t)(0x2u));
  /* 1191178f call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x11911795u);
  /* 11911795 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911798 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1191179a je 0x1191195a */
  if (C.zf) goto L_1191195a;
  /* 119117a0 mov ebp, dword ptr [0x11916124] */
  EBP = (r32((uint32_t)(0x11916124)));
  /* 119117a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 119117a8 push 0x1191a1c0 */
  push32((uint32_t)(0x1191a1c0u));
  /* 119117ad call ebp */
  call_ind((uint32_t)(EBP), 0x119117afu);
  /* 119117af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119117b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119117b4 je 0x119119bc */
  if (C.zf) goto L_119119bc;
  /* 119117ba push 4 */
  push32((uint32_t)(0x4u));
  /* 119117bc push 0x1191a070 */
  push32((uint32_t)(0x1191a070u));
  /* 119117c1 call ebp */
  call_ind((uint32_t)(EBP), 0x119117c3u);
  /* 119117c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119117c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119117c8 je 0x119119bc */
  if (C.zf) goto L_119119bc;
  /* 119117ce push 4 */
  push32((uint32_t)(0x4u));
  /* 119117d0 push 0x1191a190 */
  push32((uint32_t)(0x1191a190u));
  /* 119117d5 call ebp */
  call_ind((uint32_t)(EBP), 0x119117d7u);
  /* 119117d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119117da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119117dc je 0x119119bc */
  if (C.zf) goto L_119119bc;
  /* 119117e2 mov al, byte ptr [0x11919de0] */
  AL = (r8((uint32_t)(0x11919de0)));
  /* 119117e7 mov ebp, dword ptr [0x11916128] */
  EBP = (r32((uint32_t)(0x11916128)));
  /* 119117ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119117ef jne 0x11911849 */
  if (!C.zf) goto L_11911849;
  /* 119117f1 push 0x1191a018 */
  push32((uint32_t)(0x1191a018u));
  /* 119117f6 push 0x1191a050 */
  push32((uint32_t)(0x1191a050u));
  /* 119117fb call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x11911801u);
  /* 11911801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911806 je 0x11911838 */
  if (C.zf) goto L_11911838;
  /* 11911808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191180a push 0x1191a018 */
  push32((uint32_t)(0x1191a018u));
  /* 1191180f mov byte ptr [0x11919de0], 1 */
  w8((uint32_t)(0x11919de0), (0x1u));
  /* 11911816 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x1191181cu);
  /* 1191181c push 0 */
  push32((uint32_t)(0x0u));
  /* 1191181e push 0 */
  push32((uint32_t)(0x0u));
  /* 11911820 push 0x1191a030 */
  push32((uint32_t)(0x1191a030u));
  /* 11911825 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911827 call ebp */
  call_ind((uint32_t)(EBP), 0x11911829u);
  /* 11911829 mov ebx, dword ptr [0x11916100] */
  EBX = (r32((uint32_t)(0x11916100)));
  /* 1191182f push 4 */
  push32((uint32_t)(0x4u));
  /* 11911831 call ebx */
  call_ind((uint32_t)(EBX), 0x11911833u);
  /* 11911833 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911836 jmp 0x1191183e */
  goto L_1191183e;
L_11911838:;
  /* 11911838 mov ebx, dword ptr [0x11916100] */
  EBX = (r32((uint32_t)(0x11916100)));
L_1191183e:;
  /* 1191183e mov al, byte ptr [0x11919de0] */
  AL = (r8((uint32_t)(0x11919de0)));
  /* 11911843 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911845 je 0x119118ac */
  if (C.zf) goto L_119118ac;
  /* 11911847 jmp 0x1191184f */
  goto L_1191184f;
L_11911849:;
  /* 11911849 mov ebx, dword ptr [0x11916100] */
  EBX = (r32((uint32_t)(0x11916100)));
L_1191184f:;
  /* 1191184f push 0x1191a018 */
  push32((uint32_t)(0x1191a018u));
  /* 11911854 push 0x1191a030 */
  push32((uint32_t)(0x1191a030u));
  /* 11911859 call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x1191185fu);
  /* 1191185f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911864 je 0x119118ac */
  if (C.zf) goto L_119118ac;
  /* 11911866 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911868 mov byte ptr [0x11919de0], 0 */
  w8((uint32_t)(0x11919de0), (0x0u));
  /* 1191186f call esi */
  call_ind((uint32_t)(ESI), 0x11911871u);
  /* 11911871 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11911874 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911877 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1191187a lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1191187d shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 11911880 push ecx */
  push32((uint32_t)(ECX));
  /* 11911881 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911883 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911885 call dword ptr [0x11916130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916130))), 0x1191188bu);
  /* 1191188b push 0 */
  push32((uint32_t)(0x0u));
  /* 1191188d push 0x1191a018 */
  push32((uint32_t)(0x1191a018u));
  /* 11911892 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911898u);
  /* 11911898 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191189a push 0 */
  push32((uint32_t)(0x0u));
  /* 1191189c push 0x1191a050 */
  push32((uint32_t)(0x1191a050u));
  /* 119118a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 119118a3 call ebp */
  call_ind((uint32_t)(EBP), 0x119118a5u);
  /* 119118a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 119118a7 call ebx */
  call_ind((uint32_t)(EBX), 0x119118a9u);
  /* 119118a9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119118ac:;
  /* 119118ac mov al, byte ptr [0x1191a040] */
  AL = (r8((uint32_t)(0x1191a040)));
  /* 119118b1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119118b3 jne 0x119118fd */
  if (!C.zf) goto L_119118fd;
  /* 119118b5 push 0x1191a020 */
  push32((uint32_t)(0x1191a020u));
  /* 119118ba push 0x1191a050 */
  push32((uint32_t)(0x1191a050u));
  /* 119118bf call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x119118c5u);
  /* 119118c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119118c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119118ca je 0x119118f4 */
  if (C.zf) goto L_119118f4;
  /* 119118cc push 0 */
  push32((uint32_t)(0x0u));
  /* 119118ce push 0x1191a020 */
  push32((uint32_t)(0x1191a020u));
  /* 119118d3 mov byte ptr [0x1191a040], 1 */
  w8((uint32_t)(0x1191a040), (0x1u));
  /* 119118da call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x119118e0u);
  /* 119118e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119118e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119118e4 push 0x1191a030 */
  push32((uint32_t)(0x1191a030u));
  /* 119118e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 119118eb call ebp */
  call_ind((uint32_t)(EBP), 0x119118edu);
  /* 119118ed push 4 */
  push32((uint32_t)(0x4u));
  /* 119118ef call ebx */
  call_ind((uint32_t)(EBX), 0x119118f1u);
  /* 119118f1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119118f4:;
  /* 119118f4 mov al, byte ptr [0x1191a040] */
  AL = (r8((uint32_t)(0x1191a040)));
  /* 119118f9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119118fb je 0x1191195a */
  if (C.zf) goto L_1191195a;
L_119118fd:;
  /* 119118fd push 0x1191a020 */
  push32((uint32_t)(0x1191a020u));
  /* 11911902 push 0x1191a030 */
  push32((uint32_t)(0x1191a030u));
  /* 11911907 call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x1191190du);
  /* 1191190d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911912 je 0x1191195a */
  if (C.zf) goto L_1191195a;
  /* 11911914 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911916 mov byte ptr [0x1191a040], 0 */
  w8((uint32_t)(0x1191a040), (0x0u));
  /* 1191191d call esi */
  call_ind((uint32_t)(ESI), 0x1191191fu);
  /* 1191191f add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11911922 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911925 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911928 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 1191192b shl edx, 3 */
  EDX = (sh_shl((uint32_t)(EDX), (0x3u)&0x1f, 32));
  /* 1191192e push edx */
  push32((uint32_t)(EDX));
  /* 1191192f push 1 */
  push32((uint32_t)(0x1u));
  /* 11911931 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911933 call dword ptr [0x11916130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916130))), 0x11911939u);
  /* 11911939 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191193b push 0x1191a020 */
  push32((uint32_t)(0x1191a020u));
  /* 11911940 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911946u);
  /* 11911946 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191194a push 0x1191a050 */
  push32((uint32_t)(0x1191a050u));
  /* 1191194f push 4 */
  push32((uint32_t)(0x4u));
  /* 11911951 call ebp */
  call_ind((uint32_t)(EBP), 0x11911953u);
  /* 11911953 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911955 call ebx */
  call_ind((uint32_t)(EBX), 0x11911957u);
  /* 11911957 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1191195a:;
  /* 1191195a mov ebx, dword ptr [0x119160e4] */
  EBX = (r32((uint32_t)(0x119160e4)));
  /* 11911960 mov ebp, dword ptr [0x11916124] */
  EBP = (r32((uint32_t)(0x11916124)));
L_11911966:;
  /* 11911966 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911968 call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x1191196eu);
  /* 1191196e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911971 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911973 je 0x119119cd */
  if (C.zf) goto L_119119cd;
  /* 11911975 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911977 push 0x1191a058 */
  push32((uint32_t)(0x1191a058u));
  /* 1191197c call ebp */
  call_ind((uint32_t)(EBP), 0x1191197eu);
  /* 1191197e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911983 jne 0x119119cd */
  if (!C.zf) goto L_119119cd;
  /* 11911985 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911987 push 0x1191a220 */
  push32((uint32_t)(0x1191a220u));
  /* 1191198c call ebp */
  call_ind((uint32_t)(EBP), 0x1191198eu);
  /* 1191198e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911993 jne 0x119119cd */
  if (!C.zf) goto L_119119cd;
  /* 11911995 push eax */
  push32((uint32_t)(EAX));
  /* 11911996 push 3 */
  push32((uint32_t)(0x3u));
  /* 11911998 call ebx */
  call_ind((uint32_t)(EBX), 0x1191199au);
  /* 1191199a mov ebp, dword ptr [0x119160fc] */
  EBP = (r32((uint32_t)(0x119160fc)));
  /* 119119a0 push 0x1191721c */
  push32((uint32_t)(0x1191721cu));
  /* 119119a5 call ebp */
  call_ind((uint32_t)(EBP), 0x119119a7u);
  /* 119119a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 119119a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 119119ab push 4 */
  push32((uint32_t)(0x4u));
  /* 119119ad call edi */
  call_ind((uint32_t)(EDI), 0x119119afu);
  /* 119119af push 0 */
  push32((uint32_t)(0x0u));
  /* 119119b1 push 4 */
  push32((uint32_t)(0x4u));
  /* 119119b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 119119b5 call edi */
  call_ind((uint32_t)(EDI), 0x119119b7u);
  /* 119119b7 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119119ba jmp 0x119119d3 */
  goto L_119119d3;
L_119119bc:;
  /* 119119bc mov ebx, dword ptr [0x119160e4] */
  EBX = (r32((uint32_t)(0x119160e4)));
  /* 119119c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 119119c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 119119c6 call ebx */
  call_ind((uint32_t)(EBX), 0x119119c8u);
  /* 119119c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119119cb jmp 0x11911966 */
  goto L_11911966;
L_119119cd:;
  /* 119119cd mov ebp, dword ptr [0x119160fc] */
  EBP = (r32((uint32_t)(0x119160fc)));
L_119119d3:;
  /* 119119d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 119119d5 call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x119119dbu);
  /* 119119db mov edi, dword ptr [0x11916134] */
  EDI = (r32((uint32_t)(0x11916134)));
  /* 119119e1 mov esi, dword ptr [0x1191612c] */
  ESI = (r32((uint32_t)(0x1191612c)));
  /* 119119e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119119ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 119119ec je 0x11911a32 */
  if (C.zf) goto L_11911a32;
  /* 119119ee push 0x1191a028 */
  push32((uint32_t)(0x1191a028u));
  /* 119119f3 call edi */
  call_ind((uint32_t)(EDI), 0x119119f5u);
  /* 119119f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119119f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119119fa jne 0x11911a32 */
  if (!C.zf) goto L_11911a32;
  /* 119119fc push eax */
  push32((uint32_t)(EAX));
  /* 119119fd push 0x1191a1f0 */
  push32((uint32_t)(0x1191a1f0u));
  /* 11911a02 call dword ptr [0x1191613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191613c))), 0x11911a08u);
  /* 11911a08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911a0d je 0x11911a32 */
  if (C.zf) goto L_11911a32;
  /* 11911a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a11 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911a13 call ebx */
  call_ind((uint32_t)(EBX), 0x11911a15u);
  /* 11911a15 push 0x11917210 */
  push32((uint32_t)(0x11917210u));
  /* 11911a1a call ebp */
  call_ind((uint32_t)(EBP), 0x11911a1cu);
  /* 11911a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a1e push 0x1191a060 */
  push32((uint32_t)(0x1191a060u));
  /* 11911a23 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911a29u);
  /* 11911a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a2b push 4 */
  push32((uint32_t)(0x4u));
  /* 11911a2d call esi */
  call_ind((uint32_t)(ESI), 0x11911a2fu);
  /* 11911a2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911a32:;
  /* 11911a32 push 5 */
  push32((uint32_t)(0x5u));
  /* 11911a34 call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x11911a3au);
  /* 11911a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911a3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911a3f je 0x11911a86 */
  if (C.zf) goto L_11911a86;
  /* 11911a41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a43 push 0x1191a1a8 */
  push32((uint32_t)(0x1191a1a8u));
  /* 11911a48 call dword ptr [0x1191613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191613c))), 0x11911a4eu);
  /* 11911a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911a53 je 0x11911a86 */
  if (C.zf) goto L_11911a86;
  /* 11911a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a57 push 5 */
  push32((uint32_t)(0x5u));
  /* 11911a59 call ebx */
  call_ind((uint32_t)(EBX), 0x11911a5bu);
  /* 11911a5b push 0x1191a038 */
  push32((uint32_t)(0x1191a038u));
  /* 11911a60 call edi */
  call_ind((uint32_t)(EDI), 0x11911a62u);
  /* 11911a62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911a67 je 0x11911a86 */
  if (C.zf) goto L_11911a86;
  /* 11911a69 push 0x11917204 */
  push32((uint32_t)(0x11917204u));
  /* 11911a6e call ebp */
  call_ind((uint32_t)(EBP), 0x11911a70u);
  /* 11911a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a72 push 0x1191a038 */
  push32((uint32_t)(0x1191a038u));
  /* 11911a77 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911a7du);
  /* 11911a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11911a81 call esi */
  call_ind((uint32_t)(ESI), 0x11911a83u);
  /* 11911a83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911a86:;
  /* 11911a86 push 6 */
  push32((uint32_t)(0x6u));
  /* 11911a88 call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x11911a8eu);
  /* 11911a8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911a91 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911a93 je 0x11911ada */
  if (C.zf) goto L_11911ada;
  /* 11911a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911a97 push 0x1191a188 */
  push32((uint32_t)(0x1191a188u));
  /* 11911a9c call dword ptr [0x1191613c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191613c))), 0x11911aa2u);
  /* 11911aa2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911aa7 je 0x11911ada */
  if (C.zf) goto L_11911ada;
  /* 11911aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911aab push 6 */
  push32((uint32_t)(0x6u));
  /* 11911aad call ebx */
  call_ind((uint32_t)(EBX), 0x11911aafu);
  /* 11911aaf push 0x1191a210 */
  push32((uint32_t)(0x1191a210u));
  /* 11911ab4 call edi */
  call_ind((uint32_t)(EDI), 0x11911ab6u);
  /* 11911ab6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911abb je 0x11911ada */
  if (C.zf) goto L_11911ada;
  /* 11911abd push 0x119171f8 */
  push32((uint32_t)(0x119171f8u));
  /* 11911ac2 call ebp */
  call_ind((uint32_t)(EBP), 0x11911ac4u);
  /* 11911ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911ac6 push 0x1191a210 */
  push32((uint32_t)(0x1191a210u));
  /* 11911acb call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911ad1u);
  /* 11911ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911ad5 call esi */
  call_ind((uint32_t)(ESI), 0x11911ad7u);
  /* 11911ad7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911ada:;
  /* 11911ada push 7 */
  push32((uint32_t)(0x7u));
  /* 11911adc call dword ptr [0x119160e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e0))), 0x11911ae2u);
  /* 11911ae2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911ae5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911ae7 je 0x11911b47 */
  if (C.zf) goto L_11911b47;
  /* 11911ae9 mov esi, dword ptr [0x11916124] */
  ESI = (r32((uint32_t)(0x11916124)));
  /* 11911aef push 4 */
  push32((uint32_t)(0x4u));
  /* 11911af1 push 0x1191a058 */
  push32((uint32_t)(0x1191a058u));
  /* 11911af6 call esi */
  call_ind((uint32_t)(ESI), 0x11911af8u);
  /* 11911af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911afb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911afd jne 0x11911b47 */
  if (!C.zf) goto L_11911b47;
  /* 11911aff push 4 */
  push32((uint32_t)(0x4u));
  /* 11911b01 push 0x1191a220 */
  push32((uint32_t)(0x1191a220u));
  /* 11911b06 call esi */
  call_ind((uint32_t)(ESI), 0x11911b08u);
  /* 11911b08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911b0d jne 0x11911b47 */
  if (!C.zf) goto L_11911b47;
  /* 11911b0f push 4 */
  push32((uint32_t)(0x4u));
  /* 11911b11 push 0x1191a010 */
  push32((uint32_t)(0x1191a010u));
  /* 11911b16 call esi */
  call_ind((uint32_t)(ESI), 0x11911b18u);
  /* 11911b18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911b1d jne 0x11911b47 */
  if (!C.zf) goto L_11911b47;
  /* 11911b1f push 4 */
  push32((uint32_t)(0x4u));
  /* 11911b21 push 0x1191a190 */
  push32((uint32_t)(0x1191a190u));
  /* 11911b26 call esi */
  call_ind((uint32_t)(ESI), 0x11911b28u);
  /* 11911b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911b2d jne 0x11911b47 */
  if (!C.zf) goto L_11911b47;
  /* 11911b2f push eax */
  push32((uint32_t)(EAX));
  /* 11911b30 push 7 */
  push32((uint32_t)(0x7u));
  /* 11911b32 call ebx */
  call_ind((uint32_t)(EBX), 0x11911b34u);
  /* 11911b34 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11911b36 call dword ptr [0x11916108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916108))), 0x11911b3cu);
  /* 11911b3c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11911b3e call dword ptr [0x11916110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916110))), 0x11911b44u);
  /* 11911b44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911b47:;
  /* 11911b47 mov esi, dword ptr [0x11916140] */
  ESI = (r32((uint32_t)(0x11916140)));
  /* 11911b4d push 3 */
  push32((uint32_t)(0x3u));
  /* 11911b4f call esi */
  call_ind((uint32_t)(ESI), 0x11911b51u);
  /* 11911b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b54 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911b56 je 0x11911b68 */
  if (C.zf) goto L_11911b68;
  /* 11911b58 push 0x119171ec */
  push32((uint32_t)(0x119171ecu));
  /* 11911b5d call ebp */
  call_ind((uint32_t)(EBP), 0x11911b5fu);
  /* 11911b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b62 call dword ptr [0x11916138] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916138))), 0x11911b68u);
L_11911b68:;
  /* 11911b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911b6a call esi */
  call_ind((uint32_t)(ESI), 0x11911b6cu);
  /* 11911b6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911b71 je 0x11911b83 */
  if (C.zf) goto L_11911b83;
  /* 11911b73 push 0x119171e0 */
  push32((uint32_t)(0x119171e0u));
  /* 11911b78 call ebp */
  call_ind((uint32_t)(EBP), 0x11911b7au);
  /* 11911b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b7d call dword ptr [0x11916148] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916148))), 0x11911b83u);
L_11911b83:;
  /* 11911b83 pop edi */
  EDI = (pop32());
  /* 11911b84 pop esi */
  ESI = (pop32());
  /* 11911b85 pop ebp */
  EBP = (pop32());
  /* 11911b86 pop ebx */
  EBX = (pop32());
  /* 11911b87 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911b8a ret  */
  ESPCHK(0x11911260u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ba0 @ 0x11911ba0 (98 bytes, 41 insns) */
void f_11911ba0(void) {
  FTRACE(0x11911ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911ba0 push esi */
  push32((uint32_t)(ESI));
  /* 11911ba1 mov esi, ecx */
  ESI = (ECX);
  /* 11911ba3 push edi */
  push32((uint32_t)(EDI));
  /* 11911ba4 lea edi, [esi + 0x10] */
  EDI = ((uint32_t)(ESI + 0x10));
  /* 11911ba7 push edi */
  push32((uint32_t)(EDI));
  /* 11911ba8 call dword ptr [0x119160d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160d4))), 0x11911baeu);
  /* 11911bae push 8 */
  push32((uint32_t)(0x8u));
  /* 11911bb0 push edi */
  push32((uint32_t)(EDI));
  /* 11911bb1 mov edi, dword ptr [0x11916154] */
  EDI = (r32((uint32_t)(0x11916154)));
  /* 11911bb7 call edi */
  call_ind((uint32_t)(EDI), 0x11911bb9u);
  /* 11911bb9 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11911bbc push 0x119173c8 */
  push32((uint32_t)(0x119173c8u));
  /* 11911bc1 push eax */
  push32((uint32_t)(EAX));
  /* 11911bc2 call dword ptr [0x119160cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160cc))), 0x11911bc8u);
  /* 11911bc8 push 0x119173bc */
  push32((uint32_t)(0x119173bcu));
  /* 11911bcd push esi */
  push32((uint32_t)(ESI));
  /* 11911bce call dword ptr [0x119160dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160dc))), 0x11911bd4u);
  /* 11911bd4 lea ecx, [esi + 0x1c] */
  ECX = ((uint32_t)(ESI + 0x1c));
  /* 11911bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11911bda call edi */
  call_ind((uint32_t)(EDI), 0x11911bdcu);
  /* 11911bdc lea edx, [esi + 0x18] */
  EDX = ((uint32_t)(ESI + 0x18));
  /* 11911bdf push 4 */
  push32((uint32_t)(0x4u));
  /* 11911be1 push edx */
  push32((uint32_t)(EDX));
  /* 11911be2 call edi */
  call_ind((uint32_t)(EDI), 0x11911be4u);
  /* 11911be4 lea eax, [esi + 0x1e] */
  EAX = ((uint32_t)(ESI + 0x1e));
  /* 11911be7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911be9 push eax */
  push32((uint32_t)(EAX));
  /* 11911bea call edi */
  call_ind((uint32_t)(EDI), 0x11911becu);
  /* 11911bec lea ecx, [esi + 0x22] */
  ECX = ((uint32_t)(ESI + 0x22));
  /* 11911bef push 4 */
  push32((uint32_t)(0x4u));
  /* 11911bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 11911bf2 call edi */
  call_ind((uint32_t)(EDI), 0x11911bf4u);
  /* 11911bf4 add esi, 0x1d */
  { uint32_t _a=(ESI),_b=(0x1du),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11911bf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911bf9 push esi */
  push32((uint32_t)(ESI));
  /* 11911bfa call edi */
  call_ind((uint32_t)(EDI), 0x11911bfcu);
  /* 11911bfc add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911bff pop edi */
  EDI = (pop32());
  /* 11911c00 pop esi */
  ESI = (pop32());
  /* 11911c01 ret  */
  ESPCHK(0x11911ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c10 @ 0x11911c10 (98 bytes, 39 insns) */
void f_11911c10(void) {
  FTRACE(0x11911c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911c10 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 11911c14 push esi */
  push32((uint32_t)(ESI));
  /* 11911c15 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911c17 push edi */
  push32((uint32_t)(EDI));
  /* 11911c18 mov esi, ecx */
  ESI = (ECX);
  /* 11911c1a je 0x11911c6b */
  if (C.zf) goto L_11911c6b;
  /* 11911c1c lea edi, [esi + 0x10] */
  EDI = ((uint32_t)(ESI + 0x10));
  /* 11911c1f push edi */
  push32((uint32_t)(EDI));
  /* 11911c20 call dword ptr [0x11916134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916134))), 0x11911c26u);
  /* 11911c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911c2b jne 0x11911c6b */
  if (!C.zf) goto L_11911c6b;
  /* 11911c2d mov edx, dword ptr [esp + 0x1c] */
  EDX = (r32((uint32_t)(ESP + 0x1c)));
  /* 11911c31 mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11911c35 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11911c39 mov dword ptr [esi + 0x1e], edx */
  w32((uint32_t)(ESI + 0x1e), (EDX));
  /* 11911c3c mov edx, dword ptr [esp + 0x18] */
  EDX = (r32((uint32_t)(ESP + 0x18)));
  /* 11911c40 mov dword ptr [esi + 0x18], ecx */
  w32((uint32_t)(ESI + 0x18), (ECX));
  /* 11911c43 mov ecx, dword ptr [esp + 0x20] */
  ECX = (r32((uint32_t)(ESP + 0x20)));
  /* 11911c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911c49 push edx */
  push32((uint32_t)(EDX));
  /* 11911c4a push eax */
  push32((uint32_t)(EAX));
  /* 11911c4b mov byte ptr [esi + 0x1d], al */
  w8((uint32_t)(ESI + 0x1d), (AL));
  /* 11911c4e mov byte ptr [esi + 0x1c], 0 */
  w8((uint32_t)(ESI + 0x1c), (0x0u));
  /* 11911c52 mov dword ptr [esi + 0x22], ecx */
  w32((uint32_t)(ESI + 0x22), (ECX));
  /* 11911c55 push esi */
  push32((uint32_t)(ESI));
  /* 11911c56 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11911c59 push esi */
  push32((uint32_t)(ESI));
  /* 11911c5a push edi */
  push32((uint32_t)(EDI));
  /* 11911c5b call dword ptr [0x119160d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160d0))), 0x11911c61u);
  /* 11911c61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911c64 mov al, 1 */
  AL = (0x1u);
  /* 11911c66 pop edi */
  EDI = (pop32());
  /* 11911c67 pop esi */
  ESI = (pop32());
  /* 11911c68 ret 0x18 */
  ESPCHK(0x11911c10u, _esp0);
  ESP += 28; return;
L_11911c6b:;
  /* 11911c6b pop edi */
  EDI = (pop32());
  /* 11911c6c xor al, al */
  { uint32_t _r=(AL)^(AL); AL = (_r); fl_logic(_r,8); }
  /* 11911c6e pop esi */
  ESI = (pop32());
  /* 11911c6f ret 0x18 */
  ESPCHK(0x11911c10u, _esp0);
  ESP += 28; return;
}

/* FUN_10001c80 @ 0x11911c80 (67 bytes, 27 insns) */
void f_11911c80(void) {
  FTRACE(0x11911c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911c80 push esi */
  push32((uint32_t)(ESI));
  /* 11911c81 mov esi, ecx */
  ESI = (ECX);
  /* 11911c83 push edi */
  push32((uint32_t)(EDI));
  /* 11911c84 lea edi, [esi + 0x10] */
  EDI = ((uint32_t)(ESI + 0x10));
  /* 11911c87 push edi */
  push32((uint32_t)(EDI));
  /* 11911c88 call dword ptr [0x11916134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916134))), 0x11911c8eu);
  /* 11911c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911c91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911c93 je 0x11911cbe */
  if (C.zf) goto L_11911cbe;
  /* 11911c95 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11911c99 push edi */
  push32((uint32_t)(EDI));
  /* 11911c9a push eax */
  push32((uint32_t)(EAX));
  /* 11911c9b call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x11911ca1u);
  /* 11911ca1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911ca6 je 0x11911cbe */
  if (C.zf) goto L_11911cbe;
  /* 11911ca8 mov al, byte ptr [esi + 0x1c] */
  AL = (r8((uint32_t)(ESI + 0x1c)));
  /* 11911cab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911cad jne 0x11911cb3 */
  if (!C.zf) goto L_11911cb3;
  /* 11911caf mov byte ptr [esi + 0x1c], 1 */
  w8((uint32_t)(ESI + 0x1c), (0x1u));
L_11911cb3:;
  /* 11911cb3 mov ecx, dword ptr [esi + 0x1e] */
  ECX = (r32((uint32_t)(ESI + 0x1e)));
  /* 11911cb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11911cb7 mov ecx, esi */
  ECX = (ESI);
  /* 11911cb9 call 0x11911d40 */
  push32(0x11911cbeu); f_11911d40();
L_11911cbe:;
  /* 11911cbe pop edi */
  EDI = (pop32());
  /* 11911cbf pop esi */
  ESI = (pop32());
  /* 11911cc0 ret 4 */
  ESPCHK(0x11911c80u, _esp0);
  ESP += 8; return;
}

/* FUN_10001cd0 @ 0x11911cd0 (107 bytes, 41 insns) */
void f_11911cd0(void) {
  FTRACE(0x11911cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911cd0 push esi */
  push32((uint32_t)(ESI));
  /* 11911cd1 mov esi, ecx */
  ESI = (ECX);
  /* 11911cd3 push edi */
  push32((uint32_t)(EDI));
  /* 11911cd4 lea edi, [esi + 0x10] */
  EDI = ((uint32_t)(ESI + 0x10));
  /* 11911cd7 push edi */
  push32((uint32_t)(EDI));
  /* 11911cd8 call dword ptr [0x11916134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916134))), 0x11911cdeu);
  /* 11911cde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911ce3 je 0x11911d36 */
  if (C.zf) goto L_11911d36;
  /* 11911ce5 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11911ce9 push edi */
  push32((uint32_t)(EDI));
  /* 11911cea push eax */
  push32((uint32_t)(EAX));
  /* 11911ceb call dword ptr [0x11916120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916120))), 0x11911cf1u);
  /* 11911cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911cf6 je 0x11911d36 */
  if (C.zf) goto L_11911d36;
  /* 11911cf8 mov al, byte ptr [esi + 0x1c] */
  AL = (r8((uint32_t)(ESI + 0x1c)));
  /* 11911cfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911cfd je 0x11911d2b */
  if (C.zf) goto L_11911d2b;
  /* 11911cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11911d01 call dword ptr [0x119160e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160e8))), 0x11911d07u);
  /* 11911d07 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11911d0a mov dl, byte ptr [esi + 0x18] */
  DL = (r8((uint32_t)(ESI + 0x18)));
  /* 11911d0d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11911d10 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11911d13 mov al, byte ptr [esi + 0x1d] */
  AL = (r8((uint32_t)(ESI + 0x1d)));
  /* 11911d16 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11911d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11911d1a dec al */
  { uint32_t _r=(AL)-1; AL = (_r); fl_dec(_r,8); }
  /* 11911d1c push edx */
  push32((uint32_t)(EDX));
  /* 11911d1d push eax */
  push32((uint32_t)(EAX));
  /* 11911d1e call dword ptr [0x11916130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916130))), 0x11911d24u);
  /* 11911d24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911d27 mov byte ptr [esi + 0x1c], 0 */
  w8((uint32_t)(ESI + 0x1c), (0x0u));
L_11911d2b:;
  /* 11911d2b mov ecx, dword ptr [esi + 0x22] */
  ECX = (r32((uint32_t)(ESI + 0x22)));
  /* 11911d2e push ecx */
  push32((uint32_t)(ECX));
  /* 11911d2f mov ecx, esi */
  ECX = (ESI);
  /* 11911d31 call 0x11911d40 */
  push32(0x11911d36u); f_11911d40();
L_11911d36:;
  /* 11911d36 pop edi */
  EDI = (pop32());
  /* 11911d37 pop esi */
  ESI = (pop32());
  /* 11911d38 ret 4 */
  ESPCHK(0x11911cd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d40 @ 0x11911d40 (46 bytes, 17 insns) */
void f_11911d40(void) {
  FTRACE(0x11911d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911d40 push esi */
  push32((uint32_t)(ESI));
  /* 11911d41 mov esi, ecx */
  ESI = (ECX);
  /* 11911d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911d45 lea eax, [esi + 0x10] */
  EAX = ((uint32_t)(ESI + 0x10));
  /* 11911d48 push eax */
  push32((uint32_t)(EAX));
  /* 11911d49 call dword ptr [0x119160f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160f8))), 0x11911d4fu);
  /* 11911d4f mov cl, byte ptr [esi + 0x1d] */
  CL = (r8((uint32_t)(ESI + 0x1d)));
  /* 11911d52 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11911d56 push ecx */
  push32((uint32_t)(ECX));
  /* 11911d57 push edx */
  push32((uint32_t)(EDX));
  /* 11911d58 call 0x11911dc0 */
  push32(0x11911d5du); f_11911dc0();
  /* 11911d5d mov al, byte ptr [esi + 0x1d] */
  AL = (r8((uint32_t)(ESI + 0x1d)));
  /* 11911d60 push eax */
  push32((uint32_t)(EAX));
  /* 11911d61 call dword ptr [0x11916100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916100))), 0x11911d67u);
  /* 11911d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911d6a pop esi */
  ESI = (pop32());
  /* 11911d6b ret 4 */
  ESPCHK(0x11911d40u, _esp0);
  ESP += 8; return;
}

/* FUN_10001d70 @ 0x11911d70 (37 bytes, 14 insns) */
void f_11911d70(void) {
  FTRACE(0x11911d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911d70 mov al, byte ptr [esp + 4] */
  AL = (r8((uint32_t)(ESP + 0x4)));
  /* 11911d74 push esi */
  push32((uint32_t)(ESI));
  /* 11911d75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11911d77 mov esi, ecx */
  ESI = (ECX);
  /* 11911d79 je 0x11911d91 */
  if (C.zf) goto L_11911d91;
  /* 11911d7b mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11911d7f push eax */
  push32((uint32_t)(EAX));
  /* 11911d80 call 0x11911c80 */
  push32(0x11911d85u); f_11911c80();
  /* 11911d85 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11911d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11911d8a mov ecx, esi */
  ECX = (ESI);
  /* 11911d8c call 0x11911cd0 */
  push32(0x11911d91u); f_11911cd0();
L_11911d91:;
  /* 11911d91 pop esi */
  ESI = (pop32());
  /* 11911d92 ret 0xc */
  ESPCHK(0x11911d70u, _esp0);
  ESP += 16; return;
}

/* FUN_10001da0 @ 0x11911da0 (22 bytes, 8 insns) */
void f_11911da0(void) {
  FTRACE(0x11911da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911da0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11911da4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11911da6 push eax */
  push32((uint32_t)(EAX));
  /* 11911da7 call dword ptr [0x11916124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916124))), 0x11911dadu);
  /* 11911dad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911db0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911db2 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11911db5 ret  */
  ESPCHK(0x11911da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dc0 @ 0x11911dc0 (306 bytes, 113 insns) [1 switch table(s)] */
void f_11911dc0(void) {
  FTRACE(0x11911dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911dc0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11911dc4 push esi */
  push32((uint32_t)(ESI));
  /* 11911dc5 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11911dc6 push edi */
  push32((uint32_t)(EDI));
  /* 11911dc7 cmp eax, 0x29 */
  { uint32_t _a=(EAX),_b=(0x29u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911dca ja 0x11911eef */
  if ((!C.cf&&!C.zf)) goto L_11911eef;
  /* 11911dd0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11911dd2 mov cl, byte ptr [eax + 0x11911f10] */
  CL = (r8((uint32_t)(EAX + 0x11911f10)));
  /* 11911dd8 jmp dword ptr [ecx*4 + 0x11911ef4] */
  switch (ECX) {
    case 0: goto L_11911ddf;
    case 1: goto L_11911df9;
    case 2: goto L_11911e16;
    case 3: goto L_11911e87;
    case 4: goto L_11911e53;
    case 5: goto L_11911ebb;
    case 6: goto L_11911eef;
    default: x86_unimpl("switch@0x11911dd8 out of table"); return;
  }
L_11911ddf:;
  /* 11911ddf mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11911de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911de7 push 0x1191a1b0 */
  push32((uint32_t)(0x1191a1b0u));
  /* 11911dec push edx */
  push32((uint32_t)(EDX));
  /* 11911ded call dword ptr [0x11916128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916128))), 0x11911df3u);
  /* 11911df3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911df6 pop edi */
  EDI = (pop32());
  /* 11911df7 pop esi */
  ESI = (pop32());
  /* 11911df8 ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
L_11911df9:;
  /* 11911df9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11911dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11911dff push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11911e04 push 0x1191a1b8 */
  push32((uint32_t)(0x1191a1b8u));
  /* 11911e09 push eax */
  push32((uint32_t)(EAX));
  /* 11911e0a call dword ptr [0x11916128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916128))), 0x11911e10u);
  /* 11911e10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911e13 pop edi */
  EDI = (pop32());
  /* 11911e14 pop esi */
  ESI = (pop32());
  /* 11911e15 ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
L_11911e16:;
  /* 11911e16 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11911e1a mov edi, dword ptr [0x11916128] */
  EDI = (r32((uint32_t)(0x11916128)));
  /* 11911e20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911e22 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 11911e27 push 0x1191a1d0 */
  push32((uint32_t)(0x1191a1d0u));
  /* 11911e2c push esi */
  push32((uint32_t)(ESI));
  /* 11911e2d call edi */
  call_ind((uint32_t)(EDI), 0x11911e2fu);
  /* 11911e2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11911e31 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11911e36 push 0x1191a1d8 */
  push32((uint32_t)(0x1191a1d8u));
  /* 11911e3b push esi */
  push32((uint32_t)(ESI));
  /* 11911e3c call edi */
  call_ind((uint32_t)(EDI), 0x11911e3eu);
  /* 11911e3e push 2 */
  push32((uint32_t)(0x2u));
  /* 11911e40 push 0xe0 */
  push32((uint32_t)(0xe0u));
  /* 11911e45 push 0x11919de8 */
  push32((uint32_t)(0x11919de8u));
  /* 11911e4a push esi */
  push32((uint32_t)(ESI));
  /* 11911e4b call edi */
  call_ind((uint32_t)(EDI), 0x11911e4du);
  /* 11911e4d add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911e50 pop edi */
  EDI = (pop32());
  /* 11911e51 pop esi */
  ESI = (pop32());
  /* 11911e52 ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
L_11911e53:;
  /* 11911e53 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11911e57 mov edi, dword ptr [0x11916128] */
  EDI = (r32((uint32_t)(0x11916128)));
  /* 11911e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11911e5f push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11911e61 push 0x1191a1d8 */
  push32((uint32_t)(0x1191a1d8u));
  /* 11911e66 push esi */
  push32((uint32_t)(ESI));
  /* 11911e67 call edi */
  call_ind((uint32_t)(EDI), 0x11911e69u);
  /* 11911e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911e6b push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11911e6d push 0x1191a1d0 */
  push32((uint32_t)(0x1191a1d0u));
  /* 11911e72 push esi */
  push32((uint32_t)(ESI));
  /* 11911e73 call edi */
  call_ind((uint32_t)(EDI), 0x11911e75u);
  /* 11911e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911e77 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11911e79 push 0x1191a218 */
  push32((uint32_t)(0x1191a218u));
  /* 11911e7e push esi */
  push32((uint32_t)(ESI));
  /* 11911e7f call edi */
  call_ind((uint32_t)(EDI), 0x11911e81u);
  /* 11911e81 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911e84 pop edi */
  EDI = (pop32());
  /* 11911e85 pop esi */
  ESI = (pop32());
  /* 11911e86 ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
L_11911e87:;
  /* 11911e87 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11911e8b mov edi, dword ptr [0x11916128] */
  EDI = (r32((uint32_t)(0x11916128)));
  /* 11911e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911e93 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11911e95 push 0x1191a1e0 */
  push32((uint32_t)(0x1191a1e0u));
  /* 11911e9a push esi */
  push32((uint32_t)(ESI));
  /* 11911e9b call edi */
  call_ind((uint32_t)(EDI), 0x11911e9du);
  /* 11911e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11911e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11911ea1 push 0x1191a1e8 */
  push32((uint32_t)(0x1191a1e8u));
  /* 11911ea6 push esi */
  push32((uint32_t)(ESI));
  /* 11911ea7 call edi */
  call_ind((uint32_t)(EDI), 0x11911ea9u);
  /* 11911ea9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911eab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11911ead push 0x1191a048 */
  push32((uint32_t)(0x1191a048u));
  /* 11911eb2 push esi */
  push32((uint32_t)(ESI));
  /* 11911eb3 call edi */
  call_ind((uint32_t)(EDI), 0x11911eb5u);
  /* 11911eb5 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11911eb8 pop edi */
  EDI = (pop32());
  /* 11911eb9 pop esi */
  ESI = (pop32());
  /* 11911eba ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
L_11911ebb:;
  /* 11911ebb mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11911ebf mov edi, dword ptr [0x11916128] */
  EDI = (r32((uint32_t)(0x11916128)));
  /* 11911ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911ec7 push 0x70 */
  push32((uint32_t)(0x70u));
  /* 11911ec9 push 0x1191a1e8 */
  push32((uint32_t)(0x1191a1e8u));
  /* 11911ece push esi */
  push32((uint32_t)(ESI));
  /* 11911ecf call edi */
  call_ind((uint32_t)(EDI), 0x11911ed1u);
  /* 11911ed1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911ed3 push 0x90 */
  push32((uint32_t)(0x90u));
  /* 11911ed8 push 0x1191a1e0 */
  push32((uint32_t)(0x1191a1e0u));
  /* 11911edd push esi */
  push32((uint32_t)(ESI));
  /* 11911ede call edi */
  call_ind((uint32_t)(EDI), 0x11911ee0u);
  /* 11911ee0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11911ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11911ee4 push 0x1191a218 */
  push32((uint32_t)(0x1191a218u));
  /* 11911ee9 push esi */
  push32((uint32_t)(ESI));
  /* 11911eea call edi */
  call_ind((uint32_t)(EDI), 0x11911eecu);
  /* 11911eec add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11911eef:;
  /* 11911eef pop edi */
  EDI = (pop32());
  /* 11911ef0 pop esi */
  ESI = (pop32());
  /* 11911ef1 ret  */
  ESPCHK(0x11911dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f40 @ 0x11911f40 (217 bytes, 57 insns) */
void f_11911f40(void) {
  FTRACE(0x11911f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11911f40 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11911f44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911f47 jne 0x11911fd5 */
  if (!C.zf) goto L_11911fd5;
  /* 11911f4d call dword ptr [0x1191605c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191605c))), 0x11911f53u);
  /* 11911f53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11911f55 mov dword ptr [0x1191a244], eax */
  w32((uint32_t)(0x1191a244), (EAX));
  /* 11911f5a call 0x11912b50 */
  push32(0x11911f5fu); f_11912b50();
  /* 11911f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911f61 pop ecx */
  ECX = (pop32());
  /* 11911f62 je 0x11911fa0 */
  if (C.zf) goto L_11911fa0;
  /* 11911f64 mov eax, dword ptr [0x1191a244] */
  EAX = (r32((uint32_t)(0x1191a244)));
  /* 11911f69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11911f6b mov cl, byte ptr [0x1191a245] */
  CL = (r8((uint32_t)(0x1191a245)));
  /* 11911f71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11911f76 shr dword ptr [0x1191a244], 0x10 */
  w32((uint32_t)(0x1191a244), (sh_shr((uint32_t)(r32((uint32_t)(0x1191a244))), (0x10u)&0x1f, 32)));
  /* 11911f7d mov dword ptr [0x1191a24c], eax */
  w32((uint32_t)(0x1191a24c), (EAX));
  /* 11911f82 mov dword ptr [0x1191a250], ecx */
  w32((uint32_t)(0x1191a250), (ECX));
  /* 11911f88 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11911f8b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11911f8d mov dword ptr [0x1191a248], eax */
  w32((uint32_t)(0x1191a248), (EAX));
  /* 11911f92 call 0x11912207 */
  push32(0x11911f97u); f_11912207();
  /* 11911f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11911f99 jne 0x11911fa4 */
  if (!C.zf) goto L_11911fa4;
  /* 11911f9b call 0x11912bad */
  push32(0x11911fa0u); f_11912bad();
L_11911fa0:;
  /* 11911fa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11911fa2 jmp 0x11912016 */
  goto L_11912016;
L_11911fa4:;
  /* 11911fa4 call dword ptr [0x11916058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916058))), 0x11911faau);
  /* 11911faa mov dword ptr [0x1191a8f8], eax */
  w32((uint32_t)(0x1191a8f8), (EAX));
  /* 11911faf call 0x119128a9 */
  push32(0x11911fb4u); f_119128a9();
  /* 11911fb4 mov dword ptr [0x1191a230], eax */
  w32((uint32_t)(0x1191a230), (EAX));
  /* 11911fb9 call 0x11912393 */
  push32(0x11911fbeu); f_11912393();
  /* 11911fbe call 0x1191265c */
  push32(0x11911fc3u); f_1191265c();
  /* 11911fc3 call 0x119125a3 */
  push32(0x11911fc8u); f_119125a3();
  /* 11911fc8 call 0x119120e9 */
  push32(0x11911fcdu); f_119120e9();
  /* 11911fcd inc dword ptr [0x1191a22c] */
  { uint32_t _r=(r32((uint32_t)(0x1191a22c)))+1; w32((uint32_t)(0x1191a22c), (_r)); fl_inc(_r,32); }
  /* 11911fd3 jmp 0x11912013 */
  goto L_11912013;
L_11911fd5:;
  /* 11911fd5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11911fd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911fd9 jne 0x11912007 */
  if (!C.zf) goto L_11912007;
  /* 11911fdb cmp dword ptr [0x1191a22c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1191a22c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911fe1 jle 0x11911fa0 */
  if ((C.zf||C.sf!=C.of)) goto L_11911fa0;
  /* 11911fe3 dec dword ptr [0x1191a22c] */
  { uint32_t _r=(r32((uint32_t)(0x1191a22c)))-1; w32((uint32_t)(0x1191a22c), (_r)); fl_dec(_r,32); }
  /* 11911fe9 cmp dword ptr [0x1191a27c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1191a27c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11911fef jne 0x11911ff6 */
  if (!C.zf) goto L_11911ff6;
  /* 11911ff1 call 0x11912127 */
  push32(0x11911ff6u); f_11912127();
L_11911ff6:;
  /* 11911ff6 call 0x1191254f */
  push32(0x11911ffbu); f_1191254f();
  /* 11911ffb call 0x1191225b */
  push32(0x11912000u); f_1191225b();
  /* 11912000 call 0x11912bad */
  push32(0x11912005u); f_11912bad();
  /* 11912005 jmp 0x11912013 */
  goto L_11912013;
L_11912007:;
  /* 11912007 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191200a jne 0x11912013 */
  if (!C.zf) goto L_11912013;
  /* 1191200c push ecx */
  push32((uint32_t)(ECX));
  /* 1191200d call 0x119122f3 */
  push32(0x11912012u); f_119122f3();
  /* 11912012 pop ecx */
  ECX = (pop32());
L_11912013:;
  /* 11912013 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912015 pop eax */
  EAX = (pop32());
L_11912016:;
  /* 11912016 ret 0xc */
  ESPCHK(0x11911f40u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11912019 (157 bytes, 73 insns) */
void f_11912019(void) {
  FTRACE(0x11912019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912019 push ebp */
  push32((uint32_t)(EBP));
  /* 1191201a mov ebp, esp */
  EBP = (ESP);
  /* 1191201c push ebx */
  push32((uint32_t)(EBX));
  /* 1191201d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11912020 push esi */
  push32((uint32_t)(ESI));
  /* 11912021 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11912024 push edi */
  push32((uint32_t)(EDI));
  /* 11912025 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11912028 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191202a jne 0x11912035 */
  if (!C.zf) goto L_11912035;
  /* 1191202c cmp dword ptr [0x1191a22c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912033 jmp 0x1191205b */
  goto L_1191205b;
L_11912035:;
  /* 11912035 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912038 je 0x1191203f */
  if (C.zf) goto L_1191203f;
  /* 1191203a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191203d jne 0x11912061 */
  if (!C.zf) goto L_11912061;
L_1191203f:;
  /* 1191203f mov eax, dword ptr [0x1191a8fc] */
  EAX = (r32((uint32_t)(0x1191a8fc)));
  /* 11912044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912046 je 0x11912051 */
  if (C.zf) goto L_11912051;
  /* 11912048 push edi */
  push32((uint32_t)(EDI));
  /* 11912049 push esi */
  push32((uint32_t)(ESI));
  /* 1191204a push ebx */
  push32((uint32_t)(EBX));
  /* 1191204b call eax */
  call_ind((uint32_t)(EAX), 0x1191204du);
  /* 1191204d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191204f je 0x1191205d */
  if (C.zf) goto L_1191205d;
L_11912051:;
  /* 11912051 push edi */
  push32((uint32_t)(EDI));
  /* 11912052 push esi */
  push32((uint32_t)(ESI));
  /* 11912053 push ebx */
  push32((uint32_t)(EBX));
  /* 11912054 call 0x11911f40 */
  push32(0x11912059u); f_11911f40();
  /* 11912059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_1191205b:;
  /* 1191205b jne 0x11912061 */
  if (!C.zf) goto L_11912061;
L_1191205d:;
  /* 1191205d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1191205f jmp 0x119120af */
  goto L_119120af;
L_11912061:;
  /* 11912061 push edi */
  push32((uint32_t)(EDI));
  /* 11912062 push esi */
  push32((uint32_t)(ESI));
  /* 11912063 push ebx */
  push32((uint32_t)(EBX));
  /* 11912064 call 0x11911000 */
  push32(0x11912069u); f_11911000();
  /* 11912069 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191206c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1191206f jne 0x1191207d */
  if (!C.zf) goto L_1191207d;
  /* 11912071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912073 jne 0x119120ac */
  if (!C.zf) goto L_119120ac;
  /* 11912075 push edi */
  push32((uint32_t)(EDI));
  /* 11912076 push eax */
  push32((uint32_t)(EAX));
  /* 11912077 push ebx */
  push32((uint32_t)(EBX));
  /* 11912078 call 0x11911f40 */
  push32(0x1191207du); f_11911f40();
L_1191207d:;
  /* 1191207d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191207f je 0x11912086 */
  if (C.zf) goto L_11912086;
  /* 11912081 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912084 jne 0x119120ac */
  if (!C.zf) goto L_119120ac;
L_11912086:;
  /* 11912086 push edi */
  push32((uint32_t)(EDI));
  /* 11912087 push esi */
  push32((uint32_t)(ESI));
  /* 11912088 push ebx */
  push32((uint32_t)(EBX));
  /* 11912089 call 0x11911f40 */
  push32(0x1191208eu); f_11911f40();
  /* 1191208e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912090 jne 0x11912095 */
  if (!C.zf) goto L_11912095;
  /* 11912092 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11912095:;
  /* 11912095 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912099 je 0x119120ac */
  if (C.zf) goto L_119120ac;
  /* 1191209b mov eax, dword ptr [0x1191a8fc] */
  EAX = (r32((uint32_t)(0x1191a8fc)));
  /* 119120a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119120a2 je 0x119120ac */
  if (C.zf) goto L_119120ac;
  /* 119120a4 push edi */
  push32((uint32_t)(EDI));
  /* 119120a5 push esi */
  push32((uint32_t)(ESI));
  /* 119120a6 push ebx */
  push32((uint32_t)(EBX));
  /* 119120a7 call eax */
  call_ind((uint32_t)(EAX), 0x119120a9u);
  /* 119120a9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_119120ac:;
  /* 119120ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_119120af:;
  /* 119120af pop edi */
  EDI = (pop32());
  /* 119120b0 pop esi */
  ESI = (pop32());
  /* 119120b1 pop ebx */
  EBX = (pop32());
  /* 119120b2 pop ebp */
  EBP = (pop32());
  /* 119120b3 ret 0xc */
  ESPCHK(0x11912019u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x119120b6 (48 bytes, 15 insns) */
void f_119120b6(void) {
  FTRACE(0x119120b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119120b6 mov eax, dword ptr [0x1191a238] */
  EAX = (r32((uint32_t)(0x1191a238)));
  /* 119120bb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119120be je 0x119120cd */
  if (C.zf) goto L_119120cd;
  /* 119120c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119120c2 jne 0x119120d2 */
  if (!C.zf) goto L_119120d2;
  /* 119120c4 cmp dword ptr [0x1191a23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1191a23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119120cb jne 0x119120d2 */
  if (!C.zf) goto L_119120d2;
L_119120cd:;
  /* 119120cd call 0x11912c55 */
  push32(0x119120d2u); f_11912c55();
L_119120d2:;
  /* 119120d2 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 119120d6 call 0x11912c8e */
  push32(0x119120dbu); f_11912c8e();
  /* 119120db push 0xff */
  push32((uint32_t)(0xffu));
  /* 119120e0 call dword ptr [0x119173d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119173d0))), 0x119120e6u);
  /* 119120e6 pop ecx */
  ECX = (pop32());
  /* 119120e7 pop ecx */
  ECX = (pop32());
  /* 119120e8 ret  */
  ESPCHK(0x119120b6u, _esp0);
  ESP += 4; return;
}

/* FUN_100020e9 @ 0x119120e9 (45 bytes, 12 insns) */
void f_119120e9(void) {
  FTRACE(0x119120e9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119120e9 mov eax, dword ptr [0x1191a8f4] */
  EAX = (r32((uint32_t)(0x1191a8f4)));
  /* 119120ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119120f0 je 0x119120f4 */
  if (C.zf) goto L_119120f4;
  /* 119120f2 call eax */
  call_ind((uint32_t)(EAX), 0x119120f4u);
L_119120f4:;
  /* 119120f4 push 0x11917010 */
  push32((uint32_t)(0x11917010u));
  /* 119120f9 push 0x11917008 */
  push32((uint32_t)(0x11917008u));
  /* 119120fe call 0x119121ed */
  push32(0x11912103u); f_119121ed();
  /* 11912103 push 0x11917004 */
  push32((uint32_t)(0x11917004u));
  /* 11912108 push 0x11917000 */
  push32((uint32_t)(0x11917000u));
  /* 1191210d call 0x119121ed */
  push32(0x11912112u); f_119121ed();
  /* 11912112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912115 ret  */
  ESPCHK(0x119120e9u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11912116 (17 bytes, 6 insns) */
void f_11912116(void) {
  FTRACE(0x11912116u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912116 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912118 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191211a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1191211e call 0x11912136 */
  push32(0x11912123u); f_11912136();
  /* 11912123 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912126 ret  */
  ESPCHK(0x11912116u, _esp0);
  ESP += 4; return;
}

/* FUN_10002127 @ 0x11912127 (15 bytes, 6 insns) */
void f_11912127(void) {
  FTRACE(0x11912127u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912127 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191212b push 0 */
  push32((uint32_t)(0x0u));
  /* 1191212d call 0x11912136 */
  push32(0x11912132u); f_11912136();
  /* 11912132 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912135 ret  */
  ESPCHK(0x11912127u, _esp0);
  ESP += 4; return;
}

/* FUN_10002136 @ 0x11912136 (163 bytes, 53 insns) */
void f_11912136(void) {
  FTRACE(0x11912136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912136 push edi */
  push32((uint32_t)(EDI));
  /* 11912137 call 0x119121db */
  push32(0x1191213cu); f_119121db();
  /* 1191213c push 1 */
  push32((uint32_t)(0x1u));
  /* 1191213e pop edi */
  EDI = (pop32());
  /* 1191213f cmp dword ptr [0x1191a280], edi */
  { uint32_t _a=(r32((uint32_t)(0x1191a280))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912145 jne 0x11912158 */
  if (!C.zf) goto L_11912158;
  /* 11912147 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1191214b call dword ptr [0x11916068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916068))), 0x11912151u);
  /* 11912151 push eax */
  push32((uint32_t)(EAX));
  /* 11912152 call dword ptr [0x11916064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916064))), 0x11912158u);
L_11912158:;
  /* 11912158 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191215d push ebx */
  push32((uint32_t)(EBX));
  /* 1191215e mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11912162 mov dword ptr [0x1191a27c], edi */
  w32((uint32_t)(0x1191a27c), (EDI));
  /* 11912168 mov byte ptr [0x1191a278], bl */
  w8((uint32_t)(0x1191a278), (BL));
  /* 1191216e jne 0x119121ac */
  if (!C.zf) goto L_119121ac;
  /* 11912170 mov eax, dword ptr [0x1191a8f0] */
  EAX = (r32((uint32_t)(0x1191a8f0)));
  /* 11912175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912177 je 0x1191219b */
  if (C.zf) goto L_1191219b;
  /* 11912179 mov ecx, dword ptr [0x1191a8ec] */
  ECX = (r32((uint32_t)(0x1191a8ec)));
  /* 1191217f push esi */
  push32((uint32_t)(ESI));
  /* 11912180 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11912183 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912185 jb 0x1191219a */
  if (C.cf) goto L_1191219a;
L_11912187:;
  /* 11912187 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11912189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191218b je 0x1191218f */
  if (C.zf) goto L_1191218f;
  /* 1191218d call eax */
  call_ind((uint32_t)(EAX), 0x1191218fu);
L_1191218f:;
  /* 1191218f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912192 cmp esi, dword ptr [0x1191a8f0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1191a8f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912198 jae 0x11912187 */
  if (!C.cf) goto L_11912187;
L_1191219a:;
  /* 1191219a pop esi */
  ESI = (pop32());
L_1191219b:;
  /* 1191219b push 0x11917018 */
  push32((uint32_t)(0x11917018u));
  /* 119121a0 push 0x11917014 */
  push32((uint32_t)(0x11917014u));
  /* 119121a5 call 0x119121ed */
  push32(0x119121aau); f_119121ed();
  /* 119121aa pop ecx */
  ECX = (pop32());
  /* 119121ab pop ecx */
  ECX = (pop32());
L_119121ac:;
  /* 119121ac push 0x11917020 */
  push32((uint32_t)(0x11917020u));
  /* 119121b1 push 0x1191701c */
  push32((uint32_t)(0x1191701cu));
  /* 119121b6 call 0x119121ed */
  push32(0x119121bbu); f_119121ed();
  /* 119121bb pop ecx */
  ECX = (pop32());
  /* 119121bc pop ecx */
  ECX = (pop32());
  /* 119121bd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119121bf pop ebx */
  EBX = (pop32());
  /* 119121c0 je 0x119121c9 */
  if (C.zf) goto L_119121c9;
  /* 119121c2 call 0x119121e4 */
  push32(0x119121c7u); f_119121e4();
  /* 119121c7 pop edi */
  EDI = (pop32());
  /* 119121c8 ret  */
  ESPCHK(0x11912136u, _esp0);
  ESP += 4; return;
L_119121c9:;
  /* 119121c9 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 119121cd mov dword ptr [0x1191a280], edi */
  w32((uint32_t)(0x1191a280), (EDI));
  /* 119121d3 call dword ptr [0x11916060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916060))), 0x119121d9u);
  /* 119121d9 pop edi */
  EDI = (pop32());
  /* 119121da ret  */
  ESPCHK(0x11912136u, _esp0);
  ESP += 4; return;
}

/* FUN_100021db @ 0x119121db (9 bytes, 4 insns) */
void f_119121db(void) {
  FTRACE(0x119121dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119121db push 0xd */
  push32((uint32_t)(0xdu));
  /* 119121dd call 0x11912e76 */
  push32(0x119121e2u); f_11912e76();
  /* 119121e2 pop ecx */
  ECX = (pop32());
  /* 119121e3 ret  */
  ESPCHK(0x119121dbu, _esp0);
  ESP += 4; return;
}

/* FUN_100021e4 @ 0x119121e4 (9 bytes, 4 insns) */
void f_119121e4(void) {
  FTRACE(0x119121e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119121e4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 119121e6 call 0x11912ed7 */
  push32(0x119121ebu); f_11912ed7();
  /* 119121eb pop ecx */
  ECX = (pop32());
  /* 119121ec ret  */
  ESPCHK(0x119121e4u, _esp0);
  ESP += 4; return;
}

/* FUN_100021ed @ 0x119121ed (26 bytes, 12 insns) */
void f_119121ed(void) {
  FTRACE(0x119121edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119121ed push esi */
  push32((uint32_t)(ESI));
  /* 119121ee mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_119121f2:;
  /* 119121f2 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119121f6 jae 0x11912205 */
  if (!C.cf) goto L_11912205;
  /* 119121f8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 119121fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119121fc je 0x11912200 */
  if (C.zf) goto L_11912200;
  /* 119121fe call eax */
  call_ind((uint32_t)(EAX), 0x11912200u);
L_11912200:;
  /* 11912200 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912203 jmp 0x119121f2 */
  goto L_119121f2;
L_11912205:;
  /* 11912205 pop esi */
  ESI = (pop32());
  /* 11912206 ret  */
  ESPCHK(0x119121edu, _esp0);
  ESP += 4; return;
}

/* FUN_10002207 @ 0x11912207 (84 bytes, 32 insns) */
void f_11912207(void) {
  FTRACE(0x11912207u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912207 push esi */
  push32((uint32_t)(ESI));
  /* 11912208 call 0x11912de1 */
  push32(0x1191220du); f_11912de1();
  /* 1191220d call dword ptr [0x11916074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916074))), 0x11912213u);
  /* 11912213 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912216 mov dword ptr [0x119173d4], eax */
  w32((uint32_t)(0x119173d4), (EAX));
  /* 1191221b je 0x11912257 */
  if (C.zf) goto L_11912257;
  /* 1191221d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1191221f push 1 */
  push32((uint32_t)(0x1u));
  /* 11912221 call 0x11912eec */
  push32(0x11912226u); f_11912eec();
  /* 11912226 mov esi, eax */
  ESI = (EAX);
  /* 11912228 pop ecx */
  ECX = (pop32());
  /* 11912229 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191222b pop ecx */
  ECX = (pop32());
  /* 1191222c je 0x11912257 */
  if (C.zf) goto L_11912257;
  /* 1191222e push esi */
  push32((uint32_t)(ESI));
  /* 1191222f push dword ptr [0x119173d4] */
  push32((uint32_t)(r32((uint32_t)(0x119173d4))));
  /* 11912235 call dword ptr [0x11916070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916070))), 0x1191223bu);
  /* 1191223b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191223d je 0x11912257 */
  if (C.zf) goto L_11912257;
  /* 1191223f push esi */
  push32((uint32_t)(ESI));
  /* 11912240 call 0x11912279 */
  push32(0x11912245u); f_11912279();
  /* 11912245 pop ecx */
  ECX = (pop32());
  /* 11912246 call dword ptr [0x1191606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191606c))), 0x1191224cu);
  /* 1191224c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11912250 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912252 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11912254 pop eax */
  EAX = (pop32());
  /* 11912255 pop esi */
  ESI = (pop32());
  /* 11912256 ret  */
  ESPCHK(0x11912207u, _esp0);
  ESP += 4; return;
L_11912257:;
  /* 11912257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11912259 pop esi */
  ESI = (pop32());
  /* 1191225a ret  */
  ESPCHK(0x11912207u, _esp0);
  ESP += 4; return;
}

/* FUN_1000225b @ 0x1191225b (30 bytes, 8 insns) */
void f_1191225b(void) {
  FTRACE(0x1191225bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191225b call 0x11912e0a */
  push32(0x11912260u); f_11912e0a();
  /* 11912260 mov eax, dword ptr [0x119173d4] */
  EAX = (r32((uint32_t)(0x119173d4)));
  /* 11912265 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912268 je 0x11912278 */
  if (C.zf) goto L_11912278;
  /* 1191226a push eax */
  push32((uint32_t)(EAX));
  /* 1191226b call dword ptr [0x11916078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916078))), 0x11912271u);
  /* 11912271 or dword ptr [0x119173d4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x119173d4)))|(0xffffffffu); w32((uint32_t)(0x119173d4), (_r)); fl_logic(_r,32); }
L_11912278:;
  /* 11912278 ret  */
  ESPCHK(0x1191225bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002279 @ 0x11912279 (19 bytes, 4 insns) */
void f_11912279(void) {
  FTRACE(0x11912279u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912279 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1191227d mov dword ptr [eax + 0x50], 0x11917550 */
  w32((uint32_t)(EAX + 0x50), (0x11917550u));
  /* 11912284 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 1191228b ret  */
  ESPCHK(0x11912279u, _esp0);
  ESP += 4; return;
}

/* FUN_1000228c @ 0x1191228c (103 bytes, 38 insns) */
void f_1191228c(void) {
  FTRACE(0x1191228cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191228c push esi */
  push32((uint32_t)(ESI));
  /* 1191228d push edi */
  push32((uint32_t)(EDI));
  /* 1191228e call dword ptr [0x11916084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916084))), 0x11912294u);
  /* 11912294 push dword ptr [0x119173d4] */
  push32((uint32_t)(r32((uint32_t)(0x119173d4))));
  /* 1191229a mov edi, eax */
  EDI = (EAX);
  /* 1191229c call dword ptr [0x11916080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916080))), 0x119122a2u);
  /* 119122a2 mov esi, eax */
  ESI = (EAX);
  /* 119122a4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119122a6 jne 0x119122e7 */
  if (!C.zf) goto L_119122e7;
  /* 119122a8 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 119122aa push 1 */
  push32((uint32_t)(0x1u));
  /* 119122ac call 0x11912eec */
  push32(0x119122b1u); f_11912eec();
  /* 119122b1 mov esi, eax */
  ESI = (EAX);
  /* 119122b3 pop ecx */
  ECX = (pop32());
  /* 119122b4 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119122b6 pop ecx */
  ECX = (pop32());
  /* 119122b7 je 0x119122df */
  if (C.zf) goto L_119122df;
  /* 119122b9 push esi */
  push32((uint32_t)(ESI));
  /* 119122ba push dword ptr [0x119173d4] */
  push32((uint32_t)(r32((uint32_t)(0x119173d4))));
  /* 119122c0 call dword ptr [0x11916070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916070))), 0x119122c6u);
  /* 119122c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119122c8 je 0x119122df */
  if (C.zf) goto L_119122df;
  /* 119122ca push esi */
  push32((uint32_t)(ESI));
  /* 119122cb call 0x11912279 */
  push32(0x119122d0u); f_11912279();
  /* 119122d0 pop ecx */
  ECX = (pop32());
  /* 119122d1 call dword ptr [0x1191606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191606c))), 0x119122d7u);
  /* 119122d7 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 119122db mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 119122dd jmp 0x119122e7 */
  goto L_119122e7;
L_119122df:;
  /* 119122df push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119122e1 call 0x119120b6 */
  push32(0x119122e6u); f_119120b6();
  /* 119122e6 pop ecx */
  ECX = (pop32());
L_119122e7:;
  /* 119122e7 push edi */
  push32((uint32_t)(EDI));
  /* 119122e8 call dword ptr [0x1191607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191607c))), 0x119122eeu);
  /* 119122ee mov eax, esi */
  EAX = (ESI);
  /* 119122f0 pop edi */
  EDI = (pop32());
  /* 119122f1 pop esi */
  ESI = (pop32());
  /* 119122f2 ret  */
  ESPCHK(0x1191228cu, _esp0);
  ESP += 4; return;
}

/* FUN_100022f3 @ 0x119122f3 (160 bytes, 62 insns) */
void f_119122f3(void) {
  FTRACE(0x119122f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119122f3 mov eax, dword ptr [0x119173d4] */
  EAX = (r32((uint32_t)(0x119173d4)));
  /* 119122f8 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119122fb je 0x11912392 */
  if (C.zf) goto L_11912392;
  /* 11912301 push esi */
  push32((uint32_t)(ESI));
  /* 11912302 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11912306 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11912308 jne 0x11912317 */
  if (!C.zf) goto L_11912317;
  /* 1191230a push eax */
  push32((uint32_t)(EAX));
  /* 1191230b call dword ptr [0x11916080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916080))), 0x11912311u);
  /* 11912311 mov esi, eax */
  ESI = (EAX);
  /* 11912313 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11912315 je 0x11912383 */
  if (C.zf) goto L_11912383;
L_11912317:;
  /* 11912317 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 1191231a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191231c je 0x11912325 */
  if (C.zf) goto L_11912325;
  /* 1191231e push eax */
  push32((uint32_t)(EAX));
  /* 1191231f call 0x11913029 */
  push32(0x11912324u); f_11913029();
  /* 11912324 pop ecx */
  ECX = (pop32());
L_11912325:;
  /* 11912325 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11912328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191232a je 0x11912333 */
  if (C.zf) goto L_11912333;
  /* 1191232c push eax */
  push32((uint32_t)(EAX));
  /* 1191232d call 0x11913029 */
  push32(0x11912332u); f_11913029();
  /* 11912332 pop ecx */
  ECX = (pop32());
L_11912333:;
  /* 11912333 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11912336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912338 je 0x11912341 */
  if (C.zf) goto L_11912341;
  /* 1191233a push eax */
  push32((uint32_t)(EAX));
  /* 1191233b call 0x11913029 */
  push32(0x11912340u); f_11913029();
  /* 11912340 pop ecx */
  ECX = (pop32());
L_11912341:;
  /* 11912341 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11912344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912346 je 0x1191234f */
  if (C.zf) goto L_1191234f;
  /* 11912348 push eax */
  push32((uint32_t)(EAX));
  /* 11912349 call 0x11913029 */
  push32(0x1191234eu); f_11913029();
  /* 1191234e pop ecx */
  ECX = (pop32());
L_1191234f:;
  /* 1191234f mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11912352 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912354 je 0x1191235d */
  if (C.zf) goto L_1191235d;
  /* 11912356 push eax */
  push32((uint32_t)(EAX));
  /* 11912357 call 0x11913029 */
  push32(0x1191235cu); f_11913029();
  /* 1191235c pop ecx */
  ECX = (pop32());
L_1191235d:;
  /* 1191235d mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11912360 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912362 je 0x1191236b */
  if (C.zf) goto L_1191236b;
  /* 11912364 push eax */
  push32((uint32_t)(EAX));
  /* 11912365 call 0x11913029 */
  push32(0x1191236au); f_11913029();
  /* 1191236a pop ecx */
  ECX = (pop32());
L_1191236b:;
  /* 1191236b mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 1191236e cmp eax, 0x11917550 */
  { uint32_t _a=(EAX),_b=(0x11917550u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912373 je 0x1191237c */
  if (C.zf) goto L_1191237c;
  /* 11912375 push eax */
  push32((uint32_t)(EAX));
  /* 11912376 call 0x11913029 */
  push32(0x1191237bu); f_11913029();
  /* 1191237b pop ecx */
  ECX = (pop32());
L_1191237c:;
  /* 1191237c push esi */
  push32((uint32_t)(ESI));
  /* 1191237d call 0x11913029 */
  push32(0x11912382u); f_11913029();
  /* 11912382 pop ecx */
  ECX = (pop32());
L_11912383:;
  /* 11912383 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912385 push dword ptr [0x119173d4] */
  push32((uint32_t)(r32((uint32_t)(0x119173d4))));
  /* 1191238b call dword ptr [0x11916070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916070))), 0x11912391u);
  /* 11912391 pop esi */
  ESI = (pop32());
L_11912392:;
  /* 11912392 ret  */
  ESPCHK(0x119122f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002393 @ 0x11912393 (444 bytes, 150 insns) */
void f_11912393(void) {
  FTRACE(0x11912393u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912393 push ebp */
  push32((uint32_t)(EBP));
  /* 11912394 mov ebp, esp */
  EBP = (ESP);
  /* 11912396 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912399 push ebx */
  push32((uint32_t)(EBX));
  /* 1191239a push esi */
  push32((uint32_t)(ESI));
  /* 1191239b push edi */
  push32((uint32_t)(EDI));
  /* 1191239c push 0x480 */
  push32((uint32_t)(0x480u));
  /* 119123a1 call 0x11913112 */
  push32(0x119123a6u); f_11913112();
  /* 119123a6 mov esi, eax */
  ESI = (EAX);
  /* 119123a8 pop ecx */
  ECX = (pop32());
  /* 119123a9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119123ab jne 0x119123b5 */
  if (!C.zf) goto L_119123b5;
  /* 119123ad push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 119123af call 0x119120b6 */
  push32(0x119123b4u); f_119120b6();
  /* 119123b4 pop ecx */
  ECX = (pop32());
L_119123b5:;
  /* 119123b5 mov dword ptr [0x1191a7e0], esi */
  w32((uint32_t)(0x1191a7e0), (ESI));
  /* 119123bb mov dword ptr [0x1191a8e0], 0x20 */
  w32((uint32_t)(0x1191a8e0), (0x20u));
  /* 119123c5 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_119123cb:;
  /* 119123cb cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119123cd jae 0x119123ed */
  if (!C.cf) goto L_119123ed;
  /* 119123cf and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 119123d3 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 119123d6 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 119123da mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 119123de mov eax, dword ptr [0x1191a7e0] */
  EAX = (r32((uint32_t)(0x1191a7e0)));
  /* 119123e3 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119123e6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119123eb jmp 0x119123cb */
  goto L_119123cb;
L_119123ed:;
  /* 119123ed lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 119123f0 push eax */
  push32((uint32_t)(EAX));
  /* 119123f1 call dword ptr [0x11916094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916094))), 0x119123f7u);
  /* 119123f7 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119123fc je 0x119124d3 */
  if (C.zf) goto L_119124d3;
  /* 11912402 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11912405 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912407 je 0x119124d3 */
  if (C.zf) goto L_119124d3;
  /* 1191240d mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 1191240f lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11912412 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11912415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11912418 mov eax, 0x800 */
  EAX = (0x800u);
  /* 1191241d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191241f jl 0x11912423 */
  if ((C.sf!=C.of)) goto L_11912423;
  /* 11912421 mov edi, eax */
  EDI = (EAX);
L_11912423:;
  /* 11912423 cmp dword ptr [0x1191a8e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912429 jge 0x11912481 */
  if ((C.sf==C.of)) goto L_11912481;
  /* 1191242b mov esi, 0x1191a7e4 */
  ESI = (0x1191a7e4u);
L_11912430:;
  /* 11912430 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11912435 call 0x11913112 */
  push32(0x1191243au); f_11913112();
  /* 1191243a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191243c pop ecx */
  ECX = (pop32());
  /* 1191243d je 0x1191247b */
  if (C.zf) goto L_1191247b;
  /* 1191243f add dword ptr [0x1191a8e0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x1191a8e0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11912446 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11912448 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_1191244e:;
  /* 1191244e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912450 jae 0x1191246e */
  if (!C.cf) goto L_1191246e;
  /* 11912452 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11912456 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11912459 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1191245d mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11912461 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11912463 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11912466 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191246c jmp 0x1191244e */
  goto L_1191244e;
L_1191246e:;
  /* 1191246e add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912471 cmp dword ptr [0x1191a8e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912477 jl 0x11912430 */
  if ((C.sf!=C.of)) goto L_11912430;
  /* 11912479 jmp 0x11912481 */
  goto L_11912481;
L_1191247b:;
  /* 1191247b mov edi, dword ptr [0x1191a8e0] */
  EDI = (r32((uint32_t)(0x1191a8e0)));
L_11912481:;
  /* 11912481 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11912483 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11912485 jle 0x119124d3 */
  if ((C.zf||C.sf!=C.of)) goto L_119124d3;
L_11912487:;
  /* 11912487 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191248a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1191248c cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191248f je 0x119124c9 */
  if (C.zf) goto L_119124c9;
  /* 11912491 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11912493 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11912495 je 0x119124c9 */
  if (C.zf) goto L_119124c9;
  /* 11912497 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11912499 jne 0x119124a6 */
  if (!C.zf) goto L_119124a6;
  /* 1191249b push ecx */
  push32((uint32_t)(ECX));
  /* 1191249c call dword ptr [0x11916004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916004))), 0x119124a2u);
  /* 119124a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119124a4 je 0x119124c9 */
  if (C.zf) goto L_119124c9;
L_119124a6:;
  /* 119124a6 mov ecx, esi */
  ECX = (ESI);
  /* 119124a8 mov eax, esi */
  EAX = (ESI);
  /* 119124aa sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 119124ad and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 119124b0 mov ecx, dword ptr [ecx*4 + 0x1191a7e0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x1191a7e0)));
  /* 119124b7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 119124ba lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 119124bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119124c0 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 119124c2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119124c4 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 119124c6 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_119124c9:;
  /* 119124c9 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 119124cd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 119124ce inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119124cf cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119124d1 jl 0x11912487 */
  if ((C.sf!=C.of)) goto L_11912487;
L_119124d3:;
  /* 119124d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_119124d5:;
  /* 119124d5 mov ecx, dword ptr [0x1191a7e0] */
  ECX = (r32((uint32_t)(0x1191a7e0)));
  /* 119124db lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 119124de cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119124e2 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 119124e5 jne 0x11912534 */
  if (!C.zf) goto L_11912534;
  /* 119124e7 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119124e9 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 119124ed jne 0x119124f4 */
  if (!C.zf) goto L_119124f4;
  /* 119124ef push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 119124f1 pop eax */
  EAX = (pop32());
  /* 119124f2 jmp 0x119124fe */
  goto L_119124fe;
L_119124f4:;
  /* 119124f4 mov eax, ebx */
  EAX = (EBX);
  /* 119124f6 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119124f7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119124f9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119124fb add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_119124fe:;
  /* 119124fe push eax */
  push32((uint32_t)(EAX));
  /* 119124ff call dword ptr [0x11916000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916000))), 0x11912505u);
  /* 11912505 mov edi, eax */
  EDI = (EAX);
  /* 11912507 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191250a je 0x11912523 */
  if (C.zf) goto L_11912523;
  /* 1191250c push edi */
  push32((uint32_t)(EDI));
  /* 1191250d call dword ptr [0x11916004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916004))), 0x11912513u);
  /* 11912513 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912515 je 0x11912523 */
  if (C.zf) goto L_11912523;
  /* 11912517 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1191251c mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1191251e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912521 jne 0x11912529 */
  if (!C.zf) goto L_11912529;
L_11912523:;
  /* 11912523 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11912527 jmp 0x11912538 */
  goto L_11912538;
L_11912529:;
  /* 11912529 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191252c jne 0x11912538 */
  if (!C.zf) goto L_11912538;
  /* 1191252e or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11912532 jmp 0x11912538 */
  goto L_11912538;
L_11912534:;
  /* 11912534 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11912538:;
  /* 11912538 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11912539 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191253c jl 0x119124d5 */
  if ((C.sf!=C.of)) goto L_119124d5;
  /* 1191253e push dword ptr [0x1191a8e0] */
  push32((uint32_t)(r32((uint32_t)(0x1191a8e0))));
  /* 11912544 call dword ptr [0x11916088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916088))), 0x1191254au);
  /* 1191254a pop edi */
  EDI = (pop32());
  /* 1191254b pop esi */
  ESI = (pop32());
  /* 1191254c pop ebx */
  EBX = (pop32());
  /* 1191254d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191254e ret  */
  ESPCHK(0x11912393u, _esp0);
  ESP += 4; return;
}

/* FUN_1000254f @ 0x1191254f (84 bytes, 33 insns) */
void f_1191254f(void) {
  FTRACE(0x1191254fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191254f push ebx */
  push32((uint32_t)(EBX));
  /* 11912550 push esi */
  push32((uint32_t)(ESI));
  /* 11912551 push edi */
  push32((uint32_t)(EDI));
  /* 11912552 mov esi, 0x1191a7e0 */
  ESI = (0x1191a7e0u);
L_11912557:;
  /* 11912557 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11912559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191255b je 0x11912594 */
  if (C.zf) goto L_11912594;
  /* 1191255d mov edi, eax */
  EDI = (EAX);
  /* 1191255f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11912564 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912566 jae 0x11912589 */
  if (!C.cf) goto L_11912589;
  /* 11912568 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1191256b:;
  /* 1191256b cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191256f je 0x11912578 */
  if (C.zf) goto L_11912578;
  /* 11912571 push ebx */
  push32((uint32_t)(EBX));
  /* 11912572 call dword ptr [0x11916098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916098))), 0x11912578u);
L_11912578:;
  /* 11912578 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1191257a add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191257d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11912582 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11912585 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912587 jb 0x1191256b */
  if (C.cf) goto L_1191256b;
L_11912589:;
  /* 11912589 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1191258b call 0x11913029 */
  push32(0x11912590u); f_11913029();
  /* 11912590 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11912593 pop ecx */
  ECX = (pop32());
L_11912594:;
  /* 11912594 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912597 cmp esi, 0x1191a8e0 */
  { uint32_t _a=(ESI),_b=(0x1191a8e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191259d jl 0x11912557 */
  if ((C.sf!=C.of)) goto L_11912557;
  /* 1191259f pop edi */
  EDI = (pop32());
  /* 119125a0 pop esi */
  ESI = (pop32());
  /* 119125a1 pop ebx */
  EBX = (pop32());
  /* 119125a2 ret  */
  ESPCHK(0x1191254fu, _esp0);
  ESP += 4; return;
}

/* FUN_100025a3 @ 0x119125a3 (185 bytes, 71 insns) */
void f_119125a3(void) {
  FTRACE(0x119125a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119125a3 push ebx */
  push32((uint32_t)(EBX));
  /* 119125a4 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119125a6 cmp dword ptr [0x1191a8e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119125ac push esi */
  push32((uint32_t)(ESI));
  /* 119125ad push edi */
  push32((uint32_t)(EDI));
  /* 119125ae jne 0x119125b5 */
  if (!C.zf) goto L_119125b5;
  /* 119125b0 call 0x11913793 */
  push32(0x119125b5u); f_11913793();
L_119125b5:;
  /* 119125b5 mov esi, dword ptr [0x1191a230] */
  ESI = (r32((uint32_t)(0x1191a230)));
  /* 119125bb xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_119125bd:;
  /* 119125bd mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119125bf cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119125c1 je 0x119125d5 */
  if (C.zf) goto L_119125d5;
  /* 119125c3 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119125c5 je 0x119125c8 */
  if (C.zf) goto L_119125c8;
  /* 119125c7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_119125c8:;
  /* 119125c8 push esi */
  push32((uint32_t)(ESI));
  /* 119125c9 call 0x11913340 */
  push32(0x119125ceu); f_11913340();
  /* 119125ce pop ecx */
  ECX = (pop32());
  /* 119125cf lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 119125d3 jmp 0x119125bd */
  goto L_119125bd;
L_119125d5:;
  /* 119125d5 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 119125dc push eax */
  push32((uint32_t)(EAX));
  /* 119125dd call 0x11913112 */
  push32(0x119125e2u); f_11913112();
  /* 119125e2 mov esi, eax */
  ESI = (EAX);
  /* 119125e4 pop ecx */
  ECX = (pop32());
  /* 119125e5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119125e7 mov dword ptr [0x1191a260], esi */
  w32((uint32_t)(0x1191a260), (ESI));
  /* 119125ed jne 0x119125f7 */
  if (!C.zf) goto L_119125f7;
  /* 119125ef push 9 */
  push32((uint32_t)(0x9u));
  /* 119125f1 call 0x119120b6 */
  push32(0x119125f6u); f_119120b6();
  /* 119125f6 pop ecx */
  ECX = (pop32());
L_119125f7:;
  /* 119125f7 mov edi, dword ptr [0x1191a230] */
  EDI = (r32((uint32_t)(0x1191a230)));
  /* 119125fd cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119125ff je 0x1191263a */
  if (C.zf) goto L_1191263a;
  /* 11912601 push ebp */
  push32((uint32_t)(EBP));
L_11912602:;
  /* 11912602 push edi */
  push32((uint32_t)(EDI));
  /* 11912603 call 0x11913340 */
  push32(0x11912608u); f_11913340();
  /* 11912608 mov ebp, eax */
  EBP = (EAX);
  /* 1191260a pop ecx */
  ECX = (pop32());
  /* 1191260b inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1191260c cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191260f je 0x11912633 */
  if (C.zf) goto L_11912633;
  /* 11912611 push ebp */
  push32((uint32_t)(EBP));
  /* 11912612 call 0x11913112 */
  push32(0x11912617u); f_11913112();
  /* 11912617 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912619 pop ecx */
  ECX = (pop32());
  /* 1191261a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1191261c jne 0x11912626 */
  if (!C.zf) goto L_11912626;
  /* 1191261e push 9 */
  push32((uint32_t)(0x9u));
  /* 11912620 call 0x119120b6 */
  push32(0x11912625u); f_119120b6();
  /* 11912625 pop ecx */
  ECX = (pop32());
L_11912626:;
  /* 11912626 push edi */
  push32((uint32_t)(EDI));
  /* 11912627 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912629 call 0x11913250 */
  push32(0x1191262eu); f_11913250();
  /* 1191262e pop ecx */
  ECX = (pop32());
  /* 1191262f add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912632 pop ecx */
  ECX = (pop32());
L_11912633:;
  /* 11912633 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912635 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912637 jne 0x11912602 */
  if (!C.zf) goto L_11912602;
  /* 11912639 pop ebp */
  EBP = (pop32());
L_1191263a:;
  /* 1191263a push dword ptr [0x1191a230] */
  push32((uint32_t)(r32((uint32_t)(0x1191a230))));
  /* 11912640 call 0x11913029 */
  push32(0x11912645u); f_11913029();
  /* 11912645 pop ecx */
  ECX = (pop32());
  /* 11912646 mov dword ptr [0x1191a230], ebx */
  w32((uint32_t)(0x1191a230), (EBX));
  /* 1191264c mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 1191264e pop edi */
  EDI = (pop32());
  /* 1191264f pop esi */
  ESI = (pop32());
  /* 11912650 mov dword ptr [0x1191a8e4], 1 */
  w32((uint32_t)(0x1191a8e4), (0x1u));
  /* 1191265a pop ebx */
  EBX = (pop32());
  /* 1191265b ret  */
  ESPCHK(0x119125a3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000265c @ 0x1191265c (153 bytes, 62 insns) */
void f_1191265c(void) {
  FTRACE(0x1191265cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191265c push ebp */
  push32((uint32_t)(EBP));
  /* 1191265d mov ebp, esp */
  EBP = (ESP);
  /* 1191265f push ecx */
  push32((uint32_t)(ECX));
  /* 11912660 push ecx */
  push32((uint32_t)(ECX));
  /* 11912661 push ebx */
  push32((uint32_t)(EBX));
  /* 11912662 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11912664 cmp dword ptr [0x1191a8e8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191266a push esi */
  push32((uint32_t)(ESI));
  /* 1191266b push edi */
  push32((uint32_t)(EDI));
  /* 1191266c jne 0x11912673 */
  if (!C.zf) goto L_11912673;
  /* 1191266e call 0x11913793 */
  push32(0x11912673u); f_11913793();
L_11912673:;
  /* 11912673 mov esi, 0x1191a284 */
  ESI = (0x1191a284u);
  /* 11912678 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1191267d push esi */
  push32((uint32_t)(ESI));
  /* 1191267e push ebx */
  push32((uint32_t)(EBX));
  /* 1191267f call dword ptr [0x1191609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191609c))), 0x11912685u);
  /* 11912685 mov eax, dword ptr [0x1191a8f8] */
  EAX = (r32((uint32_t)(0x1191a8f8)));
  /* 1191268a mov dword ptr [0x1191a270], esi */
  w32((uint32_t)(0x1191a270), (ESI));
  /* 11912690 mov edi, esi */
  EDI = (ESI);
  /* 11912692 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912694 je 0x11912698 */
  if (C.zf) goto L_11912698;
  /* 11912696 mov edi, eax */
  EDI = (EAX);
L_11912698:;
  /* 11912698 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1191269b push eax */
  push32((uint32_t)(EAX));
  /* 1191269c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1191269f push eax */
  push32((uint32_t)(EAX));
  /* 119126a0 push ebx */
  push32((uint32_t)(EBX));
  /* 119126a1 push ebx */
  push32((uint32_t)(EBX));
  /* 119126a2 push edi */
  push32((uint32_t)(EDI));
  /* 119126a3 call 0x119126f5 */
  push32(0x119126a8u); f_119126f5();
  /* 119126a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 119126ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119126ae lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 119126b1 push eax */
  push32((uint32_t)(EAX));
  /* 119126b2 call 0x11913112 */
  push32(0x119126b7u); f_11913112();
  /* 119126b7 mov esi, eax */
  ESI = (EAX);
  /* 119126b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119126bc cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119126be jne 0x119126c8 */
  if (!C.zf) goto L_119126c8;
  /* 119126c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 119126c2 call 0x119120b6 */
  push32(0x119126c7u); f_119120b6();
  /* 119126c7 pop ecx */
  ECX = (pop32());
L_119126c8:;
  /* 119126c8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 119126cb push eax */
  push32((uint32_t)(EAX));
  /* 119126cc lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 119126cf push eax */
  push32((uint32_t)(EAX));
  /* 119126d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119126d3 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 119126d6 push eax */
  push32((uint32_t)(EAX));
  /* 119126d7 push esi */
  push32((uint32_t)(ESI));
  /* 119126d8 push edi */
  push32((uint32_t)(EDI));
  /* 119126d9 call 0x119126f5 */
  push32(0x119126deu); f_119126f5();
  /* 119126de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119126e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119126e4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119126e5 mov dword ptr [0x1191a258], esi */
  w32((uint32_t)(0x1191a258), (ESI));
  /* 119126eb pop edi */
  EDI = (pop32());
  /* 119126ec pop esi */
  ESI = (pop32());
  /* 119126ed mov dword ptr [0x1191a254], eax */
  w32((uint32_t)(0x1191a254), (EAX));
  /* 119126f2 pop ebx */
  EBX = (pop32());
  /* 119126f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119126f4 ret  */
  ESPCHK(0x1191265cu, _esp0);
  ESP += 4; return;
}

/* FUN_100026f5 @ 0x119126f5 (436 bytes, 187 insns) */
void f_119126f5(void) {
  FTRACE(0x119126f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119126f5 push ebp */
  push32((uint32_t)(EBP));
  /* 119126f6 mov ebp, esp */
  EBP = (ESP);
  /* 119126f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 119126fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119126fe push ebx */
  push32((uint32_t)(EBX));
  /* 119126ff push esi */
  push32((uint32_t)(ESI));
  /* 11912700 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11912703 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11912706 push edi */
  push32((uint32_t)(EDI));
  /* 11912707 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1191270a mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11912710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11912713 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11912715 je 0x1191271f */
  if (C.zf) goto L_1191271f;
  /* 11912717 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11912719 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191271c mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_1191271f:;
  /* 1191271f cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912722 jne 0x11912768 */
  if (!C.zf) goto L_11912768;
L_11912724:;
  /* 11912724 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11912727 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912728 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191272b je 0x11912756 */
  if (C.zf) goto L_11912756;
  /* 1191272d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1191272f je 0x11912756 */
  if (C.zf) goto L_11912756;
  /* 11912731 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11912734 test byte ptr [edx + 0x1191a6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1191a6c1)))&(0x4u); fl_logic(_r,8); }
  /* 1191273b je 0x11912749 */
  if (C.zf) goto L_11912749;
  /* 1191273d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1191273f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11912741 je 0x11912749 */
  if (C.zf) goto L_11912749;
  /* 11912743 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11912745 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11912747 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11912748 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11912749:;
  /* 11912749 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1191274b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191274d je 0x11912724 */
  if (C.zf) goto L_11912724;
  /* 1191274f mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11912751 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11912753 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11912754 jmp 0x11912724 */
  goto L_11912724;
L_11912756:;
  /* 11912756 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11912758 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191275a je 0x11912760 */
  if (C.zf) goto L_11912760;
  /* 1191275c and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 1191275f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11912760:;
  /* 11912760 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912763 jne 0x119127ab */
  if (!C.zf) goto L_119127ab;
  /* 11912765 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912766 jmp 0x119127ab */
  goto L_119127ab;
L_11912768:;
  /* 11912768 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1191276a test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191276c je 0x11912773 */
  if (C.zf) goto L_11912773;
  /* 1191276e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11912770 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11912772 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11912773:;
  /* 11912773 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11912775 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912776 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11912779 test byte ptr [ebx + 0x1191a6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1191a6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11912780 je 0x1191278e */
  if (C.zf) goto L_1191278e;
  /* 11912782 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11912784 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11912786 je 0x1191278d */
  if (C.zf) goto L_1191278d;
  /* 11912788 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1191278a mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 1191278c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1191278d:;
  /* 1191278d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1191278e:;
  /* 1191278e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912791 je 0x1191279c */
  if (C.zf) goto L_1191279c;
  /* 11912793 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11912795 je 0x119127a0 */
  if (C.zf) goto L_119127a0;
  /* 11912797 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191279a jne 0x11912768 */
  if (!C.zf) goto L_11912768;
L_1191279c:;
  /* 1191279c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1191279e jne 0x119127a3 */
  if (!C.zf) goto L_119127a3;
L_119127a0:;
  /* 119127a0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119127a1 jmp 0x119127ab */
  goto L_119127ab;
L_119127a3:;
  /* 119127a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 119127a5 je 0x119127ab */
  if (C.zf) goto L_119127ab;
  /* 119127a7 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_119127ab:;
  /* 119127ab and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_119127af:;
  /* 119127af cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127b2 je 0x11912898 */
  if (C.zf) goto L_11912898;
L_119127b8:;
  /* 119127b8 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 119127ba cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127bd je 0x119127c4 */
  if (C.zf) goto L_119127c4;
  /* 119127bf cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127c2 jne 0x119127c7 */
  if (!C.zf) goto L_119127c7;
L_119127c4:;
  /* 119127c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119127c5 jmp 0x119127b8 */
  goto L_119127b8;
L_119127c7:;
  /* 119127c7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127ca je 0x11912898 */
  if (C.zf) goto L_11912898;
  /* 119127d0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 119127d2 je 0x119127dc */
  if (C.zf) goto L_119127dc;
  /* 119127d4 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 119127d6 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119127d9 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_119127dc:;
  /* 119127dc mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 119127df inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_119127e1:;
  /* 119127e1 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 119127e8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_119127ea:;
  /* 119127ea cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127ed jne 0x119127f3 */
  if (!C.zf) goto L_119127f3;
  /* 119127ef inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119127f0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 119127f1 jmp 0x119127ea */
  goto L_119127ea;
L_119127f3:;
  /* 119127f3 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119127f6 jne 0x11912824 */
  if (!C.zf) goto L_11912824;
  /* 119127f8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 119127fb jne 0x11912822 */
  if (!C.zf) goto L_11912822;
  /* 119127fd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119127ff cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912802 je 0x11912811 */
  if (C.zf) goto L_11912811;
  /* 11912804 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912808 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 1191280b jne 0x11912811 */
  if (!C.zf) goto L_11912811;
  /* 1191280d mov eax, edx */
  EAX = (EDX);
  /* 1191280f jmp 0x11912814 */
  goto L_11912814;
L_11912811:;
  /* 11912811 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11912814:;
  /* 11912814 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11912817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11912819 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191281c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1191281f mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11912822:;
  /* 11912822 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11912824:;
  /* 11912824 mov edx, ebx */
  EDX = (EBX);
  /* 11912826 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11912827 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11912829 je 0x11912839 */
  if (C.zf) goto L_11912839;
  /* 1191282b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_1191282c:;
  /* 1191282c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191282e je 0x11912834 */
  if (C.zf) goto L_11912834;
  /* 11912830 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11912833 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11912834:;
  /* 11912834 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11912836 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11912837 jne 0x1191282c */
  if (!C.zf) goto L_1191282c;
L_11912839:;
  /* 11912839 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1191283b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1191283d je 0x11912889 */
  if (C.zf) goto L_11912889;
  /* 1191283f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912843 jne 0x1191284f */
  if (!C.zf) goto L_1191284f;
  /* 11912845 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912848 je 0x11912889 */
  if (C.zf) goto L_11912889;
  /* 1191284a cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191284d je 0x11912889 */
  if (C.zf) goto L_11912889;
L_1191284f:;
  /* 1191284f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912853 je 0x11912883 */
  if (C.zf) goto L_11912883;
  /* 11912855 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11912857 je 0x11912872 */
  if (C.zf) goto L_11912872;
  /* 11912859 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 1191285c test byte ptr [ebx + 0x1191a6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x1191a6c1)))&(0x4u); fl_logic(_r,8); }
  /* 11912863 je 0x1191286b */
  if (C.zf) goto L_1191286b;
  /* 11912865 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11912867 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11912868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912869 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1191286b:;
  /* 1191286b mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1191286d mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1191286f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11912870 jmp 0x11912881 */
  goto L_11912881;
L_11912872:;
  /* 11912872 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11912875 test byte ptr [edx + 0x1191a6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x1191a6c1)))&(0x4u); fl_logic(_r,8); }
  /* 1191287c je 0x11912881 */
  if (C.zf) goto L_11912881;
  /* 1191287e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191287f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11912881:;
  /* 11912881 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11912883:;
  /* 11912883 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912884 jmp 0x119127e1 */
  goto L_119127e1;
L_11912889:;
  /* 11912889 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191288b je 0x11912891 */
  if (C.zf) goto L_11912891;
  /* 1191288d and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11912890 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11912891:;
  /* 11912891 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11912893 jmp 0x119127af */
  goto L_119127af;
L_11912898:;
  /* 11912898 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1191289a je 0x1191289f */
  if (C.zf) goto L_1191289f;
  /* 1191289c and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1191289f:;
  /* 1191289f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 119128a2 pop edi */
  EDI = (pop32());
  /* 119128a3 pop esi */
  ESI = (pop32());
  /* 119128a4 pop ebx */
  EBX = (pop32());
  /* 119128a5 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 119128a7 pop ebp */
  EBP = (pop32());
  /* 119128a8 ret  */
  ESPCHK(0x119126f5u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a9 @ 0x119128a9 (306 bytes, 132 insns) */
void f_119128a9(void) {
  FTRACE(0x119128a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119128a9 push ecx */
  push32((uint32_t)(ECX));
  /* 119128aa push ecx */
  push32((uint32_t)(ECX));
  /* 119128ab mov eax, dword ptr [0x1191a388] */
  EAX = (r32((uint32_t)(0x1191a388)));
  /* 119128b0 push ebx */
  push32((uint32_t)(EBX));
  /* 119128b1 push ebp */
  push32((uint32_t)(EBP));
  /* 119128b2 mov ebp, dword ptr [0x119160ac] */
  EBP = (r32((uint32_t)(0x119160ac)));
  /* 119128b8 push esi */
  push32((uint32_t)(ESI));
  /* 119128b9 push edi */
  push32((uint32_t)(EDI));
  /* 119128ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119128bc xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119128be xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119128c0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119128c2 jne 0x119128f7 */
  if (!C.zf) goto L_119128f7;
  /* 119128c4 call ebp */
  call_ind((uint32_t)(EBP), 0x119128c6u);
  /* 119128c6 mov esi, eax */
  ESI = (EAX);
  /* 119128c8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119128ca je 0x119128d8 */
  if (C.zf) goto L_119128d8;
  /* 119128cc mov dword ptr [0x1191a388], 1 */
  w32((uint32_t)(0x1191a388), (0x1u));
  /* 119128d6 jmp 0x11912900 */
  goto L_11912900;
L_119128d8:;
  /* 119128d8 call dword ptr [0x1191608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191608c))), 0x119128deu);
  /* 119128de mov edi, eax */
  EDI = (EAX);
  /* 119128e0 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119128e2 je 0x119129d2 */
  if (C.zf) goto L_119129d2;
  /* 119128e8 mov dword ptr [0x1191a388], 2 */
  w32((uint32_t)(0x1191a388), (0x2u));
  /* 119128f2 jmp 0x11912986 */
  goto L_11912986;
L_119128f7:;
  /* 119128f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119128fa jne 0x11912981 */
  if (!C.zf) goto L_11912981;
L_11912900:;
  /* 11912900 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912902 jne 0x11912910 */
  if (!C.zf) goto L_11912910;
  /* 11912904 call ebp */
  call_ind((uint32_t)(EBP), 0x11912906u);
  /* 11912906 mov esi, eax */
  ESI = (EAX);
  /* 11912908 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191290a je 0x119129d2 */
  if (C.zf) goto L_119129d2;
L_11912910:;
  /* 11912910 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11912913 mov eax, esi */
  EAX = (ESI);
  /* 11912915 je 0x11912925 */
  if (C.zf) goto L_11912925;
L_11912917:;
  /* 11912917 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912918 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912919 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1191291c jne 0x11912917 */
  if (!C.zf) goto L_11912917;
  /* 1191291e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191291f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912920 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11912923 jne 0x11912917 */
  if (!C.zf) goto L_11912917;
L_11912925:;
  /* 11912925 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912927 mov edi, dword ptr [0x119160a8] */
  EDI = (r32((uint32_t)(0x119160a8)));
  /* 1191292d sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1191292f push ebx */
  push32((uint32_t)(EBX));
  /* 11912930 push ebx */
  push32((uint32_t)(EBX));
  /* 11912931 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912932 push ebx */
  push32((uint32_t)(EBX));
  /* 11912933 push ebx */
  push32((uint32_t)(EBX));
  /* 11912934 push eax */
  push32((uint32_t)(EAX));
  /* 11912935 push esi */
  push32((uint32_t)(ESI));
  /* 11912936 push ebx */
  push32((uint32_t)(EBX));
  /* 11912937 push ebx */
  push32((uint32_t)(EBX));
  /* 11912938 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 1191293c call edi */
  call_ind((uint32_t)(EDI), 0x1191293eu);
  /* 1191293e mov ebp, eax */
  EBP = (EAX);
  /* 11912940 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912942 je 0x11912976 */
  if (C.zf) goto L_11912976;
  /* 11912944 push ebp */
  push32((uint32_t)(EBP));
  /* 11912945 call 0x11913112 */
  push32(0x1191294au); f_11913112();
  /* 1191294a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191294c pop ecx */
  ECX = (pop32());
  /* 1191294d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11912951 je 0x11912976 */
  if (C.zf) goto L_11912976;
  /* 11912953 push ebx */
  push32((uint32_t)(EBX));
  /* 11912954 push ebx */
  push32((uint32_t)(EBX));
  /* 11912955 push ebp */
  push32((uint32_t)(EBP));
  /* 11912956 push eax */
  push32((uint32_t)(EAX));
  /* 11912957 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 1191295b push esi */
  push32((uint32_t)(ESI));
  /* 1191295c push ebx */
  push32((uint32_t)(EBX));
  /* 1191295d push ebx */
  push32((uint32_t)(EBX));
  /* 1191295e call edi */
  call_ind((uint32_t)(EDI), 0x11912960u);
  /* 11912960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912962 jne 0x11912972 */
  if (!C.zf) goto L_11912972;
  /* 11912964 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11912968 call 0x11913029 */
  push32(0x1191296du); f_11913029();
  /* 1191296d pop ecx */
  ECX = (pop32());
  /* 1191296e mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11912972:;
  /* 11912972 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11912976:;
  /* 11912976 push esi */
  push32((uint32_t)(ESI));
  /* 11912977 call dword ptr [0x119160a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160a4))), 0x1191297du);
  /* 1191297d mov eax, ebx */
  EAX = (EBX);
  /* 1191297f jmp 0x119129d4 */
  goto L_119129d4;
L_11912981:;
  /* 11912981 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912984 jne 0x119129d2 */
  if (!C.zf) goto L_119129d2;
L_11912986:;
  /* 11912986 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912988 jne 0x11912996 */
  if (!C.zf) goto L_11912996;
  /* 1191298a call dword ptr [0x1191608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191608c))), 0x11912990u);
  /* 11912990 mov edi, eax */
  EDI = (EAX);
  /* 11912992 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912994 je 0x119129d2 */
  if (C.zf) goto L_119129d2;
L_11912996:;
  /* 11912996 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912998 mov eax, edi */
  EAX = (EDI);
  /* 1191299a je 0x119129a6 */
  if (C.zf) goto L_119129a6;
L_1191299c:;
  /* 1191299c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191299d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191299f jne 0x1191299c */
  if (!C.zf) goto L_1191299c;
  /* 119129a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119129a2 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119129a4 jne 0x1191299c */
  if (!C.zf) goto L_1191299c;
L_119129a6:;
  /* 119129a6 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119129a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119129a9 mov ebp, eax */
  EBP = (EAX);
  /* 119129ab push ebp */
  push32((uint32_t)(EBP));
  /* 119129ac call 0x11913112 */
  push32(0x119129b1u); f_11913112();
  /* 119129b1 mov esi, eax */
  ESI = (EAX);
  /* 119129b3 pop ecx */
  ECX = (pop32());
  /* 119129b4 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119129b6 jne 0x119129bc */
  if (!C.zf) goto L_119129bc;
  /* 119129b8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119129ba jmp 0x119129c7 */
  goto L_119129c7;
L_119129bc:;
  /* 119129bc push ebp */
  push32((uint32_t)(EBP));
  /* 119129bd push edi */
  push32((uint32_t)(EDI));
  /* 119129be push esi */
  push32((uint32_t)(ESI));
  /* 119129bf call 0x119137b0 */
  push32(0x119129c4u); f_119137b0();
  /* 119129c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119129c7:;
  /* 119129c7 push edi */
  push32((uint32_t)(EDI));
  /* 119129c8 call dword ptr [0x119160a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160a0))), 0x119129ceu);
  /* 119129ce mov eax, esi */
  EAX = (ESI);
  /* 119129d0 jmp 0x119129d4 */
  goto L_119129d4;
L_119129d2:;
  /* 119129d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119129d4:;
  /* 119129d4 pop edi */
  EDI = (pop32());
  /* 119129d5 pop esi */
  ESI = (pop32());
  /* 119129d6 pop ebp */
  EBP = (pop32());
  /* 119129d7 pop ebx */
  EBX = (pop32());
  /* 119129d8 pop ecx */
  ECX = (pop32());
  /* 119129d9 pop ecx */
  ECX = (pop32());
  /* 119129da ret  */
  ESPCHK(0x119128a9u, _esp0);
  ESP += 4; return;
}

/* FUN_100029db @ 0x119129db (45 bytes, 17 insns) */
void f_119129db(void) {
  FTRACE(0x119129dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119129db push esi */
  push32((uint32_t)(ESI));
  /* 119129dc mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 119129e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119129e2 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 119129e5 call dword ptr [0x119160b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160b0))), 0x119129ebu);
  /* 119129eb cmp word ptr [eax], 0x5a4d */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(0x5a4du),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 119129f0 jne 0x11912a06 */
  if (!C.zf) goto L_11912a06;
  /* 119129f2 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 119129f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119129f7 je 0x11912a06 */
  if (C.zf) goto L_11912a06;
  /* 119129f9 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119129fb mov cl, byte ptr [eax + 0x1a] */
  CL = (r8((uint32_t)(EAX + 0x1a)));
  /* 119129fe mov byte ptr [esi], cl */
  w8((uint32_t)(ESI), (CL));
  /* 11912a00 mov al, byte ptr [eax + 0x1b] */
  AL = (r8((uint32_t)(EAX + 0x1b)));
  /* 11912a03 mov byte ptr [esi + 1], al */
  w8((uint32_t)(ESI + 0x1), (AL));
L_11912a06:;
  /* 11912a06 pop esi */
  ESI = (pop32());
  /* 11912a07 ret  */
  ESPCHK(0x119129dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a08 @ 0x11912a08 (328 bytes, 115 insns) */
void f_11912a08(void) {
  FTRACE(0x11912a08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912a08 push ebp */
  push32((uint32_t)(EBP));
  /* 11912a09 mov ebp, esp */
  EBP = (ESP);
  /* 11912a0b mov eax, 0x122c */
  EAX = (0x122cu);
  /* 11912a10 call 0x11913ea0 */
  push32(0x11912a15u); f_11913ea0();
  /* 11912a15 lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11912a1b push ebx */
  push32((uint32_t)(EBX));
  /* 11912a1c push eax */
  push32((uint32_t)(EAX));
  /* 11912a1d mov dword ptr [ebp - 0x98], 0x94 */
  w32((uint32_t)(EBP + -0x98), (0x94u));
  /* 11912a27 call dword ptr [0x119160b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160b8))), 0x11912a2du);
  /* 11912a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912a2f je 0x11912a4b */
  if (C.zf) goto L_11912a4b;
  /* 11912a31 cmp dword ptr [ebp - 0x88], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912a38 jne 0x11912a4b */
  if (!C.zf) goto L_11912a4b;
  /* 11912a3a cmp dword ptr [ebp - 0x94], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912a41 jb 0x11912a4b */
  if (C.cf) goto L_11912a4b;
  /* 11912a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912a45 pop eax */
  EAX = (pop32());
  /* 11912a46 jmp 0x11912b4d */
  goto L_11912b4d;
L_11912a4b:;
  /* 11912a4b lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11912a51 push 0x1090 */
  push32((uint32_t)(0x1090u));
  /* 11912a56 push eax */
  push32((uint32_t)(EAX));
  /* 11912a57 push 0x11916178 */
  push32((uint32_t)(0x11916178u));
  /* 11912a5c call dword ptr [0x119160b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160b4))), 0x11912a62u);
  /* 11912a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912a64 je 0x11912b3a */
  if (C.zf) goto L_11912b3a;
  /* 11912a6a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11912a6c lea ecx, [ebp - 0x122c] */
  ECX = ((uint32_t)(EBP + -0x122c));
  /* 11912a72 cmp byte ptr [ebp - 0x122c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x122c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912a78 je 0x11912a8d */
  if (C.zf) goto L_11912a8d;
L_11912a7a:;
  /* 11912a7a mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11912a7c cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912a7e jl 0x11912a88 */
  if ((C.sf!=C.of)) goto L_11912a88;
  /* 11912a80 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912a82 jg 0x11912a88 */
  if ((!C.zf&&C.sf==C.of)) goto L_11912a88;
  /* 11912a84 sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11912a86 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11912a88:;
  /* 11912a88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11912a89 cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912a8b jne 0x11912a7a */
  if (!C.zf) goto L_11912a7a;
L_11912a8d:;
  /* 11912a8d lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11912a93 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11912a95 push eax */
  push32((uint32_t)(EAX));
  /* 11912a96 push 0x11916160 */
  push32((uint32_t)(0x11916160u));
  /* 11912a9b call 0x11913e60 */
  push32(0x11912aa0u); f_11913e60();
  /* 11912aa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912aa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912aa5 jne 0x11912aaf */
  if (!C.zf) goto L_11912aaf;
  /* 11912aa7 lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11912aad jmp 0x11912af8 */
  goto L_11912af8;
L_11912aaf:;
  /* 11912aaf lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11912ab5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11912aba push eax */
  push32((uint32_t)(EAX));
  /* 11912abb push ebx */
  push32((uint32_t)(EBX));
  /* 11912abc call dword ptr [0x1191609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191609c))), 0x11912ac2u);
  /* 11912ac2 cmp byte ptr [ebp - 0x19c], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x19c))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912ac8 lea ecx, [ebp - 0x19c] */
  ECX = ((uint32_t)(EBP + -0x19c));
  /* 11912ace je 0x11912ae3 */
  if (C.zf) goto L_11912ae3;
L_11912ad0:;
  /* 11912ad0 mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11912ad2 cmp al, 0x61 */
  { uint32_t _a=(AL),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912ad4 jl 0x11912ade */
  if ((C.sf!=C.of)) goto L_11912ade;
  /* 11912ad6 cmp al, 0x7a */
  { uint32_t _a=(AL),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912ad8 jg 0x11912ade */
  if ((!C.zf&&C.sf==C.of)) goto L_11912ade;
  /* 11912ada sub al, 0x20 */
  { uint32_t _a=(AL),_b=(0x20u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11912adc mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
L_11912ade:;
  /* 11912ade inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11912adf cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912ae1 jne 0x11912ad0 */
  if (!C.zf) goto L_11912ad0;
L_11912ae3:;
  /* 11912ae3 lea eax, [ebp - 0x19c] */
  EAX = ((uint32_t)(EBP + -0x19c));
  /* 11912ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11912aea lea eax, [ebp - 0x122c] */
  EAX = ((uint32_t)(EBP + -0x122c));
  /* 11912af0 push eax */
  push32((uint32_t)(EAX));
  /* 11912af1 call 0x11913de0 */
  push32(0x11912af6u); f_11913de0();
  /* 11912af6 pop ecx */
  ECX = (pop32());
  /* 11912af7 pop ecx */
  ECX = (pop32());
L_11912af8:;
  /* 11912af8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912afa je 0x11912b3a */
  if (C.zf) goto L_11912b3a;
  /* 11912afc push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 11912afe push eax */
  push32((uint32_t)(EAX));
  /* 11912aff call 0x11913d20 */
  push32(0x11912b04u); f_11913d20();
  /* 11912b04 pop ecx */
  ECX = (pop32());
  /* 11912b05 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b07 pop ecx */
  ECX = (pop32());
  /* 11912b08 je 0x11912b3a */
  if (C.zf) goto L_11912b3a;
  /* 11912b0a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912b0b mov ecx, eax */
  ECX = (EAX);
  /* 11912b0d cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912b0f je 0x11912b1f */
  if (C.zf) goto L_11912b1f;
L_11912b11:;
  /* 11912b11 cmp byte ptr [ecx], 0x3b */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912b14 jne 0x11912b1a */
  if (!C.zf) goto L_11912b1a;
  /* 11912b16 mov byte ptr [ecx], bl */
  w8((uint32_t)(ECX), (BL));
  /* 11912b18 jmp 0x11912b1b */
  goto L_11912b1b;
L_11912b1a:;
  /* 11912b1a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
L_11912b1b:;
  /* 11912b1b cmp byte ptr [ecx], bl */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912b1d jne 0x11912b11 */
  if (!C.zf) goto L_11912b11;
L_11912b1f:;
  /* 11912b1f push 0xa */
  push32((uint32_t)(0xau));
  /* 11912b21 push ebx */
  push32((uint32_t)(EBX));
  /* 11912b22 push eax */
  push32((uint32_t)(EAX));
  /* 11912b23 call 0x11913ae5 */
  push32(0x11912b28u); f_11913ae5();
  /* 11912b28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912b2b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b2e je 0x11912b4d */
  if (C.zf) goto L_11912b4d;
  /* 11912b30 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b33 je 0x11912b4d */
  if (C.zf) goto L_11912b4d;
  /* 11912b35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b38 je 0x11912b4d */
  if (C.zf) goto L_11912b4d;
L_11912b3a:;
  /* 11912b3a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11912b3d push eax */
  push32((uint32_t)(EAX));
  /* 11912b3e call 0x119129db */
  push32(0x11912b43u); f_119129db();
  /* 11912b43 cmp byte ptr [ebp - 4], 6 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11912b47 pop ecx */
  ECX = (pop32());
  /* 11912b48 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912b4a add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11912b4d:;
  /* 11912b4d pop ebx */
  EBX = (pop32());
  /* 11912b4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11912b4f ret  */
  ESPCHK(0x11912a08u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b50 @ 0x11912b50 (93 bytes, 30 insns) */
void f_11912b50(void) {
  FTRACE(0x11912b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11912b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912b54 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b58 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11912b5d sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11912b60 push eax */
  push32((uint32_t)(EAX));
  /* 11912b61 call dword ptr [0x119160c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160c0))), 0x11912b67u);
  /* 11912b67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912b69 mov dword ptr [0x1191a7c8], eax */
  w32((uint32_t)(0x1191a7c8), (EAX));
  /* 11912b6e je 0x11912ba6 */
  if (C.zf) goto L_11912ba6;
  /* 11912b70 call 0x11912a08 */
  push32(0x11912b75u); f_11912a08();
  /* 11912b75 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b78 mov dword ptr [0x1191a7cc], eax */
  w32((uint32_t)(0x1191a7cc), (EAX));
  /* 11912b7d jne 0x11912b8c */
  if (!C.zf) goto L_11912b8c;
  /* 11912b7f push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 11912b84 call 0x11913ecf */
  push32(0x11912b89u); f_11913ecf();
  /* 11912b89 pop ecx */
  ECX = (pop32());
  /* 11912b8a jmp 0x11912b96 */
  goto L_11912b96;
L_11912b8c:;
  /* 11912b8c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912b8f jne 0x11912ba9 */
  if (!C.zf) goto L_11912ba9;
  /* 11912b91 call 0x11914720 */
  push32(0x11912b96u); f_11914720();
L_11912b96:;
  /* 11912b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912b98 jne 0x11912ba9 */
  if (!C.zf) goto L_11912ba9;
  /* 11912b9a push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11912ba0 call dword ptr [0x119160bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160bc))), 0x11912ba6u);
L_11912ba6:;
  /* 11912ba6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11912ba8 ret  */
  ESPCHK(0x11912b50u, _esp0);
  ESP += 4; return;
L_11912ba9:;
  /* 11912ba9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912bab pop eax */
  EAX = (pop32());
  /* 11912bac ret  */
  ESPCHK(0x11912b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bad @ 0x11912bad (168 bytes, 56 insns) */
void f_11912bad(void) {
  FTRACE(0x11912badu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912bad mov eax, dword ptr [0x1191a7cc] */
  EAX = (r32((uint32_t)(0x1191a7cc)));
  /* 11912bb2 push esi */
  push32((uint32_t)(ESI));
  /* 11912bb3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912bb6 push edi */
  push32((uint32_t)(EDI));
  /* 11912bb7 jne 0x11912c1f */
  if (!C.zf) goto L_11912c1f;
  /* 11912bb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11912bba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11912bbc cmp dword ptr [0x1191a598], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a598))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912bc2 push ebp */
  push32((uint32_t)(EBP));
  /* 11912bc3 mov ebp, dword ptr [0x11916054] */
  EBP = (r32((uint32_t)(0x11916054)));
  /* 11912bc9 jle 0x11912c0b */
  if ((C.zf||C.sf!=C.of)) goto L_11912c0b;
  /* 11912bcb mov eax, dword ptr [0x1191a59c] */
  EAX = (r32((uint32_t)(0x1191a59c)));
  /* 11912bd0 mov edi, dword ptr [0x119160c4] */
  EDI = (r32((uint32_t)(0x119160c4)));
  /* 11912bd6 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11912bd9:;
  /* 11912bd9 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11912bde push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11912be3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912be5 call edi */
  call_ind((uint32_t)(EDI), 0x11912be7u);
  /* 11912be7 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11912bec push 0 */
  push32((uint32_t)(0x0u));
  /* 11912bee push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912bf0 call edi */
  call_ind((uint32_t)(EDI), 0x11912bf2u);
  /* 11912bf2 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11912bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912bf7 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11912bfd call ebp */
  call_ind((uint32_t)(EBP), 0x11912bffu);
  /* 11912bff add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912c02 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11912c03 cmp ebx, dword ptr [0x1191a598] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1191a598))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912c09 jl 0x11912bd9 */
  if ((C.sf!=C.of)) goto L_11912bd9;
L_11912c0b:;
  /* 11912c0b push dword ptr [0x1191a59c] */
  push32((uint32_t)(r32((uint32_t)(0x1191a59c))));
  /* 11912c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912c13 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11912c19 call ebp */
  call_ind((uint32_t)(EBP), 0x11912c1bu);
  /* 11912c1b pop ebp */
  EBP = (pop32());
  /* 11912c1c pop ebx */
  EBX = (pop32());
  /* 11912c1d jmp 0x11912c46 */
  goto L_11912c46;
L_11912c1f:;
  /* 11912c1f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912c22 jne 0x11912c46 */
  if (!C.zf) goto L_11912c46;
  /* 11912c24 mov edi, 0x119176e0 */
  EDI = (0x119176e0u);
  /* 11912c29 mov esi, edi */
  ESI = (EDI);
L_11912c2b:;
  /* 11912c2b mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11912c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912c30 je 0x11912c40 */
  if (C.zf) goto L_11912c40;
  /* 11912c32 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11912c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912c39 push eax */
  push32((uint32_t)(EAX));
  /* 11912c3a call dword ptr [0x119160c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160c4))), 0x11912c40u);
L_11912c40:;
  /* 11912c40 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11912c42 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912c44 jne 0x11912c2b */
  if (!C.zf) goto L_11912c2b;
L_11912c46:;
  /* 11912c46 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11912c4c call dword ptr [0x119160bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160bc))), 0x11912c52u);
  /* 11912c52 pop edi */
  EDI = (pop32());
  /* 11912c53 pop esi */
  ESI = (pop32());
  /* 11912c54 ret  */
  ESPCHK(0x11912badu, _esp0);
  ESP += 4; return;
}

/* FUN_10002c55 @ 0x11912c55 (57 bytes, 18 insns) */
void f_11912c55(void) {
  FTRACE(0x11912c55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912c55 mov eax, dword ptr [0x1191a238] */
  EAX = (r32((uint32_t)(0x1191a238)));
  /* 11912c5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912c5d je 0x11912c6c */
  if (C.zf) goto L_11912c6c;
  /* 11912c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912c61 jne 0x11912c8d */
  if (!C.zf) goto L_11912c8d;
  /* 11912c63 cmp dword ptr [0x1191a23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1191a23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912c6a jne 0x11912c8d */
  if (!C.zf) goto L_11912c8d;
L_11912c6c:;
  /* 11912c6c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11912c71 call 0x11912c8e */
  push32(0x11912c76u); f_11912c8e();
  /* 11912c76 mov eax, dword ptr [0x1191a38c] */
  EAX = (r32((uint32_t)(0x1191a38c)));
  /* 11912c7b pop ecx */
  ECX = (pop32());
  /* 11912c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912c7e je 0x11912c82 */
  if (C.zf) goto L_11912c82;
  /* 11912c80 call eax */
  call_ind((uint32_t)(EAX), 0x11912c82u);
L_11912c82:;
  /* 11912c82 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11912c87 call 0x11912c8e */
  push32(0x11912c8cu); f_11912c8e();
  /* 11912c8c pop ecx */
  ECX = (pop32());
L_11912c8d:;
  /* 11912c8d ret  */
  ESPCHK(0x11912c55u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c8e @ 0x11912c8e (339 bytes, 100 insns) */
void f_11912c8e(void) {
  FTRACE(0x11912c8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912c8e push ebp */
  push32((uint32_t)(EBP));
  /* 11912c8f mov ebp, esp */
  EBP = (ESP);
  /* 11912c91 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11912c9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11912c9c mov eax, 0x11917400 */
  EAX = (0x11917400u);
L_11912ca1:;
  /* 11912ca1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912ca3 je 0x11912cb0 */
  if (C.zf) goto L_11912cb0;
  /* 11912ca5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11912ca8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11912ca9 cmp eax, 0x11917490 */
  { uint32_t _a=(EAX),_b=(0x11917490u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912cae jl 0x11912ca1 */
  if ((C.sf!=C.of)) goto L_11912ca1;
L_11912cb0:;
  /* 11912cb0 push esi */
  push32((uint32_t)(ESI));
  /* 11912cb1 mov esi, ecx */
  ESI = (ECX);
  /* 11912cb3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11912cb6 cmp edx, dword ptr [esi + 0x11917400] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11917400))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912cbc jne 0x11912dde */
  if (!C.zf) goto L_11912dde;
  /* 11912cc2 mov eax, dword ptr [0x1191a238] */
  EAX = (r32((uint32_t)(0x1191a238)));
  /* 11912cc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912cca je 0x11912db8 */
  if (C.zf) goto L_11912db8;
  /* 11912cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912cd2 jne 0x11912ce1 */
  if (!C.zf) goto L_11912ce1;
  /* 11912cd4 cmp dword ptr [0x1191a23c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1191a23c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912cdb je 0x11912db8 */
  if (C.zf) goto L_11912db8;
L_11912ce1:;
  /* 11912ce1 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912ce7 je 0x11912dde */
  if (C.zf) goto L_11912dde;
  /* 11912ced lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11912cf3 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11912cf8 push eax */
  push32((uint32_t)(EAX));
  /* 11912cf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912cfb call dword ptr [0x1191609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191609c))), 0x11912d01u);
  /* 11912d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912d03 jne 0x11912d18 */
  if (!C.zf) goto L_11912d18;
  /* 11912d05 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11912d0b push 0x11916468 */
  push32((uint32_t)(0x11916468u));
  /* 11912d10 push eax */
  push32((uint32_t)(EAX));
  /* 11912d11 call 0x11913250 */
  push32(0x11912d16u); f_11913250();
  /* 11912d16 pop ecx */
  ECX = (pop32());
  /* 11912d17 pop ecx */
  ECX = (pop32());
L_11912d18:;
  /* 11912d18 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11912d1e push edi */
  push32((uint32_t)(EDI));
  /* 11912d1f push eax */
  push32((uint32_t)(EAX));
  /* 11912d20 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11912d26 call 0x11913340 */
  push32(0x11912d2bu); f_11913340();
  /* 11912d2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11912d2c pop ecx */
  ECX = (pop32());
  /* 11912d2d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912d30 jbe 0x11912d5b */
  if ((C.cf||C.zf)) goto L_11912d5b;
  /* 11912d32 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11912d38 push eax */
  push32((uint32_t)(EAX));
  /* 11912d39 call 0x11913340 */
  push32(0x11912d3eu); f_11913340();
  /* 11912d3e mov edi, eax */
  EDI = (EAX);
  /* 11912d40 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11912d46 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912d49 push 3 */
  push32((uint32_t)(0x3u));
  /* 11912d4b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912d4d push 0x11916464 */
  push32((uint32_t)(0x11916464u));
  /* 11912d52 push edi */
  push32((uint32_t)(EDI));
  /* 11912d53 call 0x11914dd0 */
  push32(0x11912d58u); f_11914dd0();
  /* 11912d58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11912d5b:;
  /* 11912d5b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11912d61 push 0x11916448 */
  push32((uint32_t)(0x11916448u));
  /* 11912d66 push eax */
  push32((uint32_t)(EAX));
  /* 11912d67 call 0x11913250 */
  push32(0x11912d6cu); f_11913250();
  /* 11912d6c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11912d72 push edi */
  push32((uint32_t)(EDI));
  /* 11912d73 push eax */
  push32((uint32_t)(EAX));
  /* 11912d74 call 0x11913260 */
  push32(0x11912d79u); f_11913260();
  /* 11912d79 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11912d7f push 0x11916444 */
  push32((uint32_t)(0x11916444u));
  /* 11912d84 push eax */
  push32((uint32_t)(EAX));
  /* 11912d85 call 0x11913260 */
  push32(0x11912d8au); f_11913260();
  /* 11912d8a push dword ptr [esi + 0x11917404] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11917404))));
  /* 11912d90 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11912d96 push eax */
  push32((uint32_t)(EAX));
  /* 11912d97 call 0x11913260 */
  push32(0x11912d9cu); f_11913260();
  /* 11912d9c push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11912da1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11912da7 push 0x1191641c */
  push32((uint32_t)(0x1191641cu));
  /* 11912dac push eax */
  push32((uint32_t)(EAX));
  /* 11912dad call 0x11914d44 */
  push32(0x11912db2u); f_11914d44();
  /* 11912db2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11912db5 pop edi */
  EDI = (pop32());
  /* 11912db6 jmp 0x11912dde */
  goto L_11912dde;
L_11912db8:;
  /* 11912db8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11912dbb lea esi, [esi + 0x11917404] */
  ESI = ((uint32_t)(ESI + 0x11917404));
  /* 11912dc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11912dc3 push eax */
  push32((uint32_t)(EAX));
  /* 11912dc4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912dc6 call 0x11913340 */
  push32(0x11912dcbu); f_11913340();
  /* 11912dcb pop ecx */
  ECX = (pop32());
  /* 11912dcc push eax */
  push32((uint32_t)(EAX));
  /* 11912dcd push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912dcf push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11912dd1 call dword ptr [0x11916000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916000))), 0x11912dd7u);
  /* 11912dd7 push eax */
  push32((uint32_t)(EAX));
  /* 11912dd8 call dword ptr [0x11916050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916050))), 0x11912ddeu);
L_11912dde:;
  /* 11912dde pop esi */
  ESI = (pop32());
  /* 11912ddf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11912de0 ret  */
  ESPCHK(0x11912c8eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002de1 @ 0x11912de1 (41 bytes, 12 insns) */
void f_11912de1(void) {
  FTRACE(0x11912de1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912de1 push esi */
  push32((uint32_t)(ESI));
  /* 11912de2 mov esi, dword ptr [0x11916090] */
  ESI = (r32((uint32_t)(0x11916090)));
  /* 11912de8 push dword ptr [0x119174d4] */
  push32((uint32_t)(r32((uint32_t)(0x119174d4))));
  /* 11912dee call esi */
  call_ind((uint32_t)(ESI), 0x11912df0u);
  /* 11912df0 push dword ptr [0x119174c4] */
  push32((uint32_t)(r32((uint32_t)(0x119174c4))));
  /* 11912df6 call esi */
  call_ind((uint32_t)(ESI), 0x11912df8u);
  /* 11912df8 push dword ptr [0x119174b4] */
  push32((uint32_t)(r32((uint32_t)(0x119174b4))));
  /* 11912dfe call esi */
  call_ind((uint32_t)(ESI), 0x11912e00u);
  /* 11912e00 push dword ptr [0x11917494] */
  push32((uint32_t)(r32((uint32_t)(0x11917494))));
  /* 11912e06 call esi */
  call_ind((uint32_t)(ESI), 0x11912e08u);
  /* 11912e08 pop esi */
  ESI = (pop32());
  /* 11912e09 ret  */
  ESPCHK(0x11912de1u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e0a @ 0x11912e0a (108 bytes, 34 insns) */
void f_11912e0a(void) {
  FTRACE(0x11912e0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912e0a push esi */
  push32((uint32_t)(ESI));
  /* 11912e0b push edi */
  push32((uint32_t)(EDI));
  /* 11912e0c mov edi, dword ptr [0x11916098] */
  EDI = (r32((uint32_t)(0x11916098)));
  /* 11912e12 mov esi, 0x11917490 */
  ESI = (0x11917490u);
L_11912e17:;
  /* 11912e17 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11912e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11912e1b je 0x11912e48 */
  if (C.zf) goto L_11912e48;
  /* 11912e1d cmp esi, 0x119174d4 */
  { uint32_t _a=(ESI),_b=(0x119174d4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e23 je 0x11912e48 */
  if (C.zf) goto L_11912e48;
  /* 11912e25 cmp esi, 0x119174c4 */
  { uint32_t _a=(ESI),_b=(0x119174c4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e2b je 0x11912e48 */
  if (C.zf) goto L_11912e48;
  /* 11912e2d cmp esi, 0x119174b4 */
  { uint32_t _a=(ESI),_b=(0x119174b4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e33 je 0x11912e48 */
  if (C.zf) goto L_11912e48;
  /* 11912e35 cmp esi, 0x11917494 */
  { uint32_t _a=(ESI),_b=(0x11917494u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e3b je 0x11912e48 */
  if (C.zf) goto L_11912e48;
  /* 11912e3d push eax */
  push32((uint32_t)(EAX));
  /* 11912e3e call edi */
  call_ind((uint32_t)(EDI), 0x11912e40u);
  /* 11912e40 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912e42 call 0x11913029 */
  push32(0x11912e47u); f_11913029();
  /* 11912e47 pop ecx */
  ECX = (pop32());
L_11912e48:;
  /* 11912e48 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912e4b cmp esi, 0x11917550 */
  { uint32_t _a=(ESI),_b=(0x11917550u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e51 jl 0x11912e17 */
  if ((C.sf!=C.of)) goto L_11912e17;
  /* 11912e53 push dword ptr [0x119174b4] */
  push32((uint32_t)(r32((uint32_t)(0x119174b4))));
  /* 11912e59 call edi */
  call_ind((uint32_t)(EDI), 0x11912e5bu);
  /* 11912e5b push dword ptr [0x119174c4] */
  push32((uint32_t)(r32((uint32_t)(0x119174c4))));
  /* 11912e61 call edi */
  call_ind((uint32_t)(EDI), 0x11912e63u);
  /* 11912e63 push dword ptr [0x119174d4] */
  push32((uint32_t)(r32((uint32_t)(0x119174d4))));
  /* 11912e69 call edi */
  call_ind((uint32_t)(EDI), 0x11912e6bu);
  /* 11912e6b push dword ptr [0x11917494] */
  push32((uint32_t)(r32((uint32_t)(0x11917494))));
  /* 11912e71 call edi */
  call_ind((uint32_t)(EDI), 0x11912e73u);
  /* 11912e73 pop edi */
  EDI = (pop32());
  /* 11912e74 pop esi */
  ESI = (pop32());
  /* 11912e75 ret  */
  ESPCHK(0x11912e0au, _esp0);
  ESP += 4; return;
}

/* FUN_10002e76 @ 0x11912e76 (97 bytes, 37 insns) */
void f_11912e76(void) {
  FTRACE(0x11912e76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912e76 push ebp */
  push32((uint32_t)(EBP));
  /* 11912e77 mov ebp, esp */
  EBP = (ESP);
  /* 11912e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11912e7c push esi */
  push32((uint32_t)(ESI));
  /* 11912e7d cmp dword ptr [eax*4 + 0x11917490], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11917490))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912e85 lea esi, [eax*4 + 0x11917490] */
  ESI = ((uint32_t)(EAX*4 + 0x11917490));
  /* 11912e8c jne 0x11912ecc */
  if (!C.zf) goto L_11912ecc;
  /* 11912e8e push edi */
  push32((uint32_t)(EDI));
  /* 11912e8f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11912e91 call 0x11913112 */
  push32(0x11912e96u); f_11913112();
  /* 11912e96 mov edi, eax */
  EDI = (EAX);
  /* 11912e98 pop ecx */
  ECX = (pop32());
  /* 11912e99 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11912e9b jne 0x11912ea5 */
  if (!C.zf) goto L_11912ea5;
  /* 11912e9d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11912e9f call 0x119120b6 */
  push32(0x11912ea4u); f_119120b6();
  /* 11912ea4 pop ecx */
  ECX = (pop32());
L_11912ea5:;
  /* 11912ea5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11912ea7 call 0x11912e76 */
  push32(0x11912eacu); f_11912e76();
  /* 11912eac cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912eaf pop ecx */
  ECX = (pop32());
  /* 11912eb0 push edi */
  push32((uint32_t)(EDI));
  /* 11912eb1 jne 0x11912ebd */
  if (!C.zf) goto L_11912ebd;
  /* 11912eb3 call dword ptr [0x11916090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916090))), 0x11912eb9u);
  /* 11912eb9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11912ebb jmp 0x11912ec3 */
  goto L_11912ec3;
L_11912ebd:;
  /* 11912ebd call 0x11913029 */
  push32(0x11912ec2u); f_11913029();
  /* 11912ec2 pop ecx */
  ECX = (pop32());
L_11912ec3:;
  /* 11912ec3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11912ec5 call 0x11912ed7 */
  push32(0x11912ecau); f_11912ed7();
  /* 11912eca pop ecx */
  ECX = (pop32());
  /* 11912ecb pop edi */
  EDI = (pop32());
L_11912ecc:;
  /* 11912ecc push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11912ece call dword ptr [0x1191604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191604c))), 0x11912ed4u);
  /* 11912ed4 pop esi */
  ESI = (pop32());
  /* 11912ed5 pop ebp */
  EBP = (pop32());
  /* 11912ed6 ret  */
  ESPCHK(0x11912e76u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed7 @ 0x11912ed7 (21 bytes, 7 insns) */
void f_11912ed7(void) {
  FTRACE(0x11912ed7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912ed7 push ebp */
  push32((uint32_t)(EBP));
  /* 11912ed8 mov ebp, esp */
  EBP = (ESP);
  /* 11912eda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11912edd push dword ptr [eax*4 + 0x11917490] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11917490))));
  /* 11912ee4 call dword ptr [0x11916048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916048))), 0x11912eeau);
  /* 11912eea pop ebp */
  EBP = (pop32());
  /* 11912eeb ret  */
  ESPCHK(0x11912ed7u, _esp0);
  ESP += 4; return;
}

/* FUN_10002eec @ 0x11912eec (289 bytes, 98 insns) */
void f_11912eec(void) {
  FTRACE(0x11912eecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912eec push ebp */
  push32((uint32_t)(EBP));
  /* 11912eed mov ebp, esp */
  EBP = (ESP);
  /* 11912eef push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11912ef1 push 0x11916480 */
  push32((uint32_t)(0x11916480u));
  /* 11912ef6 push 0x11915040 */
  push32((uint32_t)(0x11915040u));
  /* 11912efb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11912f01 push eax */
  push32((uint32_t)(EAX));
  /* 11912f02 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11912f09 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11912f0c push ebx */
  push32((uint32_t)(EBX));
  /* 11912f0d push esi */
  push32((uint32_t)(ESI));
  /* 11912f0e push edi */
  push32((uint32_t)(EDI));
  /* 11912f0f mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11912f12 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11912f16 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11912f19 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11912f1c cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f1f ja 0x11912f35 */
  if ((!C.cf&&!C.zf)) goto L_11912f35;
  /* 11912f21 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11912f23 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f25 jne 0x11912f2a */
  if (!C.zf) goto L_11912f2a;
  /* 11912f27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11912f29 pop esi */
  ESI = (pop32());
L_11912f2a:;
  /* 11912f2a add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11912f2d and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11912f30 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11912f33 jmp 0x11912f37 */
  goto L_11912f37;
L_11912f35:;
  /* 11912f35 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11912f37:;
  /* 11912f37 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11912f3a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f3d ja 0x11912feb */
  if ((!C.cf&&!C.zf)) goto L_11912feb;
  /* 11912f43 mov eax, dword ptr [0x1191a7cc] */
  EAX = (r32((uint32_t)(0x1191a7cc)));
  /* 11912f48 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f4b jne 0x11912f8e */
  if (!C.zf) goto L_11912f8e;
  /* 11912f4d mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 11912f50 cmp edi, dword ptr [0x1191a5a0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x1191a5a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f56 ja 0x11912fd4 */
  if ((!C.cf&&!C.zf)) goto L_11912fd4;
  /* 11912f58 push 9 */
  push32((uint32_t)(0x9u));
  /* 11912f5a call 0x11912e76 */
  push32(0x11912f5fu); f_11912e76();
  /* 11912f5f pop ecx */
  ECX = (pop32());
  /* 11912f60 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11912f63 push edi */
  push32((uint32_t)(EDI));
  /* 11912f64 call 0x1191426b */
  push32(0x11912f69u); f_1191426b();
  /* 11912f69 pop ecx */
  ECX = (pop32());
  /* 11912f6a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11912f6d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11912f71 call 0x11912f85 */
  push32(0x11912f76u); f_11912f85();
  /* 11912f76 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f79 je 0x11912fd9 */
  if (C.zf) goto L_11912fd9;
  /* 11912f7b push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11912f7e jmp 0x11912fc8 */
  goto L_11912fc8;
  /* 11912f80 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11912f82 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11912f85 push 9 */
  push32((uint32_t)(0x9u));
  /* 11912f87 call 0x11912ed7 */
  push32(0x11912f8cu); f_11912ed7();
  /* 11912f8c pop ecx */
  ECX = (pop32());
  /* 11912f8d ret  */
  ESPCHK(0x11912eecu, _esp0);
  ESP += 4; return;
L_11912f8e:;
  /* 11912f8e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f91 jne 0x11912fd4 */
  if (!C.zf) goto L_11912fd4;
  /* 11912f93 cmp esi, dword ptr [0x11919704] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11919704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912f99 ja 0x11912fd4 */
  if ((!C.cf&&!C.zf)) goto L_11912fd4;
  /* 11912f9b push 9 */
  push32((uint32_t)(0x9u));
  /* 11912f9d call 0x11912e76 */
  push32(0x11912fa2u); f_11912e76();
  /* 11912fa2 pop ecx */
  ECX = (pop32());
  /* 11912fa3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11912faa mov eax, esi */
  EAX = (ESI);
  /* 11912fac shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11912faf push eax */
  push32((uint32_t)(EAX));
  /* 11912fb0 call 0x11914a18 */
  push32(0x11912fb5u); f_11914a18();
  /* 11912fb5 pop ecx */
  ECX = (pop32());
  /* 11912fb6 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11912fb9 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11912fbd call 0x1191300e */
  push32(0x11912fc2u); f_1191300e();
  /* 11912fc2 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912fc5 je 0x11912fd9 */
  if (C.zf) goto L_11912fd9;
  /* 11912fc7 push esi */
  push32((uint32_t)(ESI));
L_11912fc8:;
  /* 11912fc8 push ebx */
  push32((uint32_t)(EBX));
  /* 11912fc9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11912fcc call 0x11914ef0 */
  push32(0x11912fd1u); f_11914ef0();
  /* 11912fd1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11912fd4:;
  /* 11912fd4 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912fd7 jne 0x11913017 */
  if (!C.zf) { jmp_ind(0x11913017u); return; }
L_11912fd9:;
  /* 11912fd9 push esi */
  push32((uint32_t)(ESI));
  /* 11912fda push 8 */
  push32((uint32_t)(0x8u));
  /* 11912fdc push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11912fe2 call dword ptr [0x11916040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916040))), 0x11912fe8u);
  /* 11912fe8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11912feb:;
  /* 11912feb cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912fee jne 0x11913017 */
  if (!C.zf) { jmp_ind(0x11913017u); return; }
  /* 11912ff0 cmp dword ptr [0x1191a408], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a408))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11912ff6 je 0x11913017 */
  if (C.zf) { jmp_ind(0x11913017u); return; }
  /* 11912ff8 push esi */
  push32((uint32_t)(ESI));
  /* 11912ff9 call 0x11914ece */
  push32(0x11912ffeu); f_11914ece();
  /* 11912ffe pop ecx */
  ECX = (pop32());
  /* 11912fff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913001 jne 0x11912f37 */
  if (!C.zf) goto L_11912f37;
  /* 11913007 jmp 0x1191301a */
  jmp_ind(0x1191301au); return;
  /* 11913009 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10002f85 @ 0x11912f85 (9 bytes, 4 insns) */
void f_11912f85(void) {
  FTRACE(0x11912f85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11912f85 push 9 */
  push32((uint32_t)(0x9u));
  /* 11912f87 call 0x11912ed7 */
  push32(0x11912f8cu); f_11912ed7();
  /* 11912f8c pop ecx */
  ECX = (pop32());
  /* 11912f8d ret  */
  ESPCHK(0x11912f85u, _esp0);
  ESP += 4; return;
}

/* FUN_1000300e @ 0x1191300e (9 bytes, 4 insns) */
void f_1191300e(void) {
  FTRACE(0x1191300eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191300e push 9 */
  push32((uint32_t)(0x9u));
  /* 11913010 call 0x11912ed7 */
  push32(0x11913015u); f_11912ed7();
  /* 11913015 pop ecx */
  ECX = (pop32());
  /* 11913016 ret  */
  ESPCHK(0x1191300eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003029 @ 0x11913029 (215 bytes, 76 insns) */
void f_11913029(void) {
  FTRACE(0x11913029u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913029 push ebp */
  push32((uint32_t)(EBP));
  /* 1191302a mov ebp, esp */
  EBP = (ESP);
  /* 1191302c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1191302e push 0x11916498 */
  push32((uint32_t)(0x11916498u));
  /* 11913033 push 0x11915040 */
  push32((uint32_t)(0x11915040u));
  /* 11913038 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1191303e push eax */
  push32((uint32_t)(EAX));
  /* 1191303f mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11913046 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913049 push ebx */
  push32((uint32_t)(EBX));
  /* 1191304a push esi */
  push32((uint32_t)(ESI));
  /* 1191304b push edi */
  push32((uint32_t)(EDI));
  /* 1191304c mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1191304f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11913051 je 0x11913103 */
  if (C.zf) { jmp_ind(0x11913103u); return; }
  /* 11913057 mov eax, dword ptr [0x1191a7cc] */
  EAX = (r32((uint32_t)(0x1191a7cc)));
  /* 1191305c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191305f jne 0x1191309c */
  if (!C.zf) goto L_1191309c;
  /* 11913061 push 9 */
  push32((uint32_t)(0x9u));
  /* 11913063 call 0x11912e76 */
  push32(0x11913068u); f_11912e76();
  /* 11913068 pop ecx */
  ECX = (pop32());
  /* 11913069 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1191306d push esi */
  push32((uint32_t)(ESI));
  /* 1191306e call 0x11913f17 */
  push32(0x11913073u); f_11913f17();
  /* 11913073 pop ecx */
  ECX = (pop32());
  /* 11913074 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11913077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913079 je 0x11913084 */
  if (C.zf) goto L_11913084;
  /* 1191307b push esi */
  push32((uint32_t)(ESI));
  /* 1191307c push eax */
  push32((uint32_t)(EAX));
  /* 1191307d call 0x11913f42 */
  push32(0x11913082u); f_11913f42();
  /* 11913082 pop ecx */
  ECX = (pop32());
  /* 11913083 pop ecx */
  ECX = (pop32());
L_11913084:;
  /* 11913084 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11913088 call 0x11913093 */
  push32(0x1191308du); f_11913093();
  /* 1191308d cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913091 jmp 0x119130e4 */
  goto L_119130e4;
  /* 11913093 push 9 */
  push32((uint32_t)(0x9u));
  /* 11913095 call 0x11912ed7 */
  push32(0x1191309au); f_11912ed7();
  /* 1191309a pop ecx */
  ECX = (pop32());
  /* 1191309b ret  */
  ESPCHK(0x11913029u, _esp0);
  ESP += 4; return;
L_1191309c:;
  /* 1191309c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191309f jne 0x119130f4 */
  if (!C.zf) goto L_119130f4;
  /* 119130a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 119130a3 call 0x11912e76 */
  push32(0x119130a8u); f_11912e76();
  /* 119130a8 pop ecx */
  ECX = (pop32());
  /* 119130a9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119130b0 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 119130b3 push eax */
  push32((uint32_t)(EAX));
  /* 119130b4 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 119130b7 push eax */
  push32((uint32_t)(EAX));
  /* 119130b8 push esi */
  push32((uint32_t)(ESI));
  /* 119130b9 call 0x1191497c */
  push32(0x119130beu); f_1191497c();
  /* 119130be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119130c1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 119130c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119130c6 je 0x119130d7 */
  if (C.zf) goto L_119130d7;
  /* 119130c8 push eax */
  push32((uint32_t)(EAX));
  /* 119130c9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 119130cc push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 119130cf call 0x119149d3 */
  push32(0x119130d4u); f_119149d3();
  /* 119130d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_119130d7:;
  /* 119130d7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119130db call 0x119130eb */
  push32(0x119130e0u); f_119130eb();
  /* 119130e0 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_119130e4:;
  /* 119130e4 jne 0x11913103 */
  if (!C.zf) { jmp_ind(0x11913103u); return; }
  /* 119130e6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119130e9 jmp 0x119130f5 */
  goto L_119130f5;
  /* 119130eb push 9 */
  push32((uint32_t)(0x9u));
  /* 119130ed call 0x11912ed7 */
  push32(0x119130f2u); f_11912ed7();
  /* 119130f2 pop ecx */
  ECX = (pop32());
  /* 119130f3 ret  */
  ESPCHK(0x11913029u, _esp0);
  ESP += 4; return;
L_119130f4:;
  /* 119130f4 push esi */
  push32((uint32_t)(ESI));
L_119130f5:;
  /* 119130f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 119130f7 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 119130ff push esp */
  push32((uint32_t)(ESP));
}

/* FUN_10003093 @ 0x11913093 (9 bytes, 4 insns) */
void f_11913093(void) {
  FTRACE(0x11913093u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913093 push 9 */
  push32((uint32_t)(0x9u));
  /* 11913095 call 0x11912ed7 */
  push32(0x1191309au); f_11912ed7();
  /* 1191309a pop ecx */
  ECX = (pop32());
  /* 1191309b ret  */
  ESPCHK(0x11913093u, _esp0);
  ESP += 4; return;
}

/* FUN_100030eb @ 0x119130eb (9 bytes, 4 insns) */
void f_119130eb(void) {
  FTRACE(0x119130ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119130eb push 9 */
  push32((uint32_t)(0x9u));
  /* 119130ed call 0x11912ed7 */
  push32(0x119130f2u); f_11912ed7();
  /* 119130f2 pop ecx */
  ECX = (pop32());
  /* 119130f3 ret  */
  ESPCHK(0x119130ebu, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11913112 (18 bytes, 6 insns) */
void f_11913112(void) {
  FTRACE(0x11913112u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913112 push dword ptr [0x1191a408] */
  push32((uint32_t)(r32((uint32_t)(0x1191a408))));
  /* 11913118 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1191311c call 0x11913124 */
  push32(0x11913121u); f_11913124();
  /* 11913121 pop ecx */
  ECX = (pop32());
  /* 11913122 pop ecx */
  ECX = (pop32());
  /* 11913123 ret  */
  ESPCHK(0x11913112u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11913124 (44 bytes, 16 insns) */
void f_11913124(void) {
  FTRACE(0x11913124u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913124 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913129 ja 0x1191314d */
  if ((!C.cf&&!C.zf)) goto L_1191314d;
L_1191312b:;
  /* 1191312b push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1191312f call 0x11913150 */
  push32(0x11913134u); f_11913150();
  /* 11913134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913136 pop ecx */
  ECX = (pop32());
  /* 11913137 jne 0x1191314f */
  if (!C.zf) goto L_1191314f;
  /* 11913139 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191313d je 0x1191314f */
  if (C.zf) goto L_1191314f;
  /* 1191313f push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11913143 call 0x11914ece */
  push32(0x11913148u); f_11914ece();
  /* 11913148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191314a pop ecx */
  ECX = (pop32());
  /* 1191314b jne 0x1191312b */
  if (!C.zf) goto L_1191312b;
L_1191314d:;
  /* 1191314d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1191314f:;
  /* 1191314f ret  */
  ESPCHK(0x11913124u, _esp0);
  ESP += 4; return;
}

/* FUN_10003150 @ 0x11913150 (231 bytes, 81 insns) */
void f_11913150(void) {
  FTRACE(0x11913150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913150 push ebp */
  push32((uint32_t)(EBP));
  /* 11913151 mov ebp, esp */
  EBP = (ESP);
  /* 11913153 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11913155 push 0x119164b0 */
  push32((uint32_t)(0x119164b0u));
  /* 1191315a push 0x11915040 */
  push32((uint32_t)(0x11915040u));
  /* 1191315f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11913165 push eax */
  push32((uint32_t)(EAX));
  /* 11913166 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1191316d sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913170 push ebx */
  push32((uint32_t)(EBX));
  /* 11913171 push esi */
  push32((uint32_t)(ESI));
  /* 11913172 push edi */
  push32((uint32_t)(EDI));
  /* 11913173 mov eax, dword ptr [0x1191a7cc] */
  EAX = (r32((uint32_t)(0x1191a7cc)));
  /* 11913178 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191317b jne 0x119131c0 */
  if (!C.zf) goto L_119131c0;
  /* 1191317d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11913180 cmp esi, dword ptr [0x1191a5a0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1191a5a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913186 ja 0x1191321f */
  if ((!C.cf&&!C.zf)) goto L_1191321f;
  /* 1191318c push 9 */
  push32((uint32_t)(0x9u));
  /* 1191318e call 0x11912e76 */
  push32(0x11913193u); f_11912e76();
  /* 11913193 pop ecx */
  ECX = (pop32());
  /* 11913194 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11913198 push esi */
  push32((uint32_t)(ESI));
  /* 11913199 call 0x1191426b */
  push32(0x1191319eu); f_1191426b();
  /* 1191319e pop ecx */
  ECX = (pop32());
  /* 1191319f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 119131a2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119131a6 call 0x119131b7 */
  push32(0x119131abu); f_119131b7();
  /* 119131ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 119131ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119131b0 je 0x1191321f */
  if (C.zf) goto L_1191321f;
  /* 119131b2 jmp 0x1191323d */
  jmp_ind(0x1191323du); return;
  /* 119131b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 119131b9 call 0x11912ed7 */
  push32(0x119131beu); f_11912ed7();
  /* 119131be pop ecx */
  ECX = (pop32());
  /* 119131bf ret  */
  ESPCHK(0x11913150u, _esp0);
  ESP += 4; return;
L_119131c0:;
  /* 119131c0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119131c3 jne 0x1191321f */
  if (!C.zf) goto L_1191321f;
  /* 119131c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119131c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119131ca je 0x119131d4 */
  if (C.zf) goto L_119131d4;
  /* 119131cc lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 119131cf and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 119131d2 jmp 0x119131d7 */
  goto L_119131d7;
L_119131d4:;
  /* 119131d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 119131d6 pop esi */
  ESI = (pop32());
L_119131d7:;
  /* 119131d7 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 119131da cmp esi, dword ptr [0x11919704] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11919704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119131e0 ja 0x11913210 */
  if ((!C.cf&&!C.zf)) goto L_11913210;
  /* 119131e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 119131e4 call 0x11912e76 */
  push32(0x119131e9u); f_11912e76();
  /* 119131e9 pop ecx */
  ECX = (pop32());
  /* 119131ea mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119131f1 mov eax, esi */
  EAX = (ESI);
  /* 119131f3 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119131f6 push eax */
  push32((uint32_t)(EAX));
  /* 119131f7 call 0x11914a18 */
  push32(0x119131fcu); f_11914a18();
  /* 119131fc pop ecx */
  ECX = (pop32());
  /* 119131fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11913200 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11913204 call 0x11913216 */
  push32(0x11913209u); f_11913216();
  /* 11913209 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1191320c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191320e jne 0x1191323d */
  if (!C.zf) { jmp_ind(0x1191323du); return; }
L_11913210:;
  /* 11913210 push esi */
  push32((uint32_t)(ESI));
  /* 11913211 jmp 0x1191322f */
  goto L_1191322f;
  /* 11913213 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11913216 push 9 */
  push32((uint32_t)(0x9u));
  /* 11913218 call 0x11912ed7 */
  push32(0x1191321du); f_11912ed7();
  /* 1191321d pop ecx */
  ECX = (pop32());
  /* 1191321e ret  */
  ESPCHK(0x11913150u, _esp0);
  ESP += 4; return;
L_1191321f:;
  /* 1191321f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913222 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913224 jne 0x11913229 */
  if (!C.zf) goto L_11913229;
  /* 11913226 push 1 */
  push32((uint32_t)(0x1u));
  /* 11913228 pop eax */
  EAX = (pop32());
L_11913229:;
  /* 11913229 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191322c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1191322e push eax */
  push32((uint32_t)(EAX));
L_1191322f:;
  /* 1191322f push 0 */
  push32((uint32_t)(0x0u));
  /* 11913231 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
}

/* FUN_100031b7 @ 0x119131b7 (9 bytes, 4 insns) */
void f_119131b7(void) {
  FTRACE(0x119131b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119131b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 119131b9 call 0x11912ed7 */
  push32(0x119131beu); f_11912ed7();
  /* 119131be pop ecx */
  ECX = (pop32());
  /* 119131bf ret  */
  ESPCHK(0x119131b7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003216 @ 0x11913216 (9 bytes, 4 insns) */
void f_11913216(void) {
  FTRACE(0x11913216u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913216 push 9 */
  push32((uint32_t)(0x9u));
  /* 11913218 call 0x11912ed7 */
  push32(0x1191321du); f_11912ed7();
  /* 1191321d pop ecx */
  ECX = (pop32());
  /* 1191321e ret  */
  ESPCHK(0x11913216u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x11913250 (7 bytes, 3 insns) */
void f_11913250(void) {
  FTRACE(0x11913250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913250 push edi */
  push32((uint32_t)(EDI));
  /* 11913251 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11913255 jmp 0x119132c1 */
  jmp_ind(0x119132c1u); return;
}

/* FUN_10003260 @ 0x11913260 (224 bytes, 84 insns) */
void f_11913260(void) {
  FTRACE(0x11913260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913260 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11913264 push edi */
  push32((uint32_t)(EDI));
  /* 11913265 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1191326b je 0x1191327c */
  if (C.zf) goto L_1191327c;
L_1191326d:;
  /* 1191326d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1191326f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11913270 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913272 je 0x119132af */
  if (C.zf) goto L_119132af;
  /* 11913274 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1191327a jne 0x1191326d */
  if (!C.zf) goto L_1191326d;
L_1191327c:;
  /* 1191327c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1191327e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11913283 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913285 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11913288 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1191328a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191328d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11913292 je 0x1191327c */
  if (C.zf) goto L_1191327c;
  /* 11913294 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11913297 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913299 je 0x119132be */
  if (C.zf) goto L_119132be;
  /* 1191329b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1191329d je 0x119132b9 */
  if (C.zf) goto L_119132b9;
  /* 1191329f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 119132a4 je 0x119132b4 */
  if (C.zf) goto L_119132b4;
  /* 119132a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 119132ab je 0x119132af */
  if (C.zf) goto L_119132af;
  /* 119132ad jmp 0x1191327c */
  goto L_1191327c;
L_119132af:;
  /* 119132af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 119132b2 jmp 0x119132c1 */
  goto L_119132c1;
L_119132b4:;
  /* 119132b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 119132b7 jmp 0x119132c1 */
  goto L_119132c1;
L_119132b9:;
  /* 119132b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 119132bc jmp 0x119132c1 */
  goto L_119132c1;
L_119132be:;
  /* 119132be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_119132c1:;
  /* 119132c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119132c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119132cb je 0x119132e6 */
  if (C.zf) goto L_119132e6;
L_119132cd:;
  /* 119132cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 119132cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119132d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 119132d2 je 0x11913338 */
  if (C.zf) goto L_11913338;
  /* 119132d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 119132d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119132d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 119132dd jne 0x119132cd */
  if (!C.zf) goto L_119132cd;
  /* 119132df jmp 0x119132e6 */
  goto L_119132e6;
L_119132e1:;
  /* 119132e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 119132e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119132e6:;
  /* 119132e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 119132eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 119132ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 119132ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119132f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 119132f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 119132f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119132f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 119132fe je 0x119132e1 */
  if (C.zf) goto L_119132e1;
  /* 11913300 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11913302 je 0x11913338 */
  if (C.zf) goto L_11913338;
  /* 11913304 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11913306 je 0x1191332f */
  if (C.zf) goto L_1191332f;
  /* 11913308 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1191330e je 0x11913322 */
  if (C.zf) goto L_11913322;
  /* 11913310 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11913316 je 0x1191331a */
  if (C.zf) goto L_1191331a;
  /* 11913318 jmp 0x119132e1 */
  goto L_119132e1;
L_1191331a:;
  /* 1191331a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1191331c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11913320 pop edi */
  EDI = (pop32());
  /* 11913321 ret  */
  ESPCHK(0x11913260u, _esp0);
  ESP += 4; return;
L_11913322:;
  /* 11913322 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11913325 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11913329 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1191332d pop edi */
  EDI = (pop32());
  /* 1191332e ret  */
  ESPCHK(0x11913260u, _esp0);
  ESP += 4; return;
L_1191332f:;
  /* 1191332f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11913332 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11913336 pop edi */
  EDI = (pop32());
  /* 11913337 ret  */
  ESPCHK(0x11913260u, _esp0);
  ESP += 4; return;
L_11913338:;
  /* 11913338 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1191333a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1191333e pop edi */
  EDI = (pop32());
  /* 1191333f ret  */
  ESPCHK(0x11913260u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11913340 (123 bytes, 44 insns) */
void f_11913340(void) {
  FTRACE(0x11913340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913340 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11913344 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1191334a je 0x11913360 */
  if (C.zf) goto L_11913360;
L_1191334c:;
  /* 1191334c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1191334e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1191334f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913351 je 0x11913393 */
  if (C.zf) goto L_11913393;
  /* 11913353 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11913359 jne 0x1191334c */
  if (!C.zf) goto L_1191334c;
  /* 1191335b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11913360:;
  /* 11913360 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11913362 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11913367 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913369 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1191336c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1191336e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913371 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11913376 je 0x11913360 */
  if (C.zf) goto L_11913360;
  /* 11913378 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1191337b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1191337d je 0x119133b1 */
  if (C.zf) goto L_119133b1;
  /* 1191337f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11913381 je 0x119133a7 */
  if (C.zf) goto L_119133a7;
  /* 11913383 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11913388 je 0x1191339d */
  if (C.zf) goto L_1191339d;
  /* 1191338a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1191338f je 0x11913393 */
  if (C.zf) goto L_11913393;
  /* 11913391 jmp 0x11913360 */
  goto L_11913360;
L_11913393:;
  /* 11913393 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11913396 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1191339a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191339c ret  */
  ESPCHK(0x11913340u, _esp0);
  ESP += 4; return;
L_1191339d:;
  /* 1191339d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 119133a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119133a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119133a6 ret  */
  ESPCHK(0x11913340u, _esp0);
  ESP += 4; return;
L_119133a7:;
  /* 119133a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 119133aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119133ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119133b0 ret  */
  ESPCHK(0x11913340u, _esp0);
  ESP += 4; return;
L_119133b1:;
  /* 119133b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 119133b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 119133b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119133ba ret  */
  ESPCHK(0x11913340u, _esp0);
  ESP += 4; return;
}

/* FUN_100033bb @ 0x119133bb (429 bytes, 143 insns) */
void f_119133bb(void) {
  FTRACE(0x119133bbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119133bb push ebp */
  push32((uint32_t)(EBP));
  /* 119133bc mov ebp, esp */
  EBP = (ESP);
  /* 119133be sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 119133c1 push ebx */
  push32((uint32_t)(EBX));
  /* 119133c2 push esi */
  push32((uint32_t)(ESI));
  /* 119133c3 push edi */
  push32((uint32_t)(EDI));
  /* 119133c4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 119133c6 call 0x11912e76 */
  push32(0x119133cbu); f_11912e76();
  /* 119133cb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119133ce call 0x11913568 */
  push32(0x119133d3u); f_11913568();
  /* 119133d3 mov ebx, eax */
  EBX = (EAX);
  /* 119133d5 pop ecx */
  ECX = (pop32());
  /* 119133d6 cmp ebx, dword ptr [0x1191a5a4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1191a5a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119133dc pop ecx */
  ECX = (pop32());
  /* 119133dd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119133e0 jne 0x119133e9 */
  if (!C.zf) goto L_119133e9;
L_119133e2:;
  /* 119133e2 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119133e4 jmp 0x11913559 */
  goto L_11913559;
L_119133e9:;
  /* 119133e9 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 119133eb je 0x11913547 */
  if (C.zf) goto L_11913547;
  /* 119133f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119133f3 mov eax, 0x119175e8 */
  EAX = (0x119175e8u);
L_119133f8:;
  /* 119133f8 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119133fa je 0x11913470 */
  if (C.zf) goto L_11913470;
  /* 119133fc add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119133ff inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11913400 cmp eax, 0x119176d8 */
  { uint32_t _a=(EAX),_b=(0x119176d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913405 jl 0x119133f8 */
  if ((C.sf!=C.of)) goto L_119133f8;
  /* 11913407 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1191340a push eax */
  push32((uint32_t)(EAX));
  /* 1191340b push ebx */
  push32((uint32_t)(EBX));
  /* 1191340c call dword ptr [0x11916044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916044))), 0x11913412u);
  /* 11913412 push 1 */
  push32((uint32_t)(0x1u));
  /* 11913414 pop esi */
  ESI = (pop32());
  /* 11913415 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913417 jne 0x1191353e */
  if (!C.zf) goto L_1191353e;
  /* 1191341d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1191341f and dword ptr [0x1191a7c4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a7c4)))&(0x0u); w32((uint32_t)(0x1191a7c4), (_r)); fl_logic(_r,32); }
  /* 11913426 pop ecx */
  ECX = (pop32());
  /* 11913427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913429 mov edi, 0x1191a6c0 */
  EDI = (0x1191a6c0u);
  /* 1191342e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913431 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11913433 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11913434 mov dword ptr [0x1191a5a4], ebx */
  w32((uint32_t)(0x1191a5a4), (EBX));
  /* 1191343a jbe 0x1191352b */
  if ((C.cf||C.zf)) goto L_1191352b;
  /* 11913440 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913444 je 0x11913506 */
  if (C.zf) goto L_11913506;
  /* 1191344a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1191344d:;
  /* 1191344d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1191344f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11913451 je 0x11913506 */
  if (C.zf) goto L_11913506;
  /* 11913457 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1191345b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1191345e:;
  /* 1191345e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913460 ja 0x119134fa */
  if ((!C.cf&&!C.zf)) goto L_119134fa;
  /* 11913466 or byte ptr [eax + 0x1191a6c1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x4u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 1191346d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191346e jmp 0x1191345e */
  goto L_1191345e;
L_11913470:;
  /* 11913470 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11913474 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11913476 pop ecx */
  ECX = (pop32());
  /* 11913477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913479 mov edi, 0x1191a6c0 */
  EDI = (0x1191a6c0u);
  /* 1191347e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 11913481 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11913483 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11913486 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11913487 lea ebx, [esi + 0x119175f8] */
  EBX = ((uint32_t)(ESI + 0x119175f8));
L_1191348d:;
  /* 1191348d cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913490 mov ecx, ebx */
  ECX = (EBX);
  /* 11913492 je 0x119134c0 */
  if (C.zf) goto L_119134c0;
L_11913494:;
  /* 11913494 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11913497 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11913499 je 0x119134c0 */
  if (C.zf) goto L_119134c0;
  /* 1191349b movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1191349e movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 119134a1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119134a3 ja 0x119134b9 */
  if ((!C.cf&&!C.zf)) goto L_119134b9;
  /* 119134a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 119134a8 mov dl, byte ptr [edx + 0x119175e0] */
  DL = (r8((uint32_t)(EDX + 0x119175e0)));
L_119134ae:;
  /* 119134ae or byte ptr [eax + 0x1191a6c1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(DL); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 119134b4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119134b5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119134b7 jbe 0x119134ae */
  if ((C.cf||C.zf)) goto L_119134ae;
L_119134b9:;
  /* 119134b9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119134ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119134bb cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119134be jne 0x11913494 */
  if (!C.zf) goto L_11913494;
L_119134c0:;
  /* 119134c0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119134c3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119134c6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119134ca jb 0x1191348d */
  if (C.cf) goto L_1191348d;
  /* 119134cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119134cf mov dword ptr [0x1191a5bc], 1 */
  w32((uint32_t)(0x1191a5bc), (0x1u));
  /* 119134d9 push eax */
  push32((uint32_t)(EAX));
  /* 119134da mov dword ptr [0x1191a5a4], eax */
  w32((uint32_t)(0x1191a5a4), (EAX));
  /* 119134df call 0x119135b2 */
  push32(0x119134e4u); f_119135b2();
  /* 119134e4 lea esi, [esi + 0x119175ec] */
  ESI = ((uint32_t)(ESI + 0x119175ec));
  /* 119134ea mov edi, 0x1191a5b0 */
  EDI = (0x1191a5b0u);
  /* 119134ef movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119134f0 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119134f1 pop ecx */
  ECX = (pop32());
  /* 119134f2 mov dword ptr [0x1191a7c4], eax */
  w32((uint32_t)(0x1191a7c4), (EAX));
  /* 119134f7 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 119134f8 jmp 0x1191354c */
  goto L_1191354c;
L_119134fa:;
  /* 119134fa inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119134fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 119134fc cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913500 jne 0x1191344d */
  if (!C.zf) goto L_1191344d;
L_11913506:;
  /* 11913506 mov eax, esi */
  EAX = (ESI);
L_11913508:;
  /* 11913508 or byte ptr [eax + 0x1191a6c1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x8u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 1191350f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11913510 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913515 jb 0x11913508 */
  if (C.cf) goto L_11913508;
  /* 11913517 push ebx */
  push32((uint32_t)(EBX));
  /* 11913518 call 0x119135b2 */
  push32(0x1191351du); f_119135b2();
  /* 1191351d pop ecx */
  ECX = (pop32());
  /* 1191351e mov dword ptr [0x1191a7c4], eax */
  w32((uint32_t)(0x1191a7c4), (EAX));
  /* 11913523 mov dword ptr [0x1191a5bc], esi */
  w32((uint32_t)(0x1191a5bc), (ESI));
  /* 11913529 jmp 0x11913532 */
  goto L_11913532;
L_1191352b:;
  /* 1191352b and dword ptr [0x1191a5bc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a5bc)))&(0x0u); w32((uint32_t)(0x1191a5bc), (_r)); fl_logic(_r,32); }
L_11913532:;
  /* 11913532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913534 mov edi, 0x1191a5b0 */
  EDI = (0x1191a5b0u);
  /* 11913539 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191353a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191353b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191353c jmp 0x1191354c */
  goto L_1191354c;
L_1191353e:;
  /* 1191353e cmp dword ptr [0x1191a3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913545 je 0x11913556 */
  if (C.zf) goto L_11913556;
L_11913547:;
  /* 11913547 call 0x119135e5 */
  push32(0x1191354cu); f_119135e5();
L_1191354c:;
  /* 1191354c call 0x1191360e */
  push32(0x11913551u); f_1191360e();
  /* 11913551 jmp 0x119133e2 */
  goto L_119133e2;
L_11913556:;
  /* 11913556 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11913559:;
  /* 11913559 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1191355b call 0x11912ed7 */
  push32(0x11913560u); f_11912ed7();
  /* 11913560 pop ecx */
  ECX = (pop32());
  /* 11913561 mov eax, esi */
  EAX = (ESI);
  /* 11913563 pop edi */
  EDI = (pop32());
  /* 11913564 pop esi */
  ESI = (pop32());
  /* 11913565 pop ebx */
  EBX = (pop32());
  /* 11913566 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913567 ret  */
  ESPCHK(0x119133bbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003568 @ 0x11913568 (74 bytes, 15 insns) */
void f_11913568(void) {
  FTRACE(0x11913568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913568 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1191356c and dword ptr [0x1191a3f0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a3f0)))&(0x0u); w32((uint32_t)(0x1191a3f0), (_r)); fl_logic(_r,32); }
  /* 11913573 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913576 jne 0x11913588 */
  if (!C.zf) goto L_11913588;
  /* 11913578 mov dword ptr [0x1191a3f0], 1 */
  w32((uint32_t)(0x1191a3f0), (0x1u));
  /* 11913582 jmp dword ptr [0x11916034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11916034)))); return;
L_11913588:;
  /* 11913588 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191358b jne 0x1191359d */
  if (!C.zf) goto L_1191359d;
  /* 1191358d mov dword ptr [0x1191a3f0], 1 */
  w32((uint32_t)(0x1191a3f0), (0x1u));
  /* 11913597 jmp dword ptr [0x11916038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11916038)))); return;
L_1191359d:;
  /* 1191359d cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119135a0 jne 0x119135b1 */
  if (!C.zf) goto L_119135b1;
  /* 119135a2 mov eax, dword ptr [0x1191a424] */
  EAX = (r32((uint32_t)(0x1191a424)));
  /* 119135a7 mov dword ptr [0x1191a3f0], 1 */
  w32((uint32_t)(0x1191a3f0), (0x1u));
L_119135b1:;
  /* 119135b1 ret  */
  ESPCHK(0x11913568u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b2 @ 0x119135b2 (51 bytes, 19 insns) */
void f_119135b2(void) {
  FTRACE(0x119135b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119135b2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119135b6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119135bb je 0x119135df */
  if (C.zf) goto L_119135df;
  /* 119135bd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119135c0 je 0x119135d9 */
  if (C.zf) goto L_119135d9;
  /* 119135c2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119135c5 je 0x119135d3 */
  if (C.zf) goto L_119135d3;
  /* 119135c7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 119135c8 je 0x119135cd */
  if (C.zf) goto L_119135cd;
  /* 119135ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119135cc ret  */
  ESPCHK(0x119135b2u, _esp0);
  ESP += 4; return;
L_119135cd:;
  /* 119135cd mov eax, 0x404 */
  EAX = (0x404u);
  /* 119135d2 ret  */
  ESPCHK(0x119135b2u, _esp0);
  ESP += 4; return;
L_119135d3:;
  /* 119135d3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 119135d8 ret  */
  ESPCHK(0x119135b2u, _esp0);
  ESP += 4; return;
L_119135d9:;
  /* 119135d9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 119135de ret  */
  ESPCHK(0x119135b2u, _esp0);
  ESP += 4; return;
L_119135df:;
  /* 119135df mov eax, 0x411 */
  EAX = (0x411u);
  /* 119135e4 ret  */
  ESPCHK(0x119135b2u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e5 @ 0x119135e5 (41 bytes, 17 insns) */
void f_119135e5(void) {
  FTRACE(0x119135e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119135e5 push edi */
  push32((uint32_t)(EDI));
  /* 119135e6 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 119135e8 pop ecx */
  ECX = (pop32());
  /* 119135e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119135eb mov edi, 0x1191a6c0 */
  EDI = (0x1191a6c0u);
  /* 119135f0 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 119135f2 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 119135f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119135f5 mov edi, 0x1191a5b0 */
  EDI = (0x1191a5b0u);
  /* 119135fa mov dword ptr [0x1191a5a4], eax */
  w32((uint32_t)(0x1191a5a4), (EAX));
  /* 119135ff mov dword ptr [0x1191a5bc], eax */
  w32((uint32_t)(0x1191a5bc), (EAX));
  /* 11913604 mov dword ptr [0x1191a7c4], eax */
  w32((uint32_t)(0x1191a7c4), (EAX));
  /* 11913609 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191360a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191360b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1191360c pop edi */
  EDI = (pop32());
  /* 1191360d ret  */
  ESPCHK(0x119135e5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000360e @ 0x1191360e (389 bytes, 124 insns) */
void f_1191360e(void) {
  FTRACE(0x1191360eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191360e push ebp */
  push32((uint32_t)(EBP));
  /* 1191360f mov ebp, esp */
  EBP = (ESP);
  /* 11913611 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913617 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1191361a push esi */
  push32((uint32_t)(ESI));
  /* 1191361b push eax */
  push32((uint32_t)(EAX));
  /* 1191361c push dword ptr [0x1191a5a4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a5a4))));
  /* 11913622 call dword ptr [0x11916044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916044))), 0x11913628u);
  /* 11913628 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191362b jne 0x11913747 */
  if (!C.zf) goto L_11913747;
  /* 11913631 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913633 mov esi, 0x100 */
  ESI = (0x100u);
L_11913638:;
  /* 11913638 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1191363f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11913640 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913642 jb 0x11913638 */
  if (C.cf) goto L_11913638;
  /* 11913644 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11913647 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1191364e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913650 je 0x11913689 */
  if (C.zf) goto L_11913689;
  /* 11913652 push ebx */
  push32((uint32_t)(EBX));
  /* 11913653 push edi */
  push32((uint32_t)(EDI));
  /* 11913654 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11913657:;
  /* 11913657 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1191365a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1191365d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191365f ja 0x1191367e */
  if ((!C.cf&&!C.zf)) goto L_1191367e;
  /* 11913661 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913663 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1191366a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1191366b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11913670 mov ebx, ecx */
  EBX = (ECX);
  /* 11913672 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11913675 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11913677 mov ecx, ebx */
  ECX = (EBX);
  /* 11913679 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1191367c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1191367e:;
  /* 1191367e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1191367f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11913680 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11913683 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913685 jne 0x11913657 */
  if (!C.zf) goto L_11913657;
  /* 11913687 pop edi */
  EDI = (pop32());
  /* 11913688 pop ebx */
  EBX = (pop32());
L_11913689:;
  /* 11913689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191368b lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11913691 push dword ptr [0x1191a7c4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c4))));
  /* 11913697 push dword ptr [0x1191a5a4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a5a4))));
  /* 1191369d push eax */
  push32((uint32_t)(EAX));
  /* 1191369e lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119136a4 push esi */
  push32((uint32_t)(ESI));
  /* 119136a5 push eax */
  push32((uint32_t)(EAX));
  /* 119136a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119136a8 call 0x11915367 */
  push32(0x119136adu); f_11915367();
  /* 119136ad push 0 */
  push32((uint32_t)(0x0u));
  /* 119136af lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 119136b5 push dword ptr [0x1191a5a4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a5a4))));
  /* 119136bb push esi */
  push32((uint32_t)(ESI));
  /* 119136bc push eax */
  push32((uint32_t)(EAX));
  /* 119136bd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119136c3 push esi */
  push32((uint32_t)(ESI));
  /* 119136c4 push eax */
  push32((uint32_t)(EAX));
  /* 119136c5 push esi */
  push32((uint32_t)(ESI));
  /* 119136c6 push dword ptr [0x1191a7c4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c4))));
  /* 119136cc call 0x11915118 */
  push32(0x119136d1u); f_11915118();
  /* 119136d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 119136d3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 119136d9 push dword ptr [0x1191a5a4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a5a4))));
  /* 119136df push esi */
  push32((uint32_t)(ESI));
  /* 119136e0 push eax */
  push32((uint32_t)(EAX));
  /* 119136e1 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 119136e7 push esi */
  push32((uint32_t)(ESI));
  /* 119136e8 push eax */
  push32((uint32_t)(EAX));
  /* 119136e9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 119136ee push dword ptr [0x1191a7c4] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c4))));
  /* 119136f4 call 0x11915118 */
  push32(0x119136f9u); f_11915118();
  /* 119136f9 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119136fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119136fe lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11913704:;
  /* 11913704 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11913707 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1191370a je 0x11913722 */
  if (C.zf) goto L_11913722;
  /* 1191370c or byte ptr [eax + 0x1191a6c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x10u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 11913713 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1191371a:;
  /* 1191371a mov byte ptr [eax + 0x1191a5c0], dl */
  w8((uint32_t)(EAX + 0x1191a5c0), (DL));
  /* 11913720 jmp 0x1191373e */
  goto L_1191373e;
L_11913722:;
  /* 11913722 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11913725 je 0x11913737 */
  if (C.zf) goto L_11913737;
  /* 11913727 or byte ptr [eax + 0x1191a6c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x20u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 1191372e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11913735 jmp 0x1191371a */
  goto L_1191371a;
L_11913737:;
  /* 11913737 and byte ptr [eax + 0x1191a5c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a5c0)))&(0x0u); w8((uint32_t)(EAX + 0x1191a5c0), (_r)); fl_logic(_r,8); }
L_1191373e:;
  /* 1191373e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191373f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11913740 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11913741 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913743 jb 0x11913704 */
  if (C.cf) goto L_11913704;
  /* 11913745 jmp 0x11913790 */
  goto L_11913790;
L_11913747:;
  /* 11913747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913749 mov esi, 0x100 */
  ESI = (0x100u);
L_1191374e:;
  /* 1191374e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913751 jb 0x1191376c */
  if (C.cf) goto L_1191376c;
  /* 11913753 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913756 ja 0x1191376c */
  if ((!C.cf&&!C.zf)) goto L_1191376c;
  /* 11913758 or byte ptr [eax + 0x1191a6c1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x10u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 1191375f mov cl, al */
  CL = (AL);
  /* 11913761 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11913764:;
  /* 11913764 mov byte ptr [eax + 0x1191a5c0], cl */
  w8((uint32_t)(EAX + 0x1191a5c0), (CL));
  /* 1191376a jmp 0x1191378b */
  goto L_1191378b;
L_1191376c:;
  /* 1191376c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191376f jb 0x11913784 */
  if (C.cf) goto L_11913784;
  /* 11913771 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913774 ja 0x11913784 */
  if ((!C.cf&&!C.zf)) goto L_11913784;
  /* 11913776 or byte ptr [eax + 0x1191a6c1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a6c1)))|(0x20u); w8((uint32_t)(EAX + 0x1191a6c1), (_r)); fl_logic(_r,8); }
  /* 1191377d mov cl, al */
  CL = (AL);
  /* 1191377f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11913782 jmp 0x11913764 */
  goto L_11913764;
L_11913784:;
  /* 11913784 and byte ptr [eax + 0x1191a5c0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x1191a5c0)))&(0x0u); w8((uint32_t)(EAX + 0x1191a5c0), (_r)); fl_logic(_r,8); }
L_1191378b:;
  /* 1191378b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1191378c cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191378e jb 0x1191374e */
  if (C.cf) goto L_1191374e;
L_11913790:;
  /* 11913790 pop esi */
  ESI = (pop32());
  /* 11913791 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913792 ret  */
  ESPCHK(0x1191360eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003793 @ 0x11913793 (28 bytes, 7 insns) */
void f_11913793(void) {
  FTRACE(0x11913793u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913793 cmp dword ptr [0x1191a8e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a8e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191379a jne 0x119137ae */
  if (!C.zf) goto L_119137ae;
  /* 1191379c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1191379e call 0x119133bb */
  push32(0x119137a3u); f_119133bb();
  /* 119137a3 pop ecx */
  ECX = (pop32());
  /* 119137a4 mov dword ptr [0x1191a8e8], 1 */
  w32((uint32_t)(0x1191a8e8), (0x1u));
L_119137ae:;
  /* 119137ae ret  */
  ESPCHK(0x11913793u, _esp0);
  ESP += 4; return;
}

/* FUN_100037b0 @ 0x119137b0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_119137b0(void) {
  FTRACE(0x119137b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119137b0 push ebp */
  push32((uint32_t)(EBP));
  /* 119137b1 mov ebp, esp */
  EBP = (ESP);
  /* 119137b3 push edi */
  push32((uint32_t)(EDI));
  /* 119137b4 push esi */
  push32((uint32_t)(ESI));
  /* 119137b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119137b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 119137bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 119137be mov eax, ecx */
  EAX = (ECX);
  /* 119137c0 mov edx, ecx */
  EDX = (ECX);
  /* 119137c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119137c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119137c6 jbe 0x119137d0 */
  if ((C.cf||C.zf)) goto L_119137d0;
  /* 119137c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119137ca jb 0x11913948 */
  if (C.cf) goto L_11913948;
L_119137d0:;
  /* 119137d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 119137d6 jne 0x119137ec */
  if (!C.zf) goto L_119137ec;
  /* 119137d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119137db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 119137de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119137e1 jb 0x1191380c */
  if (C.cf) goto L_1191380c;
  /* 119137e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119137e5 jmp dword ptr [edx*4 + 0x119138f8] */
  switch (EDX) {
    case 0: goto L_11913908;
    case 1: goto L_11913910;
    case 2: goto L_1191391c;
    case 3: goto L_11913930;
    default: x86_unimpl("switch@0x119137e5 out of table"); return;
  }
L_119137ec:;
  /* 119137ec mov eax, edi */
  EAX = (EDI);
  /* 119137ee mov edx, 3 */
  EDX = (0x3u);
  /* 119137f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119137f6 jb 0x11913804 */
  if (C.cf) goto L_11913804;
  /* 119137f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119137fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119137fd jmp dword ptr [eax*4 + 0x11913810] */
  switch (EAX) {
    case 1: goto L_11913820;
    case 2: goto L_1191384c;
    case 3: goto L_11913870;
    default: x86_unimpl("switch@0x119137fd out of table"); return;
  }
L_11913804:;
  /* 11913804 jmp dword ptr [ecx*4 + 0x11913908] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11913908)))); return;
  /* 1191380b nop  */
  /* nop */
L_1191380c:;
  /* 1191380c jmp dword ptr [ecx*4 + 0x1191388c] */
  switch (ECX) {
    case 0: goto L_119138ef;
    case 1: goto L_119138dc;
    case 2: goto L_119138d4;
    case 3: goto L_119138cc;
    case 4: goto L_119138c4;
    case 5: goto L_119138bc;
    case 6: goto L_119138b4;
    case 7: goto L_119138ac;
    default: x86_unimpl("switch@0x1191380c out of table"); return;
  }
  /* 11913813 nop  */
  /* nop */
L_11913820:;
  /* 11913820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11913822 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913824 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913826 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913829 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1191382c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1191382f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11913832 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11913835 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913838 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191383b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191383e jb 0x1191380c */
  if (C.cf) goto L_1191380c;
  /* 11913840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11913842 jmp dword ptr [edx*4 + 0x119138f8] */
  switch (EDX) {
    case 0: goto L_11913908;
    case 1: goto L_11913910;
    case 2: goto L_1191391c;
    case 3: goto L_11913930;
    default: x86_unimpl("switch@0x11913842 out of table"); return;
  }
  /* 11913849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1191384c:;
  /* 1191384c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1191384e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913850 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913852 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913855 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11913858 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1191385b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191385e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913861 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913864 jb 0x1191380c */
  if (C.cf) goto L_1191380c;
  /* 11913866 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11913868 jmp dword ptr [edx*4 + 0x119138f8] */
  switch (EDX) {
    case 0: goto L_11913908;
    case 1: goto L_11913910;
    case 2: goto L_1191391c;
    case 3: goto L_11913930;
    default: x86_unimpl("switch@0x11913868 out of table"); return;
  }
  /* 1191386f nop  */
  /* nop */
L_11913870:;
  /* 11913870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11913872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913877 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1191387a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1191387b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191387e jb 0x1191380c */
  if (C.cf) goto L_1191380c;
  /* 11913880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11913882 jmp dword ptr [edx*4 + 0x119138f8] */
  switch (EDX) {
    case 0: goto L_11913908;
    case 1: goto L_11913910;
    case 2: goto L_1191391c;
    case 3: goto L_11913930;
    default: x86_unimpl("switch@0x11913882 out of table"); return;
  }
  /* 11913889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119138ac:;
  /* 119138ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 119138b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_119138b4:;
  /* 119138b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 119138b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_119138bc:;
  /* 119138bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 119138c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_119138c4:;
  /* 119138c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 119138c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_119138cc:;
  /* 119138cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 119138d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_119138d4:;
  /* 119138d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 119138d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_119138dc:;
  /* 119138dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119138e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119138e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119138eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119138ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119138ef:;
  /* 119138ef jmp dword ptr [edx*4 + 0x119138f8] */
  switch (EDX) {
    case 0: goto L_11913908;
    case 1: goto L_11913910;
    case 2: goto L_1191391c;
    case 3: goto L_11913930;
    default: x86_unimpl("switch@0x119138ef out of table"); return;
  }
  /* 119138f6 mov edi, edi */
  EDI = (EDI);
L_11913908:;
  /* 11913908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1191390b pop esi */
  ESI = (pop32());
  /* 1191390c pop edi */
  EDI = (pop32());
  /* 1191390d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191390e ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 1191390f nop  */
  /* nop */
L_11913910:;
  /* 11913910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913917 pop esi */
  ESI = (pop32());
  /* 11913918 pop edi */
  EDI = (pop32());
  /* 11913919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191391a ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 1191391b nop  */
  /* nop */
L_1191391c:;
  /* 1191391c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1191391e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913920 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913923 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11913926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913929 pop esi */
  ESI = (pop32());
  /* 1191392a pop edi */
  EDI = (pop32());
  /* 1191392b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191392c ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 1191392d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11913930:;
  /* 11913930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11913934 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913937 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1191393a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1191393d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11913940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913943 pop esi */
  ESI = (pop32());
  /* 11913944 pop edi */
  EDI = (pop32());
  /* 11913945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913946 ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 11913947 nop  */
  /* nop */
L_11913948:;
  /* 11913948 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1191394c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11913950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11913956 jne 0x1191397c */
  if (!C.zf) goto L_1191397c;
  /* 11913958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1191395b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1191395e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913961 jb 0x11913970 */
  if (C.cf) goto L_11913970;
  /* 11913963 std  */
  C.df=1;
  /* 11913964 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11913966 cld  */
  C.df=0;
  /* 11913967 jmp dword ptr [edx*4 + 0x11913a90] */
  switch (EDX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x11913967 out of table"); return;
  }
  /* 1191396e mov edi, edi */
  EDI = (EDI);
L_11913970:;
  /* 11913970 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11913972 jmp dword ptr [ecx*4 + 0x11913a40] */
  switch (ECX) {
    case 0: goto L_11913a87;
    default: x86_unimpl("switch@0x11913972 out of table"); return;
  }
  /* 11913979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1191397c:;
  /* 1191397c mov eax, edi */
  EAX = (EDI);
  /* 1191397e mov edx, 3 */
  EDX = (0x3u);
  /* 11913983 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913986 jb 0x11913994 */
  if (C.cf) goto L_11913994;
  /* 11913988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1191398b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191398d jmp dword ptr [eax*4 + 0x11913998] */
  switch (EAX) {
    case 1: goto L_119139a8;
    case 2: goto L_119139c8;
    case 3: goto L_119139f0;
    default: x86_unimpl("switch@0x1191398d out of table"); return;
  }
L_11913994:;
  /* 11913994 jmp dword ptr [ecx*4 + 0x11913a90] */
  switch (ECX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x11913994 out of table"); return;
  }
  /* 1191399b nop  */
  /* nop */
L_119139a8:;
  /* 119139a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119139ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119139ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119139b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 119139b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119139b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 119139b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119139b8 jb 0x11913970 */
  if (C.cf) goto L_11913970;
  /* 119139ba std  */
  C.df=1;
  /* 119139bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119139bd cld  */
  C.df=0;
  /* 119139be jmp dword ptr [edx*4 + 0x11913a90] */
  switch (EDX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x119139be out of table"); return;
  }
  /* 119139c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119139c8:;
  /* 119139c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119139cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119139cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119139d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119139d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119139d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119139d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119139dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119139df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119139e2 jb 0x11913970 */
  if (C.cf) goto L_11913970;
  /* 119139e4 std  */
  C.df=1;
  /* 119139e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119139e7 cld  */
  C.df=0;
  /* 119139e8 jmp dword ptr [edx*4 + 0x11913a90] */
  switch (EDX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x119139e8 out of table"); return;
  }
  /* 119139ef nop  */
  /* nop */
L_119139f0:;
  /* 119139f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119139f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119139f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119139f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119139fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119139fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11913a04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11913a07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913a0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913a0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913a10 jb 0x11913970 */
  if (C.cf) goto L_11913970;
  /* 11913a16 std  */
  C.df=1;
  /* 11913a17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11913a19 cld  */
  C.df=0;
  /* 11913a1a jmp dword ptr [edx*4 + 0x11913a90] */
  switch (EDX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x11913a1a out of table"); return;
  }
  /* 11913a21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11913a24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11913a25 cmp dl, byte ptr [ecx - 0x6ec5b3ef] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ECX + -0x6ec5b3ef))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913a2b adc dword ptr [edx + edi - 0x6f], edx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x6f))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x6f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11913a2f adc dword ptr [edx + edi - 0x6f], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x6f))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x6f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11913a33 adc dword ptr [edx + edi - 0x6f], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x6f))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x6f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11913a37 adc dword ptr [edx + edi - 0x6f], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x6f))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x6f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11913a3b adc dword ptr [edx + edi - 0x6f], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + EDI*1 + -0x6f))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + EDI*1 + -0x6f), (_r)); fl_add(_a,_b,_r,32); }
  /* 11913a44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11913a48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11913a4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11913a50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11913a54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11913a58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11913a5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11913a60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11913a64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11913a68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11913a6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11913a70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11913a74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11913a78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11913a7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11913a83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913a85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11913a87:;
  /* 11913a87 jmp dword ptr [edx*4 + 0x11913a90] */
  switch (EDX) {
    case 0: goto L_11913aa0;
    case 1: goto L_11913aa8;
    case 2: goto L_11913ab8;
    case 3: goto L_11913acc;
    default: x86_unimpl("switch@0x11913a87 out of table"); return;
  }
  /* 11913a8e mov edi, edi */
  EDI = (EDI);
L_11913aa0:;
  /* 11913aa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913aa3 pop esi */
  ESI = (pop32());
  /* 11913aa4 pop edi */
  EDI = (pop32());
  /* 11913aa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913aa6 ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 11913aa7 nop  */
  /* nop */
L_11913aa8:;
  /* 11913aa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11913aab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11913aae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913ab1 pop esi */
  ESI = (pop32());
  /* 11913ab2 pop edi */
  EDI = (pop32());
  /* 11913ab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913ab4 ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 11913ab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11913ab8:;
  /* 11913ab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11913abb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11913abe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11913ac1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11913ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913ac7 pop esi */
  ESI = (pop32());
  /* 11913ac8 pop edi */
  EDI = (pop32());
  /* 11913ac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913aca ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
  /* 11913acb nop  */
  /* nop */
L_11913acc:;
  /* 11913acc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11913acf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11913ad2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11913ad5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11913ad8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913adb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11913ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913ae1 pop esi */
  ESI = (pop32());
  /* 11913ae2 pop edi */
  EDI = (pop32());
  /* 11913ae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913ae4 ret  */
  ESPCHK(0x119137b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ae5 @ 0x11913ae5 (23 bytes, 7 insns) */
void f_11913ae5(void) {
  FTRACE(0x11913ae5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11913ae7 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11913aeb push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11913aef push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11913af3 call 0x11913afc */
  push32(0x11913af8u); f_11913afc();
  /* 11913af8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11913afb ret  */
  ESPCHK(0x11913ae5u, _esp0);
  ESP += 4; return;
}

/* FUN_10003afc @ 0x11913afc (517 bytes, 195 insns) */
void f_11913afc(void) {
  FTRACE(0x11913afcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913afc push ebp */
  push32((uint32_t)(EBP));
  /* 11913afd mov ebp, esp */
  EBP = (ESP);
  /* 11913aff sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913b02 push ebx */
  push32((uint32_t)(EBX));
  /* 11913b03 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11913b07 push esi */
  push32((uint32_t)(ESI));
  /* 11913b08 push edi */
  push32((uint32_t)(EDI));
  /* 11913b09 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11913b0c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11913b0e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 11913b11 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11913b14:;
  /* 11913b14 cmp dword ptr [0x11919a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11919a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913b1b jle 0x11913b2c */
  if ((C.zf||C.sf!=C.of)) goto L_11913b2c;
  /* 11913b1d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11913b20 push 8 */
  push32((uint32_t)(0x8u));
  /* 11913b22 push eax */
  push32((uint32_t)(EAX));
  /* 11913b23 call 0x119155f4 */
  push32(0x11913b28u); f_119155f4();
  /* 11913b28 pop ecx */
  ECX = (pop32());
  /* 11913b29 pop ecx */
  ECX = (pop32());
  /* 11913b2a jmp 0x11913b3b */
  goto L_11913b3b;
L_11913b2c:;
  /* 11913b2c mov ecx, dword ptr [0x11919888] */
  ECX = (r32((uint32_t)(0x11919888)));
  /* 11913b32 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11913b35 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 11913b38 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_11913b3b:;
  /* 11913b3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913b3d je 0x11913b44 */
  if (C.zf) goto L_11913b44;
  /* 11913b3f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11913b41 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913b42 jmp 0x11913b14 */
  goto L_11913b14;
L_11913b44:;
  /* 11913b44 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913b47 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11913b4a jne 0x11913b52 */
  if (!C.zf) goto L_11913b52;
  /* 11913b4c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11913b50 jmp 0x11913b57 */
  goto L_11913b57;
L_11913b52:;
  /* 11913b52 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913b55 jne 0x11913b5d */
  if (!C.zf) goto L_11913b5d;
L_11913b57:;
  /* 11913b57 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 11913b59 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913b5a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11913b5d:;
  /* 11913b5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11913b60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913b62 jl 0x11913cf1 */
  if ((C.sf!=C.of)) goto L_11913cf1;
  /* 11913b68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913b6b je 0x11913cf1 */
  if (C.zf) goto L_11913cf1;
  /* 11913b71 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913b74 jg 0x11913cf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11913cf1;
  /* 11913b7a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11913b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913b7e pop ecx */
  ECX = (pop32());
  /* 11913b7f jne 0x11913ba5 */
  if (!C.zf) goto L_11913ba5;
  /* 11913b81 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913b84 je 0x11913b8f */
  if (C.zf) goto L_11913b8f;
  /* 11913b86 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 11913b8d jmp 0x11913bc1 */
  goto L_11913bc1;
L_11913b8f:;
  /* 11913b8f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913b91 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913b93 je 0x11913ba2 */
  if (C.zf) goto L_11913ba2;
  /* 11913b95 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913b97 je 0x11913ba2 */
  if (C.zf) goto L_11913ba2;
  /* 11913b99 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 11913ba0 jmp 0x11913bc1 */
  goto L_11913bc1;
L_11913ba2:;
  /* 11913ba2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11913ba5:;
  /* 11913ba5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913ba8 jne 0x11913bc1 */
  if (!C.zf) goto L_11913bc1;
  /* 11913baa cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913bad jne 0x11913bc1 */
  if (!C.zf) goto L_11913bc1;
  /* 11913baf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913bb1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913bb3 je 0x11913bb9 */
  if (C.zf) goto L_11913bb9;
  /* 11913bb5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913bb7 jne 0x11913bc1 */
  if (!C.zf) goto L_11913bc1;
L_11913bb9:;
  /* 11913bb9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 11913bbc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913bbd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913bbe mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_11913bc1:;
  /* 11913bc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11913bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11913bc6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11913bc9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 11913bce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11913bd1:;
  /* 11913bd1 cmp dword ptr [0x11919a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11919a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913bd8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11913bdb jle 0x11913be9 */
  if ((C.zf||C.sf!=C.of)) goto L_11913be9;
  /* 11913bdd push 4 */
  push32((uint32_t)(0x4u));
  /* 11913bdf push esi */
  push32((uint32_t)(ESI));
  /* 11913be0 call 0x119155f4 */
  push32(0x11913be5u); f_119155f4();
  /* 11913be5 pop ecx */
  ECX = (pop32());
  /* 11913be6 pop ecx */
  ECX = (pop32());
  /* 11913be7 jmp 0x11913bf4 */
  goto L_11913bf4;
L_11913be9:;
  /* 11913be9 mov eax, dword ptr [0x11919888] */
  EAX = (r32((uint32_t)(0x11919888)));
  /* 11913bee mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 11913bf1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_11913bf4:;
  /* 11913bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913bf6 je 0x11913c00 */
  if (C.zf) goto L_11913c00;
  /* 11913bf8 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11913bfb sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913bfe jmp 0x11913c32 */
  goto L_11913c32;
L_11913c00:;
  /* 11913c00 cmp dword ptr [0x11919a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11919a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913c07 jle 0x11913c14 */
  if ((C.zf||C.sf!=C.of)) goto L_11913c14;
  /* 11913c09 push edi */
  push32((uint32_t)(EDI));
  /* 11913c0a push esi */
  push32((uint32_t)(ESI));
  /* 11913c0b call 0x119155f4 */
  push32(0x11913c10u); f_119155f4();
  /* 11913c10 pop ecx */
  ECX = (pop32());
  /* 11913c11 pop ecx */
  ECX = (pop32());
  /* 11913c12 jmp 0x11913c1f */
  goto L_11913c1f;
L_11913c14:;
  /* 11913c14 mov eax, dword ptr [0x11919888] */
  EAX = (r32((uint32_t)(0x11919888)));
  /* 11913c19 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 11913c1d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_11913c1f:;
  /* 11913c1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913c21 je 0x11913c6d */
  if (C.zf) goto L_11913c6d;
  /* 11913c23 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 11913c26 push eax */
  push32((uint32_t)(EAX));
  /* 11913c27 call 0x119154b9 */
  push32(0x11913c2cu); f_119154b9();
  /* 11913c2c pop ecx */
  ECX = (pop32());
  /* 11913c2d mov ecx, eax */
  ECX = (EAX);
  /* 11913c2f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_11913c32:;
  /* 11913c32 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913c35 jae 0x11913c6d */
  if (!C.cf) goto L_11913c6d;
  /* 11913c37 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 11913c3a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11913c3e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913c41 jb 0x11913c57 */
  if (C.cf) goto L_11913c57;
  /* 11913c43 jne 0x11913c51 */
  if (!C.zf) goto L_11913c51;
  /* 11913c45 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11913c48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11913c4a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11913c4d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913c4f jbe 0x11913c57 */
  if ((C.cf||C.zf)) goto L_11913c57;
L_11913c51:;
  /* 11913c51 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 11913c55 jmp 0x11913c60 */
  goto L_11913c60;
L_11913c57:;
  /* 11913c57 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11913c5b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913c5d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_11913c60:;
  /* 11913c60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11913c63 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11913c66 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11913c68 jmp 0x11913bd1 */
  goto L_11913bd1;
L_11913c6d:;
  /* 11913c6d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11913c70 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11913c73 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11913c76 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11913c78 jne 0x11913c8a */
  if (!C.zf) goto L_11913c8a;
  /* 11913c7a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11913c7c je 0x11913c84 */
  if (C.zf) goto L_11913c84;
  /* 11913c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913c81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11913c84:;
  /* 11913c84 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11913c88 jmp 0x11913cd5 */
  goto L_11913cd5;
L_11913c8a:;
  /* 11913c8a test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 11913c8c mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 11913c91 jne 0x11913cae */
  if (!C.zf) goto L_11913cae;
  /* 11913c93 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11913c95 jne 0x11913cd5 */
  if (!C.zf) goto L_11913cd5;
  /* 11913c97 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11913c9a je 0x11913ca5 */
  if (C.zf) goto L_11913ca5;
  /* 11913c9c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913ca3 ja 0x11913cae */
  if ((!C.cf&&!C.zf)) goto L_11913cae;
L_11913ca5:;
  /* 11913ca5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913ca7 jne 0x11913cd5 */
  if (!C.zf) goto L_11913cd5;
  /* 11913ca9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913cac jbe 0x11913cd5 */
  if ((C.cf||C.zf)) goto L_11913cd5;
L_11913cae:;
  /* 11913cae call 0x119154b0 */
  push32(0x11913cb3u); f_119154b0();
  /* 11913cb3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 11913cb7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 11913cbd je 0x11913cc5 */
  if (C.zf) goto L_11913cc5;
  /* 11913cbf or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11913cc3 jmp 0x11913cd5 */
  goto L_11913cd5;
L_11913cc5:;
  /* 11913cc5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11913cc8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11913cca neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 11913ccc sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913cce neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11913cd0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913cd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11913cd5:;
  /* 11913cd5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11913cd7 je 0x11913cde */
  if (C.zf) goto L_11913cde;
  /* 11913cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11913cdc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_11913cde:;
  /* 11913cde test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 11913ce2 je 0x11913cec */
  if (C.zf) goto L_11913cec;
  /* 11913ce4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11913ce7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11913ce9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11913cec:;
  /* 11913cec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11913cef jmp 0x11913cfc */
  goto L_11913cfc;
L_11913cf1:;
  /* 11913cf1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11913cf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913cf6 je 0x11913cfa */
  if (C.zf) goto L_11913cfa;
  /* 11913cf8 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11913cfa:;
  /* 11913cfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11913cfc:;
  /* 11913cfc pop edi */
  EDI = (pop32());
  /* 11913cfd pop esi */
  ESI = (pop32());
  /* 11913cfe pop ebx */
  EBX = (pop32());
  /* 11913cff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913d00 ret  */
  ESPCHK(0x11913afcu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11913d20 (193 bytes, 90 insns) */
void f_11913d20(void) {
  FTRACE(0x11913d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913d20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913d22 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11913d26 push ebx */
  push32((uint32_t)(EBX));
  /* 11913d27 mov ebx, eax */
  EBX = (EAX);
  /* 11913d29 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11913d2c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11913d30 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11913d36 je 0x11913d4b */
  if (C.zf) goto L_11913d4b;
L_11913d38:;
  /* 11913d38 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11913d3a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11913d3b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913d3d je 0x11913d10 */
  if (C.zf) { jmp_ind(0x11913d10u); return; }
  /* 11913d3f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11913d41 je 0x11913d94 */
  if (C.zf) goto L_11913d94;
  /* 11913d43 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11913d49 jne 0x11913d38 */
  if (!C.zf) goto L_11913d38;
L_11913d4b:;
  /* 11913d4b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11913d4d push edi */
  push32((uint32_t)(EDI));
  /* 11913d4e mov eax, ebx */
  EAX = (EBX);
  /* 11913d50 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11913d53 push esi */
  push32((uint32_t)(ESI));
  /* 11913d54 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11913d56:;
  /* 11913d56 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11913d58 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11913d5d mov eax, ecx */
  EAX = (ECX);
  /* 11913d5f mov esi, edi */
  ESI = (EDI);
  /* 11913d61 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11913d63 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913d65 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913d67 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11913d6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11913d6d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11913d6f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11913d71 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913d74 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11913d7a jne 0x11913d98 */
  if (!C.zf) goto L_11913d98;
  /* 11913d7c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11913d81 je 0x11913d56 */
  if (C.zf) goto L_11913d56;
  /* 11913d83 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11913d88 jne 0x11913d92 */
  if (!C.zf) goto L_11913d92;
  /* 11913d8a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11913d90 jne 0x11913d56 */
  if (!C.zf) goto L_11913d56;
L_11913d92:;
  /* 11913d92 pop esi */
  ESI = (pop32());
  /* 11913d93 pop edi */
  EDI = (pop32());
L_11913d94:;
  /* 11913d94 pop ebx */
  EBX = (pop32());
  /* 11913d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913d97 ret  */
  ESPCHK(0x11913d20u, _esp0);
  ESP += 4; return;
L_11913d98:;
  /* 11913d98 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11913d9b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913d9d je 0x11913dd5 */
  if (C.zf) goto L_11913dd5;
  /* 11913d9f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913da1 je 0x11913d92 */
  if (C.zf) goto L_11913d92;
  /* 11913da3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913da5 je 0x11913dce */
  if (C.zf) goto L_11913dce;
  /* 11913da7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11913da9 je 0x11913d92 */
  if (C.zf) goto L_11913d92;
  /* 11913dab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11913dae cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913db0 je 0x11913dc7 */
  if (C.zf) goto L_11913dc7;
  /* 11913db2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913db4 je 0x11913d92 */
  if (C.zf) goto L_11913d92;
  /* 11913db6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913db8 je 0x11913dc0 */
  if (C.zf) goto L_11913dc0;
  /* 11913dba test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11913dbc je 0x11913d92 */
  if (C.zf) goto L_11913d92;
  /* 11913dbe jmp 0x11913d56 */
  goto L_11913d56;
L_11913dc0:;
  /* 11913dc0 pop esi */
  ESI = (pop32());
  /* 11913dc1 pop edi */
  EDI = (pop32());
  /* 11913dc2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11913dc5 pop ebx */
  EBX = (pop32());
  /* 11913dc6 ret  */
  ESPCHK(0x11913d20u, _esp0);
  ESP += 4; return;
L_11913dc7:;
  /* 11913dc7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11913dca pop esi */
  ESI = (pop32());
  /* 11913dcb pop edi */
  EDI = (pop32());
  /* 11913dcc pop ebx */
  EBX = (pop32());
  /* 11913dcd ret  */
  ESPCHK(0x11913d20u, _esp0);
  ESP += 4; return;
L_11913dce:;
  /* 11913dce lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11913dd1 pop esi */
  ESI = (pop32());
  /* 11913dd2 pop edi */
  EDI = (pop32());
  /* 11913dd3 pop ebx */
  EBX = (pop32());
  /* 11913dd4 ret  */
  ESPCHK(0x11913d20u, _esp0);
  ESP += 4; return;
L_11913dd5:;
  /* 11913dd5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11913dd8 pop esi */
  ESI = (pop32());
  /* 11913dd9 pop edi */
  EDI = (pop32());
  /* 11913dda pop ebx */
  EBX = (pop32());
  /* 11913ddb ret  */
  ESPCHK(0x11913d20u, _esp0);
  ESP += 4; return;
  /* 11913ddc int3  */
  x86_unimpl("int3 @ 0x11913ddc");
  /* 11913ddd int3  */
  x86_unimpl("int3 @ 0x11913ddd");
  /* 11913dde int3  */
  x86_unimpl("int3 @ 0x11913dde");
  /* 11913ddf int3  */
  x86_unimpl("int3 @ 0x11913ddf");
}

/* _strstr @ 0x11913de0 (128 bytes, 66 insns) */
void f_11913de0(void) {
  FTRACE(0x11913de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913de0 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11913de4 push edi */
  push32((uint32_t)(EDI));
  /* 11913de5 push ebx */
  push32((uint32_t)(EBX));
  /* 11913de6 push esi */
  push32((uint32_t)(ESI));
  /* 11913de7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11913de9 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11913ded test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11913def je 0x11913e5a */
  if (C.zf) goto L_11913e5a;
  /* 11913df1 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 11913df4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11913df6 je 0x11913e47 */
  if (C.zf) goto L_11913e47;
L_11913df8:;
  /* 11913df8 mov esi, edi */
  ESI = (EDI);
  /* 11913dfa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11913dfe mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11913e00 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913e01 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e03 je 0x11913e1a */
  if (C.zf) goto L_11913e1a;
  /* 11913e05 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913e07 je 0x11913e14 */
  if (C.zf) goto L_11913e14;
L_11913e09:;
  /* 11913e09 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913e0b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11913e0c:;
  /* 11913e0c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e0e je 0x11913e1a */
  if (C.zf) goto L_11913e1a;
  /* 11913e10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913e12 jne 0x11913e09 */
  if (!C.zf) goto L_11913e09;
L_11913e14:;
  /* 11913e14 pop esi */
  ESI = (pop32());
  /* 11913e15 pop ebx */
  EBX = (pop32());
  /* 11913e16 pop edi */
  EDI = (pop32());
  /* 11913e17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913e19 ret  */
  ESPCHK(0x11913de0u, _esp0);
  ESP += 4; return;
L_11913e1a:;
  /* 11913e1a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913e1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11913e1d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e1f jne 0x11913e0c */
  if (!C.zf) goto L_11913e0c;
  /* 11913e21 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_11913e24:;
  /* 11913e24 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 11913e27 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11913e29 je 0x11913e53 */
  if (C.zf) goto L_11913e53;
  /* 11913e2b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11913e2d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913e30 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e32 jne 0x11913df8 */
  if (!C.zf) goto L_11913df8;
  /* 11913e34 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 11913e37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11913e39 je 0x11913e53 */
  if (C.zf) goto L_11913e53;
  /* 11913e3b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 11913e3e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913e41 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e43 je 0x11913e24 */
  if (C.zf) goto L_11913e24;
  /* 11913e45 jmp 0x11913df8 */
  goto L_11913df8;
L_11913e47:;
  /* 11913e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913e49 pop esi */
  ESI = (pop32());
  /* 11913e4a pop ebx */
  EBX = (pop32());
  /* 11913e4b pop edi */
  EDI = (pop32());
  /* 11913e4c mov al, dl */
  AL = (DL);
  /* 11913e4e jmp 0x11913d26 */
  jmp_ind(0x11913d26u); return;
L_11913e53:;
  /* 11913e53 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 11913e56 pop esi */
  ESI = (pop32());
  /* 11913e57 pop ebx */
  EBX = (pop32());
  /* 11913e58 pop edi */
  EDI = (pop32());
  /* 11913e59 ret  */
  ESPCHK(0x11913de0u, _esp0);
  ESP += 4; return;
L_11913e5a:;
  /* 11913e5a mov eax, edi */
  EAX = (EDI);
  /* 11913e5c pop esi */
  ESI = (pop32());
  /* 11913e5d pop ebx */
  EBX = (pop32());
  /* 11913e5e pop edi */
  EDI = (pop32());
  /* 11913e5f ret  */
  ESPCHK(0x11913de0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11913e60 (56 bytes, 31 insns) */
void f_11913e60(void) {
  FTRACE(0x11913e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11913e61 mov ebp, esp */
  EBP = (ESP);
  /* 11913e63 push edi */
  push32((uint32_t)(EDI));
  /* 11913e64 push esi */
  push32((uint32_t)(ESI));
  /* 11913e65 push ebx */
  push32((uint32_t)(EBX));
  /* 11913e66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11913e69 jecxz 0x11913e91 */
  x86_unimpl("jecxz @ 0x11913e69");
  /* 11913e6b mov ebx, ecx */
  EBX = (ECX);
  /* 11913e6d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11913e70 mov esi, edi */
  ESI = (EDI);
  /* 11913e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11913e74 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11913e76 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11913e78 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913e7a mov edi, esi */
  EDI = (ESI);
  /* 11913e7c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11913e7f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11913e81 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11913e84 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11913e86 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11913e89 ja 0x11913e8f */
  if ((!C.cf&&!C.zf)) goto L_11913e8f;
  /* 11913e8b je 0x11913e91 */
  if (C.zf) goto L_11913e91;
  /* 11913e8d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11913e8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11913e8f:;
  /* 11913e8f not ecx */
  ECX = (~(ECX));
L_11913e91:;
  /* 11913e91 mov eax, ecx */
  EAX = (ECX);
  /* 11913e93 pop ebx */
  EBX = (pop32());
  /* 11913e94 pop esi */
  ESI = (pop32());
  /* 11913e95 pop edi */
  EDI = (pop32());
  /* 11913e96 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11913e97 ret  */
  ESPCHK(0x11913e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x11913ea0 (47 bytes, 17 insns) */
void f_11913ea0(void) {
  FTRACE(0x11913ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 11913ea1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913ea6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11913eaa jb 0x11913ec0 */
  if (C.cf) goto L_11913ec0;
L_11913eac:;
  /* 11913eac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913eb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913eb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11913eb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913ebe jae 0x11913eac */
  if (!C.cf) goto L_11913eac;
L_11913ec0:;
  /* 11913ec0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913ec2 mov eax, esp */
  EAX = (ESP);
  /* 11913ec4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11913ec6 mov esp, ecx */
  ESP = (ECX);
  /* 11913ec8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11913eca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11913ecd push eax */
  push32((uint32_t)(EAX));
  /* 11913ece ret  */
  ESPCHK(0x11913ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ecf @ 0x11913ecf (72 bytes, 17 insns) */
void f_11913ecf(void) {
  FTRACE(0x11913ecfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913ecf push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11913ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11913ed6 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11913edc call dword ptr [0x11916040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916040))), 0x11913ee2u);
  /* 11913ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11913ee4 mov dword ptr [0x1191a59c], eax */
  w32((uint32_t)(0x1191a59c), (EAX));
  /* 11913ee9 jne 0x11913eec */
  if (!C.zf) goto L_11913eec;
  /* 11913eeb ret  */
  ESPCHK(0x11913ecfu, _esp0);
  ESP += 4; return;
L_11913eec:;
  /* 11913eec mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11913ef0 and dword ptr [0x1191a594], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a594)))&(0x0u); w32((uint32_t)(0x1191a594), (_r)); fl_logic(_r,32); }
  /* 11913ef7 and dword ptr [0x1191a598], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a598)))&(0x0u); w32((uint32_t)(0x1191a598), (_r)); fl_logic(_r,32); }
  /* 11913efe push 1 */
  push32((uint32_t)(0x1u));
  /* 11913f00 mov dword ptr [0x1191a590], eax */
  w32((uint32_t)(0x1191a590), (EAX));
  /* 11913f05 mov dword ptr [0x1191a5a0], ecx */
  w32((uint32_t)(0x1191a5a0), (ECX));
  /* 11913f0b mov dword ptr [0x1191a588], 0x10 */
  w32((uint32_t)(0x1191a588), (0x10u));
  /* 11913f15 pop eax */
  EAX = (pop32());
  /* 11913f16 ret  */
  ESPCHK(0x11913ecfu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f17 @ 0x11913f17 (43 bytes, 14 insns) */
void f_11913f17(void) {
  FTRACE(0x11913f17u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913f17 mov eax, dword ptr [0x1191a598] */
  EAX = (r32((uint32_t)(0x1191a598)));
  /* 11913f1c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11913f1f mov eax, dword ptr [0x1191a59c] */
  EAX = (r32((uint32_t)(0x1191a59c)));
  /* 11913f24 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11913f27:;
  /* 11913f27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913f29 jae 0x11913f3f */
  if (!C.cf) goto L_11913f3f;
  /* 11913f2b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11913f2f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913f32 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913f38 jb 0x11913f41 */
  if (C.cf) goto L_11913f41;
  /* 11913f3a add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11913f3d jmp 0x11913f27 */
  goto L_11913f27;
L_11913f3f:;
  /* 11913f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11913f41:;
  /* 11913f41 ret  */
  ESPCHK(0x11913f17u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f42 @ 0x11913f42 (809 bytes, 265 insns) */
void f_11913f42(void) {
  FTRACE(0x11913f42u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11913f42 push ebp */
  push32((uint32_t)(EBP));
  /* 11913f43 mov ebp, esp */
  EBP = (ESP);
  /* 11913f45 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913f48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913f4b push ebx */
  push32((uint32_t)(EBX));
  /* 11913f4c push esi */
  push32((uint32_t)(ESI));
  /* 11913f4d mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11913f50 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11913f53 push edi */
  push32((uint32_t)(EDI));
  /* 11913f54 mov edi, esi */
  EDI = (ESI);
  /* 11913f56 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11913f59 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11913f5c shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11913f5f mov ecx, edi */
  ECX = (EDI);
  /* 11913f61 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11913f67 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11913f6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11913f71 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11913f73 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11913f74 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11913f77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11913f7a jne 0x11914266 */
  if (!C.zf) goto L_11914266;
  /* 11913f80 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 11913f83 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 11913f86 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11913f89 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 11913f8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11913f8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11913f92 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11913f95 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 11913f98 jne 0x11914018 */
  if (!C.zf) goto L_11914018;
  /* 11913f9a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11913f9d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11913f9e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913fa1 jbe 0x11913fa6 */
  if ((C.cf||C.zf)) goto L_11913fa6;
  /* 11913fa3 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11913fa5 pop edx */
  EDX = (pop32());
L_11913fa6:;
  /* 11913fa6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11913fa9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913fac jne 0x11913ffa */
  if (!C.zf) goto L_11913ffa;
  /* 11913fae cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11913fb1 jae 0x11913fd1 */
  if (!C.cf) goto L_11913fd1;
  /* 11913fb3 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11913fb8 mov ecx, edx */
  ECX = (EDX);
  /* 11913fba shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11913fbc lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11913fc0 not ebx */
  EBX = (~(EBX));
  /* 11913fc2 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11913fc6 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11913fc8 jne 0x11913ff2 */
  if (!C.zf) goto L_11913ff2;
  /* 11913fca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913fcd and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11913fcf jmp 0x11913ff2 */
  goto L_11913ff2;
L_11913fd1:;
  /* 11913fd1 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 11913fd4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11913fd9 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11913fdb lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 11913fdf not ebx */
  EBX = (~(EBX));
  /* 11913fe1 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11913fe8 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11913fea jne 0x11913ff2 */
  if (!C.zf) goto L_11913ff2;
  /* 11913fec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11913fef and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11913ff2:;
  /* 11913ff2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11913ff5 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11913ff8 jmp 0x11913ffd */
  goto L_11913ffd;
L_11913ffa:;
  /* 11913ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_11913ffd:;
  /* 11913ffd mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 11914000 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 11914003 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914006 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 11914009 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1191400c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1191400f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 11914012 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11914015 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_11914018:;
  /* 11914018 mov edx, ecx */
  EDX = (ECX);
  /* 1191401a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1191401d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1191401e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914021 jbe 0x11914026 */
  if ((C.cf||C.zf)) goto L_11914026;
  /* 11914023 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11914025 pop edx */
  EDX = (pop32());
L_11914026:;
  /* 11914026 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11914029 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1191402c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1191402f jne 0x119140c9 */
  if (!C.zf) goto L_119140c9;
  /* 11914035 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914038 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1191403b sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1191403e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11914040 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 11914043 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11914044 pop esi */
  ESI = (pop32());
  /* 11914045 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914047 jbe 0x1191404b */
  if ((C.cf||C.zf)) goto L_1191404b;
  /* 11914049 mov ebx, esi */
  EBX = (ESI);
L_1191404b:;
  /* 1191404b add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191404e mov edx, ecx */
  EDX = (ECX);
  /* 11914050 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11914053 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11914056 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11914057 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914059 jbe 0x1191405d */
  if ((C.cf||C.zf)) goto L_1191405d;
  /* 1191405b mov edx, esi */
  EDX = (ESI);
L_1191405d:;
  /* 1191405d cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191405f je 0x119140c4 */
  if (C.zf) goto L_119140c4;
  /* 11914061 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11914064 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11914067 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191406a jne 0x119140ac */
  if (!C.zf) goto L_119140ac;
  /* 1191406c cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191406f jae 0x1191408d */
  if (!C.cf) goto L_1191408d;
  /* 11914071 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11914076 mov ecx, ebx */
  ECX = (EBX);
  /* 11914078 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1191407a not esi */
  ESI = (~(ESI));
  /* 1191407c and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11914080 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 11914084 jne 0x119140ac */
  if (!C.zf) goto L_119140ac;
  /* 11914086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914089 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1191408b jmp 0x119140ac */
  goto L_119140ac;
L_1191408d:;
  /* 1191408d lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 11914090 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11914095 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11914097 not esi */
  ESI = (~(ESI));
  /* 11914099 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119140a0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 119140a4 jne 0x119140ac */
  if (!C.zf) goto L_119140ac;
  /* 119140a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 119140a9 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_119140ac:;
  /* 119140ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119140af mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 119140b2 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 119140b5 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 119140b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 119140bb mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 119140be mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 119140c1 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_119140c4:;
  /* 119140c4 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 119140c7 jmp 0x119140cc */
  goto L_119140cc;
L_119140c9:;
  /* 119140c9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_119140cc:;
  /* 119140cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119140d0 jne 0x119140da */
  if (!C.zf) goto L_119140da;
  /* 119140d2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119140d4 je 0x1191415b */
  if (C.zf) goto L_1191415b;
L_119140da:;
  /* 119140da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119140dd mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 119140e1 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 119140e4 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 119140e7 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 119140ea mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 119140ed mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 119140f0 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 119140f3 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 119140f6 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119140f9 jne 0x1191415b */
  if (!C.zf) goto L_1191415b;
  /* 119140fb mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 119140ff cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914102 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11914105 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11914107 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1191410b jae 0x11914132 */
  if (!C.cf) goto L_11914132;
  /* 1191410d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11914111 jne 0x11914121 */
  if (!C.zf) goto L_11914121;
  /* 11914113 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11914118 mov ecx, edx */
  ECX = (EDX);
  /* 1191411a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1191411c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1191411f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11914121:;
  /* 11914121 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11914126 mov ecx, edx */
  ECX = (EDX);
  /* 11914128 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1191412a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1191412e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11914130 jmp 0x1191415b */
  goto L_1191415b;
L_11914132:;
  /* 11914132 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11914136 jne 0x11914148 */
  if (!C.zf) goto L_11914148;
  /* 11914138 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1191413b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11914140 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11914142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914145 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11914148:;
  /* 11914148 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1191414b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11914150 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11914152 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 11914159 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1191415b:;
  /* 1191415b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191415e mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11914160 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 11914164 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11914167 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11914169 jne 0x11914266 */
  if (!C.zf) goto L_11914266;
  /* 1191416f mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 11914174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914176 je 0x11914258 */
  if (C.zf) goto L_11914258;
  /* 1191417c mov ecx, dword ptr [0x1191a58c] */
  ECX = (r32((uint32_t)(0x1191a58c)));
  /* 11914182 mov esi, dword ptr [0x119160c4] */
  ESI = (r32((uint32_t)(0x119160c4)));
  /* 11914188 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1191418b add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191418e mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11914193 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11914198 push ebx */
  push32((uint32_t)(EBX));
  /* 11914199 push ecx */
  push32((uint32_t)(ECX));
  /* 1191419a call esi */
  call_ind((uint32_t)(ESI), 0x1191419cu);
  /* 1191419c mov ecx, dword ptr [0x1191a58c] */
  ECX = (r32((uint32_t)(0x1191a58c)));
  /* 119141a2 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 119141a7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 119141ac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 119141ae or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 119141b1 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 119141b6 mov ecx, dword ptr [0x1191a58c] */
  ECX = (r32((uint32_t)(0x1191a58c)));
  /* 119141bc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 119141bf and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 119141c7 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 119141cc mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 119141cf dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 119141d2 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 119141d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 119141da cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119141de jne 0x119141e9 */
  if (!C.zf) goto L_119141e9;
  /* 119141e0 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 119141e4 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
L_119141e9:;
  /* 119141e9 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119141ed jne 0x11914258 */
  if (!C.zf) goto L_11914258;
  /* 119141ef push ebx */
  push32((uint32_t)(EBX));
  /* 119141f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 119141f2 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 119141f5 call esi */
  call_ind((uint32_t)(ESI), 0x119141f7u);
  /* 119141f7 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 119141fc push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 119141ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11914201 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11914207 call dword ptr [0x11916054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916054))), 0x1191420du);
  /* 1191420d mov eax, dword ptr [0x1191a598] */
  EAX = (r32((uint32_t)(0x1191a598)));
  /* 11914212 mov edx, dword ptr [0x1191a59c] */
  EDX = (r32((uint32_t)(0x1191a59c)));
  /* 11914218 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1191421b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1191421e mov ecx, eax */
  ECX = (EAX);
  /* 11914220 mov eax, dword ptr [0x1191a594] */
  EAX = (r32((uint32_t)(0x1191a594)));
  /* 11914225 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914227 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1191422b push ecx */
  push32((uint32_t)(ECX));
  /* 1191422c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1191422f push ecx */
  push32((uint32_t)(ECX));
  /* 11914230 push eax */
  push32((uint32_t)(EAX));
  /* 11914231 call 0x11915670 */
  push32(0x11914236u); f_11915670();
  /* 11914236 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191423c dec dword ptr [0x1191a598] */
  { uint32_t _r=(r32((uint32_t)(0x1191a598)))-1; w32((uint32_t)(0x1191a598), (_r)); fl_dec(_r,32); }
  /* 11914242 cmp eax, dword ptr [0x1191a594] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1191a594))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914248 jbe 0x1191424e */
  if ((C.cf||C.zf)) goto L_1191424e;
  /* 1191424a sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1191424e:;
  /* 1191424e mov eax, dword ptr [0x1191a59c] */
  EAX = (r32((uint32_t)(0x1191a59c)));
  /* 11914253 mov dword ptr [0x1191a590], eax */
  w32((uint32_t)(0x1191a590), (EAX));
L_11914258:;
  /* 11914258 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1191425b mov dword ptr [0x1191a58c], edi */
  w32((uint32_t)(0x1191a58c), (EDI));
  /* 11914261 mov dword ptr [0x1191a594], eax */
  w32((uint32_t)(0x1191a594), (EAX));
L_11914266:;
  /* 11914266 pop edi */
  EDI = (pop32());
  /* 11914267 pop esi */
  ESI = (pop32());
  /* 11914268 pop ebx */
  EBX = (pop32());
  /* 11914269 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191426a ret  */
  ESPCHK(0x11913f42u, _esp0);
  ESP += 4; return;
}

/* FUN_1000426b @ 0x1191426b (777 bytes, 275 insns) */
void f_1191426b(void) {
  FTRACE(0x1191426bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191426b push ebp */
  push32((uint32_t)(EBP));
  /* 1191426c mov ebp, esp */
  EBP = (ESP);
  /* 1191426e sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914271 mov eax, dword ptr [0x1191a598] */
  EAX = (r32((uint32_t)(0x1191a598)));
  /* 11914276 mov edx, dword ptr [0x1191a59c] */
  EDX = (r32((uint32_t)(0x1191a59c)));
  /* 1191427c push ebx */
  push32((uint32_t)(EBX));
  /* 1191427d push esi */
  push32((uint32_t)(ESI));
  /* 1191427e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11914281 push edi */
  push32((uint32_t)(EDI));
  /* 11914282 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11914285 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914288 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1191428b lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1191428e and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11914291 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11914294 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11914297 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914298 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191429b jge 0x119142ab */
  if ((C.sf==C.of)) goto L_119142ab;
  /* 1191429d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 119142a0 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 119142a2 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 119142a6 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119142a9 jmp 0x119142bb */
  goto L_119142bb;
L_119142ab:;
  /* 119142ab add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119142ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 119142b1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 119142b3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 119142b5 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 119142b8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_119142bb:;
  /* 119142bb mov eax, dword ptr [0x1191a590] */
  EAX = (r32((uint32_t)(0x1191a590)));
  /* 119142c0 mov ebx, eax */
  EBX = (EAX);
  /* 119142c2 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119142c4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119142c7 jae 0x119142e2 */
  if (!C.cf) goto L_119142e2;
L_119142c9:;
  /* 119142c9 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 119142cc mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 119142ce and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119142d1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119142d3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119142d5 jne 0x119142e2 */
  if (!C.zf) goto L_119142e2;
  /* 119142d7 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 119142da cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119142dd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119142e0 jb 0x119142c9 */
  if (C.cf) goto L_119142c9;
L_119142e2:;
  /* 119142e2 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119142e5 jne 0x11914360 */
  if (!C.zf) goto L_11914360;
  /* 119142e7 mov ebx, edx */
  EBX = (EDX);
L_119142e9:;
  /* 119142e9 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119142eb mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 119142ee jae 0x11914305 */
  if (!C.cf) goto L_11914305;
  /* 119142f0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 119142f3 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 119142f5 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119142f8 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 119142fa or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 119142fc jne 0x11914303 */
  if (!C.zf) goto L_11914303;
  /* 119142fe add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914301 jmp 0x119142e9 */
  goto L_119142e9;
L_11914303:;
  /* 11914303 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11914305:;
  /* 11914305 jne 0x11914360 */
  if (!C.zf) goto L_11914360;
L_11914307:;
  /* 11914307 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191430a jae 0x1191431d */
  if (!C.cf) goto L_1191431d;
  /* 1191430c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914310 jne 0x1191431a */
  if (!C.zf) goto L_1191431a;
  /* 11914312 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914315 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11914318 jmp 0x11914307 */
  goto L_11914307;
L_1191431a:;
  /* 1191431a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1191431d:;
  /* 1191431d jne 0x11914345 */
  if (!C.zf) goto L_11914345;
  /* 1191431f mov ebx, edx */
  EBX = (EDX);
L_11914321:;
  /* 11914321 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914323 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11914326 jae 0x11914335 */
  if (!C.cf) goto L_11914335;
  /* 11914328 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191432c jne 0x11914333 */
  if (!C.zf) goto L_11914333;
  /* 1191432e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914331 jmp 0x11914321 */
  goto L_11914321;
L_11914333:;
  /* 11914333 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11914335:;
  /* 11914335 jne 0x11914345 */
  if (!C.zf) goto L_11914345;
  /* 11914337 call 0x11914574 */
  push32(0x1191433cu); f_11914574();
  /* 1191433c mov ebx, eax */
  EBX = (EAX);
  /* 1191433e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11914340 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11914343 je 0x11914359 */
  if (C.zf) goto L_11914359;
L_11914345:;
  /* 11914345 push ebx */
  push32((uint32_t)(EBX));
  /* 11914346 call 0x11914625 */
  push32(0x1191434bu); f_11914625();
  /* 1191434b pop ecx */
  ECX = (pop32());
  /* 1191434c mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1191434f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11914351 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11914354 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914357 jne 0x11914360 */
  if (!C.zf) goto L_11914360;
L_11914359:;
  /* 11914359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1191435b jmp 0x1191456f */
  goto L_1191456f;
L_11914360:;
  /* 11914360 mov dword ptr [0x1191a590], ebx */
  w32((uint32_t)(0x1191a590), (EBX));
  /* 11914366 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11914369 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1191436b cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191436e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11914371 je 0x11914387 */
  if (C.zf) goto L_11914387;
  /* 11914373 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1191437a mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1191437e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11914381 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11914383 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11914385 jne 0x119143be */
  if (!C.zf) goto L_119143be;
L_11914387:;
  /* 11914387 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1191438d mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11914390 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11914393 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11914396 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1191439a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1191439d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1191439f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 119143a2 jne 0x119143bb */
  if (!C.zf) goto L_119143bb;
L_119143a4:;
  /* 119143a4 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 119143aa inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 119143ad and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 119143b0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119143b3 mov edi, esi */
  EDI = (ESI);
  /* 119143b5 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 119143b7 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 119143b9 je 0x119143a4 */
  if (C.zf) goto L_119143a4;
L_119143bb:;
  /* 119143bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_119143be:;
  /* 119143be mov ecx, edx */
  ECX = (EDX);
  /* 119143c0 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119143c2 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 119143c8 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 119143cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 119143d2 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 119143d6 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 119143d8 jne 0x119143e7 */
  if (!C.zf) goto L_119143e7;
  /* 119143da mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 119143e1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 119143e3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 119143e6 pop edi */
  EDI = (pop32());
L_119143e7:;
  /* 119143e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 119143e9 jl 0x119143f0 */
  if ((C.sf!=C.of)) goto L_119143f0;
  /* 119143eb shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 119143ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 119143ee jmp 0x119143e7 */
  goto L_119143e7;
L_119143f0:;
  /* 119143f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 119143f3 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 119143f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 119143f9 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119143fc mov esi, ecx */
  ESI = (ECX);
  /* 119143fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11914401 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11914404 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11914405 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914408 jle 0x1191440d */
  if ((C.zf||C.sf!=C.of)) goto L_1191440d;
  /* 1191440a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1191440c pop esi */
  ESI = (pop32());
L_1191440d:;
  /* 1191440d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191440f je 0x11914522 */
  if (C.zf) goto L_11914522;
  /* 11914415 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11914418 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191441b jne 0x1191447e */
  if (!C.zf) goto L_1191447e;
  /* 1191441d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914420 jge 0x1191444d */
  if ((C.sf==C.of)) goto L_1191444d;
  /* 11914422 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11914427 mov ecx, edi */
  ECX = (EDI);
  /* 11914429 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1191442b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191442e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11914432 not ebx */
  EBX = (~(EBX));
  /* 11914434 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11914437 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1191443b mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1191443f dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 11914441 jne 0x1191447b */
  if (!C.zf) goto L_1191447b;
  /* 11914443 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914446 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11914449 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1191444b jmp 0x1191447e */
  goto L_1191447e;
L_1191444d:;
  /* 1191444d lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11914450 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11914455 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11914457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191445a lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1191445e lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11914465 not ebx */
  EBX = (~(EBX));
  /* 11914467 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11914469 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1191446b mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1191446e jne 0x1191447b */
  if (!C.zf) goto L_1191447b;
  /* 11914470 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914473 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11914476 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11914479 jmp 0x1191447e */
  goto L_1191447e;
L_1191447b:;
  /* 1191447b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1191447e:;
  /* 1191447e mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 11914481 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 11914484 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914488 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1191448b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1191448e mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 11914491 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11914494 je 0x1191452e */
  if (C.zf) goto L_1191452e;
  /* 1191449a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1191449d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 119144a1 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 119144a4 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 119144a7 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 119144aa mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 119144ad mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119144b0 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 119144b3 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 119144b6 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119144b9 jne 0x1191451f */
  if (!C.zf) goto L_1191451f;
  /* 119144bb mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 119144bf cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119144c2 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 119144c5 jge 0x119144f0 */
  if ((C.sf==C.of)) goto L_119144f0;
  /* 119144c7 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119144c9 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119144cd mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 119144d1 jne 0x119144de */
  if (!C.zf) goto L_119144de;
  /* 119144d3 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119144d8 mov ecx, esi */
  ECX = (ESI);
  /* 119144da shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119144dc or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_119144de:;
  /* 119144de mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 119144e3 mov ecx, esi */
  ECX = (ESI);
  /* 119144e5 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 119144e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 119144ea or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119144ee jmp 0x1191451f */
  goto L_1191451f;
L_119144f0:;
  /* 119144f0 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119144f2 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 119144f6 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 119144fa jne 0x11914509 */
  if (!C.zf) goto L_11914509;
  /* 119144fc lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 119144ff mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11914504 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11914506 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11914509:;
  /* 11914509 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191450c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11914513 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11914516 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1191451b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1191451d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1191451f:;
  /* 1191451f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11914522:;
  /* 11914522 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11914524 je 0x11914531 */
  if (C.zf) goto L_11914531;
  /* 11914526 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11914528 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1191452c jmp 0x11914531 */
  goto L_11914531;
L_1191452e:;
  /* 1191452e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11914531:;
  /* 11914531 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11914534 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914536 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11914539 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1191453b mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1191453f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11914542 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11914544 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11914546 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 11914549 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1191454b jne 0x11914567 */
  if (!C.zf) goto L_11914567;
  /* 1191454d cmp ebx, dword ptr [0x1191a594] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1191a594))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914553 jne 0x11914567 */
  if (!C.zf) goto L_11914567;
  /* 11914555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11914558 cmp ecx, dword ptr [0x1191a58c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1191a58c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191455e jne 0x11914567 */
  if (!C.zf) goto L_11914567;
  /* 11914560 and dword ptr [0x1191a594], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1191a594)))&(0x0u); w32((uint32_t)(0x1191a594), (_r)); fl_logic(_r,32); }
L_11914567:;
  /* 11914567 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1191456a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1191456c lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1191456f:;
  /* 1191456f pop edi */
  EDI = (pop32());
  /* 11914570 pop esi */
  ESI = (pop32());
  /* 11914571 pop ebx */
  EBX = (pop32());
  /* 11914572 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11914573 ret  */
  ESPCHK(0x1191426bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004574 @ 0x11914574 (177 bytes, 53 insns) */
void f_11914574(void) {
  FTRACE(0x11914574u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914574 mov eax, dword ptr [0x1191a598] */
  EAX = (r32((uint32_t)(0x1191a598)));
  /* 11914579 mov ecx, dword ptr [0x1191a588] */
  ECX = (r32((uint32_t)(0x1191a588)));
  /* 1191457f push esi */
  push32((uint32_t)(ESI));
  /* 11914580 push edi */
  push32((uint32_t)(EDI));
  /* 11914581 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11914583 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914585 jne 0x119145b7 */
  if (!C.zf) goto L_119145b7;
  /* 11914587 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1191458b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1191458e push eax */
  push32((uint32_t)(EAX));
  /* 1191458f push dword ptr [0x1191a59c] */
  push32((uint32_t)(r32((uint32_t)(0x1191a59c))));
  /* 11914595 push edi */
  push32((uint32_t)(EDI));
  /* 11914596 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 1191459c call dword ptr [0x1191602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191602c))), 0x119145a2u);
  /* 119145a2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119145a4 je 0x11914607 */
  if (C.zf) goto L_11914607;
  /* 119145a6 add dword ptr [0x1191a588], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x1191a588))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x1191a588), (_r)); fl_add(_a,_b,_r,32); }
  /* 119145ad mov dword ptr [0x1191a59c], eax */
  w32((uint32_t)(0x1191a59c), (EAX));
  /* 119145b2 mov eax, dword ptr [0x1191a598] */
  EAX = (r32((uint32_t)(0x1191a598)));
L_119145b7:;
  /* 119145b7 mov ecx, dword ptr [0x1191a59c] */
  ECX = (r32((uint32_t)(0x1191a59c)));
  /* 119145bd push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 119145c2 push 8 */
  push32((uint32_t)(0x8u));
  /* 119145c4 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 119145c7 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 119145cd lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 119145d0 call dword ptr [0x11916040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916040))), 0x119145d6u);
  /* 119145d6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119145d8 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 119145db je 0x11914607 */
  if (C.zf) goto L_11914607;
  /* 119145dd push 4 */
  push32((uint32_t)(0x4u));
  /* 119145df push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 119145e4 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 119145e9 push edi */
  push32((uint32_t)(EDI));
  /* 119145ea call dword ptr [0x1191603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191603c))), 0x119145f0u);
  /* 119145f0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119145f2 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 119145f5 jne 0x1191460b */
  if (!C.zf) goto L_1191460b;
  /* 119145f7 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 119145fa push edi */
  push32((uint32_t)(EDI));
  /* 119145fb push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11914601 call dword ptr [0x11916054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916054))), 0x11914607u);
L_11914607:;
  /* 11914607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11914609 jmp 0x11914622 */
  goto L_11914622;
L_1191460b:;
  /* 1191460b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1191460f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11914611 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11914614 inc dword ptr [0x1191a598] */
  { uint32_t _r=(r32((uint32_t)(0x1191a598)))+1; w32((uint32_t)(0x1191a598), (_r)); fl_inc(_r,32); }
  /* 1191461a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1191461d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11914620 mov eax, esi */
  EAX = (ESI);
L_11914622:;
  /* 11914622 pop edi */
  EDI = (pop32());
  /* 11914623 pop esi */
  ESI = (pop32());
  /* 11914624 ret  */
  ESPCHK(0x11914574u, _esp0);
  ESP += 4; return;
}

/* FUN_10004625 @ 0x11914625 (251 bytes, 85 insns) */
void f_11914625(void) {
  FTRACE(0x11914625u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914625 push ebp */
  push32((uint32_t)(EBP));
  /* 11914626 mov ebp, esp */
  EBP = (ESP);
  /* 11914628 push ecx */
  push32((uint32_t)(ECX));
  /* 11914629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1191462c push ebx */
  push32((uint32_t)(EBX));
  /* 1191462d push esi */
  push32((uint32_t)(ESI));
  /* 1191462e push edi */
  push32((uint32_t)(EDI));
  /* 1191462f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11914632 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11914635 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11914637:;
  /* 11914637 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914639 jl 0x11914640 */
  if ((C.sf!=C.of)) goto L_11914640;
  /* 1191463b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1191463d inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1191463e jmp 0x11914637 */
  goto L_11914637;
L_11914640:;
  /* 11914640 mov eax, ebx */
  EAX = (EBX);
  /* 11914642 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11914644 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1191464a pop edx */
  EDX = (pop32());
  /* 1191464b lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 11914652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11914655:;
  /* 11914655 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 11914658 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1191465b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191465e dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1191465f jne 0x11914655 */
  if (!C.zf) goto L_11914655;
  /* 11914661 mov edi, ebx */
  EDI = (EBX);
  /* 11914663 push 4 */
  push32((uint32_t)(0x4u));
  /* 11914665 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 11914668 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191466b push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11914670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11914675 push edi */
  push32((uint32_t)(EDI));
  /* 11914676 call dword ptr [0x1191603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191603c))), 0x1191467cu);
  /* 1191467c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191467e jne 0x11914688 */
  if (!C.zf) goto L_11914688;
  /* 11914680 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11914683 jmp 0x1191471b */
  goto L_1191471b;
L_11914688:;
  /* 11914688 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1191468e cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914690 ja 0x119146ce */
  if ((!C.cf&&!C.zf)) goto L_119146ce;
  /* 11914692 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_11914695:;
  /* 11914695 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 11914699 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 119146a0 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 119146a6 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 119146ad mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 119146af lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 119146b5 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119146b8 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 119146c2 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119146c7 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 119146ca cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119146cc jbe 0x11914695 */
  if ((C.cf||C.zf)) goto L_11914695;
L_119146ce:;
  /* 119146ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 119146d1 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 119146d4 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119146d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 119146db pop edi */
  EDI = (pop32());
  /* 119146dc mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119146df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 119146e2 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 119146e5 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 119146e8 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 119146eb and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 119146f0 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 119146f7 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 119146fa mov cl, al */
  CL = (AL);
  /* 119146fc inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 119146fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11914700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914703 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11914706 jne 0x1191470b */
  if (!C.zf) goto L_1191470b;
  /* 11914708 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1191470b:;
  /* 1191470b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11914710 mov ecx, ebx */
  ECX = (EBX);
  /* 11914712 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11914714 not edx */
  EDX = (~(EDX));
  /* 11914716 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11914719 mov eax, ebx */
  EAX = (EBX);
L_1191471b:;
  /* 1191471b pop edi */
  EDI = (pop32());
  /* 1191471c pop esi */
  ESI = (pop32());
  /* 1191471d pop ebx */
  EBX = (pop32());
  /* 1191471e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191471f ret  */
  ESPCHK(0x11914625u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x11914720 (324 bytes, 102 insns) */
void f_11914720(void) {
  FTRACE(0x11914720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914720 cmp dword ptr [0x119176f0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x119176f0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914727 push ebx */
  push32((uint32_t)(EBX));
  /* 11914728 push ebp */
  push32((uint32_t)(EBP));
  /* 11914729 push esi */
  push32((uint32_t)(ESI));
  /* 1191472a push edi */
  push32((uint32_t)(EDI));
  /* 1191472b jne 0x11914734 */
  if (!C.zf) goto L_11914734;
  /* 1191472d mov esi, 0x119176e0 */
  ESI = (0x119176e0u);
  /* 11914732 jmp 0x11914751 */
  goto L_11914751;
L_11914734:;
  /* 11914734 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 11914739 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191473b push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11914741 call dword ptr [0x11916040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916040))), 0x11914747u);
  /* 11914747 mov esi, eax */
  ESI = (EAX);
  /* 11914749 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1191474b je 0x1191485d */
  if (C.zf) goto L_1191485d;
L_11914751:;
  /* 11914751 mov ebp, dword ptr [0x1191603c] */
  EBP = (r32((uint32_t)(0x1191603c)));
  /* 11914757 push 4 */
  push32((uint32_t)(0x4u));
  /* 11914759 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1191475e push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 11914763 push 0 */
  push32((uint32_t)(0x0u));
  /* 11914765 call ebp */
  call_ind((uint32_t)(EBP), 0x11914767u);
  /* 11914767 mov edi, eax */
  EDI = (EAX);
  /* 11914769 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1191476b je 0x11914846 */
  if (C.zf) goto L_11914846;
  /* 11914771 push 4 */
  push32((uint32_t)(0x4u));
  /* 11914773 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 11914778 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1191477d push ebx */
  push32((uint32_t)(EBX));
  /* 1191477e push edi */
  push32((uint32_t)(EDI));
  /* 1191477f call ebp */
  call_ind((uint32_t)(EBP), 0x11914781u);
  /* 11914781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914783 je 0x11914838 */
  if (C.zf) goto L_11914838;
  /* 11914789 mov eax, 0x119176e0 */
  EAX = (0x119176e0u);
  /* 1191478e cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914790 jne 0x119147b0 */
  if (!C.zf) goto L_119147b0;
  /* 11914792 cmp dword ptr [0x119176e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119176e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914799 jne 0x119147a0 */
  if (!C.zf) goto L_119147a0;
  /* 1191479b mov dword ptr [0x119176e0], eax */
  w32((uint32_t)(0x119176e0), (EAX));
L_119147a0:;
  /* 119147a0 cmp dword ptr [0x119176e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x119176e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119147a7 jne 0x119147c5 */
  if (!C.zf) goto L_119147c5;
  /* 119147a9 mov dword ptr [0x119176e4], eax */
  w32((uint32_t)(0x119176e4), (EAX));
  /* 119147ae jmp 0x119147c5 */
  goto L_119147c5;
L_119147b0:;
  /* 119147b0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 119147b2 mov eax, dword ptr [0x119176e4] */
  EAX = (r32((uint32_t)(0x119176e4)));
  /* 119147b7 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 119147ba mov dword ptr [0x119176e4], esi */
  w32((uint32_t)(0x119176e4), (ESI));
  /* 119147c0 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 119147c3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_119147c5:;
  /* 119147c5 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 119147cb lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 119147d1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 119147d4 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 119147d7 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 119147da mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 119147dd mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 119147e0 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 119147e2 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_119147e7:;
  /* 119147e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 119147e9 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119147ec setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 119147ef dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119147f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119147f2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 119147f3 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 119147f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 119147f6 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119147f9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119147fc cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914802 jl 0x119147e7 */
  if ((C.sf!=C.of)) goto L_119147e7;
  /* 11914804 push ebx */
  push32((uint32_t)(EBX));
  /* 11914805 push 0 */
  push32((uint32_t)(0x0u));
  /* 11914807 push edi */
  push32((uint32_t)(EDI));
  /* 11914808 call 0x11914ef0 */
  push32(0x1191480du); f_11914ef0();
  /* 1191480d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11914810:;
  /* 11914810 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11914813 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914815 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914817 jae 0x11914834 */
  if (!C.cf) goto L_11914834;
  /* 11914819 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 11914820 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11914823 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11914825 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1191482c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914832 jmp 0x11914810 */
  goto L_11914810;
L_11914834:;
  /* 11914834 mov eax, esi */
  EAX = (ESI);
  /* 11914836 jmp 0x1191485f */
  goto L_1191485f;
L_11914838:;
  /* 11914838 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1191483d push 0 */
  push32((uint32_t)(0x0u));
  /* 1191483f push edi */
  push32((uint32_t)(EDI));
  /* 11914840 call dword ptr [0x119160c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160c4))), 0x11914846u);
L_11914846:;
  /* 11914846 cmp esi, 0x119176e0 */
  { uint32_t _a=(ESI),_b=(0x119176e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191484c je 0x1191485d */
  if (C.zf) goto L_1191485d;
  /* 1191484e push esi */
  push32((uint32_t)(ESI));
  /* 1191484f push 0 */
  push32((uint32_t)(0x0u));
  /* 11914851 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 11914857 call dword ptr [0x11916054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916054))), 0x1191485du);
L_1191485d:;
  /* 1191485d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1191485f:;
  /* 1191485f pop edi */
  EDI = (pop32());
  /* 11914860 pop esi */
  ESI = (pop32());
  /* 11914861 pop ebp */
  EBP = (pop32());
  /* 11914862 pop ebx */
  EBX = (pop32());
  /* 11914863 ret  */
  ESPCHK(0x11914720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004864 @ 0x11914864 (86 bytes, 27 insns) */
void f_11914864(void) {
  FTRACE(0x11914864u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914864 push esi */
  push32((uint32_t)(ESI));
  /* 11914865 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11914869 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1191486e push 0 */
  push32((uint32_t)(0x0u));
  /* 11914870 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11914873 call dword ptr [0x119160c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160c4))), 0x11914879u);
  /* 11914879 cmp dword ptr [0x11919700], esi */
  { uint32_t _a=(r32((uint32_t)(0x11919700))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191487f jne 0x11914889 */
  if (!C.zf) goto L_11914889;
  /* 11914881 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11914884 mov dword ptr [0x11919700], eax */
  w32((uint32_t)(0x11919700), (EAX));
L_11914889:;
  /* 11914889 cmp esi, 0x119176e0 */
  { uint32_t _a=(ESI),_b=(0x119176e0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191488f je 0x119148b1 */
  if (C.zf) goto L_119148b1;
  /* 11914891 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11914894 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11914896 push esi */
  push32((uint32_t)(ESI));
  /* 11914897 push 0 */
  push32((uint32_t)(0x0u));
  /* 11914899 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1191489b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1191489d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 119148a0 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 119148a3 push dword ptr [0x1191a7c8] */
  push32((uint32_t)(r32((uint32_t)(0x1191a7c8))));
  /* 119148a9 call dword ptr [0x11916054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916054))), 0x119148afu);
  /* 119148af pop esi */
  ESI = (pop32());
  /* 119148b0 ret  */
  ESPCHK(0x11914864u, _esp0);
  ESP += 4; return;
L_119148b1:;
  /* 119148b1 or dword ptr [0x119176f0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x119176f0)))|(0xffffffffu); w32((uint32_t)(0x119176f0), (_r)); fl_logic(_r,32); }
  /* 119148b8 pop esi */
  ESI = (pop32());
  /* 119148b9 ret  */
  ESPCHK(0x11914864u, _esp0);
  ESP += 4; return;
}

/* FUN_100048ba @ 0x119148ba (194 bytes, 66 insns) */
void f_119148ba(void) {
  FTRACE(0x119148bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119148ba push ebp */
  push32((uint32_t)(EBP));
  /* 119148bb mov ebp, esp */
  EBP = (ESP);
  /* 119148bd push ecx */
  push32((uint32_t)(ECX));
  /* 119148be push ebx */
  push32((uint32_t)(EBX));
  /* 119148bf push esi */
  push32((uint32_t)(ESI));
  /* 119148c0 mov esi, dword ptr [0x119176e4] */
  ESI = (r32((uint32_t)(0x119176e4)));
  /* 119148c6 push edi */
  push32((uint32_t)(EDI));
L_119148c7:;
  /* 119148c7 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119148cb je 0x11914965 */
  if (C.zf) goto L_11914965;
  /* 119148d1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119148d5 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 119148db mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_119148e0:;
  /* 119148e0 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119148e6 jne 0x11914921 */
  if (!C.zf) goto L_11914921;
  /* 119148e8 mov eax, ebx */
  EAX = (EBX);
  /* 119148ea push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 119148ef add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119148f2 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 119148f7 push eax */
  push32((uint32_t)(EAX));
  /* 119148f8 call dword ptr [0x119160c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160c4))), 0x119148feu);
  /* 119148fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914900 je 0x11914921 */
  if (C.zf) goto L_11914921;
  /* 11914902 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 11914905 dec dword ptr [0x1191a3f4] */
  { uint32_t _r=(r32((uint32_t)(0x1191a3f4)))-1; w32((uint32_t)(0x1191a3f4), (_r)); fl_dec(_r,32); }
  /* 1191490b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1191490e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914910 je 0x11914916 */
  if (C.zf) goto L_11914916;
  /* 11914912 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914914 jbe 0x11914919 */
  if ((C.cf||C.zf)) goto L_11914919;
L_11914916:;
  /* 11914916 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_11914919:;
  /* 11914919 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1191491c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1191491f je 0x1191492e */
  if (C.zf) goto L_1191492e;
L_11914921:;
  /* 11914921 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914927 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191492a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1191492c jge 0x119148e0 */
  if ((C.sf==C.of)) goto L_119148e0;
L_1191492e:;
  /* 1191492e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914932 mov ecx, esi */
  ECX = (ESI);
  /* 11914934 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11914937 je 0x11914965 */
  if (C.zf) goto L_11914965;
  /* 11914939 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191493d jne 0x11914965 */
  if (!C.zf) goto L_11914965;
  /* 1191493f push 1 */
  push32((uint32_t)(0x1u));
  /* 11914941 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 11914944 pop edx */
  EDX = (pop32());
L_11914945:;
  /* 11914945 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914948 jne 0x11914956 */
  if (!C.zf) goto L_11914956;
  /* 1191494a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1191494b add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1191494e cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914954 jl 0x11914945 */
  if ((C.sf!=C.of)) goto L_11914945;
L_11914956:;
  /* 11914956 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191495c jne 0x11914965 */
  if (!C.zf) goto L_11914965;
  /* 1191495e push ecx */
  push32((uint32_t)(ECX));
  /* 1191495f call 0x11914864 */
  push32(0x11914964u); f_11914864();
  /* 11914964 pop ecx */
  ECX = (pop32());
L_11914965:;
  /* 11914965 cmp esi, dword ptr [0x119176e4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x119176e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191496b je 0x11914977 */
  if (C.zf) goto L_11914977;
  /* 1191496d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914971 jg 0x119148c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_119148c7;
L_11914977:;
  /* 11914977 pop edi */
  EDI = (pop32());
  /* 11914978 pop esi */
  ESI = (pop32());
  /* 11914979 pop ebx */
  EBX = (pop32());
  /* 1191497a leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191497b ret  */
  ESPCHK(0x119148bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000497c @ 0x1191497c (87 bytes, 34 insns) */
void f_1191497c(void) {
  FTRACE(0x1191497cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191497c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11914980 mov edx, 0x119176e0 */
  EDX = (0x119176e0u);
  /* 11914985 push esi */
  push32((uint32_t)(ESI));
  /* 11914986 mov ecx, edx */
  ECX = (EDX);
L_11914988:;
  /* 11914988 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191498b jbe 0x11914992 */
  if ((C.cf||C.zf)) goto L_11914992;
  /* 1191498d cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914990 jb 0x1191499a */
  if (C.cf) goto L_1191499a;
L_11914992:;
  /* 11914992 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11914994 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914996 je 0x119149cf */
  if (C.zf) goto L_119149cf;
  /* 11914998 jmp 0x11914988 */
  goto L_11914988;
L_1191499a:;
  /* 1191499a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1191499c jne 0x119149cf */
  if (!C.zf) goto L_119149cf;
  /* 1191499e mov esi, eax */
  ESI = (EAX);
  /* 119149a0 mov edx, 0x100 */
  EDX = (0x100u);
  /* 119149a5 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 119149ab cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119149ad jb 0x119149cf */
  if (C.cf) goto L_119149cf;
  /* 119149af mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 119149b3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 119149b5 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 119149b9 mov ecx, eax */
  ECX = (EAX);
  /* 119149bb and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 119149c0 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119149c2 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 119149c4 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119149c6 pop esi */
  ESI = (pop32());
  /* 119149c7 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 119149ca lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 119149ce ret  */
  ESPCHK(0x1191497cu, _esp0);
  ESP += 4; return;
L_119149cf:;
  /* 119149cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 119149d1 pop esi */
  ESI = (pop32());
  /* 119149d2 ret  */
  ESPCHK(0x1191497cu, _esp0);
  ESP += 4; return;
}

/* FUN_100049d3 @ 0x119149d3 (69 bytes, 19 insns) */
void f_119149d3(void) {
  FTRACE(0x119149d3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119149d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 119149d7 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 119149db sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119149de sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 119149e1 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 119149e5 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 119149e9 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 119149ec add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 119149ee and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 119149f1 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119149f7 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 119149fe jne 0x11914a17 */
  if (!C.zf) goto L_11914a17;
  /* 11914a00 inc dword ptr [0x1191a3f4] */
  { uint32_t _r=(r32((uint32_t)(0x1191a3f4)))+1; w32((uint32_t)(0x1191a3f4), (_r)); fl_inc(_r,32); }
  /* 11914a06 cmp dword ptr [0x1191a3f4], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x1191a3f4))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a0d jne 0x11914a17 */
  if (!C.zf) goto L_11914a17;
  /* 11914a0f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11914a11 call 0x119148ba */
  push32(0x11914a16u); f_119148ba();
  /* 11914a16 pop ecx */
  ECX = (pop32());
L_11914a17:;
  /* 11914a17 ret  */
  ESPCHK(0x119149d3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a18 @ 0x11914a18 (520 bytes, 180 insns) */
void f_11914a18(void) {
  FTRACE(0x11914a18u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914a18 push ebp */
  push32((uint32_t)(EBP));
  /* 11914a19 mov ebp, esp */
  EBP = (ESP);
  /* 11914a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11914a1c push ecx */
  push32((uint32_t)(ECX));
  /* 11914a1d push ebx */
  push32((uint32_t)(EBX));
  /* 11914a1e push esi */
  push32((uint32_t)(ESI));
  /* 11914a1f mov esi, dword ptr [0x11919700] */
  ESI = (r32((uint32_t)(0x11919700)));
  /* 11914a25 push edi */
  push32((uint32_t)(EDI));
L_11914a26:;
  /* 11914a26 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 11914a29 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a2c je 0x11914ad1 */
  if (C.zf) goto L_11914ad1;
  /* 11914a32 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 11914a35 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11914a3b mov eax, edi */
  EAX = (EDI);
  /* 11914a3d sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914a3f sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914a42 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 11914a45 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11914a48 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914a4a cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11914a4f jae 0x11914a8b */
  if (!C.cf) goto L_11914a8b;
L_11914a51:;
  /* 11914a51 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11914a53 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914a56 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a58 jl 0x11914a74 */
  if ((C.sf!=C.of)) goto L_11914a74;
  /* 11914a5a cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a5d jbe 0x11914a74 */
  if ((C.cf||C.zf)) goto L_11914a74;
  /* 11914a5f push ebx */
  push32((uint32_t)(EBX));
  /* 11914a60 push ecx */
  push32((uint32_t)(ECX));
  /* 11914a61 push eax */
  push32((uint32_t)(EAX));
  /* 11914a62 call 0x11914c20 */
  push32(0x11914a67u); f_11914c20();
  /* 11914a67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11914a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914a6c jne 0x11914ae3 */
  if (!C.zf) goto L_11914ae3;
  /* 11914a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11914a71 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11914a74:;
  /* 11914a74 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914a77 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 11914a7d add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914a82 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11914a87 jb 0x11914a51 */
  if (C.cf) goto L_11914a51;
  /* 11914a89 jmp 0x11914a8e */
  goto L_11914a8e;
L_11914a8b:;
  /* 11914a8b mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11914a8e:;
  /* 11914a8e mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11914a91 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11914a94 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 11914a97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11914a9a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914a9c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11914a9f jae 0x11914ad4 */
  if (!C.cf) goto L_11914ad4;
L_11914aa1:;
  /* 11914aa1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11914aa3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914aa5 jl 0x11914ac0 */
  if ((C.sf!=C.of)) goto L_11914ac0;
  /* 11914aa7 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914aaa jbe 0x11914ac0 */
  if ((C.cf||C.zf)) goto L_11914ac0;
  /* 11914aac push ebx */
  push32((uint32_t)(EBX));
  /* 11914aad push eax */
  push32((uint32_t)(EAX));
  /* 11914aae push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11914ab1 call 0x11914c20 */
  push32(0x11914ab6u); f_11914c20();
  /* 11914ab6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11914ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914abb jne 0x11914ae3 */
  if (!C.zf) goto L_11914ae3;
  /* 11914abd mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_11914ac0:;
  /* 11914ac0 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11914ac7 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914aca cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914acd jb 0x11914aa1 */
  if (C.cf) goto L_11914aa1;
  /* 11914acf jmp 0x11914ad4 */
  goto L_11914ad4;
L_11914ad1:;
  /* 11914ad1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_11914ad4:;
  /* 11914ad4 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 11914ad6 cmp esi, dword ptr [0x11919700] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11919700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914adc je 0x11914af3 */
  if (C.zf) goto L_11914af3;
  /* 11914ade jmp 0x11914a26 */
  goto L_11914a26;
L_11914ae3:;
  /* 11914ae3 mov dword ptr [0x11919700], esi */
  w32((uint32_t)(0x11919700), (ESI));
  /* 11914ae9 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914aeb mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11914aee jmp 0x11914c1b */
  goto L_11914c1b;
L_11914af3:;
  /* 11914af3 mov eax, 0x119176e0 */
  EAX = (0x119176e0u);
  /* 11914af8 mov edi, eax */
  EDI = (EAX);
L_11914afa:;
  /* 11914afa cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914afe je 0x11914b06 */
  if (C.zf) goto L_11914b06;
  /* 11914b00 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b04 jne 0x11914b12 */
  if (!C.zf) goto L_11914b12;
L_11914b06:;
  /* 11914b06 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 11914b08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b0a je 0x11914be7 */
  if (C.zf) goto L_11914be7;
  /* 11914b10 jmp 0x11914afa */
  goto L_11914afa;
L_11914b12:;
  /* 11914b12 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 11914b15 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11914b19 mov esi, ebx */
  ESI = (EBX);
  /* 11914b1b mov eax, ebx */
  EAX = (EBX);
  /* 11914b1d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914b1f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914b22 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11914b25 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 11914b28 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914b2b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b2e jne 0x11914b41 */
  if (!C.zf) goto L_11914b41;
L_11914b30:;
  /* 11914b30 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b34 jge 0x11914b41 */
  if ((C.sf==C.of)) goto L_11914b41;
  /* 11914b36 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914b39 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11914b3c cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b3f je 0x11914b30 */
  if (C.zf) goto L_11914b30;
L_11914b41:;
  /* 11914b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11914b44 push 4 */
  push32((uint32_t)(0x4u));
  /* 11914b46 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 11914b49 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11914b4e push eax */
  push32((uint32_t)(EAX));
  /* 11914b4f push esi */
  push32((uint32_t)(ESI));
  /* 11914b50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11914b53 call dword ptr [0x1191603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191603c))), 0x11914b59u);
  /* 11914b59 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914b5b jne 0x11914c19 */
  if (!C.zf) goto L_11914c19;
  /* 11914b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11914b63 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 11914b66 push esi */
  push32((uint32_t)(ESI));
  /* 11914b67 call 0x11914ef0 */
  push32(0x11914b6cu); f_11914ef0();
  /* 11914b6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11914b6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11914b72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11914b74 mov ecx, ebx */
  ECX = (EBX);
  /* 11914b76 jle 0x11914ba8 */
  if ((C.zf||C.sf!=C.of)) goto L_11914ba8;
  /* 11914b78 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 11914b7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11914b7e:;
  /* 11914b7e or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 11914b85 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 11914b88 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 11914b8b mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11914b90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11914b92 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11914b94 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 11914b9b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914ba0 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914ba3 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 11914ba6 jne 0x11914b7e */
  if (!C.zf) goto L_11914b7e;
L_11914ba8:;
  /* 11914ba8 mov dword ptr [0x11919700], edi */
  w32((uint32_t)(0x11919700), (EDI));
  /* 11914bae lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_11914bb4:;
  /* 11914bb4 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914bb6 jae 0x11914bc4 */
  if (!C.cf) goto L_11914bc4;
  /* 11914bb8 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914bbb je 0x11914bc2 */
  if (C.zf) goto L_11914bc2;
  /* 11914bbd add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914bc0 jmp 0x11914bb4 */
  goto L_11914bb4;
L_11914bc2:;
  /* 11914bc2 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11914bc4:;
  /* 11914bc4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914bc6 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11914bc8 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 11914bcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914bce mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 11914bd1 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 11914bd4 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914bd6 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914bd9 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 11914bdd lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 11914be3 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 11914be5 jmp 0x11914c1b */
  goto L_11914c1b;
L_11914be7:;
  /* 11914be7 call 0x11914720 */
  push32(0x11914becu); f_11914720();
  /* 11914bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914bee je 0x11914c19 */
  if (C.zf) goto L_11914c19;
  /* 11914bf0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11914bf3 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 11914bf6 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 11914bfa mov dword ptr [0x11919700], eax */
  w32((uint32_t)(0x11919700), (EAX));
  /* 11914bff mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11914c01 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 11914c06 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914c08 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11914c0b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 11914c0e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914c11 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 11914c17 jmp 0x11914c1b */
  goto L_11914c1b;
L_11914c19:;
  /* 11914c19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11914c1b:;
  /* 11914c1b pop edi */
  EDI = (pop32());
  /* 11914c1c pop esi */
  ESI = (pop32());
  /* 11914c1d pop ebx */
  EBX = (pop32());
  /* 11914c1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11914c1f ret  */
  ESPCHK(0x11914a18u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x11914c20 (292 bytes, 125 insns) */
void f_11914c20(void) {
  FTRACE(0x11914c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11914c21 mov ebp, esp */
  EBP = (ESP);
  /* 11914c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11914c24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11914c27 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11914c2a push ebx */
  push32((uint32_t)(EBX));
  /* 11914c2b push esi */
  push32((uint32_t)(ESI));
  /* 11914c2c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 11914c2f push edi */
  push32((uint32_t)(EDI));
  /* 11914c30 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 11914c32 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 11914c38 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c3a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11914c3d mov eax, edi */
  EAX = (EDI);
  /* 11914c3f mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11914c42 jb 0x11914c65 */
  if (C.cf) goto L_11914c65;
  /* 11914c44 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 11914c47 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11914c49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c4b jae 0x11914c54 */
  if (!C.cf) goto L_11914c54;
  /* 11914c4d add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 11914c4f sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914c52 jmp 0x11914c5d */
  goto L_11914c5d;
L_11914c54:;
  /* 11914c54 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11914c58 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11914c5b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11914c5d:;
  /* 11914c5d lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 11914c60 jmp 0x11914d33 */
  goto L_11914d33;
L_11914c65:;
  /* 11914c65 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914c67 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11914c6a je 0x11914c6e */
  if (C.zf) goto L_11914c6e;
  /* 11914c6c mov eax, esi */
  EAX = (ESI);
L_11914c6e:;
  /* 11914c6e lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11914c71 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c73 jae 0x11914cb8 */
  if (!C.cf) goto L_11914cb8;
L_11914c75:;
  /* 11914c75 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11914c77 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 11914c79 jne 0x11914cab */
  if (!C.zf) goto L_11914cab;
  /* 11914c7b push 1 */
  push32((uint32_t)(0x1u));
  /* 11914c7d lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 11914c80 pop esi */
  ESI = (pop32());
L_11914c81:;
  /* 11914c81 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11914c84 jne 0x11914c8a */
  if (!C.zf) goto L_11914c8a;
  /* 11914c86 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11914c87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11914c88 jmp 0x11914c81 */
  goto L_11914c81;
L_11914c8a:;
  /* 11914c8a cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c8c jae 0x11914cdc */
  if (!C.cf) goto L_11914cdc;
  /* 11914c8e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c91 jne 0x11914c98 */
  if (!C.zf) goto L_11914c98;
  /* 11914c93 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11914c96 jmp 0x11914ca4 */
  goto L_11914ca4;
L_11914c98:;
  /* 11914c98 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914c9b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914c9e jb 0x11914d3d */
  if (C.cf) goto L_11914d3d;
L_11914ca4:;
  /* 11914ca4 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 11914ca7 mov eax, ebx */
  EAX = (EBX);
  /* 11914ca9 jmp 0x11914cb0 */
  goto L_11914cb0;
L_11914cab:;
  /* 11914cab movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 11914cae add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11914cb0:;
  /* 11914cb0 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 11914cb3 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914cb6 jb 0x11914c75 */
  if (C.cf) goto L_11914c75;
L_11914cb8:;
  /* 11914cb8 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_11914cbb:;
  /* 11914cbb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914cbd jae 0x11914d3d */
  if (!C.cf) goto L_11914d3d;
  /* 11914cbf lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 11914cc2 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914cc5 jae 0x11914d3d */
  if (!C.cf) goto L_11914d3d;
  /* 11914cc7 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11914cc9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11914ccb jne 0x11914d0d */
  if (!C.zf) goto L_11914d0d;
  /* 11914ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 11914ccf lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 11914cd2 pop eax */
  EAX = (pop32());
L_11914cd3:;
  /* 11914cd3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11914cd6 jne 0x11914cfd */
  if (!C.zf) goto L_11914cfd;
  /* 11914cd8 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11914cd9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11914cda jmp 0x11914cd3 */
  goto L_11914cd3;
L_11914cdc:;
  /* 11914cdc lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 11914cdf cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914ce2 jae 0x11914ced */
  if (!C.cf) goto L_11914ced;
  /* 11914ce4 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914ce6 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11914ce8 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 11914ceb jmp 0x11914cf6 */
  goto L_11914cf6;
L_11914ced:;
  /* 11914ced and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11914cf1 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 11914cf4 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_11914cf6:;
  /* 11914cf6 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11914cf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914cfb jmp 0x11914d33 */
  goto L_11914d33;
L_11914cfd:;
  /* 11914cfd cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914cff jae 0x11914d14 */
  if (!C.cf) goto L_11914d14;
  /* 11914d01 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11914d04 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914d07 jb 0x11914d3d */
  if (C.cf) goto L_11914d3d;
  /* 11914d09 mov esi, ebx */
  ESI = (EBX);
  /* 11914d0b jmp 0x11914cbb */
  goto L_11914cbb;
L_11914d0d:;
  /* 11914d0d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11914d10 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914d12 jmp 0x11914cbb */
  goto L_11914cbb;
L_11914d14:;
  /* 11914d14 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 11914d17 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914d1a jae 0x11914d25 */
  if (!C.cf) goto L_11914d25;
  /* 11914d1c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914d1e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 11914d20 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11914d23 jmp 0x11914d2e */
  goto L_11914d2e;
L_11914d25:;
  /* 11914d25 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11914d29 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 11914d2c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11914d2e:;
  /* 11914d2e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11914d30 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_11914d33:;
  /* 11914d33 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11914d36 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11914d39 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11914d3b jmp 0x11914d3f */
  goto L_11914d3f;
L_11914d3d:;
  /* 11914d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11914d3f:;
  /* 11914d3f pop edi */
  EDI = (pop32());
  /* 11914d40 pop esi */
  ESI = (pop32());
  /* 11914d41 pop ebx */
  EBX = (pop32());
  /* 11914d42 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11914d43 ret  */
  ESPCHK(0x11914c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d44 @ 0x11914d44 (137 bytes, 50 insns) */
void f_11914d44(void) {
  FTRACE(0x11914d44u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914d44 push ebx */
  push32((uint32_t)(EBX));
  /* 11914d45 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11914d47 cmp dword ptr [0x1191a3f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a3f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914d4d push esi */
  push32((uint32_t)(ESI));
  /* 11914d4e push edi */
  push32((uint32_t)(EDI));
  /* 11914d4f jne 0x11914d93 */
  if (!C.zf) goto L_11914d93;
  /* 11914d51 push 0x119164f8 */
  push32((uint32_t)(0x119164f8u));
  /* 11914d56 call dword ptr [0x11916024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916024))), 0x11914d5cu);
  /* 11914d5c mov edi, eax */
  EDI = (EAX);
  /* 11914d5e cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914d60 je 0x11914dc9 */
  if (C.zf) goto L_11914dc9;
  /* 11914d62 mov esi, dword ptr [0x11916030] */
  ESI = (r32((uint32_t)(0x11916030)));
  /* 11914d68 push 0x119164ec */
  push32((uint32_t)(0x119164ecu));
  /* 11914d6d push edi */
  push32((uint32_t)(EDI));
  /* 11914d6e call esi */
  call_ind((uint32_t)(ESI), 0x11914d70u);
  /* 11914d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914d72 mov dword ptr [0x1191a3f8], eax */
  w32((uint32_t)(0x1191a3f8), (EAX));
  /* 11914d77 je 0x11914dc9 */
  if (C.zf) goto L_11914dc9;
  /* 11914d79 push 0x119164dc */
  push32((uint32_t)(0x119164dcu));
  /* 11914d7e push edi */
  push32((uint32_t)(EDI));
  /* 11914d7f call esi */
  call_ind((uint32_t)(ESI), 0x11914d81u);
  /* 11914d81 push 0x119164c8 */
  push32((uint32_t)(0x119164c8u));
  /* 11914d86 push edi */
  push32((uint32_t)(EDI));
  /* 11914d87 mov dword ptr [0x1191a3fc], eax */
  w32((uint32_t)(0x1191a3fc), (EAX));
  /* 11914d8c call esi */
  call_ind((uint32_t)(ESI), 0x11914d8eu);
  /* 11914d8e mov dword ptr [0x1191a400], eax */
  w32((uint32_t)(0x1191a400), (EAX));
L_11914d93:;
  /* 11914d93 mov eax, dword ptr [0x1191a3fc] */
  EAX = (r32((uint32_t)(0x1191a3fc)));
  /* 11914d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914d9a je 0x11914db2 */
  if (C.zf) goto L_11914db2;
  /* 11914d9c call eax */
  call_ind((uint32_t)(EAX), 0x11914d9eu);
  /* 11914d9e mov ebx, eax */
  EBX = (EAX);
  /* 11914da0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11914da2 je 0x11914db2 */
  if (C.zf) goto L_11914db2;
  /* 11914da4 mov eax, dword ptr [0x1191a400] */
  EAX = (r32((uint32_t)(0x1191a400)));
  /* 11914da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914dab je 0x11914db2 */
  if (C.zf) goto L_11914db2;
  /* 11914dad push ebx */
  push32((uint32_t)(EBX));
  /* 11914dae call eax */
  call_ind((uint32_t)(EAX), 0x11914db0u);
  /* 11914db0 mov ebx, eax */
  EBX = (EAX);
L_11914db2:;
  /* 11914db2 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11914db6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11914dba push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11914dbe push ebx */
  push32((uint32_t)(EBX));
  /* 11914dbf call dword ptr [0x1191a3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191a3f8))), 0x11914dc5u);
L_11914dc5:;
  /* 11914dc5 pop edi */
  EDI = (pop32());
  /* 11914dc6 pop esi */
  ESI = (pop32());
  /* 11914dc7 pop ebx */
  EBX = (pop32());
  /* 11914dc8 ret  */
  ESPCHK(0x11914d44u, _esp0);
  ESP += 4; return;
L_11914dc9:;
  /* 11914dc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11914dcb jmp 0x11914dc5 */
  goto L_11914dc5;
}

/* _strncpy @ 0x11914dd0 (254 bytes, 109 insns) */
void f_11914dd0(void) {
  FTRACE(0x11914dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914dd0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11914dd4 push edi */
  push32((uint32_t)(EDI));
  /* 11914dd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11914dd7 je 0x11914e53 */
  if (C.zf) goto L_11914e53;
  /* 11914dd9 push esi */
  push32((uint32_t)(ESI));
  /* 11914dda push ebx */
  push32((uint32_t)(EBX));
  /* 11914ddb mov ebx, ecx */
  EBX = (ECX);
  /* 11914ddd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11914de1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11914de7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11914deb jne 0x11914df4 */
  if (!C.zf) goto L_11914df4;
  /* 11914ded shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11914df0 jne 0x11914e61 */
  if (!C.zf) goto L_11914e61;
  /* 11914df2 jmp 0x11914e15 */
  goto L_11914e15;
L_11914df4:;
  /* 11914df4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11914df6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11914df7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914df9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11914dfa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914dfb je 0x11914e22 */
  if (C.zf) goto L_11914e22;
  /* 11914dfd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11914dff je 0x11914e2a */
  if (C.zf) goto L_11914e2a;
  /* 11914e01 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11914e07 jne 0x11914df4 */
  if (!C.zf) goto L_11914df4;
  /* 11914e09 mov ebx, ecx */
  EBX = (ECX);
  /* 11914e0b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11914e0e jne 0x11914e61 */
  if (!C.zf) goto L_11914e61;
L_11914e10:;
  /* 11914e10 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11914e13 je 0x11914e22 */
  if (C.zf) goto L_11914e22;
L_11914e15:;
  /* 11914e15 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11914e17 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11914e18 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914e1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11914e1b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11914e1d je 0x11914e4e */
  if (C.zf) goto L_11914e4e;
  /* 11914e1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11914e20 jne 0x11914e15 */
  if (!C.zf) goto L_11914e15;
L_11914e22:;
  /* 11914e22 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11914e26 pop ebx */
  EBX = (pop32());
  /* 11914e27 pop esi */
  ESI = (pop32());
  /* 11914e28 pop edi */
  EDI = (pop32());
  /* 11914e29 ret  */
  ESPCHK(0x11914dd0u, _esp0);
  ESP += 4; return;
L_11914e2a:;
  /* 11914e2a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11914e30 je 0x11914e44 */
  if (C.zf) goto L_11914e44;
L_11914e32:;
  /* 11914e32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914e34 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11914e35 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914e36 je 0x11914ec6 */
  if (C.zf) goto L_11914ec6;
  /* 11914e3c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11914e42 jne 0x11914e32 */
  if (!C.zf) goto L_11914e32;
L_11914e44:;
  /* 11914e44 mov ebx, ecx */
  EBX = (ECX);
  /* 11914e46 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11914e49 jne 0x11914eb7 */
  if (!C.zf) goto L_11914eb7;
L_11914e4b:;
  /* 11914e4b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914e4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11914e4e:;
  /* 11914e4e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11914e4f jne 0x11914e4b */
  if (!C.zf) goto L_11914e4b;
  /* 11914e51 pop ebx */
  EBX = (pop32());
  /* 11914e52 pop esi */
  ESI = (pop32());
L_11914e53:;
  /* 11914e53 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11914e57 pop edi */
  EDI = (pop32());
  /* 11914e58 ret  */
  ESPCHK(0x11914dd0u, _esp0);
  ESP += 4; return;
L_11914e59:;
  /* 11914e59 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11914e5b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914e5e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914e5f je 0x11914e10 */
  if (C.zf) goto L_11914e10;
L_11914e61:;
  /* 11914e61 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11914e66 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11914e68 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914e6a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11914e6d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11914e6f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11914e71 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914e74 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11914e79 je 0x11914e59 */
  if (C.zf) goto L_11914e59;
  /* 11914e7b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11914e7d je 0x11914eab */
  if (C.zf) goto L_11914eab;
  /* 11914e7f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11914e81 je 0x11914ea1 */
  if (C.zf) goto L_11914ea1;
  /* 11914e83 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11914e89 je 0x11914e97 */
  if (C.zf) goto L_11914e97;
  /* 11914e8b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11914e91 jne 0x11914e59 */
  if (!C.zf) goto L_11914e59;
  /* 11914e93 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11914e95 jmp 0x11914eaf */
  goto L_11914eaf;
L_11914e97:;
  /* 11914e97 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11914e9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11914e9f jmp 0x11914eaf */
  goto L_11914eaf;
L_11914ea1:;
  /* 11914ea1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11914ea7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11914ea9 jmp 0x11914eaf */
  goto L_11914eaf;
L_11914eab:;
  /* 11914eab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11914ead mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11914eaf:;
  /* 11914eaf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914eb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11914eb4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914eb5 je 0x11914ec1 */
  if (C.zf) goto L_11914ec1;
L_11914eb7:;
  /* 11914eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11914eb9:;
  /* 11914eb9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11914ebb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11914ebe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914ebf jne 0x11914eb9 */
  if (!C.zf) goto L_11914eb9;
L_11914ec1:;
  /* 11914ec1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11914ec4 jne 0x11914e4b */
  if (!C.zf) goto L_11914e4b;
L_11914ec6:;
  /* 11914ec6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11914eca pop ebx */
  EBX = (pop32());
  /* 11914ecb pop esi */
  ESI = (pop32());
  /* 11914ecc pop edi */
  EDI = (pop32());
  /* 11914ecd ret  */
  ESPCHK(0x11914dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ece @ 0x11914ece (27 bytes, 13 insns) */
void f_11914ece(void) {
  FTRACE(0x11914eceu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914ece mov eax, dword ptr [0x1191a404] */
  EAX = (r32((uint32_t)(0x1191a404)));
  /* 11914ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914ed5 je 0x11914ee6 */
  if (C.zf) goto L_11914ee6;
  /* 11914ed7 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11914edb call eax */
  call_ind((uint32_t)(EAX), 0x11914eddu);
  /* 11914edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11914edf pop ecx */
  ECX = (pop32());
  /* 11914ee0 je 0x11914ee6 */
  if (C.zf) goto L_11914ee6;
  /* 11914ee2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11914ee4 pop eax */
  EAX = (pop32());
  /* 11914ee5 ret  */
  ESPCHK(0x11914eceu, _esp0);
  ESP += 4; return;
L_11914ee6:;
  /* 11914ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11914ee8 ret  */
  ESPCHK(0x11914eceu, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11914ef0 (88 bytes, 40 insns) */
void f_11914ef0(void) {
  FTRACE(0x11914ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914ef0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11914ef4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11914ef8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11914efa je 0x11914f43 */
  if (C.zf) goto L_11914f43;
  /* 11914efc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11914efe mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11914f02 push edi */
  push32((uint32_t)(EDI));
  /* 11914f03 mov edi, ecx */
  EDI = (ECX);
  /* 11914f05 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914f08 jb 0x11914f37 */
  if (C.cf) goto L_11914f37;
  /* 11914f0a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11914f0c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11914f0f je 0x11914f19 */
  if (C.zf) goto L_11914f19;
  /* 11914f11 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11914f13:;
  /* 11914f13 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914f15 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11914f16 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11914f17 jne 0x11914f13 */
  if (!C.zf) goto L_11914f13;
L_11914f19:;
  /* 11914f19 mov ecx, eax */
  ECX = (EAX);
  /* 11914f1b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11914f1e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914f20 mov ecx, eax */
  ECX = (EAX);
  /* 11914f22 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11914f25 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11914f27 mov ecx, edx */
  ECX = (EDX);
  /* 11914f29 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11914f2c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11914f2f je 0x11914f37 */
  if (C.zf) goto L_11914f37;
  /* 11914f31 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11914f33 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11914f35 je 0x11914f3d */
  if (C.zf) goto L_11914f3d;
L_11914f37:;
  /* 11914f37 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11914f39 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11914f3a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11914f3b jne 0x11914f37 */
  if (!C.zf) goto L_11914f37;
L_11914f3d:;
  /* 11914f3d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11914f41 pop edi */
  EDI = (pop32());
  /* 11914f42 ret  */
  ESPCHK(0x11914ef0u, _esp0);
  ESP += 4; return;
L_11914f43:;
  /* 11914f43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11914f47 ret  */
  ESPCHK(0x11914ef0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11914f48 (32 bytes, 18 insns) */
void f_11914f48(void) {
  FTRACE(0x11914f48u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914f48 push ebp */
  push32((uint32_t)(EBP));
  /* 11914f49 mov ebp, esp */
  EBP = (ESP);
  /* 11914f4b push ebx */
  push32((uint32_t)(EBX));
  /* 11914f4c push esi */
  push32((uint32_t)(ESI));
  /* 11914f4d push edi */
  push32((uint32_t)(EDI));
  /* 11914f4e push ebp */
  push32((uint32_t)(EBP));
  /* 11914f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 11914f51 push 0 */
  push32((uint32_t)(0x0u));
  /* 11914f53 push 0x11914f60 */
  push32((uint32_t)(0x11914f60u));
  /* 11914f58 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11914f5b call 0x11915e84 */
  push32(0x11914f60u); f_11915e84();
  /* 11914f60 pop ebp */
  EBP = (pop32());
  /* 11914f61 pop edi */
  EDI = (pop32());
  /* 11914f62 pop esi */
  ESI = (pop32());
  /* 11914f63 pop ebx */
  EBX = (pop32());
  /* 11914f64 mov esp, ebp */
  ESP = (EBP);
  /* 11914f66 pop ebp */
  EBP = (pop32());
  /* 11914f67 ret  */
  ESPCHK(0x11914f48u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11914f8a (104 bytes, 33 insns) */
void f_11914f8a(void) {
  FTRACE(0x11914f8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11914f8a push ebx */
  push32((uint32_t)(EBX));
  /* 11914f8b push esi */
  push32((uint32_t)(ESI));
  /* 11914f8c push edi */
  push32((uint32_t)(EDI));
  /* 11914f8d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11914f91 push eax */
  push32((uint32_t)(EAX));
  /* 11914f92 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11914f94 push 0x11914f68 */
  push32((uint32_t)(0x11914f68u));
  /* 11914f99 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11914fa0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11914fa7:;
  /* 11914fa7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11914fab mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11914fae mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11914fb1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914fb4 je 0x11914fe4 */
  if (C.zf) goto L_11914fe4;
  /* 11914fb6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914fba je 0x11914fe4 */
  if (C.zf) goto L_11914fe4;
  /* 11914fbc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11914fbf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11914fc2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11914fc6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11914fc9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11914fce jne 0x11914fe2 */
  if (!C.zf) goto L_11914fe2;
  /* 11914fd0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11914fd5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11914fd9 call 0x1191501e */
  push32(0x11914fdeu); f_1191501e();
  /* 11914fde call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11914fe2u);
L_11914fe2:;
  /* 11914fe2 jmp 0x11914fa7 */
  goto L_11914fa7;
L_11914fe4:;
  /* 11914fe4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11914feb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11914fee pop edi */
  EDI = (pop32());
  /* 11914fef pop esi */
  ESI = (pop32());
  /* 11914ff0 pop ebx */
  EBX = (pop32());
  /* 11914ff1 ret  */
  ESPCHK(0x11914f8au, _esp0);
  ESP += 4; return;
}

/* FUN_1000501e @ 0x1191501e (24 bytes, 10 insns) */
void f_1191501e(void) {
  FTRACE(0x1191501eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191501e push ebx */
  push32((uint32_t)(EBX));
  /* 1191501f push ecx */
  push32((uint32_t)(ECX));
  /* 11915020 mov ebx, 0x11919710 */
  EBX = (0x11919710u);
  /* 11915025 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915028 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1191502b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1191502e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11915031 pop ecx */
  ECX = (pop32());
  /* 11915032 pop ebx */
  EBX = (pop32());
  /* 11915033 ret 4 */
  ESPCHK(0x1191501eu, _esp0);
  ESP += 8; return;
}

/* FUN_100050fd @ 0x119150fd (27 bytes, 11 insns) */
void f_119150fd(void) {
  FTRACE(0x119150fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119150fd push ebp */
  push32((uint32_t)(EBP));
  /* 119150fe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11915102 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11915104 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11915107 push eax */
  push32((uint32_t)(EAX));
  /* 11915108 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1191510b push eax */
  push32((uint32_t)(EAX));
  /* 1191510c call 0x11914f8a */
  push32(0x11915111u); f_11914f8a();
  /* 11915111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915114 pop ebp */
  EBP = (pop32());
  /* 11915115 ret 4 */
  ESPCHK(0x119150fdu, _esp0);
  ESP += 8; return;
}

/* FUN_10005118 @ 0x11915118 (511 bytes, 193 insns) */
void f_11915118(void) {
  FTRACE(0x11915118u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915118 push ebp */
  push32((uint32_t)(EBP));
  /* 11915119 mov ebp, esp */
  EBP = (ESP);
  /* 1191511b push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1191511d push 0x11916510 */
  push32((uint32_t)(0x11916510u));
  /* 11915122 push 0x11915040 */
  push32((uint32_t)(0x11915040u));
  /* 11915127 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1191512d push eax */
  push32((uint32_t)(EAX));
  /* 1191512e mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11915135 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11915138 push ebx */
  push32((uint32_t)(EBX));
  /* 11915139 push esi */
  push32((uint32_t)(ESI));
  /* 1191513a push edi */
  push32((uint32_t)(EDI));
  /* 1191513b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1191513e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11915140 cmp dword ptr [0x1191a42c], edi */
  { uint32_t _a=(r32((uint32_t)(0x1191a42c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915146 jne 0x1191518e */
  if (!C.zf) goto L_1191518e;
  /* 11915148 push edi */
  push32((uint32_t)(EDI));
  /* 11915149 push edi */
  push32((uint32_t)(EDI));
  /* 1191514a push 1 */
  push32((uint32_t)(0x1u));
  /* 1191514c pop ebx */
  EBX = (pop32());
  /* 1191514d push ebx */
  push32((uint32_t)(EBX));
  /* 1191514e push 0x11916508 */
  push32((uint32_t)(0x11916508u));
  /* 11915153 mov esi, 0x100 */
  ESI = (0x100u);
  /* 11915158 push esi */
  push32((uint32_t)(ESI));
  /* 11915159 push edi */
  push32((uint32_t)(EDI));
  /* 1191515a call dword ptr [0x11916014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916014))), 0x11915160u);
  /* 11915160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915162 je 0x1191516c */
  if (C.zf) goto L_1191516c;
  /* 11915164 mov dword ptr [0x1191a42c], ebx */
  w32((uint32_t)(0x1191a42c), (EBX));
  /* 1191516a jmp 0x1191518e */
  goto L_1191518e;
L_1191516c:;
  /* 1191516c push edi */
  push32((uint32_t)(EDI));
  /* 1191516d push edi */
  push32((uint32_t)(EDI));
  /* 1191516e push ebx */
  push32((uint32_t)(EBX));
  /* 1191516f push 0x11916504 */
  push32((uint32_t)(0x11916504u));
  /* 11915174 push esi */
  push32((uint32_t)(ESI));
  /* 11915175 push edi */
  push32((uint32_t)(EDI));
  /* 11915176 call dword ptr [0x11916018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916018))), 0x1191517cu);
  /* 1191517c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191517e je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 11915184 mov dword ptr [0x1191a42c], 2 */
  w32((uint32_t)(0x1191a42c), (0x2u));
L_1191518e:;
  /* 1191518e cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915191 jle 0x119151a3 */
  if ((C.zf||C.sf!=C.of)) goto L_119151a3;
  /* 11915193 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11915196 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11915199 call 0x1191533c */
  push32(0x1191519eu); f_1191533c();
  /* 1191519e pop ecx */
  ECX = (pop32());
  /* 1191519f pop ecx */
  ECX = (pop32());
  /* 119151a0 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_119151a3:;
  /* 119151a3 mov eax, dword ptr [0x1191a42c] */
  EAX = (r32((uint32_t)(0x1191a42c)));
  /* 119151a8 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119151ab jne 0x119151ca */
  if (!C.zf) goto L_119151ca;
  /* 119151ad push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 119151b0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 119151b3 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119151b6 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119151b9 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119151bc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119151bf call dword ptr [0x11916018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916018))), 0x119151c5u);
  /* 119151c5 jmp 0x119152a8 */
  goto L_119152a8;
L_119151ca:;
  /* 119151ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119151cd jne 0x119152a6 */
  if (!C.zf) goto L_119152a6;
  /* 119151d3 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119151d6 jne 0x119151e0 */
  if (!C.zf) goto L_119151e0;
  /* 119151d8 mov eax, dword ptr [0x1191a424] */
  EAX = (r32((uint32_t)(0x1191a424)));
  /* 119151dd mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_119151e0:;
  /* 119151e0 push edi */
  push32((uint32_t)(EDI));
  /* 119151e1 push edi */
  push32((uint32_t)(EDI));
  /* 119151e2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119151e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119151e8 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 119151eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 119151ed sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119151ef and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 119151f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 119151f3 push eax */
  push32((uint32_t)(EAX));
  /* 119151f4 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 119151f7 call dword ptr [0x11916028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916028))), 0x119151fdu);
  /* 119151fd mov ebx, eax */
  EBX = (EAX);
  /* 119151ff mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11915202 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915204 je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 1191520a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1191520d lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11915210 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11915213 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11915215 call 0x11913ea0 */
  push32(0x1191521au); f_11913ea0();
  /* 1191521a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1191521d mov eax, esp */
  EAX = (ESP);
  /* 1191521f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11915222 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11915226 jmp 0x1191523b */
  goto L_1191523b;
  /* 11915228 push 1 */
  push32((uint32_t)(0x1u));
  /* 1191522a pop eax */
  EAX = (pop32());
  /* 1191522b ret  */
  ESPCHK(0x11915118u, _esp0);
  ESP += 4; return;
  /* 1191522c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1191522f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11915231 mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11915234 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11915238 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1191523b:;
  /* 1191523b cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191523e je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 11915240 push ebx */
  push32((uint32_t)(EBX));
  /* 11915241 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11915244 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11915247 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1191524a push 1 */
  push32((uint32_t)(0x1u));
  /* 1191524c push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1191524f call dword ptr [0x11916028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916028))), 0x11915255u);
  /* 11915255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915257 je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 11915259 push edi */
  push32((uint32_t)(EDI));
  /* 1191525a push edi */
  push32((uint32_t)(EDI));
  /* 1191525b push ebx */
  push32((uint32_t)(EBX));
  /* 1191525c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1191525f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11915262 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11915265 call dword ptr [0x11916014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916014))), 0x1191526bu);
  /* 1191526b mov esi, eax */
  ESI = (EAX);
  /* 1191526d mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11915270 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915272 je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 11915274 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11915278 je 0x119152ba */
  if (C.zf) goto L_119152ba;
  /* 1191527a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191527d je 0x11915335 */
  if (C.zf) goto L_11915335;
  /* 11915283 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915286 jg 0x119152a6 */
  if ((!C.zf&&C.sf==C.of)) goto L_119152a6;
  /* 11915288 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1191528b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1191528e push ebx */
  push32((uint32_t)(EBX));
  /* 1191528f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11915292 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11915295 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11915298 call dword ptr [0x11916014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916014))), 0x1191529eu);
  /* 1191529e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119152a0 jne 0x11915335 */
  if (!C.zf) goto L_11915335;
L_119152a6:;
  /* 119152a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_119152a8:;
  /* 119152a8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 119152ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119152ae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119152b5 pop edi */
  EDI = (pop32());
  /* 119152b6 pop esi */
  ESI = (pop32());
  /* 119152b7 pop ebx */
  EBX = (pop32());
  /* 119152b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119152b9 ret  */
  ESPCHK(0x11915118u, _esp0);
  ESP += 4; return;
L_119152ba:;
  /* 119152ba mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 119152c1 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 119152c4 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119152c7 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 119152c9 call 0x11913ea0 */
  push32(0x119152ceu); f_11913ea0();
  /* 119152ce mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 119152d1 mov ebx, esp */
  EBX = (ESP);
  /* 119152d3 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 119152d6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119152da jmp 0x119152ee */
  goto L_119152ee;
  /* 119152dc push 1 */
  push32((uint32_t)(0x1u));
  /* 119152de pop eax */
  EAX = (pop32());
  /* 119152df ret  */
  ESPCHK(0x11915118u, _esp0);
  ESP += 4; return;
  /* 119152e0 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 119152e3 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 119152e5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119152e7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 119152eb mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_119152ee:;
  /* 119152ee cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119152f0 je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 119152f2 push esi */
  push32((uint32_t)(ESI));
  /* 119152f3 push ebx */
  push32((uint32_t)(EBX));
  /* 119152f4 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 119152f7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 119152fa push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119152fd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11915300 call dword ptr [0x11916014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916014))), 0x11915306u);
  /* 11915306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915308 je 0x119152a6 */
  if (C.zf) goto L_119152a6;
  /* 1191530a cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191530d push edi */
  push32((uint32_t)(EDI));
  /* 1191530e push edi */
  push32((uint32_t)(EDI));
  /* 1191530f jne 0x11915315 */
  if (!C.zf) goto L_11915315;
  /* 11915311 push edi */
  push32((uint32_t)(EDI));
  /* 11915312 push edi */
  push32((uint32_t)(EDI));
  /* 11915313 jmp 0x1191531b */
  goto L_1191531b;
L_11915315:;
  /* 11915315 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11915318 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1191531b:;
  /* 1191531b push esi */
  push32((uint32_t)(ESI));
  /* 1191531c push ebx */
  push32((uint32_t)(EBX));
  /* 1191531d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11915322 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11915325 call dword ptr [0x119160a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x119160a8))), 0x1191532bu);
  /* 1191532b mov esi, eax */
  ESI = (EAX);
  /* 1191532d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191532f je 0x119152a6 */
  if (C.zf) goto L_119152a6;
L_11915335:;
  /* 11915335 mov eax, esi */
  EAX = (ESI);
  /* 11915337 jmp 0x119152a8 */
  goto L_119152a8;
}

/* FUN_1000533c @ 0x1191533c (43 bytes, 20 insns) */
void f_1191533c(void) {
  FTRACE(0x1191533cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1191533c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11915340 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11915344 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11915346 push esi */
  push32((uint32_t)(ESI));
  /* 11915347 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1191534a je 0x11915359 */
  if (C.zf) goto L_11915359;
L_1191534c:;
  /* 1191534c cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191534f je 0x11915359 */
  if (C.zf) goto L_11915359;
  /* 11915351 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11915352 mov esi, ecx */
  ESI = (ECX);
  /* 11915354 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11915355 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11915357 jne 0x1191534c */
  if (!C.zf) goto L_1191534c;
L_11915359:;
  /* 11915359 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1191535c pop esi */
  ESI = (pop32());
  /* 1191535d jne 0x11915364 */
  if (!C.zf) goto L_11915364;
  /* 1191535f sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11915363 ret  */
  ESPCHK(0x1191533cu, _esp0);
  ESP += 4; return;
L_11915364:;
  /* 11915364 mov eax, edx */
  EAX = (EDX);
  /* 11915366 ret  */
  ESPCHK(0x1191533cu, _esp0);
  ESP += 4; return;
}

/* FUN_10005367 @ 0x11915367 (318 bytes, 123 insns) */
void f_11915367(void) {
  FTRACE(0x11915367u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915367 push ebp */
  push32((uint32_t)(EBP));
  /* 11915368 mov ebp, esp */
  EBP = (ESP);
  /* 1191536a push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1191536c push 0x11916528 */
  push32((uint32_t)(0x11916528u));
  /* 11915371 push 0x11915040 */
  push32((uint32_t)(0x11915040u));
  /* 11915376 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1191537c push eax */
  push32((uint32_t)(EAX));
  /* 1191537d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11915384 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11915387 push ebx */
  push32((uint32_t)(EBX));
  /* 11915388 push esi */
  push32((uint32_t)(ESI));
  /* 11915389 push edi */
  push32((uint32_t)(EDI));
  /* 1191538a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1191538d mov eax, dword ptr [0x1191a430] */
  EAX = (r32((uint32_t)(0x1191a430)));
  /* 11915392 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11915394 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915396 jne 0x119153d6 */
  if (!C.zf) goto L_119153d6;
  /* 11915398 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1191539b push eax */
  push32((uint32_t)(EAX));
  /* 1191539c push 1 */
  push32((uint32_t)(0x1u));
  /* 1191539e pop esi */
  ESI = (pop32());
  /* 1191539f push esi */
  push32((uint32_t)(ESI));
  /* 119153a0 push 0x11916508 */
  push32((uint32_t)(0x11916508u));
  /* 119153a5 push esi */
  push32((uint32_t)(ESI));
  /* 119153a6 call dword ptr [0x1191600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191600c))), 0x119153acu);
  /* 119153ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119153ae je 0x119153b4 */
  if (C.zf) goto L_119153b4;
  /* 119153b0 mov eax, esi */
  EAX = (ESI);
  /* 119153b2 jmp 0x119153d1 */
  goto L_119153d1;
L_119153b4:;
  /* 119153b4 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 119153b7 push eax */
  push32((uint32_t)(EAX));
  /* 119153b8 push esi */
  push32((uint32_t)(ESI));
  /* 119153b9 push 0x11916504 */
  push32((uint32_t)(0x11916504u));
  /* 119153be push esi */
  push32((uint32_t)(ESI));
  /* 119153bf push ebx */
  push32((uint32_t)(EBX));
  /* 119153c0 call dword ptr [0x1191601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191601c))), 0x119153c6u);
  /* 119153c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119153c8 je 0x1191549c */
  if (C.zf) goto L_1191549c;
  /* 119153ce push 2 */
  push32((uint32_t)(0x2u));
  /* 119153d0 pop eax */
  EAX = (pop32());
L_119153d1:;
  /* 119153d1 mov dword ptr [0x1191a430], eax */
  w32((uint32_t)(0x1191a430), (EAX));
L_119153d6:;
  /* 119153d6 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119153d9 jne 0x119153ff */
  if (!C.zf) goto L_119153ff;
  /* 119153db mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 119153de cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119153e0 jne 0x119153e7 */
  if (!C.zf) goto L_119153e7;
  /* 119153e2 mov eax, dword ptr [0x1191a414] */
  EAX = (r32((uint32_t)(0x1191a414)));
L_119153e7:;
  /* 119153e7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 119153ea push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 119153ed push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 119153f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 119153f3 push eax */
  push32((uint32_t)(EAX));
  /* 119153f4 call dword ptr [0x1191601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191601c))), 0x119153fau);
  /* 119153fa jmp 0x1191549e */
  goto L_1191549e;
L_119153ff:;
  /* 119153ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915402 jne 0x1191549c */
  if (!C.zf) goto L_1191549c;
  /* 11915408 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191540b jne 0x11915415 */
  if (!C.zf) goto L_11915415;
  /* 1191540d mov eax, dword ptr [0x1191a424] */
  EAX = (r32((uint32_t)(0x1191a424)));
  /* 11915412 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11915415:;
  /* 11915415 push ebx */
  push32((uint32_t)(EBX));
  /* 11915416 push ebx */
  push32((uint32_t)(EBX));
  /* 11915417 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1191541a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1191541d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11915420 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11915422 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11915424 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11915427 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11915428 push eax */
  push32((uint32_t)(EAX));
  /* 11915429 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1191542c call dword ptr [0x11916028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916028))), 0x11915432u);
  /* 11915432 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11915435 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915437 je 0x1191549c */
  if (C.zf) goto L_1191549c;
  /* 11915439 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1191543c lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1191543f mov eax, edi */
  EAX = (EDI);
  /* 11915441 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11915444 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11915446 call 0x11913ea0 */
  push32(0x1191544bu); f_11913ea0();
  /* 1191544b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1191544e mov esi, esp */
  ESI = (ESP);
  /* 11915450 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11915453 push edi */
  push32((uint32_t)(EDI));
  /* 11915454 push ebx */
  push32((uint32_t)(EBX));
  /* 11915455 push esi */
  push32((uint32_t)(ESI));
  /* 11915456 call 0x11914ef0 */
  push32(0x1191545bu); f_11914ef0();
  /* 1191545b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191545e jmp 0x1191546b */
  goto L_1191546b;
  /* 11915460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11915462 pop eax */
  EAX = (pop32());
  /* 11915463 ret  */
  ESPCHK(0x11915367u, _esp0);
  ESP += 4; return;
  /* 11915464 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11915467 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11915469 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1191546b:;
  /* 1191546b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1191546f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915471 je 0x1191549c */
  if (C.zf) goto L_1191549c;
  /* 11915473 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11915476 push esi */
  push32((uint32_t)(ESI));
  /* 11915477 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1191547a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1191547d push 1 */
  push32((uint32_t)(0x1u));
  /* 1191547f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11915482 call dword ptr [0x11916028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916028))), 0x11915488u);
  /* 11915488 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191548a je 0x1191549c */
  if (C.zf) goto L_1191549c;
  /* 1191548c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1191548f push eax */
  push32((uint32_t)(EAX));
  /* 11915490 push esi */
  push32((uint32_t)(ESI));
  /* 11915491 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11915494 call dword ptr [0x1191600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1191600c))), 0x1191549au);
  /* 1191549a jmp 0x1191549e */
  goto L_1191549e;
L_1191549c:;
  /* 1191549c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1191549e:;
  /* 1191549e lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 119154a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 119154a4 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 119154ab pop edi */
  EDI = (pop32());
  /* 119154ac pop esi */
  ESI = (pop32());
  /* 119154ad pop ebx */
  EBX = (pop32());
  /* 119154ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119154af ret  */
  ESPCHK(0x11915367u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x119154b0 (9 bytes, 3 insns) */
void f_119154b0(void) {
  FTRACE(0x119154b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119154b0 call 0x1191228c */
  push32(0x119154b5u); f_1191228c();
  /* 119154b5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 119154b8 ret  */
  ESPCHK(0x119154b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b9 @ 0x119154b9 (111 bytes, 44 insns) */
void f_119154b9(void) {
  FTRACE(0x119154b9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119154b9 push ebx */
  push32((uint32_t)(EBX));
  /* 119154ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 119154bc cmp dword ptr [0x1191a414], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a414))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119154c2 jne 0x119154d7 */
  if (!C.zf) goto L_119154d7;
  /* 119154c4 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 119154c8 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119154cb jl 0x11915526 */
  if ((C.sf!=C.of)) goto L_11915526;
  /* 119154cd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119154d0 jg 0x11915526 */
  if ((!C.zf&&C.sf==C.of)) goto L_11915526;
  /* 119154d2 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119154d5 pop ebx */
  EBX = (pop32());
  /* 119154d6 ret  */
  ESPCHK(0x119154b9u, _esp0);
  ESP += 4; return;
L_119154d7:;
  /* 119154d7 push esi */
  push32((uint32_t)(ESI));
  /* 119154d8 mov esi, 0x1191a584 */
  ESI = (0x1191a584u);
  /* 119154dd push edi */
  push32((uint32_t)(EDI));
  /* 119154de push esi */
  push32((uint32_t)(ESI));
  /* 119154df call dword ptr [0x11916010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11916010))), 0x119154e5u);
  /* 119154e5 cmp dword ptr [0x1191a580], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1191a580))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119154eb mov edi, dword ptr [0x11916008] */
  EDI = (r32((uint32_t)(0x11916008)));
  /* 119154f1 je 0x11915501 */
  if (C.zf) goto L_11915501;
  /* 119154f3 push esi */
  push32((uint32_t)(ESI));
  /* 119154f4 call edi */
  call_ind((uint32_t)(EDI), 0x119154f6u);
  /* 119154f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 119154f8 call 0x11912e76 */
  push32(0x119154fdu); f_11912e76();
  /* 119154fd pop ecx */
  ECX = (pop32());
  /* 119154fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11915500 pop ebx */
  EBX = (pop32());
L_11915501:;
  /* 11915501 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11915505 call 0x11915528 */
  push32(0x1191550au); f_11915528();
  /* 1191550a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1191550c pop ecx */
  ECX = (pop32());
  /* 1191550d mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11915511 je 0x1191551d */
  if (C.zf) goto L_1191551d;
  /* 11915513 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11915515 call 0x11912ed7 */
  push32(0x1191551au); f_11912ed7();
  /* 1191551a pop ecx */
  ECX = (pop32());
  /* 1191551b jmp 0x11915520 */
  goto L_11915520;
L_1191551d:;
  /* 1191551d push esi */
  push32((uint32_t)(ESI));
  /* 1191551e call edi */
  call_ind((uint32_t)(EDI), 0x11915520u);
L_11915520:;
  /* 11915520 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11915524 pop edi */
  EDI = (pop32());
  /* 11915525 pop esi */
  ESI = (pop32());
L_11915526:;
  /* 11915526 pop ebx */
  EBX = (pop32());
  /* 11915527 ret  */
  ESPCHK(0x119154b9u, _esp0);
  ESP += 4; return;
}

/* FUN_10005528 @ 0x11915528 (204 bytes, 71 insns) */
void f_11915528(void) {
  FTRACE(0x11915528u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915528 push ebp */
  push32((uint32_t)(EBP));
  /* 11915529 mov ebp, esp */
  EBP = (ESP);
  /* 1191552b push ecx */
  push32((uint32_t)(ECX));
  /* 1191552c cmp dword ptr [0x1191a414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915533 push ebx */
  push32((uint32_t)(EBX));
  /* 11915534 jne 0x11915553 */
  if (!C.zf) goto L_11915553;
  /* 11915536 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915539 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191553c jl 0x119155f1 */
  if ((C.sf!=C.of)) goto L_119155f1;
  /* 11915542 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915545 jg 0x119155f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_119155f1;
  /* 1191554b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191554e jmp 0x119155f1 */
  goto L_119155f1;
L_11915553:;
  /* 11915553 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915556 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191555c jge 0x11915586 */
  if ((C.sf==C.of)) goto L_11915586;
  /* 1191555e cmp dword ptr [0x11919a94], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11919a94))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915565 jle 0x11915573 */
  if ((C.zf||C.sf!=C.of)) goto L_11915573;
  /* 11915567 push 2 */
  push32((uint32_t)(0x2u));
  /* 11915569 push ebx */
  push32((uint32_t)(EBX));
  /* 1191556a call 0x119155f4 */
  push32(0x1191556fu); f_119155f4();
  /* 1191556f pop ecx */
  ECX = (pop32());
  /* 11915570 pop ecx */
  ECX = (pop32());
  /* 11915571 jmp 0x1191557e */
  goto L_1191557e;
L_11915573:;
  /* 11915573 mov eax, dword ptr [0x11919888] */
  EAX = (r32((uint32_t)(0x11919888)));
  /* 11915578 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1191557b and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1191557e:;
  /* 1191557e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915580 jne 0x11915586 */
  if (!C.zf) goto L_11915586;
L_11915582:;
  /* 11915582 mov eax, ebx */
  EAX = (EBX);
  /* 11915584 jmp 0x119155f1 */
  goto L_119155f1;
L_11915586:;
  /* 11915586 mov edx, dword ptr [0x11919888] */
  EDX = (r32((uint32_t)(0x11919888)));
  /* 1191558c mov eax, ebx */
  EAX = (EBX);
  /* 1191558e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11915591 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11915594 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11915599 je 0x119155a9 */
  if (C.zf) goto L_119155a9;
  /* 1191559b and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1191559f mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 119155a2 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 119155a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 119155a7 jmp 0x119155b2 */
  goto L_119155b2;
L_119155a9:;
  /* 119155a9 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 119155ad mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 119155b0 push 1 */
  push32((uint32_t)(0x1u));
L_119155b2:;
  /* 119155b2 pop eax */
  EAX = (pop32());
  /* 119155b3 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 119155b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 119155b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 119155ba push 3 */
  push32((uint32_t)(0x3u));
  /* 119155bc push ecx */
  push32((uint32_t)(ECX));
  /* 119155bd push eax */
  push32((uint32_t)(EAX));
  /* 119155be lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 119155c1 push eax */
  push32((uint32_t)(EAX));
  /* 119155c2 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 119155c7 push dword ptr [0x1191a414] */
  push32((uint32_t)(r32((uint32_t)(0x1191a414))));
  /* 119155cd call 0x11915118 */
  push32(0x119155d2u); f_11915118();
  /* 119155d2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 119155d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 119155d7 je 0x11915582 */
  if (C.zf) goto L_11915582;
  /* 119155d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119155dc jne 0x119155e4 */
  if (!C.zf) goto L_119155e4;
  /* 119155de movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119155e2 jmp 0x119155f1 */
  goto L_119155f1;
L_119155e4:;
  /* 119155e4 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 119155e8 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 119155ec shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 119155ef or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_119155f1:;
  /* 119155f1 pop ebx */
  EBX = (pop32());
  /* 119155f2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119155f3 ret  */
  ESPCHK(0x11915528u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f4 @ 0x119155f4 (117 bytes, 46 insns) */
void f_119155f4(void) {
  FTRACE(0x119155f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 119155f4 push ebp */
  push32((uint32_t)(EBP));
  /* 119155f5 mov ebp, esp */
  EBP = (ESP);
  /* 119155f7 push ecx */
  push32((uint32_t)(ECX));
  /* 119155f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119155fb lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 119155fe cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915604 ja 0x11915612 */
  if ((!C.cf&&!C.zf)) goto L_11915612;
  /* 11915606 mov ecx, dword ptr [0x11919888] */
  ECX = (r32((uint32_t)(0x11919888)));
  /* 1191560c movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 11915610 jmp 0x11915664 */
  goto L_11915664;
L_11915612:;
  /* 11915612 mov ecx, eax */
  ECX = (EAX);
  /* 11915614 push esi */
  push32((uint32_t)(ESI));
  /* 11915615 mov esi, dword ptr [0x11919888] */
  ESI = (r32((uint32_t)(0x11919888)));
  /* 1191561b sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1191561e movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 11915621 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11915626 pop esi */
  ESI = (pop32());
  /* 11915627 je 0x11915637 */
  if (C.zf) goto L_11915637;
  /* 11915629 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 1191562d mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11915630 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 11915633 push 2 */
  push32((uint32_t)(0x2u));
  /* 11915635 jmp 0x11915640 */
  goto L_11915640;
L_11915637:;
  /* 11915637 and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 1191563b mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1191563e push 1 */
  push32((uint32_t)(0x1u));
L_11915640:;
  /* 11915640 pop eax */
  EAX = (pop32());
  /* 11915641 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 11915644 push 1 */
  push32((uint32_t)(0x1u));
  /* 11915646 push 0 */
  push32((uint32_t)(0x0u));
  /* 11915648 push 0 */
  push32((uint32_t)(0x0u));
  /* 1191564a push ecx */
  push32((uint32_t)(ECX));
  /* 1191564b push eax */
  push32((uint32_t)(EAX));
  /* 1191564c lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 1191564f push eax */
  push32((uint32_t)(EAX));
  /* 11915650 push 1 */
  push32((uint32_t)(0x1u));
  /* 11915652 call 0x11915367 */
  push32(0x11915657u); f_11915367();
  /* 11915657 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1191565a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1191565c jne 0x11915660 */
  if (!C.zf) goto L_11915660;
  /* 1191565e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191565f ret  */
  ESPCHK(0x119155f4u, _esp0);
  ESP += 4; return;
L_11915660:;
  /* 11915660 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_11915664:;
  /* 11915664 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11915667 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915668 ret  */
  ESPCHK(0x119155f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10005670 @ 0x11915670 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11915670(void) {
  FTRACE(0x11915670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915670 push ebp */
  push32((uint32_t)(EBP));
  /* 11915671 mov ebp, esp */
  EBP = (ESP);
  /* 11915673 push edi */
  push32((uint32_t)(EDI));
  /* 11915674 push esi */
  push32((uint32_t)(ESI));
  /* 11915675 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11915678 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1191567b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1191567e mov eax, ecx */
  EAX = (ECX);
  /* 11915680 mov edx, ecx */
  EDX = (ECX);
  /* 11915682 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11915684 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915686 jbe 0x11915690 */
  if ((C.cf||C.zf)) goto L_11915690;
  /* 11915688 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191568a jb 0x11915808 */
  if (C.cf) goto L_11915808;
L_11915690:;
  /* 11915690 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11915696 jne 0x119156ac */
  if (!C.zf) goto L_119156ac;
  /* 11915698 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1191569b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1191569e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119156a1 jb 0x119156cc */
  if (C.cf) goto L_119156cc;
  /* 119156a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119156a5 jmp dword ptr [edx*4 + 0x119157b8] */
  switch (EDX) {
    case 0: goto L_119157c8;
    case 1: goto L_119157d0;
    case 2: goto L_119157dc;
    case 3: goto L_119157f0;
    default: x86_unimpl("switch@0x119156a5 out of table"); return;
  }
L_119156ac:;
  /* 119156ac mov eax, edi */
  EAX = (EDI);
  /* 119156ae mov edx, 3 */
  EDX = (0x3u);
  /* 119156b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 119156b6 jb 0x119156c4 */
  if (C.cf) goto L_119156c4;
  /* 119156b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 119156bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 119156bd jmp dword ptr [eax*4 + 0x119156d0] */
  switch (EAX) {
    case 1: goto L_119156e0;
    case 2: goto L_1191570c;
    case 3: goto L_11915730;
    default: x86_unimpl("switch@0x119156bd out of table"); return;
  }
L_119156c4:;
  /* 119156c4 jmp dword ptr [ecx*4 + 0x119157c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x119157c8)))); return;
  /* 119156cb nop  */
  /* nop */
L_119156cc:;
  /* 119156cc jmp dword ptr [ecx*4 + 0x1191574c] */
  switch (ECX) {
    case 0: goto L_119157af;
    case 1: goto L_1191579c;
    case 2: goto L_11915794;
    case 3: goto L_1191578c;
    case 4: goto L_11915784;
    case 5: goto L_1191577c;
    case 6: goto L_11915774;
    case 7: goto L_1191576c;
    default: x86_unimpl("switch@0x119156cc out of table"); return;
  }
  /* 119156d3 nop  */
  /* nop */
L_119156e0:;
  /* 119156e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119156e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119156e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119156e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119156e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119156ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119156ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119156f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119156f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119156f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 119156fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119156fe jb 0x119156cc */
  if (C.cf) goto L_119156cc;
  /* 11915700 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11915702 jmp dword ptr [edx*4 + 0x119157b8] */
  switch (EDX) {
    case 0: goto L_119157c8;
    case 1: goto L_119157d0;
    case 2: goto L_119157dc;
    case 3: goto L_119157f0;
    default: x86_unimpl("switch@0x11915702 out of table"); return;
  }
  /* 11915709 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1191570c:;
  /* 1191570c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1191570e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915710 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11915712 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11915715 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11915718 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1191571b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1191571e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11915721 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915724 jb 0x119156cc */
  if (C.cf) goto L_119156cc;
  /* 11915726 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11915728 jmp dword ptr [edx*4 + 0x119157b8] */
  switch (EDX) {
    case 0: goto L_119157c8;
    case 1: goto L_119157d0;
    case 2: goto L_119157dc;
    case 3: goto L_119157f0;
    default: x86_unimpl("switch@0x11915728 out of table"); return;
  }
  /* 1191572f nop  */
  /* nop */
L_11915730:;
  /* 11915730 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11915732 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915734 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11915736 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915737 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1191573a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1191573b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1191573e jb 0x119156cc */
  if (C.cf) goto L_119156cc;
  /* 11915740 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11915742 jmp dword ptr [edx*4 + 0x119157b8] */
  switch (EDX) {
    case 0: goto L_119157c8;
    case 1: goto L_119157d0;
    case 2: goto L_119157dc;
    case 3: goto L_119157f0;
    default: x86_unimpl("switch@0x11915742 out of table"); return;
  }
  /* 11915749 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1191576c:;
  /* 1191576c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11915770 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11915774:;
  /* 11915774 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11915778 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1191577c:;
  /* 1191577c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11915780 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11915784:;
  /* 11915784 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11915788 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1191578c:;
  /* 1191578c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11915790 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11915794:;
  /* 11915794 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11915798 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1191579c:;
  /* 1191579c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 119157a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 119157a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 119157ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 119157ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_119157af:;
  /* 119157af jmp dword ptr [edx*4 + 0x119157b8] */
  switch (EDX) {
    case 0: goto L_119157c8;
    case 1: goto L_119157d0;
    case 2: goto L_119157dc;
    case 3: goto L_119157f0;
    default: x86_unimpl("switch@0x119157af out of table"); return;
  }
  /* 119157b6 mov edi, edi */
  EDI = (EDI);
L_119157c8:;
  /* 119157c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119157cb pop esi */
  ESI = (pop32());
  /* 119157cc pop edi */
  EDI = (pop32());
  /* 119157cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119157ce ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 119157cf nop  */
  /* nop */
L_119157d0:;
  /* 119157d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119157d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119157d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119157d7 pop esi */
  ESI = (pop32());
  /* 119157d8 pop edi */
  EDI = (pop32());
  /* 119157d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119157da ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 119157db nop  */
  /* nop */
L_119157dc:;
  /* 119157dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119157de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119157e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119157e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119157e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119157e9 pop esi */
  ESI = (pop32());
  /* 119157ea pop edi */
  EDI = (pop32());
  /* 119157eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119157ec ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 119157ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_119157f0:;
  /* 119157f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 119157f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 119157f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119157f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119157fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119157fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11915800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915803 pop esi */
  ESI = (pop32());
  /* 11915804 pop edi */
  EDI = (pop32());
  /* 11915805 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915806 ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 11915807 nop  */
  /* nop */
L_11915808:;
  /* 11915808 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1191580c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11915810 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11915816 jne 0x1191583c */
  if (!C.zf) goto L_1191583c;
  /* 11915818 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1191581b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1191581e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915821 jb 0x11915830 */
  if (C.cf) goto L_11915830;
  /* 11915823 std  */
  C.df=1;
  /* 11915824 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11915826 cld  */
  C.df=0;
  /* 11915827 jmp dword ptr [edx*4 + 0x11915950] */
  switch (EDX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x11915827 out of table"); return;
  }
  /* 1191582e mov edi, edi */
  EDI = (EDI);
L_11915830:;
  /* 11915830 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11915832 jmp dword ptr [ecx*4 + 0x11915900] */
  switch (ECX) {
    case 0: goto L_11915947;
    default: x86_unimpl("switch@0x11915832 out of table"); return;
  }
  /* 11915839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1191583c:;
  /* 1191583c mov eax, edi */
  EAX = (EDI);
  /* 1191583e mov edx, 3 */
  EDX = (0x3u);
  /* 11915843 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915846 jb 0x11915854 */
  if (C.cf) goto L_11915854;
  /* 11915848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1191584b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191584d jmp dword ptr [eax*4 + 0x11915858] */
  switch (EAX) {
    case 1: goto L_11915868;
    case 2: goto L_11915888;
    case 3: goto L_119158b0;
    default: x86_unimpl("switch@0x1191584d out of table"); return;
  }
L_11915854:;
  /* 11915854 jmp dword ptr [ecx*4 + 0x11915950] */
  switch (ECX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x11915854 out of table"); return;
  }
  /* 1191585b nop  */
  /* nop */
L_11915868:;
  /* 11915868 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1191586b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1191586d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11915870 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11915871 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11915874 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11915875 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915878 jb 0x11915830 */
  if (C.cf) goto L_11915830;
  /* 1191587a std  */
  C.df=1;
  /* 1191587b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1191587d cld  */
  C.df=0;
  /* 1191587e jmp dword ptr [edx*4 + 0x11915950] */
  switch (EDX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x1191587e out of table"); return;
  }
  /* 11915885 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11915888:;
  /* 11915888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1191588b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1191588d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11915890 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11915893 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11915896 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11915899 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191589c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1191589f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119158a2 jb 0x11915830 */
  if (C.cf) goto L_11915830;
  /* 119158a4 std  */
  C.df=1;
  /* 119158a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119158a7 cld  */
  C.df=0;
  /* 119158a8 jmp dword ptr [edx*4 + 0x11915950] */
  switch (EDX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x119158a8 out of table"); return;
  }
  /* 119158af nop  */
  /* nop */
L_119158b0:;
  /* 119158b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 119158b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 119158b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 119158b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 119158bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 119158be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 119158c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 119158c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 119158c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119158ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 119158cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 119158d0 jb 0x11915830 */
  if (C.cf) goto L_11915830;
  /* 119158d6 std  */
  C.df=1;
  /* 119158d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 119158d9 cld  */
  C.df=0;
  /* 119158da jmp dword ptr [edx*4 + 0x11915950] */
  switch (EDX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x119158da out of table"); return;
  }
  /* 119158e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 119158e4 add al, 0x59 */
  { uint32_t _a=(AL),_b=(0x59u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 119158e6 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158e7 adc dword ptr [ecx + ebx*2], ecx */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(ECX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158ea xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158eb adc dword ptr [ecx + ebx*2], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158ee xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158ef adc dword ptr [ecx + ebx*2], ebx */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158f2 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158f3 adc dword ptr [ecx + ebx*2], esp */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158f6 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158f7 adc dword ptr [ecx + ebx*2], ebp */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158fa xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 119158fb adc dword ptr [ecx + ebx*2], esi */
  { uint32_t _a=(r32((uint32_t)(ECX + EBX*2))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ECX + EBX*2), (_r)); fl_add(_a,_b,_r,32); }
  /* 119158fe xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11915904 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11915908 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1191590c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11915910 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11915914 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11915918 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1191591c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11915920 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11915924 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11915928 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1191592c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11915930 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11915934 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11915938 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1191593c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11915943 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11915945 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11915947:;
  /* 11915947 jmp dword ptr [edx*4 + 0x11915950] */
  switch (EDX) {
    case 0: goto L_11915960;
    case 1: goto L_11915968;
    case 2: goto L_11915978;
    case 3: goto L_1191598c;
    default: x86_unimpl("switch@0x11915947 out of table"); return;
  }
  /* 1191594e mov edi, edi */
  EDI = (EDI);
L_11915960:;
  /* 11915960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915963 pop esi */
  ESI = (pop32());
  /* 11915964 pop edi */
  EDI = (pop32());
  /* 11915965 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915966 ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 11915967 nop  */
  /* nop */
L_11915968:;
  /* 11915968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1191596b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1191596e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915971 pop esi */
  ESI = (pop32());
  /* 11915972 pop edi */
  EDI = (pop32());
  /* 11915973 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915974 ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 11915975 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11915978:;
  /* 11915978 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1191597b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1191597e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11915981 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11915984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915987 pop esi */
  ESI = (pop32());
  /* 11915988 pop edi */
  EDI = (pop32());
  /* 11915989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1191598a ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
  /* 1191598b nop  */
  /* nop */
L_1191598c:;
  /* 1191598c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1191598f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11915992 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11915995 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11915998 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1191599b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1191599e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 119159a1 pop esi */
  ESI = (pop32());
  /* 119159a2 pop edi */
  EDI = (pop32());
  /* 119159a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 119159a4 ret  */
  ESPCHK(0x11915670u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a40 @ 0x11915a40 (62 bytes, 35 insns) */
void f_11915a40(void) {
  FTRACE(0x11915a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11915a41 mov ebp, esp */
  EBP = (ESP);
  /* 11915a43 push esi */
  push32((uint32_t)(ESI));
  /* 11915a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915a46 push eax */
  push32((uint32_t)(EAX));
  /* 11915a47 push eax */
  push32((uint32_t)(EAX));
  /* 11915a48 push eax */
  push32((uint32_t)(EAX));
  /* 11915a49 push eax */
  push32((uint32_t)(EAX));
  /* 11915a4a push eax */
  push32((uint32_t)(EAX));
  /* 11915a4b push eax */
  push32((uint32_t)(EAX));
  /* 11915a4c push eax */
  push32((uint32_t)(EAX));
  /* 11915a4d push eax */
  push32((uint32_t)(EAX));
  /* 11915a4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11915a51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11915a54:;
  /* 11915a54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11915a56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915a58 je 0x11915a61 */
  if (C.zf) goto L_11915a61;
  /* 11915a5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11915a5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11915a5b");
  /* 11915a5f jmp 0x11915a54 */
  goto L_11915a54;
L_11915a61:;
  /* 11915a61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11915a64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11915a67 nop  */
  /* nop */
L_11915a68:;
  /* 11915a68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11915a69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915a6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915a6d je 0x11915a76 */
  if (C.zf) goto L_11915a76;
  /* 11915a6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915a70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11915a70");
  /* 11915a74 jae 0x11915a68 */
  if (!C.cf) goto L_11915a68;
L_11915a76:;
  /* 11915a76 mov eax, ecx */
  EAX = (ECX);
  /* 11915a78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915a7b pop esi */
  ESI = (pop32());
  /* 11915a7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915a7d ret  */
  ESPCHK(0x11915a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a80 @ 0x11915a80 (58 bytes, 32 insns) */
void f_11915a80(void) {
  FTRACE(0x11915a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915a80 push ebp */
  push32((uint32_t)(EBP));
  /* 11915a81 mov ebp, esp */
  EBP = (ESP);
  /* 11915a83 push esi */
  push32((uint32_t)(ESI));
  /* 11915a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915a86 push eax */
  push32((uint32_t)(EAX));
  /* 11915a87 push eax */
  push32((uint32_t)(EAX));
  /* 11915a88 push eax */
  push32((uint32_t)(EAX));
  /* 11915a89 push eax */
  push32((uint32_t)(EAX));
  /* 11915a8a push eax */
  push32((uint32_t)(EAX));
  /* 11915a8b push eax */
  push32((uint32_t)(EAX));
  /* 11915a8c push eax */
  push32((uint32_t)(EAX));
  /* 11915a8d push eax */
  push32((uint32_t)(EAX));
  /* 11915a8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11915a91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11915a94:;
  /* 11915a94 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11915a96 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915a98 je 0x11915aa1 */
  if (C.zf) goto L_11915aa1;
  /* 11915a9a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11915a9b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11915a9b");
  /* 11915a9f jmp 0x11915a94 */
  goto L_11915a94;
L_11915aa1:;
  /* 11915aa1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11915aa4:;
  /* 11915aa4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915aa6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915aa8 je 0x11915ab4 */
  if (C.zf) goto L_11915ab4;
  /* 11915aaa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915aab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11915aab");
  /* 11915aaf jae 0x11915aa4 */
  if (!C.cf) goto L_11915aa4;
  /* 11915ab1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11915ab4:;
  /* 11915ab4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915ab7 pop esi */
  ESI = (pop32());
  /* 11915ab8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915ab9 ret  */
  ESPCHK(0x11915a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x11915ac0 (208 bytes, 85 insns) */
void f_11915ac0(void) {
  FTRACE(0x11915ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11915ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11915ac3 push edi */
  push32((uint32_t)(EDI));
  /* 11915ac4 push esi */
  push32((uint32_t)(ESI));
  /* 11915ac5 push ebx */
  push32((uint32_t)(EBX));
  /* 11915ac6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11915ac9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11915acc lea eax, [0x1191a40c] */
  EAX = ((uint32_t)(0x1191a40c));
  /* 11915ad2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915ad6 jne 0x11915b13 */
  if (!C.zf) goto L_11915b13;
  /* 11915ad8 mov al, 0xff */
  AL = (0xffu);
  /* 11915ada mov edi, edi */
  EDI = (EDI);
L_11915adc:;
  /* 11915adc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915ade je 0x11915b0e */
  if (C.zf) goto L_11915b0e;
  /* 11915ae0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915ae2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915ae3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11915ae5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11915ae6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915ae8 je 0x11915adc */
  if (C.zf) goto L_11915adc;
  /* 11915aea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11915aec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915aee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11915af0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11915af3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11915af5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11915af7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11915af9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11915afb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915afd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11915aff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11915b02 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11915b04 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11915b06 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915b08 je 0x11915adc */
  if (C.zf) goto L_11915adc;
  /* 11915b0a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11915b0c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11915b0e:;
  /* 11915b0e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11915b11 jmp 0x11915b8b */
  goto L_11915b8b;
L_11915b13:;
  /* 11915b13 lock inc dword ptr [0x1191a584] */
  x86_unimpl("lock inc @ 0x11915b13");
  /* 11915b1a cmp dword ptr [0x1191a580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915b21 jg 0x11915b27 */
  if ((!C.zf&&C.sf==C.of)) goto L_11915b27;
  /* 11915b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11915b25 jmp 0x11915b3c */
  goto L_11915b3c;
L_11915b27:;
  /* 11915b27 lock dec dword ptr [0x1191a584] */
  x86_unimpl("lock dec @ 0x11915b27");
  /* 11915b2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11915b30 call 0x11912e76 */
  push32(0x11915b35u); f_11912e76();
  /* 11915b35 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11915b3c:;
  /* 11915b3c mov eax, 0xff */
  EAX = (0xffu);
  /* 11915b41 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11915b43 nop  */
  /* nop */
L_11915b44:;
  /* 11915b44 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915b46 je 0x11915b6f */
  if (C.zf) goto L_11915b6f;
  /* 11915b48 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915b4a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915b4b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11915b4d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11915b4e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915b50 je 0x11915b44 */
  if (C.zf) goto L_11915b44;
  /* 11915b52 push eax */
  push32((uint32_t)(EAX));
  /* 11915b53 push ebx */
  push32((uint32_t)(EBX));
  /* 11915b54 call 0x11915d85 */
  push32(0x11915b59u); f_11915d85();
  /* 11915b59 mov ebx, eax */
  EBX = (EAX);
  /* 11915b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915b5e call 0x11915d85 */
  push32(0x11915b63u); f_11915d85();
  /* 11915b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915b66 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915b68 je 0x11915b44 */
  if (C.zf) goto L_11915b44;
  /* 11915b6a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11915b6c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11915b6f:;
  /* 11915b6f mov ebx, eax */
  EBX = (EAX);
  /* 11915b71 pop eax */
  EAX = (pop32());
  /* 11915b72 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915b74 jne 0x11915b7f */
  if (!C.zf) goto L_11915b7f;
  /* 11915b76 lock dec dword ptr [0x1191a584] */
  x86_unimpl("lock dec @ 0x11915b76");
  /* 11915b7d jmp 0x11915b89 */
  goto L_11915b89;
L_11915b7f:;
  /* 11915b7f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11915b81 call 0x11912ed7 */
  push32(0x11915b86u); f_11912ed7();
  /* 11915b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11915b89:;
  /* 11915b89 mov eax, ebx */
  EAX = (EBX);
L_11915b8b:;
  /* 11915b8b pop ebx */
  EBX = (pop32());
  /* 11915b8c pop esi */
  ESI = (pop32());
  /* 11915b8d pop edi */
  EDI = (pop32());
  /* 11915b8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915b8f ret  */
  ESPCHK(0x11915ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b90 @ 0x11915b90 (257 bytes, 103 insns) */
void f_11915b90(void) {
  FTRACE(0x11915b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11915b91 mov ebp, esp */
  EBP = (ESP);
  /* 11915b93 push edi */
  push32((uint32_t)(EDI));
  /* 11915b94 push esi */
  push32((uint32_t)(ESI));
  /* 11915b95 push ebx */
  push32((uint32_t)(EBX));
  /* 11915b96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11915b99 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11915b9b je 0x11915c8a */
  if (C.zf) goto L_11915c8a;
  /* 11915ba1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11915ba4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11915ba7 lea eax, [0x1191a40c] */
  EAX = ((uint32_t)(0x1191a40c));
  /* 11915bad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915bb1 jne 0x11915c01 */
  if (!C.zf) goto L_11915c01;
  /* 11915bb3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11915bb5 mov bl, 0x5a */
  BL = (0x5au);
  /* 11915bb7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11915bb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11915bbc:;
  /* 11915bbc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11915bbe or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11915bc0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11915bc2 je 0x11915be5 */
  if (C.zf) goto L_11915be5;
  /* 11915bc4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11915bc6 je 0x11915be5 */
  if (C.zf) goto L_11915be5;
  /* 11915bc8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915bc9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11915bca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915bcc jb 0x11915bd4 */
  if (C.cf) goto L_11915bd4;
  /* 11915bce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915bd0 ja 0x11915bd4 */
  if ((!C.cf&&!C.zf)) goto L_11915bd4;
  /* 11915bd2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11915bd4:;
  /* 11915bd4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915bd6 jb 0x11915bde */
  if (C.cf) goto L_11915bde;
  /* 11915bd8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915bda ja 0x11915bde */
  if ((!C.cf&&!C.zf)) goto L_11915bde;
  /* 11915bdc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11915bde:;
  /* 11915bde cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915be0 jne 0x11915bef */
  if (!C.zf) goto L_11915bef;
  /* 11915be2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11915be3 jne 0x11915bbc */
  if (!C.zf) goto L_11915bbc;
L_11915be5:;
  /* 11915be5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11915be7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11915be9 je 0x11915c8a */
  if (C.zf) goto L_11915c8a;
L_11915bef:;
  /* 11915bef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11915bf4 jb 0x11915c8a */
  if (C.cf) goto L_11915c8a;
  /* 11915bfa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11915bfc jmp 0x11915c8a */
  goto L_11915c8a;
L_11915c01:;
  /* 11915c01 lock inc dword ptr [0x1191a584] */
  x86_unimpl("lock inc @ 0x11915c01");
  /* 11915c08 cmp dword ptr [0x1191a580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915c0f jg 0x11915c15 */
  if ((!C.zf&&C.sf==C.of)) goto L_11915c15;
  /* 11915c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11915c13 jmp 0x11915c2e */
  goto L_11915c2e;
L_11915c15:;
  /* 11915c15 lock dec dword ptr [0x1191a584] */
  x86_unimpl("lock dec @ 0x11915c15");
  /* 11915c1c mov ebx, ecx */
  EBX = (ECX);
  /* 11915c1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11915c20 call 0x11912e76 */
  push32(0x11915c25u); f_11912e76();
  /* 11915c25 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11915c2c mov ecx, ebx */
  ECX = (EBX);
L_11915c2e:;
  /* 11915c2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915c30 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11915c32 mov edi, edi */
  EDI = (EDI);
L_11915c34:;
  /* 11915c34 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11915c36 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915c38 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11915c3a je 0x11915c5f */
  if (C.zf) goto L_11915c5f;
  /* 11915c3c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11915c3e je 0x11915c5f */
  if (C.zf) goto L_11915c5f;
  /* 11915c40 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11915c41 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11915c42 push ecx */
  push32((uint32_t)(ECX));
  /* 11915c43 push eax */
  push32((uint32_t)(EAX));
  /* 11915c44 push ebx */
  push32((uint32_t)(EBX));
  /* 11915c45 call 0x11915d85 */
  push32(0x11915c4au); f_11915d85();
  /* 11915c4a mov ebx, eax */
  EBX = (EAX);
  /* 11915c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915c4f call 0x11915d85 */
  push32(0x11915c54u); f_11915d85();
  /* 11915c54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915c57 pop ecx */
  ECX = (pop32());
  /* 11915c58 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915c5a jne 0x11915c65 */
  if (!C.zf) goto L_11915c65;
  /* 11915c5c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11915c5d jne 0x11915c34 */
  if (!C.zf) goto L_11915c34;
L_11915c5f:;
  /* 11915c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11915c61 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915c63 je 0x11915c6e */
  if (C.zf) goto L_11915c6e;
L_11915c65:;
  /* 11915c65 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11915c6a jb 0x11915c6e */
  if (C.cf) goto L_11915c6e;
  /* 11915c6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11915c6e:;
  /* 11915c6e pop eax */
  EAX = (pop32());
  /* 11915c6f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11915c71 jne 0x11915c7c */
  if (!C.zf) goto L_11915c7c;
  /* 11915c73 lock dec dword ptr [0x1191a584] */
  x86_unimpl("lock dec @ 0x11915c73");
  /* 11915c7a jmp 0x11915c8a */
  goto L_11915c8a;
L_11915c7c:;
  /* 11915c7c mov ebx, ecx */
  EBX = (ECX);
  /* 11915c7e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11915c80 call 0x11912ed7 */
  push32(0x11915c85u); f_11912ed7();
  /* 11915c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915c88 mov ecx, ebx */
  ECX = (EBX);
L_11915c8a:;
  /* 11915c8a mov eax, ecx */
  EAX = (ECX);
  /* 11915c8c pop ebx */
  EBX = (pop32());
  /* 11915c8d pop esi */
  ESI = (pop32());
  /* 11915c8e pop edi */
  EDI = (pop32());
  /* 11915c8f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915c90 ret  */
  ESPCHK(0x11915b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d85 @ 0x11915d85 (203 bytes, 78 insns) */
void f_11915d85(void) {
  FTRACE(0x11915d85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915d85 push ebp */
  push32((uint32_t)(EBP));
  /* 11915d86 mov ebp, esp */
  EBP = (ESP);
  /* 11915d88 push ecx */
  push32((uint32_t)(ECX));
  /* 11915d89 cmp dword ptr [0x1191a414], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1191a414))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915d90 push ebx */
  push32((uint32_t)(EBX));
  /* 11915d91 push esi */
  push32((uint32_t)(ESI));
  /* 11915d92 push edi */
  push32((uint32_t)(EDI));
  /* 11915d93 jne 0x11915db2 */
  if (!C.zf) goto L_11915db2;
  /* 11915d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915d98 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915d9b jl 0x11915e4b */
  if ((C.sf!=C.of)) goto L_11915e4b;
  /* 11915da1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915da4 jg 0x11915e4b */
  if ((!C.zf&&C.sf==C.of)) goto L_11915e4b;
  /* 11915daa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11915dad jmp 0x11915e4b */
  goto L_11915e4b;
L_11915db2:;
  /* 11915db2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11915db5 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11915dba push 1 */
  push32((uint32_t)(0x1u));
  /* 11915dbc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915dbe pop esi */
  ESI = (pop32());
  /* 11915dbf jge 0x11915de6 */
  if ((C.sf==C.of)) goto L_11915de6;
  /* 11915dc1 cmp dword ptr [0x11919a94], esi */
  { uint32_t _a=(r32((uint32_t)(0x11919a94))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915dc7 jle 0x11915dd4 */
  if ((C.zf||C.sf!=C.of)) goto L_11915dd4;
  /* 11915dc9 push esi */
  push32((uint32_t)(ESI));
  /* 11915dca push ebx */
  push32((uint32_t)(EBX));
  /* 11915dcb call 0x119155f4 */
  push32(0x11915dd0u); f_119155f4();
  /* 11915dd0 pop ecx */
  ECX = (pop32());
  /* 11915dd1 pop ecx */
  ECX = (pop32());
  /* 11915dd2 jmp 0x11915dde */
  goto L_11915dde;
L_11915dd4:;
  /* 11915dd4 mov eax, dword ptr [0x11919888] */
  EAX = (r32((uint32_t)(0x11919888)));
  /* 11915dd9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11915ddc and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11915dde:;
  /* 11915dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915de0 jne 0x11915de6 */
  if (!C.zf) goto L_11915de6;
L_11915de2:;
  /* 11915de2 mov eax, ebx */
  EAX = (EBX);
  /* 11915de4 jmp 0x11915e4b */
  goto L_11915e4b;
L_11915de6:;
  /* 11915de6 mov edx, dword ptr [0x11919888] */
  EDX = (r32((uint32_t)(0x11919888)));
  /* 11915dec mov eax, ebx */
  EAX = (EBX);
  /* 11915dee sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11915df1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11915df4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11915df9 je 0x11915e0a */
  if (C.zf) goto L_11915e0a;
  /* 11915dfb and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11915dff push 2 */
  push32((uint32_t)(0x2u));
  /* 11915e01 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11915e04 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11915e07 pop eax */
  EAX = (pop32());
  /* 11915e08 jmp 0x11915e13 */
  goto L_11915e13;
L_11915e0a:;
  /* 11915e0a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11915e0e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11915e11 mov eax, esi */
  EAX = (ESI);
L_11915e13:;
  /* 11915e13 push esi */
  push32((uint32_t)(ESI));
  /* 11915e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11915e16 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11915e19 push 3 */
  push32((uint32_t)(0x3u));
  /* 11915e1b push ecx */
  push32((uint32_t)(ECX));
  /* 11915e1c push eax */
  push32((uint32_t)(EAX));
  /* 11915e1d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11915e20 push eax */
  push32((uint32_t)(EAX));
  /* 11915e21 push edi */
  push32((uint32_t)(EDI));
  /* 11915e22 push dword ptr [0x1191a414] */
  push32((uint32_t)(r32((uint32_t)(0x1191a414))));
  /* 11915e28 call 0x11915118 */
  push32(0x11915e2du); f_11915118();
  /* 11915e2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11915e30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11915e32 je 0x11915de2 */
  if (C.zf) goto L_11915de2;
  /* 11915e34 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11915e36 jne 0x11915e3e */
  if (!C.zf) goto L_11915e3e;
  /* 11915e38 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11915e3c jmp 0x11915e4b */
  goto L_11915e4b;
L_11915e3e:;
  /* 11915e3e movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11915e42 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11915e46 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11915e49 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11915e4b:;
  /* 11915e4b pop edi */
  EDI = (pop32());
  /* 11915e4c pop esi */
  ESI = (pop32());
  /* 11915e4d pop ebx */
  EBX = (pop32());
  /* 11915e4e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11915e4f ret  */
  ESPCHK(0x11915d85u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11915e84 (6 bytes, 1 insns) */
void f_11915e84(void) {
  FTRACE(0x11915e84u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11915e84 jmp dword ptr [0x11916020] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11916020)))); return;
}

