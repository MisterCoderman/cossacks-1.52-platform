#include "recomp.h"

/* FUN_10001000 @ 0x11781000 (53 bytes, 16 insns) [1 switch table(s)] */
void f_11781000(void) {
  FTRACE(0x11781000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781002 call dword ptr [0x11785118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785118))), 0x11781008u);
  /* 11781008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178100b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178100e ja 0x1178102f */
  if ((!C.cf&&!C.zf)) goto L_1178102f;
  /* 11781010 jmp dword ptr [eax*4 + 0x11781038] */
  switch (EAX) {
    case 0: goto L_11781017;
    case 1: goto L_1178101d;
    case 2: goto L_11781023;
    case 3: goto L_11781029;
    default: x86_unimpl("switch@0x11781010 out of table"); return;
  }
L_11781017:;
  /* 11781017 mov eax, 0x1770 */
  EAX = (0x1770u);
  /* 1178101c ret  */
  ESPCHK(0x11781000u, _esp0);
  ESP += 4; return;
L_1178101d:;
  /* 1178101d mov eax, 0x1b58 */
  EAX = (0x1b58u);
  /* 11781022 ret  */
  ESPCHK(0x11781000u, _esp0);
  ESP += 4; return;
L_11781023:;
  /* 11781023 mov eax, 0x1f40 */
  EAX = (0x1f40u);
  /* 11781028 ret  */
  ESPCHK(0x11781000u, _esp0);
  ESP += 4; return;
L_11781029:;
  /* 11781029 mov eax, 0x2710 */
  EAX = (0x2710u);
  /* 1178102e ret  */
  ESPCHK(0x11781000u, _esp0);
  ESP += 4; return;
L_1178102f:;
  /* 1178102f mov eax, 0x64 */
  EAX = (0x64u);
  /* 11781034 ret  */
  ESPCHK(0x11781000u, _esp0);
  ESP += 4; return;
}

