#include "recomp.h"

/* FUN_10001000 @ 0x11431000 (18 bytes, 7 insns) */
void f_11431000(void) {
  FTRACE(0x11431000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11431000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11431004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431005 jne 0x1143100c */
  if (!C.zf) goto L_1143100c;
  /* 11431007 call 0x11431039 */
  push32(0x1143100cu); f_11431039();
L_1143100c:;
  /* 1143100c push 1 */
  push32((uint32_t)(0x1u));
  /* 1143100e pop eax */
  EAX = (pop32());
  /* 1143100f ret 0xc */
  ESPCHK(0x11431000u, _esp0);
  ESP += 16; return;
}

/* FUN_10001012 @ 0x11431012 (39 bytes, 13 insns) */
void f_11431012(void) {
  FTRACE(0x11431012u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11431012 push ebp */
  push32((uint32_t)(EBP));
  /* 11431013 mov ebp, esp */
  EBP = (ESP);
  /* 11431015 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1143101a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1143101d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11431020 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11431023 push 0x11437898 */
  push32((uint32_t)(0x11437898u));
  /* 11431028 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1143102b call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x11431031u);
  /* 11431031 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11431034 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431037 pop ebp */
  EBP = (pop32());
  /* 11431038 ret  */
  ESPCHK(0x11431012u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11431039 (1635 bytes, 442 insns) */
void f_11431039(void) {
  FTRACE(0x11431039u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11431039 push ebx */
  push32((uint32_t)(EBX));
  /* 1143103a push ebp */
  push32((uint32_t)(EBP));
  /* 1143103b push esi */
  push32((uint32_t)(ESI));
  /* 1143103c mov esi, dword ptr [0x11436144] */
  ESI = (r32((uint32_t)(0x11436144)));
  /* 11431042 push edi */
  push32((uint32_t)(EDI));
  /* 11431043 push 0x11437304 */
  push32((uint32_t)(0x11437304u));
  /* 11431048 push 1 */
  push32((uint32_t)(0x1u));
  /* 1143104a call esi */
  call_ind((uint32_t)(ESI), 0x1143104cu);
  /* 1143104c push 0x114372f8 */
  push32((uint32_t)(0x114372f8u));
  /* 11431051 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431053 call esi */
  call_ind((uint32_t)(ESI), 0x11431055u);
  /* 11431055 push 0x114372f0 */
  push32((uint32_t)(0x114372f0u));
  /* 1143105a push 3 */
  push32((uint32_t)(0x3u));
  /* 1143105c call esi */
  call_ind((uint32_t)(ESI), 0x1143105eu);
  /* 1143105e push 0x114372e4 */
  push32((uint32_t)(0x114372e4u));
  /* 11431063 push 4 */
  push32((uint32_t)(0x4u));
  /* 11431065 pop edi */
  EDI = (pop32());
  /* 11431066 push edi */
  push32((uint32_t)(EDI));
  /* 11431067 call esi */
  call_ind((uint32_t)(ESI), 0x11431069u);
  /* 11431069 push 0x114372dc */
  push32((uint32_t)(0x114372dcu));
  /* 1143106e push 5 */
  push32((uint32_t)(0x5u));
  /* 11431070 call esi */
  call_ind((uint32_t)(ESI), 0x11431072u);
  /* 11431072 mov ebx, dword ptr [0x1143613c] */
  EBX = (r32((uint32_t)(0x1143613c)));
  /* 11431078 push edi */
  push32((uint32_t)(EDI));
  /* 11431079 push 0x114377a8 */
  push32((uint32_t)(0x114377a8u));
  /* 1143107e call ebx */
  call_ind((uint32_t)(EBX), 0x11431080u);
  /* 11431080 push edi */
  push32((uint32_t)(EDI));
  /* 11431081 push 0x114377b8 */
  push32((uint32_t)(0x114377b8u));
  /* 11431086 call ebx */
  call_ind((uint32_t)(EBX), 0x11431088u);
  /* 11431088 push edi */
  push32((uint32_t)(EDI));
  /* 11431089 push 0x11437998 */
  push32((uint32_t)(0x11437998u));
  /* 1143108e call ebx */
  call_ind((uint32_t)(EBX), 0x11431090u);
  /* 11431090 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431093 push edi */
  push32((uint32_t)(EDI));
  /* 11431094 push 0x11437b28 */
  push32((uint32_t)(0x11437b28u));
  /* 11431099 call ebx */
  call_ind((uint32_t)(EBX), 0x1143109bu);
  /* 1143109b push edi */
  push32((uint32_t)(EDI));
  /* 1143109c push 0x114377e0 */
  push32((uint32_t)(0x114377e0u));
  /* 114310a1 call ebx */
  call_ind((uint32_t)(EBX), 0x114310a3u);
  /* 114310a3 push edi */
  push32((uint32_t)(EDI));
  /* 114310a4 push 0x114379d8 */
  push32((uint32_t)(0x114379d8u));
  /* 114310a9 call ebx */
  call_ind((uint32_t)(EBX), 0x114310abu);
  /* 114310ab mov edi, dword ptr [0x1143614c] */
  EDI = (r32((uint32_t)(0x1143614c)));
  /* 114310b1 push 0x114372d4 */
  push32((uint32_t)(0x114372d4u));
  /* 114310b6 push 0x114378a8 */
  push32((uint32_t)(0x114378a8u));
  /* 114310bb call edi */
  call_ind((uint32_t)(EDI), 0x114310bdu);
  /* 114310bd push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 114310c2 push 0x114379c8 */
  push32((uint32_t)(0x114379c8u));
  /* 114310c7 call edi */
  call_ind((uint32_t)(EDI), 0x114310c9u);
  /* 114310c9 push 0x114372cc */
  push32((uint32_t)(0x114372ccu));
  /* 114310ce push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 114310d3 call edi */
  call_ind((uint32_t)(EDI), 0x114310d5u);
  /* 114310d5 push 0x114372c8 */
  push32((uint32_t)(0x114372c8u));
  /* 114310da push 0x11437968 */
  push32((uint32_t)(0x11437968u));
  /* 114310df call edi */
  call_ind((uint32_t)(EDI), 0x114310e1u);
  /* 114310e1 push 0x114372c4 */
  push32((uint32_t)(0x114372c4u));
  /* 114310e6 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 114310eb call edi */
  call_ind((uint32_t)(EDI), 0x114310edu);
  /* 114310ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114310f0 push 0x114372c0 */
  push32((uint32_t)(0x114372c0u));
  /* 114310f5 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 114310fa call edi */
  call_ind((uint32_t)(EDI), 0x114310fcu);
  /* 114310fc push 0x114372bc */
  push32((uint32_t)(0x114372bcu));
  /* 11431101 push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 11431106 call edi */
  call_ind((uint32_t)(EDI), 0x11431108u);
  /* 11431108 push 0x114372b8 */
  push32((uint32_t)(0x114372b8u));
  /* 1143110d push 0x11437840 */
  push32((uint32_t)(0x11437840u));
  /* 11431112 call edi */
  call_ind((uint32_t)(EDI), 0x11431114u);
  /* 11431114 push 0x114372b4 */
  push32((uint32_t)(0x114372b4u));
  /* 11431119 push 0x11437848 */
  push32((uint32_t)(0x11437848u));
  /* 1143111e call edi */
  call_ind((uint32_t)(EDI), 0x11431120u);
  /* 11431120 push 0x114372b0 */
  push32((uint32_t)(0x114372b0u));
  /* 11431125 push 0x114379c0 */
  push32((uint32_t)(0x114379c0u));
  /* 1143112a call edi */
  call_ind((uint32_t)(EDI), 0x1143112cu);
  /* 1143112c push 0x114372ac */
  push32((uint32_t)(0x114372acu));
  /* 11431131 push 0x11437878 */
  push32((uint32_t)(0x11437878u));
  /* 11431136 call edi */
  call_ind((uint32_t)(EDI), 0x11431138u);
  /* 11431138 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 1143113d push 0x11437888 */
  push32((uint32_t)(0x11437888u));
  /* 11431142 call edi */
  call_ind((uint32_t)(EDI), 0x11431144u);
  /* 11431144 push 0x114372a4 */
  push32((uint32_t)(0x114372a4u));
  /* 11431149 push 0x114378c0 */
  push32((uint32_t)(0x114378c0u));
  /* 1143114e call edi */
  call_ind((uint32_t)(EDI), 0x11431150u);
  /* 11431150 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431153 push 0x114372a0 */
  push32((uint32_t)(0x114372a0u));
  /* 11431158 push 0x114378e8 */
  push32((uint32_t)(0x114378e8u));
  /* 1143115d call edi */
  call_ind((uint32_t)(EDI), 0x1143115fu);
  /* 1143115f push 0x1143729c */
  push32((uint32_t)(0x1143729cu));
  /* 11431164 push 0x11437910 */
  push32((uint32_t)(0x11437910u));
  /* 11431169 call edi */
  call_ind((uint32_t)(EDI), 0x1143116bu);
  /* 1143116b push 0x11437294 */
  push32((uint32_t)(0x11437294u));
  /* 11431170 push 0x11437b38 */
  push32((uint32_t)(0x11437b38u));
  /* 11431175 call edi */
  call_ind((uint32_t)(EDI), 0x11431177u);
  /* 11431177 push 0x1143728c */
  push32((uint32_t)(0x1143728cu));
  /* 1143117c push 0x11437b40 */
  push32((uint32_t)(0x11437b40u));
  /* 11431181 call edi */
  call_ind((uint32_t)(EDI), 0x11431183u);
  /* 11431183 push 0x11437288 */
  push32((uint32_t)(0x11437288u));
  /* 11431188 push 0x11437858 */
  push32((uint32_t)(0x11437858u));
  /* 1143118d call edi */
  call_ind((uint32_t)(EDI), 0x1143118fu);
  /* 1143118f push 0x11437284 */
  push32((uint32_t)(0x11437284u));
  /* 11431194 push 0x11437860 */
  push32((uint32_t)(0x11437860u));
  /* 11431199 call edi */
  call_ind((uint32_t)(EDI), 0x1143119bu);
  /* 1143119b mov ebp, 0x11437280 */
  EBP = (0x11437280u);
  /* 114311a0 push ebp */
  push32((uint32_t)(EBP));
  /* 114311a1 push 0x11437868 */
  push32((uint32_t)(0x11437868u));
  /* 114311a6 call edi */
  call_ind((uint32_t)(EDI), 0x114311a8u);
  /* 114311a8 mov esi, 0x1143727c */
  ESI = (0x1143727cu);
  /* 114311ad push esi */
  push32((uint32_t)(ESI));
  /* 114311ae push 0x11437870 */
  push32((uint32_t)(0x11437870u));
  /* 114311b3 call edi */
  call_ind((uint32_t)(EDI), 0x114311b5u);
  /* 114311b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114311b8 push 0x11437288 */
  push32((uint32_t)(0x11437288u));
  /* 114311bd push 0x11437ab0 */
  push32((uint32_t)(0x11437ab0u));
  /* 114311c2 call edi */
  call_ind((uint32_t)(EDI), 0x114311c4u);
  /* 114311c4 push 0x11437284 */
  push32((uint32_t)(0x11437284u));
  /* 114311c9 push 0x11437ac8 */
  push32((uint32_t)(0x11437ac8u));
  /* 114311ce call edi */
  call_ind((uint32_t)(EDI), 0x114311d0u);
  /* 114311d0 push ebp */
  push32((uint32_t)(EBP));
  /* 114311d1 push 0x11437ad8 */
  push32((uint32_t)(0x11437ad8u));
  /* 114311d6 call edi */
  call_ind((uint32_t)(EDI), 0x114311d8u);
  /* 114311d8 push esi */
  push32((uint32_t)(ESI));
  /* 114311d9 push 0x11437ae8 */
  push32((uint32_t)(0x11437ae8u));
  /* 114311de call edi */
  call_ind((uint32_t)(EDI), 0x114311e0u);
  /* 114311e0 mov esi, dword ptr [0x11436150] */
  ESI = (r32((uint32_t)(0x11436150)));
  /* 114311e6 push 0x11437278 */
  push32((uint32_t)(0x11437278u));
  /* 114311eb push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 114311f0 call esi */
  call_ind((uint32_t)(ESI), 0x114311f2u);
  /* 114311f2 push 0x11437274 */
  push32((uint32_t)(0x11437274u));
  /* 114311f7 push 0x11437890 */
  push32((uint32_t)(0x11437890u));
  /* 114311fc call esi */
  call_ind((uint32_t)(ESI), 0x114311feu);
  /* 114311fe push 0x11437270 */
  push32((uint32_t)(0x11437270u));
  /* 11431203 push 0x114378a0 */
  push32((uint32_t)(0x114378a0u));
  /* 11431208 call esi */
  call_ind((uint32_t)(ESI), 0x1143120au);
  /* 1143120a push 0x1143726c */
  push32((uint32_t)(0x1143726cu));
  /* 1143120f push 0x114378b0 */
  push32((uint32_t)(0x114378b0u));
  /* 11431214 call esi */
  call_ind((uint32_t)(ESI), 0x11431216u);
  /* 11431216 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431219 push 0x11437268 */
  push32((uint32_t)(0x11437268u));
  /* 1143121e push 0x11437a78 */
  push32((uint32_t)(0x11437a78u));
  /* 11431223 call esi */
  call_ind((uint32_t)(ESI), 0x11431225u);
  /* 11431225 push 0x11437264 */
  push32((uint32_t)(0x11437264u));
  /* 1143122a push 0x114378b8 */
  push32((uint32_t)(0x114378b8u));
  /* 1143122f call esi */
  call_ind((uint32_t)(ESI), 0x11431231u);
  /* 11431231 push 0x11437260 */
  push32((uint32_t)(0x11437260u));
  /* 11431236 push 0x114378c8 */
  push32((uint32_t)(0x114378c8u));
  /* 1143123b call esi */
  call_ind((uint32_t)(ESI), 0x1143123du);
  /* 1143123d push 0x1143725c */
  push32((uint32_t)(0x1143725cu));
  /* 11431242 push 0x11437a60 */
  push32((uint32_t)(0x11437a60u));
  /* 11431247 call esi */
  call_ind((uint32_t)(ESI), 0x11431249u);
  /* 11431249 push 0x11437258 */
  push32((uint32_t)(0x11437258u));
  /* 1143124e push 0x114378d0 */
  push32((uint32_t)(0x114378d0u));
  /* 11431253 call esi */
  call_ind((uint32_t)(ESI), 0x11431255u);
  /* 11431255 push 0x11437254 */
  push32((uint32_t)(0x11437254u));
  /* 1143125a push 0x114378d8 */
  push32((uint32_t)(0x114378d8u));
  /* 1143125f call esi */
  call_ind((uint32_t)(ESI), 0x11431261u);
  /* 11431261 push 0x11437250 */
  push32((uint32_t)(0x11437250u));
  /* 11431266 push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 1143126b call esi */
  call_ind((uint32_t)(ESI), 0x1143126du);
  /* 1143126d push 0x1143724c */
  push32((uint32_t)(0x1143724cu));
  /* 11431272 push 0x11437a08 */
  push32((uint32_t)(0x11437a08u));
  /* 11431277 call esi */
  call_ind((uint32_t)(ESI), 0x11431279u);
  /* 11431279 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143127c push 0x11437248 */
  push32((uint32_t)(0x11437248u));
  /* 11431281 push 0x11437a10 */
  push32((uint32_t)(0x11437a10u));
  /* 11431286 call esi */
  call_ind((uint32_t)(ESI), 0x11431288u);
  /* 11431288 push 0x11437244 */
  push32((uint32_t)(0x11437244u));
  /* 1143128d push 0x11437a20 */
  push32((uint32_t)(0x11437a20u));
  /* 11431292 call esi */
  call_ind((uint32_t)(ESI), 0x11431294u);
  /* 11431294 push 0x11437240 */
  push32((uint32_t)(0x11437240u));
  /* 11431299 push 0x11437a28 */
  push32((uint32_t)(0x11437a28u));
  /* 1143129e call esi */
  call_ind((uint32_t)(ESI), 0x114312a0u);
  /* 114312a0 push 0x1143723c */
  push32((uint32_t)(0x1143723cu));
  /* 114312a5 push 0x11437a30 */
  push32((uint32_t)(0x11437a30u));
  /* 114312aa call esi */
  call_ind((uint32_t)(ESI), 0x114312acu);
  /* 114312ac push 0x11437238 */
  push32((uint32_t)(0x11437238u));
  /* 114312b1 push 0x11437a40 */
  push32((uint32_t)(0x11437a40u));
  /* 114312b6 call esi */
  call_ind((uint32_t)(ESI), 0x114312b8u);
  /* 114312b8 push 0x11437234 */
  push32((uint32_t)(0x11437234u));
  /* 114312bd push 0x114379e0 */
  push32((uint32_t)(0x114379e0u));
  /* 114312c2 call esi */
  call_ind((uint32_t)(ESI), 0x114312c4u);
  /* 114312c4 push 0x11437230 */
  push32((uint32_t)(0x11437230u));
  /* 114312c9 push 0x114379e8 */
  push32((uint32_t)(0x114379e8u));
  /* 114312ce call esi */
  call_ind((uint32_t)(ESI), 0x114312d0u);
  /* 114312d0 push 0x1143722c */
  push32((uint32_t)(0x1143722cu));
  /* 114312d5 push 0x114379f0 */
  push32((uint32_t)(0x114379f0u));
  /* 114312da call esi */
  call_ind((uint32_t)(ESI), 0x114312dcu);
  /* 114312dc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114312df push 0x11437228 */
  push32((uint32_t)(0x11437228u));
  /* 114312e4 push 0x11437a00 */
  push32((uint32_t)(0x11437a00u));
  /* 114312e9 call esi */
  call_ind((uint32_t)(ESI), 0x114312ebu);
  /* 114312eb push 0x11437220 */
  push32((uint32_t)(0x11437220u));
  /* 114312f0 push 0x11437b48 */
  push32((uint32_t)(0x11437b48u));
  /* 114312f5 call esi */
  call_ind((uint32_t)(ESI), 0x114312f7u);
  /* 114312f7 push 0x11437218 */
  push32((uint32_t)(0x11437218u));
  /* 114312fc push 0x11437b50 */
  push32((uint32_t)(0x11437b50u));
  /* 11431301 call esi */
  call_ind((uint32_t)(ESI), 0x11431303u);
  /* 11431303 push 0x11437214 */
  push32((uint32_t)(0x11437214u));
  /* 11431308 push 0x11437a18 */
  push32((uint32_t)(0x11437a18u));
  /* 1143130d call esi */
  call_ind((uint32_t)(ESI), 0x1143130fu);
  /* 1143130f push 0x11437210 */
  push32((uint32_t)(0x11437210u));
  /* 11431314 push 0x11437b08 */
  push32((uint32_t)(0x11437b08u));
  /* 11431319 call esi */
  call_ind((uint32_t)(ESI), 0x1143131bu);
  /* 1143131b push 0x1143720c */
  push32((uint32_t)(0x1143720cu));
  /* 11431320 push 0x11437a88 */
  push32((uint32_t)(0x11437a88u));
  /* 11431325 call esi */
  call_ind((uint32_t)(ESI), 0x11431327u);
  /* 11431327 push 0x11437208 */
  push32((uint32_t)(0x11437208u));
  /* 1143132c push 0x11437a98 */
  push32((uint32_t)(0x11437a98u));
  /* 11431331 call esi */
  call_ind((uint32_t)(ESI), 0x11431333u);
  /* 11431333 push 0x11437204 */
  push32((uint32_t)(0x11437204u));
  /* 11431338 push 0x11437aa8 */
  push32((uint32_t)(0x11437aa8u));
  /* 1143133d call esi */
  call_ind((uint32_t)(ESI), 0x1143133fu);
  /* 1143133f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431342 push 0x11437200 */
  push32((uint32_t)(0x11437200u));
  /* 11431347 push 0x11437ac0 */
  push32((uint32_t)(0x11437ac0u));
  /* 1143134c call esi */
  call_ind((uint32_t)(ESI), 0x1143134eu);
  /* 1143134e push 0x114371fc */
  push32((uint32_t)(0x114371fcu));
  /* 11431353 push 0x11437ad0 */
  push32((uint32_t)(0x11437ad0u));
  /* 11431358 call esi */
  call_ind((uint32_t)(ESI), 0x1143135au);
  /* 1143135a push 0x114371f8 */
  push32((uint32_t)(0x114371f8u));
  /* 1143135f push 0x11437ae0 */
  push32((uint32_t)(0x11437ae0u));
  /* 11431364 call esi */
  call_ind((uint32_t)(ESI), 0x11431366u);
  /* 11431366 push 0x114371f4 */
  push32((uint32_t)(0x114371f4u));
  /* 1143136b push 0x11437af0 */
  push32((uint32_t)(0x11437af0u));
  /* 11431370 call esi */
  call_ind((uint32_t)(ESI), 0x11431372u);
  /* 11431372 push 0x114371f0 */
  push32((uint32_t)(0x114371f0u));
  /* 11431377 push 0x11437af8 */
  push32((uint32_t)(0x11437af8u));
  /* 1143137c call esi */
  call_ind((uint32_t)(ESI), 0x1143137eu);
  /* 1143137e push 0x114371ec */
  push32((uint32_t)(0x114371ecu));
  /* 11431383 push 0x11437b00 */
  push32((uint32_t)(0x11437b00u));
  /* 11431388 call esi */
  call_ind((uint32_t)(ESI), 0x1143138au);
  /* 1143138a push 0x114371e4 */
  push32((uint32_t)(0x114371e4u));
  /* 1143138f push 0x11437b58 */
  push32((uint32_t)(0x11437b58u));
  /* 11431394 call esi */
  call_ind((uint32_t)(ESI), 0x11431396u);
  /* 11431396 push 0x114371dc */
  push32((uint32_t)(0x114371dcu));
  /* 1143139b push 0x11437780 */
  push32((uint32_t)(0x11437780u));
  /* 114313a0 call esi */
  call_ind((uint32_t)(ESI), 0x114313a2u);
  /* 114313a2 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114313a5 push 0x114371d4 */
  push32((uint32_t)(0x114371d4u));
  /* 114313aa push 0x11437788 */
  push32((uint32_t)(0x11437788u));
  /* 114313af call esi */
  call_ind((uint32_t)(ESI), 0x114313b1u);
  /* 114313b1 push 0x114371cc */
  push32((uint32_t)(0x114371ccu));
  /* 114313b6 push 0x11437798 */
  push32((uint32_t)(0x11437798u));
  /* 114313bb call esi */
  call_ind((uint32_t)(ESI), 0x114313bdu);
  /* 114313bd push 0x114371c4 */
  push32((uint32_t)(0x114371c4u));
  /* 114313c2 push 0x114377a0 */
  push32((uint32_t)(0x114377a0u));
  /* 114313c7 call esi */
  call_ind((uint32_t)(ESI), 0x114313c9u);
  /* 114313c9 push 0x114371bc */
  push32((uint32_t)(0x114371bcu));
  /* 114313ce push 0x114377b0 */
  push32((uint32_t)(0x114377b0u));
  /* 114313d3 call esi */
  call_ind((uint32_t)(ESI), 0x114313d5u);
  /* 114313d5 push 0x114371b4 */
  push32((uint32_t)(0x114371b4u));
  /* 114313da push 0x114377c0 */
  push32((uint32_t)(0x114377c0u));
  /* 114313df call esi */
  call_ind((uint32_t)(ESI), 0x114313e1u);
  /* 114313e1 push 0x114371ac */
  push32((uint32_t)(0x114371acu));
  /* 114313e6 push 0x114377c8 */
  push32((uint32_t)(0x114377c8u));
  /* 114313eb call esi */
  call_ind((uint32_t)(ESI), 0x114313edu);
  /* 114313ed push 0x114371a4 */
  push32((uint32_t)(0x114371a4u));
  /* 114313f2 push 0x114377d0 */
  push32((uint32_t)(0x114377d0u));
  /* 114313f7 call esi */
  call_ind((uint32_t)(ESI), 0x114313f9u);
  /* 114313f9 push 0x1143719c */
  push32((uint32_t)(0x1143719cu));
  /* 114313fe push 0x114377d8 */
  push32((uint32_t)(0x114377d8u));
  /* 11431403 call esi */
  call_ind((uint32_t)(ESI), 0x11431405u);
  /* 11431405 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431408 push 0x11437194 */
  push32((uint32_t)(0x11437194u));
  /* 1143140d push 0x114377e8 */
  push32((uint32_t)(0x114377e8u));
  /* 11431412 call esi */
  call_ind((uint32_t)(ESI), 0x11431414u);
  /* 11431414 push 0x11437190 */
  push32((uint32_t)(0x11437190u));
  /* 11431419 push 0x114378f8 */
  push32((uint32_t)(0x114378f8u));
  /* 1143141e call edi */
  call_ind((uint32_t)(EDI), 0x11431420u);
  /* 11431420 push 0x1143718c */
  push32((uint32_t)(0x1143718cu));
  /* 11431425 push 0x11437900 */
  push32((uint32_t)(0x11437900u));
  /* 1143142a call edi */
  call_ind((uint32_t)(EDI), 0x1143142cu);
  /* 1143142c push 0x11437188 */
  push32((uint32_t)(0x11437188u));
  /* 11431431 push 0x11437908 */
  push32((uint32_t)(0x11437908u));
  /* 11431436 call edi */
  call_ind((uint32_t)(EDI), 0x11431438u);
  /* 11431438 push 0x11437184 */
  push32((uint32_t)(0x11437184u));
  /* 1143143d push 0x11437920 */
  push32((uint32_t)(0x11437920u));
  /* 11431442 call edi */
  call_ind((uint32_t)(EDI), 0x11431444u);
  /* 11431444 push 0x11437180 */
  push32((uint32_t)(0x11437180u));
  /* 11431449 push 0x11437930 */
  push32((uint32_t)(0x11437930u));
  /* 1143144e call edi */
  call_ind((uint32_t)(EDI), 0x11431450u);
  /* 11431450 push 0x1143717c */
  push32((uint32_t)(0x1143717cu));
  /* 11431455 push 0x11437938 */
  push32((uint32_t)(0x11437938u));
  /* 1143145a call edi */
  call_ind((uint32_t)(EDI), 0x1143145cu);
  /* 1143145c push 0x11437178 */
  push32((uint32_t)(0x11437178u));
  /* 11431461 push 0x11437948 */
  push32((uint32_t)(0x11437948u));
  /* 11431466 call edi */
  call_ind((uint32_t)(EDI), 0x11431468u);
  /* 11431468 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143146b push 0x11437174 */
  push32((uint32_t)(0x11437174u));
  /* 11431470 push 0x11437950 */
  push32((uint32_t)(0x11437950u));
  /* 11431475 call edi */
  call_ind((uint32_t)(EDI), 0x11431477u);
  /* 11431477 push 0x11437170 */
  push32((uint32_t)(0x11437170u));
  /* 1143147c push 0x11437958 */
  push32((uint32_t)(0x11437958u));
  /* 11431481 call edi */
  call_ind((uint32_t)(EDI), 0x11431483u);
  /* 11431483 push 0x11437168 */
  push32((uint32_t)(0x11437168u));
  /* 11431488 push 0x11437a50 */
  push32((uint32_t)(0x11437a50u));
  /* 1143148d call edi */
  call_ind((uint32_t)(EDI), 0x1143148fu);
  /* 1143148f push 0x11437164 */
  push32((uint32_t)(0x11437164u));
  /* 11431494 push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11431499 call edi */
  call_ind((uint32_t)(EDI), 0x1143149bu);
  /* 1143149b push 0x11437160 */
  push32((uint32_t)(0x11437160u));
  /* 114314a0 push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 114314a5 call edi */
  call_ind((uint32_t)(EDI), 0x114314a7u);
  /* 114314a7 push 0x1143715c */
  push32((uint32_t)(0x1143715cu));
  /* 114314ac push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 114314b1 call edi */
  call_ind((uint32_t)(EDI), 0x114314b3u);
  /* 114314b3 push 0x11437158 */
  push32((uint32_t)(0x11437158u));
  /* 114314b8 push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 114314bd call esi */
  call_ind((uint32_t)(ESI), 0x114314bfu);
  /* 114314bf push 0x11437154 */
  push32((uint32_t)(0x11437154u));
  /* 114314c4 push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 114314c9 call esi */
  call_ind((uint32_t)(ESI), 0x114314cbu);
  /* 114314cb mov edi, dword ptr [0x11436148] */
  EDI = (r32((uint32_t)(0x11436148)));
  /* 114314d1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114314d4 push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 114314d9 call edi */
  call_ind((uint32_t)(EDI), 0x114314dbu);
  /* 114314db mov ebp, dword ptr [0x11436158] */
  EBP = (r32((uint32_t)(0x11436158)));
  /* 114314e1 mov dword ptr [esp], 0x1143714c */
  w32((uint32_t)(ESP), (0x1143714cu));
  /* 114314e8 push 0x114378e0 */
  push32((uint32_t)(0x114378e0u));
  /* 114314ed call ebp */
  call_ind((uint32_t)(EBP), 0x114314efu);
  /* 114314ef mov esi, dword ptr [0x1143615c] */
  ESI = (r32((uint32_t)(0x1143615c)));
  /* 114314f5 push 0x11437134 */
  push32((uint32_t)(0x11437134u));
  /* 114314fa push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 114314ff call esi */
  call_ind((uint32_t)(ESI), 0x11431501u);
  /* 11431501 push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11431506 call edi */
  call_ind((uint32_t)(EDI), 0x11431508u);
  /* 11431508 push 0x1143714c */
  push32((uint32_t)(0x1143714cu));
  /* 1143150d push 0x114378f0 */
  push32((uint32_t)(0x114378f0u));
  /* 11431512 call ebp */
  call_ind((uint32_t)(EBP), 0x11431514u);
  /* 11431514 push 0x11437120 */
  push32((uint32_t)(0x11437120u));
  /* 11431519 push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 1143151e call esi */
  call_ind((uint32_t)(ESI), 0x11431520u);
  /* 11431520 push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11431525 call edi */
  call_ind((uint32_t)(EDI), 0x11431527u);
  /* 11431527 push 0x11437838 */
  push32((uint32_t)(0x11437838u));
  /* 1143152c call edi */
  call_ind((uint32_t)(EDI), 0x1143152eu);
  /* 1143152e push 0x11437110 */
  push32((uint32_t)(0x11437110u));
  /* 11431533 push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 11431538 call esi */
  call_ind((uint32_t)(ESI), 0x1143153au);
  /* 1143153a push 0x11437104 */
  push32((uint32_t)(0x11437104u));
  /* 1143153f push 0x114377f8 */
  push32((uint32_t)(0x114377f8u));
  /* 11431544 call esi */
  call_ind((uint32_t)(ESI), 0x11431546u);
  /* 11431546 push 8 */
  push32((uint32_t)(0x8u));
  /* 11431548 push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 1143154d call ebx */
  call_ind((uint32_t)(EBX), 0x1143154fu);
  /* 1143154f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431552 push 8 */
  push32((uint32_t)(0x8u));
  /* 11431554 push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11431559 call ebx */
  call_ind((uint32_t)(EBX), 0x1143155bu);
  /* 1143155b push 8 */
  push32((uint32_t)(0x8u));
  /* 1143155d push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11431562 call ebx */
  call_ind((uint32_t)(EBX), 0x11431564u);
  /* 11431564 push 8 */
  push32((uint32_t)(0x8u));
  /* 11431566 push 0x11437838 */
  push32((uint32_t)(0x11437838u));
  /* 1143156b call ebx */
  call_ind((uint32_t)(EBX), 0x1143156du);
  /* 1143156d push 0x114370f8 */
  push32((uint32_t)(0x114370f8u));
  /* 11431572 push 0x11437790 */
  push32((uint32_t)(0x11437790u));
  /* 11431577 call esi */
  call_ind((uint32_t)(ESI), 0x11431579u);
  /* 11431579 push 0x114370e8 */
  push32((uint32_t)(0x114370e8u));
  /* 1143157e push 0x114379d0 */
  push32((uint32_t)(0x114379d0u));
  /* 11431583 call esi */
  call_ind((uint32_t)(ESI), 0x11431585u);
  /* 11431585 push 0x114370d8 */
  push32((uint32_t)(0x114370d8u));
  /* 1143158a push 0x11437800 */
  push32((uint32_t)(0x11437800u));
  /* 1143158f call esi */
  call_ind((uint32_t)(ESI), 0x11431591u);
  /* 11431591 push 0x11437808 */
  push32((uint32_t)(0x11437808u));
  /* 11431596 call edi */
  call_ind((uint32_t)(EDI), 0x11431598u);
  /* 11431598 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 1143159d call edi */
  call_ind((uint32_t)(EDI), 0x1143159fu);
  /* 1143159f push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 114315a4 call edi */
  call_ind((uint32_t)(EDI), 0x114315a6u);
  /* 114315a6 push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 114315ab call edi */
  call_ind((uint32_t)(EDI), 0x114315adu);
  /* 114315ad add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114315b0 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 114315b5 call edi */
  call_ind((uint32_t)(EDI), 0x114315b7u);
  /* 114315b7 mov dword ptr [esp], 0x11437988 */
  w32((uint32_t)(ESP), (0x11437988u));
  /* 114315be call edi */
  call_ind((uint32_t)(EDI), 0x114315c0u);
  /* 114315c0 push 8 */
  push32((uint32_t)(0x8u));
  /* 114315c2 push 0x11437808 */
  push32((uint32_t)(0x11437808u));
  /* 114315c7 call ebx */
  call_ind((uint32_t)(EBX), 0x114315c9u);
  /* 114315c9 push 8 */
  push32((uint32_t)(0x8u));
  /* 114315cb push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 114315d0 call ebx */
  call_ind((uint32_t)(EBX), 0x114315d2u);
  /* 114315d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 114315d4 push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 114315d9 call ebx */
  call_ind((uint32_t)(EBX), 0x114315dbu);
  /* 114315db push 8 */
  push32((uint32_t)(0x8u));
  /* 114315dd push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 114315e2 call ebx */
  call_ind((uint32_t)(EBX), 0x114315e4u);
  /* 114315e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 114315e6 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 114315eb call ebx */
  call_ind((uint32_t)(EBX), 0x114315edu);
  /* 114315ed push 8 */
  push32((uint32_t)(0x8u));
  /* 114315ef push 0x11437988 */
  push32((uint32_t)(0x11437988u));
  /* 114315f4 call ebx */
  call_ind((uint32_t)(EBX), 0x114315f6u);
  /* 114315f6 push 0x114370c4 */
  push32((uint32_t)(0x114370c4u));
  /* 114315fb push 0x11437a58 */
  push32((uint32_t)(0x11437a58u));
  /* 11431600 call esi */
  call_ind((uint32_t)(ESI), 0x11431602u);
  /* 11431602 push 0x114370ac */
  push32((uint32_t)(0x114370acu));
  /* 11431607 push 0x11437a70 */
  push32((uint32_t)(0x11437a70u));
  /* 1143160c call esi */
  call_ind((uint32_t)(ESI), 0x1143160eu);
  /* 1143160e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431611 push 0x11437098 */
  push32((uint32_t)(0x11437098u));
  /* 11431616 push 0x11437a80 */
  push32((uint32_t)(0x11437a80u));
  /* 1143161b call esi */
  call_ind((uint32_t)(ESI), 0x1143161du);
  /* 1143161d push 0x11437084 */
  push32((uint32_t)(0x11437084u));
  /* 11431622 push 0x11437a90 */
  push32((uint32_t)(0x11437a90u));
  /* 11431627 call esi */
  call_ind((uint32_t)(ESI), 0x11431629u);
  /* 11431629 push 0x11437070 */
  push32((uint32_t)(0x11437070u));
  /* 1143162e push 0x11437aa0 */
  push32((uint32_t)(0x11437aa0u));
  /* 11431633 call esi */
  call_ind((uint32_t)(ESI), 0x11431635u);
  /* 11431635 push 0x1143705c */
  push32((uint32_t)(0x1143705cu));
  /* 1143163a push 0x11437ab8 */
  push32((uint32_t)(0x11437ab8u));
  /* 1143163f call esi */
  call_ind((uint32_t)(ESI), 0x11431641u);
  /* 11431641 push 0x11437970 */
  push32((uint32_t)(0x11437970u));
  /* 11431646 call edi */
  call_ind((uint32_t)(EDI), 0x11431648u);
  /* 11431648 push 0x11437050 */
  push32((uint32_t)(0x11437050u));
  /* 1143164d push 0x11437b10 */
  push32((uint32_t)(0x11437b10u));
  /* 11431652 call esi */
  call_ind((uint32_t)(ESI), 0x11431654u);
  /* 11431654 push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 11431659 call edi */
  call_ind((uint32_t)(EDI), 0x1143165bu);
  /* 1143165b push 0x1143703c */
  push32((uint32_t)(0x1143703cu));
  /* 11431660 push 0x114377f0 */
  push32((uint32_t)(0x114377f0u));
  /* 11431665 call esi */
  call_ind((uint32_t)(ESI), 0x11431667u);
  /* 11431667 push 8 */
  push32((uint32_t)(0x8u));
  /* 11431669 push 0x11437970 */
  push32((uint32_t)(0x11437970u));
  /* 1143166e call ebx */
  call_ind((uint32_t)(EBX), 0x11431670u);
  /* 11431670 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431673 push 8 */
  push32((uint32_t)(0x8u));
  /* 11431675 push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 1143167a call ebx */
  call_ind((uint32_t)(EBX), 0x1143167cu);
  /* 1143167c push 0x1143714c */
  push32((uint32_t)(0x1143714cu));
  /* 11431681 push 0x11437898 */
  push32((uint32_t)(0x11437898u));
  /* 11431686 call ebp */
  call_ind((uint32_t)(EBP), 0x11431688u);
  /* 11431688 push 0x11437030 */
  push32((uint32_t)(0x11437030u));
  /* 1143168d push 0x11437850 */
  push32((uint32_t)(0x11437850u));
  /* 11431692 call ebp */
  call_ind((uint32_t)(EBP), 0x11431694u);
  /* 11431694 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431697 pop edi */
  EDI = (pop32());
  /* 11431698 pop esi */
  ESI = (pop32());
  /* 11431699 pop ebp */
  EBP = (pop32());
  /* 1143169a pop ebx */
  EBX = (pop32());
  /* 1143169b ret  */
  ESPCHK(0x11431039u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x1143169c (7454 bytes, 2361 insns) */
void f_1143169c(void) {
  FTRACE(0x1143169cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143169c push ecx */
  push32((uint32_t)(ECX));
  /* 1143169d push ebx */
  push32((uint32_t)(EBX));
  /* 1143169e push ebp */
  push32((uint32_t)(EBP));
  /* 1143169f push esi */
  push32((uint32_t)(ESI));
  /* 114316a0 push edi */
  push32((uint32_t)(EDI));
  /* 114316a1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 114316a3 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114316a9u);
  /* 114316a9 mov esi, dword ptr [0x114360b0] */
  ESI = (r32((uint32_t)(0x114360b0)));
  /* 114316af mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
  /* 114316b5 pop ecx */
  ECX = (pop32());
  /* 114316b6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 114316b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114316ba test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114316bc pop ebx */
  EBX = (pop32());
  /* 114316bd je 0x11432004 */
  if (C.zf) goto L_11432004;
  /* 114316c3 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 114316c8 call dword ptr [0x114360c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c0))), 0x114316ceu);
  /* 114316ce push edi */
  push32((uint32_t)(EDI));
  /* 114316cf push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 114316d4 call esi */
  call_ind((uint32_t)(ESI), 0x114316d6u);
  /* 114316d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114316d8 call dword ptr [0x114360b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b8))), 0x114316deu);
  /* 114316de push edi */
  push32((uint32_t)(EDI));
  /* 114316df push 0x11437968 */
  push32((uint32_t)(0x11437968u));
  /* 114316e4 call esi */
  call_ind((uint32_t)(ESI), 0x114316e6u);
  /* 114316e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114316e8 call dword ptr [0x114360b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b8))), 0x114316eeu);
  /* 114316ee push edi */
  push32((uint32_t)(EDI));
  /* 114316ef push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 114316f4 call esi */
  call_ind((uint32_t)(ESI), 0x114316f6u);
  /* 114316f6 push ebx */
  push32((uint32_t)(EBX));
  /* 114316f7 push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 114316fc call esi */
  call_ind((uint32_t)(ESI), 0x114316feu);
  /* 114316fe push edi */
  push32((uint32_t)(EDI));
  /* 114316ff push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 11431704 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431706 call dword ptr [0x114360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c8))), 0x1143170cu);
  /* 1143170c push edi */
  push32((uint32_t)(EDI));
  /* 1143170d push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11431712 call esi */
  call_ind((uint32_t)(ESI), 0x11431714u);
  /* 11431714 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431717 push edi */
  push32((uint32_t)(EDI));
  /* 11431718 push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 1143171d push 2 */
  push32((uint32_t)(0x2u));
  /* 1143171f call dword ptr [0x114360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c8))), 0x11431725u);
  /* 11431725 push 0xfe */
  push32((uint32_t)(0xfeu));
  /* 1143172a push 2 */
  push32((uint32_t)(0x2u));
  /* 1143172c call dword ptr [0x114360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360cc))), 0x11431732u);
  /* 11431732 push 0xff */
  push32((uint32_t)(0xffu));
  /* 11431737 push 3 */
  push32((uint32_t)(0x3u));
  /* 11431739 call dword ptr [0x114360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360cc))), 0x1143173fu);
  /* 1143173f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11431744 push 4 */
  push32((uint32_t)(0x4u));
  /* 11431746 call dword ptr [0x114360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360cc))), 0x1143174cu);
  /* 1143174c push 8 */
  push32((uint32_t)(0x8u));
  /* 1143174e push 5 */
  push32((uint32_t)(0x5u));
  /* 11431750 call dword ptr [0x114360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360cc))), 0x11431756u);
  /* 11431756 push edi */
  push32((uint32_t)(EDI));
  /* 11431757 call dword ptr [0x114360c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c4))), 0x1143175du);
  /* 1143175d push 0xa */
  push32((uint32_t)(0xau));
  /* 1143175f push 0xa */
  push32((uint32_t)(0xau));
  /* 11431761 mov dword ptr [0x114377b8], eax */
  w32((uint32_t)(0x114377b8), (EAX));
  /* 11431766 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143176cu);
  /* 1143176c mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 11431771 push 6 */
  push32((uint32_t)(0x6u));
  /* 11431773 lea ecx, [eax + 5] */
  ECX = ((uint32_t)(EAX + 0x5));
  /* 11431776 mov dword ptr [0x11437998], ecx */
  w32((uint32_t)(0x11437998), (ECX));
  /* 1143177c pop ecx */
  ECX = (pop32());
  /* 1143177d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143177f imul ecx, ecx, 0x55f0 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x55f0u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11431785 push ecx */
  push32((uint32_t)(ECX));
  /* 11431786 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11431788 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143178eu);
  /* 1143178e mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 11431793 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431796 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11431797 imul eax, eax, 0xc350 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc350u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1143179d push eax */
  push32((uint32_t)(EAX));
  /* 1143179e push edi */
  push32((uint32_t)(EDI));
  /* 1143179f push 3 */
  push32((uint32_t)(0x3u));
  /* 114317a1 call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x114317a7u);
  /* 114317a7 mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 114317ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114317ad imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114317b3 push eax */
  push32((uint32_t)(EAX));
  /* 114317b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317b8 call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x114317beu);
  /* 114317be mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 114317c3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114317c4 imul eax, eax, 0x1e848 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1e848u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114317ca push eax */
  push32((uint32_t)(EAX));
  /* 114317cb push ebx */
  push32((uint32_t)(EBX));
  /* 114317cc push 3 */
  push32((uint32_t)(0x3u));
  /* 114317ce call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x114317d4u);
  /* 114317d4 push edi */
  push32((uint32_t)(EDI));
  /* 114317d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317d7 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x114317ddu);
  /* 114317dd push eax */
  push32((uint32_t)(EAX));
  /* 114317de push 2 */
  push32((uint32_t)(0x2u));
  /* 114317e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317e2 call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x114317e8u);
  /* 114317e8 push edi */
  push32((uint32_t)(EDI));
  /* 114317e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317eb call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x114317f1u);
  /* 114317f1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114317f4 push eax */
  push32((uint32_t)(EAX));
  /* 114317f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 114317f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 114317f9 call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x114317ffu);
  /* 114317ff push edi */
  push32((uint32_t)(EDI));
  /* 11431800 push 3 */
  push32((uint32_t)(0x3u));
  /* 11431802 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11431808u);
  /* 11431808 push eax */
  push32((uint32_t)(EAX));
  /* 11431809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1143180b push 3 */
  push32((uint32_t)(0x3u));
  /* 1143180d call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x11431813u);
  /* 11431813 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11431818 push 3 */
  push32((uint32_t)(0x3u));
  /* 1143181a push ebx */
  push32((uint32_t)(EBX));
  /* 1143181b call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x11431821u);
  /* 11431821 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 11431826 push ebx */
  push32((uint32_t)(EBX));
  /* 11431827 push ebx */
  push32((uint32_t)(EBX));
  /* 11431828 call dword ptr [0x114360d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d8))), 0x1143182eu);
  /* 1143182e mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 11431833 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431836 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431837 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431838 je 0x11431894 */
  if (C.zf) goto L_11431894;
  /* 1143183a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1143183b jne 0x11431917 */
  if (!C.zf) goto L_11431917;
  /* 11431841 push 0x11437444 */
  push32((uint32_t)(0x11437444u));
  /* 11431846 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 1143184b call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431851u);
  /* 11431851 push 0x1143743c */
  push32((uint32_t)(0x1143743cu));
  /* 11431856 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 1143185b call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431861u);
  /* 11431861 push 0x11437434 */
  push32((uint32_t)(0x11437434u));
  /* 11431866 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 1143186b call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431871u);
  /* 11431871 push 0x1143742c */
  push32((uint32_t)(0x1143742cu));
  /* 11431876 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 1143187b call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431881u);
  /* 11431881 push 0x11437424 */
  push32((uint32_t)(0x11437424u));
  /* 11431886 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 1143188b call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431891u);
  /* 11431891 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11431894:;
  /* 11431894 push 0x11437444 */
  push32((uint32_t)(0x11437444u));
  /* 11431899 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 1143189e call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318a4u);
  /* 114318a4 push 0x1143741c */
  push32((uint32_t)(0x1143741cu));
  /* 114318a9 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 114318ae call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318b4u);
  /* 114318b4 push 0x11437414 */
  push32((uint32_t)(0x11437414u));
  /* 114318b9 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 114318be call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318c4u);
  /* 114318c4 push 0x1143743c */
  push32((uint32_t)(0x1143743cu));
  /* 114318c9 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 114318ce call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318d4u);
  /* 114318d4 push 0x11437434 */
  push32((uint32_t)(0x11437434u));
  /* 114318d9 push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 114318de call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318e4u);
  /* 114318e4 push 0x1143740c */
  push32((uint32_t)(0x1143740cu));
  /* 114318e9 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 114318ee call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114318f4u);
  /* 114318f4 push 0x11437404 */
  push32((uint32_t)(0x11437404u));
  /* 114318f9 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 114318fe call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431904u);
  /* 11431904 push 0x114373fc */
  push32((uint32_t)(0x114373fcu));
  /* 11431909 push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 1143190e call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431914u);
  /* 11431914 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11431917:;
  /* 11431917 push 0x114373f4 */
  push32((uint32_t)(0x114373f4u));
  /* 1143191c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431921 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431927u);
  /* 11431927 push 0x114373ec */
  push32((uint32_t)(0x114373ecu));
  /* 1143192c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431931 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431937u);
  /* 11431937 push 0x114373ec */
  push32((uint32_t)(0x114373ecu));
  /* 1143193c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431941 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431947u);
  /* 11431947 push 0x1143741c */
  push32((uint32_t)(0x1143741cu));
  /* 1143194c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431951 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431957u);
  /* 11431957 push 0x114373e4 */
  push32((uint32_t)(0x114373e4u));
  /* 1143195c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431961 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431967u);
  /* 11431967 push 0x114373dc */
  push32((uint32_t)(0x114373dcu));
  /* 1143196c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431971 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431977u);
  /* 11431977 push 0x1143743c */
  push32((uint32_t)(0x1143743cu));
  /* 1143197c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431981 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431987u);
  /* 11431987 push 0x11437434 */
  push32((uint32_t)(0x11437434u));
  /* 1143198c push 0x114372d0 */
  push32((uint32_t)(0x114372d0u));
  /* 11431991 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x11431997u);
  /* 11431997 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143199a push 0x114373d4 */
  push32((uint32_t)(0x114373d4u));
  /* 1143199f push 0x1143729c */
  push32((uint32_t)(0x1143729cu));
  /* 114319a4 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114319aau);
  /* 114319aa push 0x114373cc */
  push32((uint32_t)(0x114373ccu));
  /* 114319af push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 114319b4 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114319bau);
  /* 114319ba push 0x114373c4 */
  push32((uint32_t)(0x114373c4u));
  /* 114319bf push 0x114372a8 */
  push32((uint32_t)(0x114372a8u));
  /* 114319c4 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114319cau);
  /* 114319ca push 0x114373bc */
  push32((uint32_t)(0x114373bcu));
  /* 114319cf push 0x114372d4 */
  push32((uint32_t)(0x114372d4u));
  /* 114319d4 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114319dau);
  /* 114319da push 0x114373b4 */
  push32((uint32_t)(0x114373b4u));
  /* 114319df push 0x114372d4 */
  push32((uint32_t)(0x114372d4u));
  /* 114319e4 call dword ptr [0x114360e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e0))), 0x114319eau);
  /* 114319ea push edi */
  push32((uint32_t)(EDI));
  /* 114319eb push 0x114379c8 */
  push32((uint32_t)(0x114379c8u));
  /* 114319f0 call esi */
  call_ind((uint32_t)(ESI), 0x114319f2u);
  /* 114319f2 push 3 */
  push32((uint32_t)(0x3u));
  /* 114319f4 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x114319fau);
  /* 114319fa mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 114319ff add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431a02 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11431a04 je 0x11431bf5 */
  if (C.zf) goto L_11431bf5;
  /* 11431a0a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431a0b je 0x11431b2d */
  if (C.zf) goto L_11431b2d;
  /* 11431a11 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431a12 je 0x11431aa2 */
  if (C.zf) goto L_11431aa2;
  /* 11431a18 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11431a19 jne 0x11431ce8 */
  if (!C.zf) goto L_11431ce8;
  /* 11431a1f push edi */
  push32((uint32_t)(EDI));
  /* 11431a20 push 0x11437858 */
  push32((uint32_t)(0x11437858u));
  /* 11431a25 call esi */
  call_ind((uint32_t)(ESI), 0x11431a27u);
  /* 11431a27 push ebx */
  push32((uint32_t)(EBX));
  /* 11431a28 push 0x11437860 */
  push32((uint32_t)(0x11437860u));
  /* 11431a2d call esi */
  call_ind((uint32_t)(ESI), 0x11431a2fu);
  /* 11431a2f push ebx */
  push32((uint32_t)(EBX));
  /* 11431a30 push 0x11437868 */
  push32((uint32_t)(0x11437868u));
  /* 11431a35 call esi */
  call_ind((uint32_t)(ESI), 0x11431a37u);
  /* 11431a37 push ebx */
  push32((uint32_t)(EBX));
  /* 11431a38 push 0x11437ab0 */
  push32((uint32_t)(0x11437ab0u));
  /* 11431a3d call esi */
  call_ind((uint32_t)(ESI), 0x11431a3fu);
  /* 11431a3f push ebx */
  push32((uint32_t)(EBX));
  /* 11431a40 push 0x11437ac8 */
  push32((uint32_t)(0x11437ac8u));
  /* 11431a45 call esi */
  call_ind((uint32_t)(ESI), 0x11431a47u);
  /* 11431a47 push ebx */
  push32((uint32_t)(EBX));
  /* 11431a48 push 0x11437ad8 */
  push32((uint32_t)(0x11437ad8u));
  /* 11431a4d call esi */
  call_ind((uint32_t)(ESI), 0x11431a4fu);
  /* 11431a4f push ebx */
  push32((uint32_t)(EBX));
  /* 11431a50 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431a56u);
  /* 11431a56 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431a5b push 0x11437870 */
  push32((uint32_t)(0x11437870u));
  /* 11431a60 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431a66u);
  /* 11431a66 push 0x114373a8 */
  push32((uint32_t)(0x114373a8u));
  /* 11431a6b push 0x11437a38 */
  push32((uint32_t)(0x11437a38u));
  /* 11431a70 mov dword ptr [0x114377e0], 0x64 */
  w32((uint32_t)(0x114377e0), (0x64u));
  /* 11431a7a mov dword ptr [0x114379d8], 0x48 */
  w32((uint32_t)(0x114379d8), (0x48u));
  /* 11431a84 call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431a8au);
  /* 11431a8a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431a8d push 0x114373a0 */
  push32((uint32_t)(0x114373a0u));
  /* 11431a92 push 0x11437a48 */
  push32((uint32_t)(0x11437a48u));
  /* 11431a97 call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431a9du);
  /* 11431a9d jmp 0x11431ce6 */
  goto L_11431ce6;
L_11431aa2:;
  /* 11431aa2 push edi */
  push32((uint32_t)(EDI));
  /* 11431aa3 push 0x11437858 */
  push32((uint32_t)(0x11437858u));
  /* 11431aa8 call esi */
  call_ind((uint32_t)(ESI), 0x11431aaau);
  /* 11431aaa push ebx */
  push32((uint32_t)(EBX));
  /* 11431aab push 0x11437860 */
  push32((uint32_t)(0x11437860u));
  /* 11431ab0 call esi */
  call_ind((uint32_t)(ESI), 0x11431ab2u);
  /* 11431ab2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ab3 push 0x11437870 */
  push32((uint32_t)(0x11437870u));
  /* 11431ab8 call esi */
  call_ind((uint32_t)(ESI), 0x11431abau);
  /* 11431aba push ebx */
  push32((uint32_t)(EBX));
  /* 11431abb push 0x11437ab0 */
  push32((uint32_t)(0x11437ab0u));
  /* 11431ac0 call esi */
  call_ind((uint32_t)(ESI), 0x11431ac2u);
  /* 11431ac2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ac3 push 0x11437ac8 */
  push32((uint32_t)(0x11437ac8u));
  /* 11431ac8 call esi */
  call_ind((uint32_t)(ESI), 0x11431acau);
  /* 11431aca push ebx */
  push32((uint32_t)(EBX));
  /* 11431acb push 0x11437ae8 */
  push32((uint32_t)(0x11437ae8u));
  /* 11431ad0 call esi */
  call_ind((uint32_t)(ESI), 0x11431ad2u);
  /* 11431ad2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ad3 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431ad9u);
  /* 11431ad9 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431ade push 0x11437868 */
  push32((uint32_t)(0x11437868u));
  /* 11431ae3 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431ae9u);
  /* 11431ae9 push 0x114373a8 */
  push32((uint32_t)(0x114373a8u));
  /* 11431aee push 0x11437a38 */
  push32((uint32_t)(0x11437a38u));
  /* 11431af3 mov dword ptr [0x114377e0], 0x64 */
  w32((uint32_t)(0x114377e0), (0x64u));
  /* 11431afd mov dword ptr [0x114379d8], 0x48 */
  w32((uint32_t)(0x114379d8), (0x48u));
  /* 11431b07 call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431b0du);
  /* 11431b0d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431b10 push 0x114373a0 */
  push32((uint32_t)(0x114373a0u));
  /* 11431b15 push 0x11437a48 */
  push32((uint32_t)(0x11437a48u));
  /* 11431b1a call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431b20u);
  /* 11431b20 push edi */
  push32((uint32_t)(EDI));
  /* 11431b21 push 0x35 */
  push32((uint32_t)(0x35u));
L_11431b23:;
  /* 11431b23 call ebp */
  call_ind((uint32_t)(EBP), 0x11431b25u);
  /* 11431b25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431b28 jmp 0x11431ce8 */
  goto L_11431ce8;
L_11431b2d:;
  /* 11431b2d push edi */
  push32((uint32_t)(EDI));
  /* 11431b2e push 0x11437910 */
  push32((uint32_t)(0x11437910u));
  /* 11431b33 call esi */
  call_ind((uint32_t)(ESI), 0x11431b35u);
  /* 11431b35 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b36 push 0x11437b38 */
  push32((uint32_t)(0x11437b38u));
  /* 11431b3b call esi */
  call_ind((uint32_t)(ESI), 0x11431b3du);
  /* 11431b3d push ebx */
  push32((uint32_t)(EBX));
  /* 11431b3e push 0x11437b40 */
  push32((uint32_t)(0x11437b40u));
  /* 11431b43 call esi */
  call_ind((uint32_t)(ESI), 0x11431b45u);
  /* 11431b45 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431b47 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431b4du);
  /* 11431b4d push edi */
  push32((uint32_t)(EDI));
  /* 11431b4e push 0x11437888 */
  push32((uint32_t)(0x11437888u));
  /* 11431b53 call esi */
  call_ind((uint32_t)(ESI), 0x11431b55u);
  /* 11431b55 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b56 push 0x114378c0 */
  push32((uint32_t)(0x114378c0u));
  /* 11431b5b call esi */
  call_ind((uint32_t)(ESI), 0x11431b5du);
  /* 11431b5d push ebx */
  push32((uint32_t)(EBX));
  /* 11431b5e push 0x11437858 */
  push32((uint32_t)(0x11437858u));
  /* 11431b63 call esi */
  call_ind((uint32_t)(ESI), 0x11431b65u);
  /* 11431b65 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b66 push 0x11437868 */
  push32((uint32_t)(0x11437868u));
  /* 11431b6b call esi */
  call_ind((uint32_t)(ESI), 0x11431b6du);
  /* 11431b6d push ebx */
  push32((uint32_t)(EBX));
  /* 11431b6e push 0x11437870 */
  push32((uint32_t)(0x11437870u));
  /* 11431b73 call esi */
  call_ind((uint32_t)(ESI), 0x11431b75u);
  /* 11431b75 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431b78 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b79 push 0x11437ab0 */
  push32((uint32_t)(0x11437ab0u));
  /* 11431b7e call esi */
  call_ind((uint32_t)(ESI), 0x11431b80u);
  /* 11431b80 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b81 push 0x11437ad8 */
  push32((uint32_t)(0x11437ad8u));
  /* 11431b86 call esi */
  call_ind((uint32_t)(ESI), 0x11431b88u);
  /* 11431b88 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b89 push 0x11437ae8 */
  push32((uint32_t)(0x11437ae8u));
  /* 11431b8e call esi */
  call_ind((uint32_t)(ESI), 0x11431b90u);
  /* 11431b90 push ebx */
  push32((uint32_t)(EBX));
  /* 11431b91 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431b97u);
  /* 11431b97 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431b9c push 0x11437860 */
  push32((uint32_t)(0x11437860u));
  /* 11431ba1 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431ba7u);
  /* 11431ba7 push 0x11437030 */
  push32((uint32_t)(0x11437030u));
  /* 11431bac push 0x11437a38 */
  push32((uint32_t)(0x11437a38u));
  /* 11431bb1 mov dword ptr [0x114377e0], 0x28 */
  w32((uint32_t)(0x114377e0), (0x28u));
  /* 11431bbb mov dword ptr [0x114379d8], 0x24 */
  w32((uint32_t)(0x114379d8), (0x24u));
  /* 11431bc5 call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431bcbu);
  /* 11431bcb push 0x11437398 */
  push32((uint32_t)(0x11437398u));
  /* 11431bd0 push 0x11437a48 */
  push32((uint32_t)(0x11437a48u));
  /* 11431bd5 call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431bdbu);
  /* 11431bdb push edi */
  push32((uint32_t)(EDI));
  /* 11431bdc push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11431bde call ebp */
  call_ind((uint32_t)(EBP), 0x11431be0u);
  /* 11431be0 push edi */
  push32((uint32_t)(EDI));
  /* 11431be1 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11431be3 call ebp */
  call_ind((uint32_t)(EBP), 0x11431be5u);
  /* 11431be5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431be8 push edi */
  push32((uint32_t)(EDI));
  /* 11431be9 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11431beb call ebp */
  call_ind((uint32_t)(EBP), 0x11431bedu);
  /* 11431bed push edi */
  push32((uint32_t)(EDI));
  /* 11431bee push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11431bf0 jmp 0x11431b23 */
  goto L_11431b23;
L_11431bf5:;
  /* 11431bf5 push edi */
  push32((uint32_t)(EDI));
  /* 11431bf6 push 0x11437910 */
  push32((uint32_t)(0x11437910u));
  /* 11431bfb call esi */
  call_ind((uint32_t)(ESI), 0x11431bfdu);
  /* 11431bfd push ebx */
  push32((uint32_t)(EBX));
  /* 11431bfe push 0x11437b38 */
  push32((uint32_t)(0x11437b38u));
  /* 11431c03 call esi */
  call_ind((uint32_t)(ESI), 0x11431c05u);
  /* 11431c05 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c06 push 0x11437b40 */
  push32((uint32_t)(0x11437b40u));
  /* 11431c0b call esi */
  call_ind((uint32_t)(ESI), 0x11431c0du);
  /* 11431c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11431c0f call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431c15u);
  /* 11431c15 push edi */
  push32((uint32_t)(EDI));
  /* 11431c16 push 0x11437888 */
  push32((uint32_t)(0x11437888u));
  /* 11431c1b call esi */
  call_ind((uint32_t)(ESI), 0x11431c1du);
  /* 11431c1d push ebx */
  push32((uint32_t)(EBX));
  /* 11431c1e push 0x114378c0 */
  push32((uint32_t)(0x114378c0u));
  /* 11431c23 call esi */
  call_ind((uint32_t)(ESI), 0x11431c25u);
  /* 11431c25 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c26 push 0x114378e8 */
  push32((uint32_t)(0x114378e8u));
  /* 11431c2b call esi */
  call_ind((uint32_t)(ESI), 0x11431c2du);
  /* 11431c2d push ebx */
  push32((uint32_t)(EBX));
  /* 11431c2e push 0x11437878 */
  push32((uint32_t)(0x11437878u));
  /* 11431c33 call esi */
  call_ind((uint32_t)(ESI), 0x11431c35u);
  /* 11431c35 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c36 push 0x11437860 */
  push32((uint32_t)(0x11437860u));
  /* 11431c3b call esi */
  call_ind((uint32_t)(ESI), 0x11431c3du);
  /* 11431c3d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431c40 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c41 push 0x11437868 */
  push32((uint32_t)(0x11437868u));
  /* 11431c46 call esi */
  call_ind((uint32_t)(ESI), 0x11431c48u);
  /* 11431c48 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c49 push 0x11437870 */
  push32((uint32_t)(0x11437870u));
  /* 11431c4e call esi */
  call_ind((uint32_t)(ESI), 0x11431c50u);
  /* 11431c50 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c51 push 0x11437ac8 */
  push32((uint32_t)(0x11437ac8u));
  /* 11431c56 call esi */
  call_ind((uint32_t)(ESI), 0x11431c58u);
  /* 11431c58 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c59 push 0x11437ad8 */
  push32((uint32_t)(0x11437ad8u));
  /* 11431c5e call esi */
  call_ind((uint32_t)(ESI), 0x11431c60u);
  /* 11431c60 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c61 push 0x11437ae8 */
  push32((uint32_t)(0x11437ae8u));
  /* 11431c66 call esi */
  call_ind((uint32_t)(ESI), 0x11431c68u);
  /* 11431c68 push ebx */
  push32((uint32_t)(EBX));
  /* 11431c69 call dword ptr [0x114360e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e4))), 0x11431c6fu);
  /* 11431c6f push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431c74 push 0x11437858 */
  push32((uint32_t)(0x11437858u));
  /* 11431c79 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431c7fu);
  /* 11431c7f push 0x1143738c */
  push32((uint32_t)(0x1143738cu));
  /* 11431c84 push 0x11437a38 */
  push32((uint32_t)(0x11437a38u));
  /* 11431c89 mov dword ptr [0x114377e0], 0x14 */
  w32((uint32_t)(0x114377e0), (0x14u));
  /* 11431c93 mov dword ptr [0x114379d8], 0x24 */
  w32((uint32_t)(0x114379d8), (0x24u));
  /* 11431c9d call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431ca3u);
  /* 11431ca3 push 0x11437398 */
  push32((uint32_t)(0x11437398u));
  /* 11431ca8 push 0x11437a48 */
  push32((uint32_t)(0x11437a48u));
  /* 11431cad call dword ptr [0x11436158] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436158))), 0x11431cb3u);
  /* 11431cb3 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431cb6 push edi */
  push32((uint32_t)(EDI));
  /* 11431cb7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11431cb9 call ebp */
  call_ind((uint32_t)(EBP), 0x11431cbbu);
  /* 11431cbb push edi */
  push32((uint32_t)(EDI));
  /* 11431cbc push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11431cbe call ebp */
  call_ind((uint32_t)(EBP), 0x11431cc0u);
  /* 11431cc0 push edi */
  push32((uint32_t)(EDI));
  /* 11431cc1 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11431cc3 call ebp */
  call_ind((uint32_t)(EBP), 0x11431cc5u);
  /* 11431cc5 push edi */
  push32((uint32_t)(EDI));
  /* 11431cc6 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11431cc8 call ebp */
  call_ind((uint32_t)(EBP), 0x11431ccau);
  /* 11431cca push edi */
  push32((uint32_t)(EDI));
  /* 11431ccb push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11431ccd call ebp */
  call_ind((uint32_t)(EBP), 0x11431ccfu);
  /* 11431ccf push edi */
  push32((uint32_t)(EDI));
  /* 11431cd0 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11431cd2 call ebp */
  call_ind((uint32_t)(EBP), 0x11431cd4u);
  /* 11431cd4 push edi */
  push32((uint32_t)(EDI));
  /* 11431cd5 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11431cd7 call ebp */
  call_ind((uint32_t)(EBP), 0x11431cd9u);
  /* 11431cd9 push edi */
  push32((uint32_t)(EDI));
  /* 11431cda push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11431cdc call ebp */
  call_ind((uint32_t)(EBP), 0x11431cdeu);
  /* 11431cde add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431ce1 push edi */
  push32((uint32_t)(EDI));
  /* 11431ce2 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11431ce4 call ebp */
  call_ind((uint32_t)(EBP), 0x11431ce6u);
L_11431ce6:;
  /* 11431ce6 pop ecx */
  ECX = (pop32());
  /* 11431ce7 pop ecx */
  ECX = (pop32());
L_11431ce8:;
  /* 11431ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11431ce9 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431cee call esi */
  call_ind((uint32_t)(ESI), 0x11431cf0u);
  /* 11431cf0 push edi */
  push32((uint32_t)(EDI));
  /* 11431cf1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11431cf3 push 0x114378b0 */
  push32((uint32_t)(0x114378b0u));
  /* 11431cf8 push ebx */
  push32((uint32_t)(EBX));
  /* 11431cf9 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11431cffu);
  /* 11431cff push ebx */
  push32((uint32_t)(EBX));
  /* 11431d00 push ebx */
  push32((uint32_t)(EBX));
  /* 11431d01 call dword ptr [0x114360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f0))), 0x11431d07u);
  /* 11431d07 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431d0a cmp dword ptr [0x114377b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x114377b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d10 je 0x11431d4b */
  if (C.zf) goto L_11431d4b;
  /* 11431d12 cmp dword ptr [0x114377e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114377e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d18 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431d1e jle 0x11431d4b */
  if ((C.zf||C.sf!=C.of)) goto L_11431d4b;
L_11431d20:;
  /* 11431d20 push ebx */
  push32((uint32_t)(EBX));
  /* 11431d21 push 0x114378d8 */
  push32((uint32_t)(0x114378d8u));
  /* 11431d26 push 0x11437a58 */
  push32((uint32_t)(0x11437a58u));
  /* 11431d2b push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431d30 call 0x11431012 */
  push32(0x11431d35u); f_11431012();
  /* 11431d35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431d38 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431d3e mov eax, dword ptr [0x114377ac] */
  EAX = (r32((uint32_t)(0x114377ac)));
  /* 11431d43 cmp eax, dword ptr [0x114377e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d49 jl 0x11431d20 */
  if ((C.sf!=C.of)) goto L_11431d20;
L_11431d4b:;
  /* 11431d4b mov eax, dword ptr [0x114379d8] */
  EAX = (r32((uint32_t)(0x114379d8)));
  /* 11431d50 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431d56 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d58 jle 0x11431d86 */
  if ((C.zf||C.sf!=C.of)) goto L_11431d86;
L_11431d5a:;
  /* 11431d5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11431d5c push 0x11437a18 */
  push32((uint32_t)(0x11437a18u));
  /* 11431d61 push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 11431d66 push 0x11437838 */
  push32((uint32_t)(0x11437838u));
  /* 11431d6b call 0x11431012 */
  push32(0x11431d70u); f_11431012();
  /* 11431d70 mov eax, dword ptr [0x114379d8] */
  EAX = (r32((uint32_t)(0x114379d8)));
  /* 11431d75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431d78 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431d7e cmp dword ptr [0x114377ac], eax */
  { uint32_t _a=(r32((uint32_t)(0x114377ac))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d84 jl 0x11431d5a */
  if ((C.sf!=C.of)) goto L_11431d5a;
L_11431d86:;
  /* 11431d86 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431d88 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431d8e jle 0x11431dbc */
  if ((C.zf||C.sf!=C.of)) goto L_11431dbc;
L_11431d90:;
  /* 11431d90 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431d92 push 0x11437a18 */
  push32((uint32_t)(0x11437a18u));
  /* 11431d97 push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 11431d9c push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11431da1 call 0x11431012 */
  push32(0x11431da6u); f_11431012();
  /* 11431da6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431da9 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431daf mov eax, dword ptr [0x114377ac] */
  EAX = (r32((uint32_t)(0x114377ac)));
  /* 11431db4 cmp eax, dword ptr [0x114379d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114379d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431dba jl 0x11431d90 */
  if ((C.sf!=C.of)) goto L_11431d90;
L_11431dbc:;
  /* 11431dbc cmp dword ptr [0x114377e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114377e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431dc2 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431dc8 jle 0x11431e05 */
  if ((C.zf||C.sf!=C.of)) goto L_11431e05;
L_11431dca:;
  /* 11431dca push ebx */
  push32((uint32_t)(EBX));
  /* 11431dcb push 0x114378d8 */
  push32((uint32_t)(0x114378d8u));
  /* 11431dd0 push 0x11437a58 */
  push32((uint32_t)(0x11437a58u));
  /* 11431dd5 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431dda call 0x11431012 */
  push32(0x11431ddfu); f_11431012();
  /* 11431ddf push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 11431de4 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431de9 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431defu);
  /* 11431def add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431df2 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431df8 mov eax, dword ptr [0x114377ac] */
  EAX = (r32((uint32_t)(0x114377ac)));
  /* 11431dfd cmp eax, dword ptr [0x114377e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431e03 jl 0x11431dca */
  if ((C.sf!=C.of)) goto L_11431dca;
L_11431e05:;
  /* 11431e05 push edi */
  push32((uint32_t)(EDI));
  /* 11431e06 push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 11431e0b call esi */
  call_ind((uint32_t)(ESI), 0x11431e0du);
  /* 11431e0d push edi */
  push32((uint32_t)(EDI));
  /* 11431e0e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11431e10 push 0x114378b8 */
  push32((uint32_t)(0x114378b8u));
  /* 11431e15 push ebx */
  push32((uint32_t)(EBX));
  /* 11431e16 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11431e1cu);
  /* 11431e1c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431e1f cmp dword ptr [0x114377e0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114377e0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431e25 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431e2b jle 0x11431e68 */
  if ((C.zf||C.sf!=C.of)) goto L_11431e68;
L_11431e2d:;
  /* 11431e2d push ebx */
  push32((uint32_t)(EBX));
  /* 11431e2e push 0x114378d8 */
  push32((uint32_t)(0x114378d8u));
  /* 11431e33 push 0x11437a58 */
  push32((uint32_t)(0x11437a58u));
  /* 11431e38 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431e3d call 0x11431012 */
  push32(0x11431e42u); f_11431012();
  /* 11431e42 push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 11431e47 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431e4c call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431e52u);
  /* 11431e52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431e55 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431e5b mov eax, dword ptr [0x114377ac] */
  EAX = (r32((uint32_t)(0x114377ac)));
  /* 11431e60 cmp eax, dword ptr [0x114377e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431e66 jl 0x11431e2d */
  if ((C.sf!=C.of)) goto L_11431e2d;
L_11431e68:;
  /* 11431e68 push edi */
  push32((uint32_t)(EDI));
  /* 11431e69 push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 11431e6e call esi */
  call_ind((uint32_t)(ESI), 0x11431e70u);
  /* 11431e70 push edi */
  push32((uint32_t)(EDI));
  /* 11431e71 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11431e73 push 0x114378c8 */
  push32((uint32_t)(0x114378c8u));
  /* 11431e78 push ebx */
  push32((uint32_t)(EBX));
  /* 11431e79 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11431e7fu);
  /* 11431e7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431e82 cmp dword ptr [0x114379d8], edi */
  { uint32_t _a=(r32((uint32_t)(0x114379d8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431e88 mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11431e8e jle 0x11431ecb */
  if ((C.zf||C.sf!=C.of)) goto L_11431ecb;
L_11431e90:;
  /* 11431e90 push ebx */
  push32((uint32_t)(EBX));
  /* 11431e91 push 0x114378d8 */
  push32((uint32_t)(0x114378d8u));
  /* 11431e96 push 0x11437a70 */
  push32((uint32_t)(0x11437a70u));
  /* 11431e9b push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431ea0 call 0x11431012 */
  push32(0x11431ea5u); f_11431012();
  /* 11431ea5 push 0x11437988 */
  push32((uint32_t)(0x11437988u));
  /* 11431eaa push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11431eaf call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11431eb5u);
  /* 11431eb5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431eb8 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 11431ebe mov eax, dword ptr [0x114377ac] */
  EAX = (r32((uint32_t)(0x114377ac)));
  /* 11431ec3 cmp eax, dword ptr [0x114379d8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114379d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11431ec9 jl 0x11431e90 */
  if ((C.sf!=C.of)) goto L_11431e90;
L_11431ecb:;
  /* 11431ecb push edi */
  push32((uint32_t)(EDI));
  /* 11431ecc push 0x11437988 */
  push32((uint32_t)(0x11437988u));
  /* 11431ed1 call esi */
  call_ind((uint32_t)(ESI), 0x11431ed3u);
  /* 11431ed3 push edi */
  push32((uint32_t)(EDI));
  /* 11431ed4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11431ed6 push 0x114378d0 */
  push32((uint32_t)(0x114378d0u));
  /* 11431edb push ebx */
  push32((uint32_t)(EBX));
  /* 11431edc call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11431ee2u);
  /* 11431ee2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ee3 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ee4 call dword ptr [0x114360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f0))), 0x11431eeau);
  /* 11431eea push edi */
  push32((uint32_t)(EDI));
  /* 11431eeb push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 11431ef0 call esi */
  call_ind((uint32_t)(ESI), 0x11431ef2u);
  /* 11431ef2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431ef3 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 11431ef8 call esi */
  call_ind((uint32_t)(ESI), 0x11431efau);
  /* 11431efa push ebx */
  push32((uint32_t)(EBX));
  /* 11431efb push 0x11437848 */
  push32((uint32_t)(0x11437848u));
  /* 11431f00 call esi */
  call_ind((uint32_t)(ESI), 0x11431f02u);
  /* 11431f02 push ebx */
  push32((uint32_t)(EBX));
  /* 11431f03 push 0x114379c0 */
  push32((uint32_t)(0x114379c0u));
  /* 11431f08 call esi */
  call_ind((uint32_t)(ESI), 0x11431f0au);
  /* 11431f0a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431f0d push ebx */
  push32((uint32_t)(EBX));
  /* 11431f0e push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f10 push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 11431f15 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x11431f1bu);
  /* 11431f1b push ebx */
  push32((uint32_t)(EBX));
  /* 11431f1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f1e push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 11431f23 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x11431f29u);
  /* 11431f29 push ebx */
  push32((uint32_t)(EBX));
  /* 11431f2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f2c push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 11431f31 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x11431f37u);
  /* 11431f37 push edi */
  push32((uint32_t)(EDI));
  /* 11431f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f3a call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11431f40u);
  /* 11431f40 push edi */
  push32((uint32_t)(EDI));
  /* 11431f41 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 11431f46 call esi */
  call_ind((uint32_t)(ESI), 0x11431f48u);
  /* 11431f48 push edi */
  push32((uint32_t)(EDI));
  /* 11431f49 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11431f4b push 0x11437b50 */
  push32((uint32_t)(0x11437b50u));
  /* 11431f50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f52 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11431f58u);
  /* 11431f58 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431f5b push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f5d push edi */
  push32((uint32_t)(EDI));
  /* 11431f5e push 0x11437890 */
  push32((uint32_t)(0x11437890u));
  /* 11431f63 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f65 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11431f6bu);
  /* 11431f6b push edi */
  push32((uint32_t)(EDI));
  /* 11431f6c push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 11431f71 call esi */
  call_ind((uint32_t)(ESI), 0x11431f73u);
  /* 11431f73 push edi */
  push32((uint32_t)(EDI));
  /* 11431f74 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11431f76 push 0x11437b50 */
  push32((uint32_t)(0x11437b50u));
  /* 11431f7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f7d call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11431f83u);
  /* 11431f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f85 push edi */
  push32((uint32_t)(EDI));
  /* 11431f86 push 0x114378a0 */
  push32((uint32_t)(0x114378a0u));
  /* 11431f8b push 2 */
  push32((uint32_t)(0x2u));
  /* 11431f8d call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11431f93u);
  /* 11431f93 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11431f98 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11431f9a call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11431fa0u);
  /* 11431fa0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431fa3 push edi */
  push32((uint32_t)(EDI));
  /* 11431fa4 push 0x11437988 */
  push32((uint32_t)(0x11437988u));
  /* 11431fa9 call esi */
  call_ind((uint32_t)(ESI), 0x11431fabu);
  /* 11431fab push ebx */
  push32((uint32_t)(EBX));
  /* 11431fac push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11431fb1 call esi */
  call_ind((uint32_t)(ESI), 0x11431fb3u);
  /* 11431fb3 push ebx */
  push32((uint32_t)(EBX));
  /* 11431fb4 push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 11431fb9 call esi */
  call_ind((uint32_t)(ESI), 0x11431fbbu);
  /* 11431fbb push ebx */
  push32((uint32_t)(EBX));
  /* 11431fbc push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 11431fc1 call esi */
  call_ind((uint32_t)(ESI), 0x11431fc3u);
  /* 11431fc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11431fc4 push 0x114378e8 */
  push32((uint32_t)(0x114378e8u));
  /* 11431fc9 call esi */
  call_ind((uint32_t)(ESI), 0x11431fcbu);
  /* 11431fcb push ebx */
  push32((uint32_t)(EBX));
  /* 11431fcc call dword ptr [0x114360f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f4))), 0x11431fd2u);
  /* 11431fd2 push ebx */
  push32((uint32_t)(EBX));
  /* 11431fd3 call dword ptr [0x11436104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436104))), 0x11431fd9u);
  /* 11431fd9 push dword ptr [0x114377b8] */
  push32((uint32_t)(r32((uint32_t)(0x114377b8))));
  /* 11431fdf push ebx */
  push32((uint32_t)(EBX));
  /* 11431fe0 push edi */
  push32((uint32_t)(EDI));
  /* 11431fe1 push ebx */
  push32((uint32_t)(EBX));
  /* 11431fe2 push 0x11437380 */
  push32((uint32_t)(0x11437380u));
  /* 11431fe7 push ebx */
  push32((uint32_t)(EBX));
  /* 11431fe8 call dword ptr [0x11436108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436108))), 0x11431feeu);
  /* 11431fee add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11431ff1 push 0x11437378 */
  push32((uint32_t)(0x11437378u));
  /* 11431ff6 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x11431ffcu);
  /* 11431ffc push edi */
  push32((uint32_t)(EDI));
  /* 11431ffd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11431fff call ebp */
  call_ind((uint32_t)(EBP), 0x11432001u);
  /* 11432001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432004:;
  /* 11432004 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432006 push ebx */
  push32((uint32_t)(EBX));
  /* 11432007 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x1143200du);
  /* 1143200d pop ecx */
  ECX = (pop32());
  /* 1143200e cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432013 pop ecx */
  ECX = (pop32());
  /* 11432014 jge 0x11432027 */
  if ((C.sf==C.of)) goto L_11432027;
  /* 11432016 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1143201b push 3 */
  push32((uint32_t)(0x3u));
  /* 1143201d push ebx */
  push32((uint32_t)(EBX));
  /* 1143201e call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432024u);
  /* 11432024 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432027:;
  /* 11432027 push ebx */
  push32((uint32_t)(EBX));
  /* 11432028 push ebx */
  push32((uint32_t)(EBX));
  /* 11432029 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x1143202fu);
  /* 1143202f pop ecx */
  ECX = (pop32());
  /* 11432030 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432035 pop ecx */
  ECX = (pop32());
  /* 11432036 jge 0x11432048 */
  if ((C.sf==C.of)) goto L_11432048;
  /* 11432038 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1143203d push ebx */
  push32((uint32_t)(EBX));
  /* 1143203e push ebx */
  push32((uint32_t)(EBX));
  /* 1143203f call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432045u);
  /* 11432045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432048:;
  /* 11432048 push 4 */
  push32((uint32_t)(0x4u));
  /* 1143204a push ebx */
  push32((uint32_t)(EBX));
  /* 1143204b call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11432051u);
  /* 11432051 pop ecx */
  ECX = (pop32());
  /* 11432052 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432057 pop ecx */
  ECX = (pop32());
  /* 11432058 jge 0x1143206b */
  if ((C.sf==C.of)) goto L_1143206b;
  /* 1143205a push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1143205f push 4 */
  push32((uint32_t)(0x4u));
  /* 11432061 push ebx */
  push32((uint32_t)(EBX));
  /* 11432062 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432068u);
  /* 11432068 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143206b:;
  /* 1143206b push 5 */
  push32((uint32_t)(0x5u));
  /* 1143206d push ebx */
  push32((uint32_t)(EBX));
  /* 1143206e call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11432074u);
  /* 11432074 pop ecx */
  ECX = (pop32());
  /* 11432075 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143207a pop ecx */
  ECX = (pop32());
  /* 1143207b jge 0x1143208e */
  if ((C.sf==C.of)) goto L_1143208e;
  /* 1143207d push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11432082 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432084 push ebx */
  push32((uint32_t)(EBX));
  /* 11432085 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x1143208bu);
  /* 1143208b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143208e:;
  /* 1143208e push 3 */
  push32((uint32_t)(0x3u));
  /* 11432090 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432092 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11432098u);
  /* 11432098 pop ecx */
  ECX = (pop32());
  /* 11432099 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143209e pop ecx */
  ECX = (pop32());
  /* 1143209f jge 0x114320b3 */
  if ((C.sf==C.of)) goto L_114320b3;
  /* 114320a1 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 114320a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 114320a8 push 3 */
  push32((uint32_t)(0x3u));
  /* 114320aa call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x114320b0u);
  /* 114320b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114320b3:;
  /* 114320b3 push ebx */
  push32((uint32_t)(EBX));
  /* 114320b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 114320b6 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x114320bcu);
  /* 114320bc pop ecx */
  ECX = (pop32());
  /* 114320bd cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114320c2 pop ecx */
  ECX = (pop32());
  /* 114320c3 jge 0x114320d6 */
  if ((C.sf==C.of)) goto L_114320d6;
  /* 114320c5 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 114320ca push ebx */
  push32((uint32_t)(EBX));
  /* 114320cb push 3 */
  push32((uint32_t)(0x3u));
  /* 114320cd call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x114320d3u);
  /* 114320d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114320d6:;
  /* 114320d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 114320d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 114320da call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x114320e0u);
  /* 114320e0 pop ecx */
  ECX = (pop32());
  /* 114320e1 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114320e6 pop ecx */
  ECX = (pop32());
  /* 114320e7 jge 0x114320fb */
  if ((C.sf==C.of)) goto L_114320fb;
  /* 114320e9 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 114320ee push 4 */
  push32((uint32_t)(0x4u));
  /* 114320f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 114320f2 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x114320f8u);
  /* 114320f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114320fb:;
  /* 114320fb push 5 */
  push32((uint32_t)(0x5u));
  /* 114320fd push 3 */
  push32((uint32_t)(0x3u));
  /* 114320ff call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11432105u);
  /* 11432105 pop ecx */
  ECX = (pop32());
  /* 11432106 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143210b pop ecx */
  ECX = (pop32());
  /* 1143210c jge 0x11432120 */
  if ((C.sf==C.of)) goto L_11432120;
  /* 1143210e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 11432113 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432115 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432117 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x1143211du);
  /* 1143211d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432120:;
  /* 11432120 push 0xa */
  push32((uint32_t)(0xau));
  /* 11432122 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432128u);
  /* 11432128 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143212a pop ecx */
  ECX = (pop32());
  /* 1143212b je 0x114321ef */
  if (C.zf) goto L_114321ef;
  /* 11432131 mov eax, dword ptr [0x114377b8] */
  EAX = (r32((uint32_t)(0x114377b8)));
  /* 11432136 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432138 add dword ptr [0x11437998], eax */
  { uint32_t _a=(r32((uint32_t)(0x11437998))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x11437998), (_r)); fl_add(_a,_b,_r,32); }
  /* 1143213e push 2 */
  push32((uint32_t)(0x2u));
  /* 11432140 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x11432146u);
  /* 11432146 pop ecx */
  ECX = (pop32());
  /* 11432147 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143214c pop ecx */
  ECX = (pop32());
  /* 1143214d jge 0x11432161 */
  if ((C.sf==C.of)) goto L_11432161;
  /* 1143214f push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11432154 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432156 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432158 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x1143215eu);
  /* 1143215e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432161:;
  /* 11432161 push ebx */
  push32((uint32_t)(EBX));
  /* 11432162 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432164 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x1143216au);
  /* 1143216a pop ecx */
  ECX = (pop32());
  /* 1143216b cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432170 pop ecx */
  ECX = (pop32());
  /* 11432171 jge 0x11432184 */
  if ((C.sf==C.of)) goto L_11432184;
  /* 11432173 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 11432178 push ebx */
  push32((uint32_t)(EBX));
  /* 11432179 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143217b call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432181u);
  /* 11432181 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432184:;
  /* 11432184 push 4 */
  push32((uint32_t)(0x4u));
  /* 11432186 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432188 call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x1143218eu);
  /* 1143218e pop ecx */
  ECX = (pop32());
  /* 1143218f cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432194 pop ecx */
  ECX = (pop32());
  /* 11432195 jge 0x114321a9 */
  if ((C.sf==C.of)) goto L_114321a9;
  /* 11432197 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 1143219c push 4 */
  push32((uint32_t)(0x4u));
  /* 1143219e push 2 */
  push32((uint32_t)(0x2u));
  /* 114321a0 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x114321a6u);
  /* 114321a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114321a9:;
  /* 114321a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 114321ab push 2 */
  push32((uint32_t)(0x2u));
  /* 114321ad call dword ptr [0x114360d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d0))), 0x114321b3u);
  /* 114321b3 pop ecx */
  ECX = (pop32());
  /* 114321b4 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114321b9 pop ecx */
  ECX = (pop32());
  /* 114321ba jge 0x114321ce */
  if ((C.sf==C.of)) goto L_114321ce;
  /* 114321bc push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 114321c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 114321c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114321c5 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x114321cbu);
  /* 114321cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114321ce:;
  /* 114321ce push 5 */
  push32((uint32_t)(0x5u));
  /* 114321d0 pop eax */
  EAX = (pop32());
  /* 114321d1 sub eax, dword ptr [0x114377b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377b8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114321d7 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 114321dc push 0xa */
  push32((uint32_t)(0xau));
  /* 114321de imul eax, eax, 0x7b */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7bu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114321e1 add dword ptr [0x11437b28], eax */
  { uint32_t _a=(r32((uint32_t)(0x11437b28))),_b=(EAX),_r=_a+_b; w32((uint32_t)(0x11437b28), (_r)); fl_add(_a,_b,_r,32); }
  /* 114321e7 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x114321edu);
  /* 114321ed pop ecx */
  ECX = (pop32());
  /* 114321ee pop ecx */
  ECX = (pop32());
L_114321ef:;
  /* 114321ef push 5 */
  push32((uint32_t)(0x5u));
  /* 114321f1 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114321f7u);
  /* 114321f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114321f9 pop ecx */
  ECX = (pop32());
  /* 114321fa je 0x1143225d */
  if (C.zf) goto L_1143225d;
  /* 114321fc push ebx */
  push32((uint32_t)(EBX));
  /* 114321fd call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432203u);
  /* 11432203 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432205 pop ecx */
  ECX = (pop32());
  /* 11432206 je 0x1143225d */
  if (C.zf) goto L_1143225d;
  /* 11432208 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143220a push 0x11437890 */
  push32((uint32_t)(0x11437890u));
  /* 1143220f call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432215u);
  /* 11432215 pop ecx */
  ECX = (pop32());
  /* 11432216 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432218 pop ecx */
  ECX = (pop32());
  /* 11432219 jg 0x11432228 */
  if ((!C.zf&&C.sf==C.of)) goto L_11432228;
  /* 1143221b push 0xc */
  push32((uint32_t)(0xcu));
  /* 1143221d call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432223u);
  /* 11432223 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432225 pop ecx */
  ECX = (pop32());
  /* 11432226 je 0x1143225d */
  if (C.zf) goto L_1143225d;
L_11432228:;
  /* 11432228 push 0x11437370 */
  push32((uint32_t)(0x11437370u));
  /* 1143222d call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x11432233u);
  /* 11432233 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11432235 push ebx */
  push32((uint32_t)(EBX));
  /* 11432236 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143223cu);
  /* 1143223c push 0x96 */
  push32((uint32_t)(0x96u));
  /* 11432241 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432243 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432249u);
  /* 11432249 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1143224e push 3 */
  push32((uint32_t)(0x3u));
  /* 11432250 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432256u);
  /* 11432256 push edi */
  push32((uint32_t)(EDI));
  /* 11432257 push ebx */
  push32((uint32_t)(EBX));
  /* 11432258 call ebp */
  call_ind((uint32_t)(EBP), 0x1143225au);
  /* 1143225a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143225d:;
  /* 1143225d push 2 */
  push32((uint32_t)(0x2u));
  /* 1143225f call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432265u);
  /* 11432265 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432267 pop ecx */
  ECX = (pop32());
  /* 11432268 je 0x11432296 */
  if (C.zf) goto L_11432296;
  /* 1143226a push ebx */
  push32((uint32_t)(EBX));
  /* 1143226b call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432271u);
  /* 11432271 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432273 pop ecx */
  ECX = (pop32());
  /* 11432274 je 0x11432296 */
  if (C.zf) goto L_11432296;
  /* 11432276 push edi */
  push32((uint32_t)(EDI));
  /* 11432277 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 1143227c call esi */
  call_ind((uint32_t)(ESI), 0x1143227eu);
  /* 1143227e push edi */
  push32((uint32_t)(EDI));
  /* 1143227f push 0xf */
  push32((uint32_t)(0xfu));
  /* 11432281 push 0x114379e0 */
  push32((uint32_t)(0x114379e0u));
  /* 11432286 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432288 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x1143228eu);
  /* 1143228e push edi */
  push32((uint32_t)(EDI));
  /* 1143228f push 2 */
  push32((uint32_t)(0x2u));
  /* 11432291 call ebp */
  call_ind((uint32_t)(EBP), 0x11432293u);
  /* 11432293 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432296:;
  /* 11432296 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432298 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x1143229eu);
  /* 1143229e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114322a0 pop ecx */
  ECX = (pop32());
  /* 114322a1 je 0x114322d0 */
  if (C.zf) goto L_114322d0;
  /* 114322a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114322a5 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x114322abu);
  /* 114322ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114322ad pop ecx */
  ECX = (pop32());
  /* 114322ae je 0x114322d0 */
  if (C.zf) goto L_114322d0;
  /* 114322b0 push edi */
  push32((uint32_t)(EDI));
  /* 114322b1 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 114322b6 call esi */
  call_ind((uint32_t)(ESI), 0x114322b8u);
  /* 114322b8 push edi */
  push32((uint32_t)(EDI));
  /* 114322b9 push 0xf */
  push32((uint32_t)(0xfu));
  /* 114322bb push 0x114379e8 */
  push32((uint32_t)(0x114379e8u));
  /* 114322c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114322c2 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x114322c8u);
  /* 114322c8 push edi */
  push32((uint32_t)(EDI));
  /* 114322c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 114322cb call ebp */
  call_ind((uint32_t)(EBP), 0x114322cdu);
  /* 114322cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114322d0:;
  /* 114322d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 114322d2 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114322d8u);
  /* 114322d8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114322da pop ecx */
  ECX = (pop32());
  /* 114322db je 0x1143231d */
  if (C.zf) goto L_1143231d;
  /* 114322dd push 3 */
  push32((uint32_t)(0x3u));
  /* 114322df call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x114322e5u);
  /* 114322e5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114322e7 pop ecx */
  ECX = (pop32());
  /* 114322e8 je 0x1143231d */
  if (C.zf) goto L_1143231d;
  /* 114322ea push edi */
  push32((uint32_t)(EDI));
  /* 114322eb push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 114322f0 call esi */
  call_ind((uint32_t)(ESI), 0x114322f2u);
  /* 114322f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114322f4 call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x114322fau);
  /* 114322fa push edi */
  push32((uint32_t)(EDI));
  /* 114322fb push 0x11437968 */
  push32((uint32_t)(0x11437968u));
  /* 11432300 call esi */
  call_ind((uint32_t)(ESI), 0x11432302u);
  /* 11432302 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432304 call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x1143230au);
  /* 1143230a push 0x11437368 */
  push32((uint32_t)(0x11437368u));
  /* 1143230f call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x11432315u);
  /* 11432315 push edi */
  push32((uint32_t)(EDI));
  /* 11432316 push 4 */
  push32((uint32_t)(0x4u));
  /* 11432318 call ebp */
  call_ind((uint32_t)(EBP), 0x1143231au);
  /* 1143231a add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143231d:;
  /* 1143231d push 5 */
  push32((uint32_t)(0x5u));
  /* 1143231f call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432325u);
  /* 11432325 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432327 pop ecx */
  ECX = (pop32());
  /* 11432328 je 0x1143234e */
  if (C.zf) goto L_1143234e;
  /* 1143232a push edi */
  push32((uint32_t)(EDI));
  /* 1143232b push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 11432330 call esi */
  call_ind((uint32_t)(ESI), 0x11432332u);
  /* 11432332 push ebx */
  push32((uint32_t)(EBX));
  /* 11432333 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 11432338 call esi */
  call_ind((uint32_t)(ESI), 0x1143233au);
  /* 1143233a push edi */
  push32((uint32_t)(EDI));
  /* 1143233b push 2 */
  push32((uint32_t)(0x2u));
  /* 1143233d call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11432343u);
  /* 11432343 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432345 call dword ptr [0x11436104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436104))), 0x1143234bu);
  /* 1143234b add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143234e:;
  /* 1143234e push 5 */
  push32((uint32_t)(0x5u));
  /* 11432350 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432356u);
  /* 11432356 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432358 pop ecx */
  ECX = (pop32());
  /* 11432359 je 0x114324e5 */
  if (C.zf) goto L_114324e5;
  /* 1143235f mov ebp, dword ptr [0x1143610c] */
  EBP = (r32((uint32_t)(0x1143610c)));
  /* 11432365 push edi */
  push32((uint32_t)(EDI));
  /* 11432366 push 0x11437b58 */
  push32((uint32_t)(0x11437b58u));
  /* 1143236b call ebp */
  call_ind((uint32_t)(EBP), 0x1143236du);
  /* 1143236d mov edx, eax */
  EDX = (EAX);
  /* 1143236f push edi */
  push32((uint32_t)(EDI));
  /* 11432370 push 0x11437b00 */
  push32((uint32_t)(0x11437b00u));
  /* 11432375 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11432379 call ebp */
  call_ind((uint32_t)(EBP), 0x1143237bu);
  /* 1143237b mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 1143237f push edi */
  push32((uint32_t)(EDI));
  /* 11432380 push 0x11437af8 */
  push32((uint32_t)(0x11437af8u));
  /* 11432385 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432387 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143238du);
  /* 1143238d push edi */
  push32((uint32_t)(EDI));
  /* 1143238e push 0x11437af0 */
  push32((uint32_t)(0x11437af0u));
  /* 11432393 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432395 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143239bu);
  /* 1143239b push edi */
  push32((uint32_t)(EDI));
  /* 1143239c push 0x11437ae0 */
  push32((uint32_t)(0x11437ae0u));
  /* 114323a1 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323a3 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323a9u);
  /* 114323a9 push edi */
  push32((uint32_t)(EDI));
  /* 114323aa push 0x11437ad0 */
  push32((uint32_t)(0x11437ad0u));
  /* 114323af add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323b1 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323b7u);
  /* 114323b7 push edi */
  push32((uint32_t)(EDI));
  /* 114323b8 push 0x11437ac0 */
  push32((uint32_t)(0x11437ac0u));
  /* 114323bd add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323bf call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323c5u);
  /* 114323c5 push edi */
  push32((uint32_t)(EDI));
  /* 114323c6 push 0x11437aa8 */
  push32((uint32_t)(0x11437aa8u));
  /* 114323cb add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323cd call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323d3u);
  /* 114323d3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323d6 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323d8 push edi */
  push32((uint32_t)(EDI));
  /* 114323d9 push 0x11437a98 */
  push32((uint32_t)(0x11437a98u));
  /* 114323de call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323e4u);
  /* 114323e4 push edi */
  push32((uint32_t)(EDI));
  /* 114323e5 push 0x11437a88 */
  push32((uint32_t)(0x11437a88u));
  /* 114323ea add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323ec call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114323f2u);
  /* 114323f2 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114323f7 test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 114323f9 jle 0x114324df */
  if ((C.zf||C.sf!=C.of)) goto L_114324df;
  /* 114323ff push edi */
  push32((uint32_t)(EDI));
  /* 11432400 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 11432405 call esi */
  call_ind((uint32_t)(ESI), 0x11432407u);
  /* 11432407 push ebx */
  push32((uint32_t)(EBX));
  /* 11432408 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 1143240d call esi */
  call_ind((uint32_t)(ESI), 0x1143240fu);
  /* 1143240f push ebx */
  push32((uint32_t)(EBX));
  /* 11432410 push 0x11437848 */
  push32((uint32_t)(0x11437848u));
  /* 11432415 call esi */
  call_ind((uint32_t)(ESI), 0x11432417u);
  /* 11432417 mov ebp, dword ptr [0x114360f8] */
  EBP = (r32((uint32_t)(0x114360f8)));
  /* 1143241d push ebx */
  push32((uint32_t)(EBX));
  /* 1143241e push 2 */
  push32((uint32_t)(0x2u));
  /* 11432420 push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 11432425 call ebp */
  call_ind((uint32_t)(EBP), 0x11432427u);
  /* 11432427 push ebx */
  push32((uint32_t)(EBX));
  /* 11432428 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143242a push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 1143242f call ebp */
  call_ind((uint32_t)(EBP), 0x11432431u);
  /* 11432431 push ebx */
  push32((uint32_t)(EBX));
  /* 11432432 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432434 push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 11432439 call ebp */
  call_ind((uint32_t)(EBP), 0x1143243bu);
  /* 1143243b mov ebp, dword ptr [0x114360fc] */
  EBP = (r32((uint32_t)(0x114360fc)));
  /* 11432441 push ebx */
  push32((uint32_t)(EBX));
  /* 11432442 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432444 call ebp */
  call_ind((uint32_t)(EBP), 0x11432446u);
  /* 11432446 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432449 push edi */
  push32((uint32_t)(EDI));
  /* 1143244a push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 1143244f call esi */
  call_ind((uint32_t)(ESI), 0x11432451u);
  /* 11432451 push ebx */
  push32((uint32_t)(EBX));
  /* 11432452 push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 11432457 call esi */
  call_ind((uint32_t)(ESI), 0x11432459u);
  /* 11432459 push edi */
  push32((uint32_t)(EDI));
  /* 1143245a push edi */
  push32((uint32_t)(EDI));
  /* 1143245b push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 11432460 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432462 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432468u);
  /* 11432468 push ebx */
  push32((uint32_t)(EBX));
  /* 11432469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143246b call ebp */
  call_ind((uint32_t)(EBP), 0x1143246du);
  /* 1143246d push edi */
  push32((uint32_t)(EDI));
  /* 1143246e push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11432473 call esi */
  call_ind((uint32_t)(ESI), 0x11432475u);
  /* 11432475 push edi */
  push32((uint32_t)(EDI));
  /* 11432476 push edi */
  push32((uint32_t)(EDI));
  /* 11432477 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 1143247c push 2 */
  push32((uint32_t)(0x2u));
  /* 1143247e call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432484u);
  /* 11432484 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432487 push ebx */
  push32((uint32_t)(EBX));
  /* 11432488 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143248a call ebp */
  call_ind((uint32_t)(EBP), 0x1143248cu);
  /* 1143248c push edi */
  push32((uint32_t)(EDI));
  /* 1143248d push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 11432492 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432494 call dword ptr [0x114360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c8))), 0x1143249au);
  /* 1143249a push edi */
  push32((uint32_t)(EDI));
  /* 1143249b push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 114324a0 call esi */
  call_ind((uint32_t)(ESI), 0x114324a2u);
  /* 114324a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114324a4 call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x114324aau);
  /* 114324aa push 0x11437360 */
  push32((uint32_t)(0x11437360u));
  /* 114324af call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x114324b5u);
  /* 114324b5 mov ebp, dword ptr [0x114360d4] */
  EBP = (r32((uint32_t)(0x114360d4)));
  /* 114324bb push edi */
  push32((uint32_t)(EDI));
  /* 114324bc push ebx */
  push32((uint32_t)(EBX));
  /* 114324bd call ebp */
  call_ind((uint32_t)(EBP), 0x114324bfu);
  /* 114324bf push edi */
  push32((uint32_t)(EDI));
  /* 114324c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114324c2 call ebp */
  call_ind((uint32_t)(EBP), 0x114324c4u);
  /* 114324c4 push edi */
  push32((uint32_t)(EDI));
  /* 114324c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 114324c7 mov dword ptr [0x114377a8], ebx */
  w32((uint32_t)(0x114377a8), (EBX));
  /* 114324cd call ebp */
  call_ind((uint32_t)(EBP), 0x114324cfu);
  /* 114324cf mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
  /* 114324d5 push edi */
  push32((uint32_t)(EDI));
  /* 114324d6 push 5 */
  push32((uint32_t)(0x5u));
  /* 114324d8 call ebp */
  call_ind((uint32_t)(EBP), 0x114324dau);
  /* 114324da add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114324dd jmp 0x114324e5 */
  goto L_114324e5;
L_114324df:;
  /* 114324df mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
L_114324e5:;
  /* 114324e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 114324e7 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114324edu);
  /* 114324ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114324ef pop ecx */
  ECX = (pop32());
  /* 114324f0 je 0x114325c4 */
  if (C.zf) goto L_114325c4;
  /* 114324f6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114324f8 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114324feu);
  /* 114324fe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432500 pop ecx */
  ECX = (pop32());
  /* 11432501 je 0x114325c4 */
  if (C.zf) goto L_114325c4;
  /* 11432507 mov ebp, dword ptr [0x1143610c] */
  EBP = (r32((uint32_t)(0x1143610c)));
  /* 1143250d push edi */
  push32((uint32_t)(EDI));
  /* 1143250e push 0x114377e8 */
  push32((uint32_t)(0x114377e8u));
  /* 11432513 call ebp */
  call_ind((uint32_t)(EBP), 0x11432515u);
  /* 11432515 mov edx, eax */
  EDX = (EAX);
  /* 11432517 push edi */
  push32((uint32_t)(EDI));
  /* 11432518 push 0x114377d8 */
  push32((uint32_t)(0x114377d8u));
  /* 1143251d mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 11432521 call ebp */
  call_ind((uint32_t)(EBP), 0x11432523u);
  /* 11432523 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 11432527 push edi */
  push32((uint32_t)(EDI));
  /* 11432528 push 0x114377d0 */
  push32((uint32_t)(0x114377d0u));
  /* 1143252d add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143252f call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432535u);
  /* 11432535 push edi */
  push32((uint32_t)(EDI));
  /* 11432536 push 0x114377c8 */
  push32((uint32_t)(0x114377c8u));
  /* 1143253b add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143253d call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432543u);
  /* 11432543 push edi */
  push32((uint32_t)(EDI));
  /* 11432544 push 0x114377c0 */
  push32((uint32_t)(0x114377c0u));
  /* 11432549 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143254b call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432551u);
  /* 11432551 push edi */
  push32((uint32_t)(EDI));
  /* 11432552 push 0x114377b0 */
  push32((uint32_t)(0x114377b0u));
  /* 11432557 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432559 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143255fu);
  /* 1143255f push edi */
  push32((uint32_t)(EDI));
  /* 11432560 push 0x114377a0 */
  push32((uint32_t)(0x114377a0u));
  /* 11432565 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432567 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143256du);
  /* 1143256d push edi */
  push32((uint32_t)(EDI));
  /* 1143256e push 0x11437798 */
  push32((uint32_t)(0x11437798u));
  /* 11432573 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432575 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143257bu);
  /* 1143257b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143257e add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432580 push edi */
  push32((uint32_t)(EDI));
  /* 11432581 push 0x11437788 */
  push32((uint32_t)(0x11437788u));
  /* 11432586 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143258cu);
  /* 1143258c push edi */
  push32((uint32_t)(EDI));
  /* 1143258d push 0x11437780 */
  push32((uint32_t)(0x11437780u));
  /* 11432592 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432594 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143259au);
  /* 1143259a add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143259c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143259f test ebp, ebp */
  { uint32_t _r=(EBP)&(EBP); fl_logic(_r,32); }
  /* 114325a1 jle 0x114325be */
  if ((C.zf||C.sf!=C.of)) goto L_114325be;
  /* 114325a3 push 0x11437358 */
  push32((uint32_t)(0x11437358u));
  /* 114325a8 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x114325aeu);
  /* 114325ae mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
  /* 114325b4 push edi */
  push32((uint32_t)(EDI));
  /* 114325b5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114325b7 call ebp */
  call_ind((uint32_t)(EBP), 0x114325b9u);
  /* 114325b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114325bc jmp 0x114325c4 */
  goto L_114325c4;
L_114325be:;
  /* 114325be mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
L_114325c4:;
  /* 114325c4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 114325c6 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114325ccu);
  /* 114325cc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114325ce pop ecx */
  ECX = (pop32());
  /* 114325cf jne 0x11432684 */
  if (!C.zf) goto L_11432684;
  /* 114325d5 mov ebp, dword ptr [0x1143610c] */
  EBP = (r32((uint32_t)(0x1143610c)));
  /* 114325db push edi */
  push32((uint32_t)(EDI));
  /* 114325dc push 0x114377e8 */
  push32((uint32_t)(0x114377e8u));
  /* 114325e1 call ebp */
  call_ind((uint32_t)(EBP), 0x114325e3u);
  /* 114325e3 mov edx, eax */
  EDX = (EAX);
  /* 114325e5 push edi */
  push32((uint32_t)(EDI));
  /* 114325e6 push 0x114377d8 */
  push32((uint32_t)(0x114377d8u));
  /* 114325eb mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 114325ef call ebp */
  call_ind((uint32_t)(EBP), 0x114325f1u);
  /* 114325f1 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 114325f5 push edi */
  push32((uint32_t)(EDI));
  /* 114325f6 push 0x114377d0 */
  push32((uint32_t)(0x114377d0u));
  /* 114325fb add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114325fd call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432603u);
  /* 11432603 push edi */
  push32((uint32_t)(EDI));
  /* 11432604 push 0x114377c8 */
  push32((uint32_t)(0x114377c8u));
  /* 11432609 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143260b call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432611u);
  /* 11432611 push edi */
  push32((uint32_t)(EDI));
  /* 11432612 push 0x114377c0 */
  push32((uint32_t)(0x114377c0u));
  /* 11432617 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432619 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143261fu);
  /* 1143261f push edi */
  push32((uint32_t)(EDI));
  /* 11432620 push 0x114377b0 */
  push32((uint32_t)(0x114377b0u));
  /* 11432625 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432627 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143262du);
  /* 1143262d push edi */
  push32((uint32_t)(EDI));
  /* 1143262e push 0x114377a0 */
  push32((uint32_t)(0x114377a0u));
  /* 11432633 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432635 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143263bu);
  /* 1143263b push edi */
  push32((uint32_t)(EDI));
  /* 1143263c push 0x11437798 */
  push32((uint32_t)(0x11437798u));
  /* 11432641 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432643 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432649u);
  /* 11432649 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143264c add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143264e push edi */
  push32((uint32_t)(EDI));
  /* 1143264f push 0x11437788 */
  push32((uint32_t)(0x11437788u));
  /* 11432654 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143265au);
  /* 1143265a push edi */
  push32((uint32_t)(EDI));
  /* 1143265b push 0x11437780 */
  push32((uint32_t)(0x11437780u));
  /* 11432660 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432662 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432668u);
  /* 11432668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143266b add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143266d jne 0x1143267e */
  if (!C.zf) goto L_1143267e;
  /* 1143266f mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
  /* 11432675 push ebx */
  push32((uint32_t)(EBX));
  /* 11432676 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11432678 call ebp */
  call_ind((uint32_t)(EBP), 0x1143267au);
  /* 1143267a pop ecx */
  ECX = (pop32());
  /* 1143267b pop ecx */
  ECX = (pop32());
  /* 1143267c jmp 0x11432684 */
  goto L_11432684;
L_1143267e:;
  /* 1143267e mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
L_11432684:;
  /* 11432684 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432686 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x1143268cu);
  /* 1143268c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143268e pop ecx */
  ECX = (pop32());
  /* 1143268f je 0x114327a3 */
  if (C.zf) goto L_114327a3;
  /* 11432695 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 1143269a call dword ptr [0x11436120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436120))), 0x114326a0u);
  /* 114326a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114326a2 pop ecx */
  ECX = (pop32());
  /* 114326a3 je 0x114326b9 */
  if (C.zf) goto L_114326b9;
  /* 114326a5 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 114326aa call dword ptr [0x11436120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436120))), 0x114326b0u);
  /* 114326b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114326b2 pop ecx */
  ECX = (pop32());
  /* 114326b3 jne 0x114327a3 */
  if (!C.zf) goto L_114327a3;
L_114326b9:;
  /* 114326b9 push edi */
  push32((uint32_t)(EDI));
  /* 114326ba push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 114326bf call esi */
  call_ind((uint32_t)(ESI), 0x114326c1u);
  /* 114326c1 push ebx */
  push32((uint32_t)(EBX));
  /* 114326c2 push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 114326c7 call esi */
  call_ind((uint32_t)(ESI), 0x114326c9u);
  /* 114326c9 push ebx */
  push32((uint32_t)(EBX));
  /* 114326ca push 0x11437848 */
  push32((uint32_t)(0x11437848u));
  /* 114326cf call esi */
  call_ind((uint32_t)(ESI), 0x114326d1u);
  /* 114326d1 push ebx */
  push32((uint32_t)(EBX));
  /* 114326d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114326d4 push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 114326d9 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x114326dfu);
  /* 114326df push ebx */
  push32((uint32_t)(EBX));
  /* 114326e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 114326e2 push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 114326e7 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x114326edu);
  /* 114326ed push ebx */
  push32((uint32_t)(EBX));
  /* 114326ee push 2 */
  push32((uint32_t)(0x2u));
  /* 114326f0 push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 114326f5 call dword ptr [0x114360f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f8))), 0x114326fbu);
  /* 114326fb push ebx */
  push32((uint32_t)(EBX));
  /* 114326fc push 2 */
  push32((uint32_t)(0x2u));
  /* 114326fe call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11432704u);
  /* 11432704 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432707 push edi */
  push32((uint32_t)(EDI));
  /* 11432708 push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 1143270d call esi */
  call_ind((uint32_t)(ESI), 0x1143270fu);
  /* 1143270f push ebx */
  push32((uint32_t)(EBX));
  /* 11432710 push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 11432715 call esi */
  call_ind((uint32_t)(ESI), 0x11432717u);
  /* 11432717 push edi */
  push32((uint32_t)(EDI));
  /* 11432718 push edi */
  push32((uint32_t)(EDI));
  /* 11432719 push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 1143271e push 2 */
  push32((uint32_t)(0x2u));
  /* 11432720 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432726u);
  /* 11432726 push ebx */
  push32((uint32_t)(EBX));
  /* 11432727 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432729 call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x1143272fu);
  /* 1143272f push edi */
  push32((uint32_t)(EDI));
  /* 11432730 push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11432735 call esi */
  call_ind((uint32_t)(ESI), 0x11432737u);
  /* 11432737 push edi */
  push32((uint32_t)(EDI));
  /* 11432738 push edi */
  push32((uint32_t)(EDI));
  /* 11432739 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 1143273e push 2 */
  push32((uint32_t)(0x2u));
  /* 11432740 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432746u);
  /* 11432746 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432749 push ebx */
  push32((uint32_t)(EBX));
  /* 1143274a push 2 */
  push32((uint32_t)(0x2u));
  /* 1143274c call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11432752u);
  /* 11432752 push edi */
  push32((uint32_t)(EDI));
  /* 11432753 push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 11432758 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143275a call dword ptr [0x114360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c8))), 0x11432760u);
  /* 11432760 push edi */
  push32((uint32_t)(EDI));
  /* 11432761 push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 11432766 call esi */
  call_ind((uint32_t)(ESI), 0x11432768u);
  /* 11432768 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143276a call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x11432770u);
  /* 11432770 push 0x11437350 */
  push32((uint32_t)(0x11437350u));
  /* 11432775 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x1143277bu);
  /* 1143277b push edi */
  push32((uint32_t)(EDI));
  /* 1143277c push ebx */
  push32((uint32_t)(EBX));
  /* 1143277d call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432783u);
  /* 11432783 push edi */
  push32((uint32_t)(EDI));
  /* 11432784 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432786 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143278cu);
  /* 1143278c push edi */
  push32((uint32_t)(EDI));
  /* 1143278d push 4 */
  push32((uint32_t)(0x4u));
  /* 1143278f mov dword ptr [0x114377a8], ebx */
  w32((uint32_t)(0x114377a8), (EBX));
  /* 11432795 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143279bu);
  /* 1143279b push edi */
  push32((uint32_t)(EDI));
  /* 1143279c push 5 */
  push32((uint32_t)(0x5u));
  /* 1143279e call ebp */
  call_ind((uint32_t)(EBP), 0x114327a0u);
  /* 114327a0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114327a3:;
  /* 114327a3 push 5 */
  push32((uint32_t)(0x5u));
  /* 114327a5 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114327abu);
  /* 114327ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114327ad pop ecx */
  ECX = (pop32());
  /* 114327ae je 0x114328d9 */
  if (C.zf) goto L_114328d9;
  /* 114327b4 mov ebp, dword ptr [0x11436118] */
  EBP = (r32((uint32_t)(0x11436118)));
  /* 114327ba push 2 */
  push32((uint32_t)(0x2u));
  /* 114327bc push 0x11437800 */
  push32((uint32_t)(0x11437800u));
  /* 114327c1 call ebp */
  call_ind((uint32_t)(EBP), 0x114327c3u);
  /* 114327c3 mov edx, eax */
  EDX = (EAX);
  /* 114327c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 114327c7 push 0x114379d0 */
  push32((uint32_t)(0x114379d0u));
  /* 114327cc mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 114327d0 call ebp */
  call_ind((uint32_t)(EBP), 0x114327d2u);
  /* 114327d2 mov ebp, dword ptr [esp + 0x20] */
  EBP = (r32((uint32_t)(ESP + 0x20)));
  /* 114327d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 114327d8 push 0x11437790 */
  push32((uint32_t)(0x11437790u));
  /* 114327dd add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114327df call dword ptr [0x11436118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436118))), 0x114327e5u);
  /* 114327e5 add ebp, eax */
  { uint32_t _a=(EBP),_b=(EAX),_r=_a+_b; EBP = (_r); fl_add(_a,_b,_r,32); }
  /* 114327e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114327ea cmp ebp, 0xa */
  { uint32_t _a=(EBP),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114327ed jge 0x114328d3 */
  if ((C.sf==C.of)) goto L_114328d3;
  /* 114327f3 push edi */
  push32((uint32_t)(EDI));
  /* 114327f4 push 0x11437810 */
  push32((uint32_t)(0x11437810u));
  /* 114327f9 call esi */
  call_ind((uint32_t)(ESI), 0x114327fbu);
  /* 114327fb push ebx */
  push32((uint32_t)(EBX));
  /* 114327fc push 0x11437818 */
  push32((uint32_t)(0x11437818u));
  /* 11432801 call esi */
  call_ind((uint32_t)(ESI), 0x11432803u);
  /* 11432803 push ebx */
  push32((uint32_t)(EBX));
  /* 11432804 push 0x11437848 */
  push32((uint32_t)(0x11437848u));
  /* 11432809 call esi */
  call_ind((uint32_t)(ESI), 0x1143280bu);
  /* 1143280b mov ebp, dword ptr [0x114360f8] */
  EBP = (r32((uint32_t)(0x114360f8)));
  /* 11432811 push ebx */
  push32((uint32_t)(EBX));
  /* 11432812 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432814 push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 11432819 call ebp */
  call_ind((uint32_t)(EBP), 0x1143281bu);
  /* 1143281b push ebx */
  push32((uint32_t)(EBX));
  /* 1143281c push 2 */
  push32((uint32_t)(0x2u));
  /* 1143281e push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 11432823 call ebp */
  call_ind((uint32_t)(EBP), 0x11432825u);
  /* 11432825 push ebx */
  push32((uint32_t)(EBX));
  /* 11432826 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432828 push 0x11437940 */
  push32((uint32_t)(0x11437940u));
  /* 1143282d call ebp */
  call_ind((uint32_t)(EBP), 0x1143282fu);
  /* 1143282f mov ebp, dword ptr [0x114360fc] */
  EBP = (r32((uint32_t)(0x114360fc)));
  /* 11432835 push ebx */
  push32((uint32_t)(EBX));
  /* 11432836 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432838 call ebp */
  call_ind((uint32_t)(EBP), 0x1143283au);
  /* 1143283a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143283d push edi */
  push32((uint32_t)(EDI));
  /* 1143283e push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 11432843 call esi */
  call_ind((uint32_t)(ESI), 0x11432845u);
  /* 11432845 push ebx */
  push32((uint32_t)(EBX));
  /* 11432846 push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 1143284b call esi */
  call_ind((uint32_t)(ESI), 0x1143284du);
  /* 1143284d push edi */
  push32((uint32_t)(EDI));
  /* 1143284e push edi */
  push32((uint32_t)(EDI));
  /* 1143284f push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 11432854 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432856 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x1143285cu);
  /* 1143285c push ebx */
  push32((uint32_t)(EBX));
  /* 1143285d push 2 */
  push32((uint32_t)(0x2u));
  /* 1143285f call ebp */
  call_ind((uint32_t)(EBP), 0x11432861u);
  /* 11432861 push edi */
  push32((uint32_t)(EDI));
  /* 11432862 push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11432867 call esi */
  call_ind((uint32_t)(ESI), 0x11432869u);
  /* 11432869 push edi */
  push32((uint32_t)(EDI));
  /* 1143286a push edi */
  push32((uint32_t)(EDI));
  /* 1143286b push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 11432870 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432872 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432878u);
  /* 11432878 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143287b push ebx */
  push32((uint32_t)(EBX));
  /* 1143287c push 2 */
  push32((uint32_t)(0x2u));
  /* 1143287e call ebp */
  call_ind((uint32_t)(EBP), 0x11432880u);
  /* 11432880 push edi */
  push32((uint32_t)(EDI));
  /* 11432881 push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 11432886 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432888 call dword ptr [0x114360c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360c8))), 0x1143288eu);
  /* 1143288e push edi */
  push32((uint32_t)(EDI));
  /* 1143288f push 0x11437960 */
  push32((uint32_t)(0x11437960u));
  /* 11432894 call esi */
  call_ind((uint32_t)(ESI), 0x11432896u);
  /* 11432896 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432898 call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x1143289eu);
  /* 1143289e push 0x11437360 */
  push32((uint32_t)(0x11437360u));
  /* 114328a3 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x114328a9u);
  /* 114328a9 mov ebp, dword ptr [0x114360d4] */
  EBP = (r32((uint32_t)(0x114360d4)));
  /* 114328af push edi */
  push32((uint32_t)(EDI));
  /* 114328b0 push ebx */
  push32((uint32_t)(EBX));
  /* 114328b1 call ebp */
  call_ind((uint32_t)(EBP), 0x114328b3u);
  /* 114328b3 push edi */
  push32((uint32_t)(EDI));
  /* 114328b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 114328b6 call ebp */
  call_ind((uint32_t)(EBP), 0x114328b8u);
  /* 114328b8 push edi */
  push32((uint32_t)(EDI));
  /* 114328b9 push 4 */
  push32((uint32_t)(0x4u));
  /* 114328bb mov dword ptr [0x114377a8], ebx */
  w32((uint32_t)(0x114377a8), (EBX));
  /* 114328c1 call ebp */
  call_ind((uint32_t)(EBP), 0x114328c3u);
  /* 114328c3 mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
  /* 114328c9 push edi */
  push32((uint32_t)(EDI));
  /* 114328ca push 5 */
  push32((uint32_t)(0x5u));
  /* 114328cc call ebp */
  call_ind((uint32_t)(EBP), 0x114328ceu);
  /* 114328ce add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114328d1 jmp 0x114328d9 */
  goto L_114328d9;
L_114328d3:;
  /* 114328d3 mov ebp, dword ptr [0x114360bc] */
  EBP = (r32((uint32_t)(0x114360bc)));
L_114328d9:;
  /* 114328d9 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 114328db call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114328e1u);
  /* 114328e1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114328e3 pop ecx */
  ECX = (pop32());
  /* 114328e4 je 0x1143291e */
  if (C.zf) goto L_1143291e;
  /* 114328e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 114328e8 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114328eeu);
  /* 114328ee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114328f0 pop ecx */
  ECX = (pop32());
  /* 114328f1 jne 0x1143291e */
  if (!C.zf) goto L_1143291e;
  /* 114328f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 114328f5 push 0x11437a88 */
  push32((uint32_t)(0x11437a88u));
  /* 114328fa call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432900u);
  /* 11432900 pop ecx */
  ECX = (pop32());
  /* 11432901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432903 pop ecx */
  ECX = (pop32());
  /* 11432904 jne 0x1143291e */
  if (!C.zf) goto L_1143291e;
  /* 11432906 push edi */
  push32((uint32_t)(EDI));
  /* 11432907 push 0x114378f8 */
  push32((uint32_t)(0x114378f8u));
  /* 1143290c call esi */
  call_ind((uint32_t)(ESI), 0x1143290eu);
  /* 1143290e push 2 */
  push32((uint32_t)(0x2u));
  /* 11432910 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432916u);
  /* 11432916 push edi */
  push32((uint32_t)(EDI));
  /* 11432917 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11432919 call ebp */
  call_ind((uint32_t)(EBP), 0x1143291bu);
  /* 1143291b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1143291e:;
  /* 1143291e push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11432920 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432926u);
  /* 11432926 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432928 pop ecx */
  ECX = (pop32());
  /* 11432929 je 0x11432963 */
  if (C.zf) goto L_11432963;
  /* 1143292b push 5 */
  push32((uint32_t)(0x5u));
  /* 1143292d call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432933u);
  /* 11432933 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432935 pop ecx */
  ECX = (pop32());
  /* 11432936 jne 0x11432963 */
  if (!C.zf) goto L_11432963;
  /* 11432938 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143293a push 0x11437a98 */
  push32((uint32_t)(0x11437a98u));
  /* 1143293f call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432945u);
  /* 11432945 pop ecx */
  ECX = (pop32());
  /* 11432946 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432948 pop ecx */
  ECX = (pop32());
  /* 11432949 jne 0x11432963 */
  if (!C.zf) goto L_11432963;
  /* 1143294b push edi */
  push32((uint32_t)(EDI));
  /* 1143294c push 0x11437900 */
  push32((uint32_t)(0x11437900u));
  /* 11432951 call esi */
  call_ind((uint32_t)(ESI), 0x11432953u);
  /* 11432953 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432955 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x1143295bu);
  /* 1143295b push edi */
  push32((uint32_t)(EDI));
  /* 1143295c push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1143295e call ebp */
  call_ind((uint32_t)(EBP), 0x11432960u);
  /* 11432960 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432963:;
  /* 11432963 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11432965 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x1143296bu);
  /* 1143296b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143296d pop ecx */
  ECX = (pop32());
  /* 1143296e je 0x114329a8 */
  if (C.zf) goto L_114329a8;
  /* 11432970 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432972 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432978u);
  /* 11432978 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143297a pop ecx */
  ECX = (pop32());
  /* 1143297b jne 0x114329a8 */
  if (!C.zf) goto L_114329a8;
  /* 1143297d push 2 */
  push32((uint32_t)(0x2u));
  /* 1143297f push 0x11437aa8 */
  push32((uint32_t)(0x11437aa8u));
  /* 11432984 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x1143298au);
  /* 1143298a pop ecx */
  ECX = (pop32());
  /* 1143298b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143298d pop ecx */
  ECX = (pop32());
  /* 1143298e jne 0x114329a8 */
  if (!C.zf) goto L_114329a8;
  /* 11432990 push edi */
  push32((uint32_t)(EDI));
  /* 11432991 push 0x11437908 */
  push32((uint32_t)(0x11437908u));
  /* 11432996 call esi */
  call_ind((uint32_t)(ESI), 0x11432998u);
  /* 11432998 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143299a call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x114329a0u);
  /* 114329a0 push edi */
  push32((uint32_t)(EDI));
  /* 114329a1 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 114329a3 call ebp */
  call_ind((uint32_t)(EBP), 0x114329a5u);
  /* 114329a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114329a8:;
  /* 114329a8 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 114329aa call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114329b0u);
  /* 114329b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114329b2 pop ecx */
  ECX = (pop32());
  /* 114329b3 je 0x114329ed */
  if (C.zf) goto L_114329ed;
  /* 114329b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 114329b7 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114329bdu);
  /* 114329bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114329bf pop ecx */
  ECX = (pop32());
  /* 114329c0 jne 0x114329ed */
  if (!C.zf) goto L_114329ed;
  /* 114329c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114329c4 push 0x11437ac0 */
  push32((uint32_t)(0x11437ac0u));
  /* 114329c9 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x114329cfu);
  /* 114329cf pop ecx */
  ECX = (pop32());
  /* 114329d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114329d2 pop ecx */
  ECX = (pop32());
  /* 114329d3 jne 0x114329ed */
  if (!C.zf) goto L_114329ed;
  /* 114329d5 push edi */
  push32((uint32_t)(EDI));
  /* 114329d6 push 0x11437920 */
  push32((uint32_t)(0x11437920u));
  /* 114329db call esi */
  call_ind((uint32_t)(ESI), 0x114329ddu);
  /* 114329dd push 2 */
  push32((uint32_t)(0x2u));
  /* 114329df call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x114329e5u);
  /* 114329e5 push edi */
  push32((uint32_t)(EDI));
  /* 114329e6 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 114329e8 call ebp */
  call_ind((uint32_t)(EBP), 0x114329eau);
  /* 114329ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114329ed:;
  /* 114329ed push 0x38 */
  push32((uint32_t)(0x38u));
  /* 114329ef call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x114329f5u);
  /* 114329f5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114329f7 pop ecx */
  ECX = (pop32());
  /* 114329f8 je 0x11432a32 */
  if (C.zf) goto L_11432a32;
  /* 114329fa push 5 */
  push32((uint32_t)(0x5u));
  /* 114329fc call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432a02u);
  /* 11432a02 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432a04 pop ecx */
  ECX = (pop32());
  /* 11432a05 jne 0x11432a32 */
  if (!C.zf) goto L_11432a32;
  /* 11432a07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432a09 push 0x11437ae0 */
  push32((uint32_t)(0x11437ae0u));
  /* 11432a0e call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432a14u);
  /* 11432a14 pop ecx */
  ECX = (pop32());
  /* 11432a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432a17 pop ecx */
  ECX = (pop32());
  /* 11432a18 jne 0x11432a32 */
  if (!C.zf) goto L_11432a32;
  /* 11432a1a push edi */
  push32((uint32_t)(EDI));
  /* 11432a1b push 0x11437938 */
  push32((uint32_t)(0x11437938u));
  /* 11432a20 call esi */
  call_ind((uint32_t)(ESI), 0x11432a22u);
  /* 11432a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432a24 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432a2au);
  /* 11432a2a push edi */
  push32((uint32_t)(EDI));
  /* 11432a2b push 0x38 */
  push32((uint32_t)(0x38u));
  /* 11432a2d call ebp */
  call_ind((uint32_t)(EBP), 0x11432a2fu);
  /* 11432a2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432a32:;
  /* 11432a32 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11432a34 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432a3au);
  /* 11432a3a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432a3c pop ecx */
  ECX = (pop32());
  /* 11432a3d je 0x11432a77 */
  if (C.zf) goto L_11432a77;
  /* 11432a3f push 5 */
  push32((uint32_t)(0x5u));
  /* 11432a41 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432a47u);
  /* 11432a47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432a49 pop ecx */
  ECX = (pop32());
  /* 11432a4a jne 0x11432a77 */
  if (!C.zf) goto L_11432a77;
  /* 11432a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11432a4e push 0x11437af0 */
  push32((uint32_t)(0x11437af0u));
  /* 11432a53 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432a59u);
  /* 11432a59 pop ecx */
  ECX = (pop32());
  /* 11432a5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432a5c pop ecx */
  ECX = (pop32());
  /* 11432a5d jne 0x11432a77 */
  if (!C.zf) goto L_11432a77;
  /* 11432a5f push edi */
  push32((uint32_t)(EDI));
  /* 11432a60 push 0x11437948 */
  push32((uint32_t)(0x11437948u));
  /* 11432a65 call esi */
  call_ind((uint32_t)(ESI), 0x11432a67u);
  /* 11432a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432a69 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432a6fu);
  /* 11432a6f push edi */
  push32((uint32_t)(EDI));
  /* 11432a70 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 11432a72 call ebp */
  call_ind((uint32_t)(EBP), 0x11432a74u);
  /* 11432a74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432a77:;
  /* 11432a77 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11432a79 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432a7fu);
  /* 11432a7f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432a81 pop ecx */
  ECX = (pop32());
  /* 11432a82 je 0x11432abc */
  if (C.zf) goto L_11432abc;
  /* 11432a84 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432a86 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432a8cu);
  /* 11432a8c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432a8e pop ecx */
  ECX = (pop32());
  /* 11432a8f jne 0x11432abc */
  if (!C.zf) goto L_11432abc;
  /* 11432a91 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432a93 push 0x11437af8 */
  push32((uint32_t)(0x11437af8u));
  /* 11432a98 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432a9eu);
  /* 11432a9e pop ecx */
  ECX = (pop32());
  /* 11432a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432aa1 pop ecx */
  ECX = (pop32());
  /* 11432aa2 jne 0x11432abc */
  if (!C.zf) goto L_11432abc;
  /* 11432aa4 push edi */
  push32((uint32_t)(EDI));
  /* 11432aa5 push 0x11437950 */
  push32((uint32_t)(0x11437950u));
  /* 11432aaa call esi */
  call_ind((uint32_t)(ESI), 0x11432aacu);
  /* 11432aac push 2 */
  push32((uint32_t)(0x2u));
  /* 11432aae call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432ab4u);
  /* 11432ab4 push edi */
  push32((uint32_t)(EDI));
  /* 11432ab5 push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11432ab7 call ebp */
  call_ind((uint32_t)(EBP), 0x11432ab9u);
  /* 11432ab9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432abc:;
  /* 11432abc push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11432abe call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432ac4u);
  /* 11432ac4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432ac6 pop ecx */
  ECX = (pop32());
  /* 11432ac7 je 0x11432b01 */
  if (C.zf) goto L_11432b01;
  /* 11432ac9 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432acb call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432ad1u);
  /* 11432ad1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432ad3 pop ecx */
  ECX = (pop32());
  /* 11432ad4 jne 0x11432b01 */
  if (!C.zf) goto L_11432b01;
  /* 11432ad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432ad8 push 0x11437b00 */
  push32((uint32_t)(0x11437b00u));
  /* 11432add call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432ae3u);
  /* 11432ae3 pop ecx */
  ECX = (pop32());
  /* 11432ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432ae6 pop ecx */
  ECX = (pop32());
  /* 11432ae7 jne 0x11432b01 */
  if (!C.zf) goto L_11432b01;
  /* 11432ae9 push edi */
  push32((uint32_t)(EDI));
  /* 11432aea push 0x11437958 */
  push32((uint32_t)(0x11437958u));
  /* 11432aef call esi */
  call_ind((uint32_t)(ESI), 0x11432af1u);
  /* 11432af1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432af3 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432af9u);
  /* 11432af9 push edi */
  push32((uint32_t)(EDI));
  /* 11432afa push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11432afc call ebp */
  call_ind((uint32_t)(EBP), 0x11432afeu);
  /* 11432afe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432b01:;
  /* 11432b01 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11432b03 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432b09u);
  /* 11432b09 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432b0b pop ecx */
  ECX = (pop32());
  /* 11432b0c je 0x11432b46 */
  if (C.zf) goto L_11432b46;
  /* 11432b0e push 5 */
  push32((uint32_t)(0x5u));
  /* 11432b10 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432b16u);
  /* 11432b16 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432b18 pop ecx */
  ECX = (pop32());
  /* 11432b19 jne 0x11432b46 */
  if (!C.zf) goto L_11432b46;
  /* 11432b1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11432b1d push 0x11437b58 */
  push32((uint32_t)(0x11437b58u));
  /* 11432b22 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432b28u);
  /* 11432b28 pop ecx */
  ECX = (pop32());
  /* 11432b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432b2b pop ecx */
  ECX = (pop32());
  /* 11432b2c jne 0x11432b46 */
  if (!C.zf) goto L_11432b46;
  /* 11432b2e push edi */
  push32((uint32_t)(EDI));
  /* 11432b2f push 0x11437a50 */
  push32((uint32_t)(0x11437a50u));
  /* 11432b34 call esi */
  call_ind((uint32_t)(ESI), 0x11432b36u);
  /* 11432b36 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432b38 call dword ptr [0x11436128] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436128))), 0x11432b3eu);
  /* 11432b3e push edi */
  push32((uint32_t)(EDI));
  /* 11432b3f push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 11432b41 call ebp */
  call_ind((uint32_t)(EBP), 0x11432b43u);
  /* 11432b43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432b46:;
  /* 11432b46 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432b48 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432b4eu);
  /* 11432b4e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432b50 pop ecx */
  ECX = (pop32());
  /* 11432b51 jne 0x11432c2c */
  if (!C.zf) goto L_11432c2c;
  /* 11432b57 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11432b59 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432b5fu);
  /* 11432b5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432b61 pop ecx */
  ECX = (pop32());
  /* 11432b62 je 0x11432c2c */
  if (C.zf) goto L_11432c2c;
  /* 11432b68 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432b6a push 0x114377f8 */
  push32((uint32_t)(0x114377f8u));
  /* 11432b6f call dword ptr [0x11436118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436118))), 0x11432b75u);
  /* 11432b75 pop ecx */
  ECX = (pop32());
  /* 11432b76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432b78 pop ecx */
  ECX = (pop32());
  /* 11432b79 jne 0x11432c2c */
  if (!C.zf) goto L_11432c2c;
  /* 11432b7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11432b81 push 0x11437b08 */
  push32((uint32_t)(0x11437b08u));
  /* 11432b86 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432b8cu);
  /* 11432b8c pop ecx */
  ECX = (pop32());
  /* 11432b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432b8f pop ecx */
  ECX = (pop32());
  /* 11432b90 jne 0x11432c2c */
  if (!C.zf) goto L_11432c2c;
  /* 11432b96 mov eax, dword ptr [0x11437b28] */
  EAX = (r32((uint32_t)(0x11437b28)));
  /* 11432b9b lea ecx, [eax + 0x4d2] */
  ECX = ((uint32_t)(EAX + 0x4d2));
  /* 11432ba1 add eax, 0x929 */
  { uint32_t _a=(EAX),_b=(0x929u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432ba6 push ecx */
  push32((uint32_t)(ECX));
  /* 11432ba7 push eax */
  push32((uint32_t)(EAX));
  /* 11432ba8 push 0x11437348 */
  push32((uint32_t)(0x11437348u));
  /* 11432bad call dword ptr [0x1143612c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143612c))), 0x11432bb3u);
  /* 11432bb3 mov eax, dword ptr [0x11437b28] */
  EAX = (r32((uint32_t)(0x11437b28)));
  /* 11432bb8 add eax, 0x929 */
  { uint32_t _a=(EAX),_b=(0x929u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432bbd push eax */
  push32((uint32_t)(EAX));
  /* 11432bbe push ebx */
  push32((uint32_t)(EBX));
  /* 11432bbf push edi */
  push32((uint32_t)(EDI));
  /* 11432bc0 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432bc6u);
  /* 11432bc6 mov eax, dword ptr [0x11437b28] */
  EAX = (r32((uint32_t)(0x11437b28)));
  /* 11432bcb add eax, 0x4d2 */
  { uint32_t _a=(EAX),_b=(0x4d2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11432bd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11432bd3 push edi */
  push32((uint32_t)(EDI));
  /* 11432bd4 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432bdau);
  /* 11432bda push 4 */
  push32((uint32_t)(0x4u));
  /* 11432bdc pop eax */
  EAX = (pop32());
  /* 11432bdd sub eax, dword ptr [0x114377b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377b8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11432be3 push 0xa */
  push32((uint32_t)(0xau));
  /* 11432be5 pop ecx */
  ECX = (pop32());
  /* 11432be6 imul eax, dword ptr [0x11437b28] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x11437b28)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11432bed cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11432bee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11432bf0 add eax, 0x4d2 */
  { uint32_t _a=(EAX),_b=(0x4d2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11432bf6 push 4 */
  push32((uint32_t)(0x4u));
  /* 11432bf8 push edi */
  push32((uint32_t)(EDI));
  /* 11432bf9 call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432bffu);
  /* 11432bff push 4 */
  push32((uint32_t)(0x4u));
  /* 11432c01 pop eax */
  EAX = (pop32());
  /* 11432c02 sub eax, dword ptr [0x114377b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377b8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11432c08 push 0xa */
  push32((uint32_t)(0xau));
  /* 11432c0a pop ecx */
  ECX = (pop32());
  /* 11432c0b imul eax, dword ptr [0x11437b28] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(0x11437b28)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11432c12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11432c13 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11432c15 add eax, 0x598 */
  { uint32_t _a=(EAX),_b=(0x598u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432c1a push eax */
  push32((uint32_t)(EAX));
  /* 11432c1b push 5 */
  push32((uint32_t)(0x5u));
  /* 11432c1d push edi */
  push32((uint32_t)(EDI));
  /* 11432c1e call dword ptr [0x11436110] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436110))), 0x11432c24u);
  /* 11432c24 push edi */
  push32((uint32_t)(EDI));
  /* 11432c25 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11432c27 call ebp */
  call_ind((uint32_t)(EBP), 0x11432c29u);
  /* 11432c29 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432c2c:;
  /* 11432c2c push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11432c2e call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432c34u);
  /* 11432c34 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432c36 pop ecx */
  ECX = (pop32());
  /* 11432c37 je 0x11432d81 */
  if (C.zf) goto L_11432d81;
  /* 11432c3d push 4 */
  push32((uint32_t)(0x4u));
  /* 11432c3f call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432c45u);
  /* 11432c45 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432c47 pop ecx */
  ECX = (pop32());
  /* 11432c48 je 0x11432d81 */
  if (C.zf) goto L_11432d81;
  /* 11432c4e mov eax, dword ptr [0x114377a8] */
  EAX = (r32((uint32_t)(0x114377a8)));
  /* 11432c53 cmp eax, dword ptr [0x11437998] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11437998))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11432c59 jg 0x11432d59 */
  if ((!C.zf&&C.sf==C.of)) goto L_11432d59;
  /* 11432c5f push edi */
  push32((uint32_t)(EDI));
  /* 11432c60 push 0x114379a8 */
  push32((uint32_t)(0x114379a8u));
  /* 11432c65 call esi */
  call_ind((uint32_t)(ESI), 0x11432c67u);
  /* 11432c67 push ebx */
  push32((uint32_t)(EBX));
  /* 11432c68 push 0x114379b0 */
  push32((uint32_t)(0x114379b0u));
  /* 11432c6d call esi */
  call_ind((uint32_t)(ESI), 0x11432c6fu);
  /* 11432c6f push edi */
  push32((uint32_t)(EDI));
  /* 11432c70 push edi */
  push32((uint32_t)(EDI));
  /* 11432c71 push 0x11437b20 */
  push32((uint32_t)(0x11437b20u));
  /* 11432c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432c78 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432c7eu);
  /* 11432c7e push ebx */
  push32((uint32_t)(EBX));
  /* 11432c7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11432c81 call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11432c87u);
  /* 11432c87 push edi */
  push32((uint32_t)(EDI));
  /* 11432c88 push 0x114379a0 */
  push32((uint32_t)(0x114379a0u));
  /* 11432c8d call esi */
  call_ind((uint32_t)(ESI), 0x11432c8fu);
  /* 11432c8f push edi */
  push32((uint32_t)(EDI));
  /* 11432c90 push edi */
  push32((uint32_t)(EDI));
  /* 11432c91 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 11432c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432c98 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432c9eu);
  /* 11432c9e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432ca1 push ebx */
  push32((uint32_t)(EBX));
  /* 11432ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432ca4 call dword ptr [0x114360fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360fc))), 0x11432caau);
  /* 11432caa push ebx */
  push32((uint32_t)(EBX));
  /* 11432cab push 8 */
  push32((uint32_t)(0x8u));
  /* 11432cad call ebp */
  call_ind((uint32_t)(EBP), 0x11432cafu);
  /* 11432caf push edi */
  push32((uint32_t)(EDI));
  /* 11432cb0 push 0x114379f0 */
  push32((uint32_t)(0x114379f0u));
  /* 11432cb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432cb7 push 0x11437918 */
  push32((uint32_t)(0x11437918u));
  /* 11432cbc push 0x114378e0 */
  push32((uint32_t)(0x114378e0u));
  /* 11432cc1 push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 11432cc6 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x11432cccu);
  /* 11432ccc push edi */
  push32((uint32_t)(EDI));
  /* 11432ccd push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 11432cd2 call esi */
  call_ind((uint32_t)(ESI), 0x11432cd4u);
  /* 11432cd4 push edi */
  push32((uint32_t)(EDI));
  /* 11432cd5 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11432cda push 0x11437b48 */
  push32((uint32_t)(0x11437b48u));
  /* 11432cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 11432ce1 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432ce7u);
  /* 11432ce7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432cea push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11432cef push 0x11437820 */
  push32((uint32_t)(0x11437820u));
  /* 11432cf4 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11432cfau);
  /* 11432cfa push edi */
  push32((uint32_t)(EDI));
  /* 11432cfb push 0x11437a00 */
  push32((uint32_t)(0x11437a00u));
  /* 11432d00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432d02 push 0x11437928 */
  push32((uint32_t)(0x11437928u));
  /* 11432d07 push 0x114378f0 */
  push32((uint32_t)(0x114378f0u));
  /* 11432d0c push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11432d11 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x11432d17u);
  /* 11432d17 push edi */
  push32((uint32_t)(EDI));
  /* 11432d18 push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11432d1d call esi */
  call_ind((uint32_t)(ESI), 0x11432d1fu);
  /* 11432d1f push edi */
  push32((uint32_t)(EDI));
  /* 11432d20 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 11432d25 push 0x11437b48 */
  push32((uint32_t)(0x11437b48u));
  /* 11432d2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11432d2c call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432d32u);
  /* 11432d32 push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11432d37 push 0x11437828 */
  push32((uint32_t)(0x11437828u));
  /* 11432d3c call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x11432d42u);
  /* 11432d42 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11432d45 inc dword ptr [0x114377a8] */
  { uint32_t _r=(r32((uint32_t)(0x114377a8)))+1; w32((uint32_t)(0x114377a8), (_r)); fl_inc(_r,32); }
  /* 11432d4b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 11432d4d push 4 */
  push32((uint32_t)(0x4u));
  /* 11432d4f call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432d55u);
  /* 11432d55 pop ecx */
  ECX = (pop32());
  /* 11432d56 pop ecx */
  ECX = (pop32());
  /* 11432d57 jmp 0x11432d81 */
  goto L_11432d81;
L_11432d59:;
  /* 11432d59 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11432d5e push 4 */
  push32((uint32_t)(0x4u));
  /* 11432d60 mov dword ptr [0x114377a8], ebx */
  w32((uint32_t)(0x114377a8), (EBX));
  /* 11432d66 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432d6cu);
  /* 11432d6c push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11432d71 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432d73 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432d79u);
  /* 11432d79 push edi */
  push32((uint32_t)(EDI));
  /* 11432d7a push 6 */
  push32((uint32_t)(0x6u));
  /* 11432d7c call ebp */
  call_ind((uint32_t)(EBP), 0x11432d7eu);
  /* 11432d7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432d81:;
  /* 11432d81 push 6 */
  push32((uint32_t)(0x6u));
  /* 11432d83 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432d89u);
  /* 11432d89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432d8b pop ecx */
  ECX = (pop32());
  /* 11432d8c jne 0x11432ddd */
  if (!C.zf) goto L_11432ddd;
  /* 11432d8e push 5 */
  push32((uint32_t)(0x5u));
  /* 11432d90 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432d96u);
  /* 11432d96 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432d98 pop ecx */
  ECX = (pop32());
  /* 11432d99 je 0x11432ddd */
  if (C.zf) goto L_11432ddd;
  /* 11432d9b push edi */
  push32((uint32_t)(EDI));
  /* 11432d9c push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11432da1 call esi */
  call_ind((uint32_t)(ESI), 0x11432da3u);
  /* 11432da3 push edi */
  push32((uint32_t)(EDI));
  /* 11432da4 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11432da6 push 0x11437b50 */
  push32((uint32_t)(0x11437b50u));
  /* 11432dab push 2 */
  push32((uint32_t)(0x2u));
  /* 11432dad call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x11432db3u);
  /* 11432db3 push edi */
  push32((uint32_t)(EDI));
  /* 11432db4 push 0x11437968 */
  push32((uint32_t)(0x11437968u));
  /* 11432db9 call esi */
  call_ind((uint32_t)(ESI), 0x11432dbbu);
  /* 11432dbb push 2 */
  push32((uint32_t)(0x2u));
  /* 11432dbd call dword ptr [0x114360b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b8))), 0x11432dc3u);
  /* 11432dc3 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 11432dc8 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432dca call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432dd0u);
  /* 11432dd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11432dd1 push 6 */
  push32((uint32_t)(0x6u));
  /* 11432dd3 call ebp */
  call_ind((uint32_t)(EBP), 0x11432dd5u);
  /* 11432dd5 push edi */
  push32((uint32_t)(EDI));
  /* 11432dd6 push 7 */
  push32((uint32_t)(0x7u));
  /* 11432dd8 call ebp */
  call_ind((uint32_t)(EBP), 0x11432ddau);
  /* 11432dda add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432ddd:;
  /* 11432ddd push 7 */
  push32((uint32_t)(0x7u));
  /* 11432ddf call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432de5u);
  /* 11432de5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432de7 pop ecx */
  ECX = (pop32());
  /* 11432de8 jne 0x11432e56 */
  if (!C.zf) goto L_11432e56;
  /* 11432dea push 5 */
  push32((uint32_t)(0x5u));
  /* 11432dec call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432df2u);
  /* 11432df2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432df4 pop ecx */
  ECX = (pop32());
  /* 11432df5 je 0x11432e56 */
  if (C.zf) goto L_11432e56;
  /* 11432df7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11432df9 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432dffu);
  /* 11432dff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e01 pop ecx */
  ECX = (pop32());
  /* 11432e02 je 0x11432e30 */
  if (C.zf) goto L_11432e30;
  /* 11432e04 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432e06 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432e0cu);
  /* 11432e0c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e0e pop ecx */
  ECX = (pop32());
  /* 11432e0f jne 0x11432e30 */
  if (!C.zf) goto L_11432e30;
  /* 11432e11 push edi */
  push32((uint32_t)(EDI));
  /* 11432e12 push 0x11437840 */
  push32((uint32_t)(0x11437840u));
  /* 11432e17 call esi */
  call_ind((uint32_t)(ESI), 0x11432e19u);
  /* 11432e19 push edi */
  push32((uint32_t)(EDI));
  /* 11432e1a push edi */
  push32((uint32_t)(EDI));
  /* 11432e1b push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 11432e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432e22 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432e28u);
  /* 11432e28 push edi */
  push32((uint32_t)(EDI));
  /* 11432e29 push 0xa */
  push32((uint32_t)(0xau));
  /* 11432e2b call ebp */
  call_ind((uint32_t)(EBP), 0x11432e2du);
  /* 11432e2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432e30:;
  /* 11432e30 push ebx */
  push32((uint32_t)(EBX));
  /* 11432e31 push 7 */
  push32((uint32_t)(0x7u));
  /* 11432e33 call ebp */
  call_ind((uint32_t)(EBP), 0x11432e35u);
  /* 11432e35 push edi */
  push32((uint32_t)(EDI));
  /* 11432e36 push 8 */
  push32((uint32_t)(0x8u));
  /* 11432e38 call ebp */
  call_ind((uint32_t)(EBP), 0x11432e3au);
  /* 11432e3a push ebx */
  push32((uint32_t)(EBX));
  /* 11432e3b push 9 */
  push32((uint32_t)(0x9u));
  /* 11432e3d call ebp */
  call_ind((uint32_t)(EBP), 0x11432e3fu);
  /* 11432e3f mov eax, dword ptr [0x11437998] */
  EAX = (r32((uint32_t)(0x11437998)));
  /* 11432e44 add eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11432e47 imul eax, eax, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x64u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11432e4a push eax */
  push32((uint32_t)(EAX));
  /* 11432e4b push 5 */
  push32((uint32_t)(0x5u));
  /* 11432e4d call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11432e53u);
  /* 11432e53 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432e56:;
  /* 11432e56 push 8 */
  push32((uint32_t)(0x8u));
  /* 11432e58 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432e5eu);
  /* 11432e5e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e60 pop ecx */
  ECX = (pop32());
  /* 11432e61 jne 0x11432e95 */
  if (!C.zf) goto L_11432e95;
  /* 11432e63 push 9 */
  push32((uint32_t)(0x9u));
  /* 11432e65 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432e6bu);
  /* 11432e6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e6d pop ecx */
  ECX = (pop32());
  /* 11432e6e je 0x11432e95 */
  if (C.zf) goto L_11432e95;
  /* 11432e70 push 5 */
  push32((uint32_t)(0x5u));
  /* 11432e72 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432e78u);
  /* 11432e78 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e7a pop ecx */
  ECX = (pop32());
  /* 11432e7b je 0x11432e95 */
  if (C.zf) goto L_11432e95;
  /* 11432e7d push edi */
  push32((uint32_t)(EDI));
  /* 11432e7e push 0x11437968 */
  push32((uint32_t)(0x11437968u));
  /* 11432e83 call esi */
  call_ind((uint32_t)(ESI), 0x11432e85u);
  /* 11432e85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11432e87 call dword ptr [0x1143611c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143611c))), 0x11432e8du);
  /* 11432e8d push edi */
  push32((uint32_t)(EDI));
  /* 11432e8e push 9 */
  push32((uint32_t)(0x9u));
  /* 11432e90 call ebp */
  call_ind((uint32_t)(EBP), 0x11432e92u);
  /* 11432e92 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432e95:;
  /* 11432e95 push 8 */
  push32((uint32_t)(0x8u));
  /* 11432e97 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432e9du);
  /* 11432e9d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432e9f pop ecx */
  ECX = (pop32());
  /* 11432ea0 jne 0x11432ec6 */
  if (!C.zf) goto L_11432ec6;
  /* 11432ea2 push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11432ea7 call dword ptr [0x11436120] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436120))), 0x11432eadu);
  /* 11432ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432eaf pop ecx */
  ECX = (pop32());
  /* 11432eb0 je 0x11432ec6 */
  if (C.zf) goto L_11432ec6;
  /* 11432eb2 push edi */
  push32((uint32_t)(EDI));
  /* 11432eb3 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 11432eb8 push 0x11437830 */
  push32((uint32_t)(0x11437830u));
  /* 11432ebd call dword ptr [0x11436124] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436124))), 0x11432ec3u);
  /* 11432ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432ec6:;
  /* 11432ec6 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11432ec8 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432eceu);
  /* 11432ece test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432ed0 pop ecx */
  ECX = (pop32());
  /* 11432ed1 je 0x11432f0c */
  if (C.zf) goto L_11432f0c;
  /* 11432ed3 push edi */
  push32((uint32_t)(EDI));
  /* 11432ed4 push 0x11437a60 */
  push32((uint32_t)(0x11437a60u));
  /* 11432ed9 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432edfu);
  /* 11432edf pop ecx */
  ECX = (pop32());
  /* 11432ee0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432ee2 pop ecx */
  ECX = (pop32());
  /* 11432ee3 jle 0x11432f0c */
  if ((C.zf||C.sf!=C.of)) goto L_11432f0c;
  /* 11432ee5 push edi */
  push32((uint32_t)(EDI));
  /* 11432ee6 push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 11432eeb call esi */
  call_ind((uint32_t)(ESI), 0x11432eedu);
  /* 11432eed push ebx */
  push32((uint32_t)(EBX));
  /* 11432eee push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 11432ef3 call esi */
  call_ind((uint32_t)(ESI), 0x11432ef5u);
  /* 11432ef5 push edi */
  push32((uint32_t)(EDI));
  /* 11432ef6 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11432ef8 push 0x11437a78 */
  push32((uint32_t)(0x11437a78u));
  /* 11432efd push ebx */
  push32((uint32_t)(EBX));
  /* 11432efe call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432f04u);
  /* 11432f04 push edi */
  push32((uint32_t)(EDI));
  /* 11432f05 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11432f07 call ebp */
  call_ind((uint32_t)(EBP), 0x11432f09u);
  /* 11432f09 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432f0c:;
  /* 11432f0c push 0xc */
  push32((uint32_t)(0xcu));
  /* 11432f0e call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432f14u);
  /* 11432f14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432f16 pop ecx */
  ECX = (pop32());
  /* 11432f17 jne 0x11432f61 */
  if (!C.zf) goto L_11432f61;
  /* 11432f19 push edi */
  push32((uint32_t)(EDI));
  /* 11432f1a push 0x11437a78 */
  push32((uint32_t)(0x11437a78u));
  /* 11432f1f call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432f25u);
  /* 11432f25 pop ecx */
  ECX = (pop32());
  /* 11432f26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432f28 pop ecx */
  ECX = (pop32());
  /* 11432f29 jne 0x11432f61 */
  if (!C.zf) goto L_11432f61;
  /* 11432f2b push edi */
  push32((uint32_t)(EDI));
  /* 11432f2c push 0x11437978 */
  push32((uint32_t)(0x11437978u));
  /* 11432f31 call esi */
  call_ind((uint32_t)(ESI), 0x11432f33u);
  /* 11432f33 push edi */
  push32((uint32_t)(EDI));
  /* 11432f34 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11432f36 push 0x114378b8 */
  push32((uint32_t)(0x114378b8u));
  /* 11432f3b push ebx */
  push32((uint32_t)(EBX));
  /* 11432f3c call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432f42u);
  /* 11432f42 push edi */
  push32((uint32_t)(EDI));
  /* 11432f43 push 0x11437980 */
  push32((uint32_t)(0x11437980u));
  /* 11432f48 call esi */
  call_ind((uint32_t)(ESI), 0x11432f4au);
  /* 11432f4a push edi */
  push32((uint32_t)(EDI));
  /* 11432f4b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11432f4d push 0x114378c8 */
  push32((uint32_t)(0x114378c8u));
  /* 11432f52 push ebx */
  push32((uint32_t)(EBX));
  /* 11432f53 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432f59u);
  /* 11432f59 push ebx */
  push32((uint32_t)(EBX));
  /* 11432f5a push 0xc */
  push32((uint32_t)(0xcu));
  /* 11432f5c call ebp */
  call_ind((uint32_t)(EBP), 0x11432f5eu);
  /* 11432f5e add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432f61:;
  /* 11432f61 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11432f63 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432f69u);
  /* 11432f69 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432f6b pop ecx */
  ECX = (pop32());
  /* 11432f6c je 0x11432f98 */
  if (C.zf) goto L_11432f98;
  /* 11432f6e push edi */
  push32((uint32_t)(EDI));
  /* 11432f6f push 0x11437a78 */
  push32((uint32_t)(0x11437a78u));
  /* 11432f74 call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432f7au);
  /* 11432f7a pop ecx */
  ECX = (pop32());
  /* 11432f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432f7d pop ecx */
  ECX = (pop32());
  /* 11432f7e jle 0x11432f98 */
  if ((C.zf||C.sf!=C.of)) goto L_11432f98;
  /* 11432f80 push edi */
  push32((uint32_t)(EDI));
  /* 11432f81 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11432f86 call esi */
  call_ind((uint32_t)(ESI), 0x11432f88u);
  /* 11432f88 push ebx */
  push32((uint32_t)(EBX));
  /* 11432f89 push ebx */
  push32((uint32_t)(EBX));
  /* 11432f8a call dword ptr [0x114360f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f0))), 0x11432f90u);
  /* 11432f90 push edi */
  push32((uint32_t)(EDI));
  /* 11432f91 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11432f93 call ebp */
  call_ind((uint32_t)(EBP), 0x11432f95u);
  /* 11432f95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432f98:;
  /* 11432f98 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11432f9a call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432fa0u);
  /* 11432fa0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432fa2 pop ecx */
  ECX = (pop32());
  /* 11432fa3 jne 0x11432fd6 */
  if (!C.zf) goto L_11432fd6;
  /* 11432fa5 push edi */
  push32((uint32_t)(EDI));
  /* 11432fa6 push 0x11437a78 */
  push32((uint32_t)(0x11437a78u));
  /* 11432fab call dword ptr [0x1143610c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143610c))), 0x11432fb1u);
  /* 11432fb1 pop ecx */
  ECX = (pop32());
  /* 11432fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11432fb4 pop ecx */
  ECX = (pop32());
  /* 11432fb5 jne 0x11432fd6 */
  if (!C.zf) goto L_11432fd6;
  /* 11432fb7 push edi */
  push32((uint32_t)(EDI));
  /* 11432fb8 push 0x114379b8 */
  push32((uint32_t)(0x114379b8u));
  /* 11432fbd call esi */
  call_ind((uint32_t)(ESI), 0x11432fbfu);
  /* 11432fbf push edi */
  push32((uint32_t)(EDI));
  /* 11432fc0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11432fc2 push 0x114378b0 */
  push32((uint32_t)(0x114378b0u));
  /* 11432fc7 push ebx */
  push32((uint32_t)(EBX));
  /* 11432fc8 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x11432fceu);
  /* 11432fce push ebx */
  push32((uint32_t)(EBX));
  /* 11432fcf push 0xe */
  push32((uint32_t)(0xeu));
  /* 11432fd1 call ebp */
  call_ind((uint32_t)(EBP), 0x11432fd3u);
  /* 11432fd3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11432fd6:;
  /* 11432fd6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11432fd8 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432fdeu);
  /* 11432fde test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432fe0 pop ecx */
  ECX = (pop32());
  /* 11432fe1 je 0x11433115 */
  if (C.zf) goto L_11433115;
  /* 11432fe7 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11432fe9 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11432fefu);
  /* 11432fef test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432ff1 pop ecx */
  ECX = (pop32());
  /* 11432ff2 jne 0x11433005 */
  if (!C.zf) goto L_11433005;
  /* 11432ff4 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11432ff6 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11432ffcu);
  /* 11432ffc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11432ffe pop ecx */
  ECX = (pop32());
  /* 11432fff jne 0x11433115 */
  if (!C.zf) goto L_11433115;
L_11433005:;
  /* 11433005 push 0x11437340 */
  push32((uint32_t)(0x11437340u));
  /* 1143300a call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x11433010u);
  /* 11433010 push edi */
  push32((uint32_t)(EDI));
  /* 11433011 push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 11433016 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433018 push 0x11437a80 */
  push32((uint32_t)(0x11437a80u));
  /* 1143301d push 0x11437850 */
  push32((uint32_t)(0x11437850u));
  /* 11433022 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11433027 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x1143302du);
  /* 1143302d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11433030 cmp dword ptr [0x114377b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x114377b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433037 jle 0x11433059 */
  if ((C.zf||C.sf!=C.of)) goto L_11433059;
  /* 11433039 push edi */
  push32((uint32_t)(EDI));
  /* 1143303a push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 1143303f push 3 */
  push32((uint32_t)(0x3u));
  /* 11433041 push 0x11437a80 */
  push32((uint32_t)(0x11437a80u));
  /* 11433046 push 0x11437850 */
  push32((uint32_t)(0x11437850u));
  /* 1143304b push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11433050 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x11433056u);
  /* 11433056 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433059:;
  /* 11433059 mov eax, dword ptr [0x114377e0] */
  EAX = (r32((uint32_t)(0x114377e0)));
  /* 1143305e mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11433064 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433068 jle 0x114330c7 */
  if ((C.zf||C.sf!=C.of)) goto L_114330c7;
L_1143306a:;
  /* 1143306a push edi */
  push32((uint32_t)(EDI));
  /* 1143306b push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 11433070 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433072 push 0x114377f0 */
  push32((uint32_t)(0x114377f0u));
  /* 11433077 push 0x11437898 */
  push32((uint32_t)(0x11437898u));
  /* 1143307c push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 11433081 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x11433087u);
  /* 11433087 push edi */
  push32((uint32_t)(EDI));
  /* 11433088 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 1143308d call esi */
  call_ind((uint32_t)(ESI), 0x1143308fu);
  /* 1143308f push edi */
  push32((uint32_t)(EDI));
  /* 11433090 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11433092 push 0x11437a08 */
  push32((uint32_t)(0x11437a08u));
  /* 11433097 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433099 call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x1143309fu);
  /* 1143309f push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 114330a4 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 114330a9 call dword ptr [0x114360dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360dc))), 0x114330afu);
  /* 114330af mov eax, dword ptr [0x114377e0] */
  EAX = (r32((uint32_t)(0x114377e0)));
  /* 114330b4 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114330b7 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 114330bd add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114330bf cmp dword ptr [0x114377ac], eax */
  { uint32_t _a=(r32((uint32_t)(0x114377ac))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114330c5 jl 0x1143306a */
  if ((C.sf!=C.of)) goto L_1143306a;
L_114330c7:;
  /* 114330c7 push edi */
  push32((uint32_t)(EDI));
  /* 114330c8 push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 114330cd call esi */
  call_ind((uint32_t)(ESI), 0x114330cfu);
  /* 114330cf push 3 */
  push32((uint32_t)(0x3u));
  /* 114330d1 call dword ptr [0x114360f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360f4))), 0x114330d7u);
  /* 114330d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 114330d9 call dword ptr [0x11436104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436104))), 0x114330dfu);
  /* 114330df push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 114330e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 114330e3 call dword ptr [0x114360cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360cc))), 0x114330e9u);
  /* 114330e9 push dword ptr [0x114377b8] */
  push32((uint32_t)(r32((uint32_t)(0x114377b8))));
  /* 114330ef push ebx */
  push32((uint32_t)(EBX));
  /* 114330f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 114330f2 push ebx */
  push32((uint32_t)(EBX));
  /* 114330f3 push 0x11437334 */
  push32((uint32_t)(0x11437334u));
  /* 114330f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 114330fa call dword ptr [0x11436108] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436108))), 0x11433100u);
  /* 11433100 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11433105 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11433107 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143310du);
  /* 1143310d push edi */
  push32((uint32_t)(EDI));
  /* 1143310e push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11433110 call ebp */
  call_ind((uint32_t)(EBP), 0x11433112u);
  /* 11433112 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433115:;
  /* 11433115 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11433117 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x1143311du);
  /* 1143311d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143311f pop ecx */
  ECX = (pop32());
  /* 11433120 je 0x11433213 */
  if (C.zf) goto L_11433213;
  /* 11433126 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11433128 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x1143312eu);
  /* 1143312e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433130 pop ecx */
  ECX = (pop32());
  /* 11433131 je 0x11433213 */
  if (C.zf) goto L_11433213;
  /* 11433137 mov eax, dword ptr [0x114377e0] */
  EAX = (r32((uint32_t)(0x114377e0)));
  /* 1143313c mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11433142 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11433145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433147 jle 0x11433178 */
  if ((C.zf||C.sf!=C.of)) goto L_11433178;
L_11433149:;
  /* 11433149 push 3 */
  push32((uint32_t)(0x3u));
  /* 1143314b push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 11433150 push 0x11437a90 */
  push32((uint32_t)(0x11437a90u));
  /* 11433155 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 1143315a call 0x11431012 */
  push32(0x1143315fu); f_11431012();
  /* 1143315f mov eax, dword ptr [0x114377e0] */
  EAX = (r32((uint32_t)(0x114377e0)));
  /* 11433164 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11433167 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 1143316d lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11433170 cmp dword ptr [0x114377ac], eax */
  { uint32_t _a=(r32((uint32_t)(0x114377ac))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433176 jl 0x11433149 */
  if ((C.sf!=C.of)) goto L_11433149;
L_11433178:;
  /* 11433178 mov eax, dword ptr [0x114379d8] */
  EAX = (r32((uint32_t)(0x114379d8)));
  /* 1143317d mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 11433183 lea ecx, [eax + eax] */
  ECX = ((uint32_t)(EAX + EAX*1));
  /* 11433186 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11433188 jle 0x114331b9 */
  if ((C.zf||C.sf!=C.of)) goto L_114331b9;
L_1143318a:;
  /* 1143318a push 3 */
  push32((uint32_t)(0x3u));
  /* 1143318c push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 11433191 push 0x11437aa0 */
  push32((uint32_t)(0x11437aa0u));
  /* 11433196 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 1143319b call 0x11431012 */
  push32(0x114331a0u); f_11431012();
  /* 114331a0 mov eax, dword ptr [0x114379d8] */
  EAX = (r32((uint32_t)(0x114379d8)));
  /* 114331a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114331a8 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 114331ae lea ecx, [eax + eax] */
  ECX = ((uint32_t)(EAX + EAX*1));
  /* 114331b1 cmp dword ptr [0x114377ac], ecx */
  { uint32_t _a=(r32((uint32_t)(0x114377ac))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114331b7 jl 0x1143318a */
  if ((C.sf!=C.of)) goto L_1143318a;
L_114331b9:;
  /* 114331b9 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114331bb mov dword ptr [0x114377ac], edi */
  w32((uint32_t)(0x114377ac), (EDI));
  /* 114331c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114331c3 jle 0x114331f3 */
  if ((C.zf||C.sf!=C.of)) goto L_114331f3;
L_114331c5:;
  /* 114331c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 114331c7 push 0x114379f8 */
  push32((uint32_t)(0x114379f8u));
  /* 114331cc push 0x11437ab8 */
  push32((uint32_t)(0x11437ab8u));
  /* 114331d1 push 0x11437990 */
  push32((uint32_t)(0x11437990u));
  /* 114331d6 call 0x11431012 */
  push32(0x114331dbu); f_11431012();
  /* 114331db mov eax, dword ptr [0x114379d8] */
  EAX = (r32((uint32_t)(0x114379d8)));
  /* 114331e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114331e3 inc dword ptr [0x114377ac] */
  { uint32_t _r=(r32((uint32_t)(0x114377ac)))+1; w32((uint32_t)(0x114377ac), (_r)); fl_inc(_r,32); }
  /* 114331e9 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114331eb cmp dword ptr [0x114377ac], eax */
  { uint32_t _a=(r32((uint32_t)(0x114377ac))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114331f1 jl 0x114331c5 */
  if ((C.sf!=C.of)) goto L_114331c5;
L_114331f3:;
  /* 114331f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 114331f5 pop eax */
  EAX = (pop32());
  /* 114331f6 sub eax, dword ptr [0x114377b8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x114377b8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114331fc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11433202 push eax */
  push32((uint32_t)(EAX));
  /* 11433203 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11433205 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x1143320bu);
  /* 1143320b push edi */
  push32((uint32_t)(EDI));
  /* 1143320c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1143320e call ebp */
  call_ind((uint32_t)(EBP), 0x11433210u);
  /* 11433210 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433213:;
  /* 11433213 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11433215 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x1143321bu);
  /* 1143321b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143321d pop ecx */
  ECX = (pop32());
  /* 1143321e je 0x11433281 */
  if (C.zf) goto L_11433281;
  /* 11433220 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11433222 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11433228u);
  /* 11433228 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143322a pop ecx */
  ECX = (pop32());
  /* 1143322b je 0x11433281 */
  if (C.zf) goto L_11433281;
  /* 1143322d push edi */
  push32((uint32_t)(EDI));
  /* 1143322e push 0x11437b18 */
  push32((uint32_t)(0x11437b18u));
  /* 11433233 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433235 push 0x11437b10 */
  push32((uint32_t)(0x11437b10u));
  /* 1143323a push 0x11437898 */
  push32((uint32_t)(0x11437898u));
  /* 1143323f push 0x11437970 */
  push32((uint32_t)(0x11437970u));
  /* 11433244 call dword ptr [0x11436154] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436154))), 0x1143324au);
  /* 1143324a push edi */
  push32((uint32_t)(EDI));
  /* 1143324b push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 11433250 call esi */
  call_ind((uint32_t)(ESI), 0x11433252u);
  /* 11433252 push ebx */
  push32((uint32_t)(EBX));
  /* 11433253 push 0x11437970 */
  push32((uint32_t)(0x11437970u));
  /* 11433258 call esi */
  call_ind((uint32_t)(ESI), 0x1143325au);
  /* 1143325a push edi */
  push32((uint32_t)(EDI));
  /* 1143325b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1143325d push 0x11437a08 */
  push32((uint32_t)(0x11437a08u));
  /* 11433262 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433264 call dword ptr [0x114360ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360ec))), 0x1143326au);
  /* 1143326a push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1143326f push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11433271 call dword ptr [0x114360d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360d4))), 0x11433277u);
  /* 11433277 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143327a push edi */
  push32((uint32_t)(EDI));
  /* 1143327b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1143327d call ebp */
  call_ind((uint32_t)(EBP), 0x1143327fu);
  /* 1143327f pop ecx */
  ECX = (pop32());
  /* 11433280 pop ecx */
  ECX = (pop32());
L_11433281:;
  /* 11433281 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11433283 call dword ptr [0x114360b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360b4))), 0x11433289u);
  /* 11433289 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143328b pop ecx */
  ECX = (pop32());
  /* 1143328c je 0x114332bb */
  if (C.zf) goto L_114332bb;
  /* 1143328e push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11433290 call dword ptr [0x11436114] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436114))), 0x11433296u);
  /* 11433296 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433298 pop ecx */
  ECX = (pop32());
  /* 11433299 je 0x114332bb */
  if (C.zf) goto L_114332bb;
  /* 1143329b push edi */
  push32((uint32_t)(EDI));
  /* 1143329c push 0x11437b30 */
  push32((uint32_t)(0x11437b30u));
  /* 114332a1 call esi */
  call_ind((uint32_t)(ESI), 0x114332a3u);
  /* 114332a3 push edi */
  push32((uint32_t)(EDI));
  /* 114332a4 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 114332a6 push 0x11437880 */
  push32((uint32_t)(0x11437880u));
  /* 114332ab push 3 */
  push32((uint32_t)(0x3u));
  /* 114332ad call dword ptr [0x114360e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360e8))), 0x114332b3u);
  /* 114332b3 push edi */
  push32((uint32_t)(EDI));
  /* 114332b4 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 114332b6 call ebp */
  call_ind((uint32_t)(EBP), 0x114332b8u);
  /* 114332b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114332bb:;
  /* 114332bb mov esi, dword ptr [0x114360b4] */
  ESI = (r32((uint32_t)(0x114360b4)));
  /* 114332c1 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 114332c3 call esi */
  call_ind((uint32_t)(ESI), 0x114332c5u);
  /* 114332c5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114332c7 pop ecx */
  ECX = (pop32());
  /* 114332c8 je 0x114332e9 */
  if (C.zf) goto L_114332e9;
  /* 114332ca push ebx */
  push32((uint32_t)(EBX));
  /* 114332cb call dword ptr [0x11436134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436134))), 0x114332d1u);
  /* 114332d1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114332d3 pop ecx */
  ECX = (pop32());
  /* 114332d4 je 0x114332e9 */
  if (C.zf) goto L_114332e9;
  /* 114332d6 push 0x1143732c */
  push32((uint32_t)(0x1143732cu));
  /* 114332db call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x114332e1u);
  /* 114332e1 push edi */
  push32((uint32_t)(EDI));
  /* 114332e2 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 114332e4 call ebp */
  call_ind((uint32_t)(EBP), 0x114332e6u);
  /* 114332e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114332e9:;
  /* 114332e9 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 114332eb call esi */
  call_ind((uint32_t)(ESI), 0x114332edu);
  /* 114332ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114332ef pop ecx */
  ECX = (pop32());
  /* 114332f0 je 0x11433312 */
  if (C.zf) goto L_11433312;
  /* 114332f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 114332f4 call dword ptr [0x11436134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436134))), 0x114332fau);
  /* 114332fa test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114332fc pop ecx */
  ECX = (pop32());
  /* 114332fd je 0x11433312 */
  if (C.zf) goto L_11433312;
  /* 114332ff push 0x11437324 */
  push32((uint32_t)(0x11437324u));
  /* 11433304 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x1143330au);
  /* 1143330a push edi */
  push32((uint32_t)(EDI));
  /* 1143330b push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1143330d call ebp */
  call_ind((uint32_t)(EBP), 0x1143330fu);
  /* 1143330f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433312:;
  /* 11433312 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11433314 call esi */
  call_ind((uint32_t)(ESI), 0x11433316u);
  /* 11433316 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433318 pop ecx */
  ECX = (pop32());
  /* 11433319 jne 0x11433344 */
  if (!C.zf) goto L_11433344;
  /* 1143331b push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1143331d call esi */
  call_ind((uint32_t)(ESI), 0x1143331fu);
  /* 1143331f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433321 pop ecx */
  ECX = (pop32());
  /* 11433322 je 0x11433344 */
  if (C.zf) goto L_11433344;
  /* 11433324 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433326 call dword ptr [0x11436134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436134))), 0x1143332cu);
  /* 1143332c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143332e pop ecx */
  ECX = (pop32());
  /* 1143332f je 0x11433344 */
  if (C.zf) goto L_11433344;
  /* 11433331 push 0x1143731c */
  push32((uint32_t)(0x1143731cu));
  /* 11433336 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x1143333cu);
  /* 1143333c push edi */
  push32((uint32_t)(EDI));
  /* 1143333d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1143333f call ebp */
  call_ind((uint32_t)(EBP), 0x11433341u);
  /* 11433341 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433344:;
  /* 11433344 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11433346 call esi */
  call_ind((uint32_t)(ESI), 0x11433348u);
  /* 11433348 mov ebp, dword ptr [0x11436138] */
  EBP = (r32((uint32_t)(0x11436138)));
  /* 1143334e pop ecx */
  ECX = (pop32());
  /* 1143334f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433351 jne 0x1143338c */
  if (!C.zf) goto L_1143338c;
  /* 11433353 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11433355 call esi */
  call_ind((uint32_t)(ESI), 0x11433357u);
  /* 11433357 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433359 pop ecx */
  ECX = (pop32());
  /* 1143335a je 0x11433365 */
  if (C.zf) goto L_11433365;
  /* 1143335c push 5 */
  push32((uint32_t)(0x5u));
  /* 1143335e call esi */
  call_ind((uint32_t)(ESI), 0x11433360u);
  /* 11433360 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433362 pop ecx */
  ECX = (pop32());
  /* 11433363 je 0x1143338c */
  if (C.zf) goto L_1143338c;
L_11433365:;
  /* 11433365 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11433367 call esi */
  call_ind((uint32_t)(ESI), 0x11433369u);
  /* 11433369 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143336b pop ecx */
  ECX = (pop32());
  /* 1143336c jne 0x1143338c */
  if (!C.zf) goto L_1143338c;
  /* 1143336e push 0x11437314 */
  push32((uint32_t)(0x11437314u));
  /* 11433373 call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x11433379u);
  /* 11433379 pop ecx */
  ECX = (pop32());
  /* 1143337a mov esi, ebx */
  ESI = (EBX);
L_1143337c:;
  /* 1143337c push esi */
  push32((uint32_t)(ESI));
  /* 1143337d call ebp */
  call_ind((uint32_t)(EBP), 0x1143337fu);
  /* 1143337f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11433380 pop ecx */
  ECX = (pop32());
  /* 11433381 cmp esi, 0x19 */
  { uint32_t _a=(ESI),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433384 jl 0x1143337c */
  if ((C.sf!=C.of)) goto L_1143337c;
  /* 11433386 call dword ptr [0x11436130] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436130))), 0x1143338cu);
L_1143338c:;
  /* 1143338c push edi */
  push32((uint32_t)(EDI));
  /* 1143338d call dword ptr [0x11436134] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436134))), 0x11433393u);
  /* 11433393 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11433395 pop ecx */
  ECX = (pop32());
  /* 11433396 je 0x114333b4 */
  if (C.zf) goto L_114333b4;
  /* 11433398 push 0x1143730c */
  push32((uint32_t)(0x1143730cu));
  /* 1143339d call dword ptr [0x11436100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436100))), 0x114333a3u);
  /* 114333a3 pop ecx */
  ECX = (pop32());
L_114333a4:;
  /* 114333a4 push ebx */
  push32((uint32_t)(EBX));
  /* 114333a5 call ebp */
  call_ind((uint32_t)(EBP), 0x114333a7u);
  /* 114333a7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 114333a8 pop ecx */
  ECX = (pop32());
  /* 114333a9 cmp ebx, 0x19 */
  { uint32_t _a=(EBX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114333ac jl 0x114333a4 */
  if ((C.sf!=C.of)) goto L_114333a4;
  /* 114333ae call dword ptr [0x11436140] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436140))), 0x114333b4u);
L_114333b4:;
  /* 114333b4 pop edi */
  EDI = (pop32());
  /* 114333b5 pop esi */
  ESI = (pop32());
  /* 114333b6 pop ebp */
  EBP = (pop32());
  /* 114333b7 pop ebx */
  EBX = (pop32());
  /* 114333b8 pop ecx */
  ECX = (pop32());
  /* 114333b9 ret  */
  ESPCHK(0x1143169cu, _esp0);
  ESP += 4; return;
}

/* FUN_100033ba @ 0x114333ba (217 bytes, 57 insns) */
void f_114333ba(void) {
  FTRACE(0x114333bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114333ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 114333be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114333c1 jne 0x1143344f */
  if (!C.zf) goto L_1143344f;
  /* 114333c7 call dword ptr [0x11436098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436098))), 0x114333cdu);
  /* 114333cd push 1 */
  push32((uint32_t)(0x1u));
  /* 114333cf mov dword ptr [0x11437b7c], eax */
  w32((uint32_t)(0x11437b7c), (EAX));
  /* 114333d4 call 0x11433dee */
  push32(0x114333d9u); f_11433dee();
  /* 114333d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114333db pop ecx */
  ECX = (pop32());
  /* 114333dc je 0x1143341a */
  if (C.zf) goto L_1143341a;
  /* 114333de mov eax, dword ptr [0x11437b7c] */
  EAX = (r32((uint32_t)(0x11437b7c)));
  /* 114333e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 114333e5 mov cl, byte ptr [0x11437b7d] */
  CL = (r8((uint32_t)(0x11437b7d)));
  /* 114333eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 114333f0 shr dword ptr [0x11437b7c], 0x10 */
  w32((uint32_t)(0x11437b7c), (sh_shr((uint32_t)(r32((uint32_t)(0x11437b7c))), (0x10u)&0x1f, 32)));
  /* 114333f7 mov dword ptr [0x11437b84], eax */
  w32((uint32_t)(0x11437b84), (EAX));
  /* 114333fc mov dword ptr [0x11437b88], ecx */
  w32((uint32_t)(0x11437b88), (ECX));
  /* 11433402 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11433405 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433407 mov dword ptr [0x11437b80], eax */
  w32((uint32_t)(0x11437b80), (EAX));
  /* 1143340c call 0x11433681 */
  push32(0x11433411u); f_11433681();
  /* 11433411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433413 jne 0x1143341e */
  if (!C.zf) goto L_1143341e;
  /* 11433415 call 0x11433e2a */
  push32(0x1143341au); f_11433e2a();
L_1143341a:;
  /* 1143341a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1143341c jmp 0x11433490 */
  goto L_11433490;
L_1143341e:;
  /* 1143341e call dword ptr [0x11436094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436094))), 0x11433424u);
  /* 11433424 mov dword ptr [0x114380d8], eax */
  w32((uint32_t)(0x114380d8), (EAX));
  /* 11433429 call 0x11433cbc */
  push32(0x1143342eu); f_11433cbc();
  /* 1143342e mov dword ptr [0x11437b68], eax */
  w32((uint32_t)(0x11437b68), (EAX));
  /* 11433433 call 0x114337a6 */
  push32(0x11433438u); f_114337a6();
  /* 11433438 call 0x11433a6f */
  push32(0x1143343du); f_11433a6f();
  /* 1143343d call 0x114339b6 */
  push32(0x11433442u); f_114339b6();
  /* 11433442 call 0x11433563 */
  push32(0x11433447u); f_11433563();
  /* 11433447 inc dword ptr [0x11437b64] */
  { uint32_t _r=(r32((uint32_t)(0x11437b64)))+1; w32((uint32_t)(0x11437b64), (_r)); fl_inc(_r,32); }
  /* 1143344d jmp 0x1143348d */
  goto L_1143348d;
L_1143344f:;
  /* 1143344f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11433451 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433453 jne 0x11433481 */
  if (!C.zf) goto L_11433481;
  /* 11433455 cmp dword ptr [0x11437b64], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11437b64))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143345b jle 0x1143341a */
  if ((C.zf||C.sf!=C.of)) goto L_1143341a;
  /* 1143345d dec dword ptr [0x11437b64] */
  { uint32_t _r=(r32((uint32_t)(0x11437b64)))-1; w32((uint32_t)(0x11437b64), (_r)); fl_dec(_r,32); }
  /* 11433463 cmp dword ptr [0x11437bb4], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11437bb4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433469 jne 0x11433470 */
  if (!C.zf) goto L_11433470;
  /* 1143346b call 0x114335a1 */
  push32(0x11433470u); f_114335a1();
L_11433470:;
  /* 11433470 call 0x11433962 */
  push32(0x11433475u); f_11433962();
  /* 11433475 call 0x114336d5 */
  push32(0x1143347au); f_114336d5();
  /* 1143347a call 0x11433e2a */
  push32(0x1143347fu); f_11433e2a();
  /* 1143347f jmp 0x1143348d */
  goto L_1143348d;
L_11433481:;
  /* 11433481 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433484 jne 0x1143348d */
  if (!C.zf) goto L_1143348d;
  /* 11433486 push ecx */
  push32((uint32_t)(ECX));
  /* 11433487 call 0x11433706 */
  push32(0x1143348cu); f_11433706();
  /* 1143348c pop ecx */
  ECX = (pop32());
L_1143348d:;
  /* 1143348d push 1 */
  push32((uint32_t)(0x1u));
  /* 1143348f pop eax */
  EAX = (pop32());
L_11433490:;
  /* 11433490 ret 0xc */
  ESPCHK(0x114333bau, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11433493 (157 bytes, 73 insns) */
void f_11433493(void) {
  FTRACE(0x11433493u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433493 push ebp */
  push32((uint32_t)(EBP));
  /* 11433494 mov ebp, esp */
  EBP = (ESP);
  /* 11433496 push ebx */
  push32((uint32_t)(EBX));
  /* 11433497 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1143349a push esi */
  push32((uint32_t)(ESI));
  /* 1143349b mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1143349e push edi */
  push32((uint32_t)(EDI));
  /* 1143349f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 114334a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114334a4 jne 0x114334af */
  if (!C.zf) goto L_114334af;
  /* 114334a6 cmp dword ptr [0x11437b64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11437b64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114334ad jmp 0x114334d5 */
  goto L_114334d5;
L_114334af:;
  /* 114334af cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114334b2 je 0x114334b9 */
  if (C.zf) goto L_114334b9;
  /* 114334b4 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114334b7 jne 0x114334db */
  if (!C.zf) goto L_114334db;
L_114334b9:;
  /* 114334b9 mov eax, dword ptr [0x114380dc] */
  EAX = (r32((uint32_t)(0x114380dc)));
  /* 114334be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114334c0 je 0x114334cb */
  if (C.zf) goto L_114334cb;
  /* 114334c2 push edi */
  push32((uint32_t)(EDI));
  /* 114334c3 push esi */
  push32((uint32_t)(ESI));
  /* 114334c4 push ebx */
  push32((uint32_t)(EBX));
  /* 114334c5 call eax */
  call_ind((uint32_t)(EAX), 0x114334c7u);
  /* 114334c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114334c9 je 0x114334d7 */
  if (C.zf) goto L_114334d7;
L_114334cb:;
  /* 114334cb push edi */
  push32((uint32_t)(EDI));
  /* 114334cc push esi */
  push32((uint32_t)(ESI));
  /* 114334cd push ebx */
  push32((uint32_t)(EBX));
  /* 114334ce call 0x114333ba */
  push32(0x114334d3u); f_114333ba();
  /* 114334d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_114334d5:;
  /* 114334d5 jne 0x114334db */
  if (!C.zf) goto L_114334db;
L_114334d7:;
  /* 114334d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114334d9 jmp 0x11433529 */
  goto L_11433529;
L_114334db:;
  /* 114334db push edi */
  push32((uint32_t)(EDI));
  /* 114334dc push esi */
  push32((uint32_t)(ESI));
  /* 114334dd push ebx */
  push32((uint32_t)(EBX));
  /* 114334de call 0x11431000 */
  push32(0x114334e3u); f_11431000();
  /* 114334e3 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114334e6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 114334e9 jne 0x114334f7 */
  if (!C.zf) goto L_114334f7;
  /* 114334eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114334ed jne 0x11433526 */
  if (!C.zf) goto L_11433526;
  /* 114334ef push edi */
  push32((uint32_t)(EDI));
  /* 114334f0 push eax */
  push32((uint32_t)(EAX));
  /* 114334f1 push ebx */
  push32((uint32_t)(EBX));
  /* 114334f2 call 0x114333ba */
  push32(0x114334f7u); f_114333ba();
L_114334f7:;
  /* 114334f7 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114334f9 je 0x11433500 */
  if (C.zf) goto L_11433500;
  /* 114334fb cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114334fe jne 0x11433526 */
  if (!C.zf) goto L_11433526;
L_11433500:;
  /* 11433500 push edi */
  push32((uint32_t)(EDI));
  /* 11433501 push esi */
  push32((uint32_t)(ESI));
  /* 11433502 push ebx */
  push32((uint32_t)(EBX));
  /* 11433503 call 0x114333ba */
  push32(0x11433508u); f_114333ba();
  /* 11433508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143350a jne 0x1143350f */
  if (!C.zf) goto L_1143350f;
  /* 1143350c and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_1143350f:;
  /* 1143350f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433513 je 0x11433526 */
  if (C.zf) goto L_11433526;
  /* 11433515 mov eax, dword ptr [0x114380dc] */
  EAX = (r32((uint32_t)(0x114380dc)));
  /* 1143351a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143351c je 0x11433526 */
  if (C.zf) goto L_11433526;
  /* 1143351e push edi */
  push32((uint32_t)(EDI));
  /* 1143351f push esi */
  push32((uint32_t)(ESI));
  /* 11433520 push ebx */
  push32((uint32_t)(EBX));
  /* 11433521 call eax */
  call_ind((uint32_t)(EAX), 0x11433523u);
  /* 11433523 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11433526:;
  /* 11433526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11433529:;
  /* 11433529 pop edi */
  EDI = (pop32());
  /* 1143352a pop esi */
  ESI = (pop32());
  /* 1143352b pop ebx */
  EBX = (pop32());
  /* 1143352c pop ebp */
  EBP = (pop32());
  /* 1143352d ret 0xc */
  ESPCHK(0x11433493u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11433530 (48 bytes, 15 insns) */
void f_11433530(void) {
  FTRACE(0x11433530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433530 mov eax, dword ptr [0x11437b70] */
  EAX = (r32((uint32_t)(0x11437b70)));
  /* 11433535 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433538 je 0x11433547 */
  if (C.zf) goto L_11433547;
  /* 1143353a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143353c jne 0x1143354c */
  if (!C.zf) goto L_1143354c;
  /* 1143353e cmp dword ptr [0x11437b74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11437b74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433545 jne 0x1143354c */
  if (!C.zf) goto L_1143354c;
L_11433547:;
  /* 11433547 call 0x11433e9f */
  push32(0x1143354cu); f_11433e9f();
L_1143354c:;
  /* 1143354c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11433550 call 0x11433ed8 */
  push32(0x11433555u); f_11433ed8();
  /* 11433555 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1143355a call dword ptr [0x1143744c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143744c))), 0x11433560u);
  /* 11433560 pop ecx */
  ECX = (pop32());
  /* 11433561 pop ecx */
  ECX = (pop32());
  /* 11433562 ret  */
  ESPCHK(0x11433530u, _esp0);
  ESP += 4; return;
}

/* FUN_10003563 @ 0x11433563 (45 bytes, 12 insns) */
void f_11433563(void) {
  FTRACE(0x11433563u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433563 mov eax, dword ptr [0x114380d4] */
  EAX = (r32((uint32_t)(0x114380d4)));
  /* 11433568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143356a je 0x1143356e */
  if (C.zf) goto L_1143356e;
  /* 1143356c call eax */
  call_ind((uint32_t)(EAX), 0x1143356eu);
L_1143356e:;
  /* 1143356e push 0x11437010 */
  push32((uint32_t)(0x11437010u));
  /* 11433573 push 0x11437008 */
  push32((uint32_t)(0x11437008u));
  /* 11433578 call 0x11433667 */
  push32(0x1143357du); f_11433667();
  /* 1143357d push 0x11437004 */
  push32((uint32_t)(0x11437004u));
  /* 11433582 push 0x11437000 */
  push32((uint32_t)(0x11437000u));
  /* 11433587 call 0x11433667 */
  push32(0x1143358cu); f_11433667();
  /* 1143358c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143358f ret  */
  ESPCHK(0x11433563u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11433590 (17 bytes, 6 insns) */
void f_11433590(void) {
  FTRACE(0x11433590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433590 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433592 push 1 */
  push32((uint32_t)(0x1u));
  /* 11433594 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11433598 call 0x114335b0 */
  push32(0x1143359du); f_114335b0();
  /* 1143359d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114335a0 ret  */
  ESPCHK(0x11433590u, _esp0);
  ESP += 4; return;
}

/* FUN_100035a1 @ 0x114335a1 (15 bytes, 6 insns) */
void f_114335a1(void) {
  FTRACE(0x114335a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114335a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 114335a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 114335a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 114335a7 call 0x114335b0 */
  push32(0x114335acu); f_114335b0();
  /* 114335ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114335af ret  */
  ESPCHK(0x114335a1u, _esp0);
  ESP += 4; return;
}

/* FUN_100035b0 @ 0x114335b0 (163 bytes, 53 insns) */
void f_114335b0(void) {
  FTRACE(0x114335b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114335b0 push edi */
  push32((uint32_t)(EDI));
  /* 114335b1 call 0x11433655 */
  push32(0x114335b6u); f_11433655();
  /* 114335b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114335b8 pop edi */
  EDI = (pop32());
  /* 114335b9 cmp dword ptr [0x11437bb8], edi */
  { uint32_t _a=(r32((uint32_t)(0x11437bb8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114335bf jne 0x114335d2 */
  if (!C.zf) goto L_114335d2;
  /* 114335c1 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 114335c5 call dword ptr [0x114360a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360a4))), 0x114335cbu);
  /* 114335cb push eax */
  push32((uint32_t)(EAX));
  /* 114335cc call dword ptr [0x11436004] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436004))), 0x114335d2u);
L_114335d2:;
  /* 114335d2 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114335d7 push ebx */
  push32((uint32_t)(EBX));
  /* 114335d8 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 114335dc mov dword ptr [0x11437bb4], edi */
  w32((uint32_t)(0x11437bb4), (EDI));
  /* 114335e2 mov byte ptr [0x11437bb0], bl */
  w8((uint32_t)(0x11437bb0), (BL));
  /* 114335e8 jne 0x11433626 */
  if (!C.zf) goto L_11433626;
  /* 114335ea mov eax, dword ptr [0x114380d0] */
  EAX = (r32((uint32_t)(0x114380d0)));
  /* 114335ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114335f1 je 0x11433615 */
  if (C.zf) goto L_11433615;
  /* 114335f3 mov ecx, dword ptr [0x114380cc] */
  ECX = (r32((uint32_t)(0x114380cc)));
  /* 114335f9 push esi */
  push32((uint32_t)(ESI));
  /* 114335fa lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 114335fd cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114335ff jb 0x11433614 */
  if (C.cf) goto L_11433614;
L_11433601:;
  /* 11433601 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11433603 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433605 je 0x11433609 */
  if (C.zf) goto L_11433609;
  /* 11433607 call eax */
  call_ind((uint32_t)(EAX), 0x11433609u);
L_11433609:;
  /* 11433609 sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143360c cmp esi, dword ptr [0x114380d0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x114380d0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433612 jae 0x11433601 */
  if (!C.cf) goto L_11433601;
L_11433614:;
  /* 11433614 pop esi */
  ESI = (pop32());
L_11433615:;
  /* 11433615 push 0x11437018 */
  push32((uint32_t)(0x11437018u));
  /* 1143361a push 0x11437014 */
  push32((uint32_t)(0x11437014u));
  /* 1143361f call 0x11433667 */
  push32(0x11433624u); f_11433667();
  /* 11433624 pop ecx */
  ECX = (pop32());
  /* 11433625 pop ecx */
  ECX = (pop32());
L_11433626:;
  /* 11433626 push 0x11437020 */
  push32((uint32_t)(0x11437020u));
  /* 1143362b push 0x1143701c */
  push32((uint32_t)(0x1143701cu));
  /* 11433630 call 0x11433667 */
  push32(0x11433635u); f_11433667();
  /* 11433635 pop ecx */
  ECX = (pop32());
  /* 11433636 pop ecx */
  ECX = (pop32());
  /* 11433637 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11433639 pop ebx */
  EBX = (pop32());
  /* 1143363a je 0x11433643 */
  if (C.zf) goto L_11433643;
  /* 1143363c call 0x1143365e */
  push32(0x11433641u); f_1143365e();
  /* 11433641 pop edi */
  EDI = (pop32());
  /* 11433642 ret  */
  ESPCHK(0x114335b0u, _esp0);
  ESP += 4; return;
L_11433643:;
  /* 11433643 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11433647 mov dword ptr [0x11437bb8], edi */
  w32((uint32_t)(0x11437bb8), (EDI));
  /* 1143364d call dword ptr [0x11436000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436000))), 0x11433653u);
  /* 11433653 pop edi */
  EDI = (pop32());
  /* 11433654 ret  */
  ESPCHK(0x114335b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003655 @ 0x11433655 (9 bytes, 4 insns) */
void f_11433655(void) {
  FTRACE(0x11433655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433655 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11433657 call 0x114340c0 */
  push32(0x1143365cu); f_114340c0();
  /* 1143365c pop ecx */
  ECX = (pop32());
  /* 1143365d ret  */
  ESPCHK(0x11433655u, _esp0);
  ESP += 4; return;
}

/* FUN_1000365e @ 0x1143365e (9 bytes, 4 insns) */
void f_1143365e(void) {
  FTRACE(0x1143365eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143365e push 0xd */
  push32((uint32_t)(0xdu));
  /* 11433660 call 0x11434121 */
  push32(0x11433665u); f_11434121();
  /* 11433665 pop ecx */
  ECX = (pop32());
  /* 11433666 ret  */
  ESPCHK(0x1143365eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003667 @ 0x11433667 (26 bytes, 12 insns) */
void f_11433667(void) {
  FTRACE(0x11433667u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433667 push esi */
  push32((uint32_t)(ESI));
  /* 11433668 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_1143366c:;
  /* 1143366c cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433670 jae 0x1143367f */
  if (!C.cf) goto L_1143367f;
  /* 11433672 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11433674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433676 je 0x1143367a */
  if (C.zf) goto L_1143367a;
  /* 11433678 call eax */
  call_ind((uint32_t)(EAX), 0x1143367au);
L_1143367a:;
  /* 1143367a add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1143367d jmp 0x1143366c */
  goto L_1143366c;
L_1143367f:;
  /* 1143367f pop esi */
  ESI = (pop32());
  /* 11433680 ret  */
  ESPCHK(0x11433667u, _esp0);
  ESP += 4; return;
}

/* FUN_10003681 @ 0x11433681 (84 bytes, 32 insns) */
void f_11433681(void) {
  FTRACE(0x11433681u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433681 push esi */
  push32((uint32_t)(ESI));
  /* 11433682 call 0x1143402b */
  push32(0x11433687u); f_1143402b();
  /* 11433687 call dword ptr [0x114360a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360a8))), 0x1143368du);
  /* 1143368d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433690 mov dword ptr [0x11437450], eax */
  w32((uint32_t)(0x11437450), (EAX));
  /* 11433695 je 0x114336d1 */
  if (C.zf) goto L_114336d1;
  /* 11433697 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11433699 push 1 */
  push32((uint32_t)(0x1u));
  /* 1143369b call 0x11434136 */
  push32(0x114336a0u); f_11434136();
  /* 114336a0 mov esi, eax */
  ESI = (EAX);
  /* 114336a2 pop ecx */
  ECX = (pop32());
  /* 114336a3 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114336a5 pop ecx */
  ECX = (pop32());
  /* 114336a6 je 0x114336d1 */
  if (C.zf) goto L_114336d1;
  /* 114336a8 push esi */
  push32((uint32_t)(ESI));
  /* 114336a9 push dword ptr [0x11437450] */
  push32((uint32_t)(r32((uint32_t)(0x11437450))));
  /* 114336af call dword ptr [0x1143609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143609c))), 0x114336b5u);
  /* 114336b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114336b7 je 0x114336d1 */
  if (C.zf) goto L_114336d1;
  /* 114336b9 push esi */
  push32((uint32_t)(ESI));
  /* 114336ba call 0x114336f3 */
  push32(0x114336bfu); f_114336f3();
  /* 114336bf pop ecx */
  ECX = (pop32());
  /* 114336c0 call dword ptr [0x114360a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x114360a0))), 0x114336c6u);
  /* 114336c6 or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 114336ca push 1 */
  push32((uint32_t)(0x1u));
  /* 114336cc mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 114336ce pop eax */
  EAX = (pop32());
  /* 114336cf pop esi */
  ESI = (pop32());
  /* 114336d0 ret  */
  ESPCHK(0x11433681u, _esp0);
  ESP += 4; return;
L_114336d1:;
  /* 114336d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114336d3 pop esi */
  ESI = (pop32());
  /* 114336d4 ret  */
  ESPCHK(0x11433681u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d5 @ 0x114336d5 (30 bytes, 8 insns) */
void f_114336d5(void) {
  FTRACE(0x114336d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114336d5 call 0x11434054 */
  push32(0x114336dau); f_11434054();
  /* 114336da mov eax, dword ptr [0x11437450] */
  EAX = (r32((uint32_t)(0x11437450)));
  /* 114336df cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114336e2 je 0x114336f2 */
  if (C.zf) goto L_114336f2;
  /* 114336e4 push eax */
  push32((uint32_t)(EAX));
  /* 114336e5 call dword ptr [0x1143608c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143608c))), 0x114336ebu);
  /* 114336eb or dword ptr [0x11437450], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11437450)))|(0xffffffffu); w32((uint32_t)(0x11437450), (_r)); fl_logic(_r,32); }
L_114336f2:;
  /* 114336f2 ret  */
  ESPCHK(0x114336d5u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f3 @ 0x114336f3 (19 bytes, 4 insns) */
void f_114336f3(void) {
  FTRACE(0x114336f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114336f3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114336f7 mov dword ptr [eax + 0x50], 0x114375d0 */
  w32((uint32_t)(EAX + 0x50), (0x114375d0u));
  /* 114336fe mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11433705 ret  */
  ESPCHK(0x114336f3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003706 @ 0x11433706 (160 bytes, 62 insns) */
void f_11433706(void) {
  FTRACE(0x11433706u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433706 mov eax, dword ptr [0x11437450] */
  EAX = (r32((uint32_t)(0x11437450)));
  /* 1143370b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143370e je 0x114337a5 */
  if (C.zf) goto L_114337a5;
  /* 11433714 push esi */
  push32((uint32_t)(ESI));
  /* 11433715 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11433719 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1143371b jne 0x1143372a */
  if (!C.zf) goto L_1143372a;
  /* 1143371d push eax */
  push32((uint32_t)(EAX));
  /* 1143371e call dword ptr [0x11436090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436090))), 0x11433724u);
  /* 11433724 mov esi, eax */
  ESI = (EAX);
  /* 11433726 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433728 je 0x11433796 */
  if (C.zf) goto L_11433796;
L_1143372a:;
  /* 1143372a mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 1143372d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143372f je 0x11433738 */
  if (C.zf) goto L_11433738;
  /* 11433731 push eax */
  push32((uint32_t)(EAX));
  /* 11433732 call 0x114341c3 */
  push32(0x11433737u); f_114341c3();
  /* 11433737 pop ecx */
  ECX = (pop32());
L_11433738:;
  /* 11433738 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 1143373b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143373d je 0x11433746 */
  if (C.zf) goto L_11433746;
  /* 1143373f push eax */
  push32((uint32_t)(EAX));
  /* 11433740 call 0x114341c3 */
  push32(0x11433745u); f_114341c3();
  /* 11433745 pop ecx */
  ECX = (pop32());
L_11433746:;
  /* 11433746 mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11433749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143374b je 0x11433754 */
  if (C.zf) goto L_11433754;
  /* 1143374d push eax */
  push32((uint32_t)(EAX));
  /* 1143374e call 0x114341c3 */
  push32(0x11433753u); f_114341c3();
  /* 11433753 pop ecx */
  ECX = (pop32());
L_11433754:;
  /* 11433754 mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11433757 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433759 je 0x11433762 */
  if (C.zf) goto L_11433762;
  /* 1143375b push eax */
  push32((uint32_t)(EAX));
  /* 1143375c call 0x114341c3 */
  push32(0x11433761u); f_114341c3();
  /* 11433761 pop ecx */
  ECX = (pop32());
L_11433762:;
  /* 11433762 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11433765 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433767 je 0x11433770 */
  if (C.zf) goto L_11433770;
  /* 11433769 push eax */
  push32((uint32_t)(EAX));
  /* 1143376a call 0x114341c3 */
  push32(0x1143376fu); f_114341c3();
  /* 1143376f pop ecx */
  ECX = (pop32());
L_11433770:;
  /* 11433770 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11433773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433775 je 0x1143377e */
  if (C.zf) goto L_1143377e;
  /* 11433777 push eax */
  push32((uint32_t)(EAX));
  /* 11433778 call 0x114341c3 */
  push32(0x1143377du); f_114341c3();
  /* 1143377d pop ecx */
  ECX = (pop32());
L_1143377e:;
  /* 1143377e mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11433781 cmp eax, 0x114375d0 */
  { uint32_t _a=(EAX),_b=(0x114375d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433786 je 0x1143378f */
  if (C.zf) goto L_1143378f;
  /* 11433788 push eax */
  push32((uint32_t)(EAX));
  /* 11433789 call 0x114341c3 */
  push32(0x1143378eu); f_114341c3();
  /* 1143378e pop ecx */
  ECX = (pop32());
L_1143378f:;
  /* 1143378f push esi */
  push32((uint32_t)(ESI));
  /* 11433790 call 0x114341c3 */
  push32(0x11433795u); f_114341c3();
  /* 11433795 pop ecx */
  ECX = (pop32());
L_11433796:;
  /* 11433796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433798 push dword ptr [0x11437450] */
  push32((uint32_t)(r32((uint32_t)(0x11437450))));
  /* 1143379e call dword ptr [0x1143609c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143609c))), 0x114337a4u);
  /* 114337a4 pop esi */
  ESI = (pop32());
L_114337a5:;
  /* 114337a5 ret  */
  ESPCHK(0x11433706u, _esp0);
  ESP += 4; return;
}

/* FUN_100037a6 @ 0x114337a6 (444 bytes, 150 insns) */
void f_114337a6(void) {
  FTRACE(0x114337a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114337a6 push ebp */
  push32((uint32_t)(EBP));
  /* 114337a7 mov ebp, esp */
  EBP = (ESP);
  /* 114337a9 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114337ac push ebx */
  push32((uint32_t)(EBX));
  /* 114337ad push esi */
  push32((uint32_t)(ESI));
  /* 114337ae push edi */
  push32((uint32_t)(EDI));
  /* 114337af push 0x480 */
  push32((uint32_t)(0x480u));
  /* 114337b4 call 0x1143420b */
  push32(0x114337b9u); f_1143420b();
  /* 114337b9 mov esi, eax */
  ESI = (EAX);
  /* 114337bb pop ecx */
  ECX = (pop32());
  /* 114337bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114337be jne 0x114337c8 */
  if (!C.zf) goto L_114337c8;
  /* 114337c0 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 114337c2 call 0x11433530 */
  push32(0x114337c7u); f_11433530();
  /* 114337c7 pop ecx */
  ECX = (pop32());
L_114337c8:;
  /* 114337c8 mov dword ptr [0x11437fc0], esi */
  w32((uint32_t)(0x11437fc0), (ESI));
  /* 114337ce mov dword ptr [0x114380c0], 0x20 */
  w32((uint32_t)(0x114380c0), (0x20u));
  /* 114337d8 lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_114337de:;
  /* 114337de cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114337e0 jae 0x11433800 */
  if (!C.cf) goto L_11433800;
  /* 114337e2 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 114337e6 or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 114337e9 and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 114337ed mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 114337f1 mov eax, dword ptr [0x11437fc0] */
  EAX = (r32((uint32_t)(0x11437fc0)));
  /* 114337f6 add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114337f9 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114337fe jmp 0x114337de */
  goto L_114337de;
L_11433800:;
  /* 11433800 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11433803 push eax */
  push32((uint32_t)(EAX));
  /* 11433804 call dword ptr [0x11436084] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436084))), 0x1143380au);
  /* 1143380a cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1143380f je 0x114338e6 */
  if (C.zf) goto L_114338e6;
  /* 11433815 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11433818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143381a je 0x114338e6 */
  if (C.zf) goto L_114338e6;
  /* 11433820 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11433822 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11433825 lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11433828 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1143382b mov eax, 0x800 */
  EAX = (0x800u);
  /* 11433830 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433832 jl 0x11433836 */
  if ((C.sf!=C.of)) goto L_11433836;
  /* 11433834 mov edi, eax */
  EDI = (EAX);
L_11433836:;
  /* 11433836 cmp dword ptr [0x114380c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114380c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143383c jge 0x11433894 */
  if ((C.sf==C.of)) goto L_11433894;
  /* 1143383e mov esi, 0x11437fc4 */
  ESI = (0x11437fc4u);
L_11433843:;
  /* 11433843 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11433848 call 0x1143420b */
  push32(0x1143384du); f_1143420b();
  /* 1143384d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143384f pop ecx */
  ECX = (pop32());
  /* 11433850 je 0x1143388e */
  if (C.zf) goto L_1143388e;
  /* 11433852 add dword ptr [0x114380c0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x114380c0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x114380c0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11433859 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1143385b lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11433861:;
  /* 11433861 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433863 jae 0x11433881 */
  if (!C.cf) goto L_11433881;
  /* 11433865 and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11433869 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1143386c and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11433870 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11433874 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11433876 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433879 add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143387f jmp 0x11433861 */
  goto L_11433861;
L_11433881:;
  /* 11433881 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433884 cmp dword ptr [0x114380c0], edi */
  { uint32_t _a=(r32((uint32_t)(0x114380c0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143388a jl 0x11433843 */
  if ((C.sf!=C.of)) goto L_11433843;
  /* 1143388c jmp 0x11433894 */
  goto L_11433894;
L_1143388e:;
  /* 1143388e mov edi, dword ptr [0x114380c0] */
  EDI = (r32((uint32_t)(0x114380c0)));
L_11433894:;
  /* 11433894 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11433896 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11433898 jle 0x114338e6 */
  if ((C.zf||C.sf!=C.of)) goto L_114338e6;
L_1143389a:;
  /* 1143389a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1143389d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1143389f cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114338a2 je 0x114338dc */
  if (C.zf) goto L_114338dc;
  /* 114338a4 mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 114338a6 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 114338a8 je 0x114338dc */
  if (C.zf) goto L_114338dc;
  /* 114338aa test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 114338ac jne 0x114338b9 */
  if (!C.zf) goto L_114338b9;
  /* 114338ae push ecx */
  push32((uint32_t)(ECX));
  /* 114338af call dword ptr [0x1143607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143607c))), 0x114338b5u);
  /* 114338b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114338b7 je 0x114338dc */
  if (C.zf) goto L_114338dc;
L_114338b9:;
  /* 114338b9 mov ecx, esi */
  ECX = (ESI);
  /* 114338bb mov eax, esi */
  EAX = (ESI);
  /* 114338bd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 114338c0 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 114338c3 mov ecx, dword ptr [ecx*4 + 0x11437fc0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11437fc0)));
  /* 114338ca lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 114338cd lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 114338d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114338d3 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 114338d5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114338d7 mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 114338d9 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_114338dc:;
  /* 114338dc add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 114338e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114338e1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 114338e2 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114338e4 jl 0x1143389a */
  if ((C.sf!=C.of)) goto L_1143389a;
L_114338e6:;
  /* 114338e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_114338e8:;
  /* 114338e8 mov ecx, dword ptr [0x11437fc0] */
  ECX = (r32((uint32_t)(0x11437fc0)));
  /* 114338ee lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 114338f1 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114338f5 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 114338f8 jne 0x11433947 */
  if (!C.zf) goto L_11433947;
  /* 114338fa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 114338fc mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11433900 jne 0x11433907 */
  if (!C.zf) goto L_11433907;
  /* 11433902 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11433904 pop eax */
  EAX = (pop32());
  /* 11433905 jmp 0x11433911 */
  goto L_11433911;
L_11433907:;
  /* 11433907 mov eax, ebx */
  EAX = (EBX);
  /* 11433909 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1143390a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1143390c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143390e add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11433911:;
  /* 11433911 push eax */
  push32((uint32_t)(EAX));
  /* 11433912 call dword ptr [0x11436080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436080))), 0x11433918u);
  /* 11433918 mov edi, eax */
  EDI = (EAX);
  /* 1143391a cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143391d je 0x11433936 */
  if (C.zf) goto L_11433936;
  /* 1143391f push edi */
  push32((uint32_t)(EDI));
  /* 11433920 call dword ptr [0x1143607c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143607c))), 0x11433926u);
  /* 11433926 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433928 je 0x11433936 */
  if (C.zf) goto L_11433936;
  /* 1143392a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1143392f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11433931 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433934 jne 0x1143393c */
  if (!C.zf) goto L_1143393c;
L_11433936:;
  /* 11433936 or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1143393a jmp 0x1143394b */
  goto L_1143394b;
L_1143393c:;
  /* 1143393c cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143393f jne 0x1143394b */
  if (!C.zf) goto L_1143394b;
  /* 11433941 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11433945 jmp 0x1143394b */
  goto L_1143394b;
L_11433947:;
  /* 11433947 or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_1143394b:;
  /* 1143394b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1143394c cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143394f jl 0x114338e8 */
  if ((C.sf!=C.of)) goto L_114338e8;
  /* 11433951 push dword ptr [0x114380c0] */
  push32((uint32_t)(r32((uint32_t)(0x114380c0))));
  /* 11433957 call dword ptr [0x11436088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436088))), 0x1143395du);
  /* 1143395d pop edi */
  EDI = (pop32());
  /* 1143395e pop esi */
  ESI = (pop32());
  /* 1143395f pop ebx */
  EBX = (pop32());
  /* 11433960 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11433961 ret  */
  ESPCHK(0x114337a6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003962 @ 0x11433962 (84 bytes, 33 insns) */
void f_11433962(void) {
  FTRACE(0x11433962u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433962 push ebx */
  push32((uint32_t)(EBX));
  /* 11433963 push esi */
  push32((uint32_t)(ESI));
  /* 11433964 push edi */
  push32((uint32_t)(EDI));
  /* 11433965 mov esi, 0x11437fc0 */
  ESI = (0x11437fc0u);
L_1143396a:;
  /* 1143396a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1143396c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143396e je 0x114339a7 */
  if (C.zf) goto L_114339a7;
  /* 11433970 mov edi, eax */
  EDI = (EAX);
  /* 11433972 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433977 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433979 jae 0x1143399c */
  if (!C.cf) goto L_1143399c;
  /* 1143397b lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_1143397e:;
  /* 1143397e cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433982 je 0x1143398b */
  if (C.zf) goto L_1143398b;
  /* 11433984 push ebx */
  push32((uint32_t)(EBX));
  /* 11433985 call dword ptr [0x11436074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436074))), 0x1143398bu);
L_1143398b:;
  /* 1143398b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1143398d add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433990 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433995 add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433998 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143399a jb 0x1143397e */
  if (C.cf) goto L_1143397e;
L_1143399c:;
  /* 1143399c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1143399e call 0x114341c3 */
  push32(0x114339a3u); f_114341c3();
  /* 114339a3 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 114339a6 pop ecx */
  ECX = (pop32());
L_114339a7:;
  /* 114339a7 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114339aa cmp esi, 0x114380c0 */
  { uint32_t _a=(ESI),_b=(0x114380c0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114339b0 jl 0x1143396a */
  if ((C.sf!=C.of)) goto L_1143396a;
  /* 114339b2 pop edi */
  EDI = (pop32());
  /* 114339b3 pop esi */
  ESI = (pop32());
  /* 114339b4 pop ebx */
  EBX = (pop32());
  /* 114339b5 ret  */
  ESPCHK(0x11433962u, _esp0);
  ESP += 4; return;
}

/* FUN_100039b6 @ 0x114339b6 (185 bytes, 71 insns) */
void f_114339b6(void) {
  FTRACE(0x114339b6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114339b6 push ebx */
  push32((uint32_t)(EBX));
  /* 114339b7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114339b9 cmp dword ptr [0x114380c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x114380c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114339bf push esi */
  push32((uint32_t)(ESI));
  /* 114339c0 push edi */
  push32((uint32_t)(EDI));
  /* 114339c1 jne 0x114339c8 */
  if (!C.zf) goto L_114339c8;
  /* 114339c3 call 0x114347e3 */
  push32(0x114339c8u); f_114347e3();
L_114339c8:;
  /* 114339c8 mov esi, dword ptr [0x11437b68] */
  ESI = (r32((uint32_t)(0x11437b68)));
  /* 114339ce xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_114339d0:;
  /* 114339d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114339d2 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114339d4 je 0x114339e8 */
  if (C.zf) goto L_114339e8;
  /* 114339d6 cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114339d8 je 0x114339db */
  if (C.zf) goto L_114339db;
  /* 114339da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_114339db:;
  /* 114339db push esi */
  push32((uint32_t)(ESI));
  /* 114339dc call 0x11434390 */
  push32(0x114339e1u); f_11434390();
  /* 114339e1 pop ecx */
  ECX = (pop32());
  /* 114339e2 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 114339e6 jmp 0x114339d0 */
  goto L_114339d0;
L_114339e8:;
  /* 114339e8 lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 114339ef push eax */
  push32((uint32_t)(EAX));
  /* 114339f0 call 0x1143420b */
  push32(0x114339f5u); f_1143420b();
  /* 114339f5 mov esi, eax */
  ESI = (EAX);
  /* 114339f7 pop ecx */
  ECX = (pop32());
  /* 114339f8 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114339fa mov dword ptr [0x11437b98], esi */
  w32((uint32_t)(0x11437b98), (ESI));
  /* 11433a00 jne 0x11433a0a */
  if (!C.zf) goto L_11433a0a;
  /* 11433a02 push 9 */
  push32((uint32_t)(0x9u));
  /* 11433a04 call 0x11433530 */
  push32(0x11433a09u); f_11433530();
  /* 11433a09 pop ecx */
  ECX = (pop32());
L_11433a0a:;
  /* 11433a0a mov edi, dword ptr [0x11437b68] */
  EDI = (r32((uint32_t)(0x11437b68)));
  /* 11433a10 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433a12 je 0x11433a4d */
  if (C.zf) goto L_11433a4d;
  /* 11433a14 push ebp */
  push32((uint32_t)(EBP));
L_11433a15:;
  /* 11433a15 push edi */
  push32((uint32_t)(EDI));
  /* 11433a16 call 0x11434390 */
  push32(0x11433a1bu); f_11434390();
  /* 11433a1b mov ebp, eax */
  EBP = (EAX);
  /* 11433a1d pop ecx */
  ECX = (pop32());
  /* 11433a1e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11433a1f cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433a22 je 0x11433a46 */
  if (C.zf) goto L_11433a46;
  /* 11433a24 push ebp */
  push32((uint32_t)(EBP));
  /* 11433a25 call 0x1143420b */
  push32(0x11433a2au); f_1143420b();
  /* 11433a2a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433a2c pop ecx */
  ECX = (pop32());
  /* 11433a2d mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11433a2f jne 0x11433a39 */
  if (!C.zf) goto L_11433a39;
  /* 11433a31 push 9 */
  push32((uint32_t)(0x9u));
  /* 11433a33 call 0x11433530 */
  push32(0x11433a38u); f_11433530();
  /* 11433a38 pop ecx */
  ECX = (pop32());
L_11433a39:;
  /* 11433a39 push edi */
  push32((uint32_t)(EDI));
  /* 11433a3a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11433a3c call 0x114342a0 */
  push32(0x11433a41u); f_114342a0();
  /* 11433a41 pop ecx */
  ECX = (pop32());
  /* 11433a42 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433a45 pop ecx */
  ECX = (pop32());
L_11433a46:;
  /* 11433a46 add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433a48 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433a4a jne 0x11433a15 */
  if (!C.zf) goto L_11433a15;
  /* 11433a4c pop ebp */
  EBP = (pop32());
L_11433a4d:;
  /* 11433a4d push dword ptr [0x11437b68] */
  push32((uint32_t)(r32((uint32_t)(0x11437b68))));
  /* 11433a53 call 0x114341c3 */
  push32(0x11433a58u); f_114341c3();
  /* 11433a58 pop ecx */
  ECX = (pop32());
  /* 11433a59 mov dword ptr [0x11437b68], ebx */
  w32((uint32_t)(0x11437b68), (EBX));
  /* 11433a5f mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11433a61 pop edi */
  EDI = (pop32());
  /* 11433a62 pop esi */
  ESI = (pop32());
  /* 11433a63 mov dword ptr [0x114380c4], 1 */
  w32((uint32_t)(0x114380c4), (0x1u));
  /* 11433a6d pop ebx */
  EBX = (pop32());
  /* 11433a6e ret  */
  ESPCHK(0x114339b6u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a6f @ 0x11433a6f (153 bytes, 62 insns) */
void f_11433a6f(void) {
  FTRACE(0x11433a6fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433a6f push ebp */
  push32((uint32_t)(EBP));
  /* 11433a70 mov ebp, esp */
  EBP = (ESP);
  /* 11433a72 push ecx */
  push32((uint32_t)(ECX));
  /* 11433a73 push ecx */
  push32((uint32_t)(ECX));
  /* 11433a74 push ebx */
  push32((uint32_t)(EBX));
  /* 11433a75 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11433a77 cmp dword ptr [0x114380c8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x114380c8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433a7d push esi */
  push32((uint32_t)(ESI));
  /* 11433a7e push edi */
  push32((uint32_t)(EDI));
  /* 11433a7f jne 0x11433a86 */
  if (!C.zf) goto L_11433a86;
  /* 11433a81 call 0x114347e3 */
  push32(0x11433a86u); f_114347e3();
L_11433a86:;
  /* 11433a86 mov esi, 0x11437bbc */
  ESI = (0x11437bbcu);
  /* 11433a8b push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11433a90 push esi */
  push32((uint32_t)(ESI));
  /* 11433a91 push ebx */
  push32((uint32_t)(EBX));
  /* 11433a92 call dword ptr [0x11436070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436070))), 0x11433a98u);
  /* 11433a98 mov eax, dword ptr [0x114380d8] */
  EAX = (r32((uint32_t)(0x114380d8)));
  /* 11433a9d mov dword ptr [0x11437ba8], esi */
  w32((uint32_t)(0x11437ba8), (ESI));
  /* 11433aa3 mov edi, esi */
  EDI = (ESI);
  /* 11433aa5 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433aa7 je 0x11433aab */
  if (C.zf) goto L_11433aab;
  /* 11433aa9 mov edi, eax */
  EDI = (EAX);
L_11433aab:;
  /* 11433aab lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11433aae push eax */
  push32((uint32_t)(EAX));
  /* 11433aaf lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11433ab2 push eax */
  push32((uint32_t)(EAX));
  /* 11433ab3 push ebx */
  push32((uint32_t)(EBX));
  /* 11433ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 11433ab5 push edi */
  push32((uint32_t)(EDI));
  /* 11433ab6 call 0x11433b08 */
  push32(0x11433abbu); f_11433b08();
  /* 11433abb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11433abe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11433ac1 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11433ac4 push eax */
  push32((uint32_t)(EAX));
  /* 11433ac5 call 0x1143420b */
  push32(0x11433acau); f_1143420b();
  /* 11433aca mov esi, eax */
  ESI = (EAX);
  /* 11433acc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11433acf cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433ad1 jne 0x11433adb */
  if (!C.zf) goto L_11433adb;
  /* 11433ad3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11433ad5 call 0x11433530 */
  push32(0x11433adau); f_11433530();
  /* 11433ada pop ecx */
  ECX = (pop32());
L_11433adb:;
  /* 11433adb lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11433ade push eax */
  push32((uint32_t)(EAX));
  /* 11433adf lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11433ae2 push eax */
  push32((uint32_t)(EAX));
  /* 11433ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11433ae6 lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11433ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11433aea push esi */
  push32((uint32_t)(ESI));
  /* 11433aeb push edi */
  push32((uint32_t)(EDI));
  /* 11433aec call 0x11433b08 */
  push32(0x11433af1u); f_11433b08();
  /* 11433af1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11433af4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11433af7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11433af8 mov dword ptr [0x11437b90], esi */
  w32((uint32_t)(0x11437b90), (ESI));
  /* 11433afe pop edi */
  EDI = (pop32());
  /* 11433aff pop esi */
  ESI = (pop32());
  /* 11433b00 mov dword ptr [0x11437b8c], eax */
  w32((uint32_t)(0x11437b8c), (EAX));
  /* 11433b05 pop ebx */
  EBX = (pop32());
  /* 11433b06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11433b07 ret  */
  ESPCHK(0x11433a6fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003b08 @ 0x11433b08 (436 bytes, 187 insns) */
void f_11433b08(void) {
  FTRACE(0x11433b08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433b08 push ebp */
  push32((uint32_t)(EBP));
  /* 11433b09 mov ebp, esp */
  EBP = (ESP);
  /* 11433b0b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11433b0e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11433b11 push ebx */
  push32((uint32_t)(EBX));
  /* 11433b12 push esi */
  push32((uint32_t)(ESI));
  /* 11433b13 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11433b16 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 11433b19 push edi */
  push32((uint32_t)(EDI));
  /* 11433b1a mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11433b1d mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11433b23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11433b26 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11433b28 je 0x11433b32 */
  if (C.zf) goto L_11433b32;
  /* 11433b2a mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11433b2c add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433b2f mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11433b32:;
  /* 11433b32 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433b35 jne 0x11433b7b */
  if (!C.zf) goto L_11433b7b;
L_11433b37:;
  /* 11433b37 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11433b3a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433b3b cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433b3e je 0x11433b69 */
  if (C.zf) goto L_11433b69;
  /* 11433b40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11433b42 je 0x11433b69 */
  if (C.zf) goto L_11433b69;
  /* 11433b44 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11433b47 test byte ptr [edx + 0x11437ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11437ea1)))&(0x4u); fl_logic(_r,8); }
  /* 11433b4e je 0x11433b5c */
  if (C.zf) goto L_11433b5c;
  /* 11433b50 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433b52 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433b54 je 0x11433b5c */
  if (C.zf) goto L_11433b5c;
  /* 11433b56 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433b58 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11433b5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11433b5b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11433b5c:;
  /* 11433b5c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433b5e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433b60 je 0x11433b37 */
  if (C.zf) goto L_11433b37;
  /* 11433b62 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433b64 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11433b66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11433b67 jmp 0x11433b37 */
  goto L_11433b37;
L_11433b69:;
  /* 11433b69 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433b6b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433b6d je 0x11433b73 */
  if (C.zf) goto L_11433b73;
  /* 11433b6f and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11433b72 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11433b73:;
  /* 11433b73 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433b76 jne 0x11433bbe */
  if (!C.zf) goto L_11433bbe;
  /* 11433b78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433b79 jmp 0x11433bbe */
  goto L_11433bbe;
L_11433b7b:;
  /* 11433b7b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433b7d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433b7f je 0x11433b86 */
  if (C.zf) goto L_11433b86;
  /* 11433b81 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433b83 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11433b85 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11433b86:;
  /* 11433b86 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433b88 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433b89 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11433b8c test byte ptr [ebx + 0x11437ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11437ea1)))&(0x4u); fl_logic(_r,8); }
  /* 11433b93 je 0x11433ba1 */
  if (C.zf) goto L_11433ba1;
  /* 11433b95 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433b97 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433b99 je 0x11433ba0 */
  if (C.zf) goto L_11433ba0;
  /* 11433b9b mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 11433b9d mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 11433b9f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11433ba0:;
  /* 11433ba0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11433ba1:;
  /* 11433ba1 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433ba4 je 0x11433baf */
  if (C.zf) goto L_11433baf;
  /* 11433ba6 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11433ba8 je 0x11433bb3 */
  if (C.zf) goto L_11433bb3;
  /* 11433baa cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433bad jne 0x11433b7b */
  if (!C.zf) goto L_11433b7b;
L_11433baf:;
  /* 11433baf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11433bb1 jne 0x11433bb6 */
  if (!C.zf) goto L_11433bb6;
L_11433bb3:;
  /* 11433bb3 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11433bb4 jmp 0x11433bbe */
  goto L_11433bbe;
L_11433bb6:;
  /* 11433bb6 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433bb8 je 0x11433bbe */
  if (C.zf) goto L_11433bbe;
  /* 11433bba and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_11433bbe:;
  /* 11433bbe and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_11433bc2:;
  /* 11433bc2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433bc5 je 0x11433cab */
  if (C.zf) goto L_11433cab;
L_11433bcb:;
  /* 11433bcb mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433bcd cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433bd0 je 0x11433bd7 */
  if (C.zf) goto L_11433bd7;
  /* 11433bd2 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433bd5 jne 0x11433bda */
  if (!C.zf) goto L_11433bda;
L_11433bd7:;
  /* 11433bd7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433bd8 jmp 0x11433bcb */
  goto L_11433bcb;
L_11433bda:;
  /* 11433bda cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433bdd je 0x11433cab */
  if (C.zf) goto L_11433cab;
  /* 11433be3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11433be5 je 0x11433bef */
  if (C.zf) goto L_11433bef;
  /* 11433be7 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11433be9 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433bec mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11433bef:;
  /* 11433bef mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11433bf2 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_11433bf4:;
  /* 11433bf4 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11433bfb xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11433bfd:;
  /* 11433bfd cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433c00 jne 0x11433c06 */
  if (!C.zf) goto L_11433c06;
  /* 11433c02 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433c03 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11433c04 jmp 0x11433bfd */
  goto L_11433bfd;
L_11433c06:;
  /* 11433c06 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433c09 jne 0x11433c37 */
  if (!C.zf) goto L_11433c37;
  /* 11433c0b test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11433c0e jne 0x11433c35 */
  if (!C.zf) goto L_11433c35;
  /* 11433c10 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11433c12 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433c15 je 0x11433c24 */
  if (C.zf) goto L_11433c24;
  /* 11433c17 cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433c1b lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11433c1e jne 0x11433c24 */
  if (!C.zf) goto L_11433c24;
  /* 11433c20 mov eax, edx */
  EAX = (EDX);
  /* 11433c22 jmp 0x11433c27 */
  goto L_11433c27;
L_11433c24:;
  /* 11433c24 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_11433c27:;
  /* 11433c27 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11433c2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11433c2c cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433c2f sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11433c32 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11433c35:;
  /* 11433c35 shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_11433c37:;
  /* 11433c37 mov edx, ebx */
  EDX = (EBX);
  /* 11433c39 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11433c3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11433c3c je 0x11433c4c */
  if (C.zf) goto L_11433c4c;
  /* 11433c3e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11433c3f:;
  /* 11433c3f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433c41 je 0x11433c47 */
  if (C.zf) goto L_11433c47;
  /* 11433c43 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 11433c46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11433c47:;
  /* 11433c47 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433c49 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11433c4a jne 0x11433c3f */
  if (!C.zf) goto L_11433c3f;
L_11433c4c:;
  /* 11433c4c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433c4e test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11433c50 je 0x11433c9c */
  if (C.zf) goto L_11433c9c;
  /* 11433c52 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433c56 jne 0x11433c62 */
  if (!C.zf) goto L_11433c62;
  /* 11433c58 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433c5b je 0x11433c9c */
  if (C.zf) goto L_11433c9c;
  /* 11433c5d cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433c60 je 0x11433c9c */
  if (C.zf) goto L_11433c9c;
L_11433c62:;
  /* 11433c62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433c66 je 0x11433c96 */
  if (C.zf) goto L_11433c96;
  /* 11433c68 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433c6a je 0x11433c85 */
  if (C.zf) goto L_11433c85;
  /* 11433c6c movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11433c6f test byte ptr [ebx + 0x11437ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11437ea1)))&(0x4u); fl_logic(_r,8); }
  /* 11433c76 je 0x11433c7e */
  if (C.zf) goto L_11433c7e;
  /* 11433c78 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11433c7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11433c7b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433c7c inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11433c7e:;
  /* 11433c7e mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11433c80 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11433c82 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11433c83 jmp 0x11433c94 */
  goto L_11433c94;
L_11433c85:;
  /* 11433c85 movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 11433c88 test byte ptr [edx + 0x11437ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11437ea1)))&(0x4u); fl_logic(_r,8); }
  /* 11433c8f je 0x11433c94 */
  if (C.zf) goto L_11433c94;
  /* 11433c91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433c92 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11433c94:;
  /* 11433c94 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11433c96:;
  /* 11433c96 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433c97 jmp 0x11433bf4 */
  goto L_11433bf4;
L_11433c9c:;
  /* 11433c9c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11433c9e je 0x11433ca4 */
  if (C.zf) goto L_11433ca4;
  /* 11433ca0 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11433ca3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11433ca4:;
  /* 11433ca4 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11433ca6 jmp 0x11433bc2 */
  goto L_11433bc2;
L_11433cab:;
  /* 11433cab test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11433cad je 0x11433cb2 */
  if (C.zf) goto L_11433cb2;
  /* 11433caf and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_11433cb2:;
  /* 11433cb2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11433cb5 pop edi */
  EDI = (pop32());
  /* 11433cb6 pop esi */
  ESI = (pop32());
  /* 11433cb7 pop ebx */
  EBX = (pop32());
  /* 11433cb8 inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 11433cba pop ebp */
  EBP = (pop32());
  /* 11433cbb ret  */
  ESPCHK(0x11433b08u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cbc @ 0x11433cbc (306 bytes, 132 insns) */
void f_11433cbc(void) {
  FTRACE(0x11433cbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11433cbd push ecx */
  push32((uint32_t)(ECX));
  /* 11433cbe mov eax, dword ptr [0x11437cc0] */
  EAX = (r32((uint32_t)(0x11437cc0)));
  /* 11433cc3 push ebx */
  push32((uint32_t)(EBX));
  /* 11433cc4 push ebp */
  push32((uint32_t)(EBP));
  /* 11433cc5 mov ebp, dword ptr [0x1143605c] */
  EBP = (r32((uint32_t)(0x1143605c)));
  /* 11433ccb push esi */
  push32((uint32_t)(ESI));
  /* 11433ccc push edi */
  push32((uint32_t)(EDI));
  /* 11433ccd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11433ccf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11433cd1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11433cd3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433cd5 jne 0x11433d0a */
  if (!C.zf) goto L_11433d0a;
  /* 11433cd7 call ebp */
  call_ind((uint32_t)(EBP), 0x11433cd9u);
  /* 11433cd9 mov esi, eax */
  ESI = (EAX);
  /* 11433cdb cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433cdd je 0x11433ceb */
  if (C.zf) goto L_11433ceb;
  /* 11433cdf mov dword ptr [0x11437cc0], 1 */
  w32((uint32_t)(0x11437cc0), (0x1u));
  /* 11433ce9 jmp 0x11433d13 */
  goto L_11433d13;
L_11433ceb:;
  /* 11433ceb call dword ptr [0x1143606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143606c))), 0x11433cf1u);
  /* 11433cf1 mov edi, eax */
  EDI = (EAX);
  /* 11433cf3 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433cf5 je 0x11433de5 */
  if (C.zf) goto L_11433de5;
  /* 11433cfb mov dword ptr [0x11437cc0], 2 */
  w32((uint32_t)(0x11437cc0), (0x2u));
  /* 11433d05 jmp 0x11433d99 */
  goto L_11433d99;
L_11433d0a:;
  /* 11433d0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d0d jne 0x11433d94 */
  if (!C.zf) goto L_11433d94;
L_11433d13:;
  /* 11433d13 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d15 jne 0x11433d23 */
  if (!C.zf) goto L_11433d23;
  /* 11433d17 call ebp */
  call_ind((uint32_t)(EBP), 0x11433d19u);
  /* 11433d19 mov esi, eax */
  ESI = (EAX);
  /* 11433d1b cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d1d je 0x11433de5 */
  if (C.zf) goto L_11433de5;
L_11433d23:;
  /* 11433d23 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11433d26 mov eax, esi */
  EAX = (ESI);
  /* 11433d28 je 0x11433d38 */
  if (C.zf) goto L_11433d38;
L_11433d2a:;
  /* 11433d2a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433d2b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433d2c cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11433d2f jne 0x11433d2a */
  if (!C.zf) goto L_11433d2a;
  /* 11433d31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433d32 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433d33 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11433d36 jne 0x11433d2a */
  if (!C.zf) goto L_11433d2a;
L_11433d38:;
  /* 11433d38 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11433d3a mov edi, dword ptr [0x11436064] */
  EDI = (r32((uint32_t)(0x11436064)));
  /* 11433d40 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11433d42 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d43 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d44 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433d45 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d46 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d47 push eax */
  push32((uint32_t)(EAX));
  /* 11433d48 push esi */
  push32((uint32_t)(ESI));
  /* 11433d49 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d4a push ebx */
  push32((uint32_t)(EBX));
  /* 11433d4b mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11433d4f call edi */
  call_ind((uint32_t)(EDI), 0x11433d51u);
  /* 11433d51 mov ebp, eax */
  EBP = (EAX);
  /* 11433d53 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d55 je 0x11433d89 */
  if (C.zf) goto L_11433d89;
  /* 11433d57 push ebp */
  push32((uint32_t)(EBP));
  /* 11433d58 call 0x1143420b */
  push32(0x11433d5du); f_1143420b();
  /* 11433d5d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d5f pop ecx */
  ECX = (pop32());
  /* 11433d60 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11433d64 je 0x11433d89 */
  if (C.zf) goto L_11433d89;
  /* 11433d66 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d67 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d68 push ebp */
  push32((uint32_t)(EBP));
  /* 11433d69 push eax */
  push32((uint32_t)(EAX));
  /* 11433d6a push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11433d6e push esi */
  push32((uint32_t)(ESI));
  /* 11433d6f push ebx */
  push32((uint32_t)(EBX));
  /* 11433d70 push ebx */
  push32((uint32_t)(EBX));
  /* 11433d71 call edi */
  call_ind((uint32_t)(EDI), 0x11433d73u);
  /* 11433d73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433d75 jne 0x11433d85 */
  if (!C.zf) goto L_11433d85;
  /* 11433d77 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11433d7b call 0x114341c3 */
  push32(0x11433d80u); f_114341c3();
  /* 11433d80 pop ecx */
  ECX = (pop32());
  /* 11433d81 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_11433d85:;
  /* 11433d85 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_11433d89:;
  /* 11433d89 push esi */
  push32((uint32_t)(ESI));
  /* 11433d8a call dword ptr [0x11436068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436068))), 0x11433d90u);
  /* 11433d90 mov eax, ebx */
  EAX = (EBX);
  /* 11433d92 jmp 0x11433de7 */
  goto L_11433de7;
L_11433d94:;
  /* 11433d94 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d97 jne 0x11433de5 */
  if (!C.zf) goto L_11433de5;
L_11433d99:;
  /* 11433d99 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433d9b jne 0x11433da9 */
  if (!C.zf) goto L_11433da9;
  /* 11433d9d call dword ptr [0x1143606c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143606c))), 0x11433da3u);
  /* 11433da3 mov edi, eax */
  EDI = (EAX);
  /* 11433da5 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433da7 je 0x11433de5 */
  if (C.zf) goto L_11433de5;
L_11433da9:;
  /* 11433da9 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433dab mov eax, edi */
  EAX = (EDI);
  /* 11433dad je 0x11433db9 */
  if (C.zf) goto L_11433db9;
L_11433daf:;
  /* 11433daf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433db0 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433db2 jne 0x11433daf */
  if (!C.zf) goto L_11433daf;
  /* 11433db4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433db5 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11433db7 jne 0x11433daf */
  if (!C.zf) goto L_11433daf;
L_11433db9:;
  /* 11433db9 sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11433dbb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433dbc mov ebp, eax */
  EBP = (EAX);
  /* 11433dbe push ebp */
  push32((uint32_t)(EBP));
  /* 11433dbf call 0x1143420b */
  push32(0x11433dc4u); f_1143420b();
  /* 11433dc4 mov esi, eax */
  ESI = (EAX);
  /* 11433dc6 pop ecx */
  ECX = (pop32());
  /* 11433dc7 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433dc9 jne 0x11433dcf */
  if (!C.zf) goto L_11433dcf;
  /* 11433dcb xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11433dcd jmp 0x11433dda */
  goto L_11433dda;
L_11433dcf:;
  /* 11433dcf push ebp */
  push32((uint32_t)(EBP));
  /* 11433dd0 push edi */
  push32((uint32_t)(EDI));
  /* 11433dd1 push esi */
  push32((uint32_t)(ESI));
  /* 11433dd2 call 0x11434800 */
  push32(0x11433dd7u); f_11434800();
  /* 11433dd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433dda:;
  /* 11433dda push edi */
  push32((uint32_t)(EDI));
  /* 11433ddb call dword ptr [0x11436078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436078))), 0x11433de1u);
  /* 11433de1 mov eax, esi */
  EAX = (ESI);
  /* 11433de3 jmp 0x11433de7 */
  goto L_11433de7;
L_11433de5:;
  /* 11433de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11433de7:;
  /* 11433de7 pop edi */
  EDI = (pop32());
  /* 11433de8 pop esi */
  ESI = (pop32());
  /* 11433de9 pop ebp */
  EBP = (pop32());
  /* 11433dea pop ebx */
  EBX = (pop32());
  /* 11433deb pop ecx */
  ECX = (pop32());
  /* 11433dec pop ecx */
  ECX = (pop32());
  /* 11433ded ret  */
  ESPCHK(0x11433cbcu, _esp0);
  ESP += 4; return;
}

/* FUN_10003dee @ 0x11433dee (60 bytes, 20 insns) */
void f_11433dee(void) {
  FTRACE(0x11433deeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433dee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11433df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433df2 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433df6 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11433dfb sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11433dfe push eax */
  push32((uint32_t)(EAX));
  /* 11433dff call dword ptr [0x11436060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436060))), 0x11433e05u);
  /* 11433e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433e07 mov dword ptr [0x11437fa8], eax */
  w32((uint32_t)(0x11437fa8), (EAX));
  /* 11433e0c je 0x11433e23 */
  if (C.zf) goto L_11433e23;
  /* 11433e0e call 0x11434b35 */
  push32(0x11433e13u); f_11434b35();
  /* 11433e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433e15 jne 0x11433e26 */
  if (!C.zf) goto L_11433e26;
  /* 11433e17 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11433e1d call dword ptr [0x11436058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436058))), 0x11433e23u);
L_11433e23:;
  /* 11433e23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11433e25 ret  */
  ESPCHK(0x11433deeu, _esp0);
  ESP += 4; return;
L_11433e26:;
  /* 11433e26 push 1 */
  push32((uint32_t)(0x1u));
  /* 11433e28 pop eax */
  EAX = (pop32());
  /* 11433e29 ret  */
  ESPCHK(0x11433deeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003e2a @ 0x11433e2a (117 bytes, 38 insns) */
void f_11433e2a(void) {
  FTRACE(0x11433e2au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433e2a push ebx */
  push32((uint32_t)(EBX));
  /* 11433e2b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11433e2d cmp dword ptr [0x11437d78], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11437d78))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433e33 push ebp */
  push32((uint32_t)(EBP));
  /* 11433e34 mov ebp, dword ptr [0x1143604c] */
  EBP = (r32((uint32_t)(0x1143604c)));
  /* 11433e3a jle 0x11433e80 */
  if ((C.zf||C.sf!=C.of)) goto L_11433e80;
  /* 11433e3c mov eax, dword ptr [0x11437d7c] */
  EAX = (r32((uint32_t)(0x11437d7c)));
  /* 11433e41 push esi */
  push32((uint32_t)(ESI));
  /* 11433e42 push edi */
  push32((uint32_t)(EDI));
  /* 11433e43 mov edi, dword ptr [0x11436050] */
  EDI = (r32((uint32_t)(0x11436050)));
  /* 11433e49 lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11433e4c:;
  /* 11433e4c push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11433e51 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11433e56 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11433e58 call edi */
  call_ind((uint32_t)(EDI), 0x11433e5au);
  /* 11433e5a push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11433e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11433e61 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11433e63 call edi */
  call_ind((uint32_t)(EDI), 0x11433e65u);
  /* 11433e65 push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 11433e68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433e6a push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11433e70 call ebp */
  call_ind((uint32_t)(EBP), 0x11433e72u);
  /* 11433e72 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433e75 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11433e76 cmp ebx, dword ptr [0x11437d78] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11437d78))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433e7c jl 0x11433e4c */
  if ((C.sf!=C.of)) goto L_11433e4c;
  /* 11433e7e pop edi */
  EDI = (pop32());
  /* 11433e7f pop esi */
  ESI = (pop32());
L_11433e80:;
  /* 11433e80 push dword ptr [0x11437d7c] */
  push32((uint32_t)(r32((uint32_t)(0x11437d7c))));
  /* 11433e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433e88 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11433e8e call ebp */
  call_ind((uint32_t)(EBP), 0x11433e90u);
  /* 11433e90 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11433e96 call dword ptr [0x11436058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436058))), 0x11433e9cu);
  /* 11433e9c pop ebp */
  EBP = (pop32());
  /* 11433e9d pop ebx */
  EBX = (pop32());
  /* 11433e9e ret  */
  ESPCHK(0x11433e2au, _esp0);
  ESP += 4; return;
}

/* FUN_10003e9f @ 0x11433e9f (57 bytes, 18 insns) */
void f_11433e9f(void) {
  FTRACE(0x11433e9fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433e9f mov eax, dword ptr [0x11437b70] */
  EAX = (r32((uint32_t)(0x11437b70)));
  /* 11433ea4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433ea7 je 0x11433eb6 */
  if (C.zf) goto L_11433eb6;
  /* 11433ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433eab jne 0x11433ed7 */
  if (!C.zf) goto L_11433ed7;
  /* 11433ead cmp dword ptr [0x11437b74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11437b74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433eb4 jne 0x11433ed7 */
  if (!C.zf) goto L_11433ed7;
L_11433eb6:;
  /* 11433eb6 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11433ebb call 0x11433ed8 */
  push32(0x11433ec0u); f_11433ed8();
  /* 11433ec0 mov eax, dword ptr [0x11437cc4] */
  EAX = (r32((uint32_t)(0x11437cc4)));
  /* 11433ec5 pop ecx */
  ECX = (pop32());
  /* 11433ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433ec8 je 0x11433ecc */
  if (C.zf) goto L_11433ecc;
  /* 11433eca call eax */
  call_ind((uint32_t)(EAX), 0x11433eccu);
L_11433ecc:;
  /* 11433ecc push 0xff */
  push32((uint32_t)(0xffu));
  /* 11433ed1 call 0x11433ed8 */
  push32(0x11433ed6u); f_11433ed8();
  /* 11433ed6 pop ecx */
  ECX = (pop32());
L_11433ed7:;
  /* 11433ed7 ret  */
  ESPCHK(0x11433e9fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003ed8 @ 0x11433ed8 (339 bytes, 100 insns) */
void f_11433ed8(void) {
  FTRACE(0x11433ed8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11433ed8 push ebp */
  push32((uint32_t)(EBP));
  /* 11433ed9 mov ebp, esp */
  EBP = (ESP);
  /* 11433edb sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11433ee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11433ee4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11433ee6 mov eax, 0x11437480 */
  EAX = (0x11437480u);
L_11433eeb:;
  /* 11433eeb cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433eed je 0x11433efa */
  if (C.zf) goto L_11433efa;
  /* 11433eef add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11433ef2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11433ef3 cmp eax, 0x11437510 */
  { uint32_t _a=(EAX),_b=(0x11437510u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433ef8 jl 0x11433eeb */
  if ((C.sf!=C.of)) goto L_11433eeb;
L_11433efa:;
  /* 11433efa push esi */
  push32((uint32_t)(ESI));
  /* 11433efb mov esi, ecx */
  ESI = (ECX);
  /* 11433efd shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11433f00 cmp edx, dword ptr [esi + 0x11437480] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11437480))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433f06 jne 0x11434028 */
  if (!C.zf) goto L_11434028;
  /* 11433f0c mov eax, dword ptr [0x11437b70] */
  EAX = (r32((uint32_t)(0x11437b70)));
  /* 11433f11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433f14 je 0x11434002 */
  if (C.zf) goto L_11434002;
  /* 11433f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433f1c jne 0x11433f2b */
  if (!C.zf) goto L_11433f2b;
  /* 11433f1e cmp dword ptr [0x11437b74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11437b74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433f25 je 0x11434002 */
  if (C.zf) goto L_11434002;
L_11433f2b:;
  /* 11433f2b cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433f31 je 0x11434028 */
  if (C.zf) goto L_11434028;
  /* 11433f37 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11433f3d push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11433f42 push eax */
  push32((uint32_t)(EAX));
  /* 11433f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11433f45 call dword ptr [0x11436070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436070))), 0x11433f4bu);
  /* 11433f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11433f4d jne 0x11433f62 */
  if (!C.zf) goto L_11433f62;
  /* 11433f4f lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11433f55 push 0x11436440 */
  push32((uint32_t)(0x11436440u));
  /* 11433f5a push eax */
  push32((uint32_t)(EAX));
  /* 11433f5b call 0x114342a0 */
  push32(0x11433f60u); f_114342a0();
  /* 11433f60 pop ecx */
  ECX = (pop32());
  /* 11433f61 pop ecx */
  ECX = (pop32());
L_11433f62:;
  /* 11433f62 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11433f68 push edi */
  push32((uint32_t)(EDI));
  /* 11433f69 push eax */
  push32((uint32_t)(EAX));
  /* 11433f6a lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11433f70 call 0x11434390 */
  push32(0x11433f75u); f_11434390();
  /* 11433f75 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11433f76 pop ecx */
  ECX = (pop32());
  /* 11433f77 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11433f7a jbe 0x11433fa5 */
  if ((C.cf||C.zf)) goto L_11433fa5;
  /* 11433f7c lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11433f82 push eax */
  push32((uint32_t)(EAX));
  /* 11433f83 call 0x11434390 */
  push32(0x11433f88u); f_11434390();
  /* 11433f88 mov edi, eax */
  EDI = (EAX);
  /* 11433f8a lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11433f90 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11433f93 push 3 */
  push32((uint32_t)(0x3u));
  /* 11433f95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11433f97 push 0x1143643c */
  push32((uint32_t)(0x1143643cu));
  /* 11433f9c push edi */
  push32((uint32_t)(EDI));
  /* 11433f9d call 0x11435410 */
  push32(0x11433fa2u); f_11435410();
  /* 11433fa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11433fa5:;
  /* 11433fa5 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11433fab push 0x11436420 */
  push32((uint32_t)(0x11436420u));
  /* 11433fb0 push eax */
  push32((uint32_t)(EAX));
  /* 11433fb1 call 0x114342a0 */
  push32(0x11433fb6u); f_114342a0();
  /* 11433fb6 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11433fbc push edi */
  push32((uint32_t)(EDI));
  /* 11433fbd push eax */
  push32((uint32_t)(EAX));
  /* 11433fbe call 0x114342b0 */
  push32(0x11433fc3u); f_114342b0();
  /* 11433fc3 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11433fc9 push 0x1143641c */
  push32((uint32_t)(0x1143641cu));
  /* 11433fce push eax */
  push32((uint32_t)(EAX));
  /* 11433fcf call 0x114342b0 */
  push32(0x11433fd4u); f_114342b0();
  /* 11433fd4 push dword ptr [esi + 0x11437484] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11437484))));
  /* 11433fda lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11433fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11433fe1 call 0x114342b0 */
  push32(0x11433fe6u); f_114342b0();
  /* 11433fe6 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11433feb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 11433ff1 push 0x114363f4 */
  push32((uint32_t)(0x114363f4u));
  /* 11433ff6 push eax */
  push32((uint32_t)(EAX));
  /* 11433ff7 call 0x1143537e */
  push32(0x11433ffcu); f_1143537e();
  /* 11433ffc add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11433fff pop edi */
  EDI = (pop32());
  /* 11434000 jmp 0x11434028 */
  goto L_11434028;
L_11434002:;
  /* 11434002 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11434005 lea esi, [esi + 0x11437484] */
  ESI = ((uint32_t)(ESI + 0x11437484));
  /* 1143400b push 0 */
  push32((uint32_t)(0x0u));
  /* 1143400d push eax */
  push32((uint32_t)(EAX));
  /* 1143400e push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11434010 call 0x11434390 */
  push32(0x11434015u); f_11434390();
  /* 11434015 pop ecx */
  ECX = (pop32());
  /* 11434016 push eax */
  push32((uint32_t)(EAX));
  /* 11434017 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11434019 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1143401b call dword ptr [0x11436080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436080))), 0x11434021u);
  /* 11434021 push eax */
  push32((uint32_t)(EAX));
  /* 11434022 call dword ptr [0x11436054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436054))), 0x11434028u);
L_11434028:;
  /* 11434028 pop esi */
  ESI = (pop32());
  /* 11434029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143402a ret  */
  ESPCHK(0x11433ed8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000402b @ 0x1143402b (41 bytes, 12 insns) */
void f_1143402b(void) {
  FTRACE(0x1143402bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143402b push esi */
  push32((uint32_t)(ESI));
  /* 1143402c mov esi, dword ptr [0x11436044] */
  ESI = (r32((uint32_t)(0x11436044)));
  /* 11434032 push dword ptr [0x11437554] */
  push32((uint32_t)(r32((uint32_t)(0x11437554))));
  /* 11434038 call esi */
  call_ind((uint32_t)(ESI), 0x1143403au);
  /* 1143403a push dword ptr [0x11437544] */
  push32((uint32_t)(r32((uint32_t)(0x11437544))));
  /* 11434040 call esi */
  call_ind((uint32_t)(ESI), 0x11434042u);
  /* 11434042 push dword ptr [0x11437534] */
  push32((uint32_t)(r32((uint32_t)(0x11437534))));
  /* 11434048 call esi */
  call_ind((uint32_t)(ESI), 0x1143404au);
  /* 1143404a push dword ptr [0x11437514] */
  push32((uint32_t)(r32((uint32_t)(0x11437514))));
  /* 11434050 call esi */
  call_ind((uint32_t)(ESI), 0x11434052u);
  /* 11434052 pop esi */
  ESI = (pop32());
  /* 11434053 ret  */
  ESPCHK(0x1143402bu, _esp0);
  ESP += 4; return;
}

/* FUN_10004054 @ 0x11434054 (108 bytes, 34 insns) */
void f_11434054(void) {
  FTRACE(0x11434054u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434054 push esi */
  push32((uint32_t)(ESI));
  /* 11434055 push edi */
  push32((uint32_t)(EDI));
  /* 11434056 mov edi, dword ptr [0x11436074] */
  EDI = (r32((uint32_t)(0x11436074)));
  /* 1143405c mov esi, 0x11437510 */
  ESI = (0x11437510u);
L_11434061:;
  /* 11434061 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11434063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11434065 je 0x11434092 */
  if (C.zf) goto L_11434092;
  /* 11434067 cmp esi, 0x11437554 */
  { uint32_t _a=(ESI),_b=(0x11437554u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143406d je 0x11434092 */
  if (C.zf) goto L_11434092;
  /* 1143406f cmp esi, 0x11437544 */
  { uint32_t _a=(ESI),_b=(0x11437544u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434075 je 0x11434092 */
  if (C.zf) goto L_11434092;
  /* 11434077 cmp esi, 0x11437534 */
  { uint32_t _a=(ESI),_b=(0x11437534u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143407d je 0x11434092 */
  if (C.zf) goto L_11434092;
  /* 1143407f cmp esi, 0x11437514 */
  { uint32_t _a=(ESI),_b=(0x11437514u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434085 je 0x11434092 */
  if (C.zf) goto L_11434092;
  /* 11434087 push eax */
  push32((uint32_t)(EAX));
  /* 11434088 call edi */
  call_ind((uint32_t)(EDI), 0x1143408au);
  /* 1143408a push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1143408c call 0x114341c3 */
  push32(0x11434091u); f_114341c3();
  /* 11434091 pop ecx */
  ECX = (pop32());
L_11434092:;
  /* 11434092 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11434095 cmp esi, 0x114375d0 */
  { uint32_t _a=(ESI),_b=(0x114375d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143409b jl 0x11434061 */
  if ((C.sf!=C.of)) goto L_11434061;
  /* 1143409d push dword ptr [0x11437534] */
  push32((uint32_t)(r32((uint32_t)(0x11437534))));
  /* 114340a3 call edi */
  call_ind((uint32_t)(EDI), 0x114340a5u);
  /* 114340a5 push dword ptr [0x11437544] */
  push32((uint32_t)(r32((uint32_t)(0x11437544))));
  /* 114340ab call edi */
  call_ind((uint32_t)(EDI), 0x114340adu);
  /* 114340ad push dword ptr [0x11437554] */
  push32((uint32_t)(r32((uint32_t)(0x11437554))));
  /* 114340b3 call edi */
  call_ind((uint32_t)(EDI), 0x114340b5u);
  /* 114340b5 push dword ptr [0x11437514] */
  push32((uint32_t)(r32((uint32_t)(0x11437514))));
  /* 114340bb call edi */
  call_ind((uint32_t)(EDI), 0x114340bdu);
  /* 114340bd pop edi */
  EDI = (pop32());
  /* 114340be pop esi */
  ESI = (pop32());
  /* 114340bf ret  */
  ESPCHK(0x11434054u, _esp0);
  ESP += 4; return;
}

/* FUN_100040c0 @ 0x114340c0 (97 bytes, 37 insns) */
void f_114340c0(void) {
  FTRACE(0x114340c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114340c0 push ebp */
  push32((uint32_t)(EBP));
  /* 114340c1 mov ebp, esp */
  EBP = (ESP);
  /* 114340c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 114340c6 push esi */
  push32((uint32_t)(ESI));
  /* 114340c7 cmp dword ptr [eax*4 + 0x11437510], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11437510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114340cf lea esi, [eax*4 + 0x11437510] */
  ESI = ((uint32_t)(EAX*4 + 0x11437510));
  /* 114340d6 jne 0x11434116 */
  if (!C.zf) goto L_11434116;
  /* 114340d8 push edi */
  push32((uint32_t)(EDI));
  /* 114340d9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 114340db call 0x1143420b */
  push32(0x114340e0u); f_1143420b();
  /* 114340e0 mov edi, eax */
  EDI = (EAX);
  /* 114340e2 pop ecx */
  ECX = (pop32());
  /* 114340e3 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 114340e5 jne 0x114340ef */
  if (!C.zf) goto L_114340ef;
  /* 114340e7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114340e9 call 0x11433530 */
  push32(0x114340eeu); f_11433530();
  /* 114340ee pop ecx */
  ECX = (pop32());
L_114340ef:;
  /* 114340ef push 0x11 */
  push32((uint32_t)(0x11u));
  /* 114340f1 call 0x114340c0 */
  push32(0x114340f6u); f_114340c0();
  /* 114340f6 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114340f9 pop ecx */
  ECX = (pop32());
  /* 114340fa push edi */
  push32((uint32_t)(EDI));
  /* 114340fb jne 0x11434107 */
  if (!C.zf) goto L_11434107;
  /* 114340fd call dword ptr [0x11436044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436044))), 0x11434103u);
  /* 11434103 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11434105 jmp 0x1143410d */
  goto L_1143410d;
L_11434107:;
  /* 11434107 call 0x114341c3 */
  push32(0x1143410cu); f_114341c3();
  /* 1143410c pop ecx */
  ECX = (pop32());
L_1143410d:;
  /* 1143410d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1143410f call 0x11434121 */
  push32(0x11434114u); f_11434121();
  /* 11434114 pop ecx */
  ECX = (pop32());
  /* 11434115 pop edi */
  EDI = (pop32());
L_11434116:;
  /* 11434116 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11434118 call dword ptr [0x11436040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436040))), 0x1143411eu);
  /* 1143411e pop esi */
  ESI = (pop32());
  /* 1143411f pop ebp */
  EBP = (pop32());
  /* 11434120 ret  */
  ESPCHK(0x114340c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004121 @ 0x11434121 (21 bytes, 7 insns) */
void f_11434121(void) {
  FTRACE(0x11434121u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434121 push ebp */
  push32((uint32_t)(EBP));
  /* 11434122 mov ebp, esp */
  EBP = (ESP);
  /* 11434124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434127 push dword ptr [eax*4 + 0x11437510] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11437510))));
  /* 1143412e call dword ptr [0x11436048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436048))), 0x11434134u);
  /* 11434134 pop ebp */
  EBP = (pop32());
  /* 11434135 ret  */
  ESPCHK(0x11434121u, _esp0);
  ESP += 4; return;
}

/* FUN_10004136 @ 0x11434136 (141 bytes, 56 insns) */
void f_11434136(void) {
  FTRACE(0x11434136u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434136 push ebx */
  push32((uint32_t)(EBX));
  /* 11434137 push esi */
  push32((uint32_t)(ESI));
  /* 11434138 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1143413c push edi */
  push32((uint32_t)(EDI));
  /* 1143413d imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11434142 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434145 mov ebx, esi */
  EBX = (ESI);
  /* 11434147 ja 0x11434156 */
  if ((!C.cf&&!C.zf)) goto L_11434156;
  /* 11434149 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1143414b jne 0x11434150 */
  if (!C.zf) goto L_11434150;
  /* 1143414d push 1 */
  push32((uint32_t)(0x1u));
  /* 1143414f pop esi */
  ESI = (pop32());
L_11434150:;
  /* 11434150 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11434153 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_11434156:;
  /* 11434156 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11434158 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143415b ja 0x11434197 */
  if ((!C.cf&&!C.zf)) goto L_11434197;
  /* 1143415d cmp ebx, dword ptr [0x11437760] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11437760))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434163 ja 0x11434182 */
  if ((!C.cf&&!C.zf)) goto L_11434182;
  /* 11434165 push 9 */
  push32((uint32_t)(0x9u));
  /* 11434167 call 0x114340c0 */
  push32(0x1143416cu); f_114340c0();
  /* 1143416c push ebx */
  push32((uint32_t)(EBX));
  /* 1143416d call 0x11434ec9 */
  push32(0x11434172u); f_11434ec9();
  /* 11434172 push 9 */
  push32((uint32_t)(0x9u));
  /* 11434174 mov edi, eax */
  EDI = (EAX);
  /* 11434176 call 0x11434121 */
  push32(0x1143417bu); f_11434121();
  /* 1143417b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143417e test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11434180 jne 0x114341ad */
  if (!C.zf) goto L_114341ad;
L_11434182:;
  /* 11434182 push esi */
  push32((uint32_t)(ESI));
  /* 11434183 push 8 */
  push32((uint32_t)(0x8u));
  /* 11434185 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 1143418b call dword ptr [0x1143603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143603c))), 0x11434191u);
  /* 11434191 mov edi, eax */
  EDI = (EAX);
  /* 11434193 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11434195 jne 0x114341b9 */
  if (!C.zf) goto L_114341b9;
L_11434197:;
  /* 11434197 cmp dword ptr [0x11437d3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11437d3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143419e je 0x114341b9 */
  if (C.zf) goto L_114341b9;
  /* 114341a0 push esi */
  push32((uint32_t)(ESI));
  /* 114341a1 call 0x11435568 */
  push32(0x114341a6u); f_11435568();
  /* 114341a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114341a8 pop ecx */
  ECX = (pop32());
  /* 114341a9 je 0x114341bf */
  if (C.zf) goto L_114341bf;
  /* 114341ab jmp 0x11434156 */
  goto L_11434156;
L_114341ad:;
  /* 114341ad push ebx */
  push32((uint32_t)(EBX));
  /* 114341ae push 0 */
  push32((uint32_t)(0x0u));
  /* 114341b0 push edi */
  push32((uint32_t)(EDI));
  /* 114341b1 call 0x11435510 */
  push32(0x114341b6u); f_11435510();
  /* 114341b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_114341b9:;
  /* 114341b9 mov eax, edi */
  EAX = (EDI);
L_114341bb:;
  /* 114341bb pop edi */
  EDI = (pop32());
  /* 114341bc pop esi */
  ESI = (pop32());
  /* 114341bd pop ebx */
  EBX = (pop32());
  /* 114341be ret  */
  ESPCHK(0x11434136u, _esp0);
  ESP += 4; return;
L_114341bf:;
  /* 114341bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114341c1 jmp 0x114341bb */
  goto L_114341bb;
}

/* FUN_100041c3 @ 0x114341c3 (72 bytes, 29 insns) */
void f_114341c3(void) {
  FTRACE(0x114341c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114341c3 push esi */
  push32((uint32_t)(ESI));
  /* 114341c4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 114341c8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114341ca je 0x11434209 */
  if (C.zf) goto L_11434209;
  /* 114341cc push 9 */
  push32((uint32_t)(0x9u));
  /* 114341ce call 0x114340c0 */
  push32(0x114341d3u); f_114340c0();
  /* 114341d3 push esi */
  push32((uint32_t)(ESI));
  /* 114341d4 call 0x11434b73 */
  push32(0x114341d9u); f_11434b73();
  /* 114341d9 pop ecx */
  ECX = (pop32());
  /* 114341da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114341dc pop ecx */
  ECX = (pop32());
  /* 114341dd je 0x114341f2 */
  if (C.zf) goto L_114341f2;
  /* 114341df push esi */
  push32((uint32_t)(ESI));
  /* 114341e0 push eax */
  push32((uint32_t)(EAX));
  /* 114341e1 call 0x11434b9e */
  push32(0x114341e6u); f_11434b9e();
  /* 114341e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 114341e8 call 0x11434121 */
  push32(0x114341edu); f_11434121();
  /* 114341ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114341f0 pop esi */
  ESI = (pop32());
  /* 114341f1 ret  */
  ESPCHK(0x114341c3u, _esp0);
  ESP += 4; return;
L_114341f2:;
  /* 114341f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 114341f4 call 0x11434121 */
  push32(0x114341f9u); f_11434121();
  /* 114341f9 pop ecx */
  ECX = (pop32());
  /* 114341fa push esi */
  push32((uint32_t)(ESI));
  /* 114341fb push 0 */
  push32((uint32_t)(0x0u));
  /* 114341fd push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11434203 call dword ptr [0x1143604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143604c))), 0x11434209u);
L_11434209:;
  /* 11434209 pop esi */
  ESI = (pop32());
  /* 1143420a ret  */
  ESPCHK(0x114341c3u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1143420b (18 bytes, 6 insns) */
void f_1143420b(void) {
  FTRACE(0x1143420bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143420b push dword ptr [0x11437d3c] */
  push32((uint32_t)(r32((uint32_t)(0x11437d3c))));
  /* 11434211 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11434215 call 0x1143421d */
  push32(0x1143421au); f_1143421d();
  /* 1143421a pop ecx */
  ECX = (pop32());
  /* 1143421b pop ecx */
  ECX = (pop32());
  /* 1143421c ret  */
  ESPCHK(0x1143420bu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1143421d (44 bytes, 16 insns) */
void f_1143421d(void) {
  FTRACE(0x1143421du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143421d cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434222 ja 0x11434246 */
  if ((!C.cf&&!C.zf)) goto L_11434246;
L_11434224:;
  /* 11434224 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11434228 call 0x11434249 */
  push32(0x1143422du); f_11434249();
  /* 1143422d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143422f pop ecx */
  ECX = (pop32());
  /* 11434230 jne 0x11434248 */
  if (!C.zf) goto L_11434248;
  /* 11434232 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434236 je 0x11434248 */
  if (C.zf) goto L_11434248;
  /* 11434238 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1143423c call 0x11435568 */
  push32(0x11434241u); f_11435568();
  /* 11434241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11434243 pop ecx */
  ECX = (pop32());
  /* 11434244 jne 0x11434224 */
  if (!C.zf) goto L_11434224;
L_11434246:;
  /* 11434246 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11434248:;
  /* 11434248 ret  */
  ESPCHK(0x1143421du, _esp0);
  ESP += 4; return;
}

/* FUN_10004249 @ 0x11434249 (78 bytes, 30 insns) */
void f_11434249(void) {
  FTRACE(0x11434249u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434249 push esi */
  push32((uint32_t)(ESI));
  /* 1143424a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1143424e cmp esi, dword ptr [0x11437760] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11437760))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434254 push edi */
  push32((uint32_t)(EDI));
  /* 11434255 ja 0x11434278 */
  if ((!C.cf&&!C.zf)) goto L_11434278;
  /* 11434257 push 9 */
  push32((uint32_t)(0x9u));
  /* 11434259 call 0x114340c0 */
  push32(0x1143425eu); f_114340c0();
  /* 1143425e push esi */
  push32((uint32_t)(ESI));
  /* 1143425f call 0x11434ec9 */
  push32(0x11434264u); f_11434ec9();
  /* 11434264 push 9 */
  push32((uint32_t)(0x9u));
  /* 11434266 mov edi, eax */
  EDI = (EAX);
  /* 11434268 call 0x11434121 */
  push32(0x1143426du); f_11434121();
  /* 1143426d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11434270 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11434272 je 0x11434278 */
  if (C.zf) goto L_11434278;
  /* 11434274 mov eax, edi */
  EAX = (EDI);
  /* 11434276 jmp 0x11434294 */
  goto L_11434294;
L_11434278:;
  /* 11434278 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1143427a jne 0x1143427f */
  if (!C.zf) goto L_1143427f;
  /* 1143427c push 1 */
  push32((uint32_t)(0x1u));
  /* 1143427e pop esi */
  ESI = (pop32());
L_1143427f:;
  /* 1143427f add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11434282 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 11434285 push esi */
  push32((uint32_t)(ESI));
  /* 11434286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11434288 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 1143428e call dword ptr [0x1143603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143603c))), 0x11434294u);
L_11434294:;
  /* 11434294 pop edi */
  EDI = (pop32());
  /* 11434295 pop esi */
  ESI = (pop32());
  /* 11434296 ret  */
  ESPCHK(0x11434249u, _esp0);
  ESP += 4; return;
}

/* FUN_100042a0 @ 0x114342a0 (7 bytes, 3 insns) */
void f_114342a0(void) {
  FTRACE(0x114342a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114342a0 push edi */
  push32((uint32_t)(EDI));
  /* 114342a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 114342a5 jmp 0x11434311 */
  jmp_ind(0x11434311u); return;
}

/* FUN_100042b0 @ 0x114342b0 (224 bytes, 84 insns) */
void f_114342b0(void) {
  FTRACE(0x114342b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114342b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114342b4 push edi */
  push32((uint32_t)(EDI));
  /* 114342b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114342bb je 0x114342cc */
  if (C.zf) goto L_114342cc;
L_114342bd:;
  /* 114342bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 114342bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114342c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114342c2 je 0x114342ff */
  if (C.zf) goto L_114342ff;
  /* 114342c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114342ca jne 0x114342bd */
  if (!C.zf) goto L_114342bd;
L_114342cc:;
  /* 114342cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114342ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114342d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114342d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114342d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114342da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114342dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114342e2 je 0x114342cc */
  if (C.zf) goto L_114342cc;
  /* 114342e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114342e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114342e9 je 0x1143430e */
  if (C.zf) goto L_1143430e;
  /* 114342eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114342ed je 0x11434309 */
  if (C.zf) goto L_11434309;
  /* 114342ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 114342f4 je 0x11434304 */
  if (C.zf) goto L_11434304;
  /* 114342f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 114342fb je 0x114342ff */
  if (C.zf) goto L_114342ff;
  /* 114342fd jmp 0x114342cc */
  goto L_114342cc;
L_114342ff:;
  /* 114342ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11434302 jmp 0x11434311 */
  goto L_11434311;
L_11434304:;
  /* 11434304 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11434307 jmp 0x11434311 */
  goto L_11434311;
L_11434309:;
  /* 11434309 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1143430c jmp 0x11434311 */
  goto L_11434311;
L_1143430e:;
  /* 1143430e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11434311:;
  /* 11434311 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11434315 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1143431b je 0x11434336 */
  if (C.zf) goto L_11434336;
L_1143431d:;
  /* 1143431d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1143431f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11434320 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11434322 je 0x11434388 */
  if (C.zf) goto L_11434388;
  /* 11434324 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11434326 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11434327 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1143432d jne 0x1143431d */
  if (!C.zf) goto L_1143431d;
  /* 1143432f jmp 0x11434336 */
  goto L_11434336;
L_11434331:;
  /* 11434331 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11434333 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11434336:;
  /* 11434336 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1143433b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1143433d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143433f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11434342 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11434344 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11434346 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434349 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1143434e je 0x11434331 */
  if (C.zf) goto L_11434331;
  /* 11434350 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11434352 je 0x11434388 */
  if (C.zf) goto L_11434388;
  /* 11434354 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11434356 je 0x1143437f */
  if (C.zf) goto L_1143437f;
  /* 11434358 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1143435e je 0x11434372 */
  if (C.zf) goto L_11434372;
  /* 11434360 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11434366 je 0x1143436a */
  if (C.zf) goto L_1143436a;
  /* 11434368 jmp 0x11434331 */
  goto L_11434331;
L_1143436a:;
  /* 1143436a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1143436c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11434370 pop edi */
  EDI = (pop32());
  /* 11434371 ret  */
  ESPCHK(0x114342b0u, _esp0);
  ESP += 4; return;
L_11434372:;
  /* 11434372 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11434375 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11434379 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1143437d pop edi */
  EDI = (pop32());
  /* 1143437e ret  */
  ESPCHK(0x114342b0u, _esp0);
  ESP += 4; return;
L_1143437f:;
  /* 1143437f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11434382 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11434386 pop edi */
  EDI = (pop32());
  /* 11434387 ret  */
  ESPCHK(0x114342b0u, _esp0);
  ESP += 4; return;
L_11434388:;
  /* 11434388 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1143438a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1143438e pop edi */
  EDI = (pop32());
  /* 1143438f ret  */
  ESPCHK(0x114342b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11434390 (123 bytes, 44 insns) */
void f_11434390(void) {
  FTRACE(0x11434390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434390 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11434394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1143439a je 0x114343b0 */
  if (C.zf) goto L_114343b0;
L_1143439c:;
  /* 1143439c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1143439e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1143439f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114343a1 je 0x114343e3 */
  if (C.zf) goto L_114343e3;
  /* 114343a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 114343a9 jne 0x1143439c */
  if (!C.zf) goto L_1143439c;
  /* 114343ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_114343b0:;
  /* 114343b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 114343b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114343b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114343b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114343bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114343be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 114343c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114343c6 je 0x114343b0 */
  if (C.zf) goto L_114343b0;
  /* 114343c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 114343cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114343cd je 0x11434401 */
  if (C.zf) goto L_11434401;
  /* 114343cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 114343d1 je 0x114343f7 */
  if (C.zf) goto L_114343f7;
  /* 114343d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 114343d8 je 0x114343ed */
  if (C.zf) goto L_114343ed;
  /* 114343da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 114343df je 0x114343e3 */
  if (C.zf) goto L_114343e3;
  /* 114343e1 jmp 0x114343b0 */
  goto L_114343b0;
L_114343e3:;
  /* 114343e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 114343e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114343ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114343ec ret  */
  ESPCHK(0x11434390u, _esp0);
  ESP += 4; return;
L_114343ed:;
  /* 114343ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 114343f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114343f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114343f6 ret  */
  ESPCHK(0x11434390u, _esp0);
  ESP += 4; return;
L_114343f7:;
  /* 114343f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 114343fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 114343fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434400 ret  */
  ESPCHK(0x11434390u, _esp0);
  ESP += 4; return;
L_11434401:;
  /* 11434401 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11434404 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11434408 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143440a ret  */
  ESPCHK(0x11434390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000440b @ 0x1143440b (429 bytes, 143 insns) */
void f_1143440b(void) {
  FTRACE(0x1143440bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143440b push ebp */
  push32((uint32_t)(EBP));
  /* 1143440c mov ebp, esp */
  EBP = (ESP);
  /* 1143440e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434411 push ebx */
  push32((uint32_t)(EBX));
  /* 11434412 push esi */
  push32((uint32_t)(ESI));
  /* 11434413 push edi */
  push32((uint32_t)(EDI));
  /* 11434414 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11434416 call 0x114340c0 */
  push32(0x1143441bu); f_114340c0();
  /* 1143441b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1143441e call 0x114345b8 */
  push32(0x11434423u); f_114345b8();
  /* 11434423 mov ebx, eax */
  EBX = (EAX);
  /* 11434425 pop ecx */
  ECX = (pop32());
  /* 11434426 cmp ebx, dword ptr [0x11437d80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11437d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143442c pop ecx */
  ECX = (pop32());
  /* 1143442d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434430 jne 0x11434439 */
  if (!C.zf) goto L_11434439;
L_11434432:;
  /* 11434432 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11434434 jmp 0x114345a9 */
  goto L_114345a9;
L_11434439:;
  /* 11434439 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1143443b je 0x11434597 */
  if (C.zf) goto L_11434597;
  /* 11434441 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11434443 mov eax, 0x11437668 */
  EAX = (0x11437668u);
L_11434448:;
  /* 11434448 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143444a je 0x114344c0 */
  if (C.zf) goto L_114344c0;
  /* 1143444c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143444f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11434450 cmp eax, 0x11437758 */
  { uint32_t _a=(EAX),_b=(0x11437758u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434455 jl 0x11434448 */
  if ((C.sf!=C.of)) goto L_11434448;
  /* 11434457 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1143445a push eax */
  push32((uint32_t)(EAX));
  /* 1143445b push ebx */
  push32((uint32_t)(EBX));
  /* 1143445c call dword ptr [0x11436034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436034))), 0x11434462u);
  /* 11434462 push 1 */
  push32((uint32_t)(0x1u));
  /* 11434464 pop esi */
  ESI = (pop32());
  /* 11434465 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434467 jne 0x1143458e */
  if (!C.zf) goto L_1143458e;
  /* 1143446d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1143446f and dword ptr [0x11437fa4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437fa4)))&(0x0u); w32((uint32_t)(0x11437fa4), (_r)); fl_logic(_r,32); }
  /* 11434476 pop ecx */
  ECX = (pop32());
  /* 11434477 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434479 mov edi, 0x11437ea0 */
  EDI = (0x11437ea0u);
  /* 1143447e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434481 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11434483 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11434484 mov dword ptr [0x11437d80], ebx */
  w32((uint32_t)(0x11437d80), (EBX));
  /* 1143448a jbe 0x1143457b */
  if ((C.cf||C.zf)) goto L_1143457b;
  /* 11434490 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11434494 je 0x11434556 */
  if (C.zf) goto L_11434556;
  /* 1143449a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1143449d:;
  /* 1143449d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1143449f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114344a1 je 0x11434556 */
  if (C.zf) goto L_11434556;
  /* 114344a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 114344ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_114344ae:;
  /* 114344ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114344b0 ja 0x1143454a */
  if ((!C.cf&&!C.zf)) goto L_1143454a;
  /* 114344b6 or byte ptr [eax + 0x11437ea1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x4u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 114344bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114344be jmp 0x114344ae */
  goto L_114344ae;
L_114344c0:;
  /* 114344c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 114344c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 114344c6 pop ecx */
  ECX = (pop32());
  /* 114344c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114344c9 mov edi, 0x11437ea0 */
  EDI = (0x11437ea0u);
  /* 114344ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 114344d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114344d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 114344d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 114344d7 lea ebx, [esi + 0x11437678] */
  EBX = ((uint32_t)(ESI + 0x11437678));
L_114344dd:;
  /* 114344dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114344e0 mov ecx, ebx */
  ECX = (EBX);
  /* 114344e2 je 0x11434510 */
  if (C.zf) goto L_11434510;
L_114344e4:;
  /* 114344e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 114344e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114344e9 je 0x11434510 */
  if (C.zf) goto L_11434510;
  /* 114344eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 114344ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 114344f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114344f3 ja 0x11434509 */
  if ((!C.cf&&!C.zf)) goto L_11434509;
  /* 114344f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 114344f8 mov dl, byte ptr [edx + 0x11437660] */
  DL = (r8((uint32_t)(EDX + 0x11437660)));
L_114344fe:;
  /* 114344fe or byte ptr [eax + 0x11437ea1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(DL); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 11434504 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11434505 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434507 jbe 0x114344fe */
  if ((C.cf||C.zf)) goto L_114344fe;
L_11434509:;
  /* 11434509 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1143450a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1143450b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1143450e jne 0x114344e4 */
  if (!C.zf) goto L_114344e4;
L_11434510:;
  /* 11434510 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11434513 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434516 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143451a jb 0x114344dd */
  if (C.cf) goto L_114344dd;
  /* 1143451c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1143451f mov dword ptr [0x11437d9c], 1 */
  w32((uint32_t)(0x11437d9c), (0x1u));
  /* 11434529 push eax */
  push32((uint32_t)(EAX));
  /* 1143452a mov dword ptr [0x11437d80], eax */
  w32((uint32_t)(0x11437d80), (EAX));
  /* 1143452f call 0x11434602 */
  push32(0x11434534u); f_11434602();
  /* 11434534 lea esi, [esi + 0x1143766c] */
  ESI = ((uint32_t)(ESI + 0x1143766c));
  /* 1143453a mov edi, 0x11437d90 */
  EDI = (0x11437d90u);
  /* 1143453f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11434540 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11434541 pop ecx */
  ECX = (pop32());
  /* 11434542 mov dword ptr [0x11437fa4], eax */
  w32((uint32_t)(0x11437fa4), (EAX));
  /* 11434547 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11434548 jmp 0x1143459c */
  goto L_1143459c;
L_1143454a:;
  /* 1143454a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1143454b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1143454c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11434550 jne 0x1143449d */
  if (!C.zf) goto L_1143449d;
L_11434556:;
  /* 11434556 mov eax, esi */
  EAX = (ESI);
L_11434558:;
  /* 11434558 or byte ptr [eax + 0x11437ea1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x8u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 1143455f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11434560 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434565 jb 0x11434558 */
  if (C.cf) goto L_11434558;
  /* 11434567 push ebx */
  push32((uint32_t)(EBX));
  /* 11434568 call 0x11434602 */
  push32(0x1143456du); f_11434602();
  /* 1143456d pop ecx */
  ECX = (pop32());
  /* 1143456e mov dword ptr [0x11437fa4], eax */
  w32((uint32_t)(0x11437fa4), (EAX));
  /* 11434573 mov dword ptr [0x11437d9c], esi */
  w32((uint32_t)(0x11437d9c), (ESI));
  /* 11434579 jmp 0x11434582 */
  goto L_11434582;
L_1143457b:;
  /* 1143457b and dword ptr [0x11437d9c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437d9c)))&(0x0u); w32((uint32_t)(0x11437d9c), (_r)); fl_logic(_r,32); }
L_11434582:;
  /* 11434582 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434584 mov edi, 0x11437d90 */
  EDI = (0x11437d90u);
  /* 11434589 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143458a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143458b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143458c jmp 0x1143459c */
  goto L_1143459c;
L_1143458e:;
  /* 1143458e cmp dword ptr [0x11437d28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11437d28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434595 je 0x114345a6 */
  if (C.zf) goto L_114345a6;
L_11434597:;
  /* 11434597 call 0x11434635 */
  push32(0x1143459cu); f_11434635();
L_1143459c:;
  /* 1143459c call 0x1143465e */
  push32(0x114345a1u); f_1143465e();
  /* 114345a1 jmp 0x11434432 */
  goto L_11434432;
L_114345a6:;
  /* 114345a6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_114345a9:;
  /* 114345a9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 114345ab call 0x11434121 */
  push32(0x114345b0u); f_11434121();
  /* 114345b0 pop ecx */
  ECX = (pop32());
  /* 114345b1 mov eax, esi */
  EAX = (ESI);
  /* 114345b3 pop edi */
  EDI = (pop32());
  /* 114345b4 pop esi */
  ESI = (pop32());
  /* 114345b5 pop ebx */
  EBX = (pop32());
  /* 114345b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114345b7 ret  */
  ESPCHK(0x1143440bu, _esp0);
  ESP += 4; return;
}

/* FUN_100045b8 @ 0x114345b8 (74 bytes, 15 insns) */
void f_114345b8(void) {
  FTRACE(0x114345b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114345b8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114345bc and dword ptr [0x11437d28], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437d28)))&(0x0u); w32((uint32_t)(0x11437d28), (_r)); fl_logic(_r,32); }
  /* 114345c3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114345c6 jne 0x114345d8 */
  if (!C.zf) goto L_114345d8;
  /* 114345c8 mov dword ptr [0x11437d28], 1 */
  w32((uint32_t)(0x11437d28), (0x1u));
  /* 114345d2 jmp dword ptr [0x11436038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11436038)))); return;
L_114345d8:;
  /* 114345d8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114345db jne 0x114345ed */
  if (!C.zf) goto L_114345ed;
  /* 114345dd mov dword ptr [0x11437d28], 1 */
  w32((uint32_t)(0x11437d28), (0x1u));
  /* 114345e7 jmp dword ptr [0x11436030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11436030)))); return;
L_114345ed:;
  /* 114345ed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114345f0 jne 0x11434601 */
  if (!C.zf) goto L_11434601;
  /* 114345f2 mov eax, dword ptr [0x11437d58] */
  EAX = (r32((uint32_t)(0x11437d58)));
  /* 114345f7 mov dword ptr [0x11437d28], 1 */
  w32((uint32_t)(0x11437d28), (0x1u));
L_11434601:;
  /* 11434601 ret  */
  ESPCHK(0x114345b8u, _esp0);
  ESP += 4; return;
}

/* FUN_10004602 @ 0x11434602 (51 bytes, 19 insns) */
void f_11434602(void) {
  FTRACE(0x11434602u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434602 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11434606 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143460b je 0x1143462f */
  if (C.zf) goto L_1143462f;
  /* 1143460d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434610 je 0x11434629 */
  if (C.zf) goto L_11434629;
  /* 11434612 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434615 je 0x11434623 */
  if (C.zf) goto L_11434623;
  /* 11434617 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11434618 je 0x1143461d */
  if (C.zf) goto L_1143461d;
  /* 1143461a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1143461c ret  */
  ESPCHK(0x11434602u, _esp0);
  ESP += 4; return;
L_1143461d:;
  /* 1143461d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11434622 ret  */
  ESPCHK(0x11434602u, _esp0);
  ESP += 4; return;
L_11434623:;
  /* 11434623 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11434628 ret  */
  ESPCHK(0x11434602u, _esp0);
  ESP += 4; return;
L_11434629:;
  /* 11434629 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1143462e ret  */
  ESPCHK(0x11434602u, _esp0);
  ESP += 4; return;
L_1143462f:;
  /* 1143462f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11434634 ret  */
  ESPCHK(0x11434602u, _esp0);
  ESP += 4; return;
}

/* FUN_10004635 @ 0x11434635 (41 bytes, 17 insns) */
void f_11434635(void) {
  FTRACE(0x11434635u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434635 push edi */
  push32((uint32_t)(EDI));
  /* 11434636 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11434638 pop ecx */
  ECX = (pop32());
  /* 11434639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1143463b mov edi, 0x11437ea0 */
  EDI = (0x11437ea0u);
  /* 11434640 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11434642 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11434643 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434645 mov edi, 0x11437d90 */
  EDI = (0x11437d90u);
  /* 1143464a mov dword ptr [0x11437d80], eax */
  w32((uint32_t)(0x11437d80), (EAX));
  /* 1143464f mov dword ptr [0x11437d9c], eax */
  w32((uint32_t)(0x11437d9c), (EAX));
  /* 11434654 mov dword ptr [0x11437fa4], eax */
  w32((uint32_t)(0x11437fa4), (EAX));
  /* 11434659 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143465a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143465b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1143465c pop edi */
  EDI = (pop32());
  /* 1143465d ret  */
  ESPCHK(0x11434635u, _esp0);
  ESP += 4; return;
}

/* FUN_1000465e @ 0x1143465e (389 bytes, 124 insns) */
void f_1143465e(void) {
  FTRACE(0x1143465eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143465e push ebp */
  push32((uint32_t)(EBP));
  /* 1143465f mov ebp, esp */
  EBP = (ESP);
  /* 11434661 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434667 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1143466a push esi */
  push32((uint32_t)(ESI));
  /* 1143466b push eax */
  push32((uint32_t)(EAX));
  /* 1143466c push dword ptr [0x11437d80] */
  push32((uint32_t)(r32((uint32_t)(0x11437d80))));
  /* 11434672 call dword ptr [0x11436034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436034))), 0x11434678u);
  /* 11434678 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143467b jne 0x11434797 */
  if (!C.zf) goto L_11434797;
  /* 11434681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434683 mov esi, 0x100 */
  ESI = (0x100u);
L_11434688:;
  /* 11434688 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1143468f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11434690 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434692 jb 0x11434688 */
  if (C.cf) goto L_11434688;
  /* 11434694 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11434697 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1143469e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114346a0 je 0x114346d9 */
  if (C.zf) goto L_114346d9;
  /* 114346a2 push ebx */
  push32((uint32_t)(EBX));
  /* 114346a3 push edi */
  push32((uint32_t)(EDI));
  /* 114346a4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_114346a7:;
  /* 114346a7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 114346aa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 114346ad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114346af ja 0x114346ce */
  if ((!C.cf&&!C.zf)) goto L_114346ce;
  /* 114346b1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114346b3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 114346ba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 114346bb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 114346c0 mov ebx, ecx */
  EBX = (ECX);
  /* 114346c2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114346c5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 114346c7 mov ecx, ebx */
  ECX = (EBX);
  /* 114346c9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 114346cc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_114346ce:;
  /* 114346ce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114346cf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 114346d0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 114346d3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 114346d5 jne 0x114346a7 */
  if (!C.zf) goto L_114346a7;
  /* 114346d7 pop edi */
  EDI = (pop32());
  /* 114346d8 pop ebx */
  EBX = (pop32());
L_114346d9:;
  /* 114346d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 114346db lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 114346e1 push dword ptr [0x11437fa4] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa4))));
  /* 114346e7 push dword ptr [0x11437d80] */
  push32((uint32_t)(r32((uint32_t)(0x11437d80))));
  /* 114346ed push eax */
  push32((uint32_t)(EAX));
  /* 114346ee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 114346f4 push esi */
  push32((uint32_t)(ESI));
  /* 114346f5 push eax */
  push32((uint32_t)(EAX));
  /* 114346f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 114346f8 call 0x114357d2 */
  push32(0x114346fdu); f_114357d2();
  /* 114346fd push 0 */
  push32((uint32_t)(0x0u));
  /* 114346ff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11434705 push dword ptr [0x11437d80] */
  push32((uint32_t)(r32((uint32_t)(0x11437d80))));
  /* 1143470b push esi */
  push32((uint32_t)(ESI));
  /* 1143470c push eax */
  push32((uint32_t)(EAX));
  /* 1143470d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11434713 push esi */
  push32((uint32_t)(ESI));
  /* 11434714 push eax */
  push32((uint32_t)(EAX));
  /* 11434715 push esi */
  push32((uint32_t)(ESI));
  /* 11434716 push dword ptr [0x11437fa4] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa4))));
  /* 1143471c call 0x11435583 */
  push32(0x11434721u); f_11435583();
  /* 11434721 push 0 */
  push32((uint32_t)(0x0u));
  /* 11434723 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11434729 push dword ptr [0x11437d80] */
  push32((uint32_t)(r32((uint32_t)(0x11437d80))));
  /* 1143472f push esi */
  push32((uint32_t)(ESI));
  /* 11434730 push eax */
  push32((uint32_t)(EAX));
  /* 11434731 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11434737 push esi */
  push32((uint32_t)(ESI));
  /* 11434738 push eax */
  push32((uint32_t)(EAX));
  /* 11434739 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1143473e push dword ptr [0x11437fa4] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa4))));
  /* 11434744 call 0x11435583 */
  push32(0x11434749u); f_11435583();
  /* 11434749 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1143474c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1143474e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11434754:;
  /* 11434754 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11434757 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1143475a je 0x11434772 */
  if (C.zf) goto L_11434772;
  /* 1143475c or byte ptr [eax + 0x11437ea1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x10u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 11434763 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1143476a:;
  /* 1143476a mov byte ptr [eax + 0x11437da0], dl */
  w8((uint32_t)(EAX + 0x11437da0), (DL));
  /* 11434770 jmp 0x1143478e */
  goto L_1143478e;
L_11434772:;
  /* 11434772 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11434775 je 0x11434787 */
  if (C.zf) goto L_11434787;
  /* 11434777 or byte ptr [eax + 0x11437ea1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x20u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 1143477e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11434785 jmp 0x1143476a */
  goto L_1143476a;
L_11434787:;
  /* 11434787 and byte ptr [eax + 0x11437da0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437da0)))&(0x0u); w8((uint32_t)(EAX + 0x11437da0), (_r)); fl_logic(_r,8); }
L_1143478e:;
  /* 1143478e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1143478f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11434790 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11434791 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434793 jb 0x11434754 */
  if (C.cf) goto L_11434754;
  /* 11434795 jmp 0x114347e0 */
  goto L_114347e0;
L_11434797:;
  /* 11434797 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434799 mov esi, 0x100 */
  ESI = (0x100u);
L_1143479e:;
  /* 1143479e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347a1 jb 0x114347bc */
  if (C.cf) goto L_114347bc;
  /* 114347a3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347a6 ja 0x114347bc */
  if ((!C.cf&&!C.zf)) goto L_114347bc;
  /* 114347a8 or byte ptr [eax + 0x11437ea1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x10u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 114347af mov cl, al */
  CL = (AL);
  /* 114347b1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_114347b4:;
  /* 114347b4 mov byte ptr [eax + 0x11437da0], cl */
  w8((uint32_t)(EAX + 0x11437da0), (CL));
  /* 114347ba jmp 0x114347db */
  goto L_114347db;
L_114347bc:;
  /* 114347bc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347bf jb 0x114347d4 */
  if (C.cf) goto L_114347d4;
  /* 114347c1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347c4 ja 0x114347d4 */
  if ((!C.cf&&!C.zf)) goto L_114347d4;
  /* 114347c6 or byte ptr [eax + 0x11437ea1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437ea1)))|(0x20u); w8((uint32_t)(EAX + 0x11437ea1), (_r)); fl_logic(_r,8); }
  /* 114347cd mov cl, al */
  CL = (AL);
  /* 114347cf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 114347d2 jmp 0x114347b4 */
  goto L_114347b4;
L_114347d4:;
  /* 114347d4 and byte ptr [eax + 0x11437da0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11437da0)))&(0x0u); w8((uint32_t)(EAX + 0x11437da0), (_r)); fl_logic(_r,8); }
L_114347db:;
  /* 114347db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114347dc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347de jb 0x1143479e */
  if (C.cf) goto L_1143479e;
L_114347e0:;
  /* 114347e0 pop esi */
  ESI = (pop32());
  /* 114347e1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114347e2 ret  */
  ESPCHK(0x1143465eu, _esp0);
  ESP += 4; return;
}

/* FUN_100047e3 @ 0x114347e3 (28 bytes, 7 insns) */
void f_114347e3(void) {
  FTRACE(0x114347e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114347e3 cmp dword ptr [0x114380c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x114380c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114347ea jne 0x114347fe */
  if (!C.zf) goto L_114347fe;
  /* 114347ec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 114347ee call 0x1143440b */
  push32(0x114347f3u); f_1143440b();
  /* 114347f3 pop ecx */
  ECX = (pop32());
  /* 114347f4 mov dword ptr [0x114380c8], 1 */
  w32((uint32_t)(0x114380c8), (0x1u));
L_114347fe:;
  /* 114347fe ret  */
  ESPCHK(0x114347e3u, _esp0);
  ESP += 4; return;
}

/* FUN_10004800 @ 0x11434800 (664 bytes, 260 insns) [15 switch table(s)] */
void f_11434800(void) {
  FTRACE(0x11434800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434800 push ebp */
  push32((uint32_t)(EBP));
  /* 11434801 mov ebp, esp */
  EBP = (ESP);
  /* 11434803 push edi */
  push32((uint32_t)(EDI));
  /* 11434804 push esi */
  push32((uint32_t)(ESI));
  /* 11434805 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11434808 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1143480b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1143480e mov eax, ecx */
  EAX = (ECX);
  /* 11434810 mov edx, ecx */
  EDX = (ECX);
  /* 11434812 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434814 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434816 jbe 0x11434820 */
  if ((C.cf||C.zf)) goto L_11434820;
  /* 11434818 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143481a jb 0x11434998 */
  if (C.cf) goto L_11434998;
L_11434820:;
  /* 11434820 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11434826 jne 0x1143483c */
  if (!C.zf) goto L_1143483c;
  /* 11434828 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1143482b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1143482e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434831 jb 0x1143485c */
  if (C.cf) goto L_1143485c;
  /* 11434833 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11434835 jmp dword ptr [edx*4 + 0x11434948] */
  switch (EDX) {
    case 0: goto L_11434958;
    case 1: goto L_11434960;
    case 2: goto L_1143496c;
    case 3: goto L_11434980;
    default: x86_unimpl("switch@0x11434835 out of table"); return;
  }
L_1143483c:;
  /* 1143483c mov eax, edi */
  EAX = (EDI);
  /* 1143483e mov edx, 3 */
  EDX = (0x3u);
  /* 11434843 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434846 jb 0x11434854 */
  if (C.cf) goto L_11434854;
  /* 11434848 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1143484b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143484d jmp dword ptr [eax*4 + 0x11434860] */
  switch (EAX) {
    case 1: goto L_11434870;
    case 2: goto L_1143489c;
    case 3: goto L_114348c0;
    default: x86_unimpl("switch@0x1143484d out of table"); return;
  }
L_11434854:;
  /* 11434854 jmp dword ptr [ecx*4 + 0x11434958] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11434958)))); return;
  /* 1143485b nop  */
  /* nop */
L_1143485c:;
  /* 1143485c jmp dword ptr [ecx*4 + 0x114348dc] */
  switch (ECX) {
    case 0: goto L_1143493f;
    case 1: goto L_1143492c;
    case 2: goto L_11434924;
    case 3: goto L_1143491c;
    case 4: goto L_11434914;
    case 5: goto L_1143490c;
    case 6: goto L_11434904;
    case 7: goto L_114348fc;
    default: x86_unimpl("switch@0x1143485c out of table"); return;
  }
  /* 11434863 nop  */
  /* nop */
L_11434870:;
  /* 11434870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11434872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11434874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11434876 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11434879 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1143487c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1143487f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11434882 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434885 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11434888 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1143488b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143488e jb 0x1143485c */
  if (C.cf) goto L_1143485c;
  /* 11434890 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11434892 jmp dword ptr [edx*4 + 0x11434948] */
  switch (EDX) {
    case 0: goto L_11434958;
    case 1: goto L_11434960;
    case 2: goto L_1143496c;
    case 3: goto L_11434980;
    default: x86_unimpl("switch@0x11434892 out of table"); return;
  }
  /* 11434899 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1143489c:;
  /* 1143489c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1143489e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114348a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114348a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114348a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114348a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114348ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114348ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114348b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114348b4 jb 0x1143485c */
  if (C.cf) goto L_1143485c;
  /* 114348b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114348b8 jmp dword ptr [edx*4 + 0x11434948] */
  switch (EDX) {
    case 0: goto L_11434958;
    case 1: goto L_11434960;
    case 2: goto L_1143496c;
    case 3: goto L_11434980;
    default: x86_unimpl("switch@0x114348b8 out of table"); return;
  }
  /* 114348bf nop  */
  /* nop */
L_114348c0:;
  /* 114348c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114348c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114348c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114348c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114348c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114348ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114348cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114348ce jb 0x1143485c */
  if (C.cf) goto L_1143485c;
  /* 114348d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114348d2 jmp dword ptr [edx*4 + 0x11434948] */
  switch (EDX) {
    case 0: goto L_11434958;
    case 1: goto L_11434960;
    case 2: goto L_1143496c;
    case 3: goto L_11434980;
    default: x86_unimpl("switch@0x114348d2 out of table"); return;
  }
  /* 114348d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114348fc:;
  /* 114348fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11434900 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11434904:;
  /* 11434904 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11434908 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1143490c:;
  /* 1143490c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11434910 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11434914:;
  /* 11434914 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11434918 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1143491c:;
  /* 1143491c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11434920 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11434924:;
  /* 11434924 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11434928 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1143492c:;
  /* 1143492c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11434930 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11434934 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1143493b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1143493d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1143493f:;
  /* 1143493f jmp dword ptr [edx*4 + 0x11434948] */
  switch (EDX) {
    case 0: goto L_11434958;
    case 1: goto L_11434960;
    case 2: goto L_1143496c;
    case 3: goto L_11434980;
    default: x86_unimpl("switch@0x1143493f out of table"); return;
  }
  /* 11434946 mov edi, edi */
  EDI = (EDI);
L_11434958:;
  /* 11434958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1143495b pop esi */
  ESI = (pop32());
  /* 1143495c pop edi */
  EDI = (pop32());
  /* 1143495d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143495e ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 1143495f nop  */
  /* nop */
L_11434960:;
  /* 11434960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11434962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11434964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434967 pop esi */
  ESI = (pop32());
  /* 11434968 pop edi */
  EDI = (pop32());
  /* 11434969 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143496a ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 1143496b nop  */
  /* nop */
L_1143496c:;
  /* 1143496c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1143496e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11434970 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11434973 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11434976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434979 pop esi */
  ESI = (pop32());
  /* 1143497a pop edi */
  EDI = (pop32());
  /* 1143497b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143497c ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 1143497d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11434980:;
  /* 11434980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11434982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11434984 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11434987 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1143498a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1143498d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434993 pop esi */
  ESI = (pop32());
  /* 11434994 pop edi */
  EDI = (pop32());
  /* 11434995 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434996 ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 11434997 nop  */
  /* nop */
L_11434998:;
  /* 11434998 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1143499c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 114349a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 114349a6 jne 0x114349cc */
  if (!C.zf) goto L_114349cc;
  /* 114349a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114349ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 114349ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114349b1 jb 0x114349c0 */
  if (C.cf) goto L_114349c0;
  /* 114349b3 std  */
  C.df=1;
  /* 114349b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114349b6 cld  */
  C.df=0;
  /* 114349b7 jmp dword ptr [edx*4 + 0x11434ae0] */
  switch (EDX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x114349b7 out of table"); return;
  }
  /* 114349be mov edi, edi */
  EDI = (EDI);
L_114349c0:;
  /* 114349c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 114349c2 jmp dword ptr [ecx*4 + 0x11434a90] */
  switch (ECX) {
    case 0: goto L_11434ad7;
    default: x86_unimpl("switch@0x114349c2 out of table"); return;
  }
  /* 114349c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114349cc:;
  /* 114349cc mov eax, edi */
  EAX = (EDI);
  /* 114349ce mov edx, 3 */
  EDX = (0x3u);
  /* 114349d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114349d6 jb 0x114349e4 */
  if (C.cf) goto L_114349e4;
  /* 114349d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 114349db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114349dd jmp dword ptr [eax*4 + 0x114349e8] */
  switch (EAX) {
    case 1: goto L_114349f8;
    case 2: goto L_11434a18;
    case 3: goto L_11434a40;
    default: x86_unimpl("switch@0x114349dd out of table"); return;
  }
L_114349e4:;
  /* 114349e4 jmp dword ptr [ecx*4 + 0x11434ae0] */
  switch (ECX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x114349e4 out of table"); return;
  }
  /* 114349eb nop  */
  /* nop */
L_114349f8:;
  /* 114349f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 114349fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114349fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434a00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11434a01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11434a04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11434a05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434a08 jb 0x114349c0 */
  if (C.cf) goto L_114349c0;
  /* 11434a0a std  */
  C.df=1;
  /* 11434a0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11434a0d cld  */
  C.df=0;
  /* 11434a0e jmp dword ptr [edx*4 + 0x11434ae0] */
  switch (EDX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x11434a0e out of table"); return;
  }
  /* 11434a15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11434a18:;
  /* 11434a18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11434a1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11434a1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434a20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11434a23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11434a26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434a29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434a2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434a2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434a32 jb 0x114349c0 */
  if (C.cf) goto L_114349c0;
  /* 11434a34 std  */
  C.df=1;
  /* 11434a35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11434a37 cld  */
  C.df=0;
  /* 11434a38 jmp dword ptr [edx*4 + 0x11434ae0] */
  switch (EDX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x11434a38 out of table"); return;
  }
  /* 11434a3f nop  */
  /* nop */
L_11434a40:;
  /* 11434a40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11434a43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11434a45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434a48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11434a4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434a4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11434a51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11434a54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11434a57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434a5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434a5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434a60 jb 0x114349c0 */
  if (C.cf) goto L_114349c0;
  /* 11434a66 std  */
  C.df=1;
  /* 11434a67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11434a69 cld  */
  C.df=0;
  /* 11434a6a jmp dword ptr [edx*4 + 0x11434ae0] */
  switch (EDX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x11434a6a out of table"); return;
  }
  /* 11434a71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11434a74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11434a75 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11434a76 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11434a77 adc dword ptr [edx + ecx*2 + 0x4aa41143], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4aa41143))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4aa41143), (_r)); fl_add(_a,_b,_r,32); }
  /* 11434a7e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11434a7f adc dword ptr [edx + ecx*2 + 0x4ab41143], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4ab41143))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4ab41143), (_r)); fl_add(_a,_b,_r,32); }
  /* 11434a86 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11434a87 adc dword ptr [edx + ecx*2 + 0x4ac41143], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*2 + 0x4ac41143))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ECX*2 + 0x4ac41143), (_r)); fl_add(_a,_b,_r,32); }
  /* 11434a8e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11434a94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11434a98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11434a9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11434aa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11434aa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11434aa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11434aac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11434ab0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11434ab4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11434ab8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11434abc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11434ac0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11434ac4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11434ac8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11434acc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11434ad3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11434ad5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11434ad7:;
  /* 11434ad7 jmp dword ptr [edx*4 + 0x11434ae0] */
  switch (EDX) {
    case 0: goto L_11434af0;
    case 1: goto L_11434af8;
    case 2: goto L_11434b08;
    case 3: goto L_11434b1c;
    default: x86_unimpl("switch@0x11434ad7 out of table"); return;
  }
  /* 11434ade mov edi, edi */
  EDI = (EDI);
L_11434af0:;
  /* 11434af0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434af3 pop esi */
  ESI = (pop32());
  /* 11434af4 pop edi */
  EDI = (pop32());
  /* 11434af5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434af6 ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 11434af7 nop  */
  /* nop */
L_11434af8:;
  /* 11434af8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11434afb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434afe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434b01 pop esi */
  ESI = (pop32());
  /* 11434b02 pop edi */
  EDI = (pop32());
  /* 11434b03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434b04 ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 11434b05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11434b08:;
  /* 11434b08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11434b0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434b0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11434b11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434b14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434b17 pop esi */
  ESI = (pop32());
  /* 11434b18 pop edi */
  EDI = (pop32());
  /* 11434b19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434b1a ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
  /* 11434b1b nop  */
  /* nop */
L_11434b1c:;
  /* 11434b1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11434b1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11434b22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11434b25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11434b28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11434b2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11434b2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434b31 pop esi */
  ESI = (pop32());
  /* 11434b32 pop edi */
  EDI = (pop32());
  /* 11434b33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434b34 ret  */
  ESPCHK(0x11434800u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b35 @ 0x11434b35 (62 bytes, 15 insns) */
void f_11434b35(void) {
  FTRACE(0x11434b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434b35 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11434b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11434b3c push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11434b42 call dword ptr [0x1143603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143603c))), 0x11434b48u);
  /* 11434b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11434b4a mov dword ptr [0x11437d7c], eax */
  w32((uint32_t)(0x11437d7c), (EAX));
  /* 11434b4f jne 0x11434b52 */
  if (!C.zf) goto L_11434b52;
  /* 11434b51 ret  */
  ESPCHK(0x11434b35u, _esp0);
  ESP += 4; return;
L_11434b52:;
  /* 11434b52 and dword ptr [0x11437d74], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437d74)))&(0x0u); w32((uint32_t)(0x11437d74), (_r)); fl_logic(_r,32); }
  /* 11434b59 and dword ptr [0x11437d78], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437d78)))&(0x0u); w32((uint32_t)(0x11437d78), (_r)); fl_logic(_r,32); }
  /* 11434b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 11434b62 mov dword ptr [0x11437d70], eax */
  w32((uint32_t)(0x11437d70), (EAX));
  /* 11434b67 mov dword ptr [0x11437d68], 0x10 */
  w32((uint32_t)(0x11437d68), (0x10u));
  /* 11434b71 pop eax */
  EAX = (pop32());
  /* 11434b72 ret  */
  ESPCHK(0x11434b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b73 @ 0x11434b73 (43 bytes, 14 insns) */
void f_11434b73(void) {
  FTRACE(0x11434b73u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434b73 mov eax, dword ptr [0x11437d78] */
  EAX = (r32((uint32_t)(0x11437d78)));
  /* 11434b78 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 11434b7b mov eax, dword ptr [0x11437d7c] */
  EAX = (r32((uint32_t)(0x11437d7c)));
  /* 11434b80 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11434b83:;
  /* 11434b83 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434b85 jae 0x11434b9b */
  if (!C.cf) goto L_11434b9b;
  /* 11434b87 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11434b8b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434b8e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434b94 jb 0x11434b9d */
  if (C.cf) goto L_11434b9d;
  /* 11434b96 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434b99 jmp 0x11434b83 */
  goto L_11434b83;
L_11434b9b:;
  /* 11434b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11434b9d:;
  /* 11434b9d ret  */
  ESPCHK(0x11434b73u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b9e @ 0x11434b9e (811 bytes, 264 insns) */
void f_11434b9e(void) {
  FTRACE(0x11434b9eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434b9e push ebp */
  push32((uint32_t)(EBP));
  /* 11434b9f mov ebp, esp */
  EBP = (ESP);
  /* 11434ba1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434ba4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11434ba7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434baa push ebx */
  push32((uint32_t)(EBX));
  /* 11434bab push esi */
  push32((uint32_t)(ESI));
  /* 11434bac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 11434baf mov esi, edx */
  ESI = (EDX);
  /* 11434bb1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434bb4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 11434bb7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434bba push edi */
  push32((uint32_t)(EDI));
  /* 11434bbb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 11434bbe mov ecx, esi */
  ECX = (ESI);
  /* 11434bc0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 11434bc3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11434bc9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11434bca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11434bcd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11434bd4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11434bd7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11434bda mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 11434bdd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 11434be0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11434be3 jne 0x11434c64 */
  if (!C.zf) goto L_11434c64;
  /* 11434be5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11434be8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11434bea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11434beb pop edi */
  EDI = (pop32());
  /* 11434bec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11434bef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434bf1 jbe 0x11434bf6 */
  if ((C.cf||C.zf)) goto L_11434bf6;
  /* 11434bf3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11434bf6:;
  /* 11434bf6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11434bfa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434bfe jne 0x11434c48 */
  if (!C.zf) goto L_11434c48;
  /* 11434c00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11434c03 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434c06 jae 0x11434c24 */
  if (!C.cf) goto L_11434c24;
  /* 11434c08 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11434c0d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11434c0f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11434c13 not edi */
  EDI = (~(EDI));
  /* 11434c15 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11434c19 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11434c1b jne 0x11434c48 */
  if (!C.zf) goto L_11434c48;
  /* 11434c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434c20 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11434c22 jmp 0x11434c48 */
  goto L_11434c48;
L_11434c24:;
  /* 11434c24 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434c27 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11434c2c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11434c2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11434c31 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11434c35 not edi */
  EDI = (~(EDI));
  /* 11434c37 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11434c3e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11434c40 jne 0x11434c48 */
  if (!C.zf) goto L_11434c48;
  /* 11434c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434c45 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11434c48:;
  /* 11434c48 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11434c4c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11434c50 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11434c53 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11434c57 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 11434c5b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434c5e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11434c61 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11434c64:;
  /* 11434c64 mov edi, ebx */
  EDI = (EBX);
  /* 11434c66 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11434c69 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11434c6a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434c6d jbe 0x11434c72 */
  if ((C.cf||C.zf)) goto L_11434c72;
  /* 11434c6f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11434c71 pop edi */
  EDI = (pop32());
L_11434c72:;
  /* 11434c72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11434c75 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11434c78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11434c7b jne 0x11434d21 */
  if (!C.zf) goto L_11434d21;
  /* 11434c81 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434c84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11434c87 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11434c8a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11434c8c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11434c8f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11434c90 pop edx */
  EDX = (pop32());
  /* 11434c91 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434c93 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11434c96 jbe 0x11434c9d */
  if ((C.cf||C.zf)) goto L_11434c9d;
  /* 11434c98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11434c9b mov ecx, edx */
  ECX = (EDX);
L_11434c9d:;
  /* 11434c9d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434ca0 mov edi, ebx */
  EDI = (EBX);
  /* 11434ca2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 11434ca5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11434ca8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11434ca9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434cab jbe 0x11434caf */
  if ((C.cf||C.zf)) goto L_11434caf;
  /* 11434cad mov edi, edx */
  EDI = (EDX);
L_11434caf:;
  /* 11434caf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434cb1 je 0x11434d1e */
  if (C.zf) goto L_11434d1e;
  /* 11434cb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11434cb6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11434cb9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434cbc jne 0x11434d06 */
  if (!C.zf) goto L_11434d06;
  /* 11434cbe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11434cc1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434cc4 jae 0x11434ce2 */
  if (!C.cf) goto L_11434ce2;
  /* 11434cc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11434ccb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11434ccd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11434cd1 not edx */
  EDX = (~(EDX));
  /* 11434cd3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11434cd7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11434cd9 jne 0x11434d06 */
  if (!C.zf) goto L_11434d06;
  /* 11434cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434cde and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11434ce0 jmp 0x11434d06 */
  goto L_11434d06;
L_11434ce2:;
  /* 11434ce2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434ce5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11434cea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11434cec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11434cef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11434cf3 not edx */
  EDX = (~(EDX));
  /* 11434cf5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11434cfc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11434cfe jne 0x11434d06 */
  if (!C.zf) goto L_11434d06;
  /* 11434d00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434d03 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11434d06:;
  /* 11434d06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11434d09 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11434d0c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11434d0f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11434d12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11434d15 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11434d18 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11434d1b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11434d1e:;
  /* 11434d1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11434d21:;
  /* 11434d21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434d25 jne 0x11434d30 */
  if (!C.zf) goto L_11434d30;
  /* 11434d27 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434d2a je 0x11434db9 */
  if (C.zf) goto L_11434db9;
L_11434d30:;
  /* 11434d30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11434d33 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11434d36 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11434d39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11434d3c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11434d3f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11434d42 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11434d45 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11434d48 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11434d4b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11434d4e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11434d51 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434d54 jne 0x11434db9 */
  if (!C.zf) goto L_11434db9;
  /* 11434d56 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 11434d5a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434d5d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11434d60 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11434d62 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11434d66 jae 0x11434d8d */
  if (!C.cf) goto L_11434d8d;
  /* 11434d68 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11434d6c jne 0x11434d7c */
  if (!C.zf) goto L_11434d7c;
  /* 11434d6e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11434d73 mov ecx, edi */
  ECX = (EDI);
  /* 11434d75 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11434d77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434d7a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_11434d7c:;
  /* 11434d7c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11434d81 mov ecx, edi */
  ECX = (EDI);
  /* 11434d83 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11434d85 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11434d89 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11434d8b jmp 0x11434db6 */
  goto L_11434db6;
L_11434d8d:;
  /* 11434d8d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11434d91 jne 0x11434da3 */
  if (!C.zf) goto L_11434da3;
  /* 11434d93 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11434d96 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11434d9b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11434d9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434da0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11434da3:;
  /* 11434da3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11434da6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11434dab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11434dad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 11434db4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_11434db6:;
  /* 11434db6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_11434db9:;
  /* 11434db9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11434dbc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 11434dbe mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 11434dc2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 11434dc4 jne 0x11434ec4 */
  if (!C.zf) goto L_11434ec4;
  /* 11434dca mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434dcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11434dd1 je 0x11434eb6 */
  if (C.zf) goto L_11434eb6;
  /* 11434dd7 mov ecx, dword ptr [0x11437d6c] */
  ECX = (r32((uint32_t)(0x11437d6c)));
  /* 11434ddd mov edi, dword ptr [0x11436050] */
  EDI = (r32((uint32_t)(0x11436050)));
  /* 11434de3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11434de6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434de9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 11434dee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11434df3 push ebx */
  push32((uint32_t)(EBX));
  /* 11434df4 push ecx */
  push32((uint32_t)(ECX));
  /* 11434df5 call edi */
  call_ind((uint32_t)(EDI), 0x11434df7u);
  /* 11434df7 mov ecx, dword ptr [0x11437d6c] */
  ECX = (r32((uint32_t)(0x11437d6c)));
  /* 11434dfd mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e02 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11434e07 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11434e09 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11434e0c mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e11 mov ecx, dword ptr [0x11437d6c] */
  ECX = (r32((uint32_t)(0x11437d6c)));
  /* 11434e17 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11434e1a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11434e22 mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e27 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 11434e2a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 11434e2d mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e32 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11434e35 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11434e39 jne 0x11434e44 */
  if (!C.zf) goto L_11434e44;
  /* 11434e3b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 11434e3f mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
L_11434e44:;
  /* 11434e44 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434e48 jne 0x11434eb6 */
  if (!C.zf) goto L_11434eb6;
  /* 11434e4a push ebx */
  push32((uint32_t)(EBX));
  /* 11434e4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11434e4d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11434e50 call edi */
  call_ind((uint32_t)(EDI), 0x11434e52u);
  /* 11434e52 mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e57 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11434e5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11434e5c push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 11434e62 call dword ptr [0x1143604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143604c))), 0x11434e68u);
  /* 11434e68 mov eax, dword ptr [0x11437d78] */
  EAX = (r32((uint32_t)(0x11437d78)));
  /* 11434e6d mov edx, dword ptr [0x11437d7c] */
  EDX = (r32((uint32_t)(0x11437d7c)));
  /* 11434e73 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11434e76 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11434e79 mov ecx, eax */
  ECX = (EAX);
  /* 11434e7b mov eax, dword ptr [0x11437d74] */
  EAX = (r32((uint32_t)(0x11437d74)));
  /* 11434e80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434e82 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11434e86 push ecx */
  push32((uint32_t)(ECX));
  /* 11434e87 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 11434e8a push ecx */
  push32((uint32_t)(ECX));
  /* 11434e8b push eax */
  push32((uint32_t)(EAX));
  /* 11434e8c call 0x11435920 */
  push32(0x11434e91u); f_11435920();
  /* 11434e91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434e94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11434e97 dec dword ptr [0x11437d78] */
  { uint32_t _r=(r32((uint32_t)(0x11437d78)))-1; w32((uint32_t)(0x11437d78), (_r)); fl_dec(_r,32); }
  /* 11434e9d cmp eax, dword ptr [0x11437d74] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11437d74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434ea3 jbe 0x11434ea8 */
  if ((C.cf||C.zf)) goto L_11434ea8;
  /* 11434ea5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11434ea8:;
  /* 11434ea8 mov ecx, dword ptr [0x11437d7c] */
  ECX = (r32((uint32_t)(0x11437d7c)));
  /* 11434eae mov dword ptr [0x11437d70], ecx */
  w32((uint32_t)(0x11437d70), (ECX));
  /* 11434eb4 jmp 0x11434eb9 */
  goto L_11434eb9;
L_11434eb6:;
  /* 11434eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11434eb9:;
  /* 11434eb9 mov dword ptr [0x11437d74], eax */
  w32((uint32_t)(0x11437d74), (EAX));
  /* 11434ebe mov dword ptr [0x11437d6c], esi */
  w32((uint32_t)(0x11437d6c), (ESI));
L_11434ec4:;
  /* 11434ec4 pop edi */
  EDI = (pop32());
  /* 11434ec5 pop esi */
  ESI = (pop32());
  /* 11434ec6 pop ebx */
  EBX = (pop32());
  /* 11434ec7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11434ec8 ret  */
  ESPCHK(0x11434b9eu, _esp0);
  ESP += 4; return;
}

/* FUN_10004ec9 @ 0x11434ec9 (777 bytes, 275 insns) */
void f_11434ec9(void) {
  FTRACE(0x11434ec9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11434ec9 push ebp */
  push32((uint32_t)(EBP));
  /* 11434eca mov ebp, esp */
  EBP = (ESP);
  /* 11434ecc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11434ecf mov eax, dword ptr [0x11437d78] */
  EAX = (r32((uint32_t)(0x11437d78)));
  /* 11434ed4 mov edx, dword ptr [0x11437d7c] */
  EDX = (r32((uint32_t)(0x11437d7c)));
  /* 11434eda push ebx */
  push32((uint32_t)(EBX));
  /* 11434edb push esi */
  push32((uint32_t)(ESI));
  /* 11434edc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11434edf push edi */
  push32((uint32_t)(EDI));
  /* 11434ee0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 11434ee3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11434ee6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11434ee9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 11434eec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11434eef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11434ef2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11434ef5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11434ef6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434ef9 jge 0x11434f09 */
  if ((C.sf==C.of)) goto L_11434f09;
  /* 11434efb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 11434efe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11434f00 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11434f04 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11434f07 jmp 0x11434f19 */
  goto L_11434f19;
L_11434f09:;
  /* 11434f09 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434f0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11434f0f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11434f11 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11434f13 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11434f16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11434f19:;
  /* 11434f19 mov eax, dword ptr [0x11437d70] */
  EAX = (r32((uint32_t)(0x11437d70)));
  /* 11434f1e mov ebx, eax */
  EBX = (EAX);
  /* 11434f20 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f22 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434f25 jae 0x11434f40 */
  if (!C.cf) goto L_11434f40;
L_11434f27:;
  /* 11434f27 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11434f2a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11434f2c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11434f2f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11434f31 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11434f33 jne 0x11434f40 */
  if (!C.zf) goto L_11434f40;
  /* 11434f35 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434f38 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f3b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434f3e jb 0x11434f27 */
  if (C.cf) goto L_11434f27;
L_11434f40:;
  /* 11434f40 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f43 jne 0x11434fbe */
  if (!C.zf) goto L_11434fbe;
  /* 11434f45 mov ebx, edx */
  EBX = (EDX);
L_11434f47:;
  /* 11434f47 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f49 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434f4c jae 0x11434f63 */
  if (!C.cf) goto L_11434f63;
  /* 11434f4e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11434f51 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11434f53 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11434f56 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11434f58 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11434f5a jne 0x11434f61 */
  if (!C.zf) goto L_11434f61;
  /* 11434f5c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434f5f jmp 0x11434f47 */
  goto L_11434f47;
L_11434f61:;
  /* 11434f61 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11434f63:;
  /* 11434f63 jne 0x11434fbe */
  if (!C.zf) goto L_11434fbe;
L_11434f65:;
  /* 11434f65 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f68 jae 0x11434f7b */
  if (!C.cf) goto L_11434f7b;
  /* 11434f6a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f6e jne 0x11434f78 */
  if (!C.zf) goto L_11434f78;
  /* 11434f70 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434f73 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434f76 jmp 0x11434f65 */
  goto L_11434f65;
L_11434f78:;
  /* 11434f78 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11434f7b:;
  /* 11434f7b jne 0x11434fa3 */
  if (!C.zf) goto L_11434fa3;
  /* 11434f7d mov ebx, edx */
  EBX = (EDX);
L_11434f7f:;
  /* 11434f7f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f81 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434f84 jae 0x11434f93 */
  if (!C.cf) goto L_11434f93;
  /* 11434f86 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434f8a jne 0x11434f91 */
  if (!C.zf) goto L_11434f91;
  /* 11434f8c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11434f8f jmp 0x11434f7f */
  goto L_11434f7f;
L_11434f91:;
  /* 11434f91 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11434f93:;
  /* 11434f93 jne 0x11434fa3 */
  if (!C.zf) goto L_11434fa3;
  /* 11434f95 call 0x114351d2 */
  push32(0x11434f9au); f_114351d2();
  /* 11434f9a mov ebx, eax */
  EBX = (EAX);
  /* 11434f9c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11434f9e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11434fa1 je 0x11434fb7 */
  if (C.zf) goto L_11434fb7;
L_11434fa3:;
  /* 11434fa3 push ebx */
  push32((uint32_t)(EBX));
  /* 11434fa4 call 0x11435283 */
  push32(0x11434fa9u); f_11435283();
  /* 11434fa9 pop ecx */
  ECX = (pop32());
  /* 11434faa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 11434fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11434faf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11434fb2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434fb5 jne 0x11434fbe */
  if (!C.zf) goto L_11434fbe;
L_11434fb7:;
  /* 11434fb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11434fb9 jmp 0x114351cd */
  goto L_114351cd;
L_11434fbe:;
  /* 11434fbe mov dword ptr [0x11437d70], ebx */
  w32((uint32_t)(0x11437d70), (EBX));
  /* 11434fc4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11434fc7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11434fc9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11434fcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11434fcf je 0x11434fe5 */
  if (C.zf) goto L_11434fe5;
  /* 11434fd1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 11434fd8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11434fdc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11434fdf and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11434fe1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11434fe3 jne 0x1143501c */
  if (!C.zf) goto L_1143501c;
L_11434fe5:;
  /* 11434fe5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 11434feb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 11434fee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11434ff1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 11434ff4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11434ff8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 11434ffb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11434ffd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11435000 jne 0x11435019 */
  if (!C.zf) goto L_11435019;
L_11435002:;
  /* 11435002 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11435008 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1143500b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1143500e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435011 mov edi, esi */
  EDI = (ESI);
  /* 11435013 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11435015 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11435017 je 0x11435002 */
  if (C.zf) goto L_11435002;
L_11435019:;
  /* 11435019 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1143501c:;
  /* 1143501c mov ecx, edx */
  ECX = (EDX);
  /* 1143501e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11435020 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11435026 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1143502d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11435030 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11435034 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11435036 jne 0x11435045 */
  if (!C.zf) goto L_11435045;
  /* 11435038 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1143503f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11435041 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11435044 pop edi */
  EDI = (pop32());
L_11435045:;
  /* 11435045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11435047 jl 0x1143504e */
  if ((C.sf!=C.of)) goto L_1143504e;
  /* 11435049 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1143504b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1143504c jmp 0x11435045 */
  goto L_11435045;
L_1143504e:;
  /* 1143504e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11435051 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11435055 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11435057 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143505a mov esi, ecx */
  ESI = (ECX);
  /* 1143505c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1143505f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11435062 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11435063 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435066 jle 0x1143506b */
  if ((C.zf||C.sf!=C.of)) goto L_1143506b;
  /* 11435068 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1143506a pop esi */
  ESI = (pop32());
L_1143506b:;
  /* 1143506b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143506d je 0x11435180 */
  if (C.zf) goto L_11435180;
  /* 11435073 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11435076 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435079 jne 0x114350dc */
  if (!C.zf) goto L_114350dc;
  /* 1143507b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143507e jge 0x114350ab */
  if ((C.sf==C.of)) goto L_114350ab;
  /* 11435080 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11435085 mov ecx, edi */
  ECX = (EDI);
  /* 11435087 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11435089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1143508c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11435090 not ebx */
  EBX = (~(EBX));
  /* 11435092 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11435095 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11435099 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1143509d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1143509f jne 0x114350d9 */
  if (!C.zf) goto L_114350d9;
  /* 114350a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 114350a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114350a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 114350a9 jmp 0x114350dc */
  goto L_114350dc;
L_114350ab:;
  /* 114350ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 114350ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 114350b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 114350b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114350b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 114350bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 114350c3 not ebx */
  EBX = (~(EBX));
  /* 114350c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 114350c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 114350c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 114350cc jne 0x114350d9 */
  if (!C.zf) goto L_114350d9;
  /* 114350ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 114350d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 114350d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 114350d7 jmp 0x114350dc */
  goto L_114350dc;
L_114350d9:;
  /* 114350d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_114350dc:;
  /* 114350dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 114350df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 114350e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114350e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 114350e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 114350ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 114350ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 114350f2 je 0x1143518c */
  if (C.zf) goto L_1143518c;
  /* 114350f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 114350fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 114350ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11435102 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11435105 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11435108 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1143510b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1143510e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11435111 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11435114 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435117 jne 0x1143517d */
  if (!C.zf) goto L_1143517d;
  /* 11435119 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1143511d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435120 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11435123 jge 0x1143514e */
  if ((C.sf==C.of)) goto L_1143514e;
  /* 11435125 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11435127 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1143512b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1143512f jne 0x1143513c */
  if (!C.zf) goto L_1143513c;
  /* 11435131 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11435136 mov ecx, esi */
  ECX = (ESI);
  /* 11435138 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1143513a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1143513c:;
  /* 1143513c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11435141 mov ecx, esi */
  ECX = (ESI);
  /* 11435143 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11435145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11435148 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1143514c jmp 0x1143517d */
  goto L_1143517d;
L_1143514e:;
  /* 1143514e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11435150 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11435154 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11435158 jne 0x11435167 */
  if (!C.zf) goto L_11435167;
  /* 1143515a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1143515d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11435162 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11435164 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11435167:;
  /* 11435167 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1143516a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11435171 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11435174 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11435179 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1143517b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1143517d:;
  /* 1143517d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11435180:;
  /* 11435180 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11435182 je 0x1143518f */
  if (C.zf) goto L_1143518f;
  /* 11435184 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11435186 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1143518a jmp 0x1143518f */
  goto L_1143518f;
L_1143518c:;
  /* 1143518c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1143518f:;
  /* 1143518f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11435192 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435194 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11435197 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11435199 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1143519d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 114351a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 114351a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 114351a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 114351a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 114351a9 jne 0x114351c5 */
  if (!C.zf) goto L_114351c5;
  /* 114351ab cmp ebx, dword ptr [0x11437d74] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11437d74))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114351b1 jne 0x114351c5 */
  if (!C.zf) goto L_114351c5;
  /* 114351b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114351b6 cmp ecx, dword ptr [0x11437d6c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11437d6c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114351bc jne 0x114351c5 */
  if (!C.zf) goto L_114351c5;
  /* 114351be and dword ptr [0x11437d74], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11437d74)))&(0x0u); w32((uint32_t)(0x11437d74), (_r)); fl_logic(_r,32); }
L_114351c5:;
  /* 114351c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 114351c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 114351ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_114351cd:;
  /* 114351cd pop edi */
  EDI = (pop32());
  /* 114351ce pop esi */
  ESI = (pop32());
  /* 114351cf pop ebx */
  EBX = (pop32());
  /* 114351d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 114351d1 ret  */
  ESPCHK(0x11434ec9u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d2 @ 0x114351d2 (177 bytes, 53 insns) */
void f_114351d2(void) {
  FTRACE(0x114351d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114351d2 mov eax, dword ptr [0x11437d78] */
  EAX = (r32((uint32_t)(0x11437d78)));
  /* 114351d7 mov ecx, dword ptr [0x11437d68] */
  ECX = (r32((uint32_t)(0x11437d68)));
  /* 114351dd push esi */
  push32((uint32_t)(ESI));
  /* 114351de push edi */
  push32((uint32_t)(EDI));
  /* 114351df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 114351e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114351e3 jne 0x11435215 */
  if (!C.zf) goto L_11435215;
  /* 114351e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 114351e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 114351ec push eax */
  push32((uint32_t)(EAX));
  /* 114351ed push dword ptr [0x11437d7c] */
  push32((uint32_t)(r32((uint32_t)(0x11437d7c))));
  /* 114351f3 push edi */
  push32((uint32_t)(EDI));
  /* 114351f4 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 114351fa call dword ptr [0x11436028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436028))), 0x11435200u);
  /* 11435200 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435202 je 0x11435265 */
  if (C.zf) goto L_11435265;
  /* 11435204 add dword ptr [0x11437d68], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11437d68))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11437d68), (_r)); fl_add(_a,_b,_r,32); }
  /* 1143520b mov dword ptr [0x11437d7c], eax */
  w32((uint32_t)(0x11437d7c), (EAX));
  /* 11435210 mov eax, dword ptr [0x11437d78] */
  EAX = (r32((uint32_t)(0x11437d78)));
L_11435215:;
  /* 11435215 mov ecx, dword ptr [0x11437d7c] */
  ECX = (r32((uint32_t)(0x11437d7c)));
  /* 1143521b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11435220 push 8 */
  push32((uint32_t)(0x8u));
  /* 11435222 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11435225 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 1143522b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1143522e call dword ptr [0x1143603c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143603c))), 0x11435234u);
  /* 11435234 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435236 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11435239 je 0x11435265 */
  if (C.zf) goto L_11435265;
  /* 1143523b push 4 */
  push32((uint32_t)(0x4u));
  /* 1143523d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11435242 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11435247 push edi */
  push32((uint32_t)(EDI));
  /* 11435248 call dword ptr [0x1143602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143602c))), 0x1143524eu);
  /* 1143524e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435250 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11435253 jne 0x11435269 */
  if (!C.zf) goto L_11435269;
  /* 11435255 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11435258 push edi */
  push32((uint32_t)(EDI));
  /* 11435259 push dword ptr [0x11437fa8] */
  push32((uint32_t)(r32((uint32_t)(0x11437fa8))));
  /* 1143525f call dword ptr [0x1143604c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143604c))), 0x11435265u);
L_11435265:;
  /* 11435265 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11435267 jmp 0x11435280 */
  goto L_11435280;
L_11435269:;
  /* 11435269 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1143526d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1143526f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11435272 inc dword ptr [0x11437d78] */
  { uint32_t _r=(r32((uint32_t)(0x11437d78)))+1; w32((uint32_t)(0x11437d78), (_r)); fl_inc(_r,32); }
  /* 11435278 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1143527b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1143527e mov eax, esi */
  EAX = (ESI);
L_11435280:;
  /* 11435280 pop edi */
  EDI = (pop32());
  /* 11435281 pop esi */
  ESI = (pop32());
  /* 11435282 ret  */
  ESPCHK(0x114351d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005283 @ 0x11435283 (251 bytes, 85 insns) */
void f_11435283(void) {
  FTRACE(0x11435283u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435283 push ebp */
  push32((uint32_t)(EBP));
  /* 11435284 mov ebp, esp */
  EBP = (ESP);
  /* 11435286 push ecx */
  push32((uint32_t)(ECX));
  /* 11435287 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1143528a push ebx */
  push32((uint32_t)(EBX));
  /* 1143528b push esi */
  push32((uint32_t)(ESI));
  /* 1143528c push edi */
  push32((uint32_t)(EDI));
  /* 1143528d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11435290 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11435293 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11435295:;
  /* 11435295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11435297 jl 0x1143529e */
  if ((C.sf!=C.of)) goto L_1143529e;
  /* 11435299 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1143529b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1143529c jmp 0x11435295 */
  goto L_11435295;
L_1143529e:;
  /* 1143529e mov eax, ebx */
  EAX = (EBX);
  /* 114352a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 114352a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 114352a8 pop edx */
  EDX = (pop32());
  /* 114352a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 114352b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_114352b3:;
  /* 114352b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 114352b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 114352b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114352bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 114352bd jne 0x114352b3 */
  if (!C.zf) goto L_114352b3;
  /* 114352bf mov edi, ebx */
  EDI = (EBX);
  /* 114352c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 114352c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 114352c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114352c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 114352ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 114352d3 push edi */
  push32((uint32_t)(EDI));
  /* 114352d4 call dword ptr [0x1143602c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143602c))), 0x114352dau);
  /* 114352da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114352dc jne 0x114352e6 */
  if (!C.zf) goto L_114352e6;
  /* 114352de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114352e1 jmp 0x11435379 */
  goto L_11435379;
L_114352e6:;
  /* 114352e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 114352ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114352ee ja 0x1143532c */
  if ((!C.cf&&!C.zf)) goto L_1143532c;
  /* 114352f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_114352f3:;
  /* 114352f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 114352f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 114352fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11435304 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1143530b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1143530d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11435313 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11435316 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11435320 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435325 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11435328 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143532a jbe 0x114352f3 */
  if ((C.cf||C.zf)) goto L_114352f3;
L_1143532c:;
  /* 1143532c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1143532f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11435332 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435337 push 1 */
  push32((uint32_t)(0x1u));
  /* 11435339 pop edi */
  EDI = (pop32());
  /* 1143533a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1143533d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11435340 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11435343 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11435346 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11435349 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1143534e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11435355 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11435358 mov cl, al */
  CL = (AL);
  /* 1143535a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1143535c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143535e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435361 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11435364 jne 0x11435369 */
  if (!C.zf) goto L_11435369;
  /* 11435366 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11435369:;
  /* 11435369 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1143536e mov ecx, ebx */
  ECX = (EBX);
  /* 11435370 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11435372 not edx */
  EDX = (~(EDX));
  /* 11435374 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11435377 mov eax, ebx */
  EAX = (EBX);
L_11435379:;
  /* 11435379 pop edi */
  EDI = (pop32());
  /* 1143537a pop esi */
  ESI = (pop32());
  /* 1143537b pop ebx */
  EBX = (pop32());
  /* 1143537c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143537d ret  */
  ESPCHK(0x11435283u, _esp0);
  ESP += 4; return;
}

/* FUN_1000537e @ 0x1143537e (137 bytes, 50 insns) */
void f_1143537e(void) {
  FTRACE(0x1143537eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1143537e push ebx */
  push32((uint32_t)(EBX));
  /* 1143537f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11435381 cmp dword ptr [0x11437d2c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11437d2c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435387 push esi */
  push32((uint32_t)(ESI));
  /* 11435388 push edi */
  push32((uint32_t)(EDI));
  /* 11435389 jne 0x114353cd */
  if (!C.zf) goto L_114353cd;
  /* 1143538b push 0x11436488 */
  push32((uint32_t)(0x11436488u));
  /* 11435390 call dword ptr [0x1143601c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143601c))), 0x11435396u);
  /* 11435396 mov edi, eax */
  EDI = (EAX);
  /* 11435398 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143539a je 0x11435403 */
  if (C.zf) goto L_11435403;
  /* 1143539c mov esi, dword ptr [0x11436020] */
  ESI = (r32((uint32_t)(0x11436020)));
  /* 114353a2 push 0x1143647c */
  push32((uint32_t)(0x1143647cu));
  /* 114353a7 push edi */
  push32((uint32_t)(EDI));
  /* 114353a8 call esi */
  call_ind((uint32_t)(ESI), 0x114353aau);
  /* 114353aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114353ac mov dword ptr [0x11437d2c], eax */
  w32((uint32_t)(0x11437d2c), (EAX));
  /* 114353b1 je 0x11435403 */
  if (C.zf) goto L_11435403;
  /* 114353b3 push 0x1143646c */
  push32((uint32_t)(0x1143646cu));
  /* 114353b8 push edi */
  push32((uint32_t)(EDI));
  /* 114353b9 call esi */
  call_ind((uint32_t)(ESI), 0x114353bbu);
  /* 114353bb push 0x11436458 */
  push32((uint32_t)(0x11436458u));
  /* 114353c0 push edi */
  push32((uint32_t)(EDI));
  /* 114353c1 mov dword ptr [0x11437d30], eax */
  w32((uint32_t)(0x11437d30), (EAX));
  /* 114353c6 call esi */
  call_ind((uint32_t)(ESI), 0x114353c8u);
  /* 114353c8 mov dword ptr [0x11437d34], eax */
  w32((uint32_t)(0x11437d34), (EAX));
L_114353cd:;
  /* 114353cd mov eax, dword ptr [0x11437d30] */
  EAX = (r32((uint32_t)(0x11437d30)));
  /* 114353d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114353d4 je 0x114353ec */
  if (C.zf) goto L_114353ec;
  /* 114353d6 call eax */
  call_ind((uint32_t)(EAX), 0x114353d8u);
  /* 114353d8 mov ebx, eax */
  EBX = (EAX);
  /* 114353da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 114353dc je 0x114353ec */
  if (C.zf) goto L_114353ec;
  /* 114353de mov eax, dword ptr [0x11437d34] */
  EAX = (r32((uint32_t)(0x11437d34)));
  /* 114353e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114353e5 je 0x114353ec */
  if (C.zf) goto L_114353ec;
  /* 114353e7 push ebx */
  push32((uint32_t)(EBX));
  /* 114353e8 call eax */
  call_ind((uint32_t)(EAX), 0x114353eau);
  /* 114353ea mov ebx, eax */
  EBX = (EAX);
L_114353ec:;
  /* 114353ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114353f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114353f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 114353f8 push ebx */
  push32((uint32_t)(EBX));
  /* 114353f9 call dword ptr [0x11437d2c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11437d2c))), 0x114353ffu);
L_114353ff:;
  /* 114353ff pop edi */
  EDI = (pop32());
  /* 11435400 pop esi */
  ESI = (pop32());
  /* 11435401 pop ebx */
  EBX = (pop32());
  /* 11435402 ret  */
  ESPCHK(0x1143537eu, _esp0);
  ESP += 4; return;
L_11435403:;
  /* 11435403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11435405 jmp 0x114353ff */
  goto L_114353ff;
}

/* _strncpy @ 0x11435410 (254 bytes, 109 insns) */
void f_11435410(void) {
  FTRACE(0x11435410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435410 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11435414 push edi */
  push32((uint32_t)(EDI));
  /* 11435415 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11435417 je 0x11435493 */
  if (C.zf) goto L_11435493;
  /* 11435419 push esi */
  push32((uint32_t)(ESI));
  /* 1143541a push ebx */
  push32((uint32_t)(EBX));
  /* 1143541b mov ebx, ecx */
  EBX = (ECX);
  /* 1143541d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11435421 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11435427 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1143542b jne 0x11435434 */
  if (!C.zf) goto L_11435434;
  /* 1143542d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435430 jne 0x114354a1 */
  if (!C.zf) goto L_114354a1;
  /* 11435432 jmp 0x11435455 */
  goto L_11435455;
L_11435434:;
  /* 11435434 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435436 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11435437 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435439 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1143543a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1143543b je 0x11435462 */
  if (C.zf) goto L_11435462;
  /* 1143543d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143543f je 0x1143546a */
  if (C.zf) goto L_1143546a;
  /* 11435441 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11435447 jne 0x11435434 */
  if (!C.zf) goto L_11435434;
  /* 11435449 mov ebx, ecx */
  EBX = (ECX);
  /* 1143544b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1143544e jne 0x114354a1 */
  if (!C.zf) goto L_114354a1;
L_11435450:;
  /* 11435450 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11435453 je 0x11435462 */
  if (C.zf) goto L_11435462;
L_11435455:;
  /* 11435455 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435457 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11435458 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1143545a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1143545b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1143545d je 0x1143548e */
  if (C.zf) goto L_1143548e;
  /* 1143545f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11435460 jne 0x11435455 */
  if (!C.zf) goto L_11435455;
L_11435462:;
  /* 11435462 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11435466 pop ebx */
  EBX = (pop32());
  /* 11435467 pop esi */
  ESI = (pop32());
  /* 11435468 pop edi */
  EDI = (pop32());
  /* 11435469 ret  */
  ESPCHK(0x11435410u, _esp0);
  ESP += 4; return;
L_1143546a:;
  /* 1143546a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11435470 je 0x11435484 */
  if (C.zf) goto L_11435484;
L_11435472:;
  /* 11435472 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435474 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11435475 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11435476 je 0x11435506 */
  if (C.zf) goto L_11435506;
  /* 1143547c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11435482 jne 0x11435472 */
  if (!C.zf) goto L_11435472;
L_11435484:;
  /* 11435484 mov ebx, ecx */
  EBX = (ECX);
  /* 11435486 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435489 jne 0x114354f7 */
  if (!C.zf) goto L_114354f7;
L_1143548b:;
  /* 1143548b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1143548d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1143548e:;
  /* 1143548e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1143548f jne 0x1143548b */
  if (!C.zf) goto L_1143548b;
  /* 11435491 pop ebx */
  EBX = (pop32());
  /* 11435492 pop esi */
  ESI = (pop32());
L_11435493:;
  /* 11435493 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11435497 pop edi */
  EDI = (pop32());
  /* 11435498 ret  */
  ESPCHK(0x11435410u, _esp0);
  ESP += 4; return;
L_11435499:;
  /* 11435499 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1143549b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1143549e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1143549f je 0x11435450 */
  if (C.zf) goto L_11435450;
L_114354a1:;
  /* 114354a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 114354a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 114354a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 114354aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 114354ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 114354af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 114354b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114354b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 114354b9 je 0x11435499 */
  if (C.zf) goto L_11435499;
  /* 114354bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 114354bd je 0x114354eb */
  if (C.zf) goto L_114354eb;
  /* 114354bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 114354c1 je 0x114354e1 */
  if (C.zf) goto L_114354e1;
  /* 114354c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 114354c9 je 0x114354d7 */
  if (C.zf) goto L_114354d7;
  /* 114354cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 114354d1 jne 0x11435499 */
  if (!C.zf) goto L_11435499;
  /* 114354d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114354d5 jmp 0x114354ef */
  goto L_114354ef;
L_114354d7:;
  /* 114354d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 114354dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114354df jmp 0x114354ef */
  goto L_114354ef;
L_114354e1:;
  /* 114354e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 114354e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 114354e9 jmp 0x114354ef */
  goto L_114354ef;
L_114354eb:;
  /* 114354eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 114354ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_114354ef:;
  /* 114354ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114354f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 114354f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114354f5 je 0x11435501 */
  if (C.zf) goto L_11435501;
L_114354f7:;
  /* 114354f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_114354f9:;
  /* 114354f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 114354fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114354fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114354ff jne 0x114354f9 */
  if (!C.zf) goto L_114354f9;
L_11435501:;
  /* 11435501 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11435504 jne 0x1143548b */
  if (!C.zf) goto L_1143548b;
L_11435506:;
  /* 11435506 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1143550a pop ebx */
  EBX = (pop32());
  /* 1143550b pop esi */
  ESI = (pop32());
  /* 1143550c pop edi */
  EDI = (pop32());
  /* 1143550d ret  */
  ESPCHK(0x11435410u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11435510 (88 bytes, 40 insns) */
void f_11435510(void) {
  FTRACE(0x11435510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435510 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11435514 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11435518 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1143551a je 0x11435563 */
  if (C.zf) goto L_11435563;
  /* 1143551c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1143551e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11435522 push edi */
  push32((uint32_t)(EDI));
  /* 11435523 mov edi, ecx */
  EDI = (ECX);
  /* 11435525 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435528 jb 0x11435557 */
  if (C.cf) goto L_11435557;
  /* 1143552a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1143552c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1143552f je 0x11435539 */
  if (C.zf) goto L_11435539;
  /* 11435531 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11435533:;
  /* 11435533 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435535 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11435536 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11435537 jne 0x11435533 */
  if (!C.zf) goto L_11435533;
L_11435539:;
  /* 11435539 mov ecx, eax */
  ECX = (EAX);
  /* 1143553b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1143553e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435540 mov ecx, eax */
  ECX = (EAX);
  /* 11435542 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11435545 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435547 mov ecx, edx */
  ECX = (EDX);
  /* 11435549 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1143554c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1143554f je 0x11435557 */
  if (C.zf) goto L_11435557;
  /* 11435551 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11435553 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11435555 je 0x1143555d */
  if (C.zf) goto L_1143555d;
L_11435557:;
  /* 11435557 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435559 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1143555a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1143555b jne 0x11435557 */
  if (!C.zf) goto L_11435557;
L_1143555d:;
  /* 1143555d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11435561 pop edi */
  EDI = (pop32());
  /* 11435562 ret  */
  ESPCHK(0x11435510u, _esp0);
  ESP += 4; return;
L_11435563:;
  /* 11435563 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11435567 ret  */
  ESPCHK(0x11435510u, _esp0);
  ESP += 4; return;
}

/* FUN_10005568 @ 0x11435568 (27 bytes, 13 insns) */
void f_11435568(void) {
  FTRACE(0x11435568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435568 mov eax, dword ptr [0x11437d38] */
  EAX = (r32((uint32_t)(0x11437d38)));
  /* 1143556d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143556f je 0x11435580 */
  if (C.zf) goto L_11435580;
  /* 11435571 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11435575 call eax */
  call_ind((uint32_t)(EAX), 0x11435577u);
  /* 11435577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11435579 pop ecx */
  ECX = (pop32());
  /* 1143557a je 0x11435580 */
  if (C.zf) goto L_11435580;
  /* 1143557c push 1 */
  push32((uint32_t)(0x1u));
  /* 1143557e pop eax */
  EAX = (pop32());
  /* 1143557f ret  */
  ESPCHK(0x11435568u, _esp0);
  ESP += 4; return;
L_11435580:;
  /* 11435580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11435582 ret  */
  ESPCHK(0x11435568u, _esp0);
  ESP += 4; return;
}

/* FUN_10005583 @ 0x11435583 (511 bytes, 193 insns) */
void f_11435583(void) {
  FTRACE(0x11435583u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435583 push ebp */
  push32((uint32_t)(EBP));
  /* 11435584 mov ebp, esp */
  EBP = (ESP);
  /* 11435586 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11435588 push 0x114364a0 */
  push32((uint32_t)(0x114364a0u));
  /* 1143558d push 0x11435d50 */
  push32((uint32_t)(0x11435d50u));
  /* 11435592 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11435598 push eax */
  push32((uint32_t)(EAX));
  /* 11435599 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114355a0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114355a3 push ebx */
  push32((uint32_t)(EBX));
  /* 114355a4 push esi */
  push32((uint32_t)(ESI));
  /* 114355a5 push edi */
  push32((uint32_t)(EDI));
  /* 114355a6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114355a9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 114355ab cmp dword ptr [0x11437d60], edi */
  { uint32_t _a=(r32((uint32_t)(0x11437d60))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114355b1 jne 0x114355f9 */
  if (!C.zf) goto L_114355f9;
  /* 114355b3 push edi */
  push32((uint32_t)(EDI));
  /* 114355b4 push edi */
  push32((uint32_t)(EDI));
  /* 114355b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114355b7 pop ebx */
  EBX = (pop32());
  /* 114355b8 push ebx */
  push32((uint32_t)(EBX));
  /* 114355b9 push 0x11436498 */
  push32((uint32_t)(0x11436498u));
  /* 114355be mov esi, 0x100 */
  ESI = (0x100u);
  /* 114355c3 push esi */
  push32((uint32_t)(ESI));
  /* 114355c4 push edi */
  push32((uint32_t)(EDI));
  /* 114355c5 call dword ptr [0x11436010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436010))), 0x114355cbu);
  /* 114355cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114355cd je 0x114355d7 */
  if (C.zf) goto L_114355d7;
  /* 114355cf mov dword ptr [0x11437d60], ebx */
  w32((uint32_t)(0x11437d60), (EBX));
  /* 114355d5 jmp 0x114355f9 */
  goto L_114355f9;
L_114355d7:;
  /* 114355d7 push edi */
  push32((uint32_t)(EDI));
  /* 114355d8 push edi */
  push32((uint32_t)(EDI));
  /* 114355d9 push ebx */
  push32((uint32_t)(EBX));
  /* 114355da push 0x11436494 */
  push32((uint32_t)(0x11436494u));
  /* 114355df push esi */
  push32((uint32_t)(ESI));
  /* 114355e0 push edi */
  push32((uint32_t)(EDI));
  /* 114355e1 call dword ptr [0x11436014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436014))), 0x114355e7u);
  /* 114355e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114355e9 je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 114355ef mov dword ptr [0x11437d60], 2 */
  w32((uint32_t)(0x11437d60), (0x2u));
L_114355f9:;
  /* 114355f9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114355fc jle 0x1143560e */
  if ((C.zf||C.sf!=C.of)) goto L_1143560e;
  /* 114355fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11435601 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11435604 call 0x114357a7 */
  push32(0x11435609u); f_114357a7();
  /* 11435609 pop ecx */
  ECX = (pop32());
  /* 1143560a pop ecx */
  ECX = (pop32());
  /* 1143560b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1143560e:;
  /* 1143560e mov eax, dword ptr [0x11437d60] */
  EAX = (r32((uint32_t)(0x11437d60)));
  /* 11435613 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435616 jne 0x11435635 */
  if (!C.zf) goto L_11435635;
  /* 11435618 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1143561b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1143561e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11435621 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11435624 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11435627 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1143562a call dword ptr [0x11436014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436014))), 0x11435630u);
  /* 11435630 jmp 0x11435713 */
  goto L_11435713;
L_11435635:;
  /* 11435635 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435638 jne 0x11435711 */
  if (!C.zf) goto L_11435711;
  /* 1143563e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435641 jne 0x1143564b */
  if (!C.zf) goto L_1143564b;
  /* 11435643 mov eax, dword ptr [0x11437d58] */
  EAX = (r32((uint32_t)(0x11437d58)));
  /* 11435648 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1143564b:;
  /* 1143564b push edi */
  push32((uint32_t)(EDI));
  /* 1143564c push edi */
  push32((uint32_t)(EDI));
  /* 1143564d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11435650 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11435653 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11435656 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11435658 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143565a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1143565d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1143565e push eax */
  push32((uint32_t)(EAX));
  /* 1143565f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11435662 call dword ptr [0x11436024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436024))), 0x11435668u);
  /* 11435668 mov ebx, eax */
  EBX = (EAX);
  /* 1143566a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1143566d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143566f je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 11435675 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11435678 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1143567b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143567e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11435680 call 0x11435e30 */
  push32(0x11435685u); f_11435e30();
  /* 11435685 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11435688 mov eax, esp */
  EAX = (ESP);
  /* 1143568a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1143568d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11435691 jmp 0x114356a6 */
  goto L_114356a6;
  /* 11435693 push 1 */
  push32((uint32_t)(0x1u));
  /* 11435695 pop eax */
  EAX = (pop32());
  /* 11435696 ret  */
  ESPCHK(0x11435583u, _esp0);
  ESP += 4; return;
  /* 11435697 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1143569a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1143569c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1143569f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 114356a3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_114356a6:;
  /* 114356a6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114356a9 je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 114356ab push ebx */
  push32((uint32_t)(EBX));
  /* 114356ac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 114356af push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 114356b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 114356b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 114356b7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 114356ba call dword ptr [0x11436024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436024))), 0x114356c0u);
  /* 114356c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 114356c2 je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 114356c4 push edi */
  push32((uint32_t)(EDI));
  /* 114356c5 push edi */
  push32((uint32_t)(EDI));
  /* 114356c6 push ebx */
  push32((uint32_t)(EBX));
  /* 114356c7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 114356ca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 114356cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 114356d0 call dword ptr [0x11436010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436010))), 0x114356d6u);
  /* 114356d6 mov esi, eax */
  ESI = (EAX);
  /* 114356d8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 114356db cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114356dd je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 114356df test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 114356e3 je 0x11435725 */
  if (C.zf) goto L_11435725;
  /* 114356e5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114356e8 je 0x114357a0 */
  if (C.zf) goto L_114357a0;
  /* 114356ee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114356f1 jg 0x11435711 */
  if ((!C.zf&&C.sf==C.of)) goto L_11435711;
  /* 114356f3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 114356f6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 114356f9 push ebx */
  push32((uint32_t)(EBX));
  /* 114356fa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 114356fd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11435700 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11435703 call dword ptr [0x11436010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436010))), 0x11435709u);
  /* 11435709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1143570b jne 0x114357a0 */
  if (!C.zf) goto L_114357a0;
L_11435711:;
  /* 11435711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11435713:;
  /* 11435713 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11435716 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11435719 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11435720 pop edi */
  EDI = (pop32());
  /* 11435721 pop esi */
  ESI = (pop32());
  /* 11435722 pop ebx */
  EBX = (pop32());
  /* 11435723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435724 ret  */
  ESPCHK(0x11435583u, _esp0);
  ESP += 4; return;
L_11435725:;
  /* 11435725 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1143572c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1143572f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435732 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11435734 call 0x11435e30 */
  push32(0x11435739u); f_11435e30();
  /* 11435739 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1143573c mov ebx, esp */
  EBX = (ESP);
  /* 1143573e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11435741 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11435745 jmp 0x11435759 */
  goto L_11435759;
  /* 11435747 push 1 */
  push32((uint32_t)(0x1u));
  /* 11435749 pop eax */
  EAX = (pop32());
  /* 1143574a ret  */
  ESPCHK(0x11435583u, _esp0);
  ESP += 4; return;
  /* 1143574b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1143574e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11435750 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11435752 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11435756 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11435759:;
  /* 11435759 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143575b je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 1143575d push esi */
  push32((uint32_t)(ESI));
  /* 1143575e push ebx */
  push32((uint32_t)(EBX));
  /* 1143575f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11435762 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11435765 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11435768 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1143576b call dword ptr [0x11436010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436010))), 0x11435771u);
  /* 11435771 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11435773 je 0x11435711 */
  if (C.zf) goto L_11435711;
  /* 11435775 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435778 push edi */
  push32((uint32_t)(EDI));
  /* 11435779 push edi */
  push32((uint32_t)(EDI));
  /* 1143577a jne 0x11435780 */
  if (!C.zf) goto L_11435780;
  /* 1143577c push edi */
  push32((uint32_t)(EDI));
  /* 1143577d push edi */
  push32((uint32_t)(EDI));
  /* 1143577e jmp 0x11435786 */
  goto L_11435786;
L_11435780:;
  /* 11435780 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11435783 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11435786:;
  /* 11435786 push esi */
  push32((uint32_t)(ESI));
  /* 11435787 push ebx */
  push32((uint32_t)(EBX));
  /* 11435788 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1143578d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11435790 call dword ptr [0x11436064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436064))), 0x11435796u);
  /* 11435796 mov esi, eax */
  ESI = (EAX);
  /* 11435798 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143579a je 0x11435711 */
  if (C.zf) goto L_11435711;
L_114357a0:;
  /* 114357a0 mov eax, esi */
  EAX = (ESI);
  /* 114357a2 jmp 0x11435713 */
  goto L_11435713;
}

/* FUN_100057a7 @ 0x114357a7 (43 bytes, 20 insns) */
void f_114357a7(void) {
  FTRACE(0x114357a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114357a7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 114357ab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 114357af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 114357b1 push esi */
  push32((uint32_t)(ESI));
  /* 114357b2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 114357b5 je 0x114357c4 */
  if (C.zf) goto L_114357c4;
L_114357b7:;
  /* 114357b7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114357ba je 0x114357c4 */
  if (C.zf) goto L_114357c4;
  /* 114357bc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 114357bd mov esi, ecx */
  ESI = (ECX);
  /* 114357bf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 114357c0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 114357c2 jne 0x114357b7 */
  if (!C.zf) goto L_114357b7;
L_114357c4:;
  /* 114357c4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 114357c7 pop esi */
  ESI = (pop32());
  /* 114357c8 jne 0x114357cf */
  if (!C.zf) goto L_114357cf;
  /* 114357ca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 114357ce ret  */
  ESPCHK(0x114357a7u, _esp0);
  ESP += 4; return;
L_114357cf:;
  /* 114357cf mov eax, edx */
  EAX = (EDX);
  /* 114357d1 ret  */
  ESPCHK(0x114357a7u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d2 @ 0x114357d2 (318 bytes, 123 insns) */
void f_114357d2(void) {
  FTRACE(0x114357d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 114357d2 push ebp */
  push32((uint32_t)(EBP));
  /* 114357d3 mov ebp, esp */
  EBP = (ESP);
  /* 114357d5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 114357d7 push 0x114364b8 */
  push32((uint32_t)(0x114364b8u));
  /* 114357dc push 0x11435d50 */
  push32((uint32_t)(0x11435d50u));
  /* 114357e1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 114357e7 push eax */
  push32((uint32_t)(EAX));
  /* 114357e8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 114357ef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 114357f2 push ebx */
  push32((uint32_t)(EBX));
  /* 114357f3 push esi */
  push32((uint32_t)(ESI));
  /* 114357f4 push edi */
  push32((uint32_t)(EDI));
  /* 114357f5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114357f8 mov eax, dword ptr [0x11437d64] */
  EAX = (r32((uint32_t)(0x11437d64)));
  /* 114357fd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114357ff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435801 jne 0x11435841 */
  if (!C.zf) goto L_11435841;
  /* 11435803 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11435806 push eax */
  push32((uint32_t)(EAX));
  /* 11435807 push 1 */
  push32((uint32_t)(0x1u));
  /* 11435809 pop esi */
  ESI = (pop32());
  /* 1143580a push esi */
  push32((uint32_t)(ESI));
  /* 1143580b push 0x11436498 */
  push32((uint32_t)(0x11436498u));
  /* 11435810 push esi */
  push32((uint32_t)(ESI));
  /* 11435811 call dword ptr [0x1143600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143600c))), 0x11435817u);
  /* 11435817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11435819 je 0x1143581f */
  if (C.zf) goto L_1143581f;
  /* 1143581b mov eax, esi */
  EAX = (ESI);
  /* 1143581d jmp 0x1143583c */
  goto L_1143583c;
L_1143581f:;
  /* 1143581f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11435822 push eax */
  push32((uint32_t)(EAX));
  /* 11435823 push esi */
  push32((uint32_t)(ESI));
  /* 11435824 push 0x11436494 */
  push32((uint32_t)(0x11436494u));
  /* 11435829 push esi */
  push32((uint32_t)(ESI));
  /* 1143582a push ebx */
  push32((uint32_t)(EBX));
  /* 1143582b call dword ptr [0x11436018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436018))), 0x11435831u);
  /* 11435831 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11435833 je 0x11435907 */
  if (C.zf) goto L_11435907;
  /* 11435839 push 2 */
  push32((uint32_t)(0x2u));
  /* 1143583b pop eax */
  EAX = (pop32());
L_1143583c:;
  /* 1143583c mov dword ptr [0x11437d64], eax */
  w32((uint32_t)(0x11437d64), (EAX));
L_11435841:;
  /* 11435841 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435844 jne 0x1143586a */
  if (!C.zf) goto L_1143586a;
  /* 11435846 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11435849 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143584b jne 0x11435852 */
  if (!C.zf) goto L_11435852;
  /* 1143584d mov eax, dword ptr [0x11437d48] */
  EAX = (r32((uint32_t)(0x11437d48)));
L_11435852:;
  /* 11435852 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11435855 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11435858 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1143585b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1143585e push eax */
  push32((uint32_t)(EAX));
  /* 1143585f call dword ptr [0x11436018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436018))), 0x11435865u);
  /* 11435865 jmp 0x11435909 */
  goto L_11435909;
L_1143586a:;
  /* 1143586a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143586d jne 0x11435907 */
  if (!C.zf) goto L_11435907;
  /* 11435873 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435876 jne 0x11435880 */
  if (!C.zf) goto L_11435880;
  /* 11435878 mov eax, dword ptr [0x11437d58] */
  EAX = (r32((uint32_t)(0x11437d58)));
  /* 1143587d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11435880:;
  /* 11435880 push ebx */
  push32((uint32_t)(EBX));
  /* 11435881 push ebx */
  push32((uint32_t)(EBX));
  /* 11435882 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11435885 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11435888 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1143588b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1143588d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1143588f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11435892 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11435893 push eax */
  push32((uint32_t)(EAX));
  /* 11435894 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11435897 call dword ptr [0x11436024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436024))), 0x1143589du);
  /* 1143589d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 114358a0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114358a2 je 0x11435907 */
  if (C.zf) goto L_11435907;
  /* 114358a4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 114358a7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 114358aa mov eax, edi */
  EAX = (EDI);
  /* 114358ac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 114358af and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 114358b1 call 0x11435e30 */
  push32(0x114358b6u); f_11435e30();
  /* 114358b6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 114358b9 mov esi, esp */
  ESI = (ESP);
  /* 114358bb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 114358be push edi */
  push32((uint32_t)(EDI));
  /* 114358bf push ebx */
  push32((uint32_t)(EBX));
  /* 114358c0 push esi */
  push32((uint32_t)(ESI));
  /* 114358c1 call 0x11435510 */
  push32(0x114358c6u); f_11435510();
  /* 114358c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 114358c9 jmp 0x114358d6 */
  goto L_114358d6;
  /* 114358cb push 1 */
  push32((uint32_t)(0x1u));
  /* 114358cd pop eax */
  EAX = (pop32());
  /* 114358ce ret  */
  ESPCHK(0x114357d2u, _esp0);
  ESP += 4; return;
  /* 114358cf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 114358d2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 114358d4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_114358d6:;
  /* 114358d6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 114358da cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114358dc je 0x11435907 */
  if (C.zf) goto L_11435907;
  /* 114358de push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 114358e1 push esi */
  push32((uint32_t)(ESI));
  /* 114358e2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 114358e5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 114358e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 114358ea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 114358ed call dword ptr [0x11436024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11436024))), 0x114358f3u);
  /* 114358f3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114358f5 je 0x11435907 */
  if (C.zf) goto L_11435907;
  /* 114358f7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 114358fa push eax */
  push32((uint32_t)(EAX));
  /* 114358fb push esi */
  push32((uint32_t)(ESI));
  /* 114358fc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 114358ff call dword ptr [0x1143600c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1143600c))), 0x11435905u);
  /* 11435905 jmp 0x11435909 */
  goto L_11435909;
L_11435907:;
  /* 11435907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11435909:;
  /* 11435909 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1143590c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1143590f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11435916 pop edi */
  EDI = (pop32());
  /* 11435917 pop esi */
  ESI = (pop32());
  /* 11435918 pop ebx */
  EBX = (pop32());
  /* 11435919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1143591a ret  */
  ESPCHK(0x114357d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x11435920 (664 bytes, 267 insns) [15 switch table(s)] */
void f_11435920(void) {
  FTRACE(0x11435920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435920 push ebp */
  push32((uint32_t)(EBP));
  /* 11435921 mov ebp, esp */
  EBP = (ESP);
  /* 11435923 push edi */
  push32((uint32_t)(EDI));
  /* 11435924 push esi */
  push32((uint32_t)(ESI));
  /* 11435925 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11435928 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1143592b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1143592e mov eax, ecx */
  EAX = (ECX);
  /* 11435930 mov edx, ecx */
  EDX = (ECX);
  /* 11435932 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11435934 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435936 jbe 0x11435940 */
  if ((C.cf||C.zf)) goto L_11435940;
  /* 11435938 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1143593a jb 0x11435ab8 */
  if (C.cf) goto L_11435ab8;
L_11435940:;
  /* 11435940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11435946 jne 0x1143595c */
  if (!C.zf) goto L_1143595c;
  /* 11435948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1143594b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1143594e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435951 jb 0x1143597c */
  if (C.cf) goto L_1143597c;
  /* 11435953 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11435955 jmp dword ptr [edx*4 + 0x11435a68] */
  switch (EDX) {
    case 0: goto L_11435a78;
    case 1: goto L_11435a80;
    case 2: goto L_11435a8c;
    case 3: goto L_11435aa0;
    default: x86_unimpl("switch@0x11435955 out of table"); return;
  }
L_1143595c:;
  /* 1143595c mov eax, edi */
  EAX = (EDI);
  /* 1143595e mov edx, 3 */
  EDX = (0x3u);
  /* 11435963 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435966 jb 0x11435974 */
  if (C.cf) goto L_11435974;
  /* 11435968 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1143596b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1143596d jmp dword ptr [eax*4 + 0x11435980] */
  switch (EAX) {
    case 1: goto L_11435990;
    case 2: goto L_114359bc;
    case 3: goto L_114359e0;
    default: x86_unimpl("switch@0x1143596d out of table"); return;
  }
L_11435974:;
  /* 11435974 jmp dword ptr [ecx*4 + 0x11435a78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11435a78)))); return;
  /* 1143597b nop  */
  /* nop */
L_1143597c:;
  /* 1143597c jmp dword ptr [ecx*4 + 0x114359fc] */
  switch (ECX) {
    case 0: goto L_11435a5f;
    case 1: goto L_11435a4c;
    case 2: goto L_11435a44;
    case 3: goto L_11435a3c;
    case 4: goto L_11435a34;
    case 5: goto L_11435a2c;
    case 6: goto L_11435a24;
    case 7: goto L_11435a1c;
    default: x86_unimpl("switch@0x1143597c out of table"); return;
  }
  /* 11435983 nop  */
  /* nop */
L_11435990:;
  /* 11435990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11435992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435996 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11435999 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1143599c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1143599f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114359a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 114359a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114359a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114359ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114359ae jb 0x1143597c */
  if (C.cf) goto L_1143597c;
  /* 114359b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114359b2 jmp dword ptr [edx*4 + 0x11435a68] */
  switch (EDX) {
    case 0: goto L_11435a78;
    case 1: goto L_11435a80;
    case 2: goto L_11435a8c;
    case 3: goto L_11435aa0;
    default: x86_unimpl("switch@0x114359b2 out of table"); return;
  }
  /* 114359b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_114359bc:;
  /* 114359bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114359be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114359c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114359c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 114359c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114359c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 114359cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 114359ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 114359d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114359d4 jb 0x1143597c */
  if (C.cf) goto L_1143597c;
  /* 114359d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114359d8 jmp dword ptr [edx*4 + 0x11435a68] */
  switch (EDX) {
    case 0: goto L_11435a78;
    case 1: goto L_11435a80;
    case 2: goto L_11435a8c;
    case 3: goto L_11435aa0;
    default: x86_unimpl("switch@0x114359d8 out of table"); return;
  }
  /* 114359df nop  */
  /* nop */
L_114359e0:;
  /* 114359e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 114359e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 114359e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 114359e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 114359e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 114359ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 114359eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 114359ee jb 0x1143597c */
  if (C.cf) goto L_1143597c;
  /* 114359f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 114359f2 jmp dword ptr [edx*4 + 0x11435a68] */
  switch (EDX) {
    case 0: goto L_11435a78;
    case 1: goto L_11435a80;
    case 2: goto L_11435a8c;
    case 3: goto L_11435aa0;
    default: x86_unimpl("switch@0x114359f2 out of table"); return;
  }
  /* 114359f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11435a1c:;
  /* 11435a1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11435a20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11435a24:;
  /* 11435a24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11435a28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11435a2c:;
  /* 11435a2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11435a30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11435a34:;
  /* 11435a34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11435a38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11435a3c:;
  /* 11435a3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11435a40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11435a44:;
  /* 11435a44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11435a48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11435a4c:;
  /* 11435a4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11435a50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11435a54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11435a5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11435a5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11435a5f:;
  /* 11435a5f jmp dword ptr [edx*4 + 0x11435a68] */
  switch (EDX) {
    case 0: goto L_11435a78;
    case 1: goto L_11435a80;
    case 2: goto L_11435a8c;
    case 3: goto L_11435aa0;
    default: x86_unimpl("switch@0x11435a5f out of table"); return;
  }
  /* 11435a66 mov edi, edi */
  EDI = (EDI);
L_11435a78:;
  /* 11435a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435a7b pop esi */
  ESI = (pop32());
  /* 11435a7c pop edi */
  EDI = (pop32());
  /* 11435a7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435a7e ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435a7f nop  */
  /* nop */
L_11435a80:;
  /* 11435a80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435a82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435a84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435a87 pop esi */
  ESI = (pop32());
  /* 11435a88 pop edi */
  EDI = (pop32());
  /* 11435a89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435a8a ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435a8b nop  */
  /* nop */
L_11435a8c:;
  /* 11435a8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435a8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435a90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11435a93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11435a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435a99 pop esi */
  ESI = (pop32());
  /* 11435a9a pop edi */
  EDI = (pop32());
  /* 11435a9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435a9c ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435a9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11435aa0:;
  /* 11435aa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11435aa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11435aa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11435aa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11435aaa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11435aad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11435ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435ab3 pop esi */
  ESI = (pop32());
  /* 11435ab4 pop edi */
  EDI = (pop32());
  /* 11435ab5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435ab6 ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435ab7 nop  */
  /* nop */
L_11435ab8:;
  /* 11435ab8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11435abc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11435ac0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11435ac6 jne 0x11435aec */
  if (!C.zf) goto L_11435aec;
  /* 11435ac8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435acb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11435ace cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435ad1 jb 0x11435ae0 */
  if (C.cf) goto L_11435ae0;
  /* 11435ad3 std  */
  C.df=1;
  /* 11435ad4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11435ad6 cld  */
  C.df=0;
  /* 11435ad7 jmp dword ptr [edx*4 + 0x11435c00] */
  switch (EDX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435ad7 out of table"); return;
  }
  /* 11435ade mov edi, edi */
  EDI = (EDI);
L_11435ae0:;
  /* 11435ae0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11435ae2 jmp dword ptr [ecx*4 + 0x11435bb0] */
  switch (ECX) {
    case 0: goto L_11435bf7;
    default: x86_unimpl("switch@0x11435ae2 out of table"); return;
  }
  /* 11435ae9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11435aec:;
  /* 11435aec mov eax, edi */
  EAX = (EDI);
  /* 11435aee mov edx, 3 */
  EDX = (0x3u);
  /* 11435af3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435af6 jb 0x11435b04 */
  if (C.cf) goto L_11435b04;
  /* 11435af8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11435afb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435afd jmp dword ptr [eax*4 + 0x11435b08] */
  switch (EAX) {
    case 1: goto L_11435b18;
    case 2: goto L_11435b38;
    case 3: goto L_11435b60;
    default: x86_unimpl("switch@0x11435afd out of table"); return;
  }
L_11435b04:;
  /* 11435b04 jmp dword ptr [ecx*4 + 0x11435c00] */
  switch (ECX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435b04 out of table"); return;
  }
  /* 11435b0b nop  */
  /* nop */
L_11435b18:;
  /* 11435b18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435b1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11435b1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435b20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11435b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435b24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11435b25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435b28 jb 0x11435ae0 */
  if (C.cf) goto L_11435ae0;
  /* 11435b2a std  */
  C.df=1;
  /* 11435b2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11435b2d cld  */
  C.df=0;
  /* 11435b2e jmp dword ptr [edx*4 + 0x11435c00] */
  switch (EDX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435b2e out of table"); return;
  }
  /* 11435b35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11435b38:;
  /* 11435b38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435b3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11435b3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435b40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11435b43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435b46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11435b49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435b4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435b4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435b52 jb 0x11435ae0 */
  if (C.cf) goto L_11435ae0;
  /* 11435b54 std  */
  C.df=1;
  /* 11435b55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11435b57 cld  */
  C.df=0;
  /* 11435b58 jmp dword ptr [edx*4 + 0x11435c00] */
  switch (EDX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435b58 out of table"); return;
  }
  /* 11435b5f nop  */
  /* nop */
L_11435b60:;
  /* 11435b60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435b63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11435b65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435b68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11435b6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11435b6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11435b71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11435b74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11435b77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435b7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435b7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435b80 jb 0x11435ae0 */
  if (C.cf) goto L_11435ae0;
  /* 11435b86 std  */
  C.df=1;
  /* 11435b87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11435b89 cld  */
  C.df=0;
  /* 11435b8a jmp dword ptr [edx*4 + 0x11435c00] */
  switch (EDX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435b8a out of table"); return;
  }
  /* 11435b91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11435b94 mov ah, 0x5b */
  AH = (0x5bu);
  /* 11435b96 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435b97 adc dword ptr [ebx + ebx*2 + 0x5bc41143], edi */
  { uint32_t _a=(r32((uint32_t)(EBX + EBX*2 + 0x5bc41143))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EBX + EBX*2 + 0x5bc41143), (_r)); fl_add(_a,_b,_r,32); }
  /* 11435b9e inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435b9f adc esp, ecx */
  { uint32_t _a=(ESP),_b=(ECX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435ba1 pop ebx */
  EBX = (pop32());
  /* 11435ba2 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435ba3 adc esp, edx */
  { uint32_t _a=(ESP),_b=(EDX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435ba5 pop ebx */
  EBX = (pop32());
  /* 11435ba6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435ba7 adc esp, ebx */
  { uint32_t _a=(ESP),_b=(EBX),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435ba9 pop ebx */
  EBX = (pop32());
  /* 11435baa inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435bab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435bad pop ebx */
  EBX = (pop32());
  /* 11435bae inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11435bb4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11435bb8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11435bbc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11435bc0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11435bc4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11435bc8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11435bcc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11435bd0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11435bd4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11435bd8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11435bdc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11435be0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11435be4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11435be8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11435bec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11435bf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11435bf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11435bf7:;
  /* 11435bf7 jmp dword ptr [edx*4 + 0x11435c00] */
  switch (EDX) {
    case 0: goto L_11435c10;
    case 1: goto L_11435c18;
    case 2: goto L_11435c28;
    case 3: goto L_11435c3c;
    default: x86_unimpl("switch@0x11435bf7 out of table"); return;
  }
  /* 11435bfe mov edi, edi */
  EDI = (EDI);
L_11435c10:;
  /* 11435c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435c13 pop esi */
  ESI = (pop32());
  /* 11435c14 pop edi */
  EDI = (pop32());
  /* 11435c15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435c16 ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435c17 nop  */
  /* nop */
L_11435c18:;
  /* 11435c18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435c1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435c1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435c21 pop esi */
  ESI = (pop32());
  /* 11435c22 pop edi */
  EDI = (pop32());
  /* 11435c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435c24 ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435c25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11435c28:;
  /* 11435c28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435c2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435c2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11435c31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11435c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435c37 pop esi */
  ESI = (pop32());
  /* 11435c38 pop edi */
  EDI = (pop32());
  /* 11435c39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435c3a ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
  /* 11435c3b nop  */
  /* nop */
L_11435c3c:;
  /* 11435c3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11435c3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11435c42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11435c45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11435c48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11435c4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11435c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435c51 pop esi */
  ESI = (pop32());
  /* 11435c52 pop edi */
  EDI = (pop32());
  /* 11435c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11435c54 ret  */
  ESPCHK(0x11435920u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11435c58 (32 bytes, 18 insns) */
void f_11435c58(void) {
  FTRACE(0x11435c58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435c58 push ebp */
  push32((uint32_t)(EBP));
  /* 11435c59 mov ebp, esp */
  EBP = (ESP);
  /* 11435c5b push ebx */
  push32((uint32_t)(EBX));
  /* 11435c5c push esi */
  push32((uint32_t)(ESI));
  /* 11435c5d push edi */
  push32((uint32_t)(EDI));
  /* 11435c5e push ebp */
  push32((uint32_t)(EBP));
  /* 11435c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11435c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11435c63 push 0x11435c70 */
  push32((uint32_t)(0x11435c70u));
  /* 11435c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11435c6b call 0x11435e60 */
  push32(0x11435c70u); f_11435e60();
  /* 11435c70 pop ebp */
  EBP = (pop32());
  /* 11435c71 pop edi */
  EDI = (pop32());
  /* 11435c72 pop esi */
  ESI = (pop32());
  /* 11435c73 pop ebx */
  EBX = (pop32());
  /* 11435c74 mov esp, ebp */
  ESP = (EBP);
  /* 11435c76 pop ebp */
  EBP = (pop32());
  /* 11435c77 ret  */
  ESPCHK(0x11435c58u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11435c9a (104 bytes, 33 insns) */
void f_11435c9a(void) {
  FTRACE(0x11435c9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435c9a push ebx */
  push32((uint32_t)(EBX));
  /* 11435c9b push esi */
  push32((uint32_t)(ESI));
  /* 11435c9c push edi */
  push32((uint32_t)(EDI));
  /* 11435c9d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11435ca1 push eax */
  push32((uint32_t)(EAX));
  /* 11435ca2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11435ca4 push 0x11435c78 */
  push32((uint32_t)(0x11435c78u));
  /* 11435ca9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11435cb0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11435cb7:;
  /* 11435cb7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11435cbb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11435cbe mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11435cc1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435cc4 je 0x11435cf4 */
  if (C.zf) goto L_11435cf4;
  /* 11435cc6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435cca je 0x11435cf4 */
  if (C.zf) goto L_11435cf4;
  /* 11435ccc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11435ccf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11435cd2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11435cd6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11435cd9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435cde jne 0x11435cf2 */
  if (!C.zf) goto L_11435cf2;
  /* 11435ce0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11435ce5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11435ce9 call 0x11435d2e */
  push32(0x11435ceeu); f_11435d2e();
  /* 11435cee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11435cf2u);
L_11435cf2:;
  /* 11435cf2 jmp 0x11435cb7 */
  goto L_11435cb7;
L_11435cf4:;
  /* 11435cf4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11435cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435cfe pop edi */
  EDI = (pop32());
  /* 11435cff pop esi */
  ESI = (pop32());
  /* 11435d00 pop ebx */
  EBX = (pop32());
  /* 11435d01 ret  */
  ESPCHK(0x11435c9au, _esp0);
  ESP += 4; return;
}

/* FUN_10005d2e @ 0x11435d2e (24 bytes, 10 insns) */
void f_11435d2e(void) {
  FTRACE(0x11435d2eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435d2e push ebx */
  push32((uint32_t)(EBX));
  /* 11435d2f push ecx */
  push32((uint32_t)(ECX));
  /* 11435d30 mov ebx, 0x11437770 */
  EBX = (0x11437770u);
  /* 11435d35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11435d38 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 11435d3b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 11435d3e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11435d41 pop ecx */
  ECX = (pop32());
  /* 11435d42 pop ebx */
  EBX = (pop32());
  /* 11435d43 ret 4 */
  ESPCHK(0x11435d2eu, _esp0);
  ESP += 8; return;
}

/* FUN_10005e0d @ 0x11435e0d (27 bytes, 11 insns) */
void f_11435e0d(void) {
  FTRACE(0x11435e0du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435e0d push ebp */
  push32((uint32_t)(EBP));
  /* 11435e0e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11435e12 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11435e14 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11435e17 push eax */
  push32((uint32_t)(EAX));
  /* 11435e18 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 11435e1b push eax */
  push32((uint32_t)(EAX));
  /* 11435e1c call 0x11435c9a */
  push32(0x11435e21u); f_11435c9a();
  /* 11435e21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11435e24 pop ebp */
  EBP = (pop32());
  /* 11435e25 ret 4 */
  ESPCHK(0x11435e0du, _esp0);
  ESP += 8; return;
}

/* FUN_10005e30 @ 0x11435e30 (47 bytes, 17 insns) */
void f_11435e30(void) {
  FTRACE(0x11435e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435e30 push ecx */
  push32((uint32_t)(ECX));
  /* 11435e31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435e36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11435e3a jb 0x11435e50 */
  if (C.cf) goto L_11435e50;
L_11435e3c:;
  /* 11435e3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435e42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435e47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11435e49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11435e4e jae 0x11435e3c */
  if (!C.cf) goto L_11435e3c;
L_11435e50:;
  /* 11435e50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11435e52 mov eax, esp */
  EAX = (ESP);
  /* 11435e54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11435e56 mov esp, ecx */
  ESP = (ECX);
  /* 11435e58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11435e5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11435e5d push eax */
  push32((uint32_t)(EAX));
  /* 11435e5e ret  */
  ESPCHK(0x11435e30u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11435e60 (6 bytes, 1 insns) */
void f_11435e60(void) {
  FTRACE(0x11435e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11435e60 jmp dword ptr [0x11436008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11436008)))); return;
}