/* OnInit @ 0x11781050 (371 bytes, 100 insns) */
void f_11781050(void) {
  FTRACE(0x11781050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781050 push esi */
  push32((uint32_t)(ESI));
  /* 11781051 mov esi, dword ptr [0x117850fc] */
  ESI = (r32((uint32_t)(0x117850fc)));
  /* 11781057 push edi */
  push32((uint32_t)(EDI));
  /* 11781058 push 0x117860dc */
  push32((uint32_t)(0x117860dcu));
  /* 1178105d push 0x117864c0 */
  push32((uint32_t)(0x117864c0u));
  /* 11781062 call esi */
  call_ind((uint32_t)(ESI), 0x11781064u);
  /* 11781064 push 0x117860d4 */
  push32((uint32_t)(0x117860d4u));
  /* 11781069 push 0x11786480 */
  push32((uint32_t)(0x11786480u));
  /* 1178106e call esi */
  call_ind((uint32_t)(ESI), 0x11781070u);
  /* 11781070 push 0x117860cc */
  push32((uint32_t)(0x117860ccu));
  /* 11781075 push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 1178107a call esi */
  call_ind((uint32_t)(ESI), 0x1178107cu);
  /* 1178107c push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 11781081 push 0x117864e0 */
  push32((uint32_t)(0x117864e0u));
  /* 11781086 call esi */
  call_ind((uint32_t)(ESI), 0x11781088u);
  /* 11781088 push 0x117860c4 */
  push32((uint32_t)(0x117860c4u));
  /* 1178108d push 0x117864e8 */
  push32((uint32_t)(0x117864e8u));
  /* 11781092 call esi */
  call_ind((uint32_t)(ESI), 0x11781094u);
  /* 11781094 push 0x117860c0 */
  push32((uint32_t)(0x117860c0u));
  /* 11781099 push 0x117864f0 */
  push32((uint32_t)(0x117864f0u));
  /* 1178109e call esi */
  call_ind((uint32_t)(ESI), 0x117810a0u);
  /* 117810a0 push 0x117860bc */
  push32((uint32_t)(0x117860bcu));
  /* 117810a5 push 0x117864f8 */
  push32((uint32_t)(0x117864f8u));
  /* 117810aa call esi */
  call_ind((uint32_t)(ESI), 0x117810acu);
  /* 117810ac mov esi, dword ptr [0x11785100] */
  ESI = (r32((uint32_t)(0x11785100)));
  /* 117810b2 push 0x117860b8 */
  push32((uint32_t)(0x117860b8u));
  /* 117810b7 push 0x11786520 */
  push32((uint32_t)(0x11786520u));
  /* 117810bc call esi */
  call_ind((uint32_t)(ESI), 0x117810beu);
  /* 117810be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117810c1 push 0x117860b4 */
  push32((uint32_t)(0x117860b4u));
  /* 117810c6 push 0x11786528 */
  push32((uint32_t)(0x11786528u));
  /* 117810cb call esi */
  call_ind((uint32_t)(ESI), 0x117810cdu);
  /* 117810cd push 0x117860ac */
  push32((uint32_t)(0x117860acu));
  /* 117810d2 push 0x11786508 */
  push32((uint32_t)(0x11786508u));
  /* 117810d7 call esi */
  call_ind((uint32_t)(ESI), 0x117810d9u);
  /* 117810d9 push 0x117860a4 */
  push32((uint32_t)(0x117860a4u));
  /* 117810de push 0x11786510 */
  push32((uint32_t)(0x11786510u));
  /* 117810e3 call esi */
  call_ind((uint32_t)(ESI), 0x117810e5u);
  /* 117810e5 push 0x1178609c */
  push32((uint32_t)(0x1178609cu));
  /* 117810ea push 0x11786500 */
  push32((uint32_t)(0x11786500u));
  /* 117810ef call esi */
  call_ind((uint32_t)(ESI), 0x117810f1u);
  /* 117810f1 push 0x11786090 */
  push32((uint32_t)(0x11786090u));
  /* 117810f6 push 0x117864a0 */
  push32((uint32_t)(0x117864a0u));
  /* 117810fb call esi */
  call_ind((uint32_t)(ESI), 0x117810fdu);
  /* 117810fd push 0x11786088 */
  push32((uint32_t)(0x11786088u));
  /* 11781102 push 0x11786490 */
  push32((uint32_t)(0x11786490u));
  /* 11781107 call esi */
  call_ind((uint32_t)(ESI), 0x11781109u);
  /* 11781109 push 0x11786080 */
  push32((uint32_t)(0x11786080u));
  /* 1178110e push 0x11786498 */
  push32((uint32_t)(0x11786498u));
  /* 11781113 call esi */
  call_ind((uint32_t)(ESI), 0x11781115u);
  /* 11781115 mov esi, dword ptr [0x11785104] */
  ESI = (r32((uint32_t)(0x11785104)));
  /* 1178111b push 0x11786078 */
  push32((uint32_t)(0x11786078u));
  /* 11781120 push 0x117864b8 */
  push32((uint32_t)(0x117864b8u));
  /* 11781125 call esi */
  call_ind((uint32_t)(ESI), 0x11781127u);
  /* 11781127 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178112a push 0x11786070 */
  push32((uint32_t)(0x11786070u));
  /* 1178112f push 0x117864b0 */
  push32((uint32_t)(0x117864b0u));
  /* 11781134 call esi */
  call_ind((uint32_t)(ESI), 0x11781136u);
  /* 11781136 mov esi, dword ptr [0x11785108] */
  ESI = (r32((uint32_t)(0x11785108)));
  /* 1178113c push 0x11786060 */
  push32((uint32_t)(0x11786060u));
  /* 11781141 push 0x11786518 */
  push32((uint32_t)(0x11786518u));
  /* 11781146 call esi */
  call_ind((uint32_t)(ESI), 0x11781148u);
  /* 11781148 push 0x11786054 */
  push32((uint32_t)(0x11786054u));
  /* 1178114d push 0x117864d8 */
  push32((uint32_t)(0x117864d8u));
  /* 11781152 call esi */
  call_ind((uint32_t)(ESI), 0x11781154u);
  /* 11781154 mov esi, dword ptr [0x1178510c] */
  ESI = (r32((uint32_t)(0x1178510c)));
  /* 1178115a push 0x117864a8 */
  push32((uint32_t)(0x117864a8u));
  /* 1178115f call esi */
  call_ind((uint32_t)(ESI), 0x11781161u);
  /* 11781161 mov edi, dword ptr [0x11785110] */
  EDI = (r32((uint32_t)(0x11785110)));
  /* 11781167 push 8 */
  push32((uint32_t)(0x8u));
  /* 11781169 push 0x117864a8 */
  push32((uint32_t)(0x117864a8u));
  /* 1178116e call edi */
  call_ind((uint32_t)(EDI), 0x11781170u);
  /* 11781170 push 0x117864d0 */
  push32((uint32_t)(0x117864d0u));
  /* 11781175 call esi */
  call_ind((uint32_t)(ESI), 0x11781177u);
  /* 11781177 push 8 */
  push32((uint32_t)(0x8u));
  /* 11781179 push 0x117864d0 */
  push32((uint32_t)(0x117864d0u));
  /* 1178117e call edi */
  call_ind((uint32_t)(EDI), 0x11781180u);
  /* 11781180 push 0x117864c8 */
  push32((uint32_t)(0x117864c8u));
  /* 11781185 call esi */
  call_ind((uint32_t)(ESI), 0x11781187u);
  /* 11781187 push 8 */
  push32((uint32_t)(0x8u));
  /* 11781189 push 0x117864c8 */
  push32((uint32_t)(0x117864c8u));
  /* 1178118e call edi */
  call_ind((uint32_t)(EDI), 0x11781190u);
  /* 11781190 mov esi, dword ptr [0x11785114] */
  ESI = (r32((uint32_t)(0x11785114)));
  /* 11781196 push 0x11786048 */
  push32((uint32_t)(0x11786048u));
  /* 1178119b push 2 */
  push32((uint32_t)(0x2u));
  /* 1178119d call esi */
  call_ind((uint32_t)(ESI), 0x1178119fu);
  /* 1178119f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117811a2 push 0x11786040 */
  push32((uint32_t)(0x11786040u));
  /* 117811a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117811a9 call esi */
  call_ind((uint32_t)(ESI), 0x117811abu);
  /* 117811ab push 0x11786038 */
  push32((uint32_t)(0x11786038u));
  /* 117811b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 117811b2 call esi */
  call_ind((uint32_t)(ESI), 0x117811b4u);
  /* 117811b4 push 0x11786030 */
  push32((uint32_t)(0x11786030u));
  /* 117811b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 117811bb call esi */
  call_ind((uint32_t)(ESI), 0x117811bdu);
  /* 117811bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117811c0 pop edi */
  EDI = (pop32());
  /* 117811c1 pop esi */
  ESI = (pop32());
  /* 117811c2 ret  */
  ESPCHK(0x11781050u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x117811d0 (1733 bytes, 587 insns) */
void f_117811d0(void) {
  FTRACE(0x117811d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117811d0 push ebx */
  push32((uint32_t)(EBX));
  /* 117811d1 push ebp */
  push32((uint32_t)(EBP));
  /* 117811d2 push esi */
  push32((uint32_t)(ESI));
  /* 117811d3 mov esi, dword ptr [0x117850b0] */
  ESI = (r32((uint32_t)(0x117850b0)));
  /* 117811d9 push edi */
  push32((uint32_t)(EDI));
  /* 117811da push 1 */
  push32((uint32_t)(0x1u));
  /* 117811dc call esi */
  call_ind((uint32_t)(ESI), 0x117811deu);
  /* 117811de mov ebp, dword ptr [0x117850b4] */
  EBP = (r32((uint32_t)(0x117850b4)));
  /* 117811e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117811e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117811e9 je 0x11781578 */
  if (C.zf) goto L_11781578;
  /* 117811ef push 0 */
  push32((uint32_t)(0x0u));
  /* 117811f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 117811f3 call ebp */
  call_ind((uint32_t)(EBP), 0x117811f5u);
  /* 117811f5 mov esi, dword ptr [0x117850b8] */
  ESI = (r32((uint32_t)(0x117850b8)));
  /* 117811fb push 0x11786144 */
  push32((uint32_t)(0x11786144u));
  /* 11781200 call esi */
  call_ind((uint32_t)(ESI), 0x11781202u);
  /* 11781202 push 0x1178613c */
  push32((uint32_t)(0x1178613cu));
  /* 11781207 call esi */
  call_ind((uint32_t)(ESI), 0x11781209u);
  /* 11781209 call 0x11781000 */
  push32(0x1178120eu); f_11781000();
  /* 1178120e add eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781213 push eax */
  push32((uint32_t)(EAX));
  /* 11781214 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781216 call dword ptr [0x117850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850bc))), 0x1178121cu);
  /* 1178121c mov esi, dword ptr [0x117850c0] */
  ESI = (r32((uint32_t)(0x117850c0)));
  /* 11781222 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781227 push 3 */
  push32((uint32_t)(0x3u));
  /* 11781229 push 1 */
  push32((uint32_t)(0x1u));
  /* 1178122b call esi */
  call_ind((uint32_t)(ESI), 0x1178122du);
  /* 1178122d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781232 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781234 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781236 call esi */
  call_ind((uint32_t)(ESI), 0x11781238u);
  /* 11781238 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1178123d push 4 */
  push32((uint32_t)(0x4u));
  /* 1178123f push 1 */
  push32((uint32_t)(0x1u));
  /* 11781241 call esi */
  call_ind((uint32_t)(ESI), 0x11781243u);
  /* 11781243 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781248 push 5 */
  push32((uint32_t)(0x5u));
  /* 1178124a push 1 */
  push32((uint32_t)(0x1u));
  /* 1178124c call esi */
  call_ind((uint32_t)(ESI), 0x1178124eu);
  /* 1178124e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781251 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781256 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781258 push 1 */
  push32((uint32_t)(0x1u));
  /* 1178125a call esi */
  call_ind((uint32_t)(ESI), 0x1178125cu);
  /* 1178125c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781261 push 2 */
  push32((uint32_t)(0x2u));
  /* 11781263 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781265 call esi */
  call_ind((uint32_t)(ESI), 0x11781267u);
  /* 11781267 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1178126c push 3 */
  push32((uint32_t)(0x3u));
  /* 1178126e push 2 */
  push32((uint32_t)(0x2u));
  /* 11781270 call esi */
  call_ind((uint32_t)(ESI), 0x11781272u);
  /* 11781272 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781277 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781279 push 2 */
  push32((uint32_t)(0x2u));
  /* 1178127b call esi */
  call_ind((uint32_t)(ESI), 0x1178127du);
  /* 1178127d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 11781282 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781284 push 2 */
  push32((uint32_t)(0x2u));
  /* 11781286 call esi */
  call_ind((uint32_t)(ESI), 0x11781288u);
  /* 11781288 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1178128d push 5 */
  push32((uint32_t)(0x5u));
  /* 1178128f push 2 */
  push32((uint32_t)(0x2u));
  /* 11781291 call esi */
  call_ind((uint32_t)(ESI), 0x11781293u);
  /* 11781293 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781296 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1178129b push 0 */
  push32((uint32_t)(0x0u));
  /* 1178129d push 2 */
  push32((uint32_t)(0x2u));
  /* 1178129f call esi */
  call_ind((uint32_t)(ESI), 0x117812a1u);
  /* 117812a1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117812a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117812a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117812aa call esi */
  call_ind((uint32_t)(ESI), 0x117812acu);
  /* 117812ac mov edi, dword ptr [0x117850c4] */
  EDI = (r32((uint32_t)(0x117850c4)));
  /* 117812b2 push 0x11786134 */
  push32((uint32_t)(0x11786134u));
  /* 117812b7 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 117812bc call edi */
  call_ind((uint32_t)(EDI), 0x117812beu);
  /* 117812be mov ebx, dword ptr [0x117850c8] */
  EBX = (r32((uint32_t)(0x117850c8)));
  /* 117812c4 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 117812c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117812c8 call ebx */
  call_ind((uint32_t)(EBX), 0x117812cau);
  /* 117812ca push 0x26 */
  push32((uint32_t)(0x26u));
  /* 117812cc push 2 */
  push32((uint32_t)(0x2u));
  /* 117812ce call ebx */
  call_ind((uint32_t)(EBX), 0x117812d0u);
  /* 117812d0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117812d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117812d4 call ebx */
  call_ind((uint32_t)(EBX), 0x117812d6u);
  /* 117812d6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117812d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 117812da call ebx */
  call_ind((uint32_t)(EBX), 0x117812dcu);
  /* 117812dc add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117812df push 0x26 */
  push32((uint32_t)(0x26u));
  /* 117812e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 117812e3 call ebx */
  call_ind((uint32_t)(EBX), 0x117812e5u);
  /* 117812e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117812e7 call dword ptr [0x11785118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785118))), 0x117812edu);
  /* 117812ed mov ebx, dword ptr [0x117850cc] */
  EBX = (r32((uint32_t)(0x117850cc)));
  /* 117812f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117812f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117812f8 jne 0x11781364 */
  if (!C.zf) goto L_11781364;
  /* 117812fa push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 117812ff push 3 */
  push32((uint32_t)(0x3u));
  /* 11781301 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781303 call esi */
  call_ind((uint32_t)(ESI), 0x11781305u);
  /* 11781305 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1178130a push 1 */
  push32((uint32_t)(0x1u));
  /* 1178130c push 0 */
  push32((uint32_t)(0x0u));
  /* 1178130e call esi */
  call_ind((uint32_t)(ESI), 0x11781310u);
  /* 11781310 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11781315 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781317 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781319 call esi */
  call_ind((uint32_t)(ESI), 0x1178131bu);
  /* 1178131b push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11781320 push 5 */
  push32((uint32_t)(0x5u));
  /* 11781322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781324 call esi */
  call_ind((uint32_t)(ESI), 0x11781326u);
  /* 11781326 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1178132b push 0 */
  push32((uint32_t)(0x0u));
  /* 1178132d push 0 */
  push32((uint32_t)(0x0u));
  /* 1178132f call esi */
  call_ind((uint32_t)(ESI), 0x11781331u);
  /* 11781331 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 11781336 push 2 */
  push32((uint32_t)(0x2u));
  /* 11781338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1178133a call esi */
  call_ind((uint32_t)(ESI), 0x1178133cu);
  /* 1178133c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178133f push 1 */
  push32((uint32_t)(0x1u));
  /* 11781341 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781343 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781345 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781347 push 0x1178612c */
  push32((uint32_t)(0x1178612cu));
  /* 1178134c push 2 */
  push32((uint32_t)(0x2u));
  /* 1178134e call ebx */
  call_ind((uint32_t)(EBX), 0x11781350u);
  /* 11781350 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781352 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781354 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781356 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781358 push 0x11786120 */
  push32((uint32_t)(0x11786120u));
  /* 1178135d push 1 */
  push32((uint32_t)(0x1u));
  /* 1178135f call ebx */
  call_ind((uint32_t)(EBX), 0x11781361u);
  /* 11781361 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11781364:;
  /* 11781364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781366 call dword ptr [0x11785118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785118))), 0x1178136cu);
  /* 1178136c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178136f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781372 jne 0x117813fa */
  if (!C.zf) goto L_117813fa;
  /* 11781378 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1178137d push 3 */
  push32((uint32_t)(0x3u));
  /* 1178137f push 0 */
  push32((uint32_t)(0x0u));
  /* 11781381 call esi */
  call_ind((uint32_t)(ESI), 0x11781383u);
  /* 11781383 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11781388 push 1 */
  push32((uint32_t)(0x1u));
  /* 1178138a push 0 */
  push32((uint32_t)(0x0u));
  /* 1178138c call esi */
  call_ind((uint32_t)(ESI), 0x1178138eu);
  /* 1178138e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11781393 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781395 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781397 call esi */
  call_ind((uint32_t)(ESI), 0x11781399u);
  /* 11781399 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1178139e push 5 */
  push32((uint32_t)(0x5u));
  /* 117813a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117813a2 call esi */
  call_ind((uint32_t)(ESI), 0x117813a4u);
  /* 117813a4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117813a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117813ab push 0 */
  push32((uint32_t)(0x0u));
  /* 117813ad call esi */
  call_ind((uint32_t)(ESI), 0x117813afu);
  /* 117813af push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 117813b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 117813b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117813b8 call esi */
  call_ind((uint32_t)(ESI), 0x117813bau);
  /* 117813ba add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117813bd push 0x11786118 */
  push32((uint32_t)(0x11786118u));
  /* 117813c2 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 117813c7 call edi */
  call_ind((uint32_t)(EDI), 0x117813c9u);
  /* 117813c9 push 0x11786110 */
  push32((uint32_t)(0x11786110u));
  /* 117813ce push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 117813d3 call edi */
  call_ind((uint32_t)(EDI), 0x117813d5u);
  /* 117813d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117813d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117813d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 117813db push 0 */
  push32((uint32_t)(0x0u));
  /* 117813dd push 0x1178612c */
  push32((uint32_t)(0x1178612cu));
  /* 117813e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117813e4 call ebx */
  call_ind((uint32_t)(EBX), 0x117813e6u);
  /* 117813e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117813e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 117813ea push 1 */
  push32((uint32_t)(0x1u));
  /* 117813ec push 0 */
  push32((uint32_t)(0x0u));
  /* 117813ee push 0x11786120 */
  push32((uint32_t)(0x11786120u));
  /* 117813f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117813f5 call ebx */
  call_ind((uint32_t)(EBX), 0x117813f7u);
  /* 117813f7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117813fa:;
  /* 117813fa push 0 */
  push32((uint32_t)(0x0u));
  /* 117813fc call dword ptr [0x11785118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785118))), 0x11781402u);
  /* 11781402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781405 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781408 jne 0x11781490 */
  if (!C.zf) goto L_11781490;
  /* 1178140e push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11781413 push 3 */
  push32((uint32_t)(0x3u));
  /* 11781415 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781417 call esi */
  call_ind((uint32_t)(ESI), 0x11781419u);
  /* 11781419 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1178141e push 1 */
  push32((uint32_t)(0x1u));
  /* 11781420 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781422 call esi */
  call_ind((uint32_t)(ESI), 0x11781424u);
  /* 11781424 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11781429 push 4 */
  push32((uint32_t)(0x4u));
  /* 1178142b push 0 */
  push32((uint32_t)(0x0u));
  /* 1178142d call esi */
  call_ind((uint32_t)(ESI), 0x1178142fu);
  /* 1178142f push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 11781434 push 5 */
  push32((uint32_t)(0x5u));
  /* 11781436 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781438 call esi */
  call_ind((uint32_t)(ESI), 0x1178143au);
  /* 1178143a push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1178143f push 0 */
  push32((uint32_t)(0x0u));
  /* 11781441 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781443 call esi */
  call_ind((uint32_t)(ESI), 0x11781445u);
  /* 11781445 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 1178144a push 2 */
  push32((uint32_t)(0x2u));
  /* 1178144c push 0 */
  push32((uint32_t)(0x0u));
  /* 1178144e call esi */
  call_ind((uint32_t)(ESI), 0x11781450u);
  /* 11781450 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781453 push 0x11786118 */
  push32((uint32_t)(0x11786118u));
  /* 11781458 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 1178145d call edi */
  call_ind((uint32_t)(EDI), 0x1178145fu);
  /* 1178145f push 0x11786110 */
  push32((uint32_t)(0x11786110u));
  /* 11781464 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 11781469 call edi */
  call_ind((uint32_t)(EDI), 0x1178146bu);
  /* 1178146b push 3 */
  push32((uint32_t)(0x3u));
  /* 1178146d push 1 */
  push32((uint32_t)(0x1u));
  /* 1178146f push 1 */
  push32((uint32_t)(0x1u));
  /* 11781471 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781473 push 0x1178612c */
  push32((uint32_t)(0x1178612cu));
  /* 11781478 push 2 */
  push32((uint32_t)(0x2u));
  /* 1178147a call ebx */
  call_ind((uint32_t)(EBX), 0x1178147cu);
  /* 1178147c push 3 */
  push32((uint32_t)(0x3u));
  /* 1178147e push 1 */
  push32((uint32_t)(0x1u));
  /* 11781480 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781482 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781484 push 0x11786120 */
  push32((uint32_t)(0x11786120u));
  /* 11781489 push 1 */
  push32((uint32_t)(0x1u));
  /* 1178148b call ebx */
  call_ind((uint32_t)(EBX), 0x1178148du);
  /* 1178148d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11781490:;
  /* 11781490 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781492 call dword ptr [0x11785118] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785118))), 0x11781498u);
  /* 11781498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178149b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178149e jne 0x1178153d */
  if (!C.zf) goto L_1178153d;
  /* 117814a4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814a9 push eax */
  push32((uint32_t)(EAX));
  /* 117814aa push 0 */
  push32((uint32_t)(0x0u));
  /* 117814ac call esi */
  call_ind((uint32_t)(ESI), 0x117814aeu);
  /* 117814ae push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117814b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 117814b7 call esi */
  call_ind((uint32_t)(ESI), 0x117814b9u);
  /* 117814b9 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814be push 4 */
  push32((uint32_t)(0x4u));
  /* 117814c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117814c2 call esi */
  call_ind((uint32_t)(ESI), 0x117814c4u);
  /* 117814c4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 117814cb push 0 */
  push32((uint32_t)(0x0u));
  /* 117814cd call esi */
  call_ind((uint32_t)(ESI), 0x117814cfu);
  /* 117814cf push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117814d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117814d8 call esi */
  call_ind((uint32_t)(ESI), 0x117814dau);
  /* 117814da push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 117814df push 2 */
  push32((uint32_t)(0x2u));
  /* 117814e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117814e3 call esi */
  call_ind((uint32_t)(ESI), 0x117814e5u);
  /* 117814e5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117814e8 push 0x11786118 */
  push32((uint32_t)(0x11786118u));
  /* 117814ed push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 117814f2 call edi */
  call_ind((uint32_t)(EDI), 0x117814f4u);
  /* 117814f4 push 0x11786110 */
  push32((uint32_t)(0x11786110u));
  /* 117814f9 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 117814fe call edi */
  call_ind((uint32_t)(EDI), 0x11781500u);
  /* 11781500 push 0x11786118 */
  push32((uint32_t)(0x11786118u));
  /* 11781505 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 1178150a call edi */
  call_ind((uint32_t)(EDI), 0x1178150cu);
  /* 1178150c push 0x11786110 */
  push32((uint32_t)(0x11786110u));
  /* 11781511 push 0x117860c8 */
  push32((uint32_t)(0x117860c8u));
  /* 11781516 call edi */
  call_ind((uint32_t)(EDI), 0x11781518u);
  /* 11781518 push 3 */
  push32((uint32_t)(0x3u));
  /* 1178151a push 1 */
  push32((uint32_t)(0x1u));
  /* 1178151c push 1 */
  push32((uint32_t)(0x1u));
  /* 1178151e push 0 */
  push32((uint32_t)(0x0u));
  /* 11781520 push 0x1178612c */
  push32((uint32_t)(0x1178612cu));
  /* 11781525 push 2 */
  push32((uint32_t)(0x2u));
  /* 11781527 call ebx */
  call_ind((uint32_t)(EBX), 0x11781529u);
  /* 11781529 push 3 */
  push32((uint32_t)(0x3u));
  /* 1178152b push 1 */
  push32((uint32_t)(0x1u));
  /* 1178152d push 1 */
  push32((uint32_t)(0x1u));
  /* 1178152f push 0 */
  push32((uint32_t)(0x0u));
  /* 11781531 push 0x11786120 */
  push32((uint32_t)(0x11786120u));
  /* 11781536 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781538 call ebx */
  call_ind((uint32_t)(EBX), 0x1178153au);
  /* 1178153a add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1178153d:;
  /* 1178153d mov edi, dword ptr [0x117850d0] */
  EDI = (r32((uint32_t)(0x117850d0)));
  /* 11781543 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781545 push 0x11786480 */
  push32((uint32_t)(0x11786480u));
  /* 1178154a call edi */
  call_ind((uint32_t)(EDI), 0x1178154cu);
  /* 1178154c mov ebx, dword ptr [0x117850d4] */
  EBX = (r32((uint32_t)(0x117850d4)));
  /* 11781552 push 0x117864e0 */
  push32((uint32_t)(0x117864e0u));
  /* 11781557 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781559 call ebx */
  call_ind((uint32_t)(EBX), 0x1178155bu);
  /* 1178155b push 0 */
  push32((uint32_t)(0x0u));
  /* 1178155d push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 11781562 call edi */
  call_ind((uint32_t)(EDI), 0x11781564u);
  /* 11781564 push 0x117864e8 */
  push32((uint32_t)(0x117864e8u));
  /* 11781569 push 4 */
  push32((uint32_t)(0x4u));
  /* 1178156b call ebx */
  call_ind((uint32_t)(EBX), 0x1178156du);
  /* 1178156d mov esi, dword ptr [0x117850b0] */
  ESI = (r32((uint32_t)(0x117850b0)));
  /* 11781573 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781576 jmp 0x11781584 */
  goto L_11781584;
L_11781578:;
  /* 11781578 mov ebx, dword ptr [0x117850d4] */
  EBX = (r32((uint32_t)(0x117850d4)));
  /* 1178157e mov edi, dword ptr [0x117850d0] */
  EDI = (r32((uint32_t)(0x117850d0)));
L_11781584:;
  /* 11781584 push 2 */
  push32((uint32_t)(0x2u));
  /* 11781586 call esi */
  call_ind((uint32_t)(ESI), 0x11781588u);
  /* 11781588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178158b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178158d je 0x117815c6 */
  if (C.zf) goto L_117815c6;
  /* 1178158f push 0x117864e0 */
  push32((uint32_t)(0x117864e0u));
  /* 11781594 call dword ptr [0x117850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850d8))), 0x1178159au);
  /* 1178159a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178159d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178159f jne 0x117815c6 */
  if (!C.zf) goto L_117815c6;
  /* 117815a1 push eax */
  push32((uint32_t)(EAX));
  /* 117815a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117815a4 call ebp */
  call_ind((uint32_t)(EBP), 0x117815a6u);
  /* 117815a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117815a8 push 0x11786480 */
  push32((uint32_t)(0x11786480u));
  /* 117815ad call edi */
  call_ind((uint32_t)(EDI), 0x117815afu);
  /* 117815af push 0 */
  push32((uint32_t)(0x0u));
  /* 117815b1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117815b6 push 0x11786520 */
  push32((uint32_t)(0x11786520u));
  /* 117815bb push 4 */
  push32((uint32_t)(0x4u));
  /* 117815bd call dword ptr [0x117850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850dc))), 0x117815c3u);
  /* 117815c3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117815c6:;
  /* 117815c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 117815c8 call esi */
  call_ind((uint32_t)(ESI), 0x117815cau);
  /* 117815ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117815cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117815cf je 0x11781605 */
  if (C.zf) goto L_11781605;
  /* 117815d1 push 0x117864e8 */
  push32((uint32_t)(0x117864e8u));
  /* 117815d6 call dword ptr [0x117850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850d8))), 0x117815dcu);
  /* 117815dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117815df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117815e1 jne 0x11781605 */
  if (!C.zf) goto L_11781605;
  /* 117815e3 push eax */
  push32((uint32_t)(EAX));
  /* 117815e4 push 3 */
  push32((uint32_t)(0x3u));
  /* 117815e6 call ebp */
  call_ind((uint32_t)(EBP), 0x117815e8u);
  /* 117815e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117815ea push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 117815ef call edi */
  call_ind((uint32_t)(EDI), 0x117815f1u);
  /* 117815f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117815f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117815f5 push 0x11786528 */
  push32((uint32_t)(0x11786528u));
  /* 117815fa push 4 */
  push32((uint32_t)(0x4u));
  /* 117815fc call dword ptr [0x117850dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850dc))), 0x11781602u);
  /* 11781602 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11781605:;
  /* 11781605 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781607 call esi */
  call_ind((uint32_t)(ESI), 0x11781609u);
  /* 11781609 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178160c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178160e je 0x1178163d */
  if (C.zf) goto L_1178163d;
  /* 11781610 push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 11781615 push 0x11786528 */
  push32((uint32_t)(0x11786528u));
  /* 1178161a call dword ptr [0x117850e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850e0))), 0x11781620u);
  /* 11781620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781626 jne 0x1178163d */
  if (!C.zf) goto L_1178163d;
  /* 11781628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1178162a push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 1178162f call edi */
  call_ind((uint32_t)(EDI), 0x11781631u);
  /* 11781631 push 0x117864f8 */
  push32((uint32_t)(0x117864f8u));
  /* 11781636 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781638 call ebx */
  call_ind((uint32_t)(EBX), 0x1178163au);
  /* 1178163a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1178163d:;
  /* 1178163d push 6 */
  push32((uint32_t)(0x6u));
  /* 1178163f call esi */
  call_ind((uint32_t)(ESI), 0x11781641u);
  /* 11781641 mov esi, dword ptr [0x117850e4] */
  ESI = (r32((uint32_t)(0x117850e4)));
  /* 11781647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178164a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178164c je 0x11781677 */
  if (C.zf) goto L_11781677;
  /* 1178164e push 0 */
  push32((uint32_t)(0x0u));
  /* 11781650 call esi */
  call_ind((uint32_t)(ESI), 0x11781652u);
  /* 11781652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781655 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11781657 je 0x11781677 */
  if (C.zf) goto L_11781677;
  /* 11781659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1178165b push 6 */
  push32((uint32_t)(0x6u));
  /* 1178165d call ebp */
  call_ind((uint32_t)(EBP), 0x1178165fu);
  /* 1178165f mov ebx, dword ptr [0x117850b8] */
  EBX = (r32((uint32_t)(0x117850b8)));
  /* 11781665 push 0x11786108 */
  push32((uint32_t)(0x11786108u));
  /* 1178166a call ebx */
  call_ind((uint32_t)(EBX), 0x1178166cu);
  /* 1178166c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178166f call dword ptr [0x117850e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850e8))), 0x11781675u);
  /* 11781675 jmp 0x1178167d */
  goto L_1178167d;
L_11781677:;
  /* 11781677 mov ebx, dword ptr [0x117850b8] */
  EBX = (r32((uint32_t)(0x117850b8)));
L_1178167d:;
  /* 1178167d push 9 */
  push32((uint32_t)(0x9u));
  /* 1178167f call dword ptr [0x117850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850b0))), 0x11781685u);
  /* 11781685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781688 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178168a je 0x117816a7 */
  if (C.zf) goto L_117816a7;
  /* 1178168c push 1 */
  push32((uint32_t)(0x1u));
  /* 1178168e call esi */
  call_ind((uint32_t)(ESI), 0x11781690u);
  /* 11781690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781693 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11781695 je 0x117816a7 */
  if (C.zf) goto L_117816a7;
  /* 11781697 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781699 push 9 */
  push32((uint32_t)(0x9u));
  /* 1178169b call ebp */
  call_ind((uint32_t)(EBP), 0x1178169du);
  /* 1178169d push 0x11786100 */
  push32((uint32_t)(0x11786100u));
  /* 117816a2 call ebx */
  call_ind((uint32_t)(EBX), 0x117816a4u);
  /* 117816a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117816a7:;
  /* 117816a7 push 0xa */
  push32((uint32_t)(0xau));
  /* 117816a9 call dword ptr [0x117850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850b0))), 0x117816afu);
  /* 117816af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117816b2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117816b4 je 0x117816d1 */
  if (C.zf) goto L_117816d1;
  /* 117816b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 117816b8 call esi */
  call_ind((uint32_t)(ESI), 0x117816bau);
  /* 117816ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117816bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117816bf je 0x117816d1 */
  if (C.zf) goto L_117816d1;
  /* 117816c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117816c3 push 0xa */
  push32((uint32_t)(0xau));
  /* 117816c5 call ebp */
  call_ind((uint32_t)(EBP), 0x117816c7u);
  /* 117816c7 push 0x117860f8 */
  push32((uint32_t)(0x117860f8u));
  /* 117816cc call ebx */
  call_ind((uint32_t)(EBX), 0x117816ceu);
  /* 117816ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117816d1:;
  /* 117816d1 mov esi, dword ptr [0x117850b0] */
  ESI = (r32((uint32_t)(0x117850b0)));
  /* 117816d7 push 0xb */
  push32((uint32_t)(0xbu));
  /* 117816d9 call esi */
  call_ind((uint32_t)(ESI), 0x117816dbu);
  /* 117816db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117816de test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117816e0 je 0x1178170e */
  if (C.zf) goto L_1178170e;
  /* 117816e2 push 0xa */
  push32((uint32_t)(0xau));
  /* 117816e4 call esi */
  call_ind((uint32_t)(ESI), 0x117816e6u);
  /* 117816e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117816e9 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117816eb jne 0x1178170e */
  if (!C.zf) goto L_1178170e;
  /* 117816ed push 9 */
  push32((uint32_t)(0x9u));
  /* 117816ef call esi */
  call_ind((uint32_t)(ESI), 0x117816f1u);
  /* 117816f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117816f4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117816f6 jne 0x1178170e */
  if (!C.zf) goto L_1178170e;
  /* 117816f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117816fa push 0xb */
  push32((uint32_t)(0xbu));
  /* 117816fc call ebp */
  call_ind((uint32_t)(EBP), 0x117816feu);
  /* 117816fe push 0x117860f0 */
  push32((uint32_t)(0x117860f0u));
  /* 11781703 call ebx */
  call_ind((uint32_t)(EBX), 0x11781705u);
  /* 11781705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781708 call dword ptr [0x117850ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850ec))), 0x1178170eu);
L_1178170e:;
  /* 1178170e push 0xc */
  push32((uint32_t)(0xcu));
  /* 11781710 call esi */
  call_ind((uint32_t)(ESI), 0x11781712u);
  /* 11781712 mov esi, dword ptr [0x117850f0] */
  ESI = (r32((uint32_t)(0x117850f0)));
  /* 11781718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178171b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178171d je 0x1178174d */
  if (C.zf) goto L_1178174d;
  /* 1178171f push 0x117864f0 */
  push32((uint32_t)(0x117864f0u));
  /* 11781724 call dword ptr [0x117850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850d8))), 0x1178172au);
  /* 1178172a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178172d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178172f jne 0x1178174d */
  if (!C.zf) goto L_1178174d;
  /* 11781731 push eax */
  push32((uint32_t)(EAX));
  /* 11781732 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11781734 call ebp */
  call_ind((uint32_t)(EBP), 0x11781736u);
  /* 11781736 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781738 push 0x11786480 */
  push32((uint32_t)(0x11786480u));
  /* 1178173d call edi */
  call_ind((uint32_t)(EDI), 0x1178173fu);
  /* 1178173f push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11781741 push 0x11786508 */
  push32((uint32_t)(0x11786508u));
  /* 11781746 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781748 call esi */
  call_ind((uint32_t)(ESI), 0x1178174au);
  /* 1178174a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1178174d:;
  /* 1178174d push 0xd */
  push32((uint32_t)(0xdu));
  /* 1178174f call dword ptr [0x117850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850b0))), 0x11781755u);
  /* 11781755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781758 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178175a je 0x1178178a */
  if (C.zf) goto L_1178178a;
  /* 1178175c push 0x117864f8 */
  push32((uint32_t)(0x117864f8u));
  /* 11781761 call dword ptr [0x117850d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850d8))), 0x11781767u);
  /* 11781767 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178176a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178176c jne 0x1178178a */
  if (!C.zf) goto L_1178178a;
  /* 1178176e push eax */
  push32((uint32_t)(EAX));
  /* 1178176f push 0xd */
  push32((uint32_t)(0xdu));
  /* 11781771 call ebp */
  call_ind((uint32_t)(EBP), 0x11781773u);
  /* 11781773 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781775 push 0x11786488 */
  push32((uint32_t)(0x11786488u));
  /* 1178177a call edi */
  call_ind((uint32_t)(EDI), 0x1178177cu);
  /* 1178177c push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1178177e push 0x11786510 */
  push32((uint32_t)(0x11786510u));
  /* 11781783 push 4 */
  push32((uint32_t)(0x4u));
  /* 11781785 call esi */
  call_ind((uint32_t)(ESI), 0x11781787u);
  /* 11781787 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1178178a:;
  /* 1178178a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1178178c call dword ptr [0x117850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850b0))), 0x11781792u);
  /* 11781792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781795 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11781797 je 0x11781863 */
  if (C.zf) goto L_11781863;
  /* 1178179d push 1 */
  push32((uint32_t)(0x1u));
  /* 1178179f call dword ptr [0x117850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850f4))), 0x117817a5u);
  /* 117817a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117817a8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117817aa je 0x11781863 */
  if (C.zf) goto L_11781863;
  /* 117817b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117817b2 push 0xe */
  push32((uint32_t)(0xeu));
  /* 117817b4 call ebp */
  call_ind((uint32_t)(EBP), 0x117817b6u);
  /* 117817b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117817b8 push 0xd */
  push32((uint32_t)(0xdu));
  /* 117817ba call ebp */
  call_ind((uint32_t)(EBP), 0x117817bcu);
  /* 117817bc mov esi, dword ptr [0x117850f8] */
  ESI = (r32((uint32_t)(0x117850f8)));
  /* 117817c2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117817c4 push 0x11786500 */
  push32((uint32_t)(0x11786500u));
  /* 117817c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117817cb push 0x11786518 */
  push32((uint32_t)(0x11786518u));
  /* 117817d0 push 0x117864b0 */
  push32((uint32_t)(0x117864b0u));
  /* 117817d5 push 0x117864a8 */
  push32((uint32_t)(0x117864a8u));
  /* 117817da call esi */
  call_ind((uint32_t)(ESI), 0x117817dcu);
  /* 117817dc push 0x117860e8 */
  push32((uint32_t)(0x117860e8u));
  /* 117817e1 call ebx */
  call_ind((uint32_t)(EBX), 0x117817e3u);
  /* 117817e3 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117817e5 push 0x11786490 */
  push32((uint32_t)(0x11786490u));
  /* 117817ea push 5 */
  push32((uint32_t)(0x5u));
  /* 117817ec push 0x117864d8 */
  push32((uint32_t)(0x117864d8u));
  /* 117817f1 push 0x117864b8 */
  push32((uint32_t)(0x117864b8u));
  /* 117817f6 push 0x117864d0 */
  push32((uint32_t)(0x117864d0u));
  /* 117817fb call esi */
  call_ind((uint32_t)(ESI), 0x117817fdu);
  /* 117817fd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781800 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781802 push 0x117864d0 */
  push32((uint32_t)(0x117864d0u));
  /* 11781807 call edi */
  call_ind((uint32_t)(EDI), 0x11781809u);
  /* 11781809 mov ebx, dword ptr [0x117850dc] */
  EBX = (r32((uint32_t)(0x117850dc)));
  /* 1178180f push 0 */
  push32((uint32_t)(0x0u));
  /* 11781811 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781813 push 0x117864a0 */
  push32((uint32_t)(0x117864a0u));
  /* 11781818 push 5 */
  push32((uint32_t)(0x5u));
  /* 1178181a call ebx */
  call_ind((uint32_t)(EBX), 0x1178181cu);
  /* 1178181c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1178181e push 0x11786498 */
  push32((uint32_t)(0x11786498u));
  /* 11781823 push 5 */
  push32((uint32_t)(0x5u));
  /* 11781825 push 0x117864d8 */
  push32((uint32_t)(0x117864d8u));
  /* 1178182a push 0x117864b8 */
  push32((uint32_t)(0x117864b8u));
  /* 1178182f push 0x117864c8 */
  push32((uint32_t)(0x117864c8u));
  /* 11781834 call esi */
  call_ind((uint32_t)(ESI), 0x11781836u);
  /* 11781836 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781838 push 0x117864d0 */
  push32((uint32_t)(0x117864d0u));
  /* 1178183d call edi */
  call_ind((uint32_t)(EDI), 0x1178183fu);
  /* 1178183f push 0 */
  push32((uint32_t)(0x0u));
  /* 11781841 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11781846 push 0x117864a0 */
  push32((uint32_t)(0x117864a0u));
  /* 1178184b push 5 */
  push32((uint32_t)(0x5u));
  /* 1178184d call ebx */
  call_ind((uint32_t)(EBX), 0x1178184fu);
  /* 1178184f add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781852 call 0x11781000 */
  push32(0x11781857u); f_11781000();
  /* 11781857 push eax */
  push32((uint32_t)(EAX));
  /* 11781858 push 1 */
  push32((uint32_t)(0x1u));
  /* 1178185a call dword ptr [0x117850bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850bc))), 0x11781860u);
  /* 11781860 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11781863:;
  /* 11781863 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11781865 call dword ptr [0x117850b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850b0))), 0x1178186bu);
  /* 1178186b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178186e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11781870 je 0x11781890 */
  if (C.zf) goto L_11781890;
  /* 11781872 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781874 call dword ptr [0x117850f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850f4))), 0x1178187au);
  /* 1178187a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1178187d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178187f je 0x11781890 */
  if (C.zf) goto L_11781890;
  /* 11781881 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781883 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11781885 call ebp */
  call_ind((uint32_t)(EBP), 0x11781887u);
  /* 11781887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781889 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1178188b call ebp */
  call_ind((uint32_t)(EBP), 0x1178188du);
  /* 1178188d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11781890:;
  /* 11781890 pop edi */
  EDI = (pop32());
  /* 11781891 pop esi */
  ESI = (pop32());
  /* 11781892 pop ebp */
  EBP = (pop32());
  /* 11781893 pop ebx */
  EBX = (pop32());
  /* 11781894 ret  */
  ESPCHK(0x117811d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x117818a0 (20 bytes, 6 insns) */
void f_117818a0(void) {
  FTRACE(0x117818a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117818a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117818a4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117818a5 jne 0x117818ac */
  if (!C.zf) goto L_117818ac;
  /* 117818a7 call 0x11781050 */
  push32(0x117818acu); f_11781050();
L_117818ac:;
  /* 117818ac mov eax, 1 */
  EAX = (0x1u);
  /* 117818b1 ret 0xc */
  ESPCHK(0x117818a0u, _esp0);
  ESP += 16; return;
}

/* FUN_100018c0 @ 0x117818c0 (217 bytes, 57 insns) */
void f_117818c0(void) {
  FTRACE(0x117818c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117818c0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117818c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117818c7 jne 0x11781955 */
  if (!C.zf) goto L_11781955;
  /* 117818cd call dword ptr [0x11785060] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785060))), 0x117818d3u);
  /* 117818d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117818d5 mov dword ptr [0x1178654c], eax */
  w32((uint32_t)(0x1178654c), (EAX));
  /* 117818da call 0x117822f4 */
  push32(0x117818dfu); f_117822f4();
  /* 117818df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117818e1 pop ecx */
  ECX = (pop32());
  /* 117818e2 je 0x11781920 */
  if (C.zf) goto L_11781920;
  /* 117818e4 mov eax, dword ptr [0x1178654c] */
  EAX = (r32((uint32_t)(0x1178654c)));
  /* 117818e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117818eb mov cl, byte ptr [0x1178654d] */
  CL = (r8((uint32_t)(0x1178654d)));
  /* 117818f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117818f6 shr dword ptr [0x1178654c], 0x10 */
  w32((uint32_t)(0x1178654c), (sh_shr((uint32_t)(r32((uint32_t)(0x1178654c))), (0x10u)&0x1f, 32)));
  /* 117818fd mov dword ptr [0x11786554], eax */
  w32((uint32_t)(0x11786554), (EAX));
  /* 11781902 mov dword ptr [0x11786558], ecx */
  w32((uint32_t)(0x11786558), (ECX));
  /* 11781908 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1178190b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178190d mov dword ptr [0x11786550], eax */
  w32((uint32_t)(0x11786550), (EAX));
  /* 11781912 call 0x11781b87 */
  push32(0x11781917u); f_11781b87();
  /* 11781917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781919 jne 0x11781924 */
  if (!C.zf) goto L_11781924;
  /* 1178191b call 0x11782330 */
  push32(0x11781920u); f_11782330();
L_11781920:;
  /* 11781920 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11781922 jmp 0x11781996 */
  goto L_11781996;
L_11781924:;
  /* 11781924 call dword ptr [0x1178505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178505c))), 0x1178192au);
  /* 1178192a mov dword ptr [0x11786ab8], eax */
  w32((uint32_t)(0x11786ab8), (EAX));
  /* 1178192f call 0x117821c2 */
  push32(0x11781934u); f_117821c2();
  /* 11781934 mov dword ptr [0x11786538], eax */
  w32((uint32_t)(0x11786538), (EAX));
  /* 11781939 call 0x11781cac */
  push32(0x1178193eu); f_11781cac();
  /* 1178193e call 0x11781f75 */
  push32(0x11781943u); f_11781f75();
  /* 11781943 call 0x11781ebc */
  push32(0x11781948u); f_11781ebc();
  /* 11781948 call 0x11781a69 */
  push32(0x1178194du); f_11781a69();
  /* 1178194d inc dword ptr [0x11786534] */
  { uint32_t _r=(r32((uint32_t)(0x11786534)))+1; w32((uint32_t)(0x11786534), (_r)); fl_inc(_r,32); }
  /* 11781953 jmp 0x11781993 */
  goto L_11781993;
L_11781955:;
  /* 11781955 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11781957 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781959 jne 0x11781987 */
  if (!C.zf) goto L_11781987;
  /* 1178195b cmp dword ptr [0x11786534], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11786534))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781961 jle 0x11781920 */
  if ((C.zf||C.sf!=C.of)) goto L_11781920;
  /* 11781963 dec dword ptr [0x11786534] */
  { uint32_t _r=(r32((uint32_t)(0x11786534)))-1; w32((uint32_t)(0x11786534), (_r)); fl_dec(_r,32); }
  /* 11781969 cmp dword ptr [0x11786584], ecx */
  { uint32_t _a=(r32((uint32_t)(0x11786584))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178196f jne 0x11781976 */
  if (!C.zf) goto L_11781976;
  /* 11781971 call 0x11781aa7 */
  push32(0x11781976u); f_11781aa7();
L_11781976:;
  /* 11781976 call 0x11781e68 */
  push32(0x1178197bu); f_11781e68();
  /* 1178197b call 0x11781bdb */
  push32(0x11781980u); f_11781bdb();
  /* 11781980 call 0x11782330 */
  push32(0x11781985u); f_11782330();
  /* 11781985 jmp 0x11781993 */
  goto L_11781993;
L_11781987:;
  /* 11781987 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178198a jne 0x11781993 */
  if (!C.zf) goto L_11781993;
  /* 1178198c push ecx */
  push32((uint32_t)(ECX));
  /* 1178198d call 0x11781c0c */
  push32(0x11781992u); f_11781c0c();
  /* 11781992 pop ecx */
  ECX = (pop32());
L_11781993:;
  /* 11781993 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781995 pop eax */
  EAX = (pop32());
L_11781996:;
  /* 11781996 ret 0xc */
  ESPCHK(0x117818c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11781999 (157 bytes, 73 insns) */
void f_11781999(void) {
  FTRACE(0x11781999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781999 push ebp */
  push32((uint32_t)(EBP));
  /* 1178199a mov ebp, esp */
  EBP = (ESP);
  /* 1178199c push ebx */
  push32((uint32_t)(EBX));
  /* 1178199d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117819a0 push esi */
  push32((uint32_t)(ESI));
  /* 117819a1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117819a4 push edi */
  push32((uint32_t)(EDI));
  /* 117819a5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 117819a8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117819aa jne 0x117819b5 */
  if (!C.zf) goto L_117819b5;
  /* 117819ac cmp dword ptr [0x11786534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11786534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117819b3 jmp 0x117819db */
  goto L_117819db;
L_117819b5:;
  /* 117819b5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117819b8 je 0x117819bf */
  if (C.zf) goto L_117819bf;
  /* 117819ba cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117819bd jne 0x117819e1 */
  if (!C.zf) goto L_117819e1;
L_117819bf:;
  /* 117819bf mov eax, dword ptr [0x11786abc] */
  EAX = (r32((uint32_t)(0x11786abc)));
  /* 117819c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117819c6 je 0x117819d1 */
  if (C.zf) goto L_117819d1;
  /* 117819c8 push edi */
  push32((uint32_t)(EDI));
  /* 117819c9 push esi */
  push32((uint32_t)(ESI));
  /* 117819ca push ebx */
  push32((uint32_t)(EBX));
  /* 117819cb call eax */
  call_ind((uint32_t)(EAX), 0x117819cdu);
  /* 117819cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117819cf je 0x117819dd */
  if (C.zf) goto L_117819dd;
L_117819d1:;
  /* 117819d1 push edi */
  push32((uint32_t)(EDI));
  /* 117819d2 push esi */
  push32((uint32_t)(ESI));
  /* 117819d3 push ebx */
  push32((uint32_t)(EBX));
  /* 117819d4 call 0x117818c0 */
  push32(0x117819d9u); f_117818c0();
  /* 117819d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_117819db:;
  /* 117819db jne 0x117819e1 */
  if (!C.zf) goto L_117819e1;
L_117819dd:;
  /* 117819dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117819df jmp 0x11781a2f */
  goto L_11781a2f;
L_117819e1:;
  /* 117819e1 push edi */
  push32((uint32_t)(EDI));
  /* 117819e2 push esi */
  push32((uint32_t)(ESI));
  /* 117819e3 push ebx */
  push32((uint32_t)(EBX));
  /* 117819e4 call 0x117818a0 */
  push32(0x117819e9u); f_117818a0();
  /* 117819e9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117819ec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117819ef jne 0x117819fd */
  if (!C.zf) goto L_117819fd;
  /* 117819f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117819f3 jne 0x11781a2c */
  if (!C.zf) goto L_11781a2c;
  /* 117819f5 push edi */
  push32((uint32_t)(EDI));
  /* 117819f6 push eax */
  push32((uint32_t)(EAX));
  /* 117819f7 push ebx */
  push32((uint32_t)(EBX));
  /* 117819f8 call 0x117818c0 */
  push32(0x117819fdu); f_117818c0();
L_117819fd:;
  /* 117819fd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117819ff je 0x11781a06 */
  if (C.zf) goto L_11781a06;
  /* 11781a01 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781a04 jne 0x11781a2c */
  if (!C.zf) goto L_11781a2c;
L_11781a06:;
  /* 11781a06 push edi */
  push32((uint32_t)(EDI));
  /* 11781a07 push esi */
  push32((uint32_t)(ESI));
  /* 11781a08 push ebx */
  push32((uint32_t)(EBX));
  /* 11781a09 call 0x117818c0 */
  push32(0x11781a0eu); f_117818c0();
  /* 11781a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781a10 jne 0x11781a15 */
  if (!C.zf) goto L_11781a15;
  /* 11781a12 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_11781a15:;
  /* 11781a15 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781a19 je 0x11781a2c */
  if (C.zf) goto L_11781a2c;
  /* 11781a1b mov eax, dword ptr [0x11786abc] */
  EAX = (r32((uint32_t)(0x11786abc)));
  /* 11781a20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781a22 je 0x11781a2c */
  if (C.zf) goto L_11781a2c;
  /* 11781a24 push edi */
  push32((uint32_t)(EDI));
  /* 11781a25 push esi */
  push32((uint32_t)(ESI));
  /* 11781a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11781a27 call eax */
  call_ind((uint32_t)(EAX), 0x11781a29u);
  /* 11781a29 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11781a2c:;
  /* 11781a2c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11781a2f:;
  /* 11781a2f pop edi */
  EDI = (pop32());
  /* 11781a30 pop esi */
  ESI = (pop32());
  /* 11781a31 pop ebx */
  EBX = (pop32());
  /* 11781a32 pop ebp */
  EBP = (pop32());
  /* 11781a33 ret 0xc */
  ESPCHK(0x11781999u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x11781a36 (48 bytes, 15 insns) */
void f_11781a36(void) {
  FTRACE(0x11781a36u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781a36 mov eax, dword ptr [0x11786540] */
  EAX = (r32((uint32_t)(0x11786540)));
  /* 11781a3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781a3e je 0x11781a4d */
  if (C.zf) goto L_11781a4d;
  /* 11781a40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781a42 jne 0x11781a52 */
  if (!C.zf) goto L_11781a52;
  /* 11781a44 cmp dword ptr [0x11786544], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11786544))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781a4b jne 0x11781a52 */
  if (!C.zf) goto L_11781a52;
L_11781a4d:;
  /* 11781a4d call 0x117823a5 */
  push32(0x11781a52u); f_117823a5();
L_11781a52:;
  /* 11781a52 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11781a56 call 0x117823de */
  push32(0x11781a5bu); f_117823de();
  /* 11781a5b push 0xff */
  push32((uint32_t)(0xffu));
  /* 11781a60 call dword ptr [0x1178614c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178614c))), 0x11781a66u);
  /* 11781a66 pop ecx */
  ECX = (pop32());
  /* 11781a67 pop ecx */
  ECX = (pop32());
  /* 11781a68 ret  */
  ESPCHK(0x11781a36u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a69 @ 0x11781a69 (45 bytes, 12 insns) */
void f_11781a69(void) {
  FTRACE(0x11781a69u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781a69 mov eax, dword ptr [0x11786ab4] */
  EAX = (r32((uint32_t)(0x11786ab4)));
  /* 11781a6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781a70 je 0x11781a74 */
  if (C.zf) goto L_11781a74;
  /* 11781a72 call eax */
  call_ind((uint32_t)(EAX), 0x11781a74u);
L_11781a74:;
  /* 11781a74 push 0x11786010 */
  push32((uint32_t)(0x11786010u));
  /* 11781a79 push 0x11786008 */
  push32((uint32_t)(0x11786008u));
  /* 11781a7e call 0x11781b6d */
  push32(0x11781a83u); f_11781b6d();
  /* 11781a83 push 0x11786004 */
  push32((uint32_t)(0x11786004u));
  /* 11781a88 push 0x11786000 */
  push32((uint32_t)(0x11786000u));
  /* 11781a8d call 0x11781b6d */
  push32(0x11781a92u); f_11781b6d();
  /* 11781a92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781a95 ret  */
  ESPCHK(0x11781a69u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11781a96 (17 bytes, 6 insns) */
void f_11781a96(void) {
  FTRACE(0x11781a96u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781a9a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11781a9e call 0x11781ab6 */
  push32(0x11781aa3u); f_11781ab6();
  /* 11781aa3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781aa6 ret  */
  ESPCHK(0x11781a96u, _esp0);
  ESP += 4; return;
}

/* FUN_10001aa7 @ 0x11781aa7 (15 bytes, 6 insns) */
void f_11781aa7(void) {
  FTRACE(0x11781aa7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781aa7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11781aab push 0 */
  push32((uint32_t)(0x0u));
  /* 11781aad call 0x11781ab6 */
  push32(0x11781ab2u); f_11781ab6();
  /* 11781ab2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781ab5 ret  */
  ESPCHK(0x11781aa7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ab6 @ 0x11781ab6 (163 bytes, 53 insns) */
void f_11781ab6(void) {
  FTRACE(0x11781ab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781ab6 push edi */
  push32((uint32_t)(EDI));
  /* 11781ab7 call 0x11781b5b */
  push32(0x11781abcu); f_11781b5b();
  /* 11781abc push 1 */
  push32((uint32_t)(0x1u));
  /* 11781abe pop edi */
  EDI = (pop32());
  /* 11781abf cmp dword ptr [0x11786588], edi */
  { uint32_t _a=(r32((uint32_t)(0x11786588))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781ac5 jne 0x11781ad8 */
  if (!C.zf) goto L_11781ad8;
  /* 11781ac7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11781acb call dword ptr [0x1178506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178506c))), 0x11781ad1u);
  /* 11781ad1 push eax */
  push32((uint32_t)(EAX));
  /* 11781ad2 call dword ptr [0x11785068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785068))), 0x11781ad8u);
L_11781ad8:;
  /* 11781ad8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781add push ebx */
  push32((uint32_t)(EBX));
  /* 11781ade mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11781ae2 mov dword ptr [0x11786584], edi */
  w32((uint32_t)(0x11786584), (EDI));
  /* 11781ae8 mov byte ptr [0x11786580], bl */
  w8((uint32_t)(0x11786580), (BL));
  /* 11781aee jne 0x11781b2c */
  if (!C.zf) goto L_11781b2c;
  /* 11781af0 mov eax, dword ptr [0x11786ab0] */
  EAX = (r32((uint32_t)(0x11786ab0)));
  /* 11781af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781af7 je 0x11781b1b */
  if (C.zf) goto L_11781b1b;
  /* 11781af9 mov ecx, dword ptr [0x11786aac] */
  ECX = (r32((uint32_t)(0x11786aac)));
  /* 11781aff push esi */
  push32((uint32_t)(ESI));
  /* 11781b00 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 11781b03 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781b05 jb 0x11781b1a */
  if (C.cf) goto L_11781b1a;
L_11781b07:;
  /* 11781b07 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11781b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781b0b je 0x11781b0f */
  if (C.zf) goto L_11781b0f;
  /* 11781b0d call eax */
  call_ind((uint32_t)(EAX), 0x11781b0fu);
L_11781b0f:;
  /* 11781b0f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11781b12 cmp esi, dword ptr [0x11786ab0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11786ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781b18 jae 0x11781b07 */
  if (!C.cf) goto L_11781b07;
L_11781b1a:;
  /* 11781b1a pop esi */
  ESI = (pop32());
L_11781b1b:;
  /* 11781b1b push 0x11786018 */
  push32((uint32_t)(0x11786018u));
  /* 11781b20 push 0x11786014 */
  push32((uint32_t)(0x11786014u));
  /* 11781b25 call 0x11781b6d */
  push32(0x11781b2au); f_11781b6d();
  /* 11781b2a pop ecx */
  ECX = (pop32());
  /* 11781b2b pop ecx */
  ECX = (pop32());
L_11781b2c:;
  /* 11781b2c push 0x11786020 */
  push32((uint32_t)(0x11786020u));
  /* 11781b31 push 0x1178601c */
  push32((uint32_t)(0x1178601cu));
  /* 11781b36 call 0x11781b6d */
  push32(0x11781b3bu); f_11781b6d();
  /* 11781b3b pop ecx */
  ECX = (pop32());
  /* 11781b3c pop ecx */
  ECX = (pop32());
  /* 11781b3d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11781b3f pop ebx */
  EBX = (pop32());
  /* 11781b40 je 0x11781b49 */
  if (C.zf) goto L_11781b49;
  /* 11781b42 call 0x11781b64 */
  push32(0x11781b47u); f_11781b64();
  /* 11781b47 pop edi */
  EDI = (pop32());
  /* 11781b48 ret  */
  ESPCHK(0x11781ab6u, _esp0);
  ESP += 4; return;
L_11781b49:;
  /* 11781b49 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11781b4d mov dword ptr [0x11786588], edi */
  w32((uint32_t)(0x11786588), (EDI));
  /* 11781b53 call dword ptr [0x11785064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785064))), 0x11781b59u);
  /* 11781b59 pop edi */
  EDI = (pop32());
  /* 11781b5a ret  */
  ESPCHK(0x11781ab6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b5b @ 0x11781b5b (9 bytes, 4 insns) */
void f_11781b5b(void) {
  FTRACE(0x11781b5bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781b5b push 0xd */
  push32((uint32_t)(0xdu));
  /* 11781b5d call 0x117825c6 */
  push32(0x11781b62u); f_117825c6();
  /* 11781b62 pop ecx */
  ECX = (pop32());
  /* 11781b63 ret  */
  ESPCHK(0x11781b5bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001b64 @ 0x11781b64 (9 bytes, 4 insns) */
void f_11781b64(void) {
  FTRACE(0x11781b64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781b64 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11781b66 call 0x11782627 */
  push32(0x11781b6bu); f_11782627();
  /* 11781b6b pop ecx */
  ECX = (pop32());
  /* 11781b6c ret  */
  ESPCHK(0x11781b64u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b6d @ 0x11781b6d (26 bytes, 12 insns) */
void f_11781b6d(void) {
  FTRACE(0x11781b6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781b6d push esi */
  push32((uint32_t)(ESI));
  /* 11781b6e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_11781b72:;
  /* 11781b72 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781b76 jae 0x11781b85 */
  if (!C.cf) goto L_11781b85;
  /* 11781b78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11781b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781b7c je 0x11781b80 */
  if (C.zf) goto L_11781b80;
  /* 11781b7e call eax */
  call_ind((uint32_t)(EAX), 0x11781b80u);
L_11781b80:;
  /* 11781b80 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781b83 jmp 0x11781b72 */
  goto L_11781b72;
L_11781b85:;
  /* 11781b85 pop esi */
  ESI = (pop32());
  /* 11781b86 ret  */
  ESPCHK(0x11781b6du, _esp0);
  ESP += 4; return;
}

/* FUN_10001b87 @ 0x11781b87 (84 bytes, 32 insns) */
void f_11781b87(void) {
  FTRACE(0x11781b87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781b87 push esi */
  push32((uint32_t)(ESI));
  /* 11781b88 call 0x11782531 */
  push32(0x11781b8du); f_11782531();
  /* 11781b8d call dword ptr [0x11785078] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785078))), 0x11781b93u);
  /* 11781b93 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781b96 mov dword ptr [0x11786150], eax */
  w32((uint32_t)(0x11786150), (EAX));
  /* 11781b9b je 0x11781bd7 */
  if (C.zf) goto L_11781bd7;
  /* 11781b9d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11781b9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11781ba1 call 0x1178263c */
  push32(0x11781ba6u); f_1178263c();
  /* 11781ba6 mov esi, eax */
  ESI = (EAX);
  /* 11781ba8 pop ecx */
  ECX = (pop32());
  /* 11781ba9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11781bab pop ecx */
  ECX = (pop32());
  /* 11781bac je 0x11781bd7 */
  if (C.zf) goto L_11781bd7;
  /* 11781bae push esi */
  push32((uint32_t)(ESI));
  /* 11781baf push dword ptr [0x11786150] */
  push32((uint32_t)(r32((uint32_t)(0x11786150))));
  /* 11781bb5 call dword ptr [0x11785074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785074))), 0x11781bbbu);
  /* 11781bbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781bbd je 0x11781bd7 */
  if (C.zf) goto L_11781bd7;
  /* 11781bbf push esi */
  push32((uint32_t)(ESI));
  /* 11781bc0 call 0x11781bf9 */
  push32(0x11781bc5u); f_11781bf9();
  /* 11781bc5 pop ecx */
  ECX = (pop32());
  /* 11781bc6 call dword ptr [0x11785070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785070))), 0x11781bccu);
  /* 11781bcc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11781bd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11781bd2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11781bd4 pop eax */
  EAX = (pop32());
  /* 11781bd5 pop esi */
  ESI = (pop32());
  /* 11781bd6 ret  */
  ESPCHK(0x11781b87u, _esp0);
  ESP += 4; return;
L_11781bd7:;
  /* 11781bd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11781bd9 pop esi */
  ESI = (pop32());
  /* 11781bda ret  */
  ESPCHK(0x11781b87u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bdb @ 0x11781bdb (30 bytes, 8 insns) */
void f_11781bdb(void) {
  FTRACE(0x11781bdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781bdb call 0x1178255a */
  push32(0x11781be0u); f_1178255a();
  /* 11781be0 mov eax, dword ptr [0x11786150] */
  EAX = (r32((uint32_t)(0x11786150)));
  /* 11781be5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781be8 je 0x11781bf8 */
  if (C.zf) goto L_11781bf8;
  /* 11781bea push eax */
  push32((uint32_t)(EAX));
  /* 11781beb call dword ptr [0x1178507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178507c))), 0x11781bf1u);
  /* 11781bf1 or dword ptr [0x11786150], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x11786150)))|(0xffffffffu); w32((uint32_t)(0x11786150), (_r)); fl_logic(_r,32); }
L_11781bf8:;
  /* 11781bf8 ret  */
  ESPCHK(0x11781bdbu, _esp0);
  ESP += 4; return;
}

/* FUN_10001bf9 @ 0x11781bf9 (19 bytes, 4 insns) */
void f_11781bf9(void) {
  FTRACE(0x11781bf9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781bf9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11781bfd mov dword ptr [eax + 0x50], 0x117862d0 */
  w32((uint32_t)(EAX + 0x50), (0x117862d0u));
  /* 11781c04 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 11781c0b ret  */
  ESPCHK(0x11781bf9u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c0c @ 0x11781c0c (160 bytes, 62 insns) */
void f_11781c0c(void) {
  FTRACE(0x11781c0cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781c0c mov eax, dword ptr [0x11786150] */
  EAX = (r32((uint32_t)(0x11786150)));
  /* 11781c11 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781c14 je 0x11781cab */
  if (C.zf) goto L_11781cab;
  /* 11781c1a push esi */
  push32((uint32_t)(ESI));
  /* 11781c1b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11781c1f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11781c21 jne 0x11781c30 */
  if (!C.zf) goto L_11781c30;
  /* 11781c23 push eax */
  push32((uint32_t)(EAX));
  /* 11781c24 call dword ptr [0x11785000] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785000))), 0x11781c2au);
  /* 11781c2a mov esi, eax */
  ESI = (EAX);
  /* 11781c2c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11781c2e je 0x11781c9c */
  if (C.zf) goto L_11781c9c;
L_11781c30:;
  /* 11781c30 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11781c33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c35 je 0x11781c3e */
  if (C.zf) goto L_11781c3e;
  /* 11781c37 push eax */
  push32((uint32_t)(EAX));
  /* 11781c38 call 0x117826c9 */
  push32(0x11781c3du); f_117826c9();
  /* 11781c3d pop ecx */
  ECX = (pop32());
L_11781c3e:;
  /* 11781c3e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11781c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c43 je 0x11781c4c */
  if (C.zf) goto L_11781c4c;
  /* 11781c45 push eax */
  push32((uint32_t)(EAX));
  /* 11781c46 call 0x117826c9 */
  push32(0x11781c4bu); f_117826c9();
  /* 11781c4b pop ecx */
  ECX = (pop32());
L_11781c4c:;
  /* 11781c4c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 11781c4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c51 je 0x11781c5a */
  if (C.zf) goto L_11781c5a;
  /* 11781c53 push eax */
  push32((uint32_t)(EAX));
  /* 11781c54 call 0x117826c9 */
  push32(0x11781c59u); f_117826c9();
  /* 11781c59 pop ecx */
  ECX = (pop32());
L_11781c5a:;
  /* 11781c5a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 11781c5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c5f je 0x11781c68 */
  if (C.zf) goto L_11781c68;
  /* 11781c61 push eax */
  push32((uint32_t)(EAX));
  /* 11781c62 call 0x117826c9 */
  push32(0x11781c67u); f_117826c9();
  /* 11781c67 pop ecx */
  ECX = (pop32());
L_11781c68:;
  /* 11781c68 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 11781c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c6d je 0x11781c76 */
  if (C.zf) goto L_11781c76;
  /* 11781c6f push eax */
  push32((uint32_t)(EAX));
  /* 11781c70 call 0x117826c9 */
  push32(0x11781c75u); f_117826c9();
  /* 11781c75 pop ecx */
  ECX = (pop32());
L_11781c76:;
  /* 11781c76 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 11781c79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781c7b je 0x11781c84 */
  if (C.zf) goto L_11781c84;
  /* 11781c7d push eax */
  push32((uint32_t)(EAX));
  /* 11781c7e call 0x117826c9 */
  push32(0x11781c83u); f_117826c9();
  /* 11781c83 pop ecx */
  ECX = (pop32());
L_11781c84:;
  /* 11781c84 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 11781c87 cmp eax, 0x117862d0 */
  { uint32_t _a=(EAX),_b=(0x117862d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781c8c je 0x11781c95 */
  if (C.zf) goto L_11781c95;
  /* 11781c8e push eax */
  push32((uint32_t)(EAX));
  /* 11781c8f call 0x117826c9 */
  push32(0x11781c94u); f_117826c9();
  /* 11781c94 pop ecx */
  ECX = (pop32());
L_11781c95:;
  /* 11781c95 push esi */
  push32((uint32_t)(ESI));
  /* 11781c96 call 0x117826c9 */
  push32(0x11781c9bu); f_117826c9();
  /* 11781c9b pop ecx */
  ECX = (pop32());
L_11781c9c:;
  /* 11781c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11781c9e push dword ptr [0x11786150] */
  push32((uint32_t)(r32((uint32_t)(0x11786150))));
  /* 11781ca4 call dword ptr [0x11785074] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785074))), 0x11781caau);
  /* 11781caa pop esi */
  ESI = (pop32());
L_11781cab:;
  /* 11781cab ret  */
  ESPCHK(0x11781c0cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001cac @ 0x11781cac (444 bytes, 150 insns) */
void f_11781cac(void) {
  FTRACE(0x11781cacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781cac push ebp */
  push32((uint32_t)(EBP));
  /* 11781cad mov ebp, esp */
  EBP = (ESP);
  /* 11781caf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11781cb2 push ebx */
  push32((uint32_t)(EBX));
  /* 11781cb3 push esi */
  push32((uint32_t)(ESI));
  /* 11781cb4 push edi */
  push32((uint32_t)(EDI));
  /* 11781cb5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11781cba call 0x11782711 */
  push32(0x11781cbfu); f_11782711();
  /* 11781cbf mov esi, eax */
  ESI = (EAX);
  /* 11781cc1 pop ecx */
  ECX = (pop32());
  /* 11781cc2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11781cc4 jne 0x11781cce */
  if (!C.zf) goto L_11781cce;
  /* 11781cc6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11781cc8 call 0x11781a36 */
  push32(0x11781ccdu); f_11781a36();
  /* 11781ccd pop ecx */
  ECX = (pop32());
L_11781cce:;
  /* 11781cce mov dword ptr [0x117869a0], esi */
  w32((uint32_t)(0x117869a0), (ESI));
  /* 11781cd4 mov dword ptr [0x11786aa0], 0x20 */
  w32((uint32_t)(0x11786aa0), (0x20u));
  /* 11781cde lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_11781ce4:;
  /* 11781ce4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781ce6 jae 0x11781d06 */
  if (!C.cf) goto L_11781d06;
  /* 11781ce8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11781cec or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11781cef and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11781cf3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 11781cf7 mov eax, dword ptr [0x117869a0] */
  EAX = (r32((uint32_t)(0x117869a0)));
  /* 11781cfc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781cff add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781d04 jmp 0x11781ce4 */
  goto L_11781ce4;
L_11781d06:;
  /* 11781d06 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 11781d09 push eax */
  push32((uint32_t)(EAX));
  /* 11781d0a call dword ptr [0x11785094] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785094))), 0x11781d10u);
  /* 11781d10 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11781d15 je 0x11781dec */
  if (C.zf) goto L_11781dec;
  /* 11781d1b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11781d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781d20 je 0x11781dec */
  if (C.zf) goto L_11781dec;
  /* 11781d26 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 11781d28 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 11781d2b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 11781d2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11781d31 mov eax, 0x800 */
  EAX = (0x800u);
  /* 11781d36 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781d38 jl 0x11781d3c */
  if ((C.sf!=C.of)) goto L_11781d3c;
  /* 11781d3a mov edi, eax */
  EDI = (EAX);
L_11781d3c:;
  /* 11781d3c cmp dword ptr [0x11786aa0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11786aa0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781d42 jge 0x11781d9a */
  if ((C.sf==C.of)) goto L_11781d9a;
  /* 11781d44 mov esi, 0x117869a4 */
  ESI = (0x117869a4u);
L_11781d49:;
  /* 11781d49 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11781d4e call 0x11782711 */
  push32(0x11781d53u); f_11782711();
  /* 11781d53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781d55 pop ecx */
  ECX = (pop32());
  /* 11781d56 je 0x11781d94 */
  if (C.zf) goto L_11781d94;
  /* 11781d58 add dword ptr [0x11786aa0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x11786aa0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x11786aa0), (_r)); fl_add(_a,_b,_r,32); }
  /* 11781d5f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11781d61 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_11781d67:;
  /* 11781d67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781d69 jae 0x11781d87 */
  if (!C.cf) goto L_11781d87;
  /* 11781d6b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 11781d6f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11781d72 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11781d76 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 11781d7a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 11781d7c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781d7f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781d85 jmp 0x11781d67 */
  goto L_11781d67;
L_11781d87:;
  /* 11781d87 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781d8a cmp dword ptr [0x11786aa0], edi */
  { uint32_t _a=(r32((uint32_t)(0x11786aa0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781d90 jl 0x11781d49 */
  if ((C.sf!=C.of)) goto L_11781d49;
  /* 11781d92 jmp 0x11781d9a */
  goto L_11781d9a;
L_11781d94:;
  /* 11781d94 mov edi, dword ptr [0x11786aa0] */
  EDI = (r32((uint32_t)(0x11786aa0)));
L_11781d9a:;
  /* 11781d9a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11781d9c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11781d9e jle 0x11781dec */
  if ((C.zf||C.sf!=C.of)) goto L_11781dec;
L_11781da0:;
  /* 11781da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11781da3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11781da5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781da8 je 0x11781de2 */
  if (C.zf) goto L_11781de2;
  /* 11781daa mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 11781dac test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11781dae je 0x11781de2 */
  if (C.zf) goto L_11781de2;
  /* 11781db0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11781db2 jne 0x11781dbf */
  if (!C.zf) goto L_11781dbf;
  /* 11781db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11781db5 call dword ptr [0x11785090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785090))), 0x11781dbbu);
  /* 11781dbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781dbd je 0x11781de2 */
  if (C.zf) goto L_11781de2;
L_11781dbf:;
  /* 11781dbf mov ecx, esi */
  ECX = (ESI);
  /* 11781dc1 mov eax, esi */
  EAX = (ESI);
  /* 11781dc3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11781dc6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11781dc9 mov ecx, dword ptr [ecx*4 + 0x117869a0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x117869a0)));
  /* 11781dd0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11781dd3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11781dd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11781dd9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 11781ddb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11781ddd mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 11781ddf mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_11781de2:;
  /* 11781de2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11781de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11781de7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11781de8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781dea jl 0x11781da0 */
  if ((C.sf!=C.of)) goto L_11781da0;
L_11781dec:;
  /* 11781dec xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11781dee:;
  /* 11781dee mov ecx, dword ptr [0x117869a0] */
  ECX = (r32((uint32_t)(0x117869a0)));
  /* 11781df4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 11781df7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781dfb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 11781dfe jne 0x11781e4d */
  if (!C.zf) goto L_11781e4d;
  /* 11781e00 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11781e02 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 11781e06 jne 0x11781e0d */
  if (!C.zf) goto L_11781e0d;
  /* 11781e08 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11781e0a pop eax */
  EAX = (pop32());
  /* 11781e0b jmp 0x11781e17 */
  goto L_11781e17;
L_11781e0d:;
  /* 11781e0d mov eax, ebx */
  EAX = (EBX);
  /* 11781e0f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11781e10 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11781e12 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11781e14 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11781e17:;
  /* 11781e17 push eax */
  push32((uint32_t)(EAX));
  /* 11781e18 call dword ptr [0x1178508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178508c))), 0x11781e1eu);
  /* 11781e1e mov edi, eax */
  EDI = (EAX);
  /* 11781e20 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e23 je 0x11781e3c */
  if (C.zf) goto L_11781e3c;
  /* 11781e25 push edi */
  push32((uint32_t)(EDI));
  /* 11781e26 call dword ptr [0x11785090] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785090))), 0x11781e2cu);
  /* 11781e2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781e2e je 0x11781e3c */
  if (C.zf) goto L_11781e3c;
  /* 11781e30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11781e35 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 11781e37 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e3a jne 0x11781e42 */
  if (!C.zf) goto L_11781e42;
L_11781e3c:;
  /* 11781e3c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11781e40 jmp 0x11781e51 */
  goto L_11781e51;
L_11781e42:;
  /* 11781e42 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e45 jne 0x11781e51 */
  if (!C.zf) goto L_11781e51;
  /* 11781e47 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 11781e4b jmp 0x11781e51 */
  goto L_11781e51;
L_11781e4d:;
  /* 11781e4d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_11781e51:;
  /* 11781e51 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11781e52 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e55 jl 0x11781dee */
  if ((C.sf!=C.of)) goto L_11781dee;
  /* 11781e57 push dword ptr [0x11786aa0] */
  push32((uint32_t)(r32((uint32_t)(0x11786aa0))));
  /* 11781e5d call dword ptr [0x11785088] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785088))), 0x11781e63u);
  /* 11781e63 pop edi */
  EDI = (pop32());
  /* 11781e64 pop esi */
  ESI = (pop32());
  /* 11781e65 pop ebx */
  EBX = (pop32());
  /* 11781e66 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11781e67 ret  */
  ESPCHK(0x11781cacu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e68 @ 0x11781e68 (84 bytes, 33 insns) */
void f_11781e68(void) {
  FTRACE(0x11781e68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781e68 push ebx */
  push32((uint32_t)(EBX));
  /* 11781e69 push esi */
  push32((uint32_t)(ESI));
  /* 11781e6a push edi */
  push32((uint32_t)(EDI));
  /* 11781e6b mov esi, 0x117869a0 */
  ESI = (0x117869a0u);
L_11781e70:;
  /* 11781e70 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11781e72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11781e74 je 0x11781ead */
  if (C.zf) goto L_11781ead;
  /* 11781e76 mov edi, eax */
  EDI = (EAX);
  /* 11781e78 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781e7d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e7f jae 0x11781ea2 */
  if (!C.cf) goto L_11781ea2;
  /* 11781e81 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_11781e84:;
  /* 11781e84 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781e88 je 0x11781e91 */
  if (C.zf) goto L_11781e91;
  /* 11781e8a push ebx */
  push32((uint32_t)(EBX));
  /* 11781e8b call dword ptr [0x11785098] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785098))), 0x11781e91u);
L_11781e91:;
  /* 11781e91 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11781e93 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781e96 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781e9b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11781e9e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781ea0 jb 0x11781e84 */
  if (C.cf) goto L_11781e84;
L_11781ea2:;
  /* 11781ea2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11781ea4 call 0x117826c9 */
  push32(0x11781ea9u); f_117826c9();
  /* 11781ea9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11781eac pop ecx */
  ECX = (pop32());
L_11781ead:;
  /* 11781ead add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781eb0 cmp esi, 0x11786aa0 */
  { uint32_t _a=(ESI),_b=(0x11786aa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781eb6 jl 0x11781e70 */
  if ((C.sf!=C.of)) goto L_11781e70;
  /* 11781eb8 pop edi */
  EDI = (pop32());
  /* 11781eb9 pop esi */
  ESI = (pop32());
  /* 11781eba pop ebx */
  EBX = (pop32());
  /* 11781ebb ret  */
  ESPCHK(0x11781e68u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ebc @ 0x11781ebc (185 bytes, 71 insns) */
void f_11781ebc(void) {
  FTRACE(0x11781ebcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781ebc push ebx */
  push32((uint32_t)(EBX));
  /* 11781ebd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11781ebf cmp dword ptr [0x11786aa8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11786aa8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781ec5 push esi */
  push32((uint32_t)(ESI));
  /* 11781ec6 push edi */
  push32((uint32_t)(EDI));
  /* 11781ec7 jne 0x11781ece */
  if (!C.zf) goto L_11781ece;
  /* 11781ec9 call 0x11782ce3 */
  push32(0x11781eceu); f_11782ce3();
L_11781ece:;
  /* 11781ece mov esi, dword ptr [0x11786538] */
  ESI = (r32((uint32_t)(0x11786538)));
  /* 11781ed4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11781ed6:;
  /* 11781ed6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11781ed8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781eda je 0x11781eee */
  if (C.zf) goto L_11781eee;
  /* 11781edc cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781ede je 0x11781ee1 */
  if (C.zf) goto L_11781ee1;
  /* 11781ee0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11781ee1:;
  /* 11781ee1 push esi */
  push32((uint32_t)(ESI));
  /* 11781ee2 call 0x11782890 */
  push32(0x11781ee7u); f_11782890();
  /* 11781ee7 pop ecx */
  ECX = (pop32());
  /* 11781ee8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 11781eec jmp 0x11781ed6 */
  goto L_11781ed6;
L_11781eee:;
  /* 11781eee lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 11781ef5 push eax */
  push32((uint32_t)(EAX));
  /* 11781ef6 call 0x11782711 */
  push32(0x11781efbu); f_11782711();
  /* 11781efb mov esi, eax */
  ESI = (EAX);
  /* 11781efd pop ecx */
  ECX = (pop32());
  /* 11781efe cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781f00 mov dword ptr [0x11786568], esi */
  w32((uint32_t)(0x11786568), (ESI));
  /* 11781f06 jne 0x11781f10 */
  if (!C.zf) goto L_11781f10;
  /* 11781f08 push 9 */
  push32((uint32_t)(0x9u));
  /* 11781f0a call 0x11781a36 */
  push32(0x11781f0fu); f_11781a36();
  /* 11781f0f pop ecx */
  ECX = (pop32());
L_11781f10:;
  /* 11781f10 mov edi, dword ptr [0x11786538] */
  EDI = (r32((uint32_t)(0x11786538)));
  /* 11781f16 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781f18 je 0x11781f53 */
  if (C.zf) goto L_11781f53;
  /* 11781f1a push ebp */
  push32((uint32_t)(EBP));
L_11781f1b:;
  /* 11781f1b push edi */
  push32((uint32_t)(EDI));
  /* 11781f1c call 0x11782890 */
  push32(0x11781f21u); f_11782890();
  /* 11781f21 mov ebp, eax */
  EBP = (EAX);
  /* 11781f23 pop ecx */
  ECX = (pop32());
  /* 11781f24 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 11781f25 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781f28 je 0x11781f4c */
  if (C.zf) goto L_11781f4c;
  /* 11781f2a push ebp */
  push32((uint32_t)(EBP));
  /* 11781f2b call 0x11782711 */
  push32(0x11781f30u); f_11782711();
  /* 11781f30 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781f32 pop ecx */
  ECX = (pop32());
  /* 11781f33 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11781f35 jne 0x11781f3f */
  if (!C.zf) goto L_11781f3f;
  /* 11781f37 push 9 */
  push32((uint32_t)(0x9u));
  /* 11781f39 call 0x11781a36 */
  push32(0x11781f3eu); f_11781a36();
  /* 11781f3e pop ecx */
  ECX = (pop32());
L_11781f3f:;
  /* 11781f3f push edi */
  push32((uint32_t)(EDI));
  /* 11781f40 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11781f42 call 0x117827a0 */
  push32(0x11781f47u); f_117827a0();
  /* 11781f47 pop ecx */
  ECX = (pop32());
  /* 11781f48 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781f4b pop ecx */
  ECX = (pop32());
L_11781f4c:;
  /* 11781f4c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11781f4e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781f50 jne 0x11781f1b */
  if (!C.zf) goto L_11781f1b;
  /* 11781f52 pop ebp */
  EBP = (pop32());
L_11781f53:;
  /* 11781f53 push dword ptr [0x11786538] */
  push32((uint32_t)(r32((uint32_t)(0x11786538))));
  /* 11781f59 call 0x117826c9 */
  push32(0x11781f5eu); f_117826c9();
  /* 11781f5e pop ecx */
  ECX = (pop32());
  /* 11781f5f mov dword ptr [0x11786538], ebx */
  w32((uint32_t)(0x11786538), (EBX));
  /* 11781f65 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 11781f67 pop edi */
  EDI = (pop32());
  /* 11781f68 pop esi */
  ESI = (pop32());
  /* 11781f69 mov dword ptr [0x11786aa4], 1 */
  w32((uint32_t)(0x11786aa4), (0x1u));
  /* 11781f73 pop ebx */
  EBX = (pop32());
  /* 11781f74 ret  */
  ESPCHK(0x11781ebcu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f75 @ 0x11781f75 (153 bytes, 62 insns) */
void f_11781f75(void) {
  FTRACE(0x11781f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11781f75 push ebp */
  push32((uint32_t)(EBP));
  /* 11781f76 mov ebp, esp */
  EBP = (ESP);
  /* 11781f78 push ecx */
  push32((uint32_t)(ECX));
  /* 11781f79 push ecx */
  push32((uint32_t)(ECX));
  /* 11781f7a push ebx */
  push32((uint32_t)(EBX));
  /* 11781f7b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11781f7d cmp dword ptr [0x11786aa8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11786aa8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781f83 push esi */
  push32((uint32_t)(ESI));
  /* 11781f84 push edi */
  push32((uint32_t)(EDI));
  /* 11781f85 jne 0x11781f8c */
  if (!C.zf) goto L_11781f8c;
  /* 11781f87 call 0x11782ce3 */
  push32(0x11781f8cu); f_11782ce3();
L_11781f8c:;
  /* 11781f8c mov esi, 0x1178658c */
  ESI = (0x1178658cu);
  /* 11781f91 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11781f96 push esi */
  push32((uint32_t)(ESI));
  /* 11781f97 push ebx */
  push32((uint32_t)(EBX));
  /* 11781f98 call dword ptr [0x1178509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178509c))), 0x11781f9eu);
  /* 11781f9e mov eax, dword ptr [0x11786ab8] */
  EAX = (r32((uint32_t)(0x11786ab8)));
  /* 11781fa3 mov dword ptr [0x11786578], esi */
  w32((uint32_t)(0x11786578), (ESI));
  /* 11781fa9 mov edi, esi */
  EDI = (ESI);
  /* 11781fab cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11781fad je 0x11781fb1 */
  if (C.zf) goto L_11781fb1;
  /* 11781faf mov edi, eax */
  EDI = (EAX);
L_11781fb1:;
  /* 11781fb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11781fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11781fb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11781fb8 push eax */
  push32((uint32_t)(EAX));
  /* 11781fb9 push ebx */
  push32((uint32_t)(EBX));
  /* 11781fba push ebx */
  push32((uint32_t)(EBX));
  /* 11781fbb push edi */
  push32((uint32_t)(EDI));
  /* 11781fbc call 0x1178200e */
  push32(0x11781fc1u); f_1178200e();
  /* 11781fc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11781fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11781fc7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 11781fca push eax */
  push32((uint32_t)(EAX));
  /* 11781fcb call 0x11782711 */
  push32(0x11781fd0u); f_11782711();
  /* 11781fd0 mov esi, eax */
  ESI = (EAX);
  /* 11781fd2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781fd5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11781fd7 jne 0x11781fe1 */
  if (!C.zf) goto L_11781fe1;
  /* 11781fd9 push 8 */
  push32((uint32_t)(0x8u));
  /* 11781fdb call 0x11781a36 */
  push32(0x11781fe0u); f_11781a36();
  /* 11781fe0 pop ecx */
  ECX = (pop32());
L_11781fe1:;
  /* 11781fe1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11781fe4 push eax */
  push32((uint32_t)(EAX));
  /* 11781fe5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11781fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11781fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11781fec lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 11781fef push eax */
  push32((uint32_t)(EAX));
  /* 11781ff0 push esi */
  push32((uint32_t)(ESI));
  /* 11781ff1 push edi */
  push32((uint32_t)(EDI));
  /* 11781ff2 call 0x1178200e */
  push32(0x11781ff7u); f_1178200e();
  /* 11781ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11781ffa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11781ffd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11781ffe mov dword ptr [0x11786560], esi */
  w32((uint32_t)(0x11786560), (ESI));
  /* 11782004 pop edi */
  EDI = (pop32());
  /* 11782005 pop esi */
  ESI = (pop32());
  /* 11782006 mov dword ptr [0x1178655c], eax */
  w32((uint32_t)(0x1178655c), (EAX));
  /* 1178200b pop ebx */
  EBX = (pop32());
  /* 1178200c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1178200d ret  */
  ESPCHK(0x11781f75u, _esp0);
  ESP += 4; return;
}

/* FUN_1000200e @ 0x1178200e (436 bytes, 187 insns) */
void f_1178200e(void) {
  FTRACE(0x1178200eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178200e push ebp */
  push32((uint32_t)(EBP));
  /* 1178200f mov ebp, esp */
  EBP = (ESP);
  /* 11782011 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11782014 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11782017 push ebx */
  push32((uint32_t)(EBX));
  /* 11782018 push esi */
  push32((uint32_t)(ESI));
  /* 11782019 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1178201c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1178201f push edi */
  push32((uint32_t)(EDI));
  /* 11782020 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11782023 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 11782029 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1178202c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1178202e je 0x11782038 */
  if (C.zf) goto L_11782038;
  /* 11782030 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 11782032 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782035 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_11782038:;
  /* 11782038 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1178203b jne 0x11782081 */
  if (!C.zf) goto L_11782081;
L_1178203d:;
  /* 1178203d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11782040 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782041 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782044 je 0x1178206f */
  if (C.zf) goto L_1178206f;
  /* 11782046 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11782048 je 0x1178206f */
  if (C.zf) goto L_1178206f;
  /* 1178204a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1178204d test byte ptr [edx + 0x11786881], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11786881)))&(0x4u); fl_logic(_r,8); }
  /* 11782054 je 0x11782062 */
  if (C.zf) goto L_11782062;
  /* 11782056 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11782058 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1178205a je 0x11782062 */
  if (C.zf) goto L_11782062;
  /* 1178205c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1178205e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11782060 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11782061 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11782062:;
  /* 11782062 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11782064 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782066 je 0x1178203d */
  if (C.zf) goto L_1178203d;
  /* 11782068 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1178206a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1178206c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1178206d jmp 0x1178203d */
  goto L_1178203d;
L_1178206f:;
  /* 1178206f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11782071 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782073 je 0x11782079 */
  if (C.zf) goto L_11782079;
  /* 11782075 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 11782078 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_11782079:;
  /* 11782079 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1178207c jne 0x117820c4 */
  if (!C.zf) goto L_117820c4;
  /* 1178207e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178207f jmp 0x117820c4 */
  goto L_117820c4;
L_11782081:;
  /* 11782081 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 11782083 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782085 je 0x1178208c */
  if (C.zf) goto L_1178208c;
  /* 11782087 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11782089 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1178208b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1178208c:;
  /* 1178208c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1178208e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178208f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11782092 test byte ptr [ebx + 0x11786881], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11786881)))&(0x4u); fl_logic(_r,8); }
  /* 11782099 je 0x117820a7 */
  if (C.zf) goto L_117820a7;
  /* 1178209b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1178209d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1178209f je 0x117820a6 */
  if (C.zf) goto L_117820a6;
  /* 117820a1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 117820a3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 117820a5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117820a6:;
  /* 117820a6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_117820a7:;
  /* 117820a7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820aa je 0x117820b5 */
  if (C.zf) goto L_117820b5;
  /* 117820ac test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117820ae je 0x117820b9 */
  if (C.zf) goto L_117820b9;
  /* 117820b0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820b3 jne 0x11782081 */
  if (!C.zf) goto L_11782081;
L_117820b5:;
  /* 117820b5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117820b7 jne 0x117820bc */
  if (!C.zf) goto L_117820bc;
L_117820b9:;
  /* 117820b9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 117820ba jmp 0x117820c4 */
  goto L_117820c4;
L_117820bc:;
  /* 117820bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117820be je 0x117820c4 */
  if (C.zf) goto L_117820c4;
  /* 117820c0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_117820c4:;
  /* 117820c4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_117820c8:;
  /* 117820c8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820cb je 0x117821b1 */
  if (C.zf) goto L_117821b1;
L_117820d1:;
  /* 117820d1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 117820d3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820d6 je 0x117820dd */
  if (C.zf) goto L_117820dd;
  /* 117820d8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820db jne 0x117820e0 */
  if (!C.zf) goto L_117820e0;
L_117820dd:;
  /* 117820dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117820de jmp 0x117820d1 */
  goto L_117820d1;
L_117820e0:;
  /* 117820e0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117820e3 je 0x117821b1 */
  if (C.zf) goto L_117821b1;
  /* 117820e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117820eb je 0x117820f5 */
  if (C.zf) goto L_117820f5;
  /* 117820ed mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 117820ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117820f2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117820f5:;
  /* 117820f5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117820f8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_117820fa:;
  /* 117820fa mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 11782101 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11782103:;
  /* 11782103 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782106 jne 0x1178210c */
  if (!C.zf) goto L_1178210c;
  /* 11782108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782109 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1178210a jmp 0x11782103 */
  goto L_11782103;
L_1178210c:;
  /* 1178210c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1178210f jne 0x1178213d */
  if (!C.zf) goto L_1178213d;
  /* 11782111 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 11782114 jne 0x1178213b */
  if (!C.zf) goto L_1178213b;
  /* 11782116 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11782118 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178211b je 0x1178212a */
  if (C.zf) goto L_1178212a;
  /* 1178211d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782121 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 11782124 jne 0x1178212a */
  if (!C.zf) goto L_1178212a;
  /* 11782126 mov eax, edx */
  EAX = (EDX);
  /* 11782128 jmp 0x1178212d */
  goto L_1178212d;
L_1178212a:;
  /* 1178212a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1178212d:;
  /* 1178212d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11782130 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11782132 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782135 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11782138 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1178213b:;
  /* 1178213b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1178213d:;
  /* 1178213d mov edx, ebx */
  EDX = (EBX);
  /* 1178213f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11782140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11782142 je 0x11782152 */
  if (C.zf) goto L_11782152;
  /* 11782144 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11782145:;
  /* 11782145 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782147 je 0x1178214d */
  if (C.zf) goto L_1178214d;
  /* 11782149 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1178214c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1178214d:;
  /* 1178214d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1178214f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11782150 jne 0x11782145 */
  if (!C.zf) goto L_11782145;
L_11782152:;
  /* 11782152 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11782154 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11782156 je 0x117821a2 */
  if (C.zf) goto L_117821a2;
  /* 11782158 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178215c jne 0x11782168 */
  if (!C.zf) goto L_11782168;
  /* 1178215e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782161 je 0x117821a2 */
  if (C.zf) goto L_117821a2;
  /* 11782163 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782166 je 0x117821a2 */
  if (C.zf) goto L_117821a2;
L_11782168:;
  /* 11782168 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178216c je 0x1178219c */
  if (C.zf) goto L_1178219c;
  /* 1178216e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782170 je 0x1178218b */
  if (C.zf) goto L_1178218b;
  /* 11782172 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 11782175 test byte ptr [ebx + 0x11786881], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x11786881)))&(0x4u); fl_logic(_r,8); }
  /* 1178217c je 0x11782184 */
  if (C.zf) goto L_11782184;
  /* 1178217e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11782180 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11782181 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782182 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_11782184:;
  /* 11782184 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 11782186 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 11782188 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11782189 jmp 0x1178219a */
  goto L_1178219a;
L_1178218b:;
  /* 1178218b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1178218e test byte ptr [edx + 0x11786881], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x11786881)))&(0x4u); fl_logic(_r,8); }
  /* 11782195 je 0x1178219a */
  if (C.zf) goto L_1178219a;
  /* 11782197 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782198 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1178219a:;
  /* 1178219a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_1178219c:;
  /* 1178219c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178219d jmp 0x117820fa */
  goto L_117820fa;
L_117821a2:;
  /* 117821a2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117821a4 je 0x117821aa */
  if (C.zf) goto L_117821aa;
  /* 117821a6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 117821a9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_117821aa:;
  /* 117821aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 117821ac jmp 0x117820c8 */
  goto L_117820c8;
L_117821b1:;
  /* 117821b1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117821b3 je 0x117821b8 */
  if (C.zf) goto L_117821b8;
  /* 117821b5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_117821b8:;
  /* 117821b8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117821bb pop edi */
  EDI = (pop32());
  /* 117821bc pop esi */
  ESI = (pop32());
  /* 117821bd pop ebx */
  EBX = (pop32());
  /* 117821be inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 117821c0 pop ebp */
  EBP = (pop32());
  /* 117821c1 ret  */
  ESPCHK(0x1178200eu, _esp0);
  ESP += 4; return;
}

/* FUN_100021c2 @ 0x117821c2 (306 bytes, 132 insns) */
void f_117821c2(void) {
  FTRACE(0x117821c2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117821c2 push ecx */
  push32((uint32_t)(ECX));
  /* 117821c3 push ecx */
  push32((uint32_t)(ECX));
  /* 117821c4 mov eax, dword ptr [0x11786690] */
  EAX = (r32((uint32_t)(0x11786690)));
  /* 117821c9 push ebx */
  push32((uint32_t)(EBX));
  /* 117821ca push ebp */
  push32((uint32_t)(EBP));
  /* 117821cb mov ebp, dword ptr [0x11785084] */
  EBP = (r32((uint32_t)(0x11785084)));
  /* 117821d1 push esi */
  push32((uint32_t)(ESI));
  /* 117821d2 push edi */
  push32((uint32_t)(EDI));
  /* 117821d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 117821d5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117821d7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117821d9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117821db jne 0x11782210 */
  if (!C.zf) goto L_11782210;
  /* 117821dd call ebp */
  call_ind((uint32_t)(EBP), 0x117821dfu);
  /* 117821df mov esi, eax */
  ESI = (EAX);
  /* 117821e1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117821e3 je 0x117821f1 */
  if (C.zf) goto L_117821f1;
  /* 117821e5 mov dword ptr [0x11786690], 1 */
  w32((uint32_t)(0x11786690), (0x1u));
  /* 117821ef jmp 0x11782219 */
  goto L_11782219;
L_117821f1:;
  /* 117821f1 call dword ptr [0x11785080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785080))), 0x117821f7u);
  /* 117821f7 mov edi, eax */
  EDI = (EAX);
  /* 117821f9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117821fb je 0x117822eb */
  if (C.zf) goto L_117822eb;
  /* 11782201 mov dword ptr [0x11786690], 2 */
  w32((uint32_t)(0x11786690), (0x2u));
  /* 1178220b jmp 0x1178229f */
  goto L_1178229f;
L_11782210:;
  /* 11782210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782213 jne 0x1178229a */
  if (!C.zf) goto L_1178229a;
L_11782219:;
  /* 11782219 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178221b jne 0x11782229 */
  if (!C.zf) goto L_11782229;
  /* 1178221d call ebp */
  call_ind((uint32_t)(EBP), 0x1178221fu);
  /* 1178221f mov esi, eax */
  ESI = (EAX);
  /* 11782221 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782223 je 0x117822eb */
  if (C.zf) goto L_117822eb;
L_11782229:;
  /* 11782229 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1178222c mov eax, esi */
  EAX = (ESI);
  /* 1178222e je 0x1178223e */
  if (C.zf) goto L_1178223e;
L_11782230:;
  /* 11782230 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782231 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782232 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11782235 jne 0x11782230 */
  if (!C.zf) goto L_11782230;
  /* 11782237 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782238 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782239 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1178223c jne 0x11782230 */
  if (!C.zf) goto L_11782230;
L_1178223e:;
  /* 1178223e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782240 mov edi, dword ptr [0x117850a8] */
  EDI = (r32((uint32_t)(0x117850a8)));
  /* 11782246 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11782248 push ebx */
  push32((uint32_t)(EBX));
  /* 11782249 push ebx */
  push32((uint32_t)(EBX));
  /* 1178224a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178224b push ebx */
  push32((uint32_t)(EBX));
  /* 1178224c push ebx */
  push32((uint32_t)(EBX));
  /* 1178224d push eax */
  push32((uint32_t)(EAX));
  /* 1178224e push esi */
  push32((uint32_t)(ESI));
  /* 1178224f push ebx */
  push32((uint32_t)(EBX));
  /* 11782250 push ebx */
  push32((uint32_t)(EBX));
  /* 11782251 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 11782255 call edi */
  call_ind((uint32_t)(EDI), 0x11782257u);
  /* 11782257 mov ebp, eax */
  EBP = (EAX);
  /* 11782259 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178225b je 0x1178228f */
  if (C.zf) goto L_1178228f;
  /* 1178225d push ebp */
  push32((uint32_t)(EBP));
  /* 1178225e call 0x11782711 */
  push32(0x11782263u); f_11782711();
  /* 11782263 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782265 pop ecx */
  ECX = (pop32());
  /* 11782266 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1178226a je 0x1178228f */
  if (C.zf) goto L_1178228f;
  /* 1178226c push ebx */
  push32((uint32_t)(EBX));
  /* 1178226d push ebx */
  push32((uint32_t)(EBX));
  /* 1178226e push ebp */
  push32((uint32_t)(EBP));
  /* 1178226f push eax */
  push32((uint32_t)(EAX));
  /* 11782270 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 11782274 push esi */
  push32((uint32_t)(ESI));
  /* 11782275 push ebx */
  push32((uint32_t)(EBX));
  /* 11782276 push ebx */
  push32((uint32_t)(EBX));
  /* 11782277 call edi */
  call_ind((uint32_t)(EDI), 0x11782279u);
  /* 11782279 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178227b jne 0x1178228b */
  if (!C.zf) goto L_1178228b;
  /* 1178227d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11782281 call 0x117826c9 */
  push32(0x11782286u); f_117826c9();
  /* 11782286 pop ecx */
  ECX = (pop32());
  /* 11782287 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1178228b:;
  /* 1178228b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1178228f:;
  /* 1178228f push esi */
  push32((uint32_t)(ESI));
  /* 11782290 call dword ptr [0x117850a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850a4))), 0x11782296u);
  /* 11782296 mov eax, ebx */
  EAX = (EBX);
  /* 11782298 jmp 0x117822ed */
  goto L_117822ed;
L_1178229a:;
  /* 1178229a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178229d jne 0x117822eb */
  if (!C.zf) goto L_117822eb;
L_1178229f:;
  /* 1178229f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117822a1 jne 0x117822af */
  if (!C.zf) goto L_117822af;
  /* 117822a3 call dword ptr [0x11785080] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785080))), 0x117822a9u);
  /* 117822a9 mov edi, eax */
  EDI = (EAX);
  /* 117822ab cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117822ad je 0x117822eb */
  if (C.zf) goto L_117822eb;
L_117822af:;
  /* 117822af cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117822b1 mov eax, edi */
  EAX = (EDI);
  /* 117822b3 je 0x117822bf */
  if (C.zf) goto L_117822bf;
L_117822b5:;
  /* 117822b5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117822b6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117822b8 jne 0x117822b5 */
  if (!C.zf) goto L_117822b5;
  /* 117822ba inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117822bb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117822bd jne 0x117822b5 */
  if (!C.zf) goto L_117822b5;
L_117822bf:;
  /* 117822bf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117822c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117822c2 mov ebp, eax */
  EBP = (EAX);
  /* 117822c4 push ebp */
  push32((uint32_t)(EBP));
  /* 117822c5 call 0x11782711 */
  push32(0x117822cau); f_11782711();
  /* 117822ca mov esi, eax */
  ESI = (EAX);
  /* 117822cc pop ecx */
  ECX = (pop32());
  /* 117822cd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117822cf jne 0x117822d5 */
  if (!C.zf) goto L_117822d5;
  /* 117822d1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 117822d3 jmp 0x117822e0 */
  goto L_117822e0;
L_117822d5:;
  /* 117822d5 push ebp */
  push32((uint32_t)(EBP));
  /* 117822d6 push edi */
  push32((uint32_t)(EDI));
  /* 117822d7 push esi */
  push32((uint32_t)(ESI));
  /* 117822d8 call 0x11782d00 */
  push32(0x117822ddu); f_11782d00();
  /* 117822dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117822e0:;
  /* 117822e0 push edi */
  push32((uint32_t)(EDI));
  /* 117822e1 call dword ptr [0x117850a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850a0))), 0x117822e7u);
  /* 117822e7 mov eax, esi */
  EAX = (ESI);
  /* 117822e9 jmp 0x117822ed */
  goto L_117822ed;
L_117822eb:;
  /* 117822eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117822ed:;
  /* 117822ed pop edi */
  EDI = (pop32());
  /* 117822ee pop esi */
  ESI = (pop32());
  /* 117822ef pop ebp */
  EBP = (pop32());
  /* 117822f0 pop ebx */
  EBX = (pop32());
  /* 117822f1 pop ecx */
  ECX = (pop32());
  /* 117822f2 pop ecx */
  ECX = (pop32());
  /* 117822f3 ret  */
  ESPCHK(0x117821c2u, _esp0);
  ESP += 4; return;
}

/* FUN_100022f4 @ 0x117822f4 (60 bytes, 20 insns) */
void f_117822f4(void) {
  FTRACE(0x117822f4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117822f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117822f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117822f8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117822fc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11782301 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11782304 push eax */
  push32((uint32_t)(EAX));
  /* 11782305 call dword ptr [0x11785054] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785054))), 0x1178230bu);
  /* 1178230b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178230d mov dword ptr [0x11786988], eax */
  w32((uint32_t)(0x11786988), (EAX));
  /* 11782312 je 0x11782329 */
  if (C.zf) goto L_11782329;
  /* 11782314 call 0x11783035 */
  push32(0x11782319u); f_11783035();
  /* 11782319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178231b jne 0x1178232c */
  if (!C.zf) goto L_1178232c;
  /* 1178231d push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782323 call dword ptr [0x11785058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785058))), 0x11782329u);
L_11782329:;
  /* 11782329 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1178232b ret  */
  ESPCHK(0x117822f4u, _esp0);
  ESP += 4; return;
L_1178232c:;
  /* 1178232c push 1 */
  push32((uint32_t)(0x1u));
  /* 1178232e pop eax */
  EAX = (pop32());
  /* 1178232f ret  */
  ESPCHK(0x117822f4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002330 @ 0x11782330 (117 bytes, 38 insns) */
void f_11782330(void) {
  FTRACE(0x11782330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782330 push ebx */
  push32((uint32_t)(EBX));
  /* 11782331 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11782333 cmp dword ptr [0x11786748], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11786748))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782339 push ebp */
  push32((uint32_t)(EBP));
  /* 1178233a mov ebp, dword ptr [0x1178504c] */
  EBP = (r32((uint32_t)(0x1178504c)));
  /* 11782340 jle 0x11782386 */
  if ((C.zf||C.sf!=C.of)) goto L_11782386;
  /* 11782342 mov eax, dword ptr [0x1178674c] */
  EAX = (r32((uint32_t)(0x1178674c)));
  /* 11782347 push esi */
  push32((uint32_t)(ESI));
  /* 11782348 push edi */
  push32((uint32_t)(EDI));
  /* 11782349 mov edi, dword ptr [0x11785050] */
  EDI = (r32((uint32_t)(0x11785050)));
  /* 1178234f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_11782352:;
  /* 11782352 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11782357 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1178235c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1178235e call edi */
  call_ind((uint32_t)(EDI), 0x11782360u);
  /* 11782360 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11782365 push 0 */
  push32((uint32_t)(0x0u));
  /* 11782367 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11782369 call edi */
  call_ind((uint32_t)(EDI), 0x1178236bu);
  /* 1178236b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1178236e push 0 */
  push32((uint32_t)(0x0u));
  /* 11782370 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782376 call ebp */
  call_ind((uint32_t)(EBP), 0x11782378u);
  /* 11782378 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1178237b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1178237c cmp ebx, dword ptr [0x11786748] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11786748))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782382 jl 0x11782352 */
  if ((C.sf!=C.of)) goto L_11782352;
  /* 11782384 pop edi */
  EDI = (pop32());
  /* 11782385 pop esi */
  ESI = (pop32());
L_11782386:;
  /* 11782386 push dword ptr [0x1178674c] */
  push32((uint32_t)(r32((uint32_t)(0x1178674c))));
  /* 1178238c push 0 */
  push32((uint32_t)(0x0u));
  /* 1178238e push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782394 call ebp */
  call_ind((uint32_t)(EBP), 0x11782396u);
  /* 11782396 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 1178239c call dword ptr [0x11785058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785058))), 0x117823a2u);
  /* 117823a2 pop ebp */
  EBP = (pop32());
  /* 117823a3 pop ebx */
  EBX = (pop32());
  /* 117823a4 ret  */
  ESPCHK(0x11782330u, _esp0);
  ESP += 4; return;
}

/* FUN_100023a5 @ 0x117823a5 (57 bytes, 18 insns) */
void f_117823a5(void) {
  FTRACE(0x117823a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117823a5 mov eax, dword ptr [0x11786540] */
  EAX = (r32((uint32_t)(0x11786540)));
  /* 117823aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117823ad je 0x117823bc */
  if (C.zf) goto L_117823bc;
  /* 117823af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117823b1 jne 0x117823dd */
  if (!C.zf) goto L_117823dd;
  /* 117823b3 cmp dword ptr [0x11786544], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11786544))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117823ba jne 0x117823dd */
  if (!C.zf) goto L_117823dd;
L_117823bc:;
  /* 117823bc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 117823c1 call 0x117823de */
  push32(0x117823c6u); f_117823de();
  /* 117823c6 mov eax, dword ptr [0x11786694] */
  EAX = (r32((uint32_t)(0x11786694)));
  /* 117823cb pop ecx */
  ECX = (pop32());
  /* 117823cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117823ce je 0x117823d2 */
  if (C.zf) goto L_117823d2;
  /* 117823d0 call eax */
  call_ind((uint32_t)(EAX), 0x117823d2u);
L_117823d2:;
  /* 117823d2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 117823d7 call 0x117823de */
  push32(0x117823dcu); f_117823de();
  /* 117823dc pop ecx */
  ECX = (pop32());
L_117823dd:;
  /* 117823dd ret  */
  ESPCHK(0x117823a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100023de @ 0x117823de (339 bytes, 100 insns) */
void f_117823de(void) {
  FTRACE(0x117823deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117823de push ebp */
  push32((uint32_t)(EBP));
  /* 117823df mov ebp, esp */
  EBP = (ESP);
  /* 117823e1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117823e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117823ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117823ec mov eax, 0x11786180 */
  EAX = (0x11786180u);
L_117823f1:;
  /* 117823f1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117823f3 je 0x11782400 */
  if (C.zf) goto L_11782400;
  /* 117823f5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117823f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117823f9 cmp eax, 0x11786210 */
  { uint32_t _a=(EAX),_b=(0x11786210u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117823fe jl 0x117823f1 */
  if ((C.sf!=C.of)) goto L_117823f1;
L_11782400:;
  /* 11782400 push esi */
  push32((uint32_t)(ESI));
  /* 11782401 mov esi, ecx */
  ESI = (ECX);
  /* 11782403 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 11782406 cmp edx, dword ptr [esi + 0x11786180] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x11786180))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178240c jne 0x1178252e */
  if (!C.zf) goto L_1178252e;
  /* 11782412 mov eax, dword ptr [0x11786540] */
  EAX = (r32((uint32_t)(0x11786540)));
  /* 11782417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178241a je 0x11782508 */
  if (C.zf) goto L_11782508;
  /* 11782420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11782422 jne 0x11782431 */
  if (!C.zf) goto L_11782431;
  /* 11782424 cmp dword ptr [0x11786544], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11786544))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178242b je 0x11782508 */
  if (C.zf) goto L_11782508;
L_11782431:;
  /* 11782431 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782437 je 0x1178252e */
  if (C.zf) goto L_1178252e;
  /* 1178243d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11782443 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11782448 push eax */
  push32((uint32_t)(EAX));
  /* 11782449 push 0 */
  push32((uint32_t)(0x0u));
  /* 1178244b call dword ptr [0x1178509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178509c))), 0x11782451u);
  /* 11782451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11782453 jne 0x11782468 */
  if (!C.zf) goto L_11782468;
  /* 11782455 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1178245b push 0x117853f8 */
  push32((uint32_t)(0x117853f8u));
  /* 11782460 push eax */
  push32((uint32_t)(EAX));
  /* 11782461 call 0x117827a0 */
  push32(0x11782466u); f_117827a0();
  /* 11782466 pop ecx */
  ECX = (pop32());
  /* 11782467 pop ecx */
  ECX = (pop32());
L_11782468:;
  /* 11782468 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1178246e push edi */
  push32((uint32_t)(EDI));
  /* 1178246f push eax */
  push32((uint32_t)(EAX));
  /* 11782470 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 11782476 call 0x11782890 */
  push32(0x1178247bu); f_11782890();
  /* 1178247b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178247c pop ecx */
  ECX = (pop32());
  /* 1178247d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782480 jbe 0x117824ab */
  if ((C.cf||C.zf)) goto L_117824ab;
  /* 11782482 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11782488 push eax */
  push32((uint32_t)(EAX));
  /* 11782489 call 0x11782890 */
  push32(0x1178248eu); f_11782890();
  /* 1178248e mov edi, eax */
  EDI = (EAX);
  /* 11782490 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 11782496 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782499 push 3 */
  push32((uint32_t)(0x3u));
  /* 1178249b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1178249d push 0x117853f4 */
  push32((uint32_t)(0x117853f4u));
  /* 117824a2 push edi */
  push32((uint32_t)(EDI));
  /* 117824a3 call 0x11783910 */
  push32(0x117824a8u); f_11783910();
  /* 117824a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117824ab:;
  /* 117824ab lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117824b1 push 0x117853d8 */
  push32((uint32_t)(0x117853d8u));
  /* 117824b6 push eax */
  push32((uint32_t)(EAX));
  /* 117824b7 call 0x117827a0 */
  push32(0x117824bcu); f_117827a0();
  /* 117824bc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117824c2 push edi */
  push32((uint32_t)(EDI));
  /* 117824c3 push eax */
  push32((uint32_t)(EAX));
  /* 117824c4 call 0x117827b0 */
  push32(0x117824c9u); f_117827b0();
  /* 117824c9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117824cf push 0x117853d4 */
  push32((uint32_t)(0x117853d4u));
  /* 117824d4 push eax */
  push32((uint32_t)(EAX));
  /* 117824d5 call 0x117827b0 */
  push32(0x117824dau); f_117827b0();
  /* 117824da push dword ptr [esi + 0x11786184] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x11786184))));
  /* 117824e0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117824e6 push eax */
  push32((uint32_t)(EAX));
  /* 117824e7 call 0x117827b0 */
  push32(0x117824ecu); f_117827b0();
  /* 117824ec push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 117824f1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 117824f7 push 0x117853ac */
  push32((uint32_t)(0x117853acu));
  /* 117824fc push eax */
  push32((uint32_t)(EAX));
  /* 117824fd call 0x1178387e */
  push32(0x11782502u); f_1178387e();
  /* 11782502 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11782505 pop edi */
  EDI = (pop32());
  /* 11782506 jmp 0x1178252e */
  goto L_1178252e;
L_11782508:;
  /* 11782508 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1178250b lea esi, [esi + 0x11786184] */
  ESI = ((uint32_t)(ESI + 0x11786184));
  /* 11782511 push 0 */
  push32((uint32_t)(0x0u));
  /* 11782513 push eax */
  push32((uint32_t)(EAX));
  /* 11782514 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11782516 call 0x11782890 */
  push32(0x1178251bu); f_11782890();
  /* 1178251b pop ecx */
  ECX = (pop32());
  /* 1178251c push eax */
  push32((uint32_t)(EAX));
  /* 1178251d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1178251f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11782521 call dword ptr [0x1178508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178508c))), 0x11782527u);
  /* 11782527 push eax */
  push32((uint32_t)(EAX));
  /* 11782528 call dword ptr [0x11785048] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785048))), 0x1178252eu);
L_1178252e:;
  /* 1178252e pop esi */
  ESI = (pop32());
  /* 1178252f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782530 ret  */
  ESPCHK(0x117823deu, _esp0);
  ESP += 4; return;
}

/* FUN_10002531 @ 0x11782531 (41 bytes, 12 insns) */
void f_11782531(void) {
  FTRACE(0x11782531u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782531 push esi */
  push32((uint32_t)(ESI));
  /* 11782532 mov esi, dword ptr [0x11785044] */
  ESI = (r32((uint32_t)(0x11785044)));
  /* 11782538 push dword ptr [0x11786254] */
  push32((uint32_t)(r32((uint32_t)(0x11786254))));
  /* 1178253e call esi */
  call_ind((uint32_t)(ESI), 0x11782540u);
  /* 11782540 push dword ptr [0x11786244] */
  push32((uint32_t)(r32((uint32_t)(0x11786244))));
  /* 11782546 call esi */
  call_ind((uint32_t)(ESI), 0x11782548u);
  /* 11782548 push dword ptr [0x11786234] */
  push32((uint32_t)(r32((uint32_t)(0x11786234))));
  /* 1178254e call esi */
  call_ind((uint32_t)(ESI), 0x11782550u);
  /* 11782550 push dword ptr [0x11786214] */
  push32((uint32_t)(r32((uint32_t)(0x11786214))));
  /* 11782556 call esi */
  call_ind((uint32_t)(ESI), 0x11782558u);
  /* 11782558 pop esi */
  ESI = (pop32());
  /* 11782559 ret  */
  ESPCHK(0x11782531u, _esp0);
  ESP += 4; return;
}

/* FUN_1000255a @ 0x1178255a (108 bytes, 34 insns) */
void f_1178255a(void) {
  FTRACE(0x1178255au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178255a push esi */
  push32((uint32_t)(ESI));
  /* 1178255b push edi */
  push32((uint32_t)(EDI));
  /* 1178255c mov edi, dword ptr [0x11785098] */
  EDI = (r32((uint32_t)(0x11785098)));
  /* 11782562 mov esi, 0x11786210 */
  ESI = (0x11786210u);
L_11782567:;
  /* 11782567 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11782569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178256b je 0x11782598 */
  if (C.zf) goto L_11782598;
  /* 1178256d cmp esi, 0x11786254 */
  { uint32_t _a=(ESI),_b=(0x11786254u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782573 je 0x11782598 */
  if (C.zf) goto L_11782598;
  /* 11782575 cmp esi, 0x11786244 */
  { uint32_t _a=(ESI),_b=(0x11786244u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178257b je 0x11782598 */
  if (C.zf) goto L_11782598;
  /* 1178257d cmp esi, 0x11786234 */
  { uint32_t _a=(ESI),_b=(0x11786234u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782583 je 0x11782598 */
  if (C.zf) goto L_11782598;
  /* 11782585 cmp esi, 0x11786214 */
  { uint32_t _a=(ESI),_b=(0x11786214u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178258b je 0x11782598 */
  if (C.zf) goto L_11782598;
  /* 1178258d push eax */
  push32((uint32_t)(EAX));
  /* 1178258e call edi */
  call_ind((uint32_t)(EDI), 0x11782590u);
  /* 11782590 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11782592 call 0x117826c9 */
  push32(0x11782597u); f_117826c9();
  /* 11782597 pop ecx */
  ECX = (pop32());
L_11782598:;
  /* 11782598 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1178259b cmp esi, 0x117862d0 */
  { uint32_t _a=(ESI),_b=(0x117862d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117825a1 jl 0x11782567 */
  if ((C.sf!=C.of)) goto L_11782567;
  /* 117825a3 push dword ptr [0x11786234] */
  push32((uint32_t)(r32((uint32_t)(0x11786234))));
  /* 117825a9 call edi */
  call_ind((uint32_t)(EDI), 0x117825abu);
  /* 117825ab push dword ptr [0x11786244] */
  push32((uint32_t)(r32((uint32_t)(0x11786244))));
  /* 117825b1 call edi */
  call_ind((uint32_t)(EDI), 0x117825b3u);
  /* 117825b3 push dword ptr [0x11786254] */
  push32((uint32_t)(r32((uint32_t)(0x11786254))));
  /* 117825b9 call edi */
  call_ind((uint32_t)(EDI), 0x117825bbu);
  /* 117825bb push dword ptr [0x11786214] */
  push32((uint32_t)(r32((uint32_t)(0x11786214))));
  /* 117825c1 call edi */
  call_ind((uint32_t)(EDI), 0x117825c3u);
  /* 117825c3 pop edi */
  EDI = (pop32());
  /* 117825c4 pop esi */
  ESI = (pop32());
  /* 117825c5 ret  */
  ESPCHK(0x1178255au, _esp0);
  ESP += 4; return;
}

/* FUN_100025c6 @ 0x117825c6 (97 bytes, 37 insns) */
void f_117825c6(void) {
  FTRACE(0x117825c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117825c6 push ebp */
  push32((uint32_t)(EBP));
  /* 117825c7 mov ebp, esp */
  EBP = (ESP);
  /* 117825c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117825cc push esi */
  push32((uint32_t)(ESI));
  /* 117825cd cmp dword ptr [eax*4 + 0x11786210], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11786210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117825d5 lea esi, [eax*4 + 0x11786210] */
  ESI = ((uint32_t)(EAX*4 + 0x11786210));
  /* 117825dc jne 0x1178261c */
  if (!C.zf) goto L_1178261c;
  /* 117825de push edi */
  push32((uint32_t)(EDI));
  /* 117825df push 0x18 */
  push32((uint32_t)(0x18u));
  /* 117825e1 call 0x11782711 */
  push32(0x117825e6u); f_11782711();
  /* 117825e6 mov edi, eax */
  EDI = (EAX);
  /* 117825e8 pop ecx */
  ECX = (pop32());
  /* 117825e9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 117825eb jne 0x117825f5 */
  if (!C.zf) goto L_117825f5;
  /* 117825ed push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117825ef call 0x11781a36 */
  push32(0x117825f4u); f_11781a36();
  /* 117825f4 pop ecx */
  ECX = (pop32());
L_117825f5:;
  /* 117825f5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117825f7 call 0x117825c6 */
  push32(0x117825fcu); f_117825c6();
  /* 117825fc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117825ff pop ecx */
  ECX = (pop32());
  /* 11782600 push edi */
  push32((uint32_t)(EDI));
  /* 11782601 jne 0x1178260d */
  if (!C.zf) goto L_1178260d;
  /* 11782603 call dword ptr [0x11785044] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785044))), 0x11782609u);
  /* 11782609 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1178260b jmp 0x11782613 */
  goto L_11782613;
L_1178260d:;
  /* 1178260d call 0x117826c9 */
  push32(0x11782612u); f_117826c9();
  /* 11782612 pop ecx */
  ECX = (pop32());
L_11782613:;
  /* 11782613 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11782615 call 0x11782627 */
  push32(0x1178261au); f_11782627();
  /* 1178261a pop ecx */
  ECX = (pop32());
  /* 1178261b pop edi */
  EDI = (pop32());
L_1178261c:;
  /* 1178261c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1178261e call dword ptr [0x11785040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785040))), 0x11782624u);
  /* 11782624 pop esi */
  ESI = (pop32());
  /* 11782625 pop ebp */
  EBP = (pop32());
  /* 11782626 ret  */
  ESPCHK(0x117825c6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002627 @ 0x11782627 (21 bytes, 7 insns) */
void f_11782627(void) {
  FTRACE(0x11782627u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782627 push ebp */
  push32((uint32_t)(EBP));
  /* 11782628 mov ebp, esp */
  EBP = (ESP);
  /* 1178262a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1178262d push dword ptr [eax*4 + 0x11786210] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x11786210))));
  /* 11782634 call dword ptr [0x1178503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178503c))), 0x1178263au);
  /* 1178263a pop ebp */
  EBP = (pop32());
  /* 1178263b ret  */
  ESPCHK(0x11782627u, _esp0);
  ESP += 4; return;
}

/* FUN_1000263c @ 0x1178263c (141 bytes, 56 insns) */
void f_1178263c(void) {
  FTRACE(0x1178263cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178263c push ebx */
  push32((uint32_t)(EBX));
  /* 1178263d push esi */
  push32((uint32_t)(ESI));
  /* 1178263e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11782642 push edi */
  push32((uint32_t)(EDI));
  /* 11782643 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11782648 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178264b mov ebx, esi */
  EBX = (ESI);
  /* 1178264d ja 0x1178265c */
  if ((!C.cf&&!C.zf)) goto L_1178265c;
  /* 1178264f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782651 jne 0x11782656 */
  if (!C.zf) goto L_11782656;
  /* 11782653 push 1 */
  push32((uint32_t)(0x1u));
  /* 11782655 pop esi */
  ESI = (pop32());
L_11782656:;
  /* 11782656 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782659 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1178265c:;
  /* 1178265c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1178265e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782661 ja 0x1178269d */
  if ((!C.cf&&!C.zf)) goto L_1178269d;
  /* 11782663 cmp ebx, dword ptr [0x11786460] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11786460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782669 ja 0x11782688 */
  if ((!C.cf&&!C.zf)) goto L_11782688;
  /* 1178266b push 9 */
  push32((uint32_t)(0x9u));
  /* 1178266d call 0x117825c6 */
  push32(0x11782672u); f_117825c6();
  /* 11782672 push ebx */
  push32((uint32_t)(EBX));
  /* 11782673 call 0x117833c9 */
  push32(0x11782678u); f_117833c9();
  /* 11782678 push 9 */
  push32((uint32_t)(0x9u));
  /* 1178267a mov edi, eax */
  EDI = (EAX);
  /* 1178267c call 0x11782627 */
  push32(0x11782681u); f_11782627();
  /* 11782681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11782684 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11782686 jne 0x117826b3 */
  if (!C.zf) goto L_117826b3;
L_11782688:;
  /* 11782688 push esi */
  push32((uint32_t)(ESI));
  /* 11782689 push 8 */
  push32((uint32_t)(0x8u));
  /* 1178268b push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782691 call dword ptr [0x11785038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785038))), 0x11782697u);
  /* 11782697 mov edi, eax */
  EDI = (EAX);
  /* 11782699 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1178269b jne 0x117826bf */
  if (!C.zf) goto L_117826bf;
L_1178269d:;
  /* 1178269d cmp dword ptr [0x1178670c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1178670c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117826a4 je 0x117826bf */
  if (C.zf) goto L_117826bf;
  /* 117826a6 push esi */
  push32((uint32_t)(ESI));
  /* 117826a7 call 0x11783a68 */
  push32(0x117826acu); f_11783a68();
  /* 117826ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117826ae pop ecx */
  ECX = (pop32());
  /* 117826af je 0x117826c5 */
  if (C.zf) goto L_117826c5;
  /* 117826b1 jmp 0x1178265c */
  goto L_1178265c;
L_117826b3:;
  /* 117826b3 push ebx */
  push32((uint32_t)(EBX));
  /* 117826b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117826b6 push edi */
  push32((uint32_t)(EDI));
  /* 117826b7 call 0x11783a10 */
  push32(0x117826bcu); f_11783a10();
  /* 117826bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117826bf:;
  /* 117826bf mov eax, edi */
  EAX = (EDI);
L_117826c1:;
  /* 117826c1 pop edi */
  EDI = (pop32());
  /* 117826c2 pop esi */
  ESI = (pop32());
  /* 117826c3 pop ebx */
  EBX = (pop32());
  /* 117826c4 ret  */
  ESPCHK(0x1178263cu, _esp0);
  ESP += 4; return;
L_117826c5:;
  /* 117826c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117826c7 jmp 0x117826c1 */
  goto L_117826c1;
}

/* FUN_100026c9 @ 0x117826c9 (72 bytes, 29 insns) */
void f_117826c9(void) {
  FTRACE(0x117826c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117826c9 push esi */
  push32((uint32_t)(ESI));
  /* 117826ca mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 117826ce test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 117826d0 je 0x1178270f */
  if (C.zf) goto L_1178270f;
  /* 117826d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 117826d4 call 0x117825c6 */
  push32(0x117826d9u); f_117825c6();
  /* 117826d9 push esi */
  push32((uint32_t)(ESI));
  /* 117826da call 0x11783073 */
  push32(0x117826dfu); f_11783073();
  /* 117826df pop ecx */
  ECX = (pop32());
  /* 117826e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117826e2 pop ecx */
  ECX = (pop32());
  /* 117826e3 je 0x117826f8 */
  if (C.zf) goto L_117826f8;
  /* 117826e5 push esi */
  push32((uint32_t)(ESI));
  /* 117826e6 push eax */
  push32((uint32_t)(EAX));
  /* 117826e7 call 0x1178309e */
  push32(0x117826ecu); f_1178309e();
  /* 117826ec push 9 */
  push32((uint32_t)(0x9u));
  /* 117826ee call 0x11782627 */
  push32(0x117826f3u); f_11782627();
  /* 117826f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117826f6 pop esi */
  ESI = (pop32());
  /* 117826f7 ret  */
  ESPCHK(0x117826c9u, _esp0);
  ESP += 4; return;
L_117826f8:;
  /* 117826f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 117826fa call 0x11782627 */
  push32(0x117826ffu); f_11782627();
  /* 117826ff pop ecx */
  ECX = (pop32());
  /* 11782700 push esi */
  push32((uint32_t)(ESI));
  /* 11782701 push 0 */
  push32((uint32_t)(0x0u));
  /* 11782703 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782709 call dword ptr [0x1178504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178504c))), 0x1178270fu);
L_1178270f:;
  /* 1178270f pop esi */
  ESI = (pop32());
  /* 11782710 ret  */
  ESPCHK(0x117826c9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x11782711 (18 bytes, 6 insns) */
void f_11782711(void) {
  FTRACE(0x11782711u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782711 push dword ptr [0x1178670c] */
  push32((uint32_t)(r32((uint32_t)(0x1178670c))));
  /* 11782717 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1178271b call 0x11782723 */
  push32(0x11782720u); f_11782723();
  /* 11782720 pop ecx */
  ECX = (pop32());
  /* 11782721 pop ecx */
  ECX = (pop32());
  /* 11782722 ret  */
  ESPCHK(0x11782711u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x11782723 (44 bytes, 16 insns) */
void f_11782723(void) {
  FTRACE(0x11782723u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782723 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782728 ja 0x1178274c */
  if ((!C.cf&&!C.zf)) goto L_1178274c;
L_1178272a:;
  /* 1178272a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1178272e call 0x1178274f */
  push32(0x11782733u); f_1178274f();
  /* 11782733 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11782735 pop ecx */
  ECX = (pop32());
  /* 11782736 jne 0x1178274e */
  if (!C.zf) goto L_1178274e;
  /* 11782738 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178273c je 0x1178274e */
  if (C.zf) goto L_1178274e;
  /* 1178273e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11782742 call 0x11783a68 */
  push32(0x11782747u); f_11783a68();
  /* 11782747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11782749 pop ecx */
  ECX = (pop32());
  /* 1178274a jne 0x1178272a */
  if (!C.zf) goto L_1178272a;
L_1178274c:;
  /* 1178274c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1178274e:;
  /* 1178274e ret  */
  ESPCHK(0x11782723u, _esp0);
  ESP += 4; return;
}

/* FUN_1000274f @ 0x1178274f (78 bytes, 30 insns) */
void f_1178274f(void) {
  FTRACE(0x1178274fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178274f push esi */
  push32((uint32_t)(ESI));
  /* 11782750 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11782754 cmp esi, dword ptr [0x11786460] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11786460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178275a push edi */
  push32((uint32_t)(EDI));
  /* 1178275b ja 0x1178277e */
  if ((!C.cf&&!C.zf)) goto L_1178277e;
  /* 1178275d push 9 */
  push32((uint32_t)(0x9u));
  /* 1178275f call 0x117825c6 */
  push32(0x11782764u); f_117825c6();
  /* 11782764 push esi */
  push32((uint32_t)(ESI));
  /* 11782765 call 0x117833c9 */
  push32(0x1178276au); f_117833c9();
  /* 1178276a push 9 */
  push32((uint32_t)(0x9u));
  /* 1178276c mov edi, eax */
  EDI = (EAX);
  /* 1178276e call 0x11782627 */
  push32(0x11782773u); f_11782627();
  /* 11782773 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11782776 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11782778 je 0x1178277e */
  if (C.zf) goto L_1178277e;
  /* 1178277a mov eax, edi */
  EAX = (EDI);
  /* 1178277c jmp 0x1178279a */
  goto L_1178279a;
L_1178277e:;
  /* 1178277e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11782780 jne 0x11782785 */
  if (!C.zf) goto L_11782785;
  /* 11782782 push 1 */
  push32((uint32_t)(0x1u));
  /* 11782784 pop esi */
  ESI = (pop32());
L_11782785:;
  /* 11782785 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782788 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1178278b push esi */
  push32((uint32_t)(ESI));
  /* 1178278c push 0 */
  push32((uint32_t)(0x0u));
  /* 1178278e push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11782794 call dword ptr [0x11785038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785038))), 0x1178279au);
L_1178279a:;
  /* 1178279a pop edi */
  EDI = (pop32());
  /* 1178279b pop esi */
  ESI = (pop32());
  /* 1178279c ret  */
  ESPCHK(0x1178274fu, _esp0);
  ESP += 4; return;
}

/* FUN_100027a0 @ 0x117827a0 (7 bytes, 3 insns) */
void f_117827a0(void) {
  FTRACE(0x117827a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117827a0 push edi */
  push32((uint32_t)(EDI));
  /* 117827a1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 117827a5 jmp 0x11782811 */
  jmp_ind(0x11782811u); return;
}

/* FUN_100027b0 @ 0x117827b0 (224 bytes, 84 insns) */
void f_117827b0(void) {
  FTRACE(0x117827b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117827b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117827b4 push edi */
  push32((uint32_t)(EDI));
  /* 117827b5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117827bb je 0x117827cc */
  if (C.zf) goto L_117827cc;
L_117827bd:;
  /* 117827bd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117827bf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117827c0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117827c2 je 0x117827ff */
  if (C.zf) goto L_117827ff;
  /* 117827c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117827ca jne 0x117827bd */
  if (!C.zf) goto L_117827bd;
L_117827cc:;
  /* 117827cc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117827ce mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117827d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117827d5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117827d8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117827da add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117827dd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117827e2 je 0x117827cc */
  if (C.zf) goto L_117827cc;
  /* 117827e4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117827e7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117827e9 je 0x1178280e */
  if (C.zf) goto L_1178280e;
  /* 117827eb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117827ed je 0x11782809 */
  if (C.zf) goto L_11782809;
  /* 117827ef test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117827f4 je 0x11782804 */
  if (C.zf) goto L_11782804;
  /* 117827f6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117827fb je 0x117827ff */
  if (C.zf) goto L_117827ff;
  /* 117827fd jmp 0x117827cc */
  goto L_117827cc;
L_117827ff:;
  /* 117827ff lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11782802 jmp 0x11782811 */
  goto L_11782811;
L_11782804:;
  /* 11782804 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11782807 jmp 0x11782811 */
  goto L_11782811;
L_11782809:;
  /* 11782809 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1178280c jmp 0x11782811 */
  goto L_11782811;
L_1178280e:;
  /* 1178280e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11782811:;
  /* 11782811 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11782815 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1178281b je 0x11782836 */
  if (C.zf) goto L_11782836;
L_1178281d:;
  /* 1178281d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1178281f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782820 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11782822 je 0x11782888 */
  if (C.zf) goto L_11782888;
  /* 11782824 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11782826 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11782827 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1178282d jne 0x1178281d */
  if (!C.zf) goto L_1178281d;
  /* 1178282f jmp 0x11782836 */
  goto L_11782836;
L_11782831:;
  /* 11782831 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11782833 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11782836:;
  /* 11782836 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1178283b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1178283d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178283f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11782842 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11782844 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11782846 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11782849 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1178284e je 0x11782831 */
  if (C.zf) goto L_11782831;
  /* 11782850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11782852 je 0x11782888 */
  if (C.zf) goto L_11782888;
  /* 11782854 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11782856 je 0x1178287f */
  if (C.zf) goto L_1178287f;
  /* 11782858 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1178285e je 0x11782872 */
  if (C.zf) goto L_11782872;
  /* 11782860 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11782866 je 0x1178286a */
  if (C.zf) goto L_1178286a;
  /* 11782868 jmp 0x11782831 */
  goto L_11782831;
L_1178286a:;
  /* 1178286a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1178286c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11782870 pop edi */
  EDI = (pop32());
  /* 11782871 ret  */
  ESPCHK(0x117827b0u, _esp0);
  ESP += 4; return;
L_11782872:;
  /* 11782872 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11782875 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11782879 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1178287d pop edi */
  EDI = (pop32());
  /* 1178287e ret  */
  ESPCHK(0x117827b0u, _esp0);
  ESP += 4; return;
L_1178287f:;
  /* 1178287f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11782882 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11782886 pop edi */
  EDI = (pop32());
  /* 11782887 ret  */
  ESPCHK(0x117827b0u, _esp0);
  ESP += 4; return;
L_11782888:;
  /* 11782888 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1178288a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1178288e pop edi */
  EDI = (pop32());
  /* 1178288f ret  */
  ESPCHK(0x117827b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11782890 (123 bytes, 44 insns) */
void f_11782890(void) {
  FTRACE(0x11782890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11782894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1178289a je 0x117828b0 */
  if (C.zf) goto L_117828b0;
L_1178289c:;
  /* 1178289c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1178289e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1178289f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117828a1 je 0x117828e3 */
  if (C.zf) goto L_117828e3;
  /* 117828a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117828a9 jne 0x1178289c */
  if (!C.zf) goto L_1178289c;
  /* 117828ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117828b0:;
  /* 117828b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117828b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117828b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117828b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117828bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117828be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117828c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117828c6 je 0x117828b0 */
  if (C.zf) goto L_117828b0;
  /* 117828c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117828cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117828cd je 0x11782901 */
  if (C.zf) goto L_11782901;
  /* 117828cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117828d1 je 0x117828f7 */
  if (C.zf) goto L_117828f7;
  /* 117828d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117828d8 je 0x117828ed */
  if (C.zf) goto L_117828ed;
  /* 117828da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117828df je 0x117828e3 */
  if (C.zf) goto L_117828e3;
  /* 117828e1 jmp 0x117828b0 */
  goto L_117828b0;
L_117828e3:;
  /* 117828e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 117828e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117828ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117828ec ret  */
  ESPCHK(0x11782890u, _esp0);
  ESP += 4; return;
L_117828ed:;
  /* 117828ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 117828f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117828f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117828f6 ret  */
  ESPCHK(0x11782890u, _esp0);
  ESP += 4; return;
L_117828f7:;
  /* 117828f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 117828fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117828fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782900 ret  */
  ESPCHK(0x11782890u, _esp0);
  ESP += 4; return;
L_11782901:;
  /* 11782901 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11782904 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11782908 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178290a ret  */
  ESPCHK(0x11782890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000290b @ 0x1178290b (429 bytes, 143 insns) */
void f_1178290b(void) {
  FTRACE(0x1178290bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178290b push ebp */
  push32((uint32_t)(EBP));
  /* 1178290c mov ebp, esp */
  EBP = (ESP);
  /* 1178290e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782911 push ebx */
  push32((uint32_t)(EBX));
  /* 11782912 push esi */
  push32((uint32_t)(ESI));
  /* 11782913 push edi */
  push32((uint32_t)(EDI));
  /* 11782914 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11782916 call 0x117825c6 */
  push32(0x1178291bu); f_117825c6();
  /* 1178291b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1178291e call 0x11782ab8 */
  push32(0x11782923u); f_11782ab8();
  /* 11782923 mov ebx, eax */
  EBX = (EAX);
  /* 11782925 pop ecx */
  ECX = (pop32());
  /* 11782926 cmp ebx, dword ptr [0x11786750] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11786750))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178292c pop ecx */
  ECX = (pop32());
  /* 1178292d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11782930 jne 0x11782939 */
  if (!C.zf) goto L_11782939;
L_11782932:;
  /* 11782932 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11782934 jmp 0x11782aa9 */
  goto L_11782aa9;
L_11782939:;
  /* 11782939 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1178293b je 0x11782a97 */
  if (C.zf) goto L_11782a97;
  /* 11782941 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11782943 mov eax, 0x11786368 */
  EAX = (0x11786368u);
L_11782948:;
  /* 11782948 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178294a je 0x117829c0 */
  if (C.zf) goto L_117829c0;
  /* 1178294c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178294f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11782950 cmp eax, 0x11786458 */
  { uint32_t _a=(EAX),_b=(0x11786458u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782955 jl 0x11782948 */
  if ((C.sf!=C.of)) goto L_11782948;
  /* 11782957 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1178295a push eax */
  push32((uint32_t)(EAX));
  /* 1178295b push ebx */
  push32((uint32_t)(EBX));
  /* 1178295c call dword ptr [0x11785034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785034))), 0x11782962u);
  /* 11782962 push 1 */
  push32((uint32_t)(0x1u));
  /* 11782964 pop esi */
  ESI = (pop32());
  /* 11782965 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782967 jne 0x11782a8e */
  if (!C.zf) goto L_11782a8e;
  /* 1178296d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1178296f and dword ptr [0x11786984], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11786984)))&(0x0u); w32((uint32_t)(0x11786984), (_r)); fl_logic(_r,32); }
  /* 11782976 pop ecx */
  ECX = (pop32());
  /* 11782977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782979 mov edi, 0x11786880 */
  EDI = (0x11786880u);
  /* 1178297e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782981 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11782983 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11782984 mov dword ptr [0x11786750], ebx */
  w32((uint32_t)(0x11786750), (EBX));
  /* 1178298a jbe 0x11782a7b */
  if ((C.cf||C.zf)) goto L_11782a7b;
  /* 11782990 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782994 je 0x11782a56 */
  if (C.zf) goto L_11782a56;
  /* 1178299a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1178299d:;
  /* 1178299d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1178299f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117829a1 je 0x11782a56 */
  if (C.zf) goto L_11782a56;
  /* 117829a7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 117829ab movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_117829ae:;
  /* 117829ae cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117829b0 ja 0x11782a4a */
  if ((!C.cf&&!C.zf)) goto L_11782a4a;
  /* 117829b6 or byte ptr [eax + 0x11786881], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x4u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 117829bd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117829be jmp 0x117829ae */
  goto L_117829ae;
L_117829c0:;
  /* 117829c0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117829c4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 117829c6 pop ecx */
  ECX = (pop32());
  /* 117829c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117829c9 mov edi, 0x11786880 */
  EDI = (0x11786880u);
  /* 117829ce lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 117829d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 117829d3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 117829d6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 117829d7 lea ebx, [esi + 0x11786378] */
  EBX = ((uint32_t)(ESI + 0x11786378));
L_117829dd:;
  /* 117829dd cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 117829e0 mov ecx, ebx */
  ECX = (EBX);
  /* 117829e2 je 0x11782a10 */
  if (C.zf) goto L_11782a10;
L_117829e4:;
  /* 117829e4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117829e7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117829e9 je 0x11782a10 */
  if (C.zf) goto L_11782a10;
  /* 117829eb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 117829ee movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 117829f1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117829f3 ja 0x11782a09 */
  if ((!C.cf&&!C.zf)) goto L_11782a09;
  /* 117829f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117829f8 mov dl, byte ptr [edx + 0x11786360] */
  DL = (r8((uint32_t)(EDX + 0x11786360)));
L_117829fe:;
  /* 117829fe or byte ptr [eax + 0x11786881], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(DL); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782a04 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782a05 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782a07 jbe 0x117829fe */
  if ((C.cf||C.zf)) goto L_117829fe;
L_11782a09:;
  /* 11782a09 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782a0a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782a0b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782a0e jne 0x117829e4 */
  if (!C.zf) goto L_117829e4;
L_11782a10:;
  /* 11782a10 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11782a13 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11782a16 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782a1a jb 0x117829dd */
  if (C.cf) goto L_117829dd;
  /* 11782a1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782a1f mov dword ptr [0x1178676c], 1 */
  w32((uint32_t)(0x1178676c), (0x1u));
  /* 11782a29 push eax */
  push32((uint32_t)(EAX));
  /* 11782a2a mov dword ptr [0x11786750], eax */
  w32((uint32_t)(0x11786750), (EAX));
  /* 11782a2f call 0x11782b02 */
  push32(0x11782a34u); f_11782b02();
  /* 11782a34 lea esi, [esi + 0x1178636c] */
  ESI = ((uint32_t)(ESI + 0x1178636c));
  /* 11782a3a mov edi, 0x11786760 */
  EDI = (0x11786760u);
  /* 11782a3f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11782a40 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11782a41 pop ecx */
  ECX = (pop32());
  /* 11782a42 mov dword ptr [0x11786984], eax */
  w32((uint32_t)(0x11786984), (EAX));
  /* 11782a47 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11782a48 jmp 0x11782a9c */
  goto L_11782a9c;
L_11782a4a:;
  /* 11782a4a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782a4b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782a4c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11782a50 jne 0x1178299d */
  if (!C.zf) goto L_1178299d;
L_11782a56:;
  /* 11782a56 mov eax, esi */
  EAX = (ESI);
L_11782a58:;
  /* 11782a58 or byte ptr [eax + 0x11786881], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x8u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782a5f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782a60 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782a65 jb 0x11782a58 */
  if (C.cf) goto L_11782a58;
  /* 11782a67 push ebx */
  push32((uint32_t)(EBX));
  /* 11782a68 call 0x11782b02 */
  push32(0x11782a6du); f_11782b02();
  /* 11782a6d pop ecx */
  ECX = (pop32());
  /* 11782a6e mov dword ptr [0x11786984], eax */
  w32((uint32_t)(0x11786984), (EAX));
  /* 11782a73 mov dword ptr [0x1178676c], esi */
  w32((uint32_t)(0x1178676c), (ESI));
  /* 11782a79 jmp 0x11782a82 */
  goto L_11782a82;
L_11782a7b:;
  /* 11782a7b and dword ptr [0x1178676c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1178676c)))&(0x0u); w32((uint32_t)(0x1178676c), (_r)); fl_logic(_r,32); }
L_11782a82:;
  /* 11782a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782a84 mov edi, 0x11786760 */
  EDI = (0x11786760u);
  /* 11782a89 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782a8a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782a8b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782a8c jmp 0x11782a9c */
  goto L_11782a9c;
L_11782a8e:;
  /* 11782a8e cmp dword ptr [0x117866f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117866f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782a95 je 0x11782aa6 */
  if (C.zf) goto L_11782aa6;
L_11782a97:;
  /* 11782a97 call 0x11782b35 */
  push32(0x11782a9cu); f_11782b35();
L_11782a9c:;
  /* 11782a9c call 0x11782b5e */
  push32(0x11782aa1u); f_11782b5e();
  /* 11782aa1 jmp 0x11782932 */
  goto L_11782932;
L_11782aa6:;
  /* 11782aa6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11782aa9:;
  /* 11782aa9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11782aab call 0x11782627 */
  push32(0x11782ab0u); f_11782627();
  /* 11782ab0 pop ecx */
  ECX = (pop32());
  /* 11782ab1 mov eax, esi */
  EAX = (ESI);
  /* 11782ab3 pop edi */
  EDI = (pop32());
  /* 11782ab4 pop esi */
  ESI = (pop32());
  /* 11782ab5 pop ebx */
  EBX = (pop32());
  /* 11782ab6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782ab7 ret  */
  ESPCHK(0x1178290bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab8 @ 0x11782ab8 (74 bytes, 15 insns) */
void f_11782ab8(void) {
  FTRACE(0x11782ab8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782ab8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11782abc and dword ptr [0x117866f8], 0 */
  { uint32_t _r=(r32((uint32_t)(0x117866f8)))&(0x0u); w32((uint32_t)(0x117866f8), (_r)); fl_logic(_r,32); }
  /* 11782ac3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782ac6 jne 0x11782ad8 */
  if (!C.zf) goto L_11782ad8;
  /* 11782ac8 mov dword ptr [0x117866f8], 1 */
  w32((uint32_t)(0x117866f8), (0x1u));
  /* 11782ad2 jmp dword ptr [0x1178502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1178502c)))); return;
L_11782ad8:;
  /* 11782ad8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782adb jne 0x11782aed */
  if (!C.zf) goto L_11782aed;
  /* 11782add mov dword ptr [0x117866f8], 1 */
  w32((uint32_t)(0x117866f8), (0x1u));
  /* 11782ae7 jmp dword ptr [0x11785030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11785030)))); return;
L_11782aed:;
  /* 11782aed cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782af0 jne 0x11782b01 */
  if (!C.zf) goto L_11782b01;
  /* 11782af2 mov eax, dword ptr [0x11786728] */
  EAX = (r32((uint32_t)(0x11786728)));
  /* 11782af7 mov dword ptr [0x117866f8], 1 */
  w32((uint32_t)(0x117866f8), (0x1u));
L_11782b01:;
  /* 11782b01 ret  */
  ESPCHK(0x11782ab8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b02 @ 0x11782b02 (51 bytes, 19 insns) */
void f_11782b02(void) {
  FTRACE(0x11782b02u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782b02 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11782b06 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782b0b je 0x11782b2f */
  if (C.zf) goto L_11782b2f;
  /* 11782b0d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782b10 je 0x11782b29 */
  if (C.zf) goto L_11782b29;
  /* 11782b12 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782b15 je 0x11782b23 */
  if (C.zf) goto L_11782b23;
  /* 11782b17 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11782b18 je 0x11782b1d */
  if (C.zf) goto L_11782b1d;
  /* 11782b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782b1c ret  */
  ESPCHK(0x11782b02u, _esp0);
  ESP += 4; return;
L_11782b1d:;
  /* 11782b1d mov eax, 0x404 */
  EAX = (0x404u);
  /* 11782b22 ret  */
  ESPCHK(0x11782b02u, _esp0);
  ESP += 4; return;
L_11782b23:;
  /* 11782b23 mov eax, 0x412 */
  EAX = (0x412u);
  /* 11782b28 ret  */
  ESPCHK(0x11782b02u, _esp0);
  ESP += 4; return;
L_11782b29:;
  /* 11782b29 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11782b2e ret  */
  ESPCHK(0x11782b02u, _esp0);
  ESP += 4; return;
L_11782b2f:;
  /* 11782b2f mov eax, 0x411 */
  EAX = (0x411u);
  /* 11782b34 ret  */
  ESPCHK(0x11782b02u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b35 @ 0x11782b35 (41 bytes, 17 insns) */
void f_11782b35(void) {
  FTRACE(0x11782b35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782b35 push edi */
  push32((uint32_t)(EDI));
  /* 11782b36 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11782b38 pop ecx */
  ECX = (pop32());
  /* 11782b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782b3b mov edi, 0x11786880 */
  EDI = (0x11786880u);
  /* 11782b40 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11782b42 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11782b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782b45 mov edi, 0x11786760 */
  EDI = (0x11786760u);
  /* 11782b4a mov dword ptr [0x11786750], eax */
  w32((uint32_t)(0x11786750), (EAX));
  /* 11782b4f mov dword ptr [0x1178676c], eax */
  w32((uint32_t)(0x1178676c), (EAX));
  /* 11782b54 mov dword ptr [0x11786984], eax */
  w32((uint32_t)(0x11786984), (EAX));
  /* 11782b59 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782b5a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782b5b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 11782b5c pop edi */
  EDI = (pop32());
  /* 11782b5d ret  */
  ESPCHK(0x11782b35u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b5e @ 0x11782b5e (389 bytes, 124 insns) */
void f_11782b5e(void) {
  FTRACE(0x11782b5eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782b5e push ebp */
  push32((uint32_t)(EBP));
  /* 11782b5f mov ebp, esp */
  EBP = (ESP);
  /* 11782b61 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782b67 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11782b6a push esi */
  push32((uint32_t)(ESI));
  /* 11782b6b push eax */
  push32((uint32_t)(EAX));
  /* 11782b6c push dword ptr [0x11786750] */
  push32((uint32_t)(r32((uint32_t)(0x11786750))));
  /* 11782b72 call dword ptr [0x11785034] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785034))), 0x11782b78u);
  /* 11782b78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782b7b jne 0x11782c97 */
  if (!C.zf) goto L_11782c97;
  /* 11782b81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782b83 mov esi, 0x100 */
  ESI = (0x100u);
L_11782b88:;
  /* 11782b88 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 11782b8f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782b90 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782b92 jb 0x11782b88 */
  if (C.cf) goto L_11782b88;
  /* 11782b94 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 11782b97 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 11782b9e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11782ba0 je 0x11782bd9 */
  if (C.zf) goto L_11782bd9;
  /* 11782ba2 push ebx */
  push32((uint32_t)(EBX));
  /* 11782ba3 push edi */
  push32((uint32_t)(EDI));
  /* 11782ba4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_11782ba7:;
  /* 11782ba7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 11782baa movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11782bad cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782baf ja 0x11782bce */
  if ((!C.cf&&!C.zf)) goto L_11782bce;
  /* 11782bb1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782bb3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 11782bba inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782bbb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 11782bc0 mov ebx, ecx */
  EBX = (ECX);
  /* 11782bc2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782bc5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11782bc7 mov ecx, ebx */
  ECX = (EBX);
  /* 11782bc9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11782bcc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_11782bce:;
  /* 11782bce inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11782bcf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11782bd0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 11782bd3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11782bd5 jne 0x11782ba7 */
  if (!C.zf) goto L_11782ba7;
  /* 11782bd7 pop edi */
  EDI = (pop32());
  /* 11782bd8 pop ebx */
  EBX = (pop32());
L_11782bd9:;
  /* 11782bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11782bdb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 11782be1 push dword ptr [0x11786984] */
  push32((uint32_t)(r32((uint32_t)(0x11786984))));
  /* 11782be7 push dword ptr [0x11786750] */
  push32((uint32_t)(r32((uint32_t)(0x11786750))));
  /* 11782bed push eax */
  push32((uint32_t)(EAX));
  /* 11782bee lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11782bf4 push esi */
  push32((uint32_t)(ESI));
  /* 11782bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11782bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11782bf8 call 0x11783cd2 */
  push32(0x11782bfdu); f_11783cd2();
  /* 11782bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11782bff lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 11782c05 push dword ptr [0x11786750] */
  push32((uint32_t)(r32((uint32_t)(0x11786750))));
  /* 11782c0b push esi */
  push32((uint32_t)(ESI));
  /* 11782c0c push eax */
  push32((uint32_t)(EAX));
  /* 11782c0d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11782c13 push esi */
  push32((uint32_t)(ESI));
  /* 11782c14 push eax */
  push32((uint32_t)(EAX));
  /* 11782c15 push esi */
  push32((uint32_t)(ESI));
  /* 11782c16 push dword ptr [0x11786984] */
  push32((uint32_t)(r32((uint32_t)(0x11786984))));
  /* 11782c1c call 0x11783a83 */
  push32(0x11782c21u); f_11783a83();
  /* 11782c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11782c23 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 11782c29 push dword ptr [0x11786750] */
  push32((uint32_t)(r32((uint32_t)(0x11786750))));
  /* 11782c2f push esi */
  push32((uint32_t)(ESI));
  /* 11782c30 push eax */
  push32((uint32_t)(EAX));
  /* 11782c31 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 11782c37 push esi */
  push32((uint32_t)(ESI));
  /* 11782c38 push eax */
  push32((uint32_t)(EAX));
  /* 11782c39 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11782c3e push dword ptr [0x11786984] */
  push32((uint32_t)(r32((uint32_t)(0x11786984))));
  /* 11782c44 call 0x11783a83 */
  push32(0x11782c49u); f_11783a83();
  /* 11782c49 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11782c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782c4e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_11782c54:;
  /* 11782c54 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11782c57 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 11782c5a je 0x11782c72 */
  if (C.zf) goto L_11782c72;
  /* 11782c5c or byte ptr [eax + 0x11786881], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x10u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782c63 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_11782c6a:;
  /* 11782c6a mov byte ptr [eax + 0x11786780], dl */
  w8((uint32_t)(EAX + 0x11786780), (DL));
  /* 11782c70 jmp 0x11782c8e */
  goto L_11782c8e;
L_11782c72:;
  /* 11782c72 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 11782c75 je 0x11782c87 */
  if (C.zf) goto L_11782c87;
  /* 11782c77 or byte ptr [eax + 0x11786881], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x20u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782c7e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 11782c85 jmp 0x11782c6a */
  goto L_11782c6a;
L_11782c87:;
  /* 11782c87 and byte ptr [eax + 0x11786780], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786780)))&(0x0u); w8((uint32_t)(EAX + 0x11786780), (_r)); fl_logic(_r,8); }
L_11782c8e:;
  /* 11782c8e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782c8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782c90 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11782c91 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782c93 jb 0x11782c54 */
  if (C.cf) goto L_11782c54;
  /* 11782c95 jmp 0x11782ce0 */
  goto L_11782ce0;
L_11782c97:;
  /* 11782c97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11782c99 mov esi, 0x100 */
  ESI = (0x100u);
L_11782c9e:;
  /* 11782c9e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782ca1 jb 0x11782cbc */
  if (C.cf) goto L_11782cbc;
  /* 11782ca3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782ca6 ja 0x11782cbc */
  if ((!C.cf&&!C.zf)) goto L_11782cbc;
  /* 11782ca8 or byte ptr [eax + 0x11786881], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x10u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782caf mov cl, al */
  CL = (AL);
  /* 11782cb1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_11782cb4:;
  /* 11782cb4 mov byte ptr [eax + 0x11786780], cl */
  w8((uint32_t)(EAX + 0x11786780), (CL));
  /* 11782cba jmp 0x11782cdb */
  goto L_11782cdb;
L_11782cbc:;
  /* 11782cbc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782cbf jb 0x11782cd4 */
  if (C.cf) goto L_11782cd4;
  /* 11782cc1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782cc4 ja 0x11782cd4 */
  if ((!C.cf&&!C.zf)) goto L_11782cd4;
  /* 11782cc6 or byte ptr [eax + 0x11786881], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786881)))|(0x20u); w8((uint32_t)(EAX + 0x11786881), (_r)); fl_logic(_r,8); }
  /* 11782ccd mov cl, al */
  CL = (AL);
  /* 11782ccf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11782cd2 jmp 0x11782cb4 */
  goto L_11782cb4;
L_11782cd4:;
  /* 11782cd4 and byte ptr [eax + 0x11786780], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11786780)))&(0x0u); w8((uint32_t)(EAX + 0x11786780), (_r)); fl_logic(_r,8); }
L_11782cdb:;
  /* 11782cdb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11782cdc cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782cde jb 0x11782c9e */
  if (C.cf) goto L_11782c9e;
L_11782ce0:;
  /* 11782ce0 pop esi */
  ESI = (pop32());
  /* 11782ce1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782ce2 ret  */
  ESPCHK(0x11782b5eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ce3 @ 0x11782ce3 (28 bytes, 7 insns) */
void f_11782ce3(void) {
  FTRACE(0x11782ce3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782ce3 cmp dword ptr [0x11786aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11786aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782cea jne 0x11782cfe */
  if (!C.zf) goto L_11782cfe;
  /* 11782cec push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11782cee call 0x1178290b */
  push32(0x11782cf3u); f_1178290b();
  /* 11782cf3 pop ecx */
  ECX = (pop32());
  /* 11782cf4 mov dword ptr [0x11786aa8], 1 */
  w32((uint32_t)(0x11786aa8), (0x1u));
L_11782cfe:;
  /* 11782cfe ret  */
  ESPCHK(0x11782ce3u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d00 @ 0x11782d00 (664 bytes, 268 insns) [15 switch table(s)] */
void f_11782d00(void) {
  FTRACE(0x11782d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11782d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11782d01 mov ebp, esp */
  EBP = (ESP);
  /* 11782d03 push edi */
  push32((uint32_t)(EDI));
  /* 11782d04 push esi */
  push32((uint32_t)(ESI));
  /* 11782d05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11782d08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11782d0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11782d0e mov eax, ecx */
  EAX = (ECX);
  /* 11782d10 mov edx, ecx */
  EDX = (ECX);
  /* 11782d12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11782d14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782d16 jbe 0x11782d20 */
  if ((C.cf||C.zf)) goto L_11782d20;
  /* 11782d18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782d1a jb 0x11782e98 */
  if (C.cf) goto L_11782e98;
L_11782d20:;
  /* 11782d20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11782d26 jne 0x11782d3c */
  if (!C.zf) goto L_11782d3c;
  /* 11782d28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782d2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11782d2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782d31 jb 0x11782d5c */
  if (C.cf) goto L_11782d5c;
  /* 11782d33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782d35 jmp dword ptr [edx*4 + 0x11782e48] */
  switch (EDX) {
    case 0: goto L_11782e58;
    case 1: goto L_11782e60;
    case 2: goto L_11782e6c;
    case 3: goto L_11782e80;
    default: x86_unimpl("switch@0x11782d35 out of table"); return;
  }
L_11782d3c:;
  /* 11782d3c mov eax, edi */
  EAX = (EDI);
  /* 11782d3e mov edx, 3 */
  EDX = (0x3u);
  /* 11782d43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782d46 jb 0x11782d54 */
  if (C.cf) goto L_11782d54;
  /* 11782d48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11782d4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11782d4d jmp dword ptr [eax*4 + 0x11782d60] */
  switch (EAX) {
    case 1: goto L_11782d70;
    case 2: goto L_11782d9c;
    case 3: goto L_11782dc0;
    default: x86_unimpl("switch@0x11782d4d out of table"); return;
  }
L_11782d54:;
  /* 11782d54 jmp dword ptr [ecx*4 + 0x11782e58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11782e58)))); return;
  /* 11782d5b nop  */
  /* nop */
L_11782d5c:;
  /* 11782d5c jmp dword ptr [ecx*4 + 0x11782ddc] */
  switch (ECX) {
    case 0: goto L_11782e3f;
    case 1: goto L_11782e2c;
    case 2: goto L_11782e24;
    case 3: goto L_11782e1c;
    case 4: goto L_11782e14;
    case 5: goto L_11782e0c;
    case 6: goto L_11782e04;
    case 7: goto L_11782dfc;
    default: x86_unimpl("switch@0x11782d5c out of table"); return;
  }
  /* 11782d63 nop  */
  /* nop */
L_11782d70:;
  /* 11782d70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782d72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782d74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782d76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11782d79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11782d7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11782d7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782d82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11782d85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782d88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782d8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782d8e jb 0x11782d5c */
  if (C.cf) goto L_11782d5c;
  /* 11782d90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782d92 jmp dword ptr [edx*4 + 0x11782e48] */
  switch (EDX) {
    case 0: goto L_11782e58;
    case 1: goto L_11782e60;
    case 2: goto L_11782e6c;
    case 3: goto L_11782e80;
    default: x86_unimpl("switch@0x11782d92 out of table"); return;
  }
  /* 11782d99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11782d9c:;
  /* 11782d9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782d9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782da0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782da2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11782da5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782da8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11782dab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782dae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782db1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782db4 jb 0x11782d5c */
  if (C.cf) goto L_11782d5c;
  /* 11782db6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782db8 jmp dword ptr [edx*4 + 0x11782e48] */
  switch (EDX) {
    case 0: goto L_11782e58;
    case 1: goto L_11782e60;
    case 2: goto L_11782e6c;
    case 3: goto L_11782e80;
    default: x86_unimpl("switch@0x11782db8 out of table"); return;
  }
  /* 11782dbf nop  */
  /* nop */
L_11782dc0:;
  /* 11782dc0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782dc2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782dc4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782dc6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11782dc7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782dca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11782dcb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782dce jb 0x11782d5c */
  if (C.cf) goto L_11782d5c;
  /* 11782dd0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782dd2 jmp dword ptr [edx*4 + 0x11782e48] */
  switch (EDX) {
    case 0: goto L_11782e58;
    case 1: goto L_11782e60;
    case 2: goto L_11782e6c;
    case 3: goto L_11782e80;
    default: x86_unimpl("switch@0x11782dd2 out of table"); return;
  }
  /* 11782dd9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11782dfc:;
  /* 11782dfc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11782e00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11782e04:;
  /* 11782e04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11782e08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11782e0c:;
  /* 11782e0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11782e10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11782e14:;
  /* 11782e14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11782e18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11782e1c:;
  /* 11782e1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11782e20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11782e24:;
  /* 11782e24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11782e28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11782e2c:;
  /* 11782e2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11782e30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11782e34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11782e3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782e3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11782e3f:;
  /* 11782e3f jmp dword ptr [edx*4 + 0x11782e48] */
  switch (EDX) {
    case 0: goto L_11782e58;
    case 1: goto L_11782e60;
    case 2: goto L_11782e6c;
    case 3: goto L_11782e80;
    default: x86_unimpl("switch@0x11782e3f out of table"); return;
  }
  /* 11782e46 mov edi, edi */
  EDI = (EDI);
L_11782e58:;
  /* 11782e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782e5b pop esi */
  ESI = (pop32());
  /* 11782e5c pop edi */
  EDI = (pop32());
  /* 11782e5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782e5e ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11782e5f nop  */
  /* nop */
L_11782e60:;
  /* 11782e60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782e67 pop esi */
  ESI = (pop32());
  /* 11782e68 pop edi */
  EDI = (pop32());
  /* 11782e69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782e6a ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11782e6b nop  */
  /* nop */
L_11782e6c:;
  /* 11782e6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782e6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782e70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11782e73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11782e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782e79 pop esi */
  ESI = (pop32());
  /* 11782e7a pop edi */
  EDI = (pop32());
  /* 11782e7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782e7c ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11782e7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11782e80:;
  /* 11782e80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11782e82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11782e84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11782e87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11782e8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11782e8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11782e90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782e93 pop esi */
  ESI = (pop32());
  /* 11782e94 pop edi */
  EDI = (pop32());
  /* 11782e95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782e96 ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11782e97 nop  */
  /* nop */
L_11782e98:;
  /* 11782e98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11782e9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11782ea0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11782ea6 jne 0x11782ecc */
  if (!C.zf) goto L_11782ecc;
  /* 11782ea8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782eab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11782eae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782eb1 jb 0x11782ec0 */
  if (C.cf) goto L_11782ec0;
  /* 11782eb3 std  */
  C.df=1;
  /* 11782eb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782eb6 cld  */
  C.df=0;
  /* 11782eb7 jmp dword ptr [edx*4 + 0x11782fe0] */
  switch (EDX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782eb7 out of table"); return;
  }
  /* 11782ebe mov edi, edi */
  EDI = (EDI);
L_11782ec0:;
  /* 11782ec0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11782ec2 jmp dword ptr [ecx*4 + 0x11782f90] */
  switch (ECX) {
    case 0: goto L_11782fd7;
    default: x86_unimpl("switch@0x11782ec2 out of table"); return;
  }
  /* 11782ec9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11782ecc:;
  /* 11782ecc mov eax, edi */
  EAX = (EDI);
  /* 11782ece mov edx, 3 */
  EDX = (0x3u);
  /* 11782ed3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782ed6 jb 0x11782ee4 */
  if (C.cf) goto L_11782ee4;
  /* 11782ed8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11782edb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782edd jmp dword ptr [eax*4 + 0x11782ee8] */
  switch (EAX) {
    case 1: goto L_11782ef8;
    case 2: goto L_11782f18;
    case 3: goto L_11782f40;
    default: x86_unimpl("switch@0x11782edd out of table"); return;
  }
L_11782ee4:;
  /* 11782ee4 jmp dword ptr [ecx*4 + 0x11782fe0] */
  switch (ECX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782ee4 out of table"); return;
  }
  /* 11782eeb nop  */
  /* nop */
L_11782ef8:;
  /* 11782ef8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11782efb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782efd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11782f00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11782f01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782f04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11782f05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782f08 jb 0x11782ec0 */
  if (C.cf) goto L_11782ec0;
  /* 11782f0a std  */
  C.df=1;
  /* 11782f0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782f0d cld  */
  C.df=0;
  /* 11782f0e jmp dword ptr [edx*4 + 0x11782fe0] */
  switch (EDX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782f0e out of table"); return;
  }
  /* 11782f15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11782f18:;
  /* 11782f18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11782f1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782f1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11782f20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11782f23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782f26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11782f29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782f2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782f2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782f32 jb 0x11782ec0 */
  if (C.cf) goto L_11782ec0;
  /* 11782f34 std  */
  C.df=1;
  /* 11782f35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782f37 cld  */
  C.df=0;
  /* 11782f38 jmp dword ptr [edx*4 + 0x11782fe0] */
  switch (EDX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782f38 out of table"); return;
  }
  /* 11782f3f nop  */
  /* nop */
L_11782f40:;
  /* 11782f40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11782f43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11782f45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11782f48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11782f4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11782f4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11782f51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11782f54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11782f57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782f5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11782f5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11782f60 jb 0x11782ec0 */
  if (C.cf) goto L_11782ec0;
  /* 11782f66 std  */
  C.df=1;
  /* 11782f67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11782f69 cld  */
  C.df=0;
  /* 11782f6a jmp dword ptr [edx*4 + 0x11782fe0] */
  switch (EDX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782f6a out of table"); return;
  }
  /* 11782f71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11782f74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 11782f75 das  */
  x86_unimpl("das @ 0x11782f75");
  /* 11782f76 js 0x11782f89 */
  if (C.sf) goto L_11782f89;
  /* 11782f78 pushfd  */
  x86_unimpl("pushfd @ 0x11782f78");
  /* 11782f79 das  */
  x86_unimpl("das @ 0x11782f79");
  /* 11782f7a js 0x11782f8d */
  if (C.sf) goto L_11782f8d;
  /* 11782f7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 11782f7d das  */
  x86_unimpl("das @ 0x11782f7d");
  /* 11782f7e js 0x11782f91 */
  if (C.sf) goto L_11782f91;
  /* 11782f80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11782f81 das  */
  x86_unimpl("das @ 0x11782f81");
  /* 11782f82 js 0x11782f95 */
  if (C.sf) goto L_11782f95;
  /* 11782f84 mov ah, 0x2f */
  AH = (0x2fu);
  /* 11782f86 js 0x11782f99 */
  if (C.sf) goto L_11782f99;
  /* 11782f88 mov esp, 0xc411782f */
  ESP = (0xc411782fu);
L_11782f8d:;
  /* 11782f8d das  */
  x86_unimpl("das @ 0x11782f8d");
  /* 11782f8e js 0x11782fa1 */
  if (C.sf) goto L_11782fa1;
  /* 11782f94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11782f98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11782f9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11782fa0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11782fa4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11782fa8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11782fac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11782fb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11782fb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11782fb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11782fbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11782fc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11782fc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11782fc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11782fcc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11782fd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11782fd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11782fd7:;
  /* 11782fd7 jmp dword ptr [edx*4 + 0x11782fe0] */
  switch (EDX) {
    case 0: goto L_11782ff0;
    case 1: goto L_11782ff8;
    case 2: goto L_11783008;
    case 3: goto L_1178301c;
    default: x86_unimpl("switch@0x11782fd7 out of table"); return;
  }
  /* 11782fde mov edi, edi */
  EDI = (EDI);
L_11782ff0:;
  /* 11782ff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11782ff3 pop esi */
  ESI = (pop32());
  /* 11782ff4 pop edi */
  EDI = (pop32());
  /* 11782ff5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11782ff6 ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11782ff7 nop  */
  /* nop */
L_11782ff8:;
  /* 11782ff8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11782ffb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11782ffe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783001 pop esi */
  ESI = (pop32());
  /* 11783002 pop edi */
  EDI = (pop32());
  /* 11783003 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783004 ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 11783005 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11783008:;
  /* 11783008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178300b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1178300e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11783011 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11783014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783017 pop esi */
  ESI = (pop32());
  /* 11783018 pop edi */
  EDI = (pop32());
  /* 11783019 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1178301a ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
  /* 1178301b nop  */
  /* nop */
L_1178301c:;
  /* 1178301c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178301f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11783022 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11783025 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11783028 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1178302b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1178302e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783031 pop esi */
  ESI = (pop32());
  /* 11783032 pop edi */
  EDI = (pop32());
  /* 11783033 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783034 ret  */
  ESPCHK(0x11782d00u, _esp0);
  ESP += 4; return;
L_11782f89: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11782f89 (unresolved jump table)"); return;
L_11782f91: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11782f91 (unresolved jump table)"); return;
L_11782f95: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11782f95 (unresolved jump table)"); return;
L_11782f99: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11782f99 (unresolved jump table)"); return;
L_11782fa1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x11782fa1 (unresolved jump table)"); return;
}

/* FUN_10003035 @ 0x11783035 (62 bytes, 15 insns) */
void f_11783035(void) {
  FTRACE(0x11783035u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783035 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1178303a push 0 */
  push32((uint32_t)(0x0u));
  /* 1178303c push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11783042 call dword ptr [0x11785038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785038))), 0x11783048u);
  /* 11783048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1178304a mov dword ptr [0x1178674c], eax */
  w32((uint32_t)(0x1178674c), (EAX));
  /* 1178304f jne 0x11783052 */
  if (!C.zf) goto L_11783052;
  /* 11783051 ret  */
  ESPCHK(0x11783035u, _esp0);
  ESP += 4; return;
L_11783052:;
  /* 11783052 and dword ptr [0x11786744], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11786744)))&(0x0u); w32((uint32_t)(0x11786744), (_r)); fl_logic(_r,32); }
  /* 11783059 and dword ptr [0x11786748], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11786748)))&(0x0u); w32((uint32_t)(0x11786748), (_r)); fl_logic(_r,32); }
  /* 11783060 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783062 mov dword ptr [0x11786740], eax */
  w32((uint32_t)(0x11786740), (EAX));
  /* 11783067 mov dword ptr [0x11786738], 0x10 */
  w32((uint32_t)(0x11786738), (0x10u));
  /* 11783071 pop eax */
  EAX = (pop32());
  /* 11783072 ret  */
  ESPCHK(0x11783035u, _esp0);
  ESP += 4; return;
}

/* FUN_10003073 @ 0x11783073 (43 bytes, 14 insns) */
void f_11783073(void) {
  FTRACE(0x11783073u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783073 mov eax, dword ptr [0x11786748] */
  EAX = (r32((uint32_t)(0x11786748)));
  /* 11783078 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1178307b mov eax, dword ptr [0x1178674c] */
  EAX = (r32((uint32_t)(0x1178674c)));
  /* 11783080 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_11783083:;
  /* 11783083 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783085 jae 0x1178309b */
  if (!C.cf) goto L_1178309b;
  /* 11783087 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1178308b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178308e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783094 jb 0x1178309d */
  if (C.cf) goto L_1178309d;
  /* 11783096 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783099 jmp 0x11783083 */
  goto L_11783083;
L_1178309b:;
  /* 1178309b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1178309d:;
  /* 1178309d ret  */
  ESPCHK(0x11783073u, _esp0);
  ESP += 4; return;
}

/* FUN_1000309e @ 0x1178309e (811 bytes, 264 insns) */
void f_1178309e(void) {
  FTRACE(0x1178309eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178309e push ebp */
  push32((uint32_t)(EBP));
  /* 1178309f mov ebp, esp */
  EBP = (ESP);
  /* 117830a1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117830a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117830a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117830aa push ebx */
  push32((uint32_t)(EBX));
  /* 117830ab push esi */
  push32((uint32_t)(ESI));
  /* 117830ac mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 117830af mov esi, edx */
  ESI = (EDX);
  /* 117830b1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117830b4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 117830b7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117830ba push edi */
  push32((uint32_t)(EDI));
  /* 117830bb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 117830be mov ecx, esi */
  ECX = (ESI);
  /* 117830c0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 117830c3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117830c9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 117830ca mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117830cd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117830d4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117830d7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117830da mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 117830dd test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 117830e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117830e3 jne 0x11783164 */
  if (!C.zf) goto L_11783164;
  /* 117830e5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117830e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117830ea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117830eb pop edi */
  EDI = (pop32());
  /* 117830ec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117830ef cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117830f1 jbe 0x117830f6 */
  if ((C.cf||C.zf)) goto L_117830f6;
  /* 117830f3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_117830f6:;
  /* 117830f6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 117830fa cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117830fe jne 0x11783148 */
  if (!C.zf) goto L_11783148;
  /* 11783100 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11783103 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783106 jae 0x11783124 */
  if (!C.cf) goto L_11783124;
  /* 11783108 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1178310d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1178310f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11783113 not edi */
  EDI = (~(EDI));
  /* 11783115 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 11783119 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1178311b jne 0x11783148 */
  if (!C.zf) goto L_11783148;
  /* 1178311d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783120 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 11783122 jmp 0x11783148 */
  goto L_11783148;
L_11783124:;
  /* 11783124 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783127 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1178312c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1178312e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11783131 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 11783135 not edi */
  EDI = (~(EDI));
  /* 11783137 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1178313e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 11783140 jne 0x11783148 */
  if (!C.zf) goto L_11783148;
  /* 11783142 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783145 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11783148:;
  /* 11783148 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1178314c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11783150 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 11783153 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 11783157 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1178315b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178315e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 11783161 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_11783164:;
  /* 11783164 mov edi, ebx */
  EDI = (EBX);
  /* 11783166 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 11783169 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1178316a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178316d jbe 0x11783172 */
  if ((C.cf||C.zf)) goto L_11783172;
  /* 1178316f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 11783171 pop edi */
  EDI = (pop32());
L_11783172:;
  /* 11783172 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11783175 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11783178 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1178317b jne 0x11783221 */
  if (!C.zf) goto L_11783221;
  /* 11783181 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11783187 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1178318a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1178318c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1178318f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11783190 pop edx */
  EDX = (pop32());
  /* 11783191 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783193 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11783196 jbe 0x1178319d */
  if ((C.cf||C.zf)) goto L_1178319d;
  /* 11783198 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1178319b mov ecx, edx */
  ECX = (EDX);
L_1178319d:;
  /* 1178319d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 117831a0 mov edi, ebx */
  EDI = (EBX);
  /* 117831a2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 117831a5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 117831a8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117831a9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117831ab jbe 0x117831af */
  if ((C.cf||C.zf)) goto L_117831af;
  /* 117831ad mov edi, edx */
  EDI = (EDX);
L_117831af:;
  /* 117831af cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117831b1 je 0x1178321e */
  if (C.zf) goto L_1178321e;
  /* 117831b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117831b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117831b9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117831bc jne 0x11783206 */
  if (!C.zf) goto L_11783206;
  /* 117831be mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117831c1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117831c4 jae 0x117831e2 */
  if (!C.cf) goto L_117831e2;
  /* 117831c6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117831cb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117831cd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117831d1 not edx */
  EDX = (~(EDX));
  /* 117831d3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 117831d7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117831d9 jne 0x11783206 */
  if (!C.zf) goto L_11783206;
  /* 117831db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117831de and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117831e0 jmp 0x11783206 */
  goto L_11783206;
L_117831e2:;
  /* 117831e2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117831e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117831ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117831ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117831ef lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 117831f3 not edx */
  EDX = (~(EDX));
  /* 117831f5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 117831fc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 117831fe jne 0x11783206 */
  if (!C.zf) goto L_11783206;
  /* 11783200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783203 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_11783206:;
  /* 11783206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11783209 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1178320c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1178320f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11783212 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11783215 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11783218 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1178321b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1178321e:;
  /* 1178321e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11783221:;
  /* 11783221 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783225 jne 0x11783230 */
  if (!C.zf) goto L_11783230;
  /* 11783227 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178322a je 0x117832b9 */
  if (C.zf) goto L_117832b9;
L_11783230:;
  /* 11783230 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11783233 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11783236 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11783239 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1178323c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1178323f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 11783242 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11783245 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11783248 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1178324b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1178324e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11783251 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783254 jne 0x117832b9 */
  if (!C.zf) goto L_117832b9;
  /* 11783256 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1178325a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178325d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 11783260 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11783262 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 11783266 jae 0x1178328d */
  if (!C.cf) goto L_1178328d;
  /* 11783268 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1178326c jne 0x1178327c */
  if (!C.zf) goto L_1178327c;
  /* 1178326e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11783273 mov ecx, edi */
  ECX = (EDI);
  /* 11783275 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11783277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1178327a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1178327c:;
  /* 1178327c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11783281 mov ecx, edi */
  ECX = (EDI);
  /* 11783283 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11783285 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 11783289 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1178328b jmp 0x117832b6 */
  goto L_117832b6;
L_1178328d:;
  /* 1178328d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11783291 jne 0x117832a3 */
  if (!C.zf) goto L_117832a3;
  /* 11783293 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 11783296 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1178329b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1178329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117832a0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_117832a3:;
  /* 117832a3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117832a6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 117832ab shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 117832ad lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 117832b4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_117832b6:;
  /* 117832b6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_117832b9:;
  /* 117832b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117832bc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 117832be mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 117832c2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 117832c4 jne 0x117833c4 */
  if (!C.zf) goto L_117833c4;
  /* 117832ca mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 117832cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117832d1 je 0x117833b6 */
  if (C.zf) goto L_117833b6;
  /* 117832d7 mov ecx, dword ptr [0x1178673c] */
  ECX = (r32((uint32_t)(0x1178673c)));
  /* 117832dd mov edi, dword ptr [0x11785050] */
  EDI = (r32((uint32_t)(0x11785050)));
  /* 117832e3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 117832e6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117832e9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 117832ee push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117832f3 push ebx */
  push32((uint32_t)(EBX));
  /* 117832f4 push ecx */
  push32((uint32_t)(ECX));
  /* 117832f5 call edi */
  call_ind((uint32_t)(EDI), 0x117832f7u);
  /* 117832f7 mov ecx, dword ptr [0x1178673c] */
  ECX = (r32((uint32_t)(0x1178673c)));
  /* 117832fd mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783302 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11783307 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11783309 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1178330c mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783311 mov ecx, dword ptr [0x1178673c] */
  ECX = (r32((uint32_t)(0x1178673c)));
  /* 11783317 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1178331a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 11783322 mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783327 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1178332a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1178332d mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783332 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11783335 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11783339 jne 0x11783344 */
  if (!C.zf) goto L_11783344;
  /* 1178333b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1178333f mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
L_11783344:;
  /* 11783344 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783348 jne 0x117833b6 */
  if (!C.zf) goto L_117833b6;
  /* 1178334a push ebx */
  push32((uint32_t)(EBX));
  /* 1178334b push 0 */
  push32((uint32_t)(0x0u));
  /* 1178334d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11783350 call edi */
  call_ind((uint32_t)(EDI), 0x11783352u);
  /* 11783352 mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783357 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1178335a push 0 */
  push32((uint32_t)(0x0u));
  /* 1178335c push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 11783362 call dword ptr [0x1178504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178504c))), 0x11783368u);
  /* 11783368 mov eax, dword ptr [0x11786748] */
  EAX = (r32((uint32_t)(0x11786748)));
  /* 1178336d mov edx, dword ptr [0x1178674c] */
  EDX = (r32((uint32_t)(0x1178674c)));
  /* 11783373 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11783376 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11783379 mov ecx, eax */
  ECX = (EAX);
  /* 1178337b mov eax, dword ptr [0x11786744] */
  EAX = (r32((uint32_t)(0x11786744)));
  /* 11783380 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783382 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 11783386 push ecx */
  push32((uint32_t)(ECX));
  /* 11783387 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1178338a push ecx */
  push32((uint32_t)(ECX));
  /* 1178338b push eax */
  push32((uint32_t)(EAX));
  /* 1178338c call 0x11783e20 */
  push32(0x11783391u); f_11783e20();
  /* 11783391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783394 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11783397 dec dword ptr [0x11786748] */
  { uint32_t _r=(r32((uint32_t)(0x11786748)))-1; w32((uint32_t)(0x11786748), (_r)); fl_dec(_r,32); }
  /* 1178339d cmp eax, dword ptr [0x11786744] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11786744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117833a3 jbe 0x117833a8 */
  if ((C.cf||C.zf)) goto L_117833a8;
  /* 117833a5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117833a8:;
  /* 117833a8 mov ecx, dword ptr [0x1178674c] */
  ECX = (r32((uint32_t)(0x1178674c)));
  /* 117833ae mov dword ptr [0x11786740], ecx */
  w32((uint32_t)(0x11786740), (ECX));
  /* 117833b4 jmp 0x117833b9 */
  goto L_117833b9;
L_117833b6:;
  /* 117833b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117833b9:;
  /* 117833b9 mov dword ptr [0x11786744], eax */
  w32((uint32_t)(0x11786744), (EAX));
  /* 117833be mov dword ptr [0x1178673c], esi */
  w32((uint32_t)(0x1178673c), (ESI));
L_117833c4:;
  /* 117833c4 pop edi */
  EDI = (pop32());
  /* 117833c5 pop esi */
  ESI = (pop32());
  /* 117833c6 pop ebx */
  EBX = (pop32());
  /* 117833c7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117833c8 ret  */
  ESPCHK(0x1178309eu, _esp0);
  ESP += 4; return;
}

/* FUN_100033c9 @ 0x117833c9 (777 bytes, 275 insns) */
void f_117833c9(void) {
  FTRACE(0x117833c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117833c9 push ebp */
  push32((uint32_t)(EBP));
  /* 117833ca mov ebp, esp */
  EBP = (ESP);
  /* 117833cc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117833cf mov eax, dword ptr [0x11786748] */
  EAX = (r32((uint32_t)(0x11786748)));
  /* 117833d4 mov edx, dword ptr [0x1178674c] */
  EDX = (r32((uint32_t)(0x1178674c)));
  /* 117833da push ebx */
  push32((uint32_t)(EBX));
  /* 117833db push esi */
  push32((uint32_t)(ESI));
  /* 117833dc lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 117833df push edi */
  push32((uint32_t)(EDI));
  /* 117833e0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 117833e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117833e6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 117833e9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 117833ec and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 117833ef mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117833f2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117833f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117833f6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117833f9 jge 0x11783409 */
  if ((C.sf==C.of)) goto L_11783409;
  /* 117833fb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 117833fe shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 11783400 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11783404 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11783407 jmp 0x11783419 */
  goto L_11783419;
L_11783409:;
  /* 11783409 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178340c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1178340f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11783411 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11783413 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 11783416 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11783419:;
  /* 11783419 mov eax, dword ptr [0x11786740] */
  EAX = (r32((uint32_t)(0x11786740)));
  /* 1178341e mov ebx, eax */
  EBX = (EAX);
  /* 11783420 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783422 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11783425 jae 0x11783440 */
  if (!C.cf) goto L_11783440;
L_11783427:;
  /* 11783427 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1178342a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1178342c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1178342f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11783431 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11783433 jne 0x11783440 */
  if (!C.zf) goto L_11783440;
  /* 11783435 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783438 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178343b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1178343e jb 0x11783427 */
  if (C.cf) goto L_11783427;
L_11783440:;
  /* 11783440 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783443 jne 0x117834be */
  if (!C.zf) goto L_117834be;
  /* 11783445 mov ebx, edx */
  EBX = (EDX);
L_11783447:;
  /* 11783447 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783449 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1178344c jae 0x11783463 */
  if (!C.cf) goto L_11783463;
  /* 1178344e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 11783451 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 11783453 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11783456 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 11783458 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1178345a jne 0x11783461 */
  if (!C.zf) goto L_11783461;
  /* 1178345c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178345f jmp 0x11783447 */
  goto L_11783447;
L_11783461:;
  /* 11783461 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11783463:;
  /* 11783463 jne 0x117834be */
  if (!C.zf) goto L_117834be;
L_11783465:;
  /* 11783465 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783468 jae 0x1178347b */
  if (!C.cf) goto L_1178347b;
  /* 1178346a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178346e jne 0x11783478 */
  if (!C.zf) goto L_11783478;
  /* 11783470 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783473 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11783476 jmp 0x11783465 */
  goto L_11783465;
L_11783478:;
  /* 11783478 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1178347b:;
  /* 1178347b jne 0x117834a3 */
  if (!C.zf) goto L_117834a3;
  /* 1178347d mov ebx, edx */
  EBX = (EDX);
L_1178347f:;
  /* 1178347f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783481 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 11783484 jae 0x11783493 */
  if (!C.cf) goto L_11783493;
  /* 11783486 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178348a jne 0x11783491 */
  if (!C.zf) goto L_11783491;
  /* 1178348c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1178348f jmp 0x1178347f */
  goto L_1178347f;
L_11783491:;
  /* 11783491 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_11783493:;
  /* 11783493 jne 0x117834a3 */
  if (!C.zf) goto L_117834a3;
  /* 11783495 call 0x117836d2 */
  push32(0x1178349au); f_117836d2();
  /* 1178349a mov ebx, eax */
  EBX = (EAX);
  /* 1178349c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1178349e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 117834a1 je 0x117834b7 */
  if (C.zf) goto L_117834b7;
L_117834a3:;
  /* 117834a3 push ebx */
  push32((uint32_t)(EBX));
  /* 117834a4 call 0x11783783 */
  push32(0x117834a9u); f_11783783();
  /* 117834a9 pop ecx */
  ECX = (pop32());
  /* 117834aa mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 117834ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117834af mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117834b2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117834b5 jne 0x117834be */
  if (!C.zf) goto L_117834be;
L_117834b7:;
  /* 117834b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117834b9 jmp 0x117836cd */
  goto L_117836cd;
L_117834be:;
  /* 117834be mov dword ptr [0x11786740], ebx */
  w32((uint32_t)(0x11786740), (EBX));
  /* 117834c4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 117834c7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117834c9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117834cc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117834cf je 0x117834e5 */
  if (C.zf) goto L_117834e5;
  /* 117834d1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 117834d8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 117834dc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 117834df and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 117834e1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 117834e3 jne 0x1178351c */
  if (!C.zf) goto L_1178351c;
L_117834e5:;
  /* 117834e5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 117834eb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 117834ee and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 117834f1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 117834f4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 117834f8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 117834fb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 117834fd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 11783500 jne 0x11783519 */
  if (!C.zf) goto L_11783519;
L_11783502:;
  /* 11783502 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 11783508 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1178350b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1178350e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783511 mov edi, esi */
  EDI = (ESI);
  /* 11783513 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 11783515 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 11783517 je 0x11783502 */
  if (C.zf) goto L_11783502;
L_11783519:;
  /* 11783519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1178351c:;
  /* 1178351c mov ecx, edx */
  ECX = (EDX);
  /* 1178351e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11783520 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11783526 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1178352d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11783530 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 11783534 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11783536 jne 0x11783545 */
  if (!C.zf) goto L_11783545;
  /* 11783538 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1178353f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11783541 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 11783544 pop edi */
  EDI = (pop32());
L_11783545:;
  /* 11783545 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11783547 jl 0x1178354e */
  if ((C.sf!=C.of)) goto L_1178354e;
  /* 11783549 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1178354b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1178354c jmp 0x11783545 */
  goto L_11783545;
L_1178354e:;
  /* 1178354e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11783551 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 11783555 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11783557 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178355a mov esi, ecx */
  ESI = (ECX);
  /* 1178355c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1178355f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 11783562 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11783563 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783566 jle 0x1178356b */
  if ((C.zf||C.sf!=C.of)) goto L_1178356b;
  /* 11783568 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1178356a pop esi */
  ESI = (pop32());
L_1178356b:;
  /* 1178356b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178356d je 0x11783680 */
  if (C.zf) goto L_11783680;
  /* 11783573 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11783576 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783579 jne 0x117835dc */
  if (!C.zf) goto L_117835dc;
  /* 1178357b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178357e jge 0x117835ab */
  if ((C.sf==C.of)) goto L_117835ab;
  /* 11783580 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 11783585 mov ecx, edi */
  ECX = (EDI);
  /* 11783587 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 11783589 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1178358c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 11783590 not ebx */
  EBX = (~(EBX));
  /* 11783592 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 11783595 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 11783599 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1178359d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1178359f jne 0x117835d9 */
  if (!C.zf) goto L_117835d9;
  /* 117835a1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117835a4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117835a7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 117835a9 jmp 0x117835dc */
  goto L_117835dc;
L_117835ab:;
  /* 117835ab lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 117835ae mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 117835b3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 117835b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117835b8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 117835bc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 117835c3 not ebx */
  EBX = (~(EBX));
  /* 117835c5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 117835c7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 117835c9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 117835cc jne 0x117835d9 */
  if (!C.zf) goto L_117835d9;
  /* 117835ce mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 117835d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117835d4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 117835d7 jmp 0x117835dc */
  goto L_117835dc;
L_117835d9:;
  /* 117835d9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_117835dc:;
  /* 117835dc mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 117835df mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 117835e2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117835e6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 117835e9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 117835ec mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 117835ef mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 117835f2 je 0x1178368c */
  if (C.zf) goto L_1178368c;
  /* 117835f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117835fb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 117835ff lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 11783602 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 11783605 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11783608 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1178360b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1178360e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11783611 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11783614 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783617 jne 0x1178367d */
  if (!C.zf) goto L_1178367d;
  /* 11783619 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1178361d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783620 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 11783623 jge 0x1178364e */
  if ((C.sf==C.of)) goto L_1178364e;
  /* 11783625 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11783627 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1178362b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1178362f jne 0x1178363c */
  if (!C.zf) goto L_1178363c;
  /* 11783631 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11783636 mov ecx, esi */
  ECX = (ESI);
  /* 11783638 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1178363a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1178363c:;
  /* 1178363c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11783641 mov ecx, esi */
  ECX = (ESI);
  /* 11783643 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11783645 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11783648 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1178364c jmp 0x1178367d */
  goto L_1178367d;
L_1178364e:;
  /* 1178364e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 11783650 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11783654 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 11783658 jne 0x11783667 */
  if (!C.zf) goto L_11783667;
  /* 1178365a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1178365d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 11783662 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 11783664 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_11783667:;
  /* 11783667 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1178366a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 11783671 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 11783674 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 11783679 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1178367b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1178367d:;
  /* 1178367d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_11783680:;
  /* 11783680 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11783682 je 0x1178368f */
  if (C.zf) goto L_1178368f;
  /* 11783684 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11783686 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1178368a jmp 0x1178368f */
  goto L_1178368f;
L_1178368c:;
  /* 1178368c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1178368f:;
  /* 1178368f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 11783692 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783694 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 11783697 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11783699 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1178369d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 117836a0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 117836a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117836a4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 117836a7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 117836a9 jne 0x117836c5 */
  if (!C.zf) goto L_117836c5;
  /* 117836ab cmp ebx, dword ptr [0x11786744] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11786744))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117836b1 jne 0x117836c5 */
  if (!C.zf) goto L_117836c5;
  /* 117836b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117836b6 cmp ecx, dword ptr [0x1178673c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1178673c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117836bc jne 0x117836c5 */
  if (!C.zf) goto L_117836c5;
  /* 117836be and dword ptr [0x11786744], 0 */
  { uint32_t _r=(r32((uint32_t)(0x11786744)))&(0x0u); w32((uint32_t)(0x11786744), (_r)); fl_logic(_r,32); }
L_117836c5:;
  /* 117836c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117836c8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117836ca lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_117836cd:;
  /* 117836cd pop edi */
  EDI = (pop32());
  /* 117836ce pop esi */
  ESI = (pop32());
  /* 117836cf pop ebx */
  EBX = (pop32());
  /* 117836d0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117836d1 ret  */
  ESPCHK(0x117833c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d2 @ 0x117836d2 (177 bytes, 53 insns) */
void f_117836d2(void) {
  FTRACE(0x117836d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117836d2 mov eax, dword ptr [0x11786748] */
  EAX = (r32((uint32_t)(0x11786748)));
  /* 117836d7 mov ecx, dword ptr [0x11786738] */
  ECX = (r32((uint32_t)(0x11786738)));
  /* 117836dd push esi */
  push32((uint32_t)(ESI));
  /* 117836de push edi */
  push32((uint32_t)(EDI));
  /* 117836df xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 117836e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117836e3 jne 0x11783715 */
  if (!C.zf) goto L_11783715;
  /* 117836e5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 117836e9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 117836ec push eax */
  push32((uint32_t)(EAX));
  /* 117836ed push dword ptr [0x1178674c] */
  push32((uint32_t)(r32((uint32_t)(0x1178674c))));
  /* 117836f3 push edi */
  push32((uint32_t)(EDI));
  /* 117836f4 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 117836fa call dword ptr [0x11785024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785024))), 0x11783700u);
  /* 11783700 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783702 je 0x11783765 */
  if (C.zf) goto L_11783765;
  /* 11783704 add dword ptr [0x11786738], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x11786738))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x11786738), (_r)); fl_add(_a,_b,_r,32); }
  /* 1178370b mov dword ptr [0x1178674c], eax */
  w32((uint32_t)(0x1178674c), (EAX));
  /* 11783710 mov eax, dword ptr [0x11786748] */
  EAX = (r32((uint32_t)(0x11786748)));
L_11783715:;
  /* 11783715 mov ecx, dword ptr [0x1178674c] */
  ECX = (r32((uint32_t)(0x1178674c)));
  /* 1178371b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11783720 push 8 */
  push32((uint32_t)(0x8u));
  /* 11783722 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 11783725 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 1178372b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1178372e call dword ptr [0x11785038] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785038))), 0x11783734u);
  /* 11783734 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783736 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11783739 je 0x11783765 */
  if (C.zf) goto L_11783765;
  /* 1178373b push 4 */
  push32((uint32_t)(0x4u));
  /* 1178373d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11783742 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11783747 push edi */
  push32((uint32_t)(EDI));
  /* 11783748 call dword ptr [0x11785028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785028))), 0x1178374eu);
  /* 1178374e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783750 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11783753 jne 0x11783769 */
  if (!C.zf) goto L_11783769;
  /* 11783755 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11783758 push edi */
  push32((uint32_t)(EDI));
  /* 11783759 push dword ptr [0x11786988] */
  push32((uint32_t)(r32((uint32_t)(0x11786988))));
  /* 1178375f call dword ptr [0x1178504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178504c))), 0x11783765u);
L_11783765:;
  /* 11783765 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11783767 jmp 0x11783780 */
  goto L_11783780;
L_11783769:;
  /* 11783769 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1178376d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1178376f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11783772 inc dword ptr [0x11786748] */
  { uint32_t _r=(r32((uint32_t)(0x11786748)))+1; w32((uint32_t)(0x11786748), (_r)); fl_inc(_r,32); }
  /* 11783778 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1178377b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1178377e mov eax, esi */
  EAX = (ESI);
L_11783780:;
  /* 11783780 pop edi */
  EDI = (pop32());
  /* 11783781 pop esi */
  ESI = (pop32());
  /* 11783782 ret  */
  ESPCHK(0x117836d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003783 @ 0x11783783 (251 bytes, 85 insns) */
void f_11783783(void) {
  FTRACE(0x11783783u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783783 push ebp */
  push32((uint32_t)(EBP));
  /* 11783784 mov ebp, esp */
  EBP = (ESP);
  /* 11783786 push ecx */
  push32((uint32_t)(ECX));
  /* 11783787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1178378a push ebx */
  push32((uint32_t)(EBX));
  /* 1178378b push esi */
  push32((uint32_t)(ESI));
  /* 1178378c push edi */
  push32((uint32_t)(EDI));
  /* 1178378d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 11783790 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11783793 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11783795:;
  /* 11783795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783797 jl 0x1178379e */
  if ((C.sf!=C.of)) goto L_1178379e;
  /* 11783799 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1178379b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1178379c jmp 0x11783795 */
  goto L_11783795;
L_1178379e:;
  /* 1178379e mov eax, ebx */
  EAX = (EBX);
  /* 117837a0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 117837a2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117837a8 pop edx */
  EDX = (pop32());
  /* 117837a9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 117837b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117837b3:;
  /* 117837b3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 117837b6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 117837b9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117837bc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 117837bd jne 0x117837b3 */
  if (!C.zf) goto L_117837b3;
  /* 117837bf mov edi, ebx */
  EDI = (EBX);
  /* 117837c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 117837c3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 117837c6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117837c9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117837ce push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117837d3 push edi */
  push32((uint32_t)(EDI));
  /* 117837d4 call dword ptr [0x11785028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785028))), 0x117837dau);
  /* 117837da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117837dc jne 0x117837e6 */
  if (!C.zf) goto L_117837e6;
  /* 117837de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117837e1 jmp 0x11783879 */
  goto L_11783879;
L_117837e6:;
  /* 117837e6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 117837ec cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117837ee ja 0x1178382c */
  if ((!C.cf&&!C.zf)) goto L_1178382c;
  /* 117837f0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_117837f3:;
  /* 117837f3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 117837f7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 117837fe lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 11783804 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1178380b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1178380d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 11783813 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11783816 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 11783820 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783825 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 11783828 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178382a jbe 0x117837f3 */
  if ((C.cf||C.zf)) goto L_117837f3;
L_1178382c:;
  /* 1178382c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1178382f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 11783832 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783837 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783839 pop edi */
  EDI = (pop32());
  /* 1178383a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1178383d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11783840 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 11783843 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11783846 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11783849 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1178384e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 11783855 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 11783858 mov cl, al */
  CL = (AL);
  /* 1178385a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1178385c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178385e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783861 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 11783864 jne 0x11783869 */
  if (!C.zf) goto L_11783869;
  /* 11783866 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_11783869:;
  /* 11783869 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1178386e mov ecx, ebx */
  ECX = (EBX);
  /* 11783870 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11783872 not edx */
  EDX = (~(EDX));
  /* 11783874 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 11783877 mov eax, ebx */
  EAX = (EBX);
L_11783879:;
  /* 11783879 pop edi */
  EDI = (pop32());
  /* 1178387a pop esi */
  ESI = (pop32());
  /* 1178387b pop ebx */
  EBX = (pop32());
  /* 1178387c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1178387d ret  */
  ESPCHK(0x11783783u, _esp0);
  ESP += 4; return;
}

/* FUN_1000387e @ 0x1178387e (137 bytes, 50 insns) */
void f_1178387e(void) {
  FTRACE(0x1178387eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178387e push ebx */
  push32((uint32_t)(EBX));
  /* 1178387f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11783881 cmp dword ptr [0x117866fc], ebx */
  { uint32_t _a=(r32((uint32_t)(0x117866fc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783887 push esi */
  push32((uint32_t)(ESI));
  /* 11783888 push edi */
  push32((uint32_t)(EDI));
  /* 11783889 jne 0x117838cd */
  if (!C.zf) goto L_117838cd;
  /* 1178388b push 0x11785440 */
  push32((uint32_t)(0x11785440u));
  /* 11783890 call dword ptr [0x1178501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178501c))), 0x11783896u);
  /* 11783896 mov edi, eax */
  EDI = (EAX);
  /* 11783898 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178389a je 0x11783903 */
  if (C.zf) goto L_11783903;
  /* 1178389c mov esi, dword ptr [0x11785020] */
  ESI = (r32((uint32_t)(0x11785020)));
  /* 117838a2 push 0x11785434 */
  push32((uint32_t)(0x11785434u));
  /* 117838a7 push edi */
  push32((uint32_t)(EDI));
  /* 117838a8 call esi */
  call_ind((uint32_t)(ESI), 0x117838aau);
  /* 117838aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117838ac mov dword ptr [0x117866fc], eax */
  w32((uint32_t)(0x117866fc), (EAX));
  /* 117838b1 je 0x11783903 */
  if (C.zf) goto L_11783903;
  /* 117838b3 push 0x11785424 */
  push32((uint32_t)(0x11785424u));
  /* 117838b8 push edi */
  push32((uint32_t)(EDI));
  /* 117838b9 call esi */
  call_ind((uint32_t)(ESI), 0x117838bbu);
  /* 117838bb push 0x11785410 */
  push32((uint32_t)(0x11785410u));
  /* 117838c0 push edi */
  push32((uint32_t)(EDI));
  /* 117838c1 mov dword ptr [0x11786700], eax */
  w32((uint32_t)(0x11786700), (EAX));
  /* 117838c6 call esi */
  call_ind((uint32_t)(ESI), 0x117838c8u);
  /* 117838c8 mov dword ptr [0x11786704], eax */
  w32((uint32_t)(0x11786704), (EAX));
L_117838cd:;
  /* 117838cd mov eax, dword ptr [0x11786700] */
  EAX = (r32((uint32_t)(0x11786700)));
  /* 117838d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117838d4 je 0x117838ec */
  if (C.zf) goto L_117838ec;
  /* 117838d6 call eax */
  call_ind((uint32_t)(EAX), 0x117838d8u);
  /* 117838d8 mov ebx, eax */
  EBX = (EAX);
  /* 117838da test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 117838dc je 0x117838ec */
  if (C.zf) goto L_117838ec;
  /* 117838de mov eax, dword ptr [0x11786704] */
  EAX = (r32((uint32_t)(0x11786704)));
  /* 117838e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117838e5 je 0x117838ec */
  if (C.zf) goto L_117838ec;
  /* 117838e7 push ebx */
  push32((uint32_t)(EBX));
  /* 117838e8 call eax */
  call_ind((uint32_t)(EAX), 0x117838eau);
  /* 117838ea mov ebx, eax */
  EBX = (EAX);
L_117838ec:;
  /* 117838ec push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117838f0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117838f4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 117838f8 push ebx */
  push32((uint32_t)(EBX));
  /* 117838f9 call dword ptr [0x117866fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117866fc))), 0x117838ffu);
L_117838ff:;
  /* 117838ff pop edi */
  EDI = (pop32());
  /* 11783900 pop esi */
  ESI = (pop32());
  /* 11783901 pop ebx */
  EBX = (pop32());
  /* 11783902 ret  */
  ESPCHK(0x1178387eu, _esp0);
  ESP += 4; return;
L_11783903:;
  /* 11783903 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11783905 jmp 0x117838ff */
  goto L_117838ff;
}

/* _strncpy @ 0x11783910 (254 bytes, 109 insns) */
void f_11783910(void) {
  FTRACE(0x11783910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783910 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11783914 push edi */
  push32((uint32_t)(EDI));
  /* 11783915 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11783917 je 0x11783993 */
  if (C.zf) goto L_11783993;
  /* 11783919 push esi */
  push32((uint32_t)(ESI));
  /* 1178391a push ebx */
  push32((uint32_t)(EBX));
  /* 1178391b mov ebx, ecx */
  EBX = (ECX);
  /* 1178391d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11783921 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11783927 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1178392b jne 0x11783934 */
  if (!C.zf) goto L_11783934;
  /* 1178392d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783930 jne 0x117839a1 */
  if (!C.zf) goto L_117839a1;
  /* 11783932 jmp 0x11783955 */
  goto L_11783955;
L_11783934:;
  /* 11783934 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783936 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11783937 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783939 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1178393a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1178393b je 0x11783962 */
  if (C.zf) goto L_11783962;
  /* 1178393d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178393f je 0x1178396a */
  if (C.zf) goto L_1178396a;
  /* 11783941 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11783947 jne 0x11783934 */
  if (!C.zf) goto L_11783934;
  /* 11783949 mov ebx, ecx */
  EBX = (ECX);
  /* 1178394b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1178394e jne 0x117839a1 */
  if (!C.zf) goto L_117839a1;
L_11783950:;
  /* 11783950 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11783953 je 0x11783962 */
  if (C.zf) goto L_11783962;
L_11783955:;
  /* 11783955 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783957 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11783958 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1178395a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1178395b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1178395d je 0x1178398e */
  if (C.zf) goto L_1178398e;
  /* 1178395f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11783960 jne 0x11783955 */
  if (!C.zf) goto L_11783955;
L_11783962:;
  /* 11783962 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11783966 pop ebx */
  EBX = (pop32());
  /* 11783967 pop esi */
  ESI = (pop32());
  /* 11783968 pop edi */
  EDI = (pop32());
  /* 11783969 ret  */
  ESPCHK(0x11783910u, _esp0);
  ESP += 4; return;
L_1178396a:;
  /* 1178396a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11783970 je 0x11783984 */
  if (C.zf) goto L_11783984;
L_11783972:;
  /* 11783972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783974 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11783975 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11783976 je 0x11783a06 */
  if (C.zf) goto L_11783a06;
  /* 1178397c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11783982 jne 0x11783972 */
  if (!C.zf) goto L_11783972;
L_11783984:;
  /* 11783984 mov ebx, ecx */
  EBX = (ECX);
  /* 11783986 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783989 jne 0x117839f7 */
  if (!C.zf) goto L_117839f7;
L_1178398b:;
  /* 1178398b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1178398d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1178398e:;
  /* 1178398e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1178398f jne 0x1178398b */
  if (!C.zf) goto L_1178398b;
  /* 11783991 pop ebx */
  EBX = (pop32());
  /* 11783992 pop esi */
  ESI = (pop32());
L_11783993:;
  /* 11783993 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11783997 pop edi */
  EDI = (pop32());
  /* 11783998 ret  */
  ESPCHK(0x11783910u, _esp0);
  ESP += 4; return;
L_11783999:;
  /* 11783999 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1178399b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1178399e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1178399f je 0x11783950 */
  if (C.zf) goto L_11783950;
L_117839a1:;
  /* 117839a1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117839a6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 117839a8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117839aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117839ad xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117839af mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 117839b1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117839b4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117839b9 je 0x11783999 */
  if (C.zf) goto L_11783999;
  /* 117839bb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117839bd je 0x117839eb */
  if (C.zf) goto L_117839eb;
  /* 117839bf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117839c1 je 0x117839e1 */
  if (C.zf) goto L_117839e1;
  /* 117839c3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117839c9 je 0x117839d7 */
  if (C.zf) goto L_117839d7;
  /* 117839cb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117839d1 jne 0x11783999 */
  if (!C.zf) goto L_11783999;
  /* 117839d3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117839d5 jmp 0x117839ef */
  goto L_117839ef;
L_117839d7:;
  /* 117839d7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117839dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117839df jmp 0x117839ef */
  goto L_117839ef;
L_117839e1:;
  /* 117839e1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117839e7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117839e9 jmp 0x117839ef */
  goto L_117839ef;
L_117839eb:;
  /* 117839eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117839ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_117839ef:;
  /* 117839ef add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117839f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117839f4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117839f5 je 0x11783a01 */
  if (C.zf) goto L_11783a01;
L_117839f7:;
  /* 117839f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117839f9:;
  /* 117839f9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 117839fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117839fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 117839ff jne 0x117839f9 */
  if (!C.zf) goto L_117839f9;
L_11783a01:;
  /* 11783a01 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11783a04 jne 0x1178398b */
  if (!C.zf) goto L_1178398b;
L_11783a06:;
  /* 11783a06 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11783a0a pop ebx */
  EBX = (pop32());
  /* 11783a0b pop esi */
  ESI = (pop32());
  /* 11783a0c pop edi */
  EDI = (pop32());
  /* 11783a0d ret  */
  ESPCHK(0x11783910u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11783a10 (88 bytes, 40 insns) */
void f_11783a10(void) {
  FTRACE(0x11783a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783a10 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11783a14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11783a18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11783a1a je 0x11783a63 */
  if (C.zf) goto L_11783a63;
  /* 11783a1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11783a1e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11783a22 push edi */
  push32((uint32_t)(EDI));
  /* 11783a23 mov edi, ecx */
  EDI = (ECX);
  /* 11783a25 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783a28 jb 0x11783a57 */
  if (C.cf) goto L_11783a57;
  /* 11783a2a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11783a2c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11783a2f je 0x11783a39 */
  if (C.zf) goto L_11783a39;
  /* 11783a31 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11783a33:;
  /* 11783a33 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783a35 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11783a36 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11783a37 jne 0x11783a33 */
  if (!C.zf) goto L_11783a33;
L_11783a39:;
  /* 11783a39 mov ecx, eax */
  ECX = (EAX);
  /* 11783a3b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11783a3e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783a40 mov ecx, eax */
  ECX = (EAX);
  /* 11783a42 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11783a45 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783a47 mov ecx, edx */
  ECX = (EDX);
  /* 11783a49 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11783a4c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783a4f je 0x11783a57 */
  if (C.zf) goto L_11783a57;
  /* 11783a51 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11783a53 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11783a55 je 0x11783a5d */
  if (C.zf) goto L_11783a5d;
L_11783a57:;
  /* 11783a57 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11783a5a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11783a5b jne 0x11783a57 */
  if (!C.zf) goto L_11783a57;
L_11783a5d:;
  /* 11783a5d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11783a61 pop edi */
  EDI = (pop32());
  /* 11783a62 ret  */
  ESPCHK(0x11783a10u, _esp0);
  ESP += 4; return;
L_11783a63:;
  /* 11783a63 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11783a67 ret  */
  ESPCHK(0x11783a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a68 @ 0x11783a68 (27 bytes, 13 insns) */
void f_11783a68(void) {
  FTRACE(0x11783a68u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783a68 mov eax, dword ptr [0x11786708] */
  EAX = (r32((uint32_t)(0x11786708)));
  /* 11783a6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783a6f je 0x11783a80 */
  if (C.zf) goto L_11783a80;
  /* 11783a71 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11783a75 call eax */
  call_ind((uint32_t)(EAX), 0x11783a77u);
  /* 11783a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783a79 pop ecx */
  ECX = (pop32());
  /* 11783a7a je 0x11783a80 */
  if (C.zf) goto L_11783a80;
  /* 11783a7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11783a7e pop eax */
  EAX = (pop32());
  /* 11783a7f ret  */
  ESPCHK(0x11783a68u, _esp0);
  ESP += 4; return;
L_11783a80:;
  /* 11783a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11783a82 ret  */
  ESPCHK(0x11783a68u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a83 @ 0x11783a83 (511 bytes, 193 insns) */
void f_11783a83(void) {
  FTRACE(0x11783a83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783a83 push ebp */
  push32((uint32_t)(EBP));
  /* 11783a84 mov ebp, esp */
  EBP = (ESP);
  /* 11783a86 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11783a88 push 0x11785458 */
  push32((uint32_t)(0x11785458u));
  /* 11783a8d push 0x11784250 */
  push32((uint32_t)(0x11784250u));
  /* 11783a92 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11783a98 push eax */
  push32((uint32_t)(EAX));
  /* 11783a99 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11783aa0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783aa3 push ebx */
  push32((uint32_t)(EBX));
  /* 11783aa4 push esi */
  push32((uint32_t)(ESI));
  /* 11783aa5 push edi */
  push32((uint32_t)(EDI));
  /* 11783aa6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11783aa9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11783aab cmp dword ptr [0x11786730], edi */
  { uint32_t _a=(r32((uint32_t)(0x11786730))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783ab1 jne 0x11783af9 */
  if (!C.zf) goto L_11783af9;
  /* 11783ab3 push edi */
  push32((uint32_t)(EDI));
  /* 11783ab4 push edi */
  push32((uint32_t)(EDI));
  /* 11783ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783ab7 pop ebx */
  EBX = (pop32());
  /* 11783ab8 push ebx */
  push32((uint32_t)(EBX));
  /* 11783ab9 push 0x11785450 */
  push32((uint32_t)(0x11785450u));
  /* 11783abe mov esi, 0x100 */
  ESI = (0x100u);
  /* 11783ac3 push esi */
  push32((uint32_t)(ESI));
  /* 11783ac4 push edi */
  push32((uint32_t)(EDI));
  /* 11783ac5 call dword ptr [0x11785010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785010))), 0x11783acbu);
  /* 11783acb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783acd je 0x11783ad7 */
  if (C.zf) goto L_11783ad7;
  /* 11783acf mov dword ptr [0x11786730], ebx */
  w32((uint32_t)(0x11786730), (EBX));
  /* 11783ad5 jmp 0x11783af9 */
  goto L_11783af9;
L_11783ad7:;
  /* 11783ad7 push edi */
  push32((uint32_t)(EDI));
  /* 11783ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11783ad9 push ebx */
  push32((uint32_t)(EBX));
  /* 11783ada push 0x1178544c */
  push32((uint32_t)(0x1178544cu));
  /* 11783adf push esi */
  push32((uint32_t)(ESI));
  /* 11783ae0 push edi */
  push32((uint32_t)(EDI));
  /* 11783ae1 call dword ptr [0x11785014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785014))), 0x11783ae7u);
  /* 11783ae7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783ae9 je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783aef mov dword ptr [0x11786730], 2 */
  w32((uint32_t)(0x11786730), (0x2u));
L_11783af9:;
  /* 11783af9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783afc jle 0x11783b0e */
  if ((C.zf||C.sf!=C.of)) goto L_11783b0e;
  /* 11783afe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783b01 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783b04 call 0x11783ca7 */
  push32(0x11783b09u); f_11783ca7();
  /* 11783b09 pop ecx */
  ECX = (pop32());
  /* 11783b0a pop ecx */
  ECX = (pop32());
  /* 11783b0b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11783b0e:;
  /* 11783b0e mov eax, dword ptr [0x11786730] */
  EAX = (r32((uint32_t)(0x11786730)));
  /* 11783b13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783b16 jne 0x11783b35 */
  if (!C.zf) goto L_11783b35;
  /* 11783b18 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11783b1b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11783b1e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783b21 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783b24 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783b27 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783b2a call dword ptr [0x11785014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785014))), 0x11783b30u);
  /* 11783b30 jmp 0x11783c13 */
  goto L_11783c13;
L_11783b35:;
  /* 11783b35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783b38 jne 0x11783c11 */
  if (!C.zf) goto L_11783c11;
  /* 11783b3e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783b41 jne 0x11783b4b */
  if (!C.zf) goto L_11783b4b;
  /* 11783b43 mov eax, dword ptr [0x11786728] */
  EAX = (r32((uint32_t)(0x11786728)));
  /* 11783b48 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11783b4b:;
  /* 11783b4b push edi */
  push32((uint32_t)(EDI));
  /* 11783b4c push edi */
  push32((uint32_t)(EDI));
  /* 11783b4d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783b50 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783b53 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11783b56 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11783b58 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783b5a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11783b5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11783b5e push eax */
  push32((uint32_t)(EAX));
  /* 11783b5f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11783b62 call dword ptr [0x11785018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785018))), 0x11783b68u);
  /* 11783b68 mov ebx, eax */
  EBX = (EAX);
  /* 11783b6a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 11783b6d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783b6f je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783b75 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11783b78 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 11783b7b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783b7e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11783b80 call 0x11784330 */
  push32(0x11783b85u); f_11784330();
  /* 11783b85 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11783b88 mov eax, esp */
  EAX = (ESP);
  /* 11783b8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11783b8d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11783b91 jmp 0x11783ba6 */
  goto L_11783ba6;
  /* 11783b93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783b95 pop eax */
  EAX = (pop32());
  /* 11783b96 ret  */
  ESPCHK(0x11783a83u, _esp0);
  ESP += 4; return;
  /* 11783b97 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11783b9a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11783b9c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 11783b9f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11783ba3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_11783ba6:;
  /* 11783ba6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783ba9 je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783bab push ebx */
  push32((uint32_t)(EBX));
  /* 11783bac push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11783baf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783bb2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783bb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783bb7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11783bba call dword ptr [0x11785018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785018))), 0x11783bc0u);
  /* 11783bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783bc2 je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783bc4 push edi */
  push32((uint32_t)(EDI));
  /* 11783bc5 push edi */
  push32((uint32_t)(EDI));
  /* 11783bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11783bc7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11783bca push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783bcd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783bd0 call dword ptr [0x11785010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785010))), 0x11783bd6u);
  /* 11783bd6 mov esi, eax */
  ESI = (EAX);
  /* 11783bd8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 11783bdb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783bdd je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783bdf test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 11783be3 je 0x11783c25 */
  if (C.zf) goto L_11783c25;
  /* 11783be5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783be8 je 0x11783ca0 */
  if (C.zf) goto L_11783ca0;
  /* 11783bee cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783bf1 jg 0x11783c11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11783c11;
  /* 11783bf3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11783bf6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11783bf9 push ebx */
  push32((uint32_t)(EBX));
  /* 11783bfa push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11783bfd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783c00 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783c03 call dword ptr [0x11785010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785010))), 0x11783c09u);
  /* 11783c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783c0b jne 0x11783ca0 */
  if (!C.zf) goto L_11783ca0;
L_11783c11:;
  /* 11783c11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11783c13:;
  /* 11783c13 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11783c16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11783c19 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11783c20 pop edi */
  EDI = (pop32());
  /* 11783c21 pop esi */
  ESI = (pop32());
  /* 11783c22 pop ebx */
  EBX = (pop32());
  /* 11783c23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783c24 ret  */
  ESPCHK(0x11783a83u, _esp0);
  ESP += 4; return;
L_11783c25:;
  /* 11783c25 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11783c2c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11783c2f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783c32 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11783c34 call 0x11784330 */
  push32(0x11783c39u); f_11784330();
  /* 11783c39 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11783c3c mov ebx, esp */
  EBX = (ESP);
  /* 11783c3e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 11783c41 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11783c45 jmp 0x11783c59 */
  goto L_11783c59;
  /* 11783c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783c49 pop eax */
  EAX = (pop32());
  /* 11783c4a ret  */
  ESPCHK(0x11783a83u, _esp0);
  ESP += 4; return;
  /* 11783c4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11783c4e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11783c50 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11783c52 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11783c56 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_11783c59:;
  /* 11783c59 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783c5b je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783c5d push esi */
  push32((uint32_t)(ESI));
  /* 11783c5e push ebx */
  push32((uint32_t)(EBX));
  /* 11783c5f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11783c62 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11783c65 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783c68 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783c6b call dword ptr [0x11785010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785010))), 0x11783c71u);
  /* 11783c71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783c73 je 0x11783c11 */
  if (C.zf) goto L_11783c11;
  /* 11783c75 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783c78 push edi */
  push32((uint32_t)(EDI));
  /* 11783c79 push edi */
  push32((uint32_t)(EDI));
  /* 11783c7a jne 0x11783c80 */
  if (!C.zf) goto L_11783c80;
  /* 11783c7c push edi */
  push32((uint32_t)(EDI));
  /* 11783c7d push edi */
  push32((uint32_t)(EDI));
  /* 11783c7e jmp 0x11783c86 */
  goto L_11783c86;
L_11783c80:;
  /* 11783c80 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11783c83 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_11783c86:;
  /* 11783c86 push esi */
  push32((uint32_t)(ESI));
  /* 11783c87 push ebx */
  push32((uint32_t)(EBX));
  /* 11783c88 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11783c8d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11783c90 call dword ptr [0x117850a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117850a8))), 0x11783c96u);
  /* 11783c96 mov esi, eax */
  ESI = (EAX);
  /* 11783c98 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783c9a je 0x11783c11 */
  if (C.zf) goto L_11783c11;
L_11783ca0:;
  /* 11783ca0 mov eax, esi */
  EAX = (ESI);
  /* 11783ca2 jmp 0x11783c13 */
  goto L_11783c13;
}

/* FUN_10003ca7 @ 0x11783ca7 (43 bytes, 20 insns) */
void f_11783ca7(void) {
  FTRACE(0x11783ca7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783ca7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11783cab mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11783caf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11783cb1 push esi */
  push32((uint32_t)(ESI));
  /* 11783cb2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 11783cb5 je 0x11783cc4 */
  if (C.zf) goto L_11783cc4;
L_11783cb7:;
  /* 11783cb7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11783cba je 0x11783cc4 */
  if (C.zf) goto L_11783cc4;
  /* 11783cbc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11783cbd mov esi, ecx */
  ESI = (ECX);
  /* 11783cbf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11783cc0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11783cc2 jne 0x11783cb7 */
  if (!C.zf) goto L_11783cb7;
L_11783cc4:;
  /* 11783cc4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11783cc7 pop esi */
  ESI = (pop32());
  /* 11783cc8 jne 0x11783ccf */
  if (!C.zf) goto L_11783ccf;
  /* 11783cca sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783cce ret  */
  ESPCHK(0x11783ca7u, _esp0);
  ESP += 4; return;
L_11783ccf:;
  /* 11783ccf mov eax, edx */
  EAX = (EDX);
  /* 11783cd1 ret  */
  ESPCHK(0x11783ca7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd2 @ 0x11783cd2 (318 bytes, 123 insns) */
void f_11783cd2(void) {
  FTRACE(0x11783cd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783cd2 push ebp */
  push32((uint32_t)(EBP));
  /* 11783cd3 mov ebp, esp */
  EBP = (ESP);
  /* 11783cd5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11783cd7 push 0x11785470 */
  push32((uint32_t)(0x11785470u));
  /* 11783cdc push 0x11784250 */
  push32((uint32_t)(0x11784250u));
  /* 11783ce1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11783ce7 push eax */
  push32((uint32_t)(EAX));
  /* 11783ce8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11783cef sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783cf2 push ebx */
  push32((uint32_t)(EBX));
  /* 11783cf3 push esi */
  push32((uint32_t)(ESI));
  /* 11783cf4 push edi */
  push32((uint32_t)(EDI));
  /* 11783cf5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11783cf8 mov eax, dword ptr [0x11786734] */
  EAX = (r32((uint32_t)(0x11786734)));
  /* 11783cfd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11783cff cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783d01 jne 0x11783d41 */
  if (!C.zf) goto L_11783d41;
  /* 11783d03 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11783d06 push eax */
  push32((uint32_t)(EAX));
  /* 11783d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783d09 pop esi */
  ESI = (pop32());
  /* 11783d0a push esi */
  push32((uint32_t)(ESI));
  /* 11783d0b push 0x11785450 */
  push32((uint32_t)(0x11785450u));
  /* 11783d10 push esi */
  push32((uint32_t)(ESI));
  /* 11783d11 call dword ptr [0x11785008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785008))), 0x11783d17u);
  /* 11783d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783d19 je 0x11783d1f */
  if (C.zf) goto L_11783d1f;
  /* 11783d1b mov eax, esi */
  EAX = (ESI);
  /* 11783d1d jmp 0x11783d3c */
  goto L_11783d3c;
L_11783d1f:;
  /* 11783d1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11783d22 push eax */
  push32((uint32_t)(EAX));
  /* 11783d23 push esi */
  push32((uint32_t)(ESI));
  /* 11783d24 push 0x1178544c */
  push32((uint32_t)(0x1178544cu));
  /* 11783d29 push esi */
  push32((uint32_t)(ESI));
  /* 11783d2a push ebx */
  push32((uint32_t)(EBX));
  /* 11783d2b call dword ptr [0x1178500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178500c))), 0x11783d31u);
  /* 11783d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11783d33 je 0x11783e07 */
  if (C.zf) goto L_11783e07;
  /* 11783d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 11783d3b pop eax */
  EAX = (pop32());
L_11783d3c:;
  /* 11783d3c mov dword ptr [0x11786734], eax */
  w32((uint32_t)(0x11786734), (EAX));
L_11783d41:;
  /* 11783d41 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783d44 jne 0x11783d6a */
  if (!C.zf) goto L_11783d6a;
  /* 11783d46 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11783d49 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783d4b jne 0x11783d52 */
  if (!C.zf) goto L_11783d52;
  /* 11783d4d mov eax, dword ptr [0x11786718] */
  EAX = (r32((uint32_t)(0x11786718)));
L_11783d52:;
  /* 11783d52 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783d55 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783d58 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783d5b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783d5e push eax */
  push32((uint32_t)(EAX));
  /* 11783d5f call dword ptr [0x1178500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1178500c))), 0x11783d65u);
  /* 11783d65 jmp 0x11783e09 */
  goto L_11783e09;
L_11783d6a:;
  /* 11783d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783d6d jne 0x11783e07 */
  if (!C.zf) goto L_11783e07;
  /* 11783d73 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783d76 jne 0x11783d80 */
  if (!C.zf) goto L_11783d80;
  /* 11783d78 mov eax, dword ptr [0x11786728] */
  EAX = (r32((uint32_t)(0x11786728)));
  /* 11783d7d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11783d80:;
  /* 11783d80 push ebx */
  push32((uint32_t)(EBX));
  /* 11783d81 push ebx */
  push32((uint32_t)(EBX));
  /* 11783d82 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783d85 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783d88 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11783d8b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11783d8d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783d8f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11783d92 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11783d93 push eax */
  push32((uint32_t)(EAX));
  /* 11783d94 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11783d97 call dword ptr [0x11785018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785018))), 0x11783d9du);
  /* 11783d9d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11783da0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783da2 je 0x11783e07 */
  if (C.zf) goto L_11783e07;
  /* 11783da4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11783da7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 11783daa mov eax, edi */
  EAX = (EDI);
  /* 11783dac add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783daf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11783db1 call 0x11784330 */
  push32(0x11783db6u); f_11784330();
  /* 11783db6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11783db9 mov esi, esp */
  ESI = (ESP);
  /* 11783dbb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 11783dbe push edi */
  push32((uint32_t)(EDI));
  /* 11783dbf push ebx */
  push32((uint32_t)(EBX));
  /* 11783dc0 push esi */
  push32((uint32_t)(ESI));
  /* 11783dc1 call 0x11783a10 */
  push32(0x11783dc6u); f_11783a10();
  /* 11783dc6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11783dc9 jmp 0x11783dd6 */
  goto L_11783dd6;
  /* 11783dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 11783dcd pop eax */
  EAX = (pop32());
  /* 11783dce ret  */
  ESPCHK(0x11783cd2u, _esp0);
  ESP += 4; return;
  /* 11783dcf mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11783dd2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11783dd4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11783dd6:;
  /* 11783dd6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11783dda cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783ddc je 0x11783e07 */
  if (C.zf) goto L_11783e07;
  /* 11783dde push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 11783de1 push esi */
  push32((uint32_t)(ESI));
  /* 11783de2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11783de5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11783de8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11783dea push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11783ded call dword ptr [0x11785018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785018))), 0x11783df3u);
  /* 11783df3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783df5 je 0x11783e07 */
  if (C.zf) goto L_11783e07;
  /* 11783df7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11783dfa push eax */
  push32((uint32_t)(EAX));
  /* 11783dfb push esi */
  push32((uint32_t)(ESI));
  /* 11783dfc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11783dff call dword ptr [0x11785008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11785008))), 0x11783e05u);
  /* 11783e05 jmp 0x11783e09 */
  goto L_11783e09;
L_11783e07:;
  /* 11783e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11783e09:;
  /* 11783e09 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11783e0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11783e0f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11783e16 pop edi */
  EDI = (pop32());
  /* 11783e17 pop esi */
  ESI = (pop32());
  /* 11783e18 pop ebx */
  EBX = (pop32());
  /* 11783e19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783e1a ret  */
  ESPCHK(0x11783cd2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e20 @ 0x11783e20 (664 bytes, 265 insns) [15 switch table(s)] */
void f_11783e20(void) {
  FTRACE(0x11783e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11783e20 push ebp */
  push32((uint32_t)(EBP));
  /* 11783e21 mov ebp, esp */
  EBP = (ESP);
  /* 11783e23 push edi */
  push32((uint32_t)(EDI));
  /* 11783e24 push esi */
  push32((uint32_t)(ESI));
  /* 11783e25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11783e28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11783e2b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11783e2e mov eax, ecx */
  EAX = (ECX);
  /* 11783e30 mov edx, ecx */
  EDX = (ECX);
  /* 11783e32 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783e34 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783e36 jbe 0x11783e40 */
  if ((C.cf||C.zf)) goto L_11783e40;
  /* 11783e38 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783e3a jb 0x11783fb8 */
  if (C.cf) goto L_11783fb8;
L_11783e40:;
  /* 11783e40 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11783e46 jne 0x11783e5c */
  if (!C.zf) goto L_11783e5c;
  /* 11783e48 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783e4b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11783e4e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783e51 jb 0x11783e7c */
  if (C.cf) goto L_11783e7c;
  /* 11783e53 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11783e55 jmp dword ptr [edx*4 + 0x11783f68] */
  switch (EDX) {
    case 0: goto L_11783f78;
    case 1: goto L_11783f80;
    case 2: goto L_11783f8c;
    case 3: goto L_11783fa0;
    default: x86_unimpl("switch@0x11783e55 out of table"); return;
  }
L_11783e5c:;
  /* 11783e5c mov eax, edi */
  EAX = (EDI);
  /* 11783e5e mov edx, 3 */
  EDX = (0x3u);
  /* 11783e63 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783e66 jb 0x11783e74 */
  if (C.cf) goto L_11783e74;
  /* 11783e68 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11783e6b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11783e6d jmp dword ptr [eax*4 + 0x11783e80] */
  switch (EAX) {
    case 1: goto L_11783e90;
    case 2: goto L_11783ebc;
    case 3: goto L_11783ee0;
    default: x86_unimpl("switch@0x11783e6d out of table"); return;
  }
L_11783e74:;
  /* 11783e74 jmp dword ptr [ecx*4 + 0x11783f78] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11783f78)))); return;
  /* 11783e7b nop  */
  /* nop */
L_11783e7c:;
  /* 11783e7c jmp dword ptr [ecx*4 + 0x11783efc] */
  switch (ECX) {
    case 0: goto L_11783f5f;
    case 1: goto L_11783f4c;
    case 2: goto L_11783f44;
    case 3: goto L_11783f3c;
    case 4: goto L_11783f34;
    case 5: goto L_11783f2c;
    case 6: goto L_11783f24;
    case 7: goto L_11783f1c;
    default: x86_unimpl("switch@0x11783e7c out of table"); return;
  }
  /* 11783e83 nop  */
  /* nop */
L_11783e90:;
  /* 11783e90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11783e92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783e94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783e96 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11783e99 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11783e9c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11783e9f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783ea2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11783ea5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11783ea8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11783eab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783eae jb 0x11783e7c */
  if (C.cf) goto L_11783e7c;
  /* 11783eb0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11783eb2 jmp dword ptr [edx*4 + 0x11783f68] */
  switch (EDX) {
    case 0: goto L_11783f78;
    case 1: goto L_11783f80;
    case 2: goto L_11783f8c;
    case 3: goto L_11783fa0;
    default: x86_unimpl("switch@0x11783eb2 out of table"); return;
  }
  /* 11783eb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11783ebc:;
  /* 11783ebc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11783ebe mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783ec0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783ec2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11783ec5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783ec8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11783ecb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11783ece add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11783ed1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783ed4 jb 0x11783e7c */
  if (C.cf) goto L_11783e7c;
  /* 11783ed6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11783ed8 jmp dword ptr [edx*4 + 0x11783f68] */
  switch (EDX) {
    case 0: goto L_11783f78;
    case 1: goto L_11783f80;
    case 2: goto L_11783f8c;
    case 3: goto L_11783fa0;
    default: x86_unimpl("switch@0x11783ed8 out of table"); return;
  }
  /* 11783edf nop  */
  /* nop */
L_11783ee0:;
  /* 11783ee0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11783ee2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783ee4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783ee6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11783ee7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783eea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11783eeb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783eee jb 0x11783e7c */
  if (C.cf) goto L_11783e7c;
  /* 11783ef0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11783ef2 jmp dword ptr [edx*4 + 0x11783f68] */
  switch (EDX) {
    case 0: goto L_11783f78;
    case 1: goto L_11783f80;
    case 2: goto L_11783f8c;
    case 3: goto L_11783fa0;
    default: x86_unimpl("switch@0x11783ef2 out of table"); return;
  }
  /* 11783ef9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11783f1c:;
  /* 11783f1c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11783f20 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11783f24:;
  /* 11783f24 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11783f28 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11783f2c:;
  /* 11783f2c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11783f30 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11783f34:;
  /* 11783f34 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11783f38 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11783f3c:;
  /* 11783f3c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11783f40 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11783f44:;
  /* 11783f44 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11783f48 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11783f4c:;
  /* 11783f4c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11783f50 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11783f54 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11783f5b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11783f5d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11783f5f:;
  /* 11783f5f jmp dword ptr [edx*4 + 0x11783f68] */
  switch (EDX) {
    case 0: goto L_11783f78;
    case 1: goto L_11783f80;
    case 2: goto L_11783f8c;
    case 3: goto L_11783fa0;
    default: x86_unimpl("switch@0x11783f5f out of table"); return;
  }
  /* 11783f66 mov edi, edi */
  EDI = (EDI);
L_11783f78:;
  /* 11783f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783f7b pop esi */
  ESI = (pop32());
  /* 11783f7c pop edi */
  EDI = (pop32());
  /* 11783f7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783f7e ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11783f7f nop  */
  /* nop */
L_11783f80:;
  /* 11783f80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783f82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783f87 pop esi */
  ESI = (pop32());
  /* 11783f88 pop edi */
  EDI = (pop32());
  /* 11783f89 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783f8a ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11783f8b nop  */
  /* nop */
L_11783f8c:;
  /* 11783f8c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783f8e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783f90 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11783f93 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11783f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783f99 pop esi */
  ESI = (pop32());
  /* 11783f9a pop edi */
  EDI = (pop32());
  /* 11783f9b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783f9c ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11783f9d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11783fa0:;
  /* 11783fa0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11783fa2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11783fa4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11783fa7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11783faa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11783fad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11783fb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11783fb3 pop esi */
  ESI = (pop32());
  /* 11783fb4 pop edi */
  EDI = (pop32());
  /* 11783fb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11783fb6 ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11783fb7 nop  */
  /* nop */
L_11783fb8:;
  /* 11783fb8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11783fbc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11783fc0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11783fc6 jne 0x11783fec */
  if (!C.zf) goto L_11783fec;
  /* 11783fc8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11783fcb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11783fce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783fd1 jb 0x11783fe0 */
  if (C.cf) goto L_11783fe0;
  /* 11783fd3 std  */
  C.df=1;
  /* 11783fd4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11783fd6 cld  */
  C.df=0;
  /* 11783fd7 jmp dword ptr [edx*4 + 0x11784100] */
  switch (EDX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x11783fd7 out of table"); return;
  }
  /* 11783fde mov edi, edi */
  EDI = (EDI);
L_11783fe0:;
  /* 11783fe0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11783fe2 jmp dword ptr [ecx*4 + 0x117840b0] */
  switch (ECX) {
    case 0: goto L_117840f7;
    default: x86_unimpl("switch@0x11783fe2 out of table"); return;
  }
  /* 11783fe9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11783fec:;
  /* 11783fec mov eax, edi */
  EAX = (EDI);
  /* 11783fee mov edx, 3 */
  EDX = (0x3u);
  /* 11783ff3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11783ff6 jb 0x11784004 */
  if (C.cf) goto L_11784004;
  /* 11783ff8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11783ffb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11783ffd jmp dword ptr [eax*4 + 0x11784008] */
  switch (EAX) {
    case 1: goto L_11784018;
    case 2: goto L_11784038;
    case 3: goto L_11784060;
    default: x86_unimpl("switch@0x11783ffd out of table"); return;
  }
L_11784004:;
  /* 11784004 jmp dword ptr [ecx*4 + 0x11784100] */
  switch (ECX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x11784004 out of table"); return;
  }
  /* 1178400b nop  */
  /* nop */
L_11784018:;
  /* 11784018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178401b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1178401d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11784020 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11784021 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11784024 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11784025 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11784028 jb 0x11783fe0 */
  if (C.cf) goto L_11783fe0;
  /* 1178402a std  */
  C.df=1;
  /* 1178402b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1178402d cld  */
  C.df=0;
  /* 1178402e jmp dword ptr [edx*4 + 0x11784100] */
  switch (EDX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x1178402e out of table"); return;
  }
  /* 11784035 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11784038:;
  /* 11784038 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178403b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1178403d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11784040 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11784043 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11784046 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11784049 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178404c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178404f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11784052 jb 0x11783fe0 */
  if (C.cf) goto L_11783fe0;
  /* 11784054 std  */
  C.df=1;
  /* 11784055 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11784057 cld  */
  C.df=0;
  /* 11784058 jmp dword ptr [edx*4 + 0x11784100] */
  switch (EDX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x11784058 out of table"); return;
  }
  /* 1178405f nop  */
  /* nop */
L_11784060:;
  /* 11784060 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11784063 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11784065 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11784068 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1178406b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1178406e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11784071 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11784074 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11784077 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178407a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1178407d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11784080 jb 0x11783fe0 */
  if (C.cf) goto L_11783fe0;
  /* 11784086 std  */
  C.df=1;
  /* 11784087 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11784089 cld  */
  C.df=0;
  /* 1178408a jmp dword ptr [edx*4 + 0x11784100] */
  switch (EDX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x1178408a out of table"); return;
  }
  /* 11784091 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11784094 mov ah, 0x40 */
  AH = (0x40u);
  /* 11784096 js 0x117840a9 */
  if (C.sf) goto L_117840a9;
  /* 11784098 mov esp, 0xc4117840 */
  ESP = (0xc4117840u);
  /* 1178409d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1178409e js 0x117840b1 */
  if (C.sf) goto L_117840b1;
  /* 117840a0 int3  */
  x86_unimpl("int3 @ 0x117840a0");
  /* 117840a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117840a2 js 0x117840b5 */
  if (C.sf) goto L_117840b5;
  /* 117840a4 aam 0x40 */
  x86_unimpl("aam @ 0x117840a4");
  /* 117840a6 js 0x117840b9 */
  if (C.sf) goto L_117840b9;
  /* 117840a8 fadd qword ptr [eax + 0x78] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EAX + 0x78)));
  /* 117840ab adc esp, esp */
  { uint32_t _a=(ESP),_b=(ESP),_r=_a+_b+C.cf; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117840ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 117840ae js 0x117840c1 */
  if (C.sf) goto L_117840c1;
  /* 117840b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117840b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117840bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117840c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117840c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117840c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117840cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117840d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117840d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117840d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117840dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117840e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117840e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117840e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117840ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117840f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117840f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117840f7:;
  /* 117840f7 jmp dword ptr [edx*4 + 0x11784100] */
  switch (EDX) {
    case 0: goto L_11784110;
    case 1: goto L_11784118;
    case 2: goto L_11784128;
    case 3: goto L_1178413c;
    default: x86_unimpl("switch@0x117840f7 out of table"); return;
  }
  /* 117840fe mov edi, edi */
  EDI = (EDI);
L_11784110:;
  /* 11784110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11784113 pop esi */
  ESI = (pop32());
  /* 11784114 pop edi */
  EDI = (pop32());
  /* 11784115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11784116 ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11784117 nop  */
  /* nop */
L_11784118:;
  /* 11784118 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178411b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1178411e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11784121 pop esi */
  ESI = (pop32());
  /* 11784122 pop edi */
  EDI = (pop32());
  /* 11784123 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11784124 ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 11784125 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11784128:;
  /* 11784128 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178412b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1178412e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11784131 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11784134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11784137 pop esi */
  ESI = (pop32());
  /* 11784138 pop edi */
  EDI = (pop32());
  /* 11784139 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1178413a ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
  /* 1178413b nop  */
  /* nop */
L_1178413c:;
  /* 1178413c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1178413f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11784142 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11784145 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11784148 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1178414b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1178414e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11784151 pop esi */
  ESI = (pop32());
  /* 11784152 pop edi */
  EDI = (pop32());
  /* 11784153 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11784154 ret  */
  ESPCHK(0x11783e20u, _esp0);
  ESP += 4; return;
L_117840a9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117840a9 (unresolved jump table)"); return;
L_117840b1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117840b1 (unresolved jump table)"); return;
L_117840b5: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117840b5 (unresolved jump table)"); return;
L_117840b9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117840b9 (unresolved jump table)"); return;
L_117840c1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117840c1 (unresolved jump table)"); return;
}

/* __global_unwind2 @ 0x11784158 (32 bytes, 18 insns) */
void f_11784158(void) {
  FTRACE(0x11784158u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11784158 push ebp */
  push32((uint32_t)(EBP));
  /* 11784159 mov ebp, esp */
  EBP = (ESP);
  /* 1178415b push ebx */
  push32((uint32_t)(EBX));
  /* 1178415c push esi */
  push32((uint32_t)(ESI));
  /* 1178415d push edi */
  push32((uint32_t)(EDI));
  /* 1178415e push ebp */
  push32((uint32_t)(EBP));
  /* 1178415f push 0 */
  push32((uint32_t)(0x0u));
  /* 11784161 push 0 */
  push32((uint32_t)(0x0u));
  /* 11784163 push 0x11784170 */
  push32((uint32_t)(0x11784170u));
  /* 11784168 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1178416b call 0x11784360 */
  push32(0x11784170u); f_11784360();
  /* 11784170 pop ebp */
  EBP = (pop32());
  /* 11784171 pop edi */
  EDI = (pop32());
  /* 11784172 pop esi */
  ESI = (pop32());
  /* 11784173 pop ebx */
  EBX = (pop32());
  /* 11784174 mov esp, ebp */
  ESP = (EBP);
  /* 11784176 pop ebp */
  EBP = (pop32());
  /* 11784177 ret  */
  ESPCHK(0x11784158u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1178419a (104 bytes, 33 insns) */
void f_1178419a(void) {
  FTRACE(0x1178419au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178419a push ebx */
  push32((uint32_t)(EBX));
  /* 1178419b push esi */
  push32((uint32_t)(ESI));
  /* 1178419c push edi */
  push32((uint32_t)(EDI));
  /* 1178419d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117841a1 push eax */
  push32((uint32_t)(EAX));
  /* 117841a2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 117841a4 push 0x11784178 */
  push32((uint32_t)(0x11784178u));
  /* 117841a9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 117841b0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_117841b7:;
  /* 117841b7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 117841bb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 117841be mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117841c1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117841c4 je 0x117841f4 */
  if (C.zf) goto L_117841f4;
  /* 117841c6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117841ca je 0x117841f4 */
  if (C.zf) goto L_117841f4;
  /* 117841cc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117841cf mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117841d2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117841d6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117841d9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117841de jne 0x117841f2 */
  if (!C.zf) goto L_117841f2;
  /* 117841e0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117841e5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117841e9 call 0x1178422e */
  push32(0x117841eeu); f_1178422e();
  /* 117841ee call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117841f2u);
L_117841f2:;
  /* 117841f2 jmp 0x117841b7 */
  goto L_117841b7;
L_117841f4:;
  /* 117841f4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117841fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117841fe pop edi */
  EDI = (pop32());
  /* 117841ff pop esi */
  ESI = (pop32());
  /* 11784200 pop ebx */
  EBX = (pop32());
  /* 11784201 ret  */
  ESPCHK(0x1178419au, _esp0);
  ESP += 4; return;
}

/* FUN_1000422e @ 0x1178422e (24 bytes, 10 insns) */
void f_1178422e(void) {
  FTRACE(0x1178422eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178422e push ebx */
  push32((uint32_t)(EBX));
  /* 1178422f push ecx */
  push32((uint32_t)(ECX));
  /* 11784230 mov ebx, 0x11786470 */
  EBX = (0x11786470u);
  /* 11784235 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11784238 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1178423b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1178423e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 11784241 pop ecx */
  ECX = (pop32());
  /* 11784242 pop ebx */
  EBX = (pop32());
  /* 11784243 ret 4 */
  ESPCHK(0x1178422eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000430d @ 0x1178430d (27 bytes, 11 insns) */
void f_1178430d(void) {
  FTRACE(0x1178430du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1178430d push ebp */
  push32((uint32_t)(EBP));
  /* 1178430e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11784312 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 11784314 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11784317 push eax */
  push32((uint32_t)(EAX));
  /* 11784318 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1178431b push eax */
  push32((uint32_t)(EAX));
  /* 1178431c call 0x1178419a */
  push32(0x11784321u); f_1178419a();
  /* 11784321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11784324 pop ebp */
  EBP = (pop32());
  /* 11784325 ret 4 */
  ESPCHK(0x1178430du, _esp0);
  ESP += 8; return;
}

/* FUN_10004330 @ 0x11784330 (47 bytes, 17 insns) */
void f_11784330(void) {
  FTRACE(0x11784330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11784330 push ecx */
  push32((uint32_t)(ECX));
  /* 11784331 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11784336 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1178433a jb 0x11784350 */
  if (C.cf) goto L_11784350;
L_1178433c:;
  /* 1178433c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11784342 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11784347 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11784349 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1178434e jae 0x1178433c */
  if (!C.cf) goto L_1178433c;
L_11784350:;
  /* 11784350 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11784352 mov eax, esp */
  EAX = (ESP);
  /* 11784354 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11784356 mov esp, ecx */
  ESP = (ECX);
  /* 11784358 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1178435a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1178435d push eax */
  push32((uint32_t)(EAX));
  /* 1178435e ret  */
  ESPCHK(0x11784330u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11784360 (6 bytes, 1 insns) */
void f_11784360(void) {
  FTRACE(0x11784360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11784360 jmp dword ptr [0x11785004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11785004)))); return;
}

