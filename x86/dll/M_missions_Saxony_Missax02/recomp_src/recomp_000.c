#include "recomp.h"

/* OnInit @ 0x10b91000 (737 bytes, 192 insns) */
void f_10b91000(void) {
  FTRACE(0x10b91000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b91000 push esi */
  push32((uint32_t)(ESI));
  /* 10b91001 mov esi, dword ptr [0x10b95114] */
  ESI = (r32((uint32_t)(0x10b95114)));
  /* 10b91007 push 0x10b96278 */
  push32((uint32_t)(0x10b96278u));
  /* 10b9100c push 0x10b96958 */
  push32((uint32_t)(0x10b96958u));
  /* 10b91011 call esi */
  call_ind((uint32_t)(ESI), 0x10b91013u);
  /* 10b91013 push 0x10b96270 */
  push32((uint32_t)(0x10b96270u));
  /* 10b91018 push 0x10b96968 */
  push32((uint32_t)(0x10b96968u));
  /* 10b9101d call esi */
  call_ind((uint32_t)(ESI), 0x10b9101fu);
  /* 10b9101f push 0x10b96268 */
  push32((uint32_t)(0x10b96268u));
  /* 10b91024 push 0x10b96970 */
  push32((uint32_t)(0x10b96970u));
  /* 10b91029 call esi */
  call_ind((uint32_t)(ESI), 0x10b9102bu);
  /* 10b9102b push 0x10b96260 */
  push32((uint32_t)(0x10b96260u));
  /* 10b91030 push 0x10b96980 */
  push32((uint32_t)(0x10b96980u));
  /* 10b91035 call esi */
  call_ind((uint32_t)(ESI), 0x10b91037u);
  /* 10b91037 push 0x10b96258 */
  push32((uint32_t)(0x10b96258u));
  /* 10b9103c push 0x10b96990 */
  push32((uint32_t)(0x10b96990u));
  /* 10b91041 call esi */
  call_ind((uint32_t)(ESI), 0x10b91043u);
  /* 10b91043 push 0x10b96250 */
  push32((uint32_t)(0x10b96250u));
  /* 10b91048 push 0x10b967e0 */
  push32((uint32_t)(0x10b967e0u));
  /* 10b9104d call esi */
  call_ind((uint32_t)(ESI), 0x10b9104fu);
  /* 10b9104f push 0x10b96248 */
  push32((uint32_t)(0x10b96248u));
  /* 10b91054 push 0x10b967e8 */
  push32((uint32_t)(0x10b967e8u));
  /* 10b91059 call esi */
  call_ind((uint32_t)(ESI), 0x10b9105bu);
  /* 10b9105b push 0x10b96240 */
  push32((uint32_t)(0x10b96240u));
  /* 10b91060 push 0x10b967f0 */
  push32((uint32_t)(0x10b967f0u));
  /* 10b91065 call esi */
  call_ind((uint32_t)(ESI), 0x10b91067u);
  /* 10b91067 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9106a push 0x10b96238 */
  push32((uint32_t)(0x10b96238u));
  /* 10b9106f push 0x10b967f8 */
  push32((uint32_t)(0x10b967f8u));
  /* 10b91074 call esi */
  call_ind((uint32_t)(ESI), 0x10b91076u);
  /* 10b91076 push 0x10b96230 */
  push32((uint32_t)(0x10b96230u));
  /* 10b9107b push 0x10b96840 */
  push32((uint32_t)(0x10b96840u));
  /* 10b91080 call esi */
  call_ind((uint32_t)(ESI), 0x10b91082u);
  /* 10b91082 push 0x10b96228 */
  push32((uint32_t)(0x10b96228u));
  /* 10b91087 push 0x10b96850 */
  push32((uint32_t)(0x10b96850u));
  /* 10b9108c call esi */
  call_ind((uint32_t)(ESI), 0x10b9108eu);
  /* 10b9108e push 0x10b96220 */
  push32((uint32_t)(0x10b96220u));
  /* 10b91093 push 0x10b96858 */
  push32((uint32_t)(0x10b96858u));
  /* 10b91098 call esi */
  call_ind((uint32_t)(ESI), 0x10b9109au);
  /* 10b9109a push 0x10b96218 */
  push32((uint32_t)(0x10b96218u));
  /* 10b9109f push 0x10b96878 */
  push32((uint32_t)(0x10b96878u));
  /* 10b910a4 call esi */
  call_ind((uint32_t)(ESI), 0x10b910a6u);
  /* 10b910a6 push 0x10b96210 */
  push32((uint32_t)(0x10b96210u));
  /* 10b910ab push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b910b0 call esi */
  call_ind((uint32_t)(ESI), 0x10b910b2u);
  /* 10b910b2 push 0x10b96208 */
  push32((uint32_t)(0x10b96208u));
  /* 10b910b7 push 0x10b96978 */
  push32((uint32_t)(0x10b96978u));
  /* 10b910bc call esi */
  call_ind((uint32_t)(ESI), 0x10b910beu);
  /* 10b910be push 0x10b96200 */
  push32((uint32_t)(0x10b96200u));
  /* 10b910c3 push 0x10b968f8 */
  push32((uint32_t)(0x10b968f8u));
  /* 10b910c8 call esi */
  call_ind((uint32_t)(ESI), 0x10b910cau);
  /* 10b910ca add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b910cd push 0x10b961f8 */
  push32((uint32_t)(0x10b961f8u));
  /* 10b910d2 push 0x10b96950 */
  push32((uint32_t)(0x10b96950u));
  /* 10b910d7 call esi */
  call_ind((uint32_t)(ESI), 0x10b910d9u);
  /* 10b910d9 push 0x10b961ec */
  push32((uint32_t)(0x10b961ecu));
  /* 10b910de push 0x10b96948 */
  push32((uint32_t)(0x10b96948u));
  /* 10b910e3 call esi */
  call_ind((uint32_t)(ESI), 0x10b910e5u);
  /* 10b910e5 push 0x10b961e0 */
  push32((uint32_t)(0x10b961e0u));
  /* 10b910ea push 0x10b96940 */
  push32((uint32_t)(0x10b96940u));
  /* 10b910ef call esi */
  call_ind((uint32_t)(ESI), 0x10b910f1u);
  /* 10b910f1 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b910f6 push 0x10b96898 */
  push32((uint32_t)(0x10b96898u));
  /* 10b910fb call esi */
  call_ind((uint32_t)(ESI), 0x10b910fdu);
  /* 10b910fd push 0x10b961c8 */
  push32((uint32_t)(0x10b961c8u));
  /* 10b91102 push 0x10b96860 */
  push32((uint32_t)(0x10b96860u));
  /* 10b91107 call esi */
  call_ind((uint32_t)(ESI), 0x10b91109u);
  /* 10b91109 push 0x10b961bc */
  push32((uint32_t)(0x10b961bcu));
  /* 10b9110e push 0x10b968a8 */
  push32((uint32_t)(0x10b968a8u));
  /* 10b91113 call esi */
  call_ind((uint32_t)(ESI), 0x10b91115u);
  /* 10b91115 push 0x10b961b0 */
  push32((uint32_t)(0x10b961b0u));
  /* 10b9111a push 0x10b96938 */
  push32((uint32_t)(0x10b96938u));
  /* 10b9111f call esi */
  call_ind((uint32_t)(ESI), 0x10b91121u);
  /* 10b91121 push 0x10b961a8 */
  push32((uint32_t)(0x10b961a8u));
  /* 10b91126 push 0x10b96830 */
  push32((uint32_t)(0x10b96830u));
  /* 10b9112b call esi */
  call_ind((uint32_t)(ESI), 0x10b9112du);
  /* 10b9112d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91130 push 0x10b961a0 */
  push32((uint32_t)(0x10b961a0u));
  /* 10b91135 push 0x10b96820 */
  push32((uint32_t)(0x10b96820u));
  /* 10b9113a call esi */
  call_ind((uint32_t)(ESI), 0x10b9113cu);
  /* 10b9113c push 0x10b9619c */
  push32((uint32_t)(0x10b9619cu));
  /* 10b91141 mov esi, dword ptr [0x10b95118] */
  ESI = (r32((uint32_t)(0x10b95118)));
  /* 10b91147 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b9114c call esi */
  call_ind((uint32_t)(ESI), 0x10b9114eu);
  /* 10b9114e push 0x10b96198 */
  push32((uint32_t)(0x10b96198u));
  /* 10b91153 push 0x10b96988 */
  push32((uint32_t)(0x10b96988u));
  /* 10b91158 call esi */
  call_ind((uint32_t)(ESI), 0x10b9115au);
  /* 10b9115a push 0x10b9618c */
  push32((uint32_t)(0x10b9618cu));
  /* 10b9115f push 0x10b96810 */
  push32((uint32_t)(0x10b96810u));
  /* 10b91164 call esi */
  call_ind((uint32_t)(ESI), 0x10b91166u);
  /* 10b91166 push 0x10b96180 */
  push32((uint32_t)(0x10b96180u));
  /* 10b9116b push 0x10b96818 */
  push32((uint32_t)(0x10b96818u));
  /* 10b91170 call esi */
  call_ind((uint32_t)(ESI), 0x10b91172u);
  /* 10b91172 push 0x10b96178 */
  push32((uint32_t)(0x10b96178u));
  /* 10b91177 push 0x10b96800 */
  push32((uint32_t)(0x10b96800u));
  /* 10b9117c call esi */
  call_ind((uint32_t)(ESI), 0x10b9117eu);
  /* 10b9117e push 0x10b9616c */
  push32((uint32_t)(0x10b9616cu));
  /* 10b91183 push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b91188 call esi */
  call_ind((uint32_t)(ESI), 0x10b9118au);
  /* 10b9118a push 0x10b96164 */
  push32((uint32_t)(0x10b96164u));
  /* 10b9118f push 0x10b968a0 */
  push32((uint32_t)(0x10b968a0u));
  /* 10b91194 call esi */
  call_ind((uint32_t)(ESI), 0x10b91196u);
  /* 10b91196 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91199 push 0x10b9615c */
  push32((uint32_t)(0x10b9615cu));
  /* 10b9119e push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b911a3 call esi */
  call_ind((uint32_t)(ESI), 0x10b911a5u);
  /* 10b911a5 push 0x10b96150 */
  push32((uint32_t)(0x10b96150u));
  /* 10b911aa push 0x10b96890 */
  push32((uint32_t)(0x10b96890u));
  /* 10b911af call esi */
  call_ind((uint32_t)(ESI), 0x10b911b1u);
  /* 10b911b1 push 0x10b96148 */
  push32((uint32_t)(0x10b96148u));
  /* 10b911b6 push 0x10b96808 */
  push32((uint32_t)(0x10b96808u));
  /* 10b911bb call esi */
  call_ind((uint32_t)(ESI), 0x10b911bdu);
  /* 10b911bd push 0x10b96140 */
  push32((uint32_t)(0x10b96140u));
  /* 10b911c2 push 0x10b96888 */
  push32((uint32_t)(0x10b96888u));
  /* 10b911c7 call esi */
  call_ind((uint32_t)(ESI), 0x10b911c9u);
  /* 10b911c9 mov esi, dword ptr [0x10b9511c] */
  ESI = (r32((uint32_t)(0x10b9511c)));
  /* 10b911cf push 0x10b9612c */
  push32((uint32_t)(0x10b9612cu));
  /* 10b911d4 push 0x10b968b0 */
  push32((uint32_t)(0x10b968b0u));
  /* 10b911d9 call esi */
  call_ind((uint32_t)(ESI), 0x10b911dbu);
  /* 10b911db push 0x10b9611c */
  push32((uint32_t)(0x10b9611cu));
  /* 10b911e0 push 0x10b968b8 */
  push32((uint32_t)(0x10b968b8u));
  /* 10b911e5 call esi */
  call_ind((uint32_t)(ESI), 0x10b911e7u);
  /* 10b911e7 push 0x10b96110 */
  push32((uint32_t)(0x10b96110u));
  /* 10b911ec push 0x10b968c0 */
  push32((uint32_t)(0x10b968c0u));
  /* 10b911f1 call esi */
  call_ind((uint32_t)(ESI), 0x10b911f3u);
  /* 10b911f3 push 0x10b96104 */
  push32((uint32_t)(0x10b96104u));
  /* 10b911f8 push 0x10b968c8 */
  push32((uint32_t)(0x10b968c8u));
  /* 10b911fd call esi */
  call_ind((uint32_t)(ESI), 0x10b911ffu);
  /* 10b911ff add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91202 push 0x10b960f8 */
  push32((uint32_t)(0x10b960f8u));
  /* 10b91207 push 0x10b968d0 */
  push32((uint32_t)(0x10b968d0u));
  /* 10b9120c call esi */
  call_ind((uint32_t)(ESI), 0x10b9120eu);
  /* 10b9120e push 0x10b960e8 */
  push32((uint32_t)(0x10b960e8u));
  /* 10b91213 push 0x10b968d8 */
  push32((uint32_t)(0x10b968d8u));
  /* 10b91218 call esi */
  call_ind((uint32_t)(ESI), 0x10b9121au);
  /* 10b9121a push 0x10b960d8 */
  push32((uint32_t)(0x10b960d8u));
  /* 10b9121f push 0x10b968e0 */
  push32((uint32_t)(0x10b968e0u));
  /* 10b91224 call esi */
  call_ind((uint32_t)(ESI), 0x10b91226u);
  /* 10b91226 push 0x10b960cc */
  push32((uint32_t)(0x10b960ccu));
  /* 10b9122b push 0x10b968e8 */
  push32((uint32_t)(0x10b968e8u));
  /* 10b91230 call esi */
  call_ind((uint32_t)(ESI), 0x10b91232u);
  /* 10b91232 push 0x10b960bc */
  push32((uint32_t)(0x10b960bcu));
  /* 10b91237 push 0x10b968f0 */
  push32((uint32_t)(0x10b968f0u));
  /* 10b9123c call esi */
  call_ind((uint32_t)(ESI), 0x10b9123eu);
  /* 10b9123e push 0x10b960b0 */
  push32((uint32_t)(0x10b960b0u));
  /* 10b91243 push 0x10b96900 */
  push32((uint32_t)(0x10b96900u));
  /* 10b91248 call esi */
  call_ind((uint32_t)(ESI), 0x10b9124au);
  /* 10b9124a push 0x10b96098 */
  push32((uint32_t)(0x10b96098u));
  /* 10b9124f push 0x10b96908 */
  push32((uint32_t)(0x10b96908u));
  /* 10b91254 call esi */
  call_ind((uint32_t)(ESI), 0x10b91256u);
  /* 10b91256 push 0x10b96084 */
  push32((uint32_t)(0x10b96084u));
  /* 10b9125b push 0x10b96910 */
  push32((uint32_t)(0x10b96910u));
  /* 10b91260 call esi */
  call_ind((uint32_t)(ESI), 0x10b91262u);
  /* 10b91262 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91265 push 0x10b96074 */
  push32((uint32_t)(0x10b96074u));
  /* 10b9126a push 0x10b96918 */
  push32((uint32_t)(0x10b96918u));
  /* 10b9126f call esi */
  call_ind((uint32_t)(ESI), 0x10b91271u);
  /* 10b91271 push 0x10b96068 */
  push32((uint32_t)(0x10b96068u));
  /* 10b91276 push 0x10b96920 */
  push32((uint32_t)(0x10b96920u));
  /* 10b9127b call esi */
  call_ind((uint32_t)(ESI), 0x10b9127du);
  /* 10b9127d push 0x10b96054 */
  push32((uint32_t)(0x10b96054u));
  /* 10b91282 push 0x10b96928 */
  push32((uint32_t)(0x10b96928u));
  /* 10b91287 call esi */
  call_ind((uint32_t)(ESI), 0x10b91289u);
  /* 10b91289 push 0x10b96048 */
  push32((uint32_t)(0x10b96048u));
  /* 10b9128e push 0x10b96930 */
  push32((uint32_t)(0x10b96930u));
  /* 10b91293 call esi */
  call_ind((uint32_t)(ESI), 0x10b91295u);
  /* 10b91295 mov esi, dword ptr [0x10b95120] */
  ESI = (r32((uint32_t)(0x10b95120)));
  /* 10b9129b push 0x10b96040 */
  push32((uint32_t)(0x10b96040u));
  /* 10b912a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b912a2 call esi */
  call_ind((uint32_t)(ESI), 0x10b912a4u);
  /* 10b912a4 push 0x10b96038 */
  push32((uint32_t)(0x10b96038u));
  /* 10b912a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b912ab call esi */
  call_ind((uint32_t)(ESI), 0x10b912adu);
  /* 10b912ad push 0x10b96030 */
  push32((uint32_t)(0x10b96030u));
  /* 10b912b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b912b4 call esi */
  call_ind((uint32_t)(ESI), 0x10b912b6u);
  /* 10b912b6 push 0x10b96030 */
  push32((uint32_t)(0x10b96030u));
  /* 10b912bb push 3 */
  push32((uint32_t)(0x3u));
  /* 10b912bd call esi */
  call_ind((uint32_t)(ESI), 0x10b912bfu);
  /* 10b912bf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b912c2 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b912c4 call dword ptr [0x10b95124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95124))), 0x10b912cau);
  /* 10b912ca mov esi, dword ptr [0x10b95128] */
  ESI = (r32((uint32_t)(0x10b95128)));
  /* 10b912d0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b912d2 call esi */
  call_ind((uint32_t)(ESI), 0x10b912d4u);
  /* 10b912d4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b912d6 call esi */
  call_ind((uint32_t)(ESI), 0x10b912d8u);
  /* 10b912d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10b912da call esi */
  call_ind((uint32_t)(ESI), 0x10b912dcu);
  /* 10b912dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b912df pop esi */
  ESI = (pop32());
  /* 10b912e0 ret  */
  ESPCHK(0x10b91000u, _esp0);
  ESP += 4; return;
}

/* FUN_100012f0 @ 0x10b912f0 (20 bytes, 6 insns) */
void f_10b912f0(void) {
  FTRACE(0x10b912f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b912f0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b912f4 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b912f5 jne 0x10b912fc */
  if (!C.zf) goto L_10b912fc;
  /* 10b912f7 call 0x10b91000 */
  push32(0x10b912fcu); f_10b91000();
L_10b912fc:;
  /* 10b912fc mov eax, 1 */
  EAX = (0x1u);
  /* 10b91301 ret 0xc */
  ESPCHK(0x10b912f0u, _esp0);
  ESP += 16; return;
}

/* ProcessScenary @ 0x10b91310 (4478 bytes, 1435 insns) */
void f_10b91310(void) {
  FTRACE(0x10b91310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b91310 push ebx */
  push32((uint32_t)(EBX));
  /* 10b91311 push ebp */
  push32((uint32_t)(EBP));
  /* 10b91312 push esi */
  push32((uint32_t)(ESI));
  /* 10b91313 mov esi, dword ptr [0x10b950b0] */
  ESI = (r32((uint32_t)(0x10b950b0)));
  /* 10b91319 push edi */
  push32((uint32_t)(EDI));
  /* 10b9131a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9131c call esi */
  call_ind((uint32_t)(ESI), 0x10b9131eu);
  /* 10b9131e mov ebp, dword ptr [0x10b950b4] */
  EBP = (r32((uint32_t)(0x10b950b4)));
  /* 10b91324 mov edi, dword ptr [0x10b950b8] */
  EDI = (r32((uint32_t)(0x10b950b8)));
  /* 10b9132a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9132d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9132f je 0x10b91800 */
  if (C.zf) goto L_10b91800;
  /* 10b91335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91337 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91339 call ebp */
  call_ind((uint32_t)(EBP), 0x10b9133bu);
  /* 10b9133b mov ebx, dword ptr [0x10b950bc] */
  EBX = (r32((uint32_t)(0x10b950bc)));
  /* 10b91341 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91343 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91345u);
  /* 10b91345 mov esi, dword ptr [0x10b950c0] */
  ESI = (r32((uint32_t)(0x10b950c0)));
  /* 10b9134b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9134e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91350 jne 0x10b91482 */
  if (!C.zf) goto L_10b91482;
  /* 10b91356 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10b9135b push 3 */
  push32((uint32_t)(0x3u));
  /* 10b9135d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9135f call edi */
  call_ind((uint32_t)(EDI), 0x10b91361u);
  /* 10b91361 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10b91366 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91368 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9136a call edi */
  call_ind((uint32_t)(EDI), 0x10b9136cu);
  /* 10b9136c push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10b91371 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91373 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91375 call edi */
  call_ind((uint32_t)(EDI), 0x10b91377u);
  /* 10b91377 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10b9137c push 5 */
  push32((uint32_t)(0x5u));
  /* 10b9137e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91380 call edi */
  call_ind((uint32_t)(EDI), 0x10b91382u);
  /* 10b91382 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91384 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91386 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91388 call edi */
  call_ind((uint32_t)(EDI), 0x10b9138au);
  /* 10b9138a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9138c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9138e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91390 call edi */
  call_ind((uint32_t)(EDI), 0x10b91392u);
  /* 10b91392 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91395 push 0x10b9649c */
  push32((uint32_t)(0x10b9649cu));
  /* 10b9139a push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9139f call esi */
  call_ind((uint32_t)(ESI), 0x10b913a1u);
  /* 10b913a1 push 0x10b96484 */
  push32((uint32_t)(0x10b96484u));
  /* 10b913a6 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913ab call esi */
  call_ind((uint32_t)(ESI), 0x10b913adu);
  /* 10b913ad push 0x10b9646c */
  push32((uint32_t)(0x10b9646cu));
  /* 10b913b2 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913b7 call esi */
  call_ind((uint32_t)(ESI), 0x10b913b9u);
  /* 10b913b9 push 0x10b96454 */
  push32((uint32_t)(0x10b96454u));
  /* 10b913be push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913c3 call esi */
  call_ind((uint32_t)(ESI), 0x10b913c5u);
  /* 10b913c5 push 0x10b9643c */
  push32((uint32_t)(0x10b9643cu));
  /* 10b913ca push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913cf call esi */
  call_ind((uint32_t)(ESI), 0x10b913d1u);
  /* 10b913d1 push 0x10b96424 */
  push32((uint32_t)(0x10b96424u));
  /* 10b913d6 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913db call esi */
  call_ind((uint32_t)(ESI), 0x10b913ddu);
  /* 10b913dd push 0x10b9640c */
  push32((uint32_t)(0x10b9640cu));
  /* 10b913e2 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913e7 call esi */
  call_ind((uint32_t)(ESI), 0x10b913e9u);
  /* 10b913e9 push 0x10b963f4 */
  push32((uint32_t)(0x10b963f4u));
  /* 10b913ee push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b913f3 call esi */
  call_ind((uint32_t)(ESI), 0x10b913f5u);
  /* 10b913f5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b913f8 push 0x10b963dc */
  push32((uint32_t)(0x10b963dcu));
  /* 10b913fd push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91402 call esi */
  call_ind((uint32_t)(ESI), 0x10b91404u);
  /* 10b91404 push 0x10b963c4 */
  push32((uint32_t)(0x10b963c4u));
  /* 10b91409 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9140e call esi */
  call_ind((uint32_t)(ESI), 0x10b91410u);
  /* 10b91410 push 0x10b963ac */
  push32((uint32_t)(0x10b963acu));
  /* 10b91415 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9141a call esi */
  call_ind((uint32_t)(ESI), 0x10b9141cu);
  /* 10b9141c push 0x10b96394 */
  push32((uint32_t)(0x10b96394u));
  /* 10b91421 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91426 call esi */
  call_ind((uint32_t)(ESI), 0x10b91428u);
  /* 10b91428 push 0x10b9637c */
  push32((uint32_t)(0x10b9637cu));
  /* 10b9142d push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91432 call esi */
  call_ind((uint32_t)(ESI), 0x10b91434u);
  /* 10b91434 push 0x10b96364 */
  push32((uint32_t)(0x10b96364u));
  /* 10b91439 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9143e call esi */
  call_ind((uint32_t)(ESI), 0x10b91440u);
  /* 10b91440 push 0x10b9634c */
  push32((uint32_t)(0x10b9634cu));
  /* 10b91445 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9144a call esi */
  call_ind((uint32_t)(ESI), 0x10b9144cu);
  /* 10b9144c push 0x10b96334 */
  push32((uint32_t)(0x10b96334u));
  /* 10b91451 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91456 call esi */
  call_ind((uint32_t)(ESI), 0x10b91458u);
  /* 10b91458 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9145b push 0x10b9631c */
  push32((uint32_t)(0x10b9631cu));
  /* 10b91460 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91465 call esi */
  call_ind((uint32_t)(ESI), 0x10b91467u);
  /* 10b91467 push 0x10b96304 */
  push32((uint32_t)(0x10b96304u));
  /* 10b9146c push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91471 call esi */
  call_ind((uint32_t)(ESI), 0x10b91473u);
  /* 10b91473 push 0x10b962ec */
  push32((uint32_t)(0x10b962ecu));
  /* 10b91478 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9147d call esi */
  call_ind((uint32_t)(ESI), 0x10b9147fu);
  /* 10b9147f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91482:;
  /* 10b91482 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91484 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91486u);
  /* 10b91486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91489 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9148c jne 0x10b91567 */
  if (!C.zf) goto L_10b91567;
  /* 10b91492 push 0x6ddd0 */
  push32((uint32_t)(0x6ddd0u));
  /* 10b91497 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b91499 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9149b call edi */
  call_ind((uint32_t)(EDI), 0x10b9149du);
  /* 10b9149d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10b914a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b914a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914a6 call edi */
  call_ind((uint32_t)(EDI), 0x10b914a8u);
  /* 10b914a8 push 0x27100 */
  push32((uint32_t)(0x27100u));
  /* 10b914ad push 4 */
  push32((uint32_t)(0x4u));
  /* 10b914af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914b1 call edi */
  call_ind((uint32_t)(EDI), 0x10b914b3u);
  /* 10b914b3 push 0x27100 */
  push32((uint32_t)(0x27100u));
  /* 10b914b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b914ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914bc call edi */
  call_ind((uint32_t)(EDI), 0x10b914beu);
  /* 10b914be push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914c4 call edi */
  call_ind((uint32_t)(EDI), 0x10b914c6u);
  /* 10b914c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b914ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b914cc call edi */
  call_ind((uint32_t)(EDI), 0x10b914ceu);
  /* 10b914ce add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b914d1 push 0x10b9649c */
  push32((uint32_t)(0x10b9649cu));
  /* 10b914d6 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b914db call esi */
  call_ind((uint32_t)(ESI), 0x10b914ddu);
  /* 10b914dd push 0x10b96484 */
  push32((uint32_t)(0x10b96484u));
  /* 10b914e2 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b914e7 call esi */
  call_ind((uint32_t)(ESI), 0x10b914e9u);
  /* 10b914e9 push 0x10b9646c */
  push32((uint32_t)(0x10b9646cu));
  /* 10b914ee push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b914f3 call esi */
  call_ind((uint32_t)(ESI), 0x10b914f5u);
  /* 10b914f5 push 0x10b96454 */
  push32((uint32_t)(0x10b96454u));
  /* 10b914fa push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b914ff call esi */
  call_ind((uint32_t)(ESI), 0x10b91501u);
  /* 10b91501 push 0x10b9643c */
  push32((uint32_t)(0x10b9643cu));
  /* 10b91506 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9150b call esi */
  call_ind((uint32_t)(ESI), 0x10b9150du);
  /* 10b9150d push 0x10b96424 */
  push32((uint32_t)(0x10b96424u));
  /* 10b91512 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91517 call esi */
  call_ind((uint32_t)(ESI), 0x10b91519u);
  /* 10b91519 push 0x10b963dc */
  push32((uint32_t)(0x10b963dcu));
  /* 10b9151e push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91523 call esi */
  call_ind((uint32_t)(ESI), 0x10b91525u);
  /* 10b91525 push 0x10b963ac */
  push32((uint32_t)(0x10b963acu));
  /* 10b9152a push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9152f call esi */
  call_ind((uint32_t)(ESI), 0x10b91531u);
  /* 10b91531 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91534 push 0x10b96394 */
  push32((uint32_t)(0x10b96394u));
  /* 10b91539 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9153e call esi */
  call_ind((uint32_t)(ESI), 0x10b91540u);
  /* 10b91540 push 0x10b96364 */
  push32((uint32_t)(0x10b96364u));
  /* 10b91545 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b9154a call esi */
  call_ind((uint32_t)(ESI), 0x10b9154cu);
  /* 10b9154c push 0x10b9634c */
  push32((uint32_t)(0x10b9634cu));
  /* 10b91551 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91556 call esi */
  call_ind((uint32_t)(ESI), 0x10b91558u);
  /* 10b91558 push 0x10b96334 */
  push32((uint32_t)(0x10b96334u));
  /* 10b9155d push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b91562 call esi */
  call_ind((uint32_t)(ESI), 0x10b91564u);
  /* 10b91564 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91567:;
  /* 10b91567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91569 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9156bu);
  /* 10b9156b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9156e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b91571 jne 0x10b91601 */
  if (!C.zf) goto L_10b91601;
  /* 10b91577 push 0x9c40 */
  push32((uint32_t)(0x9c40u));
  /* 10b9157c push 3 */
  push32((uint32_t)(0x3u));
  /* 10b9157e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91580 call edi */
  call_ind((uint32_t)(EDI), 0x10b91582u);
  /* 10b91582 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10b91587 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9158b call edi */
  call_ind((uint32_t)(EDI), 0x10b9158du);
  /* 10b9158d push 0x32c8 */
  push32((uint32_t)(0x32c8u));
  /* 10b91592 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91594 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91596 call edi */
  call_ind((uint32_t)(EDI), 0x10b91598u);
  /* 10b91598 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 10b9159d push 5 */
  push32((uint32_t)(0x5u));
  /* 10b9159f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915a1 call edi */
  call_ind((uint32_t)(EDI), 0x10b915a3u);
  /* 10b915a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915a9 call edi */
  call_ind((uint32_t)(EDI), 0x10b915abu);
  /* 10b915ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10b915af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b915b1 call edi */
  call_ind((uint32_t)(EDI), 0x10b915b3u);
  /* 10b915b3 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b915b6 push 0x10b9649c */
  push32((uint32_t)(0x10b9649cu));
  /* 10b915bb push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915c0 call esi */
  call_ind((uint32_t)(ESI), 0x10b915c2u);
  /* 10b915c2 push 0x10b96484 */
  push32((uint32_t)(0x10b96484u));
  /* 10b915c7 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915cc call esi */
  call_ind((uint32_t)(ESI), 0x10b915ceu);
  /* 10b915ce push 0x10b96454 */
  push32((uint32_t)(0x10b96454u));
  /* 10b915d3 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915d8 call esi */
  call_ind((uint32_t)(ESI), 0x10b915dau);
  /* 10b915da push 0x10b9643c */
  push32((uint32_t)(0x10b9643cu));
  /* 10b915df push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915e4 call esi */
  call_ind((uint32_t)(ESI), 0x10b915e6u);
  /* 10b915e6 push 0x10b963ac */
  push32((uint32_t)(0x10b963acu));
  /* 10b915eb push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915f0 call esi */
  call_ind((uint32_t)(ESI), 0x10b915f2u);
  /* 10b915f2 push 0x10b96364 */
  push32((uint32_t)(0x10b96364u));
  /* 10b915f7 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b915fc call esi */
  call_ind((uint32_t)(ESI), 0x10b915feu);
  /* 10b915fe add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91601:;
  /* 10b91601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91603 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91605u);
  /* 10b91605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91608 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9160b jne 0x10b9164b */
  if (!C.zf) goto L_10b9164b;
  /* 10b9160d push 0x88b8 */
  push32((uint32_t)(0x88b8u));
  /* 10b91612 push eax */
  push32((uint32_t)(EAX));
  /* 10b91613 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91615 call edi */
  call_ind((uint32_t)(EDI), 0x10b91617u);
  /* 10b91617 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10b9161c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91620 call edi */
  call_ind((uint32_t)(EDI), 0x10b91622u);
  /* 10b91622 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10b91627 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91629 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9162b call edi */
  call_ind((uint32_t)(EDI), 0x10b9162du);
  /* 10b9162d push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10b91632 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91634 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91636 call edi */
  call_ind((uint32_t)(EDI), 0x10b91638u);
  /* 10b91638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9163a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9163c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9163e call edi */
  call_ind((uint32_t)(EDI), 0x10b91640u);
  /* 10b91640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91642 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91644 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91646 call edi */
  call_ind((uint32_t)(EDI), 0x10b91648u);
  /* 10b91648 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9164b:;
  /* 10b9164b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b91650 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b91652 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91654 call edi */
  call_ind((uint32_t)(EDI), 0x10b91656u);
  /* 10b91656 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b9165b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9165d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9165f call edi */
  call_ind((uint32_t)(EDI), 0x10b91661u);
  /* 10b91661 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b91666 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91668 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9166a call edi */
  call_ind((uint32_t)(EDI), 0x10b9166cu);
  /* 10b9166c push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10b91671 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91673 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91675 call edi */
  call_ind((uint32_t)(EDI), 0x10b91677u);
  /* 10b91677 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10b9167c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9167e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91680 call edi */
  call_ind((uint32_t)(EDI), 0x10b91682u);
  /* 10b91682 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10b91687 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91689 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9168b call edi */
  call_ind((uint32_t)(EDI), 0x10b9168du);
  /* 10b9168d add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91690 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b91695 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b91697 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91699 call edi */
  call_ind((uint32_t)(EDI), 0x10b9169bu);
  /* 10b9169b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b916a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916a4 call edi */
  call_ind((uint32_t)(EDI), 0x10b916a6u);
  /* 10b916a6 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916ab push 4 */
  push32((uint32_t)(0x4u));
  /* 10b916ad push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916af call edi */
  call_ind((uint32_t)(EDI), 0x10b916b1u);
  /* 10b916b1 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916ba call edi */
  call_ind((uint32_t)(EDI), 0x10b916bcu);
  /* 10b916bc push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b916c3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916c5 call edi */
  call_ind((uint32_t)(EDI), 0x10b916c7u);
  /* 10b916c7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916cc push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916ce push 5 */
  push32((uint32_t)(0x5u));
  /* 10b916d0 call edi */
  call_ind((uint32_t)(EDI), 0x10b916d2u);
  /* 10b916d2 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b916d5 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916da push 3 */
  push32((uint32_t)(0x3u));
  /* 10b916dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916de call edi */
  call_ind((uint32_t)(EDI), 0x10b916e0u);
  /* 10b916e0 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b916e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916e9 call edi */
  call_ind((uint32_t)(EDI), 0x10b916ebu);
  /* 10b916eb push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b916f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916f4 call edi */
  call_ind((uint32_t)(EDI), 0x10b916f6u);
  /* 10b916f6 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b916fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b916ff call edi */
  call_ind((uint32_t)(EDI), 0x10b91701u);
  /* 10b91701 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b91706 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91708 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9170a call edi */
  call_ind((uint32_t)(EDI), 0x10b9170cu);
  /* 10b9170c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10b91711 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91713 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91715 call edi */
  call_ind((uint32_t)(EDI), 0x10b91717u);
  /* 10b91717 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9171a push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10b9171c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9171e call dword ptr [0x10b950c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c4))), 0x10b91724u);
  /* 10b91724 push 0x10b962e4 */
  push32((uint32_t)(0x10b962e4u));
  /* 10b91729 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b9172fu);
  /* 10b9172f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91731 mov ebx, dword ptr [0x10b950cc] */
  EBX = (r32((uint32_t)(0x10b950cc)));
  /* 10b91737 push 0x10b968b0 */
  push32((uint32_t)(0x10b968b0u));
  /* 10b9173c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9173e call ebx */
  call_ind((uint32_t)(EBX), 0x10b91740u);
  /* 10b91740 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91742 push 0x10b968b8 */
  push32((uint32_t)(0x10b968b8u));
  /* 10b91747 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91749 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9174bu);
  /* 10b9174b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9174d push 0x10b968c0 */
  push32((uint32_t)(0x10b968c0u));
  /* 10b91752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91754 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91756u);
  /* 10b91756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91758 push 0x10b968c8 */
  push32((uint32_t)(0x10b968c8u));
  /* 10b9175d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9175f call ebx */
  call_ind((uint32_t)(EBX), 0x10b91761u);
  /* 10b91761 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91763 push 0x10b968d0 */
  push32((uint32_t)(0x10b968d0u));
  /* 10b91768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9176a call ebx */
  call_ind((uint32_t)(EBX), 0x10b9176cu);
  /* 10b9176c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9176f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91771 push 0x10b968d8 */
  push32((uint32_t)(0x10b968d8u));
  /* 10b91776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91778 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9177au);
  /* 10b9177a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9177c push 0x10b968e0 */
  push32((uint32_t)(0x10b968e0u));
  /* 10b91781 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91783 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91785u);
  /* 10b91785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91787 push 0x10b968e8 */
  push32((uint32_t)(0x10b968e8u));
  /* 10b9178c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9178e call ebx */
  call_ind((uint32_t)(EBX), 0x10b91790u);
  /* 10b91790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91792 push 0x10b968f0 */
  push32((uint32_t)(0x10b968f0u));
  /* 10b91797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91799 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9179bu);
  /* 10b9179b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9179d push 0x10b96900 */
  push32((uint32_t)(0x10b96900u));
  /* 10b917a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917a4 call ebx */
  call_ind((uint32_t)(EBX), 0x10b917a6u);
  /* 10b917a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917a8 push 0x10b96908 */
  push32((uint32_t)(0x10b96908u));
  /* 10b917ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917af call ebx */
  call_ind((uint32_t)(EBX), 0x10b917b1u);
  /* 10b917b1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b917b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917b6 push 0x10b96910 */
  push32((uint32_t)(0x10b96910u));
  /* 10b917bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917bd call ebx */
  call_ind((uint32_t)(EBX), 0x10b917bfu);
  /* 10b917bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917c1 push 0x10b96918 */
  push32((uint32_t)(0x10b96918u));
  /* 10b917c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917c8 call ebx */
  call_ind((uint32_t)(EBX), 0x10b917cau);
  /* 10b917ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917cc push 0x10b96920 */
  push32((uint32_t)(0x10b96920u));
  /* 10b917d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917d3 call ebx */
  call_ind((uint32_t)(EBX), 0x10b917d5u);
  /* 10b917d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917d7 push 0x10b96928 */
  push32((uint32_t)(0x10b96928u));
  /* 10b917dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917de call ebx */
  call_ind((uint32_t)(EBX), 0x10b917e0u);
  /* 10b917e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917e2 push 0x10b96930 */
  push32((uint32_t)(0x10b96930u));
  /* 10b917e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b917e9 call ebx */
  call_ind((uint32_t)(EBX), 0x10b917ebu);
  /* 10b917eb push 0x10b962dc */
  push32((uint32_t)(0x10b962dcu));
  /* 10b917f0 push 0x10b961d4 */
  push32((uint32_t)(0x10b961d4u));
  /* 10b917f5 call esi */
  call_ind((uint32_t)(ESI), 0x10b917f7u);
  /* 10b917f7 mov esi, dword ptr [0x10b950b0] */
  ESI = (r32((uint32_t)(0x10b950b0)));
  /* 10b917fd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91800:;
  /* 10b91800 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91802 call esi */
  call_ind((uint32_t)(ESI), 0x10b91804u);
  /* 10b91804 mov ebx, dword ptr [0x10b950d0] */
  EBX = (r32((uint32_t)(0x10b950d0)));
  /* 10b9180a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9180d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9180f je 0x10b91823 */
  if (C.zf) goto L_10b91823;
  /* 10b91811 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91813 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91815 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91817u);
  /* 10b91817 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10b9181c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9181e call ebx */
  call_ind((uint32_t)(EBX), 0x10b91820u);
  /* 10b91820 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91823:;
  /* 10b91823 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10b91825 call esi */
  call_ind((uint32_t)(ESI), 0x10b91827u);
  /* 10b91827 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9182a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9182c je 0x10b9183d */
  if (C.zf) goto L_10b9183d;
  /* 10b9182e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91830 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10b91832 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91834u);
  /* 10b91834 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10b91836 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b91838 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9183au);
  /* 10b9183a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9183d:;
  /* 10b9183d push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10b9183f call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91845u);
  /* 10b91845 mov ebx, dword ptr [0x10b950d4] */
  EBX = (r32((uint32_t)(0x10b950d4)));
  /* 10b9184b mov esi, dword ptr [0x10b950d8] */
  ESI = (r32((uint32_t)(0x10b950d8)));
  /* 10b91851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91854 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91856 je 0x10b918ad */
  if (C.zf) goto L_10b918ad;
  /* 10b91858 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9185a push 0x10b96878 */
  push32((uint32_t)(0x10b96878u));
  /* 10b9185f call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91865u);
  /* 10b91865 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9186a jle 0x10b918ad */
  if ((C.zf||C.sf!=C.of)) goto L_10b918ad;
  /* 10b9186c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b9186e call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91874u);
  /* 10b91874 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91877 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91879 je 0x10b918ad */
  if (C.zf) goto L_10b918ad;
  /* 10b9187b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9187d push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10b9187f call ebp */
  call_ind((uint32_t)(EBP), 0x10b91881u);
  /* 10b91881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91883 push 0x10b96878 */
  push32((uint32_t)(0x10b96878u));
  /* 10b91888 call ebx */
  call_ind((uint32_t)(EBX), 0x10b9188au);
  /* 10b9188a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9188c push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91891 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91896 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91898 call esi */
  call_ind((uint32_t)(ESI), 0x10b9189au);
  /* 10b9189a push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9189c push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b918a1 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b918a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b918a8 call esi */
  call_ind((uint32_t)(ESI), 0x10b918aau);
  /* 10b918aa add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b918ad:;
  /* 10b918ad push 3 */
  push32((uint32_t)(0x3u));
  /* 10b918af call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b918b5u);
  /* 10b918b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b918b8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b918ba je 0x10b91936 */
  if (C.zf) goto L_10b91936;
  /* 10b918bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b918be push 0x10b96958 */
  push32((uint32_t)(0x10b96958u));
  /* 10b918c3 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b918c9u);
  /* 10b918c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b918cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b918ce jle 0x10b91936 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91936;
  /* 10b918d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b918d2 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b918d8u);
  /* 10b918d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b918db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b918dd je 0x10b91936 */
  if (C.zf) goto L_10b91936;
  /* 10b918df push 0 */
  push32((uint32_t)(0x0u));
  /* 10b918e1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b918e3 call ebp */
  call_ind((uint32_t)(EBP), 0x10b918e5u);
  /* 10b918e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b918e7 push 0x10b96958 */
  push32((uint32_t)(0x10b96958u));
  /* 10b918ec call ebx */
  call_ind((uint32_t)(EBX), 0x10b918eeu);
  /* 10b918ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10b918f0 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b918f5 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b918fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10b918fc call esi */
  call_ind((uint32_t)(ESI), 0x10b918feu);
  /* 10b918fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91900 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91905 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b9190a push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9190c call esi */
  call_ind((uint32_t)(ESI), 0x10b9190eu);
  /* 10b9190e push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91910 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91916u);
  /* 10b91916 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91919 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9191b je 0x10b9192d */
  if (C.zf) goto L_10b9192d;
  /* 10b9191d push 0x640 */
  push32((uint32_t)(0x640u));
  /* 10b91922 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91924 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b9192au);
  /* 10b9192a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9192d:;
  /* 10b9192d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9192f push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91931 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91933u);
  /* 10b91933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91936:;
  /* 10b91936 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91938 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9193eu);
  /* 10b9193e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91941 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91943 je 0x10b919bf */
  if (C.zf) goto L_10b919bf;
  /* 10b91945 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91947 push 0x10b96968 */
  push32((uint32_t)(0x10b96968u));
  /* 10b9194c call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91952u);
  /* 10b91952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91957 jle 0x10b919bf */
  if ((C.zf||C.sf!=C.of)) goto L_10b919bf;
  /* 10b91959 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9195b call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91961u);
  /* 10b91961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91964 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91966 je 0x10b919bf */
  if (C.zf) goto L_10b919bf;
  /* 10b91968 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9196a push 5 */
  push32((uint32_t)(0x5u));
  /* 10b9196c call ebp */
  call_ind((uint32_t)(EBP), 0x10b9196eu);
  /* 10b9196e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91970 push 0x10b96968 */
  push32((uint32_t)(0x10b96968u));
  /* 10b91975 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91977u);
  /* 10b91977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91979 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b9197e push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91985 call esi */
  call_ind((uint32_t)(ESI), 0x10b91987u);
  /* 10b91987 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91989 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b9198e push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91993 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91995 call esi */
  call_ind((uint32_t)(ESI), 0x10b91997u);
  /* 10b91997 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b91999 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9199fu);
  /* 10b9199f add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b919a2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b919a4 je 0x10b919b6 */
  if (C.zf) goto L_10b919b6;
  /* 10b919a6 push 0x640 */
  push32((uint32_t)(0x640u));
  /* 10b919ab push 3 */
  push32((uint32_t)(0x3u));
  /* 10b919ad call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b919b3u);
  /* 10b919b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b919b6:;
  /* 10b919b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b919b8 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b919ba call ebp */
  call_ind((uint32_t)(EBP), 0x10b919bcu);
  /* 10b919bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b919bf:;
  /* 10b919bf push 7 */
  push32((uint32_t)(0x7u));
  /* 10b919c1 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b919c7u);
  /* 10b919c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b919ca test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b919cc je 0x10b91a48 */
  if (C.zf) goto L_10b91a48;
  /* 10b919ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10b919d0 push 0x10b96970 */
  push32((uint32_t)(0x10b96970u));
  /* 10b919d5 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b919dbu);
  /* 10b919db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b919de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b919e0 jle 0x10b91a48 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91a48;
  /* 10b919e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b919e4 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b919eau);
  /* 10b919ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b919ed test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b919ef je 0x10b91a48 */
  if (C.zf) goto L_10b91a48;
  /* 10b919f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b919f3 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b919f5 call ebp */
  call_ind((uint32_t)(EBP), 0x10b919f7u);
  /* 10b919f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b919f9 push 0x10b96970 */
  push32((uint32_t)(0x10b96970u));
  /* 10b919fe call ebx */
  call_ind((uint32_t)(EBX), 0x10b91a00u);
  /* 10b91a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91a02 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91a07 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91a0c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91a0e call esi */
  call_ind((uint32_t)(ESI), 0x10b91a10u);
  /* 10b91a10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91a12 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91a17 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91a1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91a1e call esi */
  call_ind((uint32_t)(ESI), 0x10b91a20u);
  /* 10b91a20 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b91a22 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91a28u);
  /* 10b91a28 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91a2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91a2d je 0x10b91a3f */
  if (C.zf) goto L_10b91a3f;
  /* 10b91a2f push 0x514 */
  push32((uint32_t)(0x514u));
  /* 10b91a34 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91a36 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91a3cu);
  /* 10b91a3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91a3f:;
  /* 10b91a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91a41 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b91a43 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91a45u);
  /* 10b91a45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91a48:;
  /* 10b91a48 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b91a4a call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91a50u);
  /* 10b91a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91a53 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91a55 je 0x10b91ad1 */
  if (C.zf) goto L_10b91ad1;
  /* 10b91a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91a59 push 0x10b96980 */
  push32((uint32_t)(0x10b96980u));
  /* 10b91a5e call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91a64u);
  /* 10b91a64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91a67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91a69 jle 0x10b91ad1 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91ad1;
  /* 10b91a6b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b91a6d call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91a73u);
  /* 10b91a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91a76 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91a78 je 0x10b91ad1 */
  if (C.zf) goto L_10b91ad1;
  /* 10b91a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91a7c push 9 */
  push32((uint32_t)(0x9u));
  /* 10b91a7e call ebp */
  call_ind((uint32_t)(EBP), 0x10b91a80u);
  /* 10b91a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91a82 push 0x10b96980 */
  push32((uint32_t)(0x10b96980u));
  /* 10b91a87 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91a89u);
  /* 10b91a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91a8b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91a90 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91a95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91a97 call esi */
  call_ind((uint32_t)(ESI), 0x10b91a99u);
  /* 10b91a99 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91a9b push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91aa0 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91aa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91aa7 call esi */
  call_ind((uint32_t)(ESI), 0x10b91aa9u);
  /* 10b91aa9 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b91aab call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91ab1u);
  /* 10b91ab1 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91ab4 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91ab6 je 0x10b91ac8 */
  if (C.zf) goto L_10b91ac8;
  /* 10b91ab8 push 0x578 */
  push32((uint32_t)(0x578u));
  /* 10b91abd push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91abf call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91ac5u);
  /* 10b91ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91ac8:;
  /* 10b91ac8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91aca push 0xa */
  push32((uint32_t)(0xau));
  /* 10b91acc call ebp */
  call_ind((uint32_t)(EBP), 0x10b91aceu);
  /* 10b91ace add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91ad1:;
  /* 10b91ad1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b91ad3 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91ad9u);
  /* 10b91ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91adc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91ade je 0x10b91b5a */
  if (C.zf) goto L_10b91b5a;
  /* 10b91ae0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91ae2 push 0x10b96990 */
  push32((uint32_t)(0x10b96990u));
  /* 10b91ae7 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91aedu);
  /* 10b91aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91af0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91af2 jle 0x10b91b5a */
  if ((C.zf||C.sf!=C.of)) goto L_10b91b5a;
  /* 10b91af4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91af6 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91afcu);
  /* 10b91afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91aff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91b01 je 0x10b91b5a */
  if (C.zf) goto L_10b91b5a;
  /* 10b91b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b05 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b91b07 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91b09u);
  /* 10b91b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b0b push 0x10b96990 */
  push32((uint32_t)(0x10b96990u));
  /* 10b91b10 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91b12u);
  /* 10b91b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b14 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91b19 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91b1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91b20 call esi */
  call_ind((uint32_t)(ESI), 0x10b91b22u);
  /* 10b91b22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91b24 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91b29 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91b2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91b30 call esi */
  call_ind((uint32_t)(ESI), 0x10b91b32u);
  /* 10b91b32 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b91b34 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91b3au);
  /* 10b91b3a add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91b3d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91b3f je 0x10b91b51 */
  if (C.zf) goto L_10b91b51;
  /* 10b91b41 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10b91b46 push 6 */
  push32((uint32_t)(0x6u));
  /* 10b91b48 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91b4eu);
  /* 10b91b4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91b51:;
  /* 10b91b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b53 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b91b55 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91b57u);
  /* 10b91b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91b5a:;
  /* 10b91b5a push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b91b5c call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91b62u);
  /* 10b91b62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91b65 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91b67 je 0x10b91be3 */
  if (C.zf) goto L_10b91be3;
  /* 10b91b69 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91b6b push 0x10b967e0 */
  push32((uint32_t)(0x10b967e0u));
  /* 10b91b70 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91b76u);
  /* 10b91b76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91b79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91b7b jle 0x10b91be3 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91be3;
  /* 10b91b7d push 6 */
  push32((uint32_t)(0x6u));
  /* 10b91b7f call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91b85u);
  /* 10b91b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91b88 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91b8a je 0x10b91be3 */
  if (C.zf) goto L_10b91be3;
  /* 10b91b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b8e push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b91b90 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91b92u);
  /* 10b91b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b94 push 0x10b967e0 */
  push32((uint32_t)(0x10b967e0u));
  /* 10b91b99 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91b9bu);
  /* 10b91b9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91b9d push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91ba2 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91ba9 call esi */
  call_ind((uint32_t)(ESI), 0x10b91babu);
  /* 10b91bab push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91bad push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91bb2 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91bb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91bb9 call esi */
  call_ind((uint32_t)(ESI), 0x10b91bbbu);
  /* 10b91bbb push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b91bbd call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91bc3u);
  /* 10b91bc3 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91bc6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91bc8 je 0x10b91bda */
  if (C.zf) goto L_10b91bda;
  /* 10b91bca push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 10b91bcf push 7 */
  push32((uint32_t)(0x7u));
  /* 10b91bd1 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91bd7u);
  /* 10b91bd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91bda:;
  /* 10b91bda push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91bdc push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b91bde call ebp */
  call_ind((uint32_t)(EBP), 0x10b91be0u);
  /* 10b91be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91be3:;
  /* 10b91be3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b91be5 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91bebu);
  /* 10b91beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91bee test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91bf0 je 0x10b91c6c */
  if (C.zf) goto L_10b91c6c;
  /* 10b91bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91bf4 push 0x10b967e8 */
  push32((uint32_t)(0x10b967e8u));
  /* 10b91bf9 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91bffu);
  /* 10b91bff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91c04 jle 0x10b91c6c */
  if ((C.zf||C.sf!=C.of)) goto L_10b91c6c;
  /* 10b91c06 push 7 */
  push32((uint32_t)(0x7u));
  /* 10b91c08 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91c0eu);
  /* 10b91c0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c11 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91c13 je 0x10b91c6c */
  if (C.zf) goto L_10b91c6c;
  /* 10b91c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91c17 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b91c19 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91c1bu);
  /* 10b91c1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91c1d push 0x10b967e8 */
  push32((uint32_t)(0x10b967e8u));
  /* 10b91c22 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91c24u);
  /* 10b91c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91c26 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91c2b push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91c32 call esi */
  call_ind((uint32_t)(ESI), 0x10b91c34u);
  /* 10b91c34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91c36 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91c3b push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91c42 call esi */
  call_ind((uint32_t)(ESI), 0x10b91c44u);
  /* 10b91c44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b91c46 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91c4cu);
  /* 10b91c4c add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c4f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91c51 je 0x10b91c63 */
  if (C.zf) goto L_10b91c63;
  /* 10b91c53 push 0x578 */
  push32((uint32_t)(0x578u));
  /* 10b91c58 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b91c5a call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91c60u);
  /* 10b91c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91c63:;
  /* 10b91c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91c65 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10b91c67 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91c69u);
  /* 10b91c69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91c6c:;
  /* 10b91c6c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b91c6e call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91c74u);
  /* 10b91c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91c79 je 0x10b91cf5 */
  if (C.zf) goto L_10b91cf5;
  /* 10b91c7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91c7d push 0x10b967f0 */
  push32((uint32_t)(0x10b967f0u));
  /* 10b91c82 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91c88u);
  /* 10b91c88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91c8d jle 0x10b91cf5 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91cf5;
  /* 10b91c8f push 8 */
  push32((uint32_t)(0x8u));
  /* 10b91c91 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91c97u);
  /* 10b91c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91c9a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91c9c je 0x10b91cf5 */
  if (C.zf) goto L_10b91cf5;
  /* 10b91c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91ca0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b91ca2 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91ca4u);
  /* 10b91ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91ca6 push 0x10b967f0 */
  push32((uint32_t)(0x10b967f0u));
  /* 10b91cab call ebx */
  call_ind((uint32_t)(EBX), 0x10b91cadu);
  /* 10b91cad push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91caf push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91cb4 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91cb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91cbb call esi */
  call_ind((uint32_t)(ESI), 0x10b91cbdu);
  /* 10b91cbd push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91cbf push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91cc4 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91cc9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91ccb call esi */
  call_ind((uint32_t)(ESI), 0x10b91ccdu);
  /* 10b91ccd push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b91ccf call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91cd5u);
  /* 10b91cd5 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91cd8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91cda je 0x10b91cec */
  if (C.zf) goto L_10b91cec;
  /* 10b91cdc push 0x514 */
  push32((uint32_t)(0x514u));
  /* 10b91ce1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b91ce3 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91ce9u);
  /* 10b91ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91cec:;
  /* 10b91cec push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91cee push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10b91cf0 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91cf2u);
  /* 10b91cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91cf5:;
  /* 10b91cf5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b91cf7 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91cfdu);
  /* 10b91cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d00 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91d02 je 0x10b91d7e */
  if (C.zf) goto L_10b91d7e;
  /* 10b91d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91d06 push 0x10b967f8 */
  push32((uint32_t)(0x10b967f8u));
  /* 10b91d0b call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91d11u);
  /* 10b91d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91d16 jle 0x10b91d7e */
  if ((C.zf||C.sf!=C.of)) goto L_10b91d7e;
  /* 10b91d18 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b91d1a call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91d20u);
  /* 10b91d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d23 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91d25 je 0x10b91d7e */
  if (C.zf) goto L_10b91d7e;
  /* 10b91d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91d29 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10b91d2b call ebp */
  call_ind((uint32_t)(EBP), 0x10b91d2du);
  /* 10b91d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91d2f push 0x10b967f8 */
  push32((uint32_t)(0x10b967f8u));
  /* 10b91d34 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91d36u);
  /* 10b91d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91d38 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91d3d push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91d42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91d44 call esi */
  call_ind((uint32_t)(ESI), 0x10b91d46u);
  /* 10b91d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91d48 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91d4d push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91d52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91d54 call esi */
  call_ind((uint32_t)(ESI), 0x10b91d56u);
  /* 10b91d56 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b91d58 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91d5eu);
  /* 10b91d5e add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d61 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91d63 je 0x10b91d75 */
  if (C.zf) goto L_10b91d75;
  /* 10b91d65 push 0x578 */
  push32((uint32_t)(0x578u));
  /* 10b91d6a push 0xa */
  push32((uint32_t)(0xau));
  /* 10b91d6c call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91d72u);
  /* 10b91d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91d75:;
  /* 10b91d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91d77 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10b91d79 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91d7bu);
  /* 10b91d7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91d7e:;
  /* 10b91d7e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b91d80 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91d86u);
  /* 10b91d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d89 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91d8b je 0x10b91e07 */
  if (C.zf) goto L_10b91e07;
  /* 10b91d8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91d8f push 0x10b96840 */
  push32((uint32_t)(0x10b96840u));
  /* 10b91d94 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91d9au);
  /* 10b91d9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91d9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91d9f jle 0x10b91e07 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91e07;
  /* 10b91da1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10b91da3 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91da9u);
  /* 10b91da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91dac test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91dae je 0x10b91e07 */
  if (C.zf) goto L_10b91e07;
  /* 10b91db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91db2 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b91db4 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91db6u);
  /* 10b91db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91db8 push 0x10b96840 */
  push32((uint32_t)(0x10b96840u));
  /* 10b91dbd call ebx */
  call_ind((uint32_t)(EBX), 0x10b91dbfu);
  /* 10b91dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91dc1 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91dc6 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91dcb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91dcd call esi */
  call_ind((uint32_t)(ESI), 0x10b91dcfu);
  /* 10b91dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91dd1 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91dd6 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91ddb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91ddd call esi */
  call_ind((uint32_t)(ESI), 0x10b91ddfu);
  /* 10b91ddf push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b91de1 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91de7u);
  /* 10b91de7 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91dea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91dec je 0x10b91dfe */
  if (C.zf) goto L_10b91dfe;
  /* 10b91dee push 0x514 */
  push32((uint32_t)(0x514u));
  /* 10b91df3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b91df5 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91dfbu);
  /* 10b91dfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91dfe:;
  /* 10b91dfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91e00 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10b91e02 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91e04u);
  /* 10b91e04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91e07:;
  /* 10b91e07 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b91e09 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91e0fu);
  /* 10b91e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91e12 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91e14 je 0x10b91e90 */
  if (C.zf) goto L_10b91e90;
  /* 10b91e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91e18 push 0x10b96850 */
  push32((uint32_t)(0x10b96850u));
  /* 10b91e1d call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91e23u);
  /* 10b91e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91e28 jle 0x10b91e90 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91e90;
  /* 10b91e2a push 0xb */
  push32((uint32_t)(0xbu));
  /* 10b91e2c call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91e32u);
  /* 10b91e32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91e35 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91e37 je 0x10b91e90 */
  if (C.zf) goto L_10b91e90;
  /* 10b91e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91e3b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10b91e3d call ebp */
  call_ind((uint32_t)(EBP), 0x10b91e3fu);
  /* 10b91e3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91e41 push 0x10b96850 */
  push32((uint32_t)(0x10b96850u));
  /* 10b91e46 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91e48u);
  /* 10b91e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91e4a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91e4f push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91e56 call esi */
  call_ind((uint32_t)(ESI), 0x10b91e58u);
  /* 10b91e58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b91e5a push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91e5f push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91e64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91e66 call esi */
  call_ind((uint32_t)(ESI), 0x10b91e68u);
  /* 10b91e68 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b91e6a call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91e70u);
  /* 10b91e70 add esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91e73 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91e75 je 0x10b91e87 */
  if (C.zf) goto L_10b91e87;
  /* 10b91e77 push 0x514 */
  push32((uint32_t)(0x514u));
  /* 10b91e7c push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b91e7e call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91e84u);
  /* 10b91e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91e87:;
  /* 10b91e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91e89 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b91e8b call ebp */
  call_ind((uint32_t)(EBP), 0x10b91e8du);
  /* 10b91e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91e90:;
  /* 10b91e90 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b91e92 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91e98u);
  /* 10b91e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91e9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91e9d je 0x10b91f09 */
  if (C.zf) goto L_10b91f09;
  /* 10b91e9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91ea1 push 0x10b96858 */
  push32((uint32_t)(0x10b96858u));
  /* 10b91ea6 call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91eacu);
  /* 10b91eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91eb1 jle 0x10b91f09 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91f09;
  /* 10b91eb3 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10b91eb5 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b91ebbu);
  /* 10b91ebb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91ebe test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91ec0 je 0x10b91f09 */
  if (C.zf) goto L_10b91f09;
  /* 10b91ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91ec4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b91ec6 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91ec8u);
  /* 10b91ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91eca push 0x10b96858 */
  push32((uint32_t)(0x10b96858u));
  /* 10b91ecf call ebx */
  call_ind((uint32_t)(EBX), 0x10b91ed1u);
  /* 10b91ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91ed3 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b91ed8 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b91edd push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91edf call esi */
  call_ind((uint32_t)(ESI), 0x10b91ee1u);
  /* 10b91ee1 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b91ee3 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91ee9u);
  /* 10b91ee9 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91eec test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91eee je 0x10b91f00 */
  if (C.zf) goto L_10b91f00;
  /* 10b91ef0 push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 10b91ef5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b91ef7 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91efdu);
  /* 10b91efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91f00:;
  /* 10b91f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f02 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10b91f04 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91f06u);
  /* 10b91f06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91f09:;
  /* 10b91f09 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b91f0b call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91f11u);
  /* 10b91f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91f14 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91f16 je 0x10b91fd5 */
  if (C.zf) goto L_10b91fd5;
  /* 10b91f1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f20 call dword ptr [0x10b950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e4))), 0x10b91f26u);
  /* 10b91f26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91f29 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b91f2e jle 0x10b91fd5 */
  if ((C.zf||C.sf!=C.of)) goto L_10b91fd5;
  /* 10b91f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f36 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b91f38 call ebp */
  call_ind((uint32_t)(EBP), 0x10b91f3au);
  /* 10b91f3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f3c push 0x10b96860 */
  push32((uint32_t)(0x10b96860u));
  /* 10b91f41 call ebx */
  call_ind((uint32_t)(EBX), 0x10b91f43u);
  /* 10b91f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f47 push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b91f4c push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91f4e call dword ptr [0x10b950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e8))), 0x10b91f54u);
  /* 10b91f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f56 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b91f58 call dword ptr [0x10b950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950ec))), 0x10b91f5eu);
  /* 10b91f5e push 0xffffc568 */
  push32((uint32_t)(0xffffc568u));
  /* 10b91f63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f67 call dword ptr [0x10b950f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f0))), 0x10b91f6du);
  /* 10b91f6d push 0x10b962d4 */
  push32((uint32_t)(0x10b962d4u));
  /* 10b91f72 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b91f78u);
  /* 10b91f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f7a push 0x10b96950 */
  push32((uint32_t)(0x10b96950u));
  /* 10b91f7f call ebx */
  call_ind((uint32_t)(EBX), 0x10b91f81u);
  /* 10b91f81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b91f88 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91f8d push 3 */
  push32((uint32_t)(0x3u));
  /* 10b91f8f call dword ptr [0x10b950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e8))), 0x10b91f95u);
  /* 10b91f95 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b91f9a call dword ptr [0x10b950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f4))), 0x10b91fa0u);
  /* 10b91fa0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10b91fa5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b91fa7 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91fadu);
  /* 10b91fad push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10b91fb2 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b91fb4 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b91fbau);
  /* 10b91fba push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10b91fbc call dword ptr [0x10b95128] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95128))), 0x10b91fc2u);
  /* 10b91fc2 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10b91fc4 call dword ptr [0x10b95124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95124))), 0x10b91fcau);
  /* 10b91fca push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10b91fcc call dword ptr [0x10b95124] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95124))), 0x10b91fd2u);
  /* 10b91fd2 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b91fd5:;
  /* 10b91fd5 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10b91fd7 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b91fddu);
  /* 10b91fdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91fe0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b91fe2 je 0x10b92078 */
  if (C.zf) goto L_10b92078;
  /* 10b91fe8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b91fea push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b91fef call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b91ff5u);
  /* 10b91ff5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b91ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b91ffa jle 0x10b92078 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92078;
  /* 10b91ffc push 0xe */
  push32((uint32_t)(0xeu));
  /* 10b91ffe call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b92004u);
  /* 10b92004 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92007 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92009 je 0x10b92078 */
  if (C.zf) goto L_10b92078;
  /* 10b9200b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9200d push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9200f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92011 call edi */
  call_ind((uint32_t)(EDI), 0x10b92013u);
  /* 10b92013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92015 push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b9201a call ebx */
  call_ind((uint32_t)(EBX), 0x10b9201cu);
  /* 10b9201c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9201e push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b92023 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b92028 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9202a call esi */
  call_ind((uint32_t)(ESI), 0x10b9202cu);
  /* 10b9202c push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9202e push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b92033 push 0x10b96848 */
  push32((uint32_t)(0x10b96848u));
  /* 10b92038 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9203a call esi */
  call_ind((uint32_t)(ESI), 0x10b9203cu);
  /* 10b9203c push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b9203e call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b92044u);
  /* 10b92044 add esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92047 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92049 je 0x10b92078 */
  if (C.zf) goto L_10b92078;
  /* 10b9204b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9204d push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10b9204f call ebp */
  call_ind((uint32_t)(EBP), 0x10b92051u);
  /* 10b92051 push 0x10b962cc */
  push32((uint32_t)(0x10b962ccu));
  /* 10b92056 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b9205cu);
  /* 10b9205c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9205e push 0x10b96950 */
  push32((uint32_t)(0x10b96950u));
  /* 10b92063 call ebx */
  call_ind((uint32_t)(EBX), 0x10b92065u);
  /* 10b92065 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92067 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b92069 call dword ptr [0x10b950ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950ec))), 0x10b9206fu);
  /* 10b9206f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92071 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10b92073 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92075u);
  /* 10b92075 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92078:;
  /* 10b92078 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10b9207a call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b92080u);
  /* 10b92080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92083 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92085 je 0x10b92153 */
  if (C.zf) goto L_10b92153;
  /* 10b9208b push 0x10b96898 */
  push32((uint32_t)(0x10b96898u));
  /* 10b92090 push 0x10b968a0 */
  push32((uint32_t)(0x10b968a0u));
  /* 10b92095 call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b9209bu);
  /* 10b9209b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b920a0 jle 0x10b92153 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92153;
  /* 10b920a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b920a8 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10b920aa call ebp */
  call_ind((uint32_t)(EBP), 0x10b920acu);
  /* 10b920ac push 0x10b962b8 */
  push32((uint32_t)(0x10b962b8u));
  /* 10b920b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b920b3 push 0x10b962b0 */
  push32((uint32_t)(0x10b962b0u));
  /* 10b920b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b920ba call dword ptr [0x10b950fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950fc))), 0x10b920c0u);
  /* 10b920c0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b920c3 sub eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b920c6 je 0x10b9213b */
  if (C.zf) goto L_10b9213b;
  /* 10b920c8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b920c9 je 0x10b9212c */
  if (C.zf) goto L_10b9212c;
  /* 10b920cb dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b920cc jne 0x10b92153 */
  if (!C.zf) goto L_10b92153;
  /* 10b920d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b920d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b920d6 call dword ptr [0x10b950e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e4))), 0x10b920dcu);
  /* 10b920dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b920df cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b920e4 jle 0x10b92125 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92125;
  /* 10b920e6 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10b920eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10b920ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10b920ef call dword ptr [0x10b950f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f0))), 0x10b920f5u);
  /* 10b920f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b920f7 push 0x10b96978 */
  push32((uint32_t)(0x10b96978u));
  /* 10b920fc call ebx */
  call_ind((uint32_t)(EBX), 0x10b920feu);
  /* 10b920fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10b92100 call dword ptr [0x10b95100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95100))), 0x10b92106u);
  /* 10b92106 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92108 push 0x10b968f8 */
  push32((uint32_t)(0x10b968f8u));
  /* 10b9210d call ebx */
  call_ind((uint32_t)(EBX), 0x10b9210fu);
  /* 10b9210f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92113 push 0x10b96800 */
  push32((uint32_t)(0x10b96800u));
  /* 10b92118 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9211a call dword ptr [0x10b950e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e8))), 0x10b92120u);
  /* 10b92120 add esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92123 jmp 0x10b92153 */
  goto L_10b92153;
L_10b92125:;
  /* 10b92125 push 0x10b962a8 */
  push32((uint32_t)(0x10b962a8u));
  /* 10b9212a jmp 0x10b92140 */
  goto L_10b92140;
L_10b9212c:;
  /* 10b9212c push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10b9212e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92130 call dword ptr [0x10b950c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c4))), 0x10b92136u);
  /* 10b92136 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92139 jmp 0x10b92153 */
  goto L_10b92153;
L_10b9213b:;
  /* 10b9213b push 0x10b962a0 */
  push32((uint32_t)(0x10b962a0u));
L_10b92140:;
  /* 10b92140 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b92146u);
  /* 10b92146 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10b92148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9214a call dword ptr [0x10b950c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c4))), 0x10b92150u);
  /* 10b92150 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92153:;
  /* 10b92153 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10b92155 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9215bu);
  /* 10b9215b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9215e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92160 je 0x10b92185 */
  if (C.zf) goto L_10b92185;
  /* 10b92162 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10b92164 call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b9216au);
  /* 10b9216a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9216d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9216f je 0x10b92185 */
  if (C.zf) goto L_10b92185;
  /* 10b92171 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92173 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10b92175 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92177u);
  /* 10b92177 push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b9217c call dword ptr [0x10b950f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f4))), 0x10b92182u);
  /* 10b92182 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92185:;
  /* 10b92185 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b92187 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9218du);
  /* 10b9218d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92190 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92192 je 0x10b921c2 */
  if (C.zf) goto L_10b921c2;
  /* 10b92194 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92196 push 0x10b96810 */
  push32((uint32_t)(0x10b96810u));
  /* 10b9219b call dword ptr [0x10b95104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95104))), 0x10b921a1u);
  /* 10b921a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b921a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b921a6 je 0x10b921c2 */
  if (C.zf) goto L_10b921c2;
  /* 10b921a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b921aa push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b921ac call ebp */
  call_ind((uint32_t)(EBP), 0x10b921aeu);
  /* 10b921ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10b921b0 push 0x10b96938 */
  push32((uint32_t)(0x10b96938u));
  /* 10b921b5 call ebx */
  call_ind((uint32_t)(EBX), 0x10b921b7u);
  /* 10b921b7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b921b9 call dword ptr [0x10b95100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95100))), 0x10b921bfu);
  /* 10b921bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b921c2:;
  /* 10b921c2 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10b921c4 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b921cau);
  /* 10b921ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b921cd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b921cf je 0x10b921ff */
  if (C.zf) goto L_10b921ff;
  /* 10b921d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b921d3 push 0x10b96818 */
  push32((uint32_t)(0x10b96818u));
  /* 10b921d8 call dword ptr [0x10b95104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95104))), 0x10b921deu);
  /* 10b921de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b921e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b921e3 je 0x10b921ff */
  if (C.zf) goto L_10b921ff;
  /* 10b921e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b921e7 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10b921e9 call ebp */
  call_ind((uint32_t)(EBP), 0x10b921ebu);
  /* 10b921eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10b921ed push 0x10b96938 */
  push32((uint32_t)(0x10b96938u));
  /* 10b921f2 call ebx */
  call_ind((uint32_t)(EBX), 0x10b921f4u);
  /* 10b921f4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10b921f6 call dword ptr [0x10b95100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95100))), 0x10b921fcu);
  /* 10b921fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b921ff:;
  /* 10b921ff push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10b92201 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b92207u);
  /* 10b92207 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9220a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9220c je 0x10b9223f */
  if (C.zf) goto L_10b9223f;
  /* 10b9220e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92210 push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b92215 call dword ptr [0x10b95104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95104))), 0x10b9221bu);
  /* 10b9221b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9221e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92221 jle 0x10b9223f */
  if ((C.zf||C.sf!=C.of)) goto L_10b9223f;
  /* 10b92223 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92225 push 0x10b968a8 */
  push32((uint32_t)(0x10b968a8u));
  /* 10b9222a call ebx */
  call_ind((uint32_t)(EBX), 0x10b9222cu);
  /* 10b9222c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9222e push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10b92233 push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b92238 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9223a call esi */
  call_ind((uint32_t)(ESI), 0x10b9223cu);
  /* 10b9223c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9223f:;
  /* 10b9223f push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10b92241 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b92247u);
  /* 10b92247 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9224a test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9224c je 0x10b92277 */
  if (C.zf) goto L_10b92277;
  /* 10b9224e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92250 push 0x10b96808 */
  push32((uint32_t)(0x10b96808u));
  /* 10b92255 call dword ptr [0x10b95104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95104))), 0x10b9225bu);
  /* 10b9225b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9225e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92261 jle 0x10b92277 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92277;
  /* 10b92263 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92265 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10b92267 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92269u);
  /* 10b92269 push 0x10b96298 */
  push32((uint32_t)(0x10b96298u));
  /* 10b9226e call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b92274u);
  /* 10b92274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92277:;
  /* 10b92277 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b92279 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9227fu);
  /* 10b9227f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92282 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92284 je 0x10b922b5 */
  if (C.zf) goto L_10b922b5;
  /* 10b92286 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92288 push 0x10b96898 */
  push32((uint32_t)(0x10b96898u));
  /* 10b9228d call dword ptr [0x10b950dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950dc))), 0x10b92293u);
  /* 10b92293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92296 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92299 jge 0x10b922b5 */
  if ((C.sf==C.of)) goto L_10b922b5;
  /* 10b9229b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9229d push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10b9229f call ebp */
  call_ind((uint32_t)(EBP), 0x10b922a1u);
  /* 10b922a1 push 0x10b96290 */
  push32((uint32_t)(0x10b96290u));
  /* 10b922a6 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b922acu);
  /* 10b922ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b922af call dword ptr [0x10b95108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95108))), 0x10b922b5u);
L_10b922b5:;
  /* 10b922b5 push 0x10b96950 */
  push32((uint32_t)(0x10b96950u));
  /* 10b922ba call dword ptr [0x10b9510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9510c))), 0x10b922c0u);
  /* 10b922c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b922c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b922c5 jne 0x10b922f0 */
  if (!C.zf) goto L_10b922f0;
  /* 10b922c7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10b922c9 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b922cfu);
  /* 10b922cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b922d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b922d4 je 0x10b922f0 */
  if (C.zf) goto L_10b922f0;
  /* 10b922d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b922d8 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10b922da call ebp */
  call_ind((uint32_t)(EBP), 0x10b922dcu);
  /* 10b922dc push 0x10b96288 */
  push32((uint32_t)(0x10b96288u));
  /* 10b922e1 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b922e7u);
  /* 10b922e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b922ea call dword ptr [0x10b95108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95108))), 0x10b922f0u);
L_10b922f0:;
  /* 10b922f0 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b922f2 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b922f8u);
  /* 10b922f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b922fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b922fd je 0x10b92347 */
  if (C.zf) goto L_10b92347;
  /* 10b922ff push 0x10b96898 */
  push32((uint32_t)(0x10b96898u));
  /* 10b92304 push 0x10b96890 */
  push32((uint32_t)(0x10b96890u));
  /* 10b92309 call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b9230fu);
  /* 10b9230f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92314 jle 0x10b92347 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92347;
  /* 10b92316 push 0x10b96950 */
  push32((uint32_t)(0x10b96950u));
  /* 10b9231b push 0x10b96890 */
  push32((uint32_t)(0x10b96890u));
  /* 10b92320 call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b92326u);
  /* 10b92326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92329 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9232b jle 0x10b92347 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92347;
  /* 10b9232d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9232f push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10b92331 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92333u);
  /* 10b92333 push 0x10b96280 */
  push32((uint32_t)(0x10b96280u));
  /* 10b92338 call dword ptr [0x10b950c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950c8))), 0x10b9233eu);
  /* 10b9233e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92341 call dword ptr [0x10b95110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95110))), 0x10b92347u);
L_10b92347:;
  /* 10b92347 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10b92349 call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b9234fu);
  /* 10b9234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92352 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92354 je 0x10b92389 */
  if (C.zf) goto L_10b92389;
  /* 10b92356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92358 push 0x10b96888 */
  push32((uint32_t)(0x10b96888u));
  /* 10b9235d call dword ptr [0x10b95104] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95104))), 0x10b92363u);
  /* 10b92363 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92368 jle 0x10b92389 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92389;
  /* 10b9236a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9236c push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10b9236e call ebp */
  call_ind((uint32_t)(EBP), 0x10b92370u);
  /* 10b92370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92372 push 0x10b96830 */
  push32((uint32_t)(0x10b96830u));
  /* 10b92377 call ebx */
  call_ind((uint32_t)(EBX), 0x10b92379u);
  /* 10b92379 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9237b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b9237d push 0x10b96888 */
  push32((uint32_t)(0x10b96888u));
  /* 10b92382 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92384 call esi */
  call_ind((uint32_t)(ESI), 0x10b92386u);
  /* 10b92386 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92389:;
  /* 10b92389 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10b9238b call dword ptr [0x10b950b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950b0))), 0x10b92391u);
  /* 10b92391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92394 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92396 je 0x10b923d0 */
  if (C.zf) goto L_10b923d0;
  /* 10b92398 push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b9239d push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b923a2 call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b923a8u);
  /* 10b923a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b923ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b923ad jle 0x10b923d0 */
  if ((C.zf||C.sf!=C.of)) goto L_10b923d0;
  /* 10b923af push 0 */
  push32((uint32_t)(0x0u));
  /* 10b923b1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10b923b3 call ebp */
  call_ind((uint32_t)(EBP), 0x10b923b5u);
  /* 10b923b5 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10b923ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10b923bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b923be call edi */
  call_ind((uint32_t)(EDI), 0x10b923c0u);
  /* 10b923c0 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10b923c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b923c7 call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b923cdu);
  /* 10b923cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b923d0:;
  /* 10b923d0 mov edi, dword ptr [0x10b950b0] */
  EDI = (r32((uint32_t)(0x10b950b0)));
  /* 10b923d6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10b923d8 call edi */
  call_ind((uint32_t)(EDI), 0x10b923dau);
  /* 10b923da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b923dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b923df je 0x10b92436 */
  if (C.zf) goto L_10b92436;
  /* 10b923e1 push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b923e6 push 0x10b96870 */
  push32((uint32_t)(0x10b96870u));
  /* 10b923eb call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b923f1u);
  /* 10b923f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b923f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b923f6 jle 0x10b92436 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92436;
  /* 10b923f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b923fa call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b92400u);
  /* 10b92400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92403 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92405 je 0x10b92436 */
  if (C.zf) goto L_10b92436;
  /* 10b92407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92409 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10b9240b call ebp */
  call_ind((uint32_t)(EBP), 0x10b9240du);
  /* 10b9240d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9240f push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b92414 call ebx */
  call_ind((uint32_t)(EBX), 0x10b92416u);
  /* 10b92416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92418 push 0xcd */
  push32((uint32_t)(0xcdu));
  /* 10b9241d push 0x10b96988 */
  push32((uint32_t)(0x10b96988u));
  /* 10b92422 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92424 call esi */
  call_ind((uint32_t)(ESI), 0x10b92426u);
  /* 10b92426 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10b9242b push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b9242d call dword ptr [0x10b950d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950d0))), 0x10b92433u);
  /* 10b92433 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92436:;
  /* 10b92436 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10b92438 call edi */
  call_ind((uint32_t)(EDI), 0x10b9243au);
  /* 10b9243a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9243d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9243f je 0x10b92489 */
  if (C.zf) goto L_10b92489;
  /* 10b92441 push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b92446 push 0x10b96988 */
  push32((uint32_t)(0x10b96988u));
  /* 10b9244b call dword ptr [0x10b950f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950f8))), 0x10b92451u);
  /* 10b92451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92456 jle 0x10b92489 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92489;
  /* 10b92458 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10b9245a call dword ptr [0x10b950e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950e0))), 0x10b92460u);
  /* 10b92460 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92463 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b92465 je 0x10b92489 */
  if (C.zf) goto L_10b92489;
  /* 10b92467 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92469 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10b9246b call ebp */
  call_ind((uint32_t)(EBP), 0x10b9246du);
  /* 10b9246d push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9246f push 0x10b96880 */
  push32((uint32_t)(0x10b96880u));
  /* 10b92474 call ebx */
  call_ind((uint32_t)(EBX), 0x10b92476u);
  /* 10b92476 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92478 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10b9247d push 0x10b96828 */
  push32((uint32_t)(0x10b96828u));
  /* 10b92482 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92484 call esi */
  call_ind((uint32_t)(ESI), 0x10b92486u);
  /* 10b92486 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92489:;
  /* 10b92489 pop edi */
  EDI = (pop32());
  /* 10b9248a pop esi */
  ESI = (pop32());
  /* 10b9248b pop ebp */
  EBP = (pop32());
  /* 10b9248c pop ebx */
  EBX = (pop32());
  /* 10b9248d ret  */
  ESPCHK(0x10b91310u, _esp0);
  ESP += 4; return;
}

/* FUN_10002490 @ 0x10b92490 (217 bytes, 57 insns) */
void f_10b92490(void) {
  FTRACE(0x10b92490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92490 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b92494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92497 jne 0x10b92525 */
  if (!C.zf) goto L_10b92525;
  /* 10b9249d call dword ptr [0x10b95070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95070))), 0x10b924a3u);
  /* 10b924a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b924a5 mov dword ptr [0x10b969b4], eax */
  w32((uint32_t)(0x10b969b4), (EAX));
  /* 10b924aa call 0x10b92ec4 */
  push32(0x10b924afu); f_10b92ec4();
  /* 10b924af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b924b1 pop ecx */
  ECX = (pop32());
  /* 10b924b2 je 0x10b924f0 */
  if (C.zf) goto L_10b924f0;
  /* 10b924b4 mov eax, dword ptr [0x10b969b4] */
  EAX = (r32((uint32_t)(0x10b969b4)));
  /* 10b924b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b924bb mov cl, byte ptr [0x10b969b5] */
  CL = (r8((uint32_t)(0x10b969b5)));
  /* 10b924c1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b924c6 shr dword ptr [0x10b969b4], 0x10 */
  w32((uint32_t)(0x10b969b4), (sh_shr((uint32_t)(r32((uint32_t)(0x10b969b4))), (0x10u)&0x1f, 32)));
  /* 10b924cd mov dword ptr [0x10b969bc], eax */
  w32((uint32_t)(0x10b969bc), (EAX));
  /* 10b924d2 mov dword ptr [0x10b969c0], ecx */
  w32((uint32_t)(0x10b969c0), (ECX));
  /* 10b924d8 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b924db add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b924dd mov dword ptr [0x10b969b8], eax */
  w32((uint32_t)(0x10b969b8), (EAX));
  /* 10b924e2 call 0x10b92757 */
  push32(0x10b924e7u); f_10b92757();
  /* 10b924e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b924e9 jne 0x10b924f4 */
  if (!C.zf) goto L_10b924f4;
  /* 10b924eb call 0x10b92f00 */
  push32(0x10b924f0u); f_10b92f00();
L_10b924f0:;
  /* 10b924f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b924f2 jmp 0x10b92566 */
  goto L_10b92566;
L_10b924f4:;
  /* 10b924f4 call dword ptr [0x10b9506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9506c))), 0x10b924fau);
  /* 10b924fa mov dword ptr [0x10b96f18], eax */
  w32((uint32_t)(0x10b96f18), (EAX));
  /* 10b924ff call 0x10b92d92 */
  push32(0x10b92504u); f_10b92d92();
  /* 10b92504 mov dword ptr [0x10b969a0], eax */
  w32((uint32_t)(0x10b969a0), (EAX));
  /* 10b92509 call 0x10b9287c */
  push32(0x10b9250eu); f_10b9287c();
  /* 10b9250e call 0x10b92b45 */
  push32(0x10b92513u); f_10b92b45();
  /* 10b92513 call 0x10b92a8c */
  push32(0x10b92518u); f_10b92a8c();
  /* 10b92518 call 0x10b92639 */
  push32(0x10b9251du); f_10b92639();
  /* 10b9251d inc dword ptr [0x10b9699c] */
  { uint32_t _r=(r32((uint32_t)(0x10b9699c)))+1; w32((uint32_t)(0x10b9699c), (_r)); fl_inc(_r,32); }
  /* 10b92523 jmp 0x10b92563 */
  goto L_10b92563;
L_10b92525:;
  /* 10b92525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b92527 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92529 jne 0x10b92557 */
  if (!C.zf) goto L_10b92557;
  /* 10b9252b cmp dword ptr [0x10b9699c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10b9699c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92531 jle 0x10b924f0 */
  if ((C.zf||C.sf!=C.of)) goto L_10b924f0;
  /* 10b92533 dec dword ptr [0x10b9699c] */
  { uint32_t _r=(r32((uint32_t)(0x10b9699c)))-1; w32((uint32_t)(0x10b9699c), (_r)); fl_dec(_r,32); }
  /* 10b92539 cmp dword ptr [0x10b969ec], ecx */
  { uint32_t _a=(r32((uint32_t)(0x10b969ec))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9253f jne 0x10b92546 */
  if (!C.zf) goto L_10b92546;
  /* 10b92541 call 0x10b92677 */
  push32(0x10b92546u); f_10b92677();
L_10b92546:;
  /* 10b92546 call 0x10b92a38 */
  push32(0x10b9254bu); f_10b92a38();
  /* 10b9254b call 0x10b927ab */
  push32(0x10b92550u); f_10b927ab();
  /* 10b92550 call 0x10b92f00 */
  push32(0x10b92555u); f_10b92f00();
  /* 10b92555 jmp 0x10b92563 */
  goto L_10b92563;
L_10b92557:;
  /* 10b92557 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9255a jne 0x10b92563 */
  if (!C.zf) goto L_10b92563;
  /* 10b9255c push ecx */
  push32((uint32_t)(ECX));
  /* 10b9255d call 0x10b927dc */
  push32(0x10b92562u); f_10b927dc();
  /* 10b92562 pop ecx */
  ECX = (pop32());
L_10b92563:;
  /* 10b92563 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92565 pop eax */
  EAX = (pop32());
L_10b92566:;
  /* 10b92566 ret 0xc */
  ESPCHK(0x10b92490u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10b92569 (157 bytes, 73 insns) */
void f_10b92569(void) {
  FTRACE(0x10b92569u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92569 push ebp */
  push32((uint32_t)(EBP));
  /* 10b9256a mov ebp, esp */
  EBP = (ESP);
  /* 10b9256c push ebx */
  push32((uint32_t)(EBX));
  /* 10b9256d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b92570 push esi */
  push32((uint32_t)(ESI));
  /* 10b92571 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b92574 push edi */
  push32((uint32_t)(EDI));
  /* 10b92575 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10b92578 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b9257a jne 0x10b92585 */
  if (!C.zf) goto L_10b92585;
  /* 10b9257c cmp dword ptr [0x10b9699c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b9699c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92583 jmp 0x10b925ab */
  goto L_10b925ab;
L_10b92585:;
  /* 10b92585 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92588 je 0x10b9258f */
  if (C.zf) goto L_10b9258f;
  /* 10b9258a cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9258d jne 0x10b925b1 */
  if (!C.zf) goto L_10b925b1;
L_10b9258f:;
  /* 10b9258f mov eax, dword ptr [0x10b96f1c] */
  EAX = (r32((uint32_t)(0x10b96f1c)));
  /* 10b92594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92596 je 0x10b925a1 */
  if (C.zf) goto L_10b925a1;
  /* 10b92598 push edi */
  push32((uint32_t)(EDI));
  /* 10b92599 push esi */
  push32((uint32_t)(ESI));
  /* 10b9259a push ebx */
  push32((uint32_t)(EBX));
  /* 10b9259b call eax */
  call_ind((uint32_t)(EAX), 0x10b9259du);
  /* 10b9259d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9259f je 0x10b925ad */
  if (C.zf) goto L_10b925ad;
L_10b925a1:;
  /* 10b925a1 push edi */
  push32((uint32_t)(EDI));
  /* 10b925a2 push esi */
  push32((uint32_t)(ESI));
  /* 10b925a3 push ebx */
  push32((uint32_t)(EBX));
  /* 10b925a4 call 0x10b92490 */
  push32(0x10b925a9u); f_10b92490();
  /* 10b925a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10b925ab:;
  /* 10b925ab jne 0x10b925b1 */
  if (!C.zf) goto L_10b925b1;
L_10b925ad:;
  /* 10b925ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b925af jmp 0x10b925ff */
  goto L_10b925ff;
L_10b925b1:;
  /* 10b925b1 push edi */
  push32((uint32_t)(EDI));
  /* 10b925b2 push esi */
  push32((uint32_t)(ESI));
  /* 10b925b3 push ebx */
  push32((uint32_t)(EBX));
  /* 10b925b4 call 0x10b912f0 */
  push32(0x10b925b9u); f_10b912f0();
  /* 10b925b9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b925bc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10b925bf jne 0x10b925cd */
  if (!C.zf) goto L_10b925cd;
  /* 10b925c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b925c3 jne 0x10b925fc */
  if (!C.zf) goto L_10b925fc;
  /* 10b925c5 push edi */
  push32((uint32_t)(EDI));
  /* 10b925c6 push eax */
  push32((uint32_t)(EAX));
  /* 10b925c7 push ebx */
  push32((uint32_t)(EBX));
  /* 10b925c8 call 0x10b92490 */
  push32(0x10b925cdu); f_10b92490();
L_10b925cd:;
  /* 10b925cd test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b925cf je 0x10b925d6 */
  if (C.zf) goto L_10b925d6;
  /* 10b925d1 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b925d4 jne 0x10b925fc */
  if (!C.zf) goto L_10b925fc;
L_10b925d6:;
  /* 10b925d6 push edi */
  push32((uint32_t)(EDI));
  /* 10b925d7 push esi */
  push32((uint32_t)(ESI));
  /* 10b925d8 push ebx */
  push32((uint32_t)(EBX));
  /* 10b925d9 call 0x10b92490 */
  push32(0x10b925deu); f_10b92490();
  /* 10b925de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b925e0 jne 0x10b925e5 */
  if (!C.zf) goto L_10b925e5;
  /* 10b925e2 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10b925e5:;
  /* 10b925e5 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b925e9 je 0x10b925fc */
  if (C.zf) goto L_10b925fc;
  /* 10b925eb mov eax, dword ptr [0x10b96f1c] */
  EAX = (r32((uint32_t)(0x10b96f1c)));
  /* 10b925f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b925f2 je 0x10b925fc */
  if (C.zf) goto L_10b925fc;
  /* 10b925f4 push edi */
  push32((uint32_t)(EDI));
  /* 10b925f5 push esi */
  push32((uint32_t)(ESI));
  /* 10b925f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10b925f7 call eax */
  call_ind((uint32_t)(EAX), 0x10b925f9u);
  /* 10b925f9 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10b925fc:;
  /* 10b925fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10b925ff:;
  /* 10b925ff pop edi */
  EDI = (pop32());
  /* 10b92600 pop esi */
  ESI = (pop32());
  /* 10b92601 pop ebx */
  EBX = (pop32());
  /* 10b92602 pop ebp */
  EBP = (pop32());
  /* 10b92603 ret 0xc */
  ESPCHK(0x10b92569u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10b92606 (48 bytes, 15 insns) */
void f_10b92606(void) {
  FTRACE(0x10b92606u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92606 mov eax, dword ptr [0x10b969a8] */
  EAX = (r32((uint32_t)(0x10b969a8)));
  /* 10b9260b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9260e je 0x10b9261d */
  if (C.zf) goto L_10b9261d;
  /* 10b92610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92612 jne 0x10b92622 */
  if (!C.zf) goto L_10b92622;
  /* 10b92614 cmp dword ptr [0x10b969ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b969ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9261b jne 0x10b92622 */
  if (!C.zf) goto L_10b92622;
L_10b9261d:;
  /* 10b9261d call 0x10b92f75 */
  push32(0x10b92622u); f_10b92f75();
L_10b92622:;
  /* 10b92622 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b92626 call 0x10b92fae */
  push32(0x10b9262bu); f_10b92fae();
  /* 10b9262b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b92630 call dword ptr [0x10b964b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b964b4))), 0x10b92636u);
  /* 10b92636 pop ecx */
  ECX = (pop32());
  /* 10b92637 pop ecx */
  ECX = (pop32());
  /* 10b92638 ret  */
  ESPCHK(0x10b92606u, _esp0);
  ESP += 4; return;
}

/* FUN_10002639 @ 0x10b92639 (45 bytes, 12 insns) */
void f_10b92639(void) {
  FTRACE(0x10b92639u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92639 mov eax, dword ptr [0x10b96f14] */
  EAX = (r32((uint32_t)(0x10b96f14)));
  /* 10b9263e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92640 je 0x10b92644 */
  if (C.zf) goto L_10b92644;
  /* 10b92642 call eax */
  call_ind((uint32_t)(EAX), 0x10b92644u);
L_10b92644:;
  /* 10b92644 push 0x10b96010 */
  push32((uint32_t)(0x10b96010u));
  /* 10b92649 push 0x10b96008 */
  push32((uint32_t)(0x10b96008u));
  /* 10b9264e call 0x10b9273d */
  push32(0x10b92653u); f_10b9273d();
  /* 10b92653 push 0x10b96004 */
  push32((uint32_t)(0x10b96004u));
  /* 10b92658 push 0x10b96000 */
  push32((uint32_t)(0x10b96000u));
  /* 10b9265d call 0x10b9273d */
  push32(0x10b92662u); f_10b9273d();
  /* 10b92662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92665 ret  */
  ESPCHK(0x10b92639u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10b92666 (17 bytes, 6 insns) */
void f_10b92666(void) {
  FTRACE(0x10b92666u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92668 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9266a push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10b9266e call 0x10b92686 */
  push32(0x10b92673u); f_10b92686();
  /* 10b92673 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92676 ret  */
  ESPCHK(0x10b92666u, _esp0);
  ESP += 4; return;
}

/* FUN_10002677 @ 0x10b92677 (15 bytes, 6 insns) */
void f_10b92677(void) {
  FTRACE(0x10b92677u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92677 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92679 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9267b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9267d call 0x10b92686 */
  push32(0x10b92682u); f_10b92686();
  /* 10b92682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92685 ret  */
  ESPCHK(0x10b92677u, _esp0);
  ESP += 4; return;
}

/* FUN_10002686 @ 0x10b92686 (163 bytes, 53 insns) */
void f_10b92686(void) {
  FTRACE(0x10b92686u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92686 push edi */
  push32((uint32_t)(EDI));
  /* 10b92687 call 0x10b9272b */
  push32(0x10b9268cu); f_10b9272b();
  /* 10b9268c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9268e pop edi */
  EDI = (pop32());
  /* 10b9268f cmp dword ptr [0x10b969f0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b969f0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92695 jne 0x10b926a8 */
  if (!C.zf) goto L_10b926a8;
  /* 10b92697 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b9269b call dword ptr [0x10b9507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9507c))), 0x10b926a1u);
  /* 10b926a1 push eax */
  push32((uint32_t)(EAX));
  /* 10b926a2 call dword ptr [0x10b95078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95078))), 0x10b926a8u);
L_10b926a8:;
  /* 10b926a8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b926ad push ebx */
  push32((uint32_t)(EBX));
  /* 10b926ae mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10b926b2 mov dword ptr [0x10b969ec], edi */
  w32((uint32_t)(0x10b969ec), (EDI));
  /* 10b926b8 mov byte ptr [0x10b969e8], bl */
  w8((uint32_t)(0x10b969e8), (BL));
  /* 10b926be jne 0x10b926fc */
  if (!C.zf) goto L_10b926fc;
  /* 10b926c0 mov eax, dword ptr [0x10b96f10] */
  EAX = (r32((uint32_t)(0x10b96f10)));
  /* 10b926c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b926c7 je 0x10b926eb */
  if (C.zf) goto L_10b926eb;
  /* 10b926c9 mov ecx, dword ptr [0x10b96f0c] */
  ECX = (r32((uint32_t)(0x10b96f0c)));
  /* 10b926cf push esi */
  push32((uint32_t)(ESI));
  /* 10b926d0 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10b926d3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b926d5 jb 0x10b926ea */
  if (C.cf) goto L_10b926ea;
L_10b926d7:;
  /* 10b926d7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b926d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b926db je 0x10b926df */
  if (C.zf) goto L_10b926df;
  /* 10b926dd call eax */
  call_ind((uint32_t)(EAX), 0x10b926dfu);
L_10b926df:;
  /* 10b926df sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b926e2 cmp esi, dword ptr [0x10b96f10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10b96f10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b926e8 jae 0x10b926d7 */
  if (!C.cf) goto L_10b926d7;
L_10b926ea:;
  /* 10b926ea pop esi */
  ESI = (pop32());
L_10b926eb:;
  /* 10b926eb push 0x10b96018 */
  push32((uint32_t)(0x10b96018u));
  /* 10b926f0 push 0x10b96014 */
  push32((uint32_t)(0x10b96014u));
  /* 10b926f5 call 0x10b9273d */
  push32(0x10b926fau); f_10b9273d();
  /* 10b926fa pop ecx */
  ECX = (pop32());
  /* 10b926fb pop ecx */
  ECX = (pop32());
L_10b926fc:;
  /* 10b926fc push 0x10b96020 */
  push32((uint32_t)(0x10b96020u));
  /* 10b92701 push 0x10b9601c */
  push32((uint32_t)(0x10b9601cu));
  /* 10b92706 call 0x10b9273d */
  push32(0x10b9270bu); f_10b9273d();
  /* 10b9270b pop ecx */
  ECX = (pop32());
  /* 10b9270c pop ecx */
  ECX = (pop32());
  /* 10b9270d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b9270f pop ebx */
  EBX = (pop32());
  /* 10b92710 je 0x10b92719 */
  if (C.zf) goto L_10b92719;
  /* 10b92712 call 0x10b92734 */
  push32(0x10b92717u); f_10b92734();
  /* 10b92717 pop edi */
  EDI = (pop32());
  /* 10b92718 ret  */
  ESPCHK(0x10b92686u, _esp0);
  ESP += 4; return;
L_10b92719:;
  /* 10b92719 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b9271d mov dword ptr [0x10b969f0], edi */
  w32((uint32_t)(0x10b969f0), (EDI));
  /* 10b92723 call dword ptr [0x10b95074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95074))), 0x10b92729u);
  /* 10b92729 pop edi */
  EDI = (pop32());
  /* 10b9272a ret  */
  ESPCHK(0x10b92686u, _esp0);
  ESP += 4; return;
}

/* FUN_1000272b @ 0x10b9272b (9 bytes, 4 insns) */
void f_10b9272b(void) {
  FTRACE(0x10b9272bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9272b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b9272d call 0x10b93196 */
  push32(0x10b92732u); f_10b93196();
  /* 10b92732 pop ecx */
  ECX = (pop32());
  /* 10b92733 ret  */
  ESPCHK(0x10b9272bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002734 @ 0x10b92734 (9 bytes, 4 insns) */
void f_10b92734(void) {
  FTRACE(0x10b92734u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92734 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10b92736 call 0x10b931f7 */
  push32(0x10b9273bu); f_10b931f7();
  /* 10b9273b pop ecx */
  ECX = (pop32());
  /* 10b9273c ret  */
  ESPCHK(0x10b92734u, _esp0);
  ESP += 4; return;
}

/* FUN_1000273d @ 0x10b9273d (26 bytes, 12 insns) */
void f_10b9273d(void) {
  FTRACE(0x10b9273du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9273d push esi */
  push32((uint32_t)(ESI));
  /* 10b9273e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10b92742:;
  /* 10b92742 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92746 jae 0x10b92755 */
  if (!C.cf) goto L_10b92755;
  /* 10b92748 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b9274a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9274c je 0x10b92750 */
  if (C.zf) goto L_10b92750;
  /* 10b9274e call eax */
  call_ind((uint32_t)(EAX), 0x10b92750u);
L_10b92750:;
  /* 10b92750 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92753 jmp 0x10b92742 */
  goto L_10b92742;
L_10b92755:;
  /* 10b92755 pop esi */
  ESI = (pop32());
  /* 10b92756 ret  */
  ESPCHK(0x10b9273du, _esp0);
  ESP += 4; return;
}

/* FUN_10002757 @ 0x10b92757 (84 bytes, 32 insns) */
void f_10b92757(void) {
  FTRACE(0x10b92757u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92757 push esi */
  push32((uint32_t)(ESI));
  /* 10b92758 call 0x10b93101 */
  push32(0x10b9275du); f_10b93101();
  /* 10b9275d call dword ptr [0x10b95088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95088))), 0x10b92763u);
  /* 10b92763 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92766 mov dword ptr [0x10b964b8], eax */
  w32((uint32_t)(0x10b964b8), (EAX));
  /* 10b9276b je 0x10b927a7 */
  if (C.zf) goto L_10b927a7;
  /* 10b9276d push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10b9276f push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92771 call 0x10b9320c */
  push32(0x10b92776u); f_10b9320c();
  /* 10b92776 mov esi, eax */
  ESI = (EAX);
  /* 10b92778 pop ecx */
  ECX = (pop32());
  /* 10b92779 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b9277b pop ecx */
  ECX = (pop32());
  /* 10b9277c je 0x10b927a7 */
  if (C.zf) goto L_10b927a7;
  /* 10b9277e push esi */
  push32((uint32_t)(ESI));
  /* 10b9277f push dword ptr [0x10b964b8] */
  push32((uint32_t)(r32((uint32_t)(0x10b964b8))));
  /* 10b92785 call dword ptr [0x10b95084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95084))), 0x10b9278bu);
  /* 10b9278b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9278d je 0x10b927a7 */
  if (C.zf) goto L_10b927a7;
  /* 10b9278f push esi */
  push32((uint32_t)(ESI));
  /* 10b92790 call 0x10b927c9 */
  push32(0x10b92795u); f_10b927c9();
  /* 10b92795 pop ecx */
  ECX = (pop32());
  /* 10b92796 call dword ptr [0x10b95080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95080))), 0x10b9279cu);
  /* 10b9279c or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b927a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b927a2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b927a4 pop eax */
  EAX = (pop32());
  /* 10b927a5 pop esi */
  ESI = (pop32());
  /* 10b927a6 ret  */
  ESPCHK(0x10b92757u, _esp0);
  ESP += 4; return;
L_10b927a7:;
  /* 10b927a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b927a9 pop esi */
  ESI = (pop32());
  /* 10b927aa ret  */
  ESPCHK(0x10b92757u, _esp0);
  ESP += 4; return;
}

/* FUN_100027ab @ 0x10b927ab (30 bytes, 8 insns) */
void f_10b927ab(void) {
  FTRACE(0x10b927abu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b927ab call 0x10b9312a */
  push32(0x10b927b0u); f_10b9312a();
  /* 10b927b0 mov eax, dword ptr [0x10b964b8] */
  EAX = (r32((uint32_t)(0x10b964b8)));
  /* 10b927b5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b927b8 je 0x10b927c8 */
  if (C.zf) goto L_10b927c8;
  /* 10b927ba push eax */
  push32((uint32_t)(EAX));
  /* 10b927bb call dword ptr [0x10b95000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95000))), 0x10b927c1u);
  /* 10b927c1 or dword ptr [0x10b964b8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10b964b8)))|(0xffffffffu); w32((uint32_t)(0x10b964b8), (_r)); fl_logic(_r,32); }
L_10b927c8:;
  /* 10b927c8 ret  */
  ESPCHK(0x10b927abu, _esp0);
  ESP += 4; return;
}

/* FUN_100027c9 @ 0x10b927c9 (19 bytes, 4 insns) */
void f_10b927c9(void) {
  FTRACE(0x10b927c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b927c9 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b927cd mov dword ptr [eax + 0x50], 0x10b96638 */
  w32((uint32_t)(EAX + 0x50), (0x10b96638u));
  /* 10b927d4 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10b927db ret  */
  ESPCHK(0x10b927c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100027dc @ 0x10b927dc (160 bytes, 62 insns) */
void f_10b927dc(void) {
  FTRACE(0x10b927dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b927dc mov eax, dword ptr [0x10b964b8] */
  EAX = (r32((uint32_t)(0x10b964b8)));
  /* 10b927e1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b927e4 je 0x10b9287b */
  if (C.zf) goto L_10b9287b;
  /* 10b927ea push esi */
  push32((uint32_t)(ESI));
  /* 10b927eb mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b927ef test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b927f1 jne 0x10b92800 */
  if (!C.zf) goto L_10b92800;
  /* 10b927f3 push eax */
  push32((uint32_t)(EAX));
  /* 10b927f4 call dword ptr [0x10b95094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95094))), 0x10b927fau);
  /* 10b927fa mov esi, eax */
  ESI = (EAX);
  /* 10b927fc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b927fe je 0x10b9286c */
  if (C.zf) goto L_10b9286c;
L_10b92800:;
  /* 10b92800 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10b92803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92805 je 0x10b9280e */
  if (C.zf) goto L_10b9280e;
  /* 10b92807 push eax */
  push32((uint32_t)(EAX));
  /* 10b92808 call 0x10b93299 */
  push32(0x10b9280du); f_10b93299();
  /* 10b9280d pop ecx */
  ECX = (pop32());
L_10b9280e:;
  /* 10b9280e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10b92811 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92813 je 0x10b9281c */
  if (C.zf) goto L_10b9281c;
  /* 10b92815 push eax */
  push32((uint32_t)(EAX));
  /* 10b92816 call 0x10b93299 */
  push32(0x10b9281bu); f_10b93299();
  /* 10b9281b pop ecx */
  ECX = (pop32());
L_10b9281c:;
  /* 10b9281c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10b9281f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92821 je 0x10b9282a */
  if (C.zf) goto L_10b9282a;
  /* 10b92823 push eax */
  push32((uint32_t)(EAX));
  /* 10b92824 call 0x10b93299 */
  push32(0x10b92829u); f_10b93299();
  /* 10b92829 pop ecx */
  ECX = (pop32());
L_10b9282a:;
  /* 10b9282a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10b9282d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9282f je 0x10b92838 */
  if (C.zf) goto L_10b92838;
  /* 10b92831 push eax */
  push32((uint32_t)(EAX));
  /* 10b92832 call 0x10b93299 */
  push32(0x10b92837u); f_10b93299();
  /* 10b92837 pop ecx */
  ECX = (pop32());
L_10b92838:;
  /* 10b92838 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10b9283b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9283d je 0x10b92846 */
  if (C.zf) goto L_10b92846;
  /* 10b9283f push eax */
  push32((uint32_t)(EAX));
  /* 10b92840 call 0x10b93299 */
  push32(0x10b92845u); f_10b93299();
  /* 10b92845 pop ecx */
  ECX = (pop32());
L_10b92846:;
  /* 10b92846 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10b92849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9284b je 0x10b92854 */
  if (C.zf) goto L_10b92854;
  /* 10b9284d push eax */
  push32((uint32_t)(EAX));
  /* 10b9284e call 0x10b93299 */
  push32(0x10b92853u); f_10b93299();
  /* 10b92853 pop ecx */
  ECX = (pop32());
L_10b92854:;
  /* 10b92854 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10b92857 cmp eax, 0x10b96638 */
  { uint32_t _a=(EAX),_b=(0x10b96638u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9285c je 0x10b92865 */
  if (C.zf) goto L_10b92865;
  /* 10b9285e push eax */
  push32((uint32_t)(EAX));
  /* 10b9285f call 0x10b93299 */
  push32(0x10b92864u); f_10b93299();
  /* 10b92864 pop ecx */
  ECX = (pop32());
L_10b92865:;
  /* 10b92865 push esi */
  push32((uint32_t)(ESI));
  /* 10b92866 call 0x10b93299 */
  push32(0x10b9286bu); f_10b93299();
  /* 10b9286b pop ecx */
  ECX = (pop32());
L_10b9286c:;
  /* 10b9286c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9286e push dword ptr [0x10b964b8] */
  push32((uint32_t)(r32((uint32_t)(0x10b964b8))));
  /* 10b92874 call dword ptr [0x10b95084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95084))), 0x10b9287au);
  /* 10b9287a pop esi */
  ESI = (pop32());
L_10b9287b:;
  /* 10b9287b ret  */
  ESPCHK(0x10b927dcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000287c @ 0x10b9287c (444 bytes, 150 insns) */
void f_10b9287c(void) {
  FTRACE(0x10b9287cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9287c push ebp */
  push32((uint32_t)(EBP));
  /* 10b9287d mov ebp, esp */
  EBP = (ESP);
  /* 10b9287f sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b92882 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92883 push esi */
  push32((uint32_t)(ESI));
  /* 10b92884 push edi */
  push32((uint32_t)(EDI));
  /* 10b92885 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b9288a call 0x10b932e1 */
  push32(0x10b9288fu); f_10b932e1();
  /* 10b9288f mov esi, eax */
  ESI = (EAX);
  /* 10b92891 pop ecx */
  ECX = (pop32());
  /* 10b92892 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92894 jne 0x10b9289e */
  if (!C.zf) goto L_10b9289e;
  /* 10b92896 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10b92898 call 0x10b92606 */
  push32(0x10b9289du); f_10b92606();
  /* 10b9289d pop ecx */
  ECX = (pop32());
L_10b9289e:;
  /* 10b9289e mov dword ptr [0x10b96e00], esi */
  w32((uint32_t)(0x10b96e00), (ESI));
  /* 10b928a4 mov dword ptr [0x10b96f00], 0x20 */
  w32((uint32_t)(0x10b96f00), (0x20u));
  /* 10b928ae lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10b928b4:;
  /* 10b928b4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b928b6 jae 0x10b928d6 */
  if (!C.cf) goto L_10b928d6;
  /* 10b928b8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b928bc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10b928bf and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b928c3 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10b928c7 mov eax, dword ptr [0x10b96e00] */
  EAX = (r32((uint32_t)(0x10b96e00)));
  /* 10b928cc add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b928cf add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b928d4 jmp 0x10b928b4 */
  goto L_10b928b4;
L_10b928d6:;
  /* 10b928d6 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10b928d9 push eax */
  push32((uint32_t)(EAX));
  /* 10b928da call dword ptr [0x10b950a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950a4))), 0x10b928e0u);
  /* 10b928e0 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b928e5 je 0x10b929bc */
  if (C.zf) goto L_10b929bc;
  /* 10b928eb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b928ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b928f0 je 0x10b929bc */
  if (C.zf) goto L_10b929bc;
  /* 10b928f6 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10b928f8 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 10b928fb lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 10b928fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10b92901 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10b92906 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92908 jl 0x10b9290c */
  if ((C.sf!=C.of)) goto L_10b9290c;
  /* 10b9290a mov edi, eax */
  EDI = (EAX);
L_10b9290c:;
  /* 10b9290c cmp dword ptr [0x10b96f00], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b96f00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92912 jge 0x10b9296a */
  if ((C.sf==C.of)) goto L_10b9296a;
  /* 10b92914 mov esi, 0x10b96e04 */
  ESI = (0x10b96e04u);
L_10b92919:;
  /* 10b92919 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10b9291e call 0x10b932e1 */
  push32(0x10b92923u); f_10b932e1();
  /* 10b92923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92925 pop ecx */
  ECX = (pop32());
  /* 10b92926 je 0x10b92964 */
  if (C.zf) goto L_10b92964;
  /* 10b92928 add dword ptr [0x10b96f00], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10b96f00))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10b96f00), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b9292f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b92931 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10b92937:;
  /* 10b92937 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92939 jae 0x10b92957 */
  if (!C.cf) goto L_10b92957;
  /* 10b9293b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b9293f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b92942 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b92946 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 10b9294a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10b9294c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9294f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92955 jmp 0x10b92937 */
  goto L_10b92937;
L_10b92957:;
  /* 10b92957 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9295a cmp dword ptr [0x10b96f00], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b96f00))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92960 jl 0x10b92919 */
  if ((C.sf!=C.of)) goto L_10b92919;
  /* 10b92962 jmp 0x10b9296a */
  goto L_10b9296a;
L_10b92964:;
  /* 10b92964 mov edi, dword ptr [0x10b96f00] */
  EDI = (r32((uint32_t)(0x10b96f00)));
L_10b9296a:;
  /* 10b9296a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b9296c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b9296e jle 0x10b929bc */
  if ((C.zf||C.sf!=C.of)) goto L_10b929bc;
L_10b92970:;
  /* 10b92970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b92973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b92975 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92978 je 0x10b929b2 */
  if (C.zf) goto L_10b929b2;
  /* 10b9297a mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 10b9297c test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 10b9297e je 0x10b929b2 */
  if (C.zf) goto L_10b929b2;
  /* 10b92980 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 10b92982 jne 0x10b9298f */
  if (!C.zf) goto L_10b9298f;
  /* 10b92984 push ecx */
  push32((uint32_t)(ECX));
  /* 10b92985 call dword ptr [0x10b950a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950a0))), 0x10b9298bu);
  /* 10b9298b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9298d je 0x10b929b2 */
  if (C.zf) goto L_10b929b2;
L_10b9298f:;
  /* 10b9298f mov ecx, esi */
  ECX = (ESI);
  /* 10b92991 mov eax, esi */
  EAX = (ESI);
  /* 10b92993 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10b92996 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10b92999 mov ecx, dword ptr [ecx*4 + 0x10b96e00] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10b96e00)));
  /* 10b929a0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 10b929a3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 10b929a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b929a9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 10b929ab mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b929ad mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 10b929af mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_10b929b2:;
  /* 10b929b2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b929b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b929b7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b929b8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b929ba jl 0x10b92970 */
  if ((C.sf!=C.of)) goto L_10b92970;
L_10b929bc:;
  /* 10b929bc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b929be:;
  /* 10b929be mov ecx, dword ptr [0x10b96e00] */
  ECX = (r32((uint32_t)(0x10b96e00)));
  /* 10b929c4 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10b929c7 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b929cb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10b929ce jne 0x10b92a1d */
  if (!C.zf) goto L_10b92a1d;
  /* 10b929d0 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b929d2 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10b929d6 jne 0x10b929dd */
  if (!C.zf) goto L_10b929dd;
  /* 10b929d8 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10b929da pop eax */
  EAX = (pop32());
  /* 10b929db jmp 0x10b929e7 */
  goto L_10b929e7;
L_10b929dd:;
  /* 10b929dd mov eax, ebx */
  EAX = (EBX);
  /* 10b929df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b929e0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b929e2 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b929e4 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b929e7:;
  /* 10b929e7 push eax */
  push32((uint32_t)(EAX));
  /* 10b929e8 call dword ptr [0x10b9509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9509c))), 0x10b929eeu);
  /* 10b929ee mov edi, eax */
  EDI = (EAX);
  /* 10b929f0 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b929f3 je 0x10b92a0c */
  if (C.zf) goto L_10b92a0c;
  /* 10b929f5 push edi */
  push32((uint32_t)(EDI));
  /* 10b929f6 call dword ptr [0x10b950a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950a0))), 0x10b929fcu);
  /* 10b929fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b929fe je 0x10b92a0c */
  if (C.zf) goto L_10b92a0c;
  /* 10b92a00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b92a05 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b92a07 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a0a jne 0x10b92a12 */
  if (!C.zf) goto L_10b92a12;
L_10b92a0c:;
  /* 10b92a0c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b92a10 jmp 0x10b92a21 */
  goto L_10b92a21;
L_10b92a12:;
  /* 10b92a12 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a15 jne 0x10b92a21 */
  if (!C.zf) goto L_10b92a21;
  /* 10b92a17 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10b92a1b jmp 0x10b92a21 */
  goto L_10b92a21;
L_10b92a1d:;
  /* 10b92a1d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10b92a21:;
  /* 10b92a21 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b92a22 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a25 jl 0x10b929be */
  if ((C.sf!=C.of)) goto L_10b929be;
  /* 10b92a27 push dword ptr [0x10b96f00] */
  push32((uint32_t)(r32((uint32_t)(0x10b96f00))));
  /* 10b92a2d call dword ptr [0x10b95098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95098))), 0x10b92a33u);
  /* 10b92a33 pop edi */
  EDI = (pop32());
  /* 10b92a34 pop esi */
  ESI = (pop32());
  /* 10b92a35 pop ebx */
  EBX = (pop32());
  /* 10b92a36 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b92a37 ret  */
  ESPCHK(0x10b9287cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002a38 @ 0x10b92a38 (84 bytes, 33 insns) */
void f_10b92a38(void) {
  FTRACE(0x10b92a38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92a38 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92a39 push esi */
  push32((uint32_t)(ESI));
  /* 10b92a3a push edi */
  push32((uint32_t)(EDI));
  /* 10b92a3b mov esi, 0x10b96e00 */
  ESI = (0x10b96e00u);
L_10b92a40:;
  /* 10b92a40 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b92a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92a44 je 0x10b92a7d */
  if (C.zf) goto L_10b92a7d;
  /* 10b92a46 mov edi, eax */
  EDI = (EAX);
  /* 10b92a48 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92a4d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a4f jae 0x10b92a72 */
  if (!C.cf) goto L_10b92a72;
  /* 10b92a51 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10b92a54:;
  /* 10b92a54 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a58 je 0x10b92a61 */
  if (C.zf) goto L_10b92a61;
  /* 10b92a5a push ebx */
  push32((uint32_t)(EBX));
  /* 10b92a5b call dword ptr [0x10b950a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b950a8))), 0x10b92a61u);
L_10b92a61:;
  /* 10b92a61 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b92a63 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92a66 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92a6b add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92a6e cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a70 jb 0x10b92a54 */
  if (C.cf) goto L_10b92a54;
L_10b92a72:;
  /* 10b92a72 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b92a74 call 0x10b93299 */
  push32(0x10b92a79u); f_10b93299();
  /* 10b92a79 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10b92a7c pop ecx */
  ECX = (pop32());
L_10b92a7d:;
  /* 10b92a7d add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92a80 cmp esi, 0x10b96f00 */
  { uint32_t _a=(ESI),_b=(0x10b96f00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a86 jl 0x10b92a40 */
  if ((C.sf!=C.of)) goto L_10b92a40;
  /* 10b92a88 pop edi */
  EDI = (pop32());
  /* 10b92a89 pop esi */
  ESI = (pop32());
  /* 10b92a8a pop ebx */
  EBX = (pop32());
  /* 10b92a8b ret  */
  ESPCHK(0x10b92a38u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a8c @ 0x10b92a8c (185 bytes, 71 insns) */
void f_10b92a8c(void) {
  FTRACE(0x10b92a8cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92a8c push ebx */
  push32((uint32_t)(EBX));
  /* 10b92a8d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b92a8f cmp dword ptr [0x10b96f08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b96f08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92a95 push esi */
  push32((uint32_t)(ESI));
  /* 10b92a96 push edi */
  push32((uint32_t)(EDI));
  /* 10b92a97 jne 0x10b92a9e */
  if (!C.zf) goto L_10b92a9e;
  /* 10b92a99 call 0x10b938b3 */
  push32(0x10b92a9eu); f_10b938b3();
L_10b92a9e:;
  /* 10b92a9e mov esi, dword ptr [0x10b969a0] */
  ESI = (r32((uint32_t)(0x10b969a0)));
  /* 10b92aa4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_10b92aa6:;
  /* 10b92aa6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b92aa8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92aaa je 0x10b92abe */
  if (C.zf) goto L_10b92abe;
  /* 10b92aac cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92aae je 0x10b92ab1 */
  if (C.zf) goto L_10b92ab1;
  /* 10b92ab0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b92ab1:;
  /* 10b92ab1 push esi */
  push32((uint32_t)(ESI));
  /* 10b92ab2 call 0x10b93460 */
  push32(0x10b92ab7u); f_10b93460();
  /* 10b92ab7 pop ecx */
  ECX = (pop32());
  /* 10b92ab8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 10b92abc jmp 0x10b92aa6 */
  goto L_10b92aa6;
L_10b92abe:;
  /* 10b92abe lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10b92ac5 push eax */
  push32((uint32_t)(EAX));
  /* 10b92ac6 call 0x10b932e1 */
  push32(0x10b92acbu); f_10b932e1();
  /* 10b92acb mov esi, eax */
  ESI = (EAX);
  /* 10b92acd pop ecx */
  ECX = (pop32());
  /* 10b92ace cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92ad0 mov dword ptr [0x10b969d0], esi */
  w32((uint32_t)(0x10b969d0), (ESI));
  /* 10b92ad6 jne 0x10b92ae0 */
  if (!C.zf) goto L_10b92ae0;
  /* 10b92ad8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b92ada call 0x10b92606 */
  push32(0x10b92adfu); f_10b92606();
  /* 10b92adf pop ecx */
  ECX = (pop32());
L_10b92ae0:;
  /* 10b92ae0 mov edi, dword ptr [0x10b969a0] */
  EDI = (r32((uint32_t)(0x10b969a0)));
  /* 10b92ae6 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92ae8 je 0x10b92b23 */
  if (C.zf) goto L_10b92b23;
  /* 10b92aea push ebp */
  push32((uint32_t)(EBP));
L_10b92aeb:;
  /* 10b92aeb push edi */
  push32((uint32_t)(EDI));
  /* 10b92aec call 0x10b93460 */
  push32(0x10b92af1u); f_10b93460();
  /* 10b92af1 mov ebp, eax */
  EBP = (EAX);
  /* 10b92af3 pop ecx */
  ECX = (pop32());
  /* 10b92af4 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10b92af5 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92af8 je 0x10b92b1c */
  if (C.zf) goto L_10b92b1c;
  /* 10b92afa push ebp */
  push32((uint32_t)(EBP));
  /* 10b92afb call 0x10b932e1 */
  push32(0x10b92b00u); f_10b932e1();
  /* 10b92b00 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92b02 pop ecx */
  ECX = (pop32());
  /* 10b92b03 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10b92b05 jne 0x10b92b0f */
  if (!C.zf) goto L_10b92b0f;
  /* 10b92b07 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b92b09 call 0x10b92606 */
  push32(0x10b92b0eu); f_10b92606();
  /* 10b92b0e pop ecx */
  ECX = (pop32());
L_10b92b0f:;
  /* 10b92b0f push edi */
  push32((uint32_t)(EDI));
  /* 10b92b10 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b92b12 call 0x10b93370 */
  push32(0x10b92b17u); f_10b93370();
  /* 10b92b17 pop ecx */
  ECX = (pop32());
  /* 10b92b18 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92b1b pop ecx */
  ECX = (pop32());
L_10b92b1c:;
  /* 10b92b1c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92b1e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92b20 jne 0x10b92aeb */
  if (!C.zf) goto L_10b92aeb;
  /* 10b92b22 pop ebp */
  EBP = (pop32());
L_10b92b23:;
  /* 10b92b23 push dword ptr [0x10b969a0] */
  push32((uint32_t)(r32((uint32_t)(0x10b969a0))));
  /* 10b92b29 call 0x10b93299 */
  push32(0x10b92b2eu); f_10b93299();
  /* 10b92b2e pop ecx */
  ECX = (pop32());
  /* 10b92b2f mov dword ptr [0x10b969a0], ebx */
  w32((uint32_t)(0x10b969a0), (EBX));
  /* 10b92b35 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10b92b37 pop edi */
  EDI = (pop32());
  /* 10b92b38 pop esi */
  ESI = (pop32());
  /* 10b92b39 mov dword ptr [0x10b96f04], 1 */
  w32((uint32_t)(0x10b96f04), (0x1u));
  /* 10b92b43 pop ebx */
  EBX = (pop32());
  /* 10b92b44 ret  */
  ESPCHK(0x10b92a8cu, _esp0);
  ESP += 4; return;
}

/* FUN_10002b45 @ 0x10b92b45 (153 bytes, 62 insns) */
void f_10b92b45(void) {
  FTRACE(0x10b92b45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92b45 push ebp */
  push32((uint32_t)(EBP));
  /* 10b92b46 mov ebp, esp */
  EBP = (ESP);
  /* 10b92b48 push ecx */
  push32((uint32_t)(ECX));
  /* 10b92b49 push ecx */
  push32((uint32_t)(ECX));
  /* 10b92b4a push ebx */
  push32((uint32_t)(EBX));
  /* 10b92b4b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b92b4d cmp dword ptr [0x10b96f08], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b96f08))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92b53 push esi */
  push32((uint32_t)(ESI));
  /* 10b92b54 push edi */
  push32((uint32_t)(EDI));
  /* 10b92b55 jne 0x10b92b5c */
  if (!C.zf) goto L_10b92b5c;
  /* 10b92b57 call 0x10b938b3 */
  push32(0x10b92b5cu); f_10b938b3();
L_10b92b5c:;
  /* 10b92b5c mov esi, 0x10b969f4 */
  ESI = (0x10b969f4u);
  /* 10b92b61 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b92b66 push esi */
  push32((uint32_t)(ESI));
  /* 10b92b67 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92b68 call dword ptr [0x10b9508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9508c))), 0x10b92b6eu);
  /* 10b92b6e mov eax, dword ptr [0x10b96f18] */
  EAX = (r32((uint32_t)(0x10b96f18)));
  /* 10b92b73 mov dword ptr [0x10b969e0], esi */
  w32((uint32_t)(0x10b969e0), (ESI));
  /* 10b92b79 mov edi, esi */
  EDI = (ESI);
  /* 10b92b7b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92b7d je 0x10b92b81 */
  if (C.zf) goto L_10b92b81;
  /* 10b92b7f mov edi, eax */
  EDI = (EAX);
L_10b92b81:;
  /* 10b92b81 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b92b84 push eax */
  push32((uint32_t)(EAX));
  /* 10b92b85 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10b92b88 push eax */
  push32((uint32_t)(EAX));
  /* 10b92b89 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92b8a push ebx */
  push32((uint32_t)(EBX));
  /* 10b92b8b push edi */
  push32((uint32_t)(EDI));
  /* 10b92b8c call 0x10b92bde */
  push32(0x10b92b91u); f_10b92bde();
  /* 10b92b91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b92b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b92b97 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 10b92b9a push eax */
  push32((uint32_t)(EAX));
  /* 10b92b9b call 0x10b932e1 */
  push32(0x10b92ba0u); f_10b932e1();
  /* 10b92ba0 mov esi, eax */
  ESI = (EAX);
  /* 10b92ba2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92ba5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92ba7 jne 0x10b92bb1 */
  if (!C.zf) goto L_10b92bb1;
  /* 10b92ba9 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b92bab call 0x10b92606 */
  push32(0x10b92bb0u); f_10b92606();
  /* 10b92bb0 pop ecx */
  ECX = (pop32());
L_10b92bb1:;
  /* 10b92bb1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10b92bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10b92bb5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10b92bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10b92bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b92bbc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 10b92bbf push eax */
  push32((uint32_t)(EAX));
  /* 10b92bc0 push esi */
  push32((uint32_t)(ESI));
  /* 10b92bc1 push edi */
  push32((uint32_t)(EDI));
  /* 10b92bc2 call 0x10b92bde */
  push32(0x10b92bc7u); f_10b92bde();
  /* 10b92bc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b92bca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92bcd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b92bce mov dword ptr [0x10b969c8], esi */
  w32((uint32_t)(0x10b969c8), (ESI));
  /* 10b92bd4 pop edi */
  EDI = (pop32());
  /* 10b92bd5 pop esi */
  ESI = (pop32());
  /* 10b92bd6 mov dword ptr [0x10b969c4], eax */
  w32((uint32_t)(0x10b969c4), (EAX));
  /* 10b92bdb pop ebx */
  EBX = (pop32());
  /* 10b92bdc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b92bdd ret  */
  ESPCHK(0x10b92b45u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bde @ 0x10b92bde (436 bytes, 187 insns) */
void f_10b92bde(void) {
  FTRACE(0x10b92bdeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92bde push ebp */
  push32((uint32_t)(EBP));
  /* 10b92bdf mov ebp, esp */
  EBP = (ESP);
  /* 10b92be1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10b92be4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b92be7 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92be8 push esi */
  push32((uint32_t)(ESI));
  /* 10b92be9 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b92bec mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10b92bef push edi */
  push32((uint32_t)(EDI));
  /* 10b92bf0 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b92bf3 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10b92bf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b92bfc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b92bfe je 0x10b92c08 */
  if (C.zf) goto L_10b92c08;
  /* 10b92c00 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10b92c02 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92c05 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b92c08:;
  /* 10b92c08 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c0b jne 0x10b92c51 */
  if (!C.zf) goto L_10b92c51;
L_10b92c0d:;
  /* 10b92c0d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10b92c10 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92c11 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c14 je 0x10b92c3f */
  if (C.zf) goto L_10b92c3f;
  /* 10b92c16 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b92c18 je 0x10b92c3f */
  if (C.zf) goto L_10b92c3f;
  /* 10b92c1a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10b92c1d test byte ptr [edx + 0x10b96ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10b96ce1)))&(0x4u); fl_logic(_r,8); }
  /* 10b92c24 je 0x10b92c32 */
  if (C.zf) goto L_10b92c32;
  /* 10b92c26 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92c28 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c2a je 0x10b92c32 */
  if (C.zf) goto L_10b92c32;
  /* 10b92c2c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92c2e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b92c30 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b92c31 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b92c32:;
  /* 10b92c32 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92c34 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c36 je 0x10b92c0d */
  if (C.zf) goto L_10b92c0d;
  /* 10b92c38 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92c3a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b92c3c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b92c3d jmp 0x10b92c0d */
  goto L_10b92c0d;
L_10b92c3f:;
  /* 10b92c3f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92c41 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c43 je 0x10b92c49 */
  if (C.zf) goto L_10b92c49;
  /* 10b92c45 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10b92c48 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b92c49:;
  /* 10b92c49 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c4c jne 0x10b92c94 */
  if (!C.zf) goto L_10b92c94;
  /* 10b92c4e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92c4f jmp 0x10b92c94 */
  goto L_10b92c94;
L_10b92c51:;
  /* 10b92c51 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92c53 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c55 je 0x10b92c5c */
  if (C.zf) goto L_10b92c5c;
  /* 10b92c57 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92c59 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b92c5b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b92c5c:;
  /* 10b92c5c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92c5e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92c5f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10b92c62 test byte ptr [ebx + 0x10b96ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10b96ce1)))&(0x4u); fl_logic(_r,8); }
  /* 10b92c69 je 0x10b92c77 */
  if (C.zf) goto L_10b92c77;
  /* 10b92c6b inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92c6d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c6f je 0x10b92c76 */
  if (C.zf) goto L_10b92c76;
  /* 10b92c71 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 10b92c73 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 10b92c75 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b92c76:;
  /* 10b92c76 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10b92c77:;
  /* 10b92c77 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c7a je 0x10b92c85 */
  if (C.zf) goto L_10b92c85;
  /* 10b92c7c test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b92c7e je 0x10b92c89 */
  if (C.zf) goto L_10b92c89;
  /* 10b92c80 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c83 jne 0x10b92c51 */
  if (!C.zf) goto L_10b92c51;
L_10b92c85:;
  /* 10b92c85 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b92c87 jne 0x10b92c8c */
  if (!C.zf) goto L_10b92c8c;
L_10b92c89:;
  /* 10b92c89 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b92c8a jmp 0x10b92c94 */
  goto L_10b92c94;
L_10b92c8c:;
  /* 10b92c8c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92c8e je 0x10b92c94 */
  if (C.zf) goto L_10b92c94;
  /* 10b92c90 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_10b92c94:;
  /* 10b92c94 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_10b92c98:;
  /* 10b92c98 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92c9b je 0x10b92d81 */
  if (C.zf) goto L_10b92d81;
L_10b92ca1:;
  /* 10b92ca1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92ca3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92ca6 je 0x10b92cad */
  if (C.zf) goto L_10b92cad;
  /* 10b92ca8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92cab jne 0x10b92cb0 */
  if (!C.zf) goto L_10b92cb0;
L_10b92cad:;
  /* 10b92cad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92cae jmp 0x10b92ca1 */
  goto L_10b92ca1;
L_10b92cb0:;
  /* 10b92cb0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92cb3 je 0x10b92d81 */
  if (C.zf) goto L_10b92d81;
  /* 10b92cb9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b92cbb je 0x10b92cc5 */
  if (C.zf) goto L_10b92cc5;
  /* 10b92cbd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10b92cbf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92cc2 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b92cc5:;
  /* 10b92cc5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b92cc8 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_10b92cca:;
  /* 10b92cca mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10b92cd1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b92cd3:;
  /* 10b92cd3 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92cd6 jne 0x10b92cdc */
  if (!C.zf) goto L_10b92cdc;
  /* 10b92cd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92cd9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b92cda jmp 0x10b92cd3 */
  goto L_10b92cd3;
L_10b92cdc:;
  /* 10b92cdc cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92cdf jne 0x10b92d0d */
  if (!C.zf) goto L_10b92d0d;
  /* 10b92ce1 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10b92ce4 jne 0x10b92d0b */
  if (!C.zf) goto L_10b92d0b;
  /* 10b92ce6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b92ce8 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92ceb je 0x10b92cfa */
  if (C.zf) goto L_10b92cfa;
  /* 10b92ced cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92cf1 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10b92cf4 jne 0x10b92cfa */
  if (!C.zf) goto L_10b92cfa;
  /* 10b92cf6 mov eax, edx */
  EAX = (EDX);
  /* 10b92cf8 jmp 0x10b92cfd */
  goto L_10b92cfd;
L_10b92cfa:;
  /* 10b92cfa mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_10b92cfd:;
  /* 10b92cfd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b92d00 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b92d02 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92d05 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10b92d08 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10b92d0b:;
  /* 10b92d0b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_10b92d0d:;
  /* 10b92d0d mov edx, ebx */
  EDX = (EBX);
  /* 10b92d0f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b92d10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b92d12 je 0x10b92d22 */
  if (C.zf) goto L_10b92d22;
  /* 10b92d14 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10b92d15:;
  /* 10b92d15 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92d17 je 0x10b92d1d */
  if (C.zf) goto L_10b92d1d;
  /* 10b92d19 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 10b92d1c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b92d1d:;
  /* 10b92d1d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92d1f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b92d20 jne 0x10b92d15 */
  if (!C.zf) goto L_10b92d15;
L_10b92d22:;
  /* 10b92d22 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92d24 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b92d26 je 0x10b92d72 */
  if (C.zf) goto L_10b92d72;
  /* 10b92d28 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92d2c jne 0x10b92d38 */
  if (!C.zf) goto L_10b92d38;
  /* 10b92d2e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92d31 je 0x10b92d72 */
  if (C.zf) goto L_10b92d72;
  /* 10b92d33 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92d36 je 0x10b92d72 */
  if (C.zf) goto L_10b92d72;
L_10b92d38:;
  /* 10b92d38 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92d3c je 0x10b92d6c */
  if (C.zf) goto L_10b92d6c;
  /* 10b92d3e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92d40 je 0x10b92d5b */
  if (C.zf) goto L_10b92d5b;
  /* 10b92d42 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10b92d45 test byte ptr [ebx + 0x10b96ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10b96ce1)))&(0x4u); fl_logic(_r,8); }
  /* 10b92d4c je 0x10b92d54 */
  if (C.zf) goto L_10b92d54;
  /* 10b92d4e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b92d50 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b92d51 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92d52 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b92d54:;
  /* 10b92d54 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10b92d56 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10b92d58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b92d59 jmp 0x10b92d6a */
  goto L_10b92d6a;
L_10b92d5b:;
  /* 10b92d5b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 10b92d5e test byte ptr [edx + 0x10b96ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10b96ce1)))&(0x4u); fl_logic(_r,8); }
  /* 10b92d65 je 0x10b92d6a */
  if (C.zf) goto L_10b92d6a;
  /* 10b92d67 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92d68 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b92d6a:;
  /* 10b92d6a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10b92d6c:;
  /* 10b92d6c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92d6d jmp 0x10b92cca */
  goto L_10b92cca;
L_10b92d72:;
  /* 10b92d72 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b92d74 je 0x10b92d7a */
  if (C.zf) goto L_10b92d7a;
  /* 10b92d76 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10b92d79 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10b92d7a:;
  /* 10b92d7a inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10b92d7c jmp 0x10b92c98 */
  goto L_10b92c98;
L_10b92d81:;
  /* 10b92d81 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b92d83 je 0x10b92d88 */
  if (C.zf) goto L_10b92d88;
  /* 10b92d85 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10b92d88:;
  /* 10b92d88 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10b92d8b pop edi */
  EDI = (pop32());
  /* 10b92d8c pop esi */
  ESI = (pop32());
  /* 10b92d8d pop ebx */
  EBX = (pop32());
  /* 10b92d8e inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 10b92d90 pop ebp */
  EBP = (pop32());
  /* 10b92d91 ret  */
  ESPCHK(0x10b92bdeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002d92 @ 0x10b92d92 (306 bytes, 132 insns) */
void f_10b92d92(void) {
  FTRACE(0x10b92d92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92d92 push ecx */
  push32((uint32_t)(ECX));
  /* 10b92d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10b92d94 mov eax, dword ptr [0x10b96af8] */
  EAX = (r32((uint32_t)(0x10b96af8)));
  /* 10b92d99 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92d9a push ebp */
  push32((uint32_t)(EBP));
  /* 10b92d9b mov ebp, dword ptr [0x10b9505c] */
  EBP = (r32((uint32_t)(0x10b9505c)));
  /* 10b92da1 push esi */
  push32((uint32_t)(ESI));
  /* 10b92da2 push edi */
  push32((uint32_t)(EDI));
  /* 10b92da3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b92da5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b92da7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b92da9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92dab jne 0x10b92de0 */
  if (!C.zf) goto L_10b92de0;
  /* 10b92dad call ebp */
  call_ind((uint32_t)(EBP), 0x10b92dafu);
  /* 10b92daf mov esi, eax */
  ESI = (EAX);
  /* 10b92db1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92db3 je 0x10b92dc1 */
  if (C.zf) goto L_10b92dc1;
  /* 10b92db5 mov dword ptr [0x10b96af8], 1 */
  w32((uint32_t)(0x10b96af8), (0x1u));
  /* 10b92dbf jmp 0x10b92de9 */
  goto L_10b92de9;
L_10b92dc1:;
  /* 10b92dc1 call dword ptr [0x10b95060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95060))), 0x10b92dc7u);
  /* 10b92dc7 mov edi, eax */
  EDI = (EAX);
  /* 10b92dc9 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92dcb je 0x10b92ebb */
  if (C.zf) goto L_10b92ebb;
  /* 10b92dd1 mov dword ptr [0x10b96af8], 2 */
  w32((uint32_t)(0x10b96af8), (0x2u));
  /* 10b92ddb jmp 0x10b92e6f */
  goto L_10b92e6f;
L_10b92de0:;
  /* 10b92de0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92de3 jne 0x10b92e6a */
  if (!C.zf) goto L_10b92e6a;
L_10b92de9:;
  /* 10b92de9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92deb jne 0x10b92df9 */
  if (!C.zf) goto L_10b92df9;
  /* 10b92ded call ebp */
  call_ind((uint32_t)(EBP), 0x10b92defu);
  /* 10b92def mov esi, eax */
  ESI = (EAX);
  /* 10b92df1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92df3 je 0x10b92ebb */
  if (C.zf) goto L_10b92ebb;
L_10b92df9:;
  /* 10b92df9 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b92dfc mov eax, esi */
  EAX = (ESI);
  /* 10b92dfe je 0x10b92e0e */
  if (C.zf) goto L_10b92e0e;
L_10b92e00:;
  /* 10b92e00 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e01 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e02 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b92e05 jne 0x10b92e00 */
  if (!C.zf) goto L_10b92e00;
  /* 10b92e07 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e08 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e09 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10b92e0c jne 0x10b92e00 */
  if (!C.zf) goto L_10b92e00;
L_10b92e0e:;
  /* 10b92e0e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b92e10 mov edi, dword ptr [0x10b95064] */
  EDI = (r32((uint32_t)(0x10b95064)));
  /* 10b92e16 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b92e18 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e19 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e1a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e1b push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e1c push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e1d push eax */
  push32((uint32_t)(EAX));
  /* 10b92e1e push esi */
  push32((uint32_t)(ESI));
  /* 10b92e1f push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e20 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e21 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10b92e25 call edi */
  call_ind((uint32_t)(EDI), 0x10b92e27u);
  /* 10b92e27 mov ebp, eax */
  EBP = (EAX);
  /* 10b92e29 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e2b je 0x10b92e5f */
  if (C.zf) goto L_10b92e5f;
  /* 10b92e2d push ebp */
  push32((uint32_t)(EBP));
  /* 10b92e2e call 0x10b932e1 */
  push32(0x10b92e33u); f_10b932e1();
  /* 10b92e33 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e35 pop ecx */
  ECX = (pop32());
  /* 10b92e36 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 10b92e3a je 0x10b92e5f */
  if (C.zf) goto L_10b92e5f;
  /* 10b92e3c push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e3d push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e3e push ebp */
  push32((uint32_t)(EBP));
  /* 10b92e3f push eax */
  push32((uint32_t)(EAX));
  /* 10b92e40 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10b92e44 push esi */
  push32((uint32_t)(ESI));
  /* 10b92e45 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e46 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92e47 call edi */
  call_ind((uint32_t)(EDI), 0x10b92e49u);
  /* 10b92e49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92e4b jne 0x10b92e5b */
  if (!C.zf) goto L_10b92e5b;
  /* 10b92e4d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10b92e51 call 0x10b93299 */
  push32(0x10b92e56u); f_10b93299();
  /* 10b92e56 pop ecx */
  ECX = (pop32());
  /* 10b92e57 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_10b92e5b:;
  /* 10b92e5b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_10b92e5f:;
  /* 10b92e5f push esi */
  push32((uint32_t)(ESI));
  /* 10b92e60 call dword ptr [0x10b95068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95068))), 0x10b92e66u);
  /* 10b92e66 mov eax, ebx */
  EAX = (EBX);
  /* 10b92e68 jmp 0x10b92ebd */
  goto L_10b92ebd;
L_10b92e6a:;
  /* 10b92e6a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e6d jne 0x10b92ebb */
  if (!C.zf) goto L_10b92ebb;
L_10b92e6f:;
  /* 10b92e6f cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e71 jne 0x10b92e7f */
  if (!C.zf) goto L_10b92e7f;
  /* 10b92e73 call dword ptr [0x10b95060] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95060))), 0x10b92e79u);
  /* 10b92e79 mov edi, eax */
  EDI = (EAX);
  /* 10b92e7b cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e7d je 0x10b92ebb */
  if (C.zf) goto L_10b92ebb;
L_10b92e7f:;
  /* 10b92e7f cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92e81 mov eax, edi */
  EAX = (EDI);
  /* 10b92e83 je 0x10b92e8f */
  if (C.zf) goto L_10b92e8f;
L_10b92e85:;
  /* 10b92e85 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e86 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92e88 jne 0x10b92e85 */
  if (!C.zf) goto L_10b92e85;
  /* 10b92e8a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e8b cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b92e8d jne 0x10b92e85 */
  if (!C.zf) goto L_10b92e85;
L_10b92e8f:;
  /* 10b92e8f sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b92e91 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b92e92 mov ebp, eax */
  EBP = (EAX);
  /* 10b92e94 push ebp */
  push32((uint32_t)(EBP));
  /* 10b92e95 call 0x10b932e1 */
  push32(0x10b92e9au); f_10b932e1();
  /* 10b92e9a mov esi, eax */
  ESI = (EAX);
  /* 10b92e9c pop ecx */
  ECX = (pop32());
  /* 10b92e9d cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92e9f jne 0x10b92ea5 */
  if (!C.zf) goto L_10b92ea5;
  /* 10b92ea1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b92ea3 jmp 0x10b92eb0 */
  goto L_10b92eb0;
L_10b92ea5:;
  /* 10b92ea5 push ebp */
  push32((uint32_t)(EBP));
  /* 10b92ea6 push edi */
  push32((uint32_t)(EDI));
  /* 10b92ea7 push esi */
  push32((uint32_t)(ESI));
  /* 10b92ea8 call 0x10b938d0 */
  push32(0x10b92eadu); f_10b938d0();
  /* 10b92ead add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b92eb0:;
  /* 10b92eb0 push edi */
  push32((uint32_t)(EDI));
  /* 10b92eb1 call dword ptr [0x10b95090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95090))), 0x10b92eb7u);
  /* 10b92eb7 mov eax, esi */
  EAX = (ESI);
  /* 10b92eb9 jmp 0x10b92ebd */
  goto L_10b92ebd;
L_10b92ebb:;
  /* 10b92ebb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b92ebd:;
  /* 10b92ebd pop edi */
  EDI = (pop32());
  /* 10b92ebe pop esi */
  ESI = (pop32());
  /* 10b92ebf pop ebp */
  EBP = (pop32());
  /* 10b92ec0 pop ebx */
  EBX = (pop32());
  /* 10b92ec1 pop ecx */
  ECX = (pop32());
  /* 10b92ec2 pop ecx */
  ECX = (pop32());
  /* 10b92ec3 ret  */
  ESPCHK(0x10b92d92u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec4 @ 0x10b92ec4 (60 bytes, 20 insns) */
void f_10b92ec4(void) {
  FTRACE(0x10b92ec4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b92ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92ec8 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92ecc push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b92ed1 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10b92ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10b92ed5 call dword ptr [0x10b95054] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95054))), 0x10b92edbu);
  /* 10b92edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92edd mov dword ptr [0x10b96de8], eax */
  w32((uint32_t)(0x10b96de8), (EAX));
  /* 10b92ee2 je 0x10b92ef9 */
  if (C.zf) goto L_10b92ef9;
  /* 10b92ee4 call 0x10b93c05 */
  push32(0x10b92ee9u); f_10b93c05();
  /* 10b92ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92eeb jne 0x10b92efc */
  if (!C.zf) goto L_10b92efc;
  /* 10b92eed push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b92ef3 call dword ptr [0x10b95058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95058))), 0x10b92ef9u);
L_10b92ef9:;
  /* 10b92ef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b92efb ret  */
  ESPCHK(0x10b92ec4u, _esp0);
  ESP += 4; return;
L_10b92efc:;
  /* 10b92efc push 1 */
  push32((uint32_t)(0x1u));
  /* 10b92efe pop eax */
  EAX = (pop32());
  /* 10b92eff ret  */
  ESPCHK(0x10b92ec4u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x10b92f00 (117 bytes, 38 insns) */
void f_10b92f00(void) {
  FTRACE(0x10b92f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92f00 push ebx */
  push32((uint32_t)(EBX));
  /* 10b92f01 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b92f03 cmp dword ptr [0x10b96bb0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b96bb0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92f09 push ebp */
  push32((uint32_t)(EBP));
  /* 10b92f0a mov ebp, dword ptr [0x10b9504c] */
  EBP = (r32((uint32_t)(0x10b9504c)));
  /* 10b92f10 jle 0x10b92f56 */
  if ((C.zf||C.sf!=C.of)) goto L_10b92f56;
  /* 10b92f12 mov eax, dword ptr [0x10b96bb4] */
  EAX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b92f17 push esi */
  push32((uint32_t)(ESI));
  /* 10b92f18 push edi */
  push32((uint32_t)(EDI));
  /* 10b92f19 mov edi, dword ptr [0x10b95050] */
  EDI = (r32((uint32_t)(0x10b95050)));
  /* 10b92f1f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10b92f22:;
  /* 10b92f22 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b92f27 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b92f2c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b92f2e call edi */
  call_ind((uint32_t)(EDI), 0x10b92f30u);
  /* 10b92f30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b92f35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92f37 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b92f39 call edi */
  call_ind((uint32_t)(EDI), 0x10b92f3bu);
  /* 10b92f3b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 10b92f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92f40 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b92f46 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92f48u);
  /* 10b92f48 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92f4b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b92f4c cmp ebx, dword ptr [0x10b96bb0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b96bb0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92f52 jl 0x10b92f22 */
  if ((C.sf!=C.of)) goto L_10b92f22;
  /* 10b92f54 pop edi */
  EDI = (pop32());
  /* 10b92f55 pop esi */
  ESI = (pop32());
L_10b92f56:;
  /* 10b92f56 push dword ptr [0x10b96bb4] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb4))));
  /* 10b92f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b92f5e push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b92f64 call ebp */
  call_ind((uint32_t)(EBP), 0x10b92f66u);
  /* 10b92f66 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b92f6c call dword ptr [0x10b95058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95058))), 0x10b92f72u);
  /* 10b92f72 pop ebp */
  EBP = (pop32());
  /* 10b92f73 pop ebx */
  EBX = (pop32());
  /* 10b92f74 ret  */
  ESPCHK(0x10b92f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f75 @ 0x10b92f75 (57 bytes, 18 insns) */
void f_10b92f75(void) {
  FTRACE(0x10b92f75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92f75 mov eax, dword ptr [0x10b969a8] */
  EAX = (r32((uint32_t)(0x10b969a8)));
  /* 10b92f7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92f7d je 0x10b92f8c */
  if (C.zf) goto L_10b92f8c;
  /* 10b92f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92f81 jne 0x10b92fad */
  if (!C.zf) goto L_10b92fad;
  /* 10b92f83 cmp dword ptr [0x10b969ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b969ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92f8a jne 0x10b92fad */
  if (!C.zf) goto L_10b92fad;
L_10b92f8c:;
  /* 10b92f8c push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10b92f91 call 0x10b92fae */
  push32(0x10b92f96u); f_10b92fae();
  /* 10b92f96 mov eax, dword ptr [0x10b96afc] */
  EAX = (r32((uint32_t)(0x10b96afc)));
  /* 10b92f9b pop ecx */
  ECX = (pop32());
  /* 10b92f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92f9e je 0x10b92fa2 */
  if (C.zf) goto L_10b92fa2;
  /* 10b92fa0 call eax */
  call_ind((uint32_t)(EAX), 0x10b92fa2u);
L_10b92fa2:;
  /* 10b92fa2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 10b92fa7 call 0x10b92fae */
  push32(0x10b92facu); f_10b92fae();
  /* 10b92fac pop ecx */
  ECX = (pop32());
L_10b92fad:;
  /* 10b92fad ret  */
  ESPCHK(0x10b92f75u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fae @ 0x10b92fae (339 bytes, 100 insns) */
void f_10b92fae(void) {
  FTRACE(0x10b92faeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b92fae push ebp */
  push32((uint32_t)(EBP));
  /* 10b92faf mov ebp, esp */
  EBP = (ESP);
  /* 10b92fb1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b92fb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b92fba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10b92fbc mov eax, 0x10b964e8 */
  EAX = (0x10b964e8u);
L_10b92fc1:;
  /* 10b92fc1 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92fc3 je 0x10b92fd0 */
  if (C.zf) goto L_10b92fd0;
  /* 10b92fc5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b92fc8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b92fc9 cmp eax, 0x10b96578 */
  { uint32_t _a=(EAX),_b=(0x10b96578u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92fce jl 0x10b92fc1 */
  if ((C.sf!=C.of)) goto L_10b92fc1;
L_10b92fd0:;
  /* 10b92fd0 push esi */
  push32((uint32_t)(ESI));
  /* 10b92fd1 mov esi, ecx */
  ESI = (ECX);
  /* 10b92fd3 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10b92fd6 cmp edx, dword ptr [esi + 0x10b964e8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10b964e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92fdc jne 0x10b930fe */
  if (!C.zf) goto L_10b930fe;
  /* 10b92fe2 mov eax, dword ptr [0x10b969a8] */
  EAX = (r32((uint32_t)(0x10b969a8)));
  /* 10b92fe7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92fea je 0x10b930d8 */
  if (C.zf) goto L_10b930d8;
  /* 10b92ff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b92ff2 jne 0x10b93001 */
  if (!C.zf) goto L_10b93001;
  /* 10b92ff4 cmp dword ptr [0x10b969ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10b969ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b92ffb je 0x10b930d8 */
  if (C.zf) goto L_10b930d8;
L_10b93001:;
  /* 10b93001 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93007 je 0x10b930fe */
  if (C.zf) goto L_10b930fe;
  /* 10b9300d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b93013 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10b93018 push eax */
  push32((uint32_t)(EAX));
  /* 10b93019 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9301b call dword ptr [0x10b9508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9508c))), 0x10b93021u);
  /* 10b93021 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b93023 jne 0x10b93038 */
  if (!C.zf) goto L_10b93038;
  /* 10b93025 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b9302b push 0x10b95408 */
  push32((uint32_t)(0x10b95408u));
  /* 10b93030 push eax */
  push32((uint32_t)(EAX));
  /* 10b93031 call 0x10b93370 */
  push32(0x10b93036u); f_10b93370();
  /* 10b93036 pop ecx */
  ECX = (pop32());
  /* 10b93037 pop ecx */
  ECX = (pop32());
L_10b93038:;
  /* 10b93038 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b9303e push edi */
  push32((uint32_t)(EDI));
  /* 10b9303f push eax */
  push32((uint32_t)(EAX));
  /* 10b93040 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10b93046 call 0x10b93460 */
  push32(0x10b9304bu); f_10b93460();
  /* 10b9304b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b9304c pop ecx */
  ECX = (pop32());
  /* 10b9304d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93050 jbe 0x10b9307b */
  if ((C.cf||C.zf)) goto L_10b9307b;
  /* 10b93052 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b93058 push eax */
  push32((uint32_t)(EAX));
  /* 10b93059 call 0x10b93460 */
  push32(0x10b9305eu); f_10b93460();
  /* 10b9305e mov edi, eax */
  EDI = (EAX);
  /* 10b93060 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10b93066 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93069 push 3 */
  push32((uint32_t)(0x3u));
  /* 10b9306b add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9306d push 0x10b95404 */
  push32((uint32_t)(0x10b95404u));
  /* 10b93072 push edi */
  push32((uint32_t)(EDI));
  /* 10b93073 call 0x10b944e0 */
  push32(0x10b93078u); f_10b944e0();
  /* 10b93078 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9307b:;
  /* 10b9307b lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b93081 push 0x10b953e8 */
  push32((uint32_t)(0x10b953e8u));
  /* 10b93086 push eax */
  push32((uint32_t)(EAX));
  /* 10b93087 call 0x10b93370 */
  push32(0x10b9308cu); f_10b93370();
  /* 10b9308c lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b93092 push edi */
  push32((uint32_t)(EDI));
  /* 10b93093 push eax */
  push32((uint32_t)(EAX));
  /* 10b93094 call 0x10b93380 */
  push32(0x10b93099u); f_10b93380();
  /* 10b93099 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b9309f push 0x10b953e4 */
  push32((uint32_t)(0x10b953e4u));
  /* 10b930a4 push eax */
  push32((uint32_t)(EAX));
  /* 10b930a5 call 0x10b93380 */
  push32(0x10b930aau); f_10b93380();
  /* 10b930aa push dword ptr [esi + 0x10b964ec] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10b964ec))));
  /* 10b930b0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b930b6 push eax */
  push32((uint32_t)(EAX));
  /* 10b930b7 call 0x10b93380 */
  push32(0x10b930bcu); f_10b93380();
  /* 10b930bc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10b930c1 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10b930c7 push 0x10b953bc */
  push32((uint32_t)(0x10b953bcu));
  /* 10b930cc push eax */
  push32((uint32_t)(EAX));
  /* 10b930cd call 0x10b9444e */
  push32(0x10b930d2u); f_10b9444e();
  /* 10b930d2 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b930d5 pop edi */
  EDI = (pop32());
  /* 10b930d6 jmp 0x10b930fe */
  goto L_10b930fe;
L_10b930d8:;
  /* 10b930d8 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10b930db lea esi, [esi + 0x10b964ec] */
  ESI = ((uint32_t)(ESI + 0x10b964ec));
  /* 10b930e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b930e3 push eax */
  push32((uint32_t)(EAX));
  /* 10b930e4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b930e6 call 0x10b93460 */
  push32(0x10b930ebu); f_10b93460();
  /* 10b930eb pop ecx */
  ECX = (pop32());
  /* 10b930ec push eax */
  push32((uint32_t)(EAX));
  /* 10b930ed push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b930ef push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10b930f1 call dword ptr [0x10b9509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9509c))), 0x10b930f7u);
  /* 10b930f7 push eax */
  push32((uint32_t)(EAX));
  /* 10b930f8 call dword ptr [0x10b95048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95048))), 0x10b930feu);
L_10b930fe:;
  /* 10b930fe pop esi */
  ESI = (pop32());
  /* 10b930ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93100 ret  */
  ESPCHK(0x10b92faeu, _esp0);
  ESP += 4; return;
}

/* FUN_10003101 @ 0x10b93101 (41 bytes, 12 insns) */
void f_10b93101(void) {
  FTRACE(0x10b93101u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93101 push esi */
  push32((uint32_t)(ESI));
  /* 10b93102 mov esi, dword ptr [0x10b95044] */
  ESI = (r32((uint32_t)(0x10b95044)));
  /* 10b93108 push dword ptr [0x10b965bc] */
  push32((uint32_t)(r32((uint32_t)(0x10b965bc))));
  /* 10b9310e call esi */
  call_ind((uint32_t)(ESI), 0x10b93110u);
  /* 10b93110 push dword ptr [0x10b965ac] */
  push32((uint32_t)(r32((uint32_t)(0x10b965ac))));
  /* 10b93116 call esi */
  call_ind((uint32_t)(ESI), 0x10b93118u);
  /* 10b93118 push dword ptr [0x10b9659c] */
  push32((uint32_t)(r32((uint32_t)(0x10b9659c))));
  /* 10b9311e call esi */
  call_ind((uint32_t)(ESI), 0x10b93120u);
  /* 10b93120 push dword ptr [0x10b9657c] */
  push32((uint32_t)(r32((uint32_t)(0x10b9657c))));
  /* 10b93126 call esi */
  call_ind((uint32_t)(ESI), 0x10b93128u);
  /* 10b93128 pop esi */
  ESI = (pop32());
  /* 10b93129 ret  */
  ESPCHK(0x10b93101u, _esp0);
  ESP += 4; return;
}

/* FUN_1000312a @ 0x10b9312a (108 bytes, 34 insns) */
void f_10b9312a(void) {
  FTRACE(0x10b9312au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9312a push esi */
  push32((uint32_t)(ESI));
  /* 10b9312b push edi */
  push32((uint32_t)(EDI));
  /* 10b9312c mov edi, dword ptr [0x10b950a8] */
  EDI = (r32((uint32_t)(0x10b950a8)));
  /* 10b93132 mov esi, 0x10b96578 */
  ESI = (0x10b96578u);
L_10b93137:;
  /* 10b93137 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b93139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9313b je 0x10b93168 */
  if (C.zf) goto L_10b93168;
  /* 10b9313d cmp esi, 0x10b965bc */
  { uint32_t _a=(ESI),_b=(0x10b965bcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93143 je 0x10b93168 */
  if (C.zf) goto L_10b93168;
  /* 10b93145 cmp esi, 0x10b965ac */
  { uint32_t _a=(ESI),_b=(0x10b965acu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9314b je 0x10b93168 */
  if (C.zf) goto L_10b93168;
  /* 10b9314d cmp esi, 0x10b9659c */
  { uint32_t _a=(ESI),_b=(0x10b9659cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93153 je 0x10b93168 */
  if (C.zf) goto L_10b93168;
  /* 10b93155 cmp esi, 0x10b9657c */
  { uint32_t _a=(ESI),_b=(0x10b9657cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9315b je 0x10b93168 */
  if (C.zf) goto L_10b93168;
  /* 10b9315d push eax */
  push32((uint32_t)(EAX));
  /* 10b9315e call edi */
  call_ind((uint32_t)(EDI), 0x10b93160u);
  /* 10b93160 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b93162 call 0x10b93299 */
  push32(0x10b93167u); f_10b93299();
  /* 10b93167 pop ecx */
  ECX = (pop32());
L_10b93168:;
  /* 10b93168 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9316b cmp esi, 0x10b96638 */
  { uint32_t _a=(ESI),_b=(0x10b96638u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93171 jl 0x10b93137 */
  if ((C.sf!=C.of)) goto L_10b93137;
  /* 10b93173 push dword ptr [0x10b9659c] */
  push32((uint32_t)(r32((uint32_t)(0x10b9659c))));
  /* 10b93179 call edi */
  call_ind((uint32_t)(EDI), 0x10b9317bu);
  /* 10b9317b push dword ptr [0x10b965ac] */
  push32((uint32_t)(r32((uint32_t)(0x10b965ac))));
  /* 10b93181 call edi */
  call_ind((uint32_t)(EDI), 0x10b93183u);
  /* 10b93183 push dword ptr [0x10b965bc] */
  push32((uint32_t)(r32((uint32_t)(0x10b965bc))));
  /* 10b93189 call edi */
  call_ind((uint32_t)(EDI), 0x10b9318bu);
  /* 10b9318b push dword ptr [0x10b9657c] */
  push32((uint32_t)(r32((uint32_t)(0x10b9657c))));
  /* 10b93191 call edi */
  call_ind((uint32_t)(EDI), 0x10b93193u);
  /* 10b93193 pop edi */
  EDI = (pop32());
  /* 10b93194 pop esi */
  ESI = (pop32());
  /* 10b93195 ret  */
  ESPCHK(0x10b9312au, _esp0);
  ESP += 4; return;
}

/* FUN_10003196 @ 0x10b93196 (97 bytes, 37 insns) */
void f_10b93196(void) {
  FTRACE(0x10b93196u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93196 push ebp */
  push32((uint32_t)(EBP));
  /* 10b93197 mov ebp, esp */
  EBP = (ESP);
  /* 10b93199 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b9319c push esi */
  push32((uint32_t)(ESI));
  /* 10b9319d cmp dword ptr [eax*4 + 0x10b96578], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10b96578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b931a5 lea esi, [eax*4 + 0x10b96578] */
  ESI = ((uint32_t)(EAX*4 + 0x10b96578));
  /* 10b931ac jne 0x10b931ec */
  if (!C.zf) goto L_10b931ec;
  /* 10b931ae push edi */
  push32((uint32_t)(EDI));
  /* 10b931af push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10b931b1 call 0x10b932e1 */
  push32(0x10b931b6u); f_10b932e1();
  /* 10b931b6 mov edi, eax */
  EDI = (EAX);
  /* 10b931b8 pop ecx */
  ECX = (pop32());
  /* 10b931b9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b931bb jne 0x10b931c5 */
  if (!C.zf) goto L_10b931c5;
  /* 10b931bd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b931bf call 0x10b92606 */
  push32(0x10b931c4u); f_10b92606();
  /* 10b931c4 pop ecx */
  ECX = (pop32());
L_10b931c5:;
  /* 10b931c5 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b931c7 call 0x10b93196 */
  push32(0x10b931ccu); f_10b93196();
  /* 10b931cc cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b931cf pop ecx */
  ECX = (pop32());
  /* 10b931d0 push edi */
  push32((uint32_t)(EDI));
  /* 10b931d1 jne 0x10b931dd */
  if (!C.zf) goto L_10b931dd;
  /* 10b931d3 call dword ptr [0x10b95044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95044))), 0x10b931d9u);
  /* 10b931d9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b931db jmp 0x10b931e3 */
  goto L_10b931e3;
L_10b931dd:;
  /* 10b931dd call 0x10b93299 */
  push32(0x10b931e2u); f_10b93299();
  /* 10b931e2 pop ecx */
  ECX = (pop32());
L_10b931e3:;
  /* 10b931e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10b931e5 call 0x10b931f7 */
  push32(0x10b931eau); f_10b931f7();
  /* 10b931ea pop ecx */
  ECX = (pop32());
  /* 10b931eb pop edi */
  EDI = (pop32());
L_10b931ec:;
  /* 10b931ec push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10b931ee call dword ptr [0x10b95040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95040))), 0x10b931f4u);
  /* 10b931f4 pop esi */
  ESI = (pop32());
  /* 10b931f5 pop ebp */
  EBP = (pop32());
  /* 10b931f6 ret  */
  ESPCHK(0x10b93196u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f7 @ 0x10b931f7 (21 bytes, 7 insns) */
void f_10b931f7(void) {
  FTRACE(0x10b931f7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b931f7 push ebp */
  push32((uint32_t)(EBP));
  /* 10b931f8 mov ebp, esp */
  EBP = (ESP);
  /* 10b931fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b931fd push dword ptr [eax*4 + 0x10b96578] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10b96578))));
  /* 10b93204 call dword ptr [0x10b9503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9503c))), 0x10b9320au);
  /* 10b9320a pop ebp */
  EBP = (pop32());
  /* 10b9320b ret  */
  ESPCHK(0x10b931f7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000320c @ 0x10b9320c (141 bytes, 56 insns) */
void f_10b9320c(void) {
  FTRACE(0x10b9320cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9320c push ebx */
  push32((uint32_t)(EBX));
  /* 10b9320d push esi */
  push32((uint32_t)(ESI));
  /* 10b9320e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10b93212 push edi */
  push32((uint32_t)(EDI));
  /* 10b93213 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b93218 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9321b mov ebx, esi */
  EBX = (ESI);
  /* 10b9321d ja 0x10b9322c */
  if ((!C.cf&&!C.zf)) goto L_10b9322c;
  /* 10b9321f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b93221 jne 0x10b93226 */
  if (!C.zf) goto L_10b93226;
  /* 10b93223 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b93225 pop esi */
  ESI = (pop32());
L_10b93226:;
  /* 10b93226 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93229 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_10b9322c:;
  /* 10b9322c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b9322e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93231 ja 0x10b9326d */
  if ((!C.cf&&!C.zf)) goto L_10b9326d;
  /* 10b93233 cmp ebx, dword ptr [0x10b967c0] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b967c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93239 ja 0x10b93258 */
  if ((!C.cf&&!C.zf)) goto L_10b93258;
  /* 10b9323b push 9 */
  push32((uint32_t)(0x9u));
  /* 10b9323d call 0x10b93196 */
  push32(0x10b93242u); f_10b93196();
  /* 10b93242 push ebx */
  push32((uint32_t)(EBX));
  /* 10b93243 call 0x10b93f99 */
  push32(0x10b93248u); f_10b93f99();
  /* 10b93248 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b9324a mov edi, eax */
  EDI = (EAX);
  /* 10b9324c call 0x10b931f7 */
  push32(0x10b93251u); f_10b931f7();
  /* 10b93251 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93254 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b93256 jne 0x10b93283 */
  if (!C.zf) goto L_10b93283;
L_10b93258:;
  /* 10b93258 push esi */
  push32((uint32_t)(ESI));
  /* 10b93259 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b9325b push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b93261 call dword ptr [0x10b95038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95038))), 0x10b93267u);
  /* 10b93267 mov edi, eax */
  EDI = (EAX);
  /* 10b93269 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b9326b jne 0x10b9328f */
  if (!C.zf) goto L_10b9328f;
L_10b9326d:;
  /* 10b9326d cmp dword ptr [0x10b96b74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b96b74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93274 je 0x10b9328f */
  if (C.zf) goto L_10b9328f;
  /* 10b93276 push esi */
  push32((uint32_t)(ESI));
  /* 10b93277 call 0x10b94638 */
  push32(0x10b9327cu); f_10b94638();
  /* 10b9327c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9327e pop ecx */
  ECX = (pop32());
  /* 10b9327f je 0x10b93295 */
  if (C.zf) goto L_10b93295;
  /* 10b93281 jmp 0x10b9322c */
  goto L_10b9322c;
L_10b93283:;
  /* 10b93283 push ebx */
  push32((uint32_t)(EBX));
  /* 10b93284 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b93286 push edi */
  push32((uint32_t)(EDI));
  /* 10b93287 call 0x10b945e0 */
  push32(0x10b9328cu); f_10b945e0();
  /* 10b9328c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10b9328f:;
  /* 10b9328f mov eax, edi */
  EAX = (EDI);
L_10b93291:;
  /* 10b93291 pop edi */
  EDI = (pop32());
  /* 10b93292 pop esi */
  ESI = (pop32());
  /* 10b93293 pop ebx */
  EBX = (pop32());
  /* 10b93294 ret  */
  ESPCHK(0x10b9320cu, _esp0);
  ESP += 4; return;
L_10b93295:;
  /* 10b93295 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93297 jmp 0x10b93291 */
  goto L_10b93291;
}

/* FUN_10003299 @ 0x10b93299 (72 bytes, 29 insns) */
void f_10b93299(void) {
  FTRACE(0x10b93299u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93299 push esi */
  push32((uint32_t)(ESI));
  /* 10b9329a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b9329e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b932a0 je 0x10b932df */
  if (C.zf) goto L_10b932df;
  /* 10b932a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b932a4 call 0x10b93196 */
  push32(0x10b932a9u); f_10b93196();
  /* 10b932a9 push esi */
  push32((uint32_t)(ESI));
  /* 10b932aa call 0x10b93c43 */
  push32(0x10b932afu); f_10b93c43();
  /* 10b932af pop ecx */
  ECX = (pop32());
  /* 10b932b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b932b2 pop ecx */
  ECX = (pop32());
  /* 10b932b3 je 0x10b932c8 */
  if (C.zf) goto L_10b932c8;
  /* 10b932b5 push esi */
  push32((uint32_t)(ESI));
  /* 10b932b6 push eax */
  push32((uint32_t)(EAX));
  /* 10b932b7 call 0x10b93c6e */
  push32(0x10b932bcu); f_10b93c6e();
  /* 10b932bc push 9 */
  push32((uint32_t)(0x9u));
  /* 10b932be call 0x10b931f7 */
  push32(0x10b932c3u); f_10b931f7();
  /* 10b932c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b932c6 pop esi */
  ESI = (pop32());
  /* 10b932c7 ret  */
  ESPCHK(0x10b93299u, _esp0);
  ESP += 4; return;
L_10b932c8:;
  /* 10b932c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10b932ca call 0x10b931f7 */
  push32(0x10b932cfu); f_10b931f7();
  /* 10b932cf pop ecx */
  ECX = (pop32());
  /* 10b932d0 push esi */
  push32((uint32_t)(ESI));
  /* 10b932d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b932d3 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b932d9 call dword ptr [0x10b9504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9504c))), 0x10b932dfu);
L_10b932df:;
  /* 10b932df pop esi */
  ESI = (pop32());
  /* 10b932e0 ret  */
  ESPCHK(0x10b93299u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10b932e1 (18 bytes, 6 insns) */
void f_10b932e1(void) {
  FTRACE(0x10b932e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b932e1 push dword ptr [0x10b96b74] */
  push32((uint32_t)(r32((uint32_t)(0x10b96b74))));
  /* 10b932e7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10b932eb call 0x10b932f3 */
  push32(0x10b932f0u); f_10b932f3();
  /* 10b932f0 pop ecx */
  ECX = (pop32());
  /* 10b932f1 pop ecx */
  ECX = (pop32());
  /* 10b932f2 ret  */
  ESPCHK(0x10b932e1u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10b932f3 (44 bytes, 16 insns) */
void f_10b932f3(void) {
  FTRACE(0x10b932f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b932f3 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b932f8 ja 0x10b9331c */
  if ((!C.cf&&!C.zf)) goto L_10b9331c;
L_10b932fa:;
  /* 10b932fa push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b932fe call 0x10b9331f */
  push32(0x10b93303u); f_10b9331f();
  /* 10b93303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b93305 pop ecx */
  ECX = (pop32());
  /* 10b93306 jne 0x10b9331e */
  if (!C.zf) goto L_10b9331e;
  /* 10b93308 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9330c je 0x10b9331e */
  if (C.zf) goto L_10b9331e;
  /* 10b9330e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b93312 call 0x10b94638 */
  push32(0x10b93317u); f_10b94638();
  /* 10b93317 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b93319 pop ecx */
  ECX = (pop32());
  /* 10b9331a jne 0x10b932fa */
  if (!C.zf) goto L_10b932fa;
L_10b9331c:;
  /* 10b9331c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b9331e:;
  /* 10b9331e ret  */
  ESPCHK(0x10b932f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000331f @ 0x10b9331f (78 bytes, 30 insns) */
void f_10b9331f(void) {
  FTRACE(0x10b9331fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9331f push esi */
  push32((uint32_t)(ESI));
  /* 10b93320 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b93324 cmp esi, dword ptr [0x10b967c0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10b967c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9332a push edi */
  push32((uint32_t)(EDI));
  /* 10b9332b ja 0x10b9334e */
  if ((!C.cf&&!C.zf)) goto L_10b9334e;
  /* 10b9332d push 9 */
  push32((uint32_t)(0x9u));
  /* 10b9332f call 0x10b93196 */
  push32(0x10b93334u); f_10b93196();
  /* 10b93334 push esi */
  push32((uint32_t)(ESI));
  /* 10b93335 call 0x10b93f99 */
  push32(0x10b9333au); f_10b93f99();
  /* 10b9333a push 9 */
  push32((uint32_t)(0x9u));
  /* 10b9333c mov edi, eax */
  EDI = (EAX);
  /* 10b9333e call 0x10b931f7 */
  push32(0x10b93343u); f_10b931f7();
  /* 10b93343 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93346 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10b93348 je 0x10b9334e */
  if (C.zf) goto L_10b9334e;
  /* 10b9334a mov eax, edi */
  EAX = (EDI);
  /* 10b9334c jmp 0x10b9336a */
  goto L_10b9336a;
L_10b9334e:;
  /* 10b9334e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b93350 jne 0x10b93355 */
  if (!C.zf) goto L_10b93355;
  /* 10b93352 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b93354 pop esi */
  ESI = (pop32());
L_10b93355:;
  /* 10b93355 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93358 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10b9335b push esi */
  push32((uint32_t)(ESI));
  /* 10b9335c push 0 */
  push32((uint32_t)(0x0u));
  /* 10b9335e push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b93364 call dword ptr [0x10b95038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95038))), 0x10b9336au);
L_10b9336a:;
  /* 10b9336a pop edi */
  EDI = (pop32());
  /* 10b9336b pop esi */
  ESI = (pop32());
  /* 10b9336c ret  */
  ESPCHK(0x10b9331fu, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x10b93370 (7 bytes, 3 insns) */
void f_10b93370(void) {
  FTRACE(0x10b93370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93370 push edi */
  push32((uint32_t)(EDI));
  /* 10b93371 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10b93375 jmp 0x10b933e1 */
  jmp_ind(0x10b933e1u); return;
}

/* FUN_10003380 @ 0x10b93380 (224 bytes, 84 insns) */
void f_10b93380(void) {
  FTRACE(0x10b93380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b93384 push edi */
  push32((uint32_t)(EDI));
  /* 10b93385 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b9338b je 0x10b9339c */
  if (C.zf) goto L_10b9339c;
L_10b9338d:;
  /* 10b9338d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b9338f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b93390 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b93392 je 0x10b933cf */
  if (C.zf) goto L_10b933cf;
  /* 10b93394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b9339a jne 0x10b9338d */
  if (!C.zf) goto L_10b9338d;
L_10b9339c:;
  /* 10b9339c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b9339e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b933a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b933a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b933a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b933aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b933ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b933b2 je 0x10b9339c */
  if (C.zf) goto L_10b9339c;
  /* 10b933b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b933b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b933b9 je 0x10b933de */
  if (C.zf) goto L_10b933de;
  /* 10b933bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b933bd je 0x10b933d9 */
  if (C.zf) goto L_10b933d9;
  /* 10b933bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b933c4 je 0x10b933d4 */
  if (C.zf) goto L_10b933d4;
  /* 10b933c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b933cb je 0x10b933cf */
  if (C.zf) goto L_10b933cf;
  /* 10b933cd jmp 0x10b9339c */
  goto L_10b9339c;
L_10b933cf:;
  /* 10b933cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10b933d2 jmp 0x10b933e1 */
  goto L_10b933e1;
L_10b933d4:;
  /* 10b933d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10b933d7 jmp 0x10b933e1 */
  goto L_10b933e1;
L_10b933d9:;
  /* 10b933d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10b933dc jmp 0x10b933e1 */
  goto L_10b933e1;
L_10b933de:;
  /* 10b933de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10b933e1:;
  /* 10b933e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b933e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b933eb je 0x10b93406 */
  if (C.zf) goto L_10b93406;
L_10b933ed:;
  /* 10b933ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b933ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b933f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b933f2 je 0x10b93458 */
  if (C.zf) goto L_10b93458;
  /* 10b933f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b933f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b933f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b933fd jne 0x10b933ed */
  if (!C.zf) goto L_10b933ed;
  /* 10b933ff jmp 0x10b93406 */
  goto L_10b93406;
L_10b93401:;
  /* 10b93401 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b93403 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b93406:;
  /* 10b93406 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b9340b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b9340d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9340f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b93412 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93414 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10b93416 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93419 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b9341e je 0x10b93401 */
  if (C.zf) goto L_10b93401;
  /* 10b93420 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b93422 je 0x10b93458 */
  if (C.zf) goto L_10b93458;
  /* 10b93424 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b93426 je 0x10b9344f */
  if (C.zf) goto L_10b9344f;
  /* 10b93428 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b9342e je 0x10b93442 */
  if (C.zf) goto L_10b93442;
  /* 10b93430 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b93436 je 0x10b9343a */
  if (C.zf) goto L_10b9343a;
  /* 10b93438 jmp 0x10b93401 */
  goto L_10b93401;
L_10b9343a:;
  /* 10b9343a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b9343c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b93440 pop edi */
  EDI = (pop32());
  /* 10b93441 ret  */
  ESPCHK(0x10b93380u, _esp0);
  ESP += 4; return;
L_10b93442:;
  /* 10b93442 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b93445 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b93449 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10b9344d pop edi */
  EDI = (pop32());
  /* 10b9344e ret  */
  ESPCHK(0x10b93380u, _esp0);
  ESP += 4; return;
L_10b9344f:;
  /* 10b9344f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10b93452 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b93456 pop edi */
  EDI = (pop32());
  /* 10b93457 ret  */
  ESPCHK(0x10b93380u, _esp0);
  ESP += 4; return;
L_10b93458:;
  /* 10b93458 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10b9345a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b9345e pop edi */
  EDI = (pop32());
  /* 10b9345f ret  */
  ESPCHK(0x10b93380u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10b93460 (123 bytes, 44 insns) */
void f_10b93460(void) {
  FTRACE(0x10b93460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93460 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b93464 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b9346a je 0x10b93480 */
  if (C.zf) goto L_10b93480;
L_10b9346c:;
  /* 10b9346c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10b9346e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b9346f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b93471 je 0x10b934b3 */
  if (C.zf) goto L_10b934b3;
  /* 10b93473 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10b93479 jne 0x10b9346c */
  if (!C.zf) goto L_10b9346c;
  /* 10b9347b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10b93480:;
  /* 10b93480 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10b93482 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b93487 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93489 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b9348c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b9348e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93491 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b93496 je 0x10b93480 */
  if (C.zf) goto L_10b93480;
  /* 10b93498 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10b9349b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9349d je 0x10b934d1 */
  if (C.zf) goto L_10b934d1;
  /* 10b9349f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10b934a1 je 0x10b934c7 */
  if (C.zf) goto L_10b934c7;
  /* 10b934a3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b934a8 je 0x10b934bd */
  if (C.zf) goto L_10b934bd;
  /* 10b934aa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b934af je 0x10b934b3 */
  if (C.zf) goto L_10b934b3;
  /* 10b934b1 jmp 0x10b93480 */
  goto L_10b93480;
L_10b934b3:;
  /* 10b934b3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10b934b6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b934ba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b934bc ret  */
  ESPCHK(0x10b93460u, _esp0);
  ESP += 4; return;
L_10b934bd:;
  /* 10b934bd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10b934c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b934c4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b934c6 ret  */
  ESPCHK(0x10b93460u, _esp0);
  ESP += 4; return;
L_10b934c7:;
  /* 10b934c7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10b934ca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b934ce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b934d0 ret  */
  ESPCHK(0x10b93460u, _esp0);
  ESP += 4; return;
L_10b934d1:;
  /* 10b934d1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10b934d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b934d8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b934da ret  */
  ESPCHK(0x10b93460u, _esp0);
  ESP += 4; return;
}

/* FUN_100034db @ 0x10b934db (429 bytes, 143 insns) */
void f_10b934db(void) {
  FTRACE(0x10b934dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b934db push ebp */
  push32((uint32_t)(EBP));
  /* 10b934dc mov ebp, esp */
  EBP = (ESP);
  /* 10b934de sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b934e1 push ebx */
  push32((uint32_t)(EBX));
  /* 10b934e2 push esi */
  push32((uint32_t)(ESI));
  /* 10b934e3 push edi */
  push32((uint32_t)(EDI));
  /* 10b934e4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b934e6 call 0x10b93196 */
  push32(0x10b934ebu); f_10b93196();
  /* 10b934eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b934ee call 0x10b93688 */
  push32(0x10b934f3u); f_10b93688();
  /* 10b934f3 mov ebx, eax */
  EBX = (EAX);
  /* 10b934f5 pop ecx */
  ECX = (pop32());
  /* 10b934f6 cmp ebx, dword ptr [0x10b96bb8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b96bb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b934fc pop ecx */
  ECX = (pop32());
  /* 10b934fd mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b93500 jne 0x10b93509 */
  if (!C.zf) goto L_10b93509;
L_10b93502:;
  /* 10b93502 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b93504 jmp 0x10b93679 */
  goto L_10b93679;
L_10b93509:;
  /* 10b93509 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b9350b je 0x10b93667 */
  if (C.zf) goto L_10b93667;
  /* 10b93511 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93513 mov eax, 0x10b966c8 */
  EAX = (0x10b966c8u);
L_10b93518:;
  /* 10b93518 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9351a je 0x10b93590 */
  if (C.zf) goto L_10b93590;
  /* 10b9351c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9351f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b93520 cmp eax, 0x10b967b8 */
  { uint32_t _a=(EAX),_b=(0x10b967b8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93525 jl 0x10b93518 */
  if ((C.sf!=C.of)) goto L_10b93518;
  /* 10b93527 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10b9352a push eax */
  push32((uint32_t)(EAX));
  /* 10b9352b push ebx */
  push32((uint32_t)(EBX));
  /* 10b9352c call dword ptr [0x10b95034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95034))), 0x10b93532u);
  /* 10b93532 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b93534 pop esi */
  ESI = (pop32());
  /* 10b93535 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93537 jne 0x10b9365e */
  if (!C.zf) goto L_10b9365e;
  /* 10b9353d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b9353f and dword ptr [0x10b96de4], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96de4)))&(0x0u); w32((uint32_t)(0x10b96de4), (_r)); fl_logic(_r,32); }
  /* 10b93546 pop ecx */
  ECX = (pop32());
  /* 10b93547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93549 mov edi, 0x10b96ce0 */
  EDI = (0x10b96ce0u);
  /* 10b9354e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93551 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b93553 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b93554 mov dword ptr [0x10b96bb8], ebx */
  w32((uint32_t)(0x10b96bb8), (EBX));
  /* 10b9355a jbe 0x10b9364b */
  if ((C.cf||C.zf)) goto L_10b9364b;
  /* 10b93560 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b93564 je 0x10b93626 */
  if (C.zf) goto L_10b93626;
  /* 10b9356a lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10b9356d:;
  /* 10b9356d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10b9356f test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b93571 je 0x10b93626 */
  if (C.zf) goto L_10b93626;
  /* 10b93577 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10b9357b movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10b9357e:;
  /* 10b9357e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93580 ja 0x10b9361a */
  if ((!C.cf&&!C.zf)) goto L_10b9361a;
  /* 10b93586 or byte ptr [eax + 0x10b96ce1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x4u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b9358d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b9358e jmp 0x10b9357e */
  goto L_10b9357e;
L_10b93590:;
  /* 10b93590 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b93594 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b93596 pop ecx */
  ECX = (pop32());
  /* 10b93597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93599 mov edi, 0x10b96ce0 */
  EDI = (0x10b96ce0u);
  /* 10b9359e lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10b935a1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b935a3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10b935a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b935a7 lea ebx, [esi + 0x10b966d8] */
  EBX = ((uint32_t)(ESI + 0x10b966d8));
L_10b935ad:;
  /* 10b935ad cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b935b0 mov ecx, ebx */
  ECX = (EBX);
  /* 10b935b2 je 0x10b935e0 */
  if (C.zf) goto L_10b935e0;
L_10b935b4:;
  /* 10b935b4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10b935b7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b935b9 je 0x10b935e0 */
  if (C.zf) goto L_10b935e0;
  /* 10b935bb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10b935be movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10b935c1 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b935c3 ja 0x10b935d9 */
  if ((!C.cf&&!C.zf)) goto L_10b935d9;
  /* 10b935c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b935c8 mov dl, byte ptr [edx + 0x10b966c0] */
  DL = (r8((uint32_t)(EDX + 0x10b966c0)));
L_10b935ce:;
  /* 10b935ce or byte ptr [eax + 0x10b96ce1], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(DL); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b935d4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b935d5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b935d7 jbe 0x10b935ce */
  if ((C.cf||C.zf)) goto L_10b935ce;
L_10b935d9:;
  /* 10b935d9 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b935da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b935db cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b935de jne 0x10b935b4 */
  if (!C.zf) goto L_10b935b4;
L_10b935e0:;
  /* 10b935e0 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10b935e3 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b935e6 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b935ea jb 0x10b935ad */
  if (C.cf) goto L_10b935ad;
  /* 10b935ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b935ef mov dword ptr [0x10b96bcc], 1 */
  w32((uint32_t)(0x10b96bcc), (0x1u));
  /* 10b935f9 push eax */
  push32((uint32_t)(EAX));
  /* 10b935fa mov dword ptr [0x10b96bb8], eax */
  w32((uint32_t)(0x10b96bb8), (EAX));
  /* 10b935ff call 0x10b936d2 */
  push32(0x10b93604u); f_10b936d2();
  /* 10b93604 lea esi, [esi + 0x10b966cc] */
  ESI = ((uint32_t)(ESI + 0x10b966cc));
  /* 10b9360a mov edi, 0x10b96bc0 */
  EDI = (0x10b96bc0u);
  /* 10b9360f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b93610 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b93611 pop ecx */
  ECX = (pop32());
  /* 10b93612 mov dword ptr [0x10b96de4], eax */
  w32((uint32_t)(0x10b96de4), (EAX));
  /* 10b93617 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10b93618 jmp 0x10b9366c */
  goto L_10b9366c;
L_10b9361a:;
  /* 10b9361a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b9361b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b9361c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b93620 jne 0x10b9356d */
  if (!C.zf) goto L_10b9356d;
L_10b93626:;
  /* 10b93626 mov eax, esi */
  EAX = (ESI);
L_10b93628:;
  /* 10b93628 or byte ptr [eax + 0x10b96ce1], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x8u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b9362f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b93630 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93635 jb 0x10b93628 */
  if (C.cf) goto L_10b93628;
  /* 10b93637 push ebx */
  push32((uint32_t)(EBX));
  /* 10b93638 call 0x10b936d2 */
  push32(0x10b9363du); f_10b936d2();
  /* 10b9363d pop ecx */
  ECX = (pop32());
  /* 10b9363e mov dword ptr [0x10b96de4], eax */
  w32((uint32_t)(0x10b96de4), (EAX));
  /* 10b93643 mov dword ptr [0x10b96bcc], esi */
  w32((uint32_t)(0x10b96bcc), (ESI));
  /* 10b93649 jmp 0x10b93652 */
  goto L_10b93652;
L_10b9364b:;
  /* 10b9364b and dword ptr [0x10b96bcc], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96bcc)))&(0x0u); w32((uint32_t)(0x10b96bcc), (_r)); fl_logic(_r,32); }
L_10b93652:;
  /* 10b93652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93654 mov edi, 0x10b96bc0 */
  EDI = (0x10b96bc0u);
  /* 10b93659 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9365a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9365b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9365c jmp 0x10b9366c */
  goto L_10b9366c;
L_10b9365e:;
  /* 10b9365e cmp dword ptr [0x10b96b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b96b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93665 je 0x10b93676 */
  if (C.zf) goto L_10b93676;
L_10b93667:;
  /* 10b93667 call 0x10b93705 */
  push32(0x10b9366cu); f_10b93705();
L_10b9366c:;
  /* 10b9366c call 0x10b9372e */
  push32(0x10b93671u); f_10b9372e();
  /* 10b93671 jmp 0x10b93502 */
  goto L_10b93502;
L_10b93676:;
  /* 10b93676 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10b93679:;
  /* 10b93679 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10b9367b call 0x10b931f7 */
  push32(0x10b93680u); f_10b931f7();
  /* 10b93680 pop ecx */
  ECX = (pop32());
  /* 10b93681 mov eax, esi */
  EAX = (ESI);
  /* 10b93683 pop edi */
  EDI = (pop32());
  /* 10b93684 pop esi */
  ESI = (pop32());
  /* 10b93685 pop ebx */
  EBX = (pop32());
  /* 10b93686 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93687 ret  */
  ESPCHK(0x10b934dbu, _esp0);
  ESP += 4; return;
}

/* FUN_10003688 @ 0x10b93688 (74 bytes, 15 insns) */
void f_10b93688(void) {
  FTRACE(0x10b93688u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93688 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b9368c and dword ptr [0x10b96b60], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96b60)))&(0x0u); w32((uint32_t)(0x10b96b60), (_r)); fl_logic(_r,32); }
  /* 10b93693 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93696 jne 0x10b936a8 */
  if (!C.zf) goto L_10b936a8;
  /* 10b93698 mov dword ptr [0x10b96b60], 1 */
  w32((uint32_t)(0x10b96b60), (0x1u));
  /* 10b936a2 jmp dword ptr [0x10b9502c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b9502c)))); return;
L_10b936a8:;
  /* 10b936a8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b936ab jne 0x10b936bd */
  if (!C.zf) goto L_10b936bd;
  /* 10b936ad mov dword ptr [0x10b96b60], 1 */
  w32((uint32_t)(0x10b96b60), (0x1u));
  /* 10b936b7 jmp dword ptr [0x10b95030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b95030)))); return;
L_10b936bd:;
  /* 10b936bd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b936c0 jne 0x10b936d1 */
  if (!C.zf) goto L_10b936d1;
  /* 10b936c2 mov eax, dword ptr [0x10b96b90] */
  EAX = (r32((uint32_t)(0x10b96b90)));
  /* 10b936c7 mov dword ptr [0x10b96b60], 1 */
  w32((uint32_t)(0x10b96b60), (0x1u));
L_10b936d1:;
  /* 10b936d1 ret  */
  ESPCHK(0x10b93688u, _esp0);
  ESP += 4; return;
}

/* FUN_100036d2 @ 0x10b936d2 (51 bytes, 19 insns) */
void f_10b936d2(void) {
  FTRACE(0x10b936d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b936d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b936d6 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b936db je 0x10b936ff */
  if (C.zf) goto L_10b936ff;
  /* 10b936dd sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b936e0 je 0x10b936f9 */
  if (C.zf) goto L_10b936f9;
  /* 10b936e2 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b936e5 je 0x10b936f3 */
  if (C.zf) goto L_10b936f3;
  /* 10b936e7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10b936e8 je 0x10b936ed */
  if (C.zf) goto L_10b936ed;
  /* 10b936ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b936ec ret  */
  ESPCHK(0x10b936d2u, _esp0);
  ESP += 4; return;
L_10b936ed:;
  /* 10b936ed mov eax, 0x404 */
  EAX = (0x404u);
  /* 10b936f2 ret  */
  ESPCHK(0x10b936d2u, _esp0);
  ESP += 4; return;
L_10b936f3:;
  /* 10b936f3 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10b936f8 ret  */
  ESPCHK(0x10b936d2u, _esp0);
  ESP += 4; return;
L_10b936f9:;
  /* 10b936f9 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10b936fe ret  */
  ESPCHK(0x10b936d2u, _esp0);
  ESP += 4; return;
L_10b936ff:;
  /* 10b936ff mov eax, 0x411 */
  EAX = (0x411u);
  /* 10b93704 ret  */
  ESPCHK(0x10b936d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003705 @ 0x10b93705 (41 bytes, 17 insns) */
void f_10b93705(void) {
  FTRACE(0x10b93705u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93705 push edi */
  push32((uint32_t)(EDI));
  /* 10b93706 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10b93708 pop ecx */
  ECX = (pop32());
  /* 10b93709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b9370b mov edi, 0x10b96ce0 */
  EDI = (0x10b96ce0u);
  /* 10b93710 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b93712 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10b93713 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93715 mov edi, 0x10b96bc0 */
  EDI = (0x10b96bc0u);
  /* 10b9371a mov dword ptr [0x10b96bb8], eax */
  w32((uint32_t)(0x10b96bb8), (EAX));
  /* 10b9371f mov dword ptr [0x10b96bcc], eax */
  w32((uint32_t)(0x10b96bcc), (EAX));
  /* 10b93724 mov dword ptr [0x10b96de4], eax */
  w32((uint32_t)(0x10b96de4), (EAX));
  /* 10b93729 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9372a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9372b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10b9372c pop edi */
  EDI = (pop32());
  /* 10b9372d ret  */
  ESPCHK(0x10b93705u, _esp0);
  ESP += 4; return;
}

/* FUN_1000372e @ 0x10b9372e (389 bytes, 124 insns) */
void f_10b9372e(void) {
  FTRACE(0x10b9372eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9372e push ebp */
  push32((uint32_t)(EBP));
  /* 10b9372f mov ebp, esp */
  EBP = (ESP);
  /* 10b93731 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93737 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10b9373a push esi */
  push32((uint32_t)(ESI));
  /* 10b9373b push eax */
  push32((uint32_t)(EAX));
  /* 10b9373c push dword ptr [0x10b96bb8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb8))));
  /* 10b93742 call dword ptr [0x10b95034] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95034))), 0x10b93748u);
  /* 10b93748 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9374b jne 0x10b93867 */
  if (!C.zf) goto L_10b93867;
  /* 10b93751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93753 mov esi, 0x100 */
  ESI = (0x100u);
L_10b93758:;
  /* 10b93758 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10b9375f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b93760 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93762 jb 0x10b93758 */
  if (C.cf) goto L_10b93758;
  /* 10b93764 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10b93767 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10b9376e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b93770 je 0x10b937a9 */
  if (C.zf) goto L_10b937a9;
  /* 10b93772 push ebx */
  push32((uint32_t)(EBX));
  /* 10b93773 push edi */
  push32((uint32_t)(EDI));
  /* 10b93774 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10b93777:;
  /* 10b93777 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10b9377a movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10b9377d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9377f ja 0x10b9379e */
  if ((!C.cf&&!C.zf)) goto L_10b9379e;
  /* 10b93781 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93783 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10b9378a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b9378b mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10b93790 mov ebx, ecx */
  EBX = (ECX);
  /* 10b93792 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93795 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b93797 mov ecx, ebx */
  ECX = (EBX);
  /* 10b93799 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b9379c rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10b9379e:;
  /* 10b9379e inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b9379f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10b937a0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10b937a3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b937a5 jne 0x10b93777 */
  if (!C.zf) goto L_10b93777;
  /* 10b937a7 pop edi */
  EDI = (pop32());
  /* 10b937a8 pop ebx */
  EBX = (pop32());
L_10b937a9:;
  /* 10b937a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b937ab lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10b937b1 push dword ptr [0x10b96de4] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de4))));
  /* 10b937b7 push dword ptr [0x10b96bb8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb8))));
  /* 10b937bd push eax */
  push32((uint32_t)(EAX));
  /* 10b937be lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b937c4 push esi */
  push32((uint32_t)(ESI));
  /* 10b937c5 push eax */
  push32((uint32_t)(EAX));
  /* 10b937c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b937c8 call 0x10b948a2 */
  push32(0x10b937cdu); f_10b948a2();
  /* 10b937cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10b937cf lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10b937d5 push dword ptr [0x10b96bb8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb8))));
  /* 10b937db push esi */
  push32((uint32_t)(ESI));
  /* 10b937dc push eax */
  push32((uint32_t)(EAX));
  /* 10b937dd lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b937e3 push esi */
  push32((uint32_t)(ESI));
  /* 10b937e4 push eax */
  push32((uint32_t)(EAX));
  /* 10b937e5 push esi */
  push32((uint32_t)(ESI));
  /* 10b937e6 push dword ptr [0x10b96de4] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de4))));
  /* 10b937ec call 0x10b94653 */
  push32(0x10b937f1u); f_10b94653();
  /* 10b937f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b937f3 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10b937f9 push dword ptr [0x10b96bb8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb8))));
  /* 10b937ff push esi */
  push32((uint32_t)(ESI));
  /* 10b93800 push eax */
  push32((uint32_t)(EAX));
  /* 10b93801 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10b93807 push esi */
  push32((uint32_t)(ESI));
  /* 10b93808 push eax */
  push32((uint32_t)(EAX));
  /* 10b93809 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10b9380e push dword ptr [0x10b96de4] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de4))));
  /* 10b93814 call 0x10b94653 */
  push32(0x10b93819u); f_10b94653();
  /* 10b93819 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9381c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b9381e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10b93824:;
  /* 10b93824 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10b93827 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10b9382a je 0x10b93842 */
  if (C.zf) goto L_10b93842;
  /* 10b9382c or byte ptr [eax + 0x10b96ce1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x10u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b93833 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10b9383a:;
  /* 10b9383a mov byte ptr [eax + 0x10b96be0], dl */
  w8((uint32_t)(EAX + 0x10b96be0), (DL));
  /* 10b93840 jmp 0x10b9385e */
  goto L_10b9385e;
L_10b93842:;
  /* 10b93842 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10b93845 je 0x10b93857 */
  if (C.zf) goto L_10b93857;
  /* 10b93847 or byte ptr [eax + 0x10b96ce1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x20u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b9384e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10b93855 jmp 0x10b9383a */
  goto L_10b9383a;
L_10b93857:;
  /* 10b93857 and byte ptr [eax + 0x10b96be0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96be0)))&(0x0u); w8((uint32_t)(EAX + 0x10b96be0), (_r)); fl_logic(_r,8); }
L_10b9385e:;
  /* 10b9385e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b9385f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b93860 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10b93861 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93863 jb 0x10b93824 */
  if (C.cf) goto L_10b93824;
  /* 10b93865 jmp 0x10b938b0 */
  goto L_10b938b0;
L_10b93867:;
  /* 10b93867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b93869 mov esi, 0x100 */
  ESI = (0x100u);
L_10b9386e:;
  /* 10b9386e cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93871 jb 0x10b9388c */
  if (C.cf) goto L_10b9388c;
  /* 10b93873 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93876 ja 0x10b9388c */
  if ((!C.cf&&!C.zf)) goto L_10b9388c;
  /* 10b93878 or byte ptr [eax + 0x10b96ce1], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x10u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b9387f mov cl, al */
  CL = (AL);
  /* 10b93881 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10b93884:;
  /* 10b93884 mov byte ptr [eax + 0x10b96be0], cl */
  w8((uint32_t)(EAX + 0x10b96be0), (CL));
  /* 10b9388a jmp 0x10b938ab */
  goto L_10b938ab;
L_10b9388c:;
  /* 10b9388c cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9388f jb 0x10b938a4 */
  if (C.cf) goto L_10b938a4;
  /* 10b93891 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93894 ja 0x10b938a4 */
  if ((!C.cf&&!C.zf)) goto L_10b938a4;
  /* 10b93896 or byte ptr [eax + 0x10b96ce1], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96ce1)))|(0x20u); w8((uint32_t)(EAX + 0x10b96ce1), (_r)); fl_logic(_r,8); }
  /* 10b9389d mov cl, al */
  CL = (AL);
  /* 10b9389f sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10b938a2 jmp 0x10b93884 */
  goto L_10b93884;
L_10b938a4:;
  /* 10b938a4 and byte ptr [eax + 0x10b96be0], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10b96be0)))&(0x0u); w8((uint32_t)(EAX + 0x10b96be0), (_r)); fl_logic(_r,8); }
L_10b938ab:;
  /* 10b938ab inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b938ac cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b938ae jb 0x10b9386e */
  if (C.cf) goto L_10b9386e;
L_10b938b0:;
  /* 10b938b0 pop esi */
  ESI = (pop32());
  /* 10b938b1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b938b2 ret  */
  ESPCHK(0x10b9372eu, _esp0);
  ESP += 4; return;
}

/* FUN_100038b3 @ 0x10b938b3 (28 bytes, 7 insns) */
void f_10b938b3(void) {
  FTRACE(0x10b938b3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b938b3 cmp dword ptr [0x10b96f08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10b96f08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b938ba jne 0x10b938ce */
  if (!C.zf) goto L_10b938ce;
  /* 10b938bc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10b938be call 0x10b934db */
  push32(0x10b938c3u); f_10b934db();
  /* 10b938c3 pop ecx */
  ECX = (pop32());
  /* 10b938c4 mov dword ptr [0x10b96f08], 1 */
  w32((uint32_t)(0x10b96f08), (0x1u));
L_10b938ce:;
  /* 10b938ce ret  */
  ESPCHK(0x10b938b3u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x10b938d0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_10b938d0(void) {
  FTRACE(0x10b938d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b938d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b938d1 mov ebp, esp */
  EBP = (ESP);
  /* 10b938d3 push edi */
  push32((uint32_t)(EDI));
  /* 10b938d4 push esi */
  push32((uint32_t)(ESI));
  /* 10b938d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b938d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b938db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b938de mov eax, ecx */
  EAX = (ECX);
  /* 10b938e0 mov edx, ecx */
  EDX = (ECX);
  /* 10b938e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b938e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b938e6 jbe 0x10b938f0 */
  if ((C.cf||C.zf)) goto L_10b938f0;
  /* 10b938e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b938ea jb 0x10b93a68 */
  if (C.cf) goto L_10b93a68;
L_10b938f0:;
  /* 10b938f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b938f6 jne 0x10b9390c */
  if (!C.zf) goto L_10b9390c;
  /* 10b938f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b938fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b938fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93901 jb 0x10b9392c */
  if (C.cf) goto L_10b9392c;
  /* 10b93903 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93905 jmp dword ptr [edx*4 + 0x10b93a18] */
  switch (EDX) {
    case 0: goto L_10b93a28;
    case 1: goto L_10b93a30;
    case 2: goto L_10b93a3c;
    case 3: goto L_10b93a50;
    default: x86_unimpl("switch@0x10b93905 out of table"); return;
  }
L_10b9390c:;
  /* 10b9390c mov eax, edi */
  EAX = (EDI);
  /* 10b9390e mov edx, 3 */
  EDX = (0x3u);
  /* 10b93913 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93916 jb 0x10b93924 */
  if (C.cf) goto L_10b93924;
  /* 10b93918 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b9391b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9391d jmp dword ptr [eax*4 + 0x10b93930] */
  switch (EAX) {
    case 1: goto L_10b93940;
    case 2: goto L_10b9396c;
    case 3: goto L_10b93990;
    default: x86_unimpl("switch@0x10b9391d out of table"); return;
  }
L_10b93924:;
  /* 10b93924 jmp dword ptr [ecx*4 + 0x10b93a28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b93a28)))); return;
  /* 10b9392b nop  */
  /* nop */
L_10b9392c:;
  /* 10b9392c jmp dword ptr [ecx*4 + 0x10b939ac] */
  switch (ECX) {
    case 0: goto L_10b93a0f;
    case 1: goto L_10b939fc;
    case 2: goto L_10b939f4;
    case 3: goto L_10b939ec;
    case 4: goto L_10b939e4;
    case 5: goto L_10b939dc;
    case 6: goto L_10b939d4;
    case 7: goto L_10b939cc;
    default: x86_unimpl("switch@0x10b9392c out of table"); return;
  }
  /* 10b93933 nop  */
  /* nop */
L_10b93940:;
  /* 10b93940 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93942 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93944 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93946 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93949 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b9394c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b9394f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93952 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93955 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93958 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9395b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9395e jb 0x10b9392c */
  if (C.cf) goto L_10b9392c;
  /* 10b93960 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93962 jmp dword ptr [edx*4 + 0x10b93a18] */
  switch (EDX) {
    case 0: goto L_10b93a28;
    case 1: goto L_10b93a30;
    case 2: goto L_10b93a3c;
    case 3: goto L_10b93a50;
    default: x86_unimpl("switch@0x10b93962 out of table"); return;
  }
  /* 10b93969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b9396c:;
  /* 10b9396c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b9396e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93970 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93972 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93975 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93978 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b9397b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9397e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93981 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93984 jb 0x10b9392c */
  if (C.cf) goto L_10b9392c;
  /* 10b93986 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93988 jmp dword ptr [edx*4 + 0x10b93a18] */
  switch (EDX) {
    case 0: goto L_10b93a28;
    case 1: goto L_10b93a30;
    case 2: goto L_10b93a3c;
    case 3: goto L_10b93a50;
    default: x86_unimpl("switch@0x10b93988 out of table"); return;
  }
  /* 10b9398f nop  */
  /* nop */
L_10b93990:;
  /* 10b93990 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93992 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93994 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93996 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b93997 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b9399a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b9399b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9399e jb 0x10b9392c */
  if (C.cf) goto L_10b9392c;
  /* 10b939a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b939a2 jmp dword ptr [edx*4 + 0x10b93a18] */
  switch (EDX) {
    case 0: goto L_10b93a28;
    case 1: goto L_10b93a30;
    case 2: goto L_10b93a3c;
    case 3: goto L_10b93a50;
    default: x86_unimpl("switch@0x10b939a2 out of table"); return;
  }
  /* 10b939a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b939cc:;
  /* 10b939cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b939d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b939d4:;
  /* 10b939d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b939d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b939dc:;
  /* 10b939dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b939e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b939e4:;
  /* 10b939e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b939e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b939ec:;
  /* 10b939ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b939f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b939f4:;
  /* 10b939f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b939f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b939fc:;
  /* 10b939fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b93a00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b93a04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b93a0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93a0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b93a0f:;
  /* 10b93a0f jmp dword ptr [edx*4 + 0x10b93a18] */
  switch (EDX) {
    case 0: goto L_10b93a28;
    case 1: goto L_10b93a30;
    case 2: goto L_10b93a3c;
    case 3: goto L_10b93a50;
    default: x86_unimpl("switch@0x10b93a0f out of table"); return;
  }
  /* 10b93a16 mov edi, edi */
  EDI = (EDI);
L_10b93a28:;
  /* 10b93a28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93a2b pop esi */
  ESI = (pop32());
  /* 10b93a2c pop edi */
  EDI = (pop32());
  /* 10b93a2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93a2e ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93a2f nop  */
  /* nop */
L_10b93a30:;
  /* 10b93a30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93a32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93a34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93a37 pop esi */
  ESI = (pop32());
  /* 10b93a38 pop edi */
  EDI = (pop32());
  /* 10b93a39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93a3a ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93a3b nop  */
  /* nop */
L_10b93a3c:;
  /* 10b93a3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93a3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93a40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93a43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b93a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93a49 pop esi */
  ESI = (pop32());
  /* 10b93a4a pop edi */
  EDI = (pop32());
  /* 10b93a4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93a4c ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93a4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b93a50:;
  /* 10b93a50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b93a52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b93a54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93a57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b93a5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b93a5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93a60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93a63 pop esi */
  ESI = (pop32());
  /* 10b93a64 pop edi */
  EDI = (pop32());
  /* 10b93a65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93a66 ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93a67 nop  */
  /* nop */
L_10b93a68:;
  /* 10b93a68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b93a6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b93a70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b93a76 jne 0x10b93a9c */
  if (!C.zf) goto L_10b93a9c;
  /* 10b93a78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93a7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b93a7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93a81 jb 0x10b93a90 */
  if (C.cf) goto L_10b93a90;
  /* 10b93a83 std  */
  C.df=1;
  /* 10b93a84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93a86 cld  */
  C.df=0;
  /* 10b93a87 jmp dword ptr [edx*4 + 0x10b93bb0] */
  switch (EDX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93a87 out of table"); return;
  }
  /* 10b93a8e mov edi, edi */
  EDI = (EDI);
L_10b93a90:;
  /* 10b93a90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b93a92 jmp dword ptr [ecx*4 + 0x10b93b60] */
  switch (ECX) {
    case 0: goto L_10b93ba7;
    default: x86_unimpl("switch@0x10b93a92 out of table"); return;
  }
  /* 10b93a99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b93a9c:;
  /* 10b93a9c mov eax, edi */
  EAX = (EDI);
  /* 10b93a9e mov edx, 3 */
  EDX = (0x3u);
  /* 10b93aa3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93aa6 jb 0x10b93ab4 */
  if (C.cf) goto L_10b93ab4;
  /* 10b93aa8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b93aab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93aad jmp dword ptr [eax*4 + 0x10b93ab8] */
  switch (EAX) {
    case 1: goto L_10b93ac8;
    case 2: goto L_10b93ae8;
    case 3: goto L_10b93b10;
    default: x86_unimpl("switch@0x10b93aad out of table"); return;
  }
L_10b93ab4:;
  /* 10b93ab4 jmp dword ptr [ecx*4 + 0x10b93bb0] */
  switch (ECX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93ab4 out of table"); return;
  }
  /* 10b93abb nop  */
  /* nop */
L_10b93ac8:;
  /* 10b93ac8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93acb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93acd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93ad0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b93ad1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93ad4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b93ad5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93ad8 jb 0x10b93a90 */
  if (C.cf) goto L_10b93a90;
  /* 10b93ada std  */
  C.df=1;
  /* 10b93adb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93add cld  */
  C.df=0;
  /* 10b93ade jmp dword ptr [edx*4 + 0x10b93bb0] */
  switch (EDX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93ade out of table"); return;
  }
  /* 10b93ae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b93ae8:;
  /* 10b93ae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93aeb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93aed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93af0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b93af3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93af6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93af9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93afc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93aff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93b02 jb 0x10b93a90 */
  if (C.cf) goto L_10b93a90;
  /* 10b93b04 std  */
  C.df=1;
  /* 10b93b05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93b07 cld  */
  C.df=0;
  /* 10b93b08 jmp dword ptr [edx*4 + 0x10b93bb0] */
  switch (EDX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93b08 out of table"); return;
  }
  /* 10b93b0f nop  */
  /* nop */
L_10b93b10:;
  /* 10b93b10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93b13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b93b15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93b18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b93b1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93b1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93b21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b93b24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b93b27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93b2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93b2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93b30 jb 0x10b93a90 */
  if (C.cf) goto L_10b93a90;
  /* 10b93b36 std  */
  C.df=1;
  /* 10b93b37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b93b39 cld  */
  C.df=0;
  /* 10b93b3a jmp dword ptr [edx*4 + 0x10b93bb0] */
  switch (EDX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93b3a out of table"); return;
  }
  /* 10b93b41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b93b44 cmp edi, dword ptr fs:[ecx - 0x46c493f0] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + -0x46c493f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93b4b adc byte ptr [ebx + edi - 0x47], dh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + -0x47))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + -0x47), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b93b4f adc byte ptr [ebx + edi - 0x47], bh */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + -0x47))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + -0x47), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b93b53 adc byte ptr [ebx + edi + 0x3b8c10b9], al */
  { uint32_t _a=(r8((uint32_t)(EBX + EDI*1 + 0x3b8c10b9))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EBX + EDI*1 + 0x3b8c10b9), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b93b5a mov ecx, 0xb93b9410 */
  ECX = (0xb93b9410u);
  /* 10b93b64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b93b68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b93b6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b93b70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b93b74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b93b78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b93b7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b93b80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b93b84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b93b88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b93b8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b93b90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b93b94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b93b98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b93b9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b93ba3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93ba5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b93ba7:;
  /* 10b93ba7 jmp dword ptr [edx*4 + 0x10b93bb0] */
  switch (EDX) {
    case 0: goto L_10b93bc0;
    case 1: goto L_10b93bc8;
    case 2: goto L_10b93bd8;
    case 3: goto L_10b93bec;
    default: x86_unimpl("switch@0x10b93ba7 out of table"); return;
  }
  /* 10b93bae mov edi, edi */
  EDI = (EDI);
L_10b93bc0:;
  /* 10b93bc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93bc3 pop esi */
  ESI = (pop32());
  /* 10b93bc4 pop edi */
  EDI = (pop32());
  /* 10b93bc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93bc6 ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93bc7 nop  */
  /* nop */
L_10b93bc8:;
  /* 10b93bc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93bcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93bce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93bd1 pop esi */
  ESI = (pop32());
  /* 10b93bd2 pop edi */
  EDI = (pop32());
  /* 10b93bd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93bd4 ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93bd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b93bd8:;
  /* 10b93bd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93bdb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93bde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b93be1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93be7 pop esi */
  ESI = (pop32());
  /* 10b93be8 pop edi */
  EDI = (pop32());
  /* 10b93be9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93bea ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
  /* 10b93beb nop  */
  /* nop */
L_10b93bec:;
  /* 10b93bec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b93bef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b93bf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b93bf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b93bf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b93bfb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b93bfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93c01 pop esi */
  ESI = (pop32());
  /* 10b93c02 pop edi */
  EDI = (pop32());
  /* 10b93c03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93c04 ret  */
  ESPCHK(0x10b938d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c05 @ 0x10b93c05 (62 bytes, 15 insns) */
void f_10b93c05(void) {
  FTRACE(0x10b93c05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93c05 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10b93c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b93c0c push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b93c12 call dword ptr [0x10b95038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95038))), 0x10b93c18u);
  /* 10b93c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b93c1a mov dword ptr [0x10b96bb4], eax */
  w32((uint32_t)(0x10b96bb4), (EAX));
  /* 10b93c1f jne 0x10b93c22 */
  if (!C.zf) goto L_10b93c22;
  /* 10b93c21 ret  */
  ESPCHK(0x10b93c05u, _esp0);
  ESP += 4; return;
L_10b93c22:;
  /* 10b93c22 and dword ptr [0x10b96bac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96bac)))&(0x0u); w32((uint32_t)(0x10b96bac), (_r)); fl_logic(_r,32); }
  /* 10b93c29 and dword ptr [0x10b96bb0], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96bb0)))&(0x0u); w32((uint32_t)(0x10b96bb0), (_r)); fl_logic(_r,32); }
  /* 10b93c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b93c32 mov dword ptr [0x10b96ba8], eax */
  w32((uint32_t)(0x10b96ba8), (EAX));
  /* 10b93c37 mov dword ptr [0x10b96ba0], 0x10 */
  w32((uint32_t)(0x10b96ba0), (0x10u));
  /* 10b93c41 pop eax */
  EAX = (pop32());
  /* 10b93c42 ret  */
  ESPCHK(0x10b93c05u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c43 @ 0x10b93c43 (43 bytes, 14 insns) */
void f_10b93c43(void) {
  FTRACE(0x10b93c43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93c43 mov eax, dword ptr [0x10b96bb0] */
  EAX = (r32((uint32_t)(0x10b96bb0)));
  /* 10b93c48 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10b93c4b mov eax, dword ptr [0x10b96bb4] */
  EAX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b93c50 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10b93c53:;
  /* 10b93c53 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93c55 jae 0x10b93c6b */
  if (!C.cf) goto L_10b93c6b;
  /* 10b93c57 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b93c5b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93c5e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93c64 jb 0x10b93c6d */
  if (C.cf) goto L_10b93c6d;
  /* 10b93c66 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93c69 jmp 0x10b93c53 */
  goto L_10b93c53;
L_10b93c6b:;
  /* 10b93c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b93c6d:;
  /* 10b93c6d ret  */
  ESPCHK(0x10b93c43u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c6e @ 0x10b93c6e (811 bytes, 264 insns) */
void f_10b93c6e(void) {
  FTRACE(0x10b93c6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93c6e push ebp */
  push32((uint32_t)(EBP));
  /* 10b93c6f mov ebp, esp */
  EBP = (ESP);
  /* 10b93c71 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93c74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b93c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93c7a push ebx */
  push32((uint32_t)(EBX));
  /* 10b93c7b push esi */
  push32((uint32_t)(ESI));
  /* 10b93c7c mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 10b93c7f mov esi, edx */
  ESI = (EDX);
  /* 10b93c81 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93c84 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 10b93c87 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93c8a push edi */
  push32((uint32_t)(EDI));
  /* 10b93c8b shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 10b93c8e mov ecx, esi */
  ECX = (ESI);
  /* 10b93c90 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 10b93c93 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b93c99 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b93c9a mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b93c9d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b93ca4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10b93ca7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b93caa mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 10b93cad test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 10b93cb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b93cb3 jne 0x10b93d34 */
  if (!C.zf) goto L_10b93d34;
  /* 10b93cb5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b93cb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b93cba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b93cbb pop edi */
  EDI = (pop32());
  /* 10b93cbc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b93cbf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93cc1 jbe 0x10b93cc6 */
  if ((C.cf||C.zf)) goto L_10b93cc6;
  /* 10b93cc3 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10b93cc6:;
  /* 10b93cc6 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b93cca cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93cce jne 0x10b93d18 */
  if (!C.zf) goto L_10b93d18;
  /* 10b93cd0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b93cd3 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93cd6 jae 0x10b93cf4 */
  if (!C.cf) goto L_10b93cf4;
  /* 10b93cd8 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b93cdd shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b93cdf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b93ce3 not edi */
  EDI = (~(EDI));
  /* 10b93ce5 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b93ce9 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b93ceb jne 0x10b93d18 */
  if (!C.zf) goto L_10b93d18;
  /* 10b93ced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93cf0 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b93cf2 jmp 0x10b93d18 */
  goto L_10b93d18;
L_10b93cf4:;
  /* 10b93cf4 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93cf7 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b93cfc shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b93cfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b93d01 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b93d05 not edi */
  EDI = (~(EDI));
  /* 10b93d07 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b93d0e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b93d10 jne 0x10b93d18 */
  if (!C.zf) goto L_10b93d18;
  /* 10b93d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93d15 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b93d18:;
  /* 10b93d18 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10b93d1c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b93d20 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10b93d23 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10b93d27 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 10b93d2b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93d2e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10b93d31 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10b93d34:;
  /* 10b93d34 mov edi, ebx */
  EDI = (EBX);
  /* 10b93d36 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10b93d39 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b93d3a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d3d jbe 0x10b93d42 */
  if ((C.cf||C.zf)) goto L_10b93d42;
  /* 10b93d3f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b93d41 pop edi */
  EDI = (pop32());
L_10b93d42:;
  /* 10b93d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b93d45 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10b93d48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10b93d4b jne 0x10b93df1 */
  if (!C.zf) goto L_10b93df1;
  /* 10b93d51 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93d54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b93d57 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b93d5a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b93d5c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10b93d5f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b93d60 pop edx */
  EDX = (pop32());
  /* 10b93d61 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d63 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10b93d66 jbe 0x10b93d6d */
  if ((C.cf||C.zf)) goto L_10b93d6d;
  /* 10b93d68 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10b93d6b mov ecx, edx */
  ECX = (EDX);
L_10b93d6d:;
  /* 10b93d6d add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93d70 mov edi, ebx */
  EDI = (EBX);
  /* 10b93d72 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 10b93d75 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10b93d78 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b93d79 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d7b jbe 0x10b93d7f */
  if ((C.cf||C.zf)) goto L_10b93d7f;
  /* 10b93d7d mov edi, edx */
  EDI = (EDX);
L_10b93d7f:;
  /* 10b93d7f cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d81 je 0x10b93dee */
  if (C.zf) goto L_10b93dee;
  /* 10b93d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b93d86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b93d89 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d8c jne 0x10b93dd6 */
  if (!C.zf) goto L_10b93dd6;
  /* 10b93d8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b93d91 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93d94 jae 0x10b93db2 */
  if (!C.cf) goto L_10b93db2;
  /* 10b93d96 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b93d9b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b93d9d lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b93da1 not edx */
  EDX = (~(EDX));
  /* 10b93da3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b93da7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b93da9 jne 0x10b93dd6 */
  if (!C.zf) goto L_10b93dd6;
  /* 10b93dab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93dae and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b93db0 jmp 0x10b93dd6 */
  goto L_10b93dd6;
L_10b93db2:;
  /* 10b93db2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93db5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b93dba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b93dbc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10b93dbf lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10b93dc3 not edx */
  EDX = (~(EDX));
  /* 10b93dc5 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b93dcc dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10b93dce jne 0x10b93dd6 */
  if (!C.zf) goto L_10b93dd6;
  /* 10b93dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93dd3 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b93dd6:;
  /* 10b93dd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b93dd9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b93ddc mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b93ddf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b93de2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10b93de5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b93de8 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b93deb mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10b93dee:;
  /* 10b93dee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10b93df1:;
  /* 10b93df1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93df5 jne 0x10b93e00 */
  if (!C.zf) goto L_10b93e00;
  /* 10b93df7 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93dfa je 0x10b93e89 */
  if (C.zf) goto L_10b93e89;
L_10b93e00:;
  /* 10b93e00 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b93e03 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10b93e06 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10b93e09 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10b93e0c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b93e0f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10b93e12 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b93e15 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b93e18 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b93e1b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b93e1e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b93e21 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93e24 jne 0x10b93e89 */
  if (!C.zf) goto L_10b93e89;
  /* 10b93e26 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 10b93e2a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93e2d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10b93e30 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b93e32 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10b93e36 jae 0x10b93e5d */
  if (!C.cf) goto L_10b93e5d;
  /* 10b93e38 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b93e3c jne 0x10b93e4c */
  if (!C.zf) goto L_10b93e4c;
  /* 10b93e3e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b93e43 mov ecx, edi */
  ECX = (EDI);
  /* 10b93e45 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b93e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93e4a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_10b93e4c:;
  /* 10b93e4c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b93e51 mov ecx, edi */
  ECX = (EDI);
  /* 10b93e53 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b93e55 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10b93e59 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b93e5b jmp 0x10b93e86 */
  goto L_10b93e86;
L_10b93e5d:;
  /* 10b93e5d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b93e61 jne 0x10b93e73 */
  if (!C.zf) goto L_10b93e73;
  /* 10b93e63 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b93e66 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b93e6b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b93e6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93e70 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10b93e73:;
  /* 10b93e73 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b93e76 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b93e7b shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b93e7d lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 10b93e84 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_10b93e86:;
  /* 10b93e86 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_10b93e89:;
  /* 10b93e89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b93e8c mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 10b93e8e mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 10b93e92 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 10b93e94 jne 0x10b93f94 */
  if (!C.zf) goto L_10b93f94;
  /* 10b93e9a mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93e9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b93ea1 je 0x10b93f86 */
  if (C.zf) goto L_10b93f86;
  /* 10b93ea7 mov ecx, dword ptr [0x10b96ba4] */
  ECX = (r32((uint32_t)(0x10b96ba4)));
  /* 10b93ead mov edi, dword ptr [0x10b95050] */
  EDI = (r32((uint32_t)(0x10b95050)));
  /* 10b93eb3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10b93eb6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93eb9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 10b93ebe push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10b93ec3 push ebx */
  push32((uint32_t)(EBX));
  /* 10b93ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 10b93ec5 call edi */
  call_ind((uint32_t)(EDI), 0x10b93ec7u);
  /* 10b93ec7 mov ecx, dword ptr [0x10b96ba4] */
  ECX = (r32((uint32_t)(0x10b96ba4)));
  /* 10b93ecd mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93ed2 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b93ed7 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b93ed9 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b93edc mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93ee1 mov ecx, dword ptr [0x10b96ba4] */
  ECX = (r32((uint32_t)(0x10b96ba4)));
  /* 10b93ee7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b93eea and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10b93ef2 mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93ef7 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b93efa dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 10b93efd mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93f02 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10b93f05 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b93f09 jne 0x10b93f14 */
  if (!C.zf) goto L_10b93f14;
  /* 10b93f0b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b93f0f mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
L_10b93f14:;
  /* 10b93f14 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93f18 jne 0x10b93f86 */
  if (!C.zf) goto L_10b93f86;
  /* 10b93f1a push ebx */
  push32((uint32_t)(EBX));
  /* 10b93f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10b93f1d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10b93f20 call edi */
  call_ind((uint32_t)(EDI), 0x10b93f22u);
  /* 10b93f22 mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93f27 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 10b93f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10b93f2c push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b93f32 call dword ptr [0x10b9504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9504c))), 0x10b93f38u);
  /* 10b93f38 mov eax, dword ptr [0x10b96bb0] */
  EAX = (r32((uint32_t)(0x10b96bb0)));
  /* 10b93f3d mov edx, dword ptr [0x10b96bb4] */
  EDX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b93f43 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b93f46 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b93f49 mov ecx, eax */
  ECX = (EAX);
  /* 10b93f4b mov eax, dword ptr [0x10b96bac] */
  EAX = (r32((uint32_t)(0x10b96bac)));
  /* 10b93f50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93f52 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10b93f56 push ecx */
  push32((uint32_t)(ECX));
  /* 10b93f57 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 10b93f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10b93f5b push eax */
  push32((uint32_t)(EAX));
  /* 10b93f5c call 0x10b949f0 */
  push32(0x10b93f61u); f_10b949f0();
  /* 10b93f61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93f64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93f67 dec dword ptr [0x10b96bb0] */
  { uint32_t _r=(r32((uint32_t)(0x10b96bb0)))-1; w32((uint32_t)(0x10b96bb0), (_r)); fl_dec(_r,32); }
  /* 10b93f6d cmp eax, dword ptr [0x10b96bac] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10b96bac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93f73 jbe 0x10b93f78 */
  if ((C.cf||C.zf)) goto L_10b93f78;
  /* 10b93f75 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10b93f78:;
  /* 10b93f78 mov ecx, dword ptr [0x10b96bb4] */
  ECX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b93f7e mov dword ptr [0x10b96ba8], ecx */
  w32((uint32_t)(0x10b96ba8), (ECX));
  /* 10b93f84 jmp 0x10b93f89 */
  goto L_10b93f89;
L_10b93f86:;
  /* 10b93f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10b93f89:;
  /* 10b93f89 mov dword ptr [0x10b96bac], eax */
  w32((uint32_t)(0x10b96bac), (EAX));
  /* 10b93f8e mov dword ptr [0x10b96ba4], esi */
  w32((uint32_t)(0x10b96ba4), (ESI));
L_10b93f94:;
  /* 10b93f94 pop edi */
  EDI = (pop32());
  /* 10b93f95 pop esi */
  ESI = (pop32());
  /* 10b93f96 pop ebx */
  EBX = (pop32());
  /* 10b93f97 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b93f98 ret  */
  ESPCHK(0x10b93c6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10003f99 @ 0x10b93f99 (777 bytes, 275 insns) */
void f_10b93f99(void) {
  FTRACE(0x10b93f99u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b93f99 push ebp */
  push32((uint32_t)(EBP));
  /* 10b93f9a mov ebp, esp */
  EBP = (ESP);
  /* 10b93f9c sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b93f9f mov eax, dword ptr [0x10b96bb0] */
  EAX = (r32((uint32_t)(0x10b96bb0)));
  /* 10b93fa4 mov edx, dword ptr [0x10b96bb4] */
  EDX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b93faa push ebx */
  push32((uint32_t)(EBX));
  /* 10b93fab push esi */
  push32((uint32_t)(ESI));
  /* 10b93fac lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b93faf push edi */
  push32((uint32_t)(EDI));
  /* 10b93fb0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 10b93fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b93fb6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b93fb9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 10b93fbc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10b93fbf mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10b93fc2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10b93fc5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b93fc6 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93fc9 jge 0x10b93fd9 */
  if ((C.sf==C.of)) goto L_10b93fd9;
  /* 10b93fcb or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 10b93fce shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10b93fd0 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10b93fd4 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10b93fd7 jmp 0x10b93fe9 */
  goto L_10b93fe9;
L_10b93fd9:;
  /* 10b93fd9 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b93fdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b93fdf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10b93fe1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10b93fe3 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10b93fe6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10b93fe9:;
  /* 10b93fe9 mov eax, dword ptr [0x10b96ba8] */
  EAX = (r32((uint32_t)(0x10b96ba8)));
  /* 10b93fee mov ebx, eax */
  EBX = (EAX);
  /* 10b93ff0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b93ff2 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b93ff5 jae 0x10b94010 */
  if (!C.cf) goto L_10b94010;
L_10b93ff7:;
  /* 10b93ff7 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10b93ffa mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10b93ffc and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b93fff and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b94001 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b94003 jne 0x10b94010 */
  if (!C.zf) goto L_10b94010;
  /* 10b94005 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94008 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9400b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b9400e jb 0x10b93ff7 */
  if (C.cf) goto L_10b93ff7;
L_10b94010:;
  /* 10b94010 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94013 jne 0x10b9408e */
  if (!C.zf) goto L_10b9408e;
  /* 10b94015 mov ebx, edx */
  EBX = (EDX);
L_10b94017:;
  /* 10b94017 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94019 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b9401c jae 0x10b94033 */
  if (!C.cf) goto L_10b94033;
  /* 10b9401e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10b94021 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10b94023 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b94026 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b94028 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b9402a jne 0x10b94031 */
  if (!C.zf) goto L_10b94031;
  /* 10b9402c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9402f jmp 0x10b94017 */
  goto L_10b94017;
L_10b94031:;
  /* 10b94031 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b94033:;
  /* 10b94033 jne 0x10b9408e */
  if (!C.zf) goto L_10b9408e;
L_10b94035:;
  /* 10b94035 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94038 jae 0x10b9404b */
  if (!C.cf) goto L_10b9404b;
  /* 10b9403a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9403e jne 0x10b94048 */
  if (!C.zf) goto L_10b94048;
  /* 10b94040 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94043 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b94046 jmp 0x10b94035 */
  goto L_10b94035;
L_10b94048:;
  /* 10b94048 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b9404b:;
  /* 10b9404b jne 0x10b94073 */
  if (!C.zf) goto L_10b94073;
  /* 10b9404d mov ebx, edx */
  EBX = (EDX);
L_10b9404f:;
  /* 10b9404f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94051 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b94054 jae 0x10b94063 */
  if (!C.cf) goto L_10b94063;
  /* 10b94056 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9405a jne 0x10b94061 */
  if (!C.zf) goto L_10b94061;
  /* 10b9405c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9405f jmp 0x10b9404f */
  goto L_10b9404f;
L_10b94061:;
  /* 10b94061 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10b94063:;
  /* 10b94063 jne 0x10b94073 */
  if (!C.zf) goto L_10b94073;
  /* 10b94065 call 0x10b942a2 */
  push32(0x10b9406au); f_10b942a2();
  /* 10b9406a mov ebx, eax */
  EBX = (EAX);
  /* 10b9406c test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b9406e mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10b94071 je 0x10b94087 */
  if (C.zf) goto L_10b94087;
L_10b94073:;
  /* 10b94073 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94074 call 0x10b94353 */
  push32(0x10b94079u); f_10b94353();
  /* 10b94079 pop ecx */
  ECX = (pop32());
  /* 10b9407a mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b9407d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10b9407f mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b94082 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94085 jne 0x10b9408e */
  if (!C.zf) goto L_10b9408e;
L_10b94087:;
  /* 10b94087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b94089 jmp 0x10b9429d */
  goto L_10b9429d;
L_10b9408e:;
  /* 10b9408e mov dword ptr [0x10b96ba8], ebx */
  w32((uint32_t)(0x10b96ba8), (EBX));
  /* 10b94094 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 10b94097 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10b94099 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9409c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10b9409f je 0x10b940b5 */
  if (C.zf) goto L_10b940b5;
  /* 10b940a1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10b940a8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10b940ac and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b940af and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10b940b1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10b940b3 jne 0x10b940ec */
  if (!C.zf) goto L_10b940ec;
L_10b940b5:;
  /* 10b940b5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 10b940bb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 10b940be and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10b940c1 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10b940c4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b940c8 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 10b940cb or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10b940cd mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b940d0 jne 0x10b940e9 */
  if (!C.zf) goto L_10b940e9;
L_10b940d2:;
  /* 10b940d2 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10b940d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10b940db and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10b940de add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b940e1 mov edi, esi */
  EDI = (ESI);
  /* 10b940e3 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10b940e5 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10b940e7 je 0x10b940d2 */
  if (C.zf) goto L_10b940d2;
L_10b940e9:;
  /* 10b940e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_10b940ec:;
  /* 10b940ec mov ecx, edx */
  ECX = (EDX);
  /* 10b940ee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b940f0 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b940f6 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10b940fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10b94100 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10b94104 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10b94106 jne 0x10b94115 */
  if (!C.zf) goto L_10b94115;
  /* 10b94108 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 10b9410f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10b94111 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10b94114 pop edi */
  EDI = (pop32());
L_10b94115:;
  /* 10b94115 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b94117 jl 0x10b9411e */
  if ((C.sf!=C.of)) goto L_10b9411e;
  /* 10b94119 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10b9411b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b9411c jmp 0x10b94115 */
  goto L_10b94115;
L_10b9411e:;
  /* 10b9411e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b94121 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10b94125 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10b94127 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b9412a mov esi, ecx */
  ESI = (ECX);
  /* 10b9412c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10b9412f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10b94132 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b94133 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94136 jle 0x10b9413b */
  if ((C.zf||C.sf!=C.of)) goto L_10b9413b;
  /* 10b94138 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b9413a pop esi */
  ESI = (pop32());
L_10b9413b:;
  /* 10b9413b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9413d je 0x10b94250 */
  if (C.zf) goto L_10b94250;
  /* 10b94143 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b94146 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94149 jne 0x10b941ac */
  if (!C.zf) goto L_10b941ac;
  /* 10b9414b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9414e jge 0x10b9417b */
  if ((C.sf==C.of)) goto L_10b9417b;
  /* 10b94150 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b94155 mov ecx, edi */
  ECX = (EDI);
  /* 10b94157 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b94159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b9415c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10b94160 not ebx */
  EBX = (~(EBX));
  /* 10b94162 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10b94165 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 10b94169 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 10b9416d dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10b9416f jne 0x10b941a9 */
  if (!C.zf) goto L_10b941a9;
  /* 10b94171 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94174 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b94177 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 10b94179 jmp 0x10b941ac */
  goto L_10b941ac;
L_10b9417b:;
  /* 10b9417b lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 10b9417e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10b94183 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10b94185 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b94188 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 10b9418c lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10b94193 not ebx */
  EBX = (~(EBX));
  /* 10b94195 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10b94197 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 10b94199 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 10b9419c jne 0x10b941a9 */
  if (!C.zf) goto L_10b941a9;
  /* 10b9419e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b941a1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10b941a4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 10b941a7 jmp 0x10b941ac */
  goto L_10b941ac;
L_10b941a9:;
  /* 10b941a9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_10b941ac:;
  /* 10b941ac mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 10b941af mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 10b941b2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b941b6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10b941b9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b941bc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 10b941bf mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10b941c2 je 0x10b9425c */
  if (C.zf) goto L_10b9425c;
  /* 10b941c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10b941cb mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 10b941cf lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10b941d2 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10b941d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10b941d8 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10b941db mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b941de mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10b941e1 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10b941e4 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b941e7 jne 0x10b9424d */
  if (!C.zf) goto L_10b9424d;
  /* 10b941e9 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 10b941ed cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b941f0 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10b941f3 jge 0x10b9421e */
  if ((C.sf==C.of)) goto L_10b9421e;
  /* 10b941f5 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b941f7 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b941fb mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10b941ff jne 0x10b9420c */
  if (!C.zf) goto L_10b9420c;
  /* 10b94201 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b94206 mov ecx, esi */
  ECX = (ESI);
  /* 10b94208 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b9420a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_10b9420c:;
  /* 10b9420c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b94211 mov ecx, esi */
  ECX = (ESI);
  /* 10b94213 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b94215 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b94218 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b9421c jmp 0x10b9424d */
  goto L_10b9424d;
L_10b9421e:;
  /* 10b9421e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b94220 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b94224 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10b94228 jne 0x10b94237 */
  if (!C.zf) goto L_10b94237;
  /* 10b9422a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10b9422d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10b94232 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10b94234 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10b94237:;
  /* 10b94237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b9423a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10b94241 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10b94244 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10b94249 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10b9424b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_10b9424d:;
  /* 10b9424d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10b94250:;
  /* 10b94250 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b94252 je 0x10b9425f */
  if (C.zf) goto L_10b9425f;
  /* 10b94254 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b94256 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 10b9425a jmp 0x10b9425f */
  goto L_10b9425f;
L_10b9425c:;
  /* 10b9425c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10b9425f:;
  /* 10b9425f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 10b94262 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94264 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 10b94267 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10b94269 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 10b9426d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10b94270 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 10b94272 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b94274 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 10b94277 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b94279 jne 0x10b94295 */
  if (!C.zf) goto L_10b94295;
  /* 10b9427b cmp ebx, dword ptr [0x10b96bac] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10b96bac))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94281 jne 0x10b94295 */
  if (!C.zf) goto L_10b94295;
  /* 10b94283 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b94286 cmp ecx, dword ptr [0x10b96ba4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10b96ba4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9428c jne 0x10b94295 */
  if (!C.zf) goto L_10b94295;
  /* 10b9428e and dword ptr [0x10b96bac], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10b96bac)))&(0x0u); w32((uint32_t)(0x10b96bac), (_r)); fl_logic(_r,32); }
L_10b94295:;
  /* 10b94295 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b94298 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b9429a lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_10b9429d:;
  /* 10b9429d pop edi */
  EDI = (pop32());
  /* 10b9429e pop esi */
  ESI = (pop32());
  /* 10b9429f pop ebx */
  EBX = (pop32());
  /* 10b942a0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b942a1 ret  */
  ESPCHK(0x10b93f99u, _esp0);
  ESP += 4; return;
}

/* FUN_100042a2 @ 0x10b942a2 (177 bytes, 53 insns) */
void f_10b942a2(void) {
  FTRACE(0x10b942a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b942a2 mov eax, dword ptr [0x10b96bb0] */
  EAX = (r32((uint32_t)(0x10b96bb0)));
  /* 10b942a7 mov ecx, dword ptr [0x10b96ba0] */
  ECX = (r32((uint32_t)(0x10b96ba0)));
  /* 10b942ad push esi */
  push32((uint32_t)(ESI));
  /* 10b942ae push edi */
  push32((uint32_t)(EDI));
  /* 10b942af xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b942b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b942b3 jne 0x10b942e5 */
  if (!C.zf) goto L_10b942e5;
  /* 10b942b5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 10b942b9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10b942bc push eax */
  push32((uint32_t)(EAX));
  /* 10b942bd push dword ptr [0x10b96bb4] */
  push32((uint32_t)(r32((uint32_t)(0x10b96bb4))));
  /* 10b942c3 push edi */
  push32((uint32_t)(EDI));
  /* 10b942c4 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b942ca call dword ptr [0x10b95024] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95024))), 0x10b942d0u);
  /* 10b942d0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b942d2 je 0x10b94335 */
  if (C.zf) goto L_10b94335;
  /* 10b942d4 add dword ptr [0x10b96ba0], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10b96ba0))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10b96ba0), (_r)); fl_add(_a,_b,_r,32); }
  /* 10b942db mov dword ptr [0x10b96bb4], eax */
  w32((uint32_t)(0x10b96bb4), (EAX));
  /* 10b942e0 mov eax, dword ptr [0x10b96bb0] */
  EAX = (r32((uint32_t)(0x10b96bb0)));
L_10b942e5:;
  /* 10b942e5 mov ecx, dword ptr [0x10b96bb4] */
  ECX = (r32((uint32_t)(0x10b96bb4)));
  /* 10b942eb push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10b942f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10b942f2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10b942f5 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b942fb lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10b942fe call dword ptr [0x10b95038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95038))), 0x10b94304u);
  /* 10b94304 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94306 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10b94309 je 0x10b94335 */
  if (C.zf) goto L_10b94335;
  /* 10b9430b push 4 */
  push32((uint32_t)(0x4u));
  /* 10b9430d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10b94312 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10b94317 push edi */
  push32((uint32_t)(EDI));
  /* 10b94318 call dword ptr [0x10b95028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95028))), 0x10b9431eu);
  /* 10b9431e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94320 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10b94323 jne 0x10b94339 */
  if (!C.zf) goto L_10b94339;
  /* 10b94325 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10b94328 push edi */
  push32((uint32_t)(EDI));
  /* 10b94329 push dword ptr [0x10b96de8] */
  push32((uint32_t)(r32((uint32_t)(0x10b96de8))));
  /* 10b9432f call dword ptr [0x10b9504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9504c))), 0x10b94335u);
L_10b94335:;
  /* 10b94335 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b94337 jmp 0x10b94350 */
  goto L_10b94350;
L_10b94339:;
  /* 10b94339 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b9433d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10b9433f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10b94342 inc dword ptr [0x10b96bb0] */
  { uint32_t _r=(r32((uint32_t)(0x10b96bb0)))+1; w32((uint32_t)(0x10b96bb0), (_r)); fl_inc(_r,32); }
  /* 10b94348 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10b9434b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10b9434e mov eax, esi */
  EAX = (ESI);
L_10b94350:;
  /* 10b94350 pop edi */
  EDI = (pop32());
  /* 10b94351 pop esi */
  ESI = (pop32());
  /* 10b94352 ret  */
  ESPCHK(0x10b942a2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004353 @ 0x10b94353 (251 bytes, 85 insns) */
void f_10b94353(void) {
  FTRACE(0x10b94353u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94353 push ebp */
  push32((uint32_t)(EBP));
  /* 10b94354 mov ebp, esp */
  EBP = (ESP);
  /* 10b94356 push ecx */
  push32((uint32_t)(ECX));
  /* 10b94357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b9435a push ebx */
  push32((uint32_t)(EBX));
  /* 10b9435b push esi */
  push32((uint32_t)(ESI));
  /* 10b9435c push edi */
  push32((uint32_t)(EDI));
  /* 10b9435d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10b94360 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10b94363 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10b94365:;
  /* 10b94365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b94367 jl 0x10b9436e */
  if ((C.sf!=C.of)) goto L_10b9436e;
  /* 10b94369 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10b9436b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10b9436c jmp 0x10b94365 */
  goto L_10b94365;
L_10b9436e:;
  /* 10b9436e mov eax, ebx */
  EAX = (EBX);
  /* 10b94370 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10b94372 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10b94378 pop edx */
  EDX = (pop32());
  /* 10b94379 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10b94380 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10b94383:;
  /* 10b94383 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10b94386 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10b94389 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9438c dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b9438d jne 0x10b94383 */
  if (!C.zf) goto L_10b94383;
  /* 10b9438f mov edi, ebx */
  EDI = (EBX);
  /* 10b94391 push 4 */
  push32((uint32_t)(0x4u));
  /* 10b94393 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10b94396 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94399 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10b9439e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10b943a3 push edi */
  push32((uint32_t)(EDI));
  /* 10b943a4 call dword ptr [0x10b95028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95028))), 0x10b943aau);
  /* 10b943aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b943ac jne 0x10b943b6 */
  if (!C.zf) goto L_10b943b6;
  /* 10b943ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b943b1 jmp 0x10b94449 */
  goto L_10b94449;
L_10b943b6:;
  /* 10b943b6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10b943bc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b943be ja 0x10b943fc */
  if ((!C.cf&&!C.zf)) goto L_10b943fc;
  /* 10b943c0 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10b943c3:;
  /* 10b943c3 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10b943c7 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10b943ce lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10b943d4 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10b943db mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10b943dd lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10b943e3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b943e6 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10b943f0 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b943f5 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10b943f8 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b943fa jbe 0x10b943c3 */
  if ((C.cf||C.zf)) goto L_10b943c3;
L_10b943fc:;
  /* 10b943fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10b943ff lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10b94402 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b94409 pop edi */
  EDI = (pop32());
  /* 10b9440a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10b9440d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10b94410 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10b94413 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10b94416 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10b94419 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10b9441e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10b94425 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10b94428 mov cl, al */
  CL = (AL);
  /* 10b9442a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10b9442c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9442e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94431 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10b94434 jne 0x10b94439 */
  if (!C.zf) goto L_10b94439;
  /* 10b94436 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10b94439:;
  /* 10b94439 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10b9443e mov ecx, ebx */
  ECX = (EBX);
  /* 10b94440 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10b94442 not edx */
  EDX = (~(EDX));
  /* 10b94444 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10b94447 mov eax, ebx */
  EAX = (EBX);
L_10b94449:;
  /* 10b94449 pop edi */
  EDI = (pop32());
  /* 10b9444a pop esi */
  ESI = (pop32());
  /* 10b9444b pop ebx */
  EBX = (pop32());
  /* 10b9444c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b9444d ret  */
  ESPCHK(0x10b94353u, _esp0);
  ESP += 4; return;
}

/* FUN_1000444e @ 0x10b9444e (137 bytes, 50 insns) */
void f_10b9444e(void) {
  FTRACE(0x10b9444eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b9444e push ebx */
  push32((uint32_t)(EBX));
  /* 10b9444f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b94451 cmp dword ptr [0x10b96b64], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10b96b64))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94457 push esi */
  push32((uint32_t)(ESI));
  /* 10b94458 push edi */
  push32((uint32_t)(EDI));
  /* 10b94459 jne 0x10b9449d */
  if (!C.zf) goto L_10b9449d;
  /* 10b9445b push 0x10b95450 */
  push32((uint32_t)(0x10b95450u));
  /* 10b94460 call dword ptr [0x10b9501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9501c))), 0x10b94466u);
  /* 10b94466 mov edi, eax */
  EDI = (EAX);
  /* 10b94468 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9446a je 0x10b944d3 */
  if (C.zf) goto L_10b944d3;
  /* 10b9446c mov esi, dword ptr [0x10b95020] */
  ESI = (r32((uint32_t)(0x10b95020)));
  /* 10b94472 push 0x10b95444 */
  push32((uint32_t)(0x10b95444u));
  /* 10b94477 push edi */
  push32((uint32_t)(EDI));
  /* 10b94478 call esi */
  call_ind((uint32_t)(ESI), 0x10b9447au);
  /* 10b9447a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9447c mov dword ptr [0x10b96b64], eax */
  w32((uint32_t)(0x10b96b64), (EAX));
  /* 10b94481 je 0x10b944d3 */
  if (C.zf) goto L_10b944d3;
  /* 10b94483 push 0x10b95434 */
  push32((uint32_t)(0x10b95434u));
  /* 10b94488 push edi */
  push32((uint32_t)(EDI));
  /* 10b94489 call esi */
  call_ind((uint32_t)(ESI), 0x10b9448bu);
  /* 10b9448b push 0x10b95420 */
  push32((uint32_t)(0x10b95420u));
  /* 10b94490 push edi */
  push32((uint32_t)(EDI));
  /* 10b94491 mov dword ptr [0x10b96b68], eax */
  w32((uint32_t)(0x10b96b68), (EAX));
  /* 10b94496 call esi */
  call_ind((uint32_t)(ESI), 0x10b94498u);
  /* 10b94498 mov dword ptr [0x10b96b6c], eax */
  w32((uint32_t)(0x10b96b6c), (EAX));
L_10b9449d:;
  /* 10b9449d mov eax, dword ptr [0x10b96b68] */
  EAX = (r32((uint32_t)(0x10b96b68)));
  /* 10b944a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b944a4 je 0x10b944bc */
  if (C.zf) goto L_10b944bc;
  /* 10b944a6 call eax */
  call_ind((uint32_t)(EAX), 0x10b944a8u);
  /* 10b944a8 mov ebx, eax */
  EBX = (EAX);
  /* 10b944aa test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10b944ac je 0x10b944bc */
  if (C.zf) goto L_10b944bc;
  /* 10b944ae mov eax, dword ptr [0x10b96b6c] */
  EAX = (r32((uint32_t)(0x10b96b6c)));
  /* 10b944b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b944b5 je 0x10b944bc */
  if (C.zf) goto L_10b944bc;
  /* 10b944b7 push ebx */
  push32((uint32_t)(EBX));
  /* 10b944b8 call eax */
  call_ind((uint32_t)(EAX), 0x10b944bau);
  /* 10b944ba mov ebx, eax */
  EBX = (EAX);
L_10b944bc:;
  /* 10b944bc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b944c0 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b944c4 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10b944c8 push ebx */
  push32((uint32_t)(EBX));
  /* 10b944c9 call dword ptr [0x10b96b64] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b96b64))), 0x10b944cfu);
L_10b944cf:;
  /* 10b944cf pop edi */
  EDI = (pop32());
  /* 10b944d0 pop esi */
  ESI = (pop32());
  /* 10b944d1 pop ebx */
  EBX = (pop32());
  /* 10b944d2 ret  */
  ESPCHK(0x10b9444eu, _esp0);
  ESP += 4; return;
L_10b944d3:;
  /* 10b944d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b944d5 jmp 0x10b944cf */
  goto L_10b944cf;
}

/* _strncpy @ 0x10b944e0 (254 bytes, 109 insns) */
void f_10b944e0(void) {
  FTRACE(0x10b944e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b944e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b944e4 push edi */
  push32((uint32_t)(EDI));
  /* 10b944e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10b944e7 je 0x10b94563 */
  if (C.zf) goto L_10b94563;
  /* 10b944e9 push esi */
  push32((uint32_t)(ESI));
  /* 10b944ea push ebx */
  push32((uint32_t)(EBX));
  /* 10b944eb mov ebx, ecx */
  EBX = (ECX);
  /* 10b944ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10b944f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b944f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10b944fb jne 0x10b94504 */
  if (!C.zf) goto L_10b94504;
  /* 10b944fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94500 jne 0x10b94571 */
  if (!C.zf) goto L_10b94571;
  /* 10b94502 jmp 0x10b94525 */
  goto L_10b94525;
L_10b94504:;
  /* 10b94504 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94506 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b94507 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94509 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b9450a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b9450b je 0x10b94532 */
  if (C.zf) goto L_10b94532;
  /* 10b9450d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9450f je 0x10b9453a */
  if (C.zf) goto L_10b9453a;
  /* 10b94511 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10b94517 jne 0x10b94504 */
  if (!C.zf) goto L_10b94504;
  /* 10b94519 mov ebx, ecx */
  EBX = (ECX);
  /* 10b9451b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b9451e jne 0x10b94571 */
  if (!C.zf) goto L_10b94571;
L_10b94520:;
  /* 10b94520 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b94523 je 0x10b94532 */
  if (C.zf) goto L_10b94532;
L_10b94525:;
  /* 10b94525 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94527 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b94528 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b9452a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b9452b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10b9452d je 0x10b9455e */
  if (C.zf) goto L_10b9455e;
  /* 10b9452f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b94530 jne 0x10b94525 */
  if (!C.zf) goto L_10b94525;
L_10b94532:;
  /* 10b94532 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b94536 pop ebx */
  EBX = (pop32());
  /* 10b94537 pop esi */
  ESI = (pop32());
  /* 10b94538 pop edi */
  EDI = (pop32());
  /* 10b94539 ret  */
  ESPCHK(0x10b944e0u, _esp0);
  ESP += 4; return;
L_10b9453a:;
  /* 10b9453a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b94540 je 0x10b94554 */
  if (C.zf) goto L_10b94554;
L_10b94542:;
  /* 10b94542 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94544 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b94545 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b94546 je 0x10b945d6 */
  if (C.zf) goto L_10b945d6;
  /* 10b9454c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b94552 jne 0x10b94542 */
  if (!C.zf) goto L_10b94542;
L_10b94554:;
  /* 10b94554 mov ebx, ecx */
  EBX = (ECX);
  /* 10b94556 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94559 jne 0x10b945c7 */
  if (!C.zf) goto L_10b945c7;
L_10b9455b:;
  /* 10b9455b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b9455d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10b9455e:;
  /* 10b9455e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10b9455f jne 0x10b9455b */
  if (!C.zf) goto L_10b9455b;
  /* 10b94561 pop ebx */
  EBX = (pop32());
  /* 10b94562 pop esi */
  ESI = (pop32());
L_10b94563:;
  /* 10b94563 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b94567 pop edi */
  EDI = (pop32());
  /* 10b94568 ret  */
  ESPCHK(0x10b944e0u, _esp0);
  ESP += 4; return;
L_10b94569:;
  /* 10b94569 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b9456b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9456e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b9456f je 0x10b94520 */
  if (C.zf) goto L_10b94520;
L_10b94571:;
  /* 10b94571 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10b94576 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10b94578 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9457a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10b9457d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10b9457f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10b94581 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94584 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10b94589 je 0x10b94569 */
  if (C.zf) goto L_10b94569;
  /* 10b9458b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10b9458d je 0x10b945bb */
  if (C.zf) goto L_10b945bb;
  /* 10b9458f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10b94591 je 0x10b945b1 */
  if (C.zf) goto L_10b945b1;
  /* 10b94593 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10b94599 je 0x10b945a7 */
  if (C.zf) goto L_10b945a7;
  /* 10b9459b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10b945a1 jne 0x10b94569 */
  if (!C.zf) goto L_10b94569;
  /* 10b945a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b945a5 jmp 0x10b945bf */
  goto L_10b945bf;
L_10b945a7:;
  /* 10b945a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b945ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b945af jmp 0x10b945bf */
  goto L_10b945bf;
L_10b945b1:;
  /* 10b945b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10b945b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10b945b9 jmp 0x10b945bf */
  goto L_10b945bf;
L_10b945bb:;
  /* 10b945bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10b945bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10b945bf:;
  /* 10b945bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b945c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b945c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b945c5 je 0x10b945d1 */
  if (C.zf) goto L_10b945d1;
L_10b945c7:;
  /* 10b945c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b945c9:;
  /* 10b945c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10b945cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b945ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b945cf jne 0x10b945c9 */
  if (!C.zf) goto L_10b945c9;
L_10b945d1:;
  /* 10b945d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10b945d4 jne 0x10b9455b */
  if (!C.zf) goto L_10b9455b;
L_10b945d6:;
  /* 10b945d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b945da pop ebx */
  EBX = (pop32());
  /* 10b945db pop esi */
  ESI = (pop32());
  /* 10b945dc pop edi */
  EDI = (pop32());
  /* 10b945dd ret  */
  ESPCHK(0x10b944e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10b945e0 (88 bytes, 40 insns) */
void f_10b945e0(void) {
  FTRACE(0x10b945e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b945e0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10b945e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b945e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b945ea je 0x10b94633 */
  if (C.zf) goto L_10b94633;
  /* 10b945ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b945ee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10b945f2 push edi */
  push32((uint32_t)(EDI));
  /* 10b945f3 mov edi, ecx */
  EDI = (ECX);
  /* 10b945f5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b945f8 jb 0x10b94627 */
  if (C.cf) goto L_10b94627;
  /* 10b945fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b945fc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10b945ff je 0x10b94609 */
  if (C.zf) goto L_10b94609;
  /* 10b94601 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10b94603:;
  /* 10b94603 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94605 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b94606 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b94607 jne 0x10b94603 */
  if (!C.zf) goto L_10b94603;
L_10b94609:;
  /* 10b94609 mov ecx, eax */
  ECX = (EAX);
  /* 10b9460b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10b9460e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94610 mov ecx, eax */
  ECX = (EAX);
  /* 10b94612 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10b94615 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94617 mov ecx, edx */
  ECX = (EDX);
  /* 10b94619 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b9461c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b9461f je 0x10b94627 */
  if (C.zf) goto L_10b94627;
  /* 10b94621 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10b94623 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b94625 je 0x10b9462d */
  if (C.zf) goto L_10b9462d;
L_10b94627:;
  /* 10b94627 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94629 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b9462a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10b9462b jne 0x10b94627 */
  if (!C.zf) goto L_10b94627;
L_10b9462d:;
  /* 10b9462d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b94631 pop edi */
  EDI = (pop32());
  /* 10b94632 ret  */
  ESPCHK(0x10b945e0u, _esp0);
  ESP += 4; return;
L_10b94633:;
  /* 10b94633 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b94637 ret  */
  ESPCHK(0x10b945e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004638 @ 0x10b94638 (27 bytes, 13 insns) */
void f_10b94638(void) {
  FTRACE(0x10b94638u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94638 mov eax, dword ptr [0x10b96b70] */
  EAX = (r32((uint32_t)(0x10b96b70)));
  /* 10b9463d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9463f je 0x10b94650 */
  if (C.zf) goto L_10b94650;
  /* 10b94641 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10b94645 call eax */
  call_ind((uint32_t)(EAX), 0x10b94647u);
  /* 10b94647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b94649 pop ecx */
  ECX = (pop32());
  /* 10b9464a je 0x10b94650 */
  if (C.zf) goto L_10b94650;
  /* 10b9464c push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9464e pop eax */
  EAX = (pop32());
  /* 10b9464f ret  */
  ESPCHK(0x10b94638u, _esp0);
  ESP += 4; return;
L_10b94650:;
  /* 10b94650 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10b94652 ret  */
  ESPCHK(0x10b94638u, _esp0);
  ESP += 4; return;
}

/* FUN_10004653 @ 0x10b94653 (511 bytes, 193 insns) */
void f_10b94653(void) {
  FTRACE(0x10b94653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94653 push ebp */
  push32((uint32_t)(EBP));
  /* 10b94654 mov ebp, esp */
  EBP = (ESP);
  /* 10b94656 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b94658 push 0x10b95468 */
  push32((uint32_t)(0x10b95468u));
  /* 10b9465d push 0x10b94e20 */
  push32((uint32_t)(0x10b94e20u));
  /* 10b94662 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b94668 push eax */
  push32((uint32_t)(EAX));
  /* 10b94669 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b94670 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94673 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94674 push esi */
  push32((uint32_t)(ESI));
  /* 10b94675 push edi */
  push32((uint32_t)(EDI));
  /* 10b94676 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b94679 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b9467b cmp dword ptr [0x10b96b98], edi */
  { uint32_t _a=(r32((uint32_t)(0x10b96b98))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94681 jne 0x10b946c9 */
  if (!C.zf) goto L_10b946c9;
  /* 10b94683 push edi */
  push32((uint32_t)(EDI));
  /* 10b94684 push edi */
  push32((uint32_t)(EDI));
  /* 10b94685 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b94687 pop ebx */
  EBX = (pop32());
  /* 10b94688 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94689 push 0x10b95460 */
  push32((uint32_t)(0x10b95460u));
  /* 10b9468e mov esi, 0x100 */
  ESI = (0x100u);
  /* 10b94693 push esi */
  push32((uint32_t)(ESI));
  /* 10b94694 push edi */
  push32((uint32_t)(EDI));
  /* 10b94695 call dword ptr [0x10b95010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95010))), 0x10b9469bu);
  /* 10b9469b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b9469d je 0x10b946a7 */
  if (C.zf) goto L_10b946a7;
  /* 10b9469f mov dword ptr [0x10b96b98], ebx */
  w32((uint32_t)(0x10b96b98), (EBX));
  /* 10b946a5 jmp 0x10b946c9 */
  goto L_10b946c9;
L_10b946a7:;
  /* 10b946a7 push edi */
  push32((uint32_t)(EDI));
  /* 10b946a8 push edi */
  push32((uint32_t)(EDI));
  /* 10b946a9 push ebx */
  push32((uint32_t)(EBX));
  /* 10b946aa push 0x10b9545c */
  push32((uint32_t)(0x10b9545cu));
  /* 10b946af push esi */
  push32((uint32_t)(ESI));
  /* 10b946b0 push edi */
  push32((uint32_t)(EDI));
  /* 10b946b1 call dword ptr [0x10b95014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95014))), 0x10b946b7u);
  /* 10b946b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b946b9 je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b946bf mov dword ptr [0x10b96b98], 2 */
  w32((uint32_t)(0x10b96b98), (0x2u));
L_10b946c9:;
  /* 10b946c9 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b946cc jle 0x10b946de */
  if ((C.zf||C.sf!=C.of)) goto L_10b946de;
  /* 10b946ce push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b946d1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b946d4 call 0x10b94877 */
  push32(0x10b946d9u); f_10b94877();
  /* 10b946d9 pop ecx */
  ECX = (pop32());
  /* 10b946da pop ecx */
  ECX = (pop32());
  /* 10b946db mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10b946de:;
  /* 10b946de mov eax, dword ptr [0x10b96b98] */
  EAX = (r32((uint32_t)(0x10b96b98)));
  /* 10b946e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b946e6 jne 0x10b94705 */
  if (!C.zf) goto L_10b94705;
  /* 10b946e8 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b946eb push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b946ee push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b946f1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b946f4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b946f7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b946fa call dword ptr [0x10b95014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95014))), 0x10b94700u);
  /* 10b94700 jmp 0x10b947e3 */
  goto L_10b947e3;
L_10b94705:;
  /* 10b94705 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94708 jne 0x10b947e1 */
  if (!C.zf) goto L_10b947e1;
  /* 10b9470e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94711 jne 0x10b9471b */
  if (!C.zf) goto L_10b9471b;
  /* 10b94713 mov eax, dword ptr [0x10b96b90] */
  EAX = (r32((uint32_t)(0x10b96b90)));
  /* 10b94718 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10b9471b:;
  /* 10b9471b push edi */
  push32((uint32_t)(EDI));
  /* 10b9471c push edi */
  push32((uint32_t)(EDI));
  /* 10b9471d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b94720 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b94723 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10b94726 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b94728 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b9472a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b9472d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b9472e push eax */
  push32((uint32_t)(EAX));
  /* 10b9472f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b94732 call dword ptr [0x10b95018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95018))), 0x10b94738u);
  /* 10b94738 mov ebx, eax */
  EBX = (EAX);
  /* 10b9473a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10b9473d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9473f je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b94745 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10b94748 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10b9474b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9474e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b94750 call 0x10b94f00 */
  push32(0x10b94755u); f_10b94f00();
  /* 10b94755 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b94758 mov eax, esp */
  EAX = (ESP);
  /* 10b9475a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10b9475d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b94761 jmp 0x10b94776 */
  goto L_10b94776;
  /* 10b94763 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b94765 pop eax */
  EAX = (pop32());
  /* 10b94766 ret  */
  ESPCHK(0x10b94653u, _esp0);
  ESP += 4; return;
  /* 10b94767 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b9476a xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b9476c mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10b9476f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b94773 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10b94776:;
  /* 10b94776 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94779 je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b9477b push ebx */
  push32((uint32_t)(EBX));
  /* 10b9477c push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b9477f push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b94782 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b94785 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b94787 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b9478a call dword ptr [0x10b95018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95018))), 0x10b94790u);
  /* 10b94790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b94792 je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b94794 push edi */
  push32((uint32_t)(EDI));
  /* 10b94795 push edi */
  push32((uint32_t)(EDI));
  /* 10b94796 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94797 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b9479a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b9479d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b947a0 call dword ptr [0x10b95010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95010))), 0x10b947a6u);
  /* 10b947a6 mov esi, eax */
  ESI = (EAX);
  /* 10b947a8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10b947ab cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b947ad je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b947af test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10b947b3 je 0x10b947f5 */
  if (C.zf) goto L_10b947f5;
  /* 10b947b5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b947b8 je 0x10b94870 */
  if (C.zf) goto L_10b94870;
  /* 10b947be cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b947c1 jg 0x10b947e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10b947e1;
  /* 10b947c3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b947c6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b947c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10b947ca push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b947cd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b947d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b947d3 call dword ptr [0x10b95010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95010))), 0x10b947d9u);
  /* 10b947d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b947db jne 0x10b94870 */
  if (!C.zf) goto L_10b94870;
L_10b947e1:;
  /* 10b947e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b947e3:;
  /* 10b947e3 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10b947e6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b947e9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b947f0 pop edi */
  EDI = (pop32());
  /* 10b947f1 pop esi */
  ESI = (pop32());
  /* 10b947f2 pop ebx */
  EBX = (pop32());
  /* 10b947f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b947f4 ret  */
  ESPCHK(0x10b94653u, _esp0);
  ESP += 4; return;
L_10b947f5:;
  /* 10b947f5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10b947fc lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10b947ff add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94802 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b94804 call 0x10b94f00 */
  push32(0x10b94809u); f_10b94f00();
  /* 10b94809 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b9480c mov ebx, esp */
  EBX = (ESP);
  /* 10b9480e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10b94811 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b94815 jmp 0x10b94829 */
  goto L_10b94829;
  /* 10b94817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b94819 pop eax */
  EAX = (pop32());
  /* 10b9481a ret  */
  ESPCHK(0x10b94653u, _esp0);
  ESP += 4; return;
  /* 10b9481b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b9481e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10b94820 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b94822 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b94826 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10b94829:;
  /* 10b94829 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9482b je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b9482d push esi */
  push32((uint32_t)(ESI));
  /* 10b9482e push ebx */
  push32((uint32_t)(EBX));
  /* 10b9482f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10b94832 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10b94835 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b94838 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b9483b call dword ptr [0x10b95010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95010))), 0x10b94841u);
  /* 10b94841 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b94843 je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
  /* 10b94845 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94848 push edi */
  push32((uint32_t)(EDI));
  /* 10b94849 push edi */
  push32((uint32_t)(EDI));
  /* 10b9484a jne 0x10b94850 */
  if (!C.zf) goto L_10b94850;
  /* 10b9484c push edi */
  push32((uint32_t)(EDI));
  /* 10b9484d push edi */
  push32((uint32_t)(EDI));
  /* 10b9484e jmp 0x10b94856 */
  goto L_10b94856;
L_10b94850:;
  /* 10b94850 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10b94853 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10b94856:;
  /* 10b94856 push esi */
  push32((uint32_t)(ESI));
  /* 10b94857 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94858 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10b9485d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10b94860 call dword ptr [0x10b95064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95064))), 0x10b94866u);
  /* 10b94866 mov esi, eax */
  ESI = (EAX);
  /* 10b94868 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9486a je 0x10b947e1 */
  if (C.zf) goto L_10b947e1;
L_10b94870:;
  /* 10b94870 mov eax, esi */
  EAX = (ESI);
  /* 10b94872 jmp 0x10b947e3 */
  goto L_10b947e3;
}

/* FUN_10004877 @ 0x10b94877 (43 bytes, 20 insns) */
void f_10b94877(void) {
  FTRACE(0x10b94877u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94877 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b9487b mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10b9487f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10b94881 push esi */
  push32((uint32_t)(ESI));
  /* 10b94882 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10b94885 je 0x10b94894 */
  if (C.zf) goto L_10b94894;
L_10b94887:;
  /* 10b94887 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b9488a je 0x10b94894 */
  if (C.zf) goto L_10b94894;
  /* 10b9488c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b9488d mov esi, ecx */
  ESI = (ECX);
  /* 10b9488f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10b94890 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10b94892 jne 0x10b94887 */
  if (!C.zf) goto L_10b94887;
L_10b94894:;
  /* 10b94894 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10b94897 pop esi */
  ESI = (pop32());
  /* 10b94898 jne 0x10b9489f */
  if (!C.zf) goto L_10b9489f;
  /* 10b9489a sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b9489e ret  */
  ESPCHK(0x10b94877u, _esp0);
  ESP += 4; return;
L_10b9489f:;
  /* 10b9489f mov eax, edx */
  EAX = (EDX);
  /* 10b948a1 ret  */
  ESPCHK(0x10b94877u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a2 @ 0x10b948a2 (318 bytes, 123 insns) */
void f_10b948a2(void) {
  FTRACE(0x10b948a2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b948a2 push ebp */
  push32((uint32_t)(EBP));
  /* 10b948a3 mov ebp, esp */
  EBP = (ESP);
  /* 10b948a5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10b948a7 push 0x10b95480 */
  push32((uint32_t)(0x10b95480u));
  /* 10b948ac push 0x10b94e20 */
  push32((uint32_t)(0x10b94e20u));
  /* 10b948b1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10b948b7 push eax */
  push32((uint32_t)(EAX));
  /* 10b948b8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10b948bf sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b948c2 push ebx */
  push32((uint32_t)(EBX));
  /* 10b948c3 push esi */
  push32((uint32_t)(ESI));
  /* 10b948c4 push edi */
  push32((uint32_t)(EDI));
  /* 10b948c5 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b948c8 mov eax, dword ptr [0x10b96b9c] */
  EAX = (r32((uint32_t)(0x10b96b9c)));
  /* 10b948cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b948cf cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b948d1 jne 0x10b94911 */
  if (!C.zf) goto L_10b94911;
  /* 10b948d3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b948d6 push eax */
  push32((uint32_t)(EAX));
  /* 10b948d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b948d9 pop esi */
  ESI = (pop32());
  /* 10b948da push esi */
  push32((uint32_t)(ESI));
  /* 10b948db push 0x10b95460 */
  push32((uint32_t)(0x10b95460u));
  /* 10b948e0 push esi */
  push32((uint32_t)(ESI));
  /* 10b948e1 call dword ptr [0x10b95008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95008))), 0x10b948e7u);
  /* 10b948e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b948e9 je 0x10b948ef */
  if (C.zf) goto L_10b948ef;
  /* 10b948eb mov eax, esi */
  EAX = (ESI);
  /* 10b948ed jmp 0x10b9490c */
  goto L_10b9490c;
L_10b948ef:;
  /* 10b948ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10b948f2 push eax */
  push32((uint32_t)(EAX));
  /* 10b948f3 push esi */
  push32((uint32_t)(ESI));
  /* 10b948f4 push 0x10b9545c */
  push32((uint32_t)(0x10b9545cu));
  /* 10b948f9 push esi */
  push32((uint32_t)(ESI));
  /* 10b948fa push ebx */
  push32((uint32_t)(EBX));
  /* 10b948fb call dword ptr [0x10b9500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9500c))), 0x10b94901u);
  /* 10b94901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10b94903 je 0x10b949d7 */
  if (C.zf) goto L_10b949d7;
  /* 10b94909 push 2 */
  push32((uint32_t)(0x2u));
  /* 10b9490b pop eax */
  EAX = (pop32());
L_10b9490c:;
  /* 10b9490c mov dword ptr [0x10b96b9c], eax */
  w32((uint32_t)(0x10b96b9c), (EAX));
L_10b94911:;
  /* 10b94911 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94914 jne 0x10b9493a */
  if (!C.zf) goto L_10b9493a;
  /* 10b94916 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10b94919 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9491b jne 0x10b94922 */
  if (!C.zf) goto L_10b94922;
  /* 10b9491d mov eax, dword ptr [0x10b96b80] */
  EAX = (r32((uint32_t)(0x10b96b80)));
L_10b94922:;
  /* 10b94922 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b94925 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b94928 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b9492b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b9492e push eax */
  push32((uint32_t)(EAX));
  /* 10b9492f call dword ptr [0x10b9500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b9500c))), 0x10b94935u);
  /* 10b94935 jmp 0x10b949d9 */
  goto L_10b949d9;
L_10b9493a:;
  /* 10b9493a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b9493d jne 0x10b949d7 */
  if (!C.zf) goto L_10b949d7;
  /* 10b94943 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94946 jne 0x10b94950 */
  if (!C.zf) goto L_10b94950;
  /* 10b94948 mov eax, dword ptr [0x10b96b90] */
  EAX = (r32((uint32_t)(0x10b96b90)));
  /* 10b9494d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10b94950:;
  /* 10b94950 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94951 push ebx */
  push32((uint32_t)(EBX));
  /* 10b94952 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b94955 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b94958 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10b9495b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b9495d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b9495f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10b94962 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10b94963 push eax */
  push32((uint32_t)(EAX));
  /* 10b94964 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b94967 call dword ptr [0x10b95018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95018))), 0x10b9496du);
  /* 10b9496d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10b94970 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94972 je 0x10b949d7 */
  if (C.zf) goto L_10b949d7;
  /* 10b94974 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 10b94977 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 10b9497a mov eax, edi */
  EAX = (EDI);
  /* 10b9497c add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b9497f and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10b94981 call 0x10b94f00 */
  push32(0x10b94986u); f_10b94f00();
  /* 10b94986 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10b94989 mov esi, esp */
  ESI = (ESP);
  /* 10b9498b mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 10b9498e push edi */
  push32((uint32_t)(EDI));
  /* 10b9498f push ebx */
  push32((uint32_t)(EBX));
  /* 10b94990 push esi */
  push32((uint32_t)(ESI));
  /* 10b94991 call 0x10b945e0 */
  push32(0x10b94996u); f_10b945e0();
  /* 10b94996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94999 jmp 0x10b949a6 */
  goto L_10b949a6;
  /* 10b9499b push 1 */
  push32((uint32_t)(0x1u));
  /* 10b9499d pop eax */
  EAX = (pop32());
  /* 10b9499e ret  */
  ESPCHK(0x10b948a2u, _esp0);
  ESP += 4; return;
  /* 10b9499f mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10b949a2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10b949a4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_10b949a6:;
  /* 10b949a6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10b949aa cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b949ac je 0x10b949d7 */
  if (C.zf) goto L_10b949d7;
  /* 10b949ae push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 10b949b1 push esi */
  push32((uint32_t)(ESI));
  /* 10b949b2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10b949b5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10b949b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10b949ba push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10b949bd call dword ptr [0x10b95018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95018))), 0x10b949c3u);
  /* 10b949c3 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b949c5 je 0x10b949d7 */
  if (C.zf) goto L_10b949d7;
  /* 10b949c7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10b949ca push eax */
  push32((uint32_t)(EAX));
  /* 10b949cb push esi */
  push32((uint32_t)(ESI));
  /* 10b949cc push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b949cf call dword ptr [0x10b95008] */
  call_ind((uint32_t)(r32((uint32_t)(0x10b95008))), 0x10b949d5u);
  /* 10b949d5 jmp 0x10b949d9 */
  goto L_10b949d9;
L_10b949d7:;
  /* 10b949d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10b949d9:;
  /* 10b949d9 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10b949dc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10b949df mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10b949e6 pop edi */
  EDI = (pop32());
  /* 10b949e7 pop esi */
  ESI = (pop32());
  /* 10b949e8 pop ebx */
  EBX = (pop32());
  /* 10b949e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b949ea ret  */
  ESPCHK(0x10b948a2u, _esp0);
  ESP += 4; return;
}

/* FUN_100049f0 @ 0x10b949f0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10b949f0(void) {
  FTRACE(0x10b949f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b949f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10b949f1 mov ebp, esp */
  EBP = (ESP);
  /* 10b949f3 push edi */
  push32((uint32_t)(EDI));
  /* 10b949f4 push esi */
  push32((uint32_t)(ESI));
  /* 10b949f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10b949f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10b949fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10b949fe mov eax, ecx */
  EAX = (ECX);
  /* 10b94a00 mov edx, ecx */
  EDX = (ECX);
  /* 10b94a02 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94a04 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94a06 jbe 0x10b94a10 */
  if ((C.cf||C.zf)) goto L_10b94a10;
  /* 10b94a08 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94a0a jb 0x10b94b88 */
  if (C.cf) goto L_10b94b88;
L_10b94a10:;
  /* 10b94a10 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b94a16 jne 0x10b94a2c */
  if (!C.zf) goto L_10b94a2c;
  /* 10b94a18 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94a1b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b94a1e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94a21 jb 0x10b94a4c */
  if (C.cf) goto L_10b94a4c;
  /* 10b94a23 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94a25 jmp dword ptr [edx*4 + 0x10b94b38] */
  switch (EDX) {
    case 0: goto L_10b94b48;
    case 1: goto L_10b94b50;
    case 2: goto L_10b94b5c;
    case 3: goto L_10b94b70;
    default: x86_unimpl("switch@0x10b94a25 out of table"); return;
  }
L_10b94a2c:;
  /* 10b94a2c mov eax, edi */
  EAX = (EDI);
  /* 10b94a2e mov edx, 3 */
  EDX = (0x3u);
  /* 10b94a33 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94a36 jb 0x10b94a44 */
  if (C.cf) goto L_10b94a44;
  /* 10b94a38 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b94a3b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94a3d jmp dword ptr [eax*4 + 0x10b94a50] */
  switch (EAX) {
    case 1: goto L_10b94a60;
    case 2: goto L_10b94a8c;
    case 3: goto L_10b94ab0;
    default: x86_unimpl("switch@0x10b94a3d out of table"); return;
  }
L_10b94a44:;
  /* 10b94a44 jmp dword ptr [ecx*4 + 0x10b94b48] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10b94b48)))); return;
  /* 10b94a4b nop  */
  /* nop */
L_10b94a4c:;
  /* 10b94a4c jmp dword ptr [ecx*4 + 0x10b94acc] */
  switch (ECX) {
    case 0: goto L_10b94b2f;
    case 1: goto L_10b94b1c;
    case 2: goto L_10b94b14;
    case 3: goto L_10b94b0c;
    case 4: goto L_10b94b04;
    case 5: goto L_10b94afc;
    case 6: goto L_10b94af4;
    case 7: goto L_10b94aec;
    default: x86_unimpl("switch@0x10b94a4c out of table"); return;
  }
  /* 10b94a53 nop  */
  /* nop */
L_10b94a60:;
  /* 10b94a60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94a62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94a64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94a66 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94a69 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94a6c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94a6f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94a72 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94a75 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94a78 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94a7b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94a7e jb 0x10b94a4c */
  if (C.cf) goto L_10b94a4c;
  /* 10b94a80 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94a82 jmp dword ptr [edx*4 + 0x10b94b38] */
  switch (EDX) {
    case 0: goto L_10b94b48;
    case 1: goto L_10b94b50;
    case 2: goto L_10b94b5c;
    case 3: goto L_10b94b70;
    default: x86_unimpl("switch@0x10b94a82 out of table"); return;
  }
  /* 10b94a89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94a8c:;
  /* 10b94a8c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94a8e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94a90 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94a92 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94a95 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94a98 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94a9b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94a9e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94aa1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94aa4 jb 0x10b94a4c */
  if (C.cf) goto L_10b94a4c;
  /* 10b94aa6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94aa8 jmp dword ptr [edx*4 + 0x10b94b38] */
  switch (EDX) {
    case 0: goto L_10b94b48;
    case 1: goto L_10b94b50;
    case 2: goto L_10b94b5c;
    case 3: goto L_10b94b70;
    default: x86_unimpl("switch@0x10b94aa8 out of table"); return;
  }
  /* 10b94aaf nop  */
  /* nop */
L_10b94ab0:;
  /* 10b94ab0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94ab2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94ab4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94ab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10b94ab7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94aba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10b94abb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94abe jb 0x10b94a4c */
  if (C.cf) goto L_10b94a4c;
  /* 10b94ac0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94ac2 jmp dword ptr [edx*4 + 0x10b94b38] */
  switch (EDX) {
    case 0: goto L_10b94b48;
    case 1: goto L_10b94b50;
    case 2: goto L_10b94b5c;
    case 3: goto L_10b94b70;
    default: x86_unimpl("switch@0x10b94ac2 out of table"); return;
  }
  /* 10b94ac9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94aec:;
  /* 10b94aec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10b94af0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10b94af4:;
  /* 10b94af4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10b94af8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10b94afc:;
  /* 10b94afc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10b94b00 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10b94b04:;
  /* 10b94b04 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10b94b08 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10b94b0c:;
  /* 10b94b0c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10b94b10 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10b94b14:;
  /* 10b94b14 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10b94b18 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10b94b1c:;
  /* 10b94b1c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10b94b20 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10b94b24 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b94b2b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94b2d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b94b2f:;
  /* 10b94b2f jmp dword ptr [edx*4 + 0x10b94b38] */
  switch (EDX) {
    case 0: goto L_10b94b48;
    case 1: goto L_10b94b50;
    case 2: goto L_10b94b5c;
    case 3: goto L_10b94b70;
    default: x86_unimpl("switch@0x10b94b2f out of table"); return;
  }
  /* 10b94b36 mov edi, edi */
  EDI = (EDI);
L_10b94b48:;
  /* 10b94b48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94b4b pop esi */
  ESI = (pop32());
  /* 10b94b4c pop edi */
  EDI = (pop32());
  /* 10b94b4d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94b4e ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94b4f nop  */
  /* nop */
L_10b94b50:;
  /* 10b94b50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94b52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94b57 pop esi */
  ESI = (pop32());
  /* 10b94b58 pop edi */
  EDI = (pop32());
  /* 10b94b59 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94b5a ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94b5b nop  */
  /* nop */
L_10b94b5c:;
  /* 10b94b5c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94b5e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94b60 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94b63 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94b69 pop esi */
  ESI = (pop32());
  /* 10b94b6a pop edi */
  EDI = (pop32());
  /* 10b94b6b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94b6c ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94b6d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94b70:;
  /* 10b94b70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10b94b72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10b94b74 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94b77 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94b7a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94b7d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94b83 pop esi */
  ESI = (pop32());
  /* 10b94b84 pop edi */
  EDI = (pop32());
  /* 10b94b85 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94b86 ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94b87 nop  */
  /* nop */
L_10b94b88:;
  /* 10b94b88 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10b94b8c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10b94b90 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10b94b96 jne 0x10b94bbc */
  if (!C.zf) goto L_10b94bbc;
  /* 10b94b98 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94b9b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10b94b9e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94ba1 jb 0x10b94bb0 */
  if (C.cf) goto L_10b94bb0;
  /* 10b94ba3 std  */
  C.df=1;
  /* 10b94ba4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94ba6 cld  */
  C.df=0;
  /* 10b94ba7 jmp dword ptr [edx*4 + 0x10b94cd0] */
  switch (EDX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94ba7 out of table"); return;
  }
  /* 10b94bae mov edi, edi */
  EDI = (EDI);
L_10b94bb0:;
  /* 10b94bb0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10b94bb2 jmp dword ptr [ecx*4 + 0x10b94c80] */
  switch (ECX) {
    case 0: goto L_10b94cc7;
    default: x86_unimpl("switch@0x10b94bb2 out of table"); return;
  }
  /* 10b94bb9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94bbc:;
  /* 10b94bbc mov eax, edi */
  EAX = (EDI);
  /* 10b94bbe mov edx, 3 */
  EDX = (0x3u);
  /* 10b94bc3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94bc6 jb 0x10b94bd4 */
  if (C.cf) goto L_10b94bd4;
  /* 10b94bc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10b94bcb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94bcd jmp dword ptr [eax*4 + 0x10b94bd8] */
  switch (EAX) {
    case 1: goto L_10b94be8;
    case 2: goto L_10b94c08;
    case 3: goto L_10b94c30;
    default: x86_unimpl("switch@0x10b94bcd out of table"); return;
  }
L_10b94bd4:;
  /* 10b94bd4 jmp dword ptr [ecx*4 + 0x10b94cd0] */
  switch (ECX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94bd4 out of table"); return;
  }
  /* 10b94bdb nop  */
  /* nop */
L_10b94be8:;
  /* 10b94be8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94beb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94bed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94bf0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10b94bf1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94bf4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10b94bf5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94bf8 jb 0x10b94bb0 */
  if (C.cf) goto L_10b94bb0;
  /* 10b94bfa std  */
  C.df=1;
  /* 10b94bfb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94bfd cld  */
  C.df=0;
  /* 10b94bfe jmp dword ptr [edx*4 + 0x10b94cd0] */
  switch (EDX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94bfe out of table"); return;
  }
  /* 10b94c05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94c08:;
  /* 10b94c08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94c0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94c0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94c10 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94c13 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94c16 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94c19 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94c1c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94c1f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94c22 jb 0x10b94bb0 */
  if (C.cf) goto L_10b94bb0;
  /* 10b94c24 std  */
  C.df=1;
  /* 10b94c25 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94c27 cld  */
  C.df=0;
  /* 10b94c28 jmp dword ptr [edx*4 + 0x10b94cd0] */
  switch (EDX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94c28 out of table"); return;
  }
  /* 10b94c2f nop  */
  /* nop */
L_10b94c30:;
  /* 10b94c30 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94c33 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10b94c35 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94c38 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94c3b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94c3e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94c41 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10b94c44 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94c47 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94c4a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94c4d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94c50 jb 0x10b94bb0 */
  if (C.cf) goto L_10b94bb0;
  /* 10b94c56 std  */
  C.df=1;
  /* 10b94c57 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10b94c59 cld  */
  C.df=0;
  /* 10b94c5a jmp dword ptr [edx*4 + 0x10b94cd0] */
  switch (EDX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94c5a out of table"); return;
  }
  /* 10b94c61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10b94c64 test byte ptr [ecx + edi*4 + 0x10], cl */
  { uint32_t _r=(r8((uint32_t)(ECX + EDI*4 + 0x10)))&(CL); fl_logic(_r,8); }
  /* 10b94c68 mov word ptr [ecx + edi*4 + 0x10], cs */
  w16((uint32_t)(ECX + EDI*4 + 0x10), (C.seg_cs));
  /* 10b94c6c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10b94c6d dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 10b94c6e mov ecx, 0xb94c9c10 */
  ECX = (0xb94c9c10u);
  /* 10b94c73 adc byte ptr [esp + ecx*2 + 0x4cac10b9], ah */
  { uint32_t _a=(r8((uint32_t)(ESP + ECX*2 + 0x4cac10b9))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(ESP + ECX*2 + 0x4cac10b9), (_r)); fl_add(_a,_b,_r,8); }
  /* 10b94c7a mov ecx, 0xb94cb410 */
  ECX = (0xb94cb410u);
  /* 10b94c84 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10b94c88 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10b94c8c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10b94c90 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10b94c94 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10b94c98 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10b94c9c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10b94ca0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10b94ca4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10b94ca8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10b94cac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10b94cb0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10b94cb4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10b94cb8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10b94cbc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10b94cc3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94cc5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10b94cc7:;
  /* 10b94cc7 jmp dword ptr [edx*4 + 0x10b94cd0] */
  switch (EDX) {
    case 0: goto L_10b94ce0;
    case 1: goto L_10b94ce8;
    case 2: goto L_10b94cf8;
    case 3: goto L_10b94d0c;
    default: x86_unimpl("switch@0x10b94cc7 out of table"); return;
  }
  /* 10b94cce mov edi, edi */
  EDI = (EDI);
L_10b94ce0:;
  /* 10b94ce0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94ce3 pop esi */
  ESI = (pop32());
  /* 10b94ce4 pop edi */
  EDI = (pop32());
  /* 10b94ce5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94ce6 ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94ce7 nop  */
  /* nop */
L_10b94ce8:;
  /* 10b94ce8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94ceb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94cee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94cf1 pop esi */
  ESI = (pop32());
  /* 10b94cf2 pop edi */
  EDI = (pop32());
  /* 10b94cf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94cf4 ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94cf5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10b94cf8:;
  /* 10b94cf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94cfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94cfe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94d01 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94d04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94d07 pop esi */
  ESI = (pop32());
  /* 10b94d08 pop edi */
  EDI = (pop32());
  /* 10b94d09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94d0a ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
  /* 10b94d0b nop  */
  /* nop */
L_10b94d0c:;
  /* 10b94d0c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10b94d0f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10b94d12 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10b94d15 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10b94d18 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10b94d1b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10b94d1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94d21 pop esi */
  ESI = (pop32());
  /* 10b94d22 pop edi */
  EDI = (pop32());
  /* 10b94d23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10b94d24 ret  */
  ESPCHK(0x10b949f0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10b94d28 (32 bytes, 18 insns) */
void f_10b94d28(void) {
  FTRACE(0x10b94d28u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94d28 push ebp */
  push32((uint32_t)(EBP));
  /* 10b94d29 mov ebp, esp */
  EBP = (ESP);
  /* 10b94d2b push ebx */
  push32((uint32_t)(EBX));
  /* 10b94d2c push esi */
  push32((uint32_t)(ESI));
  /* 10b94d2d push edi */
  push32((uint32_t)(EDI));
  /* 10b94d2e push ebp */
  push32((uint32_t)(EBP));
  /* 10b94d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10b94d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10b94d33 push 0x10b94d40 */
  push32((uint32_t)(0x10b94d40u));
  /* 10b94d38 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10b94d3b call 0x10b94f30 */
  push32(0x10b94d40u); f_10b94f30();
  /* 10b94d40 pop ebp */
  EBP = (pop32());
  /* 10b94d41 pop edi */
  EDI = (pop32());
  /* 10b94d42 pop esi */
  ESI = (pop32());
  /* 10b94d43 pop ebx */
  EBX = (pop32());
  /* 10b94d44 mov esp, ebp */
  ESP = (EBP);
  /* 10b94d46 pop ebp */
  EBP = (pop32());
  /* 10b94d47 ret  */
  ESPCHK(0x10b94d28u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10b94d6a (104 bytes, 33 insns) */
void f_10b94d6a(void) {
  FTRACE(0x10b94d6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94d6a push ebx */
  push32((uint32_t)(EBX));
  /* 10b94d6b push esi */
  push32((uint32_t)(ESI));
  /* 10b94d6c push edi */
  push32((uint32_t)(EDI));
  /* 10b94d6d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10b94d71 push eax */
  push32((uint32_t)(EAX));
  /* 10b94d72 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10b94d74 push 0x10b94d48 */
  push32((uint32_t)(0x10b94d48u));
  /* 10b94d79 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10b94d80 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10b94d87:;
  /* 10b94d87 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10b94d8b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10b94d8e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10b94d91 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94d94 je 0x10b94dc4 */
  if (C.zf) goto L_10b94dc4;
  /* 10b94d96 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94d9a je 0x10b94dc4 */
  if (C.zf) goto L_10b94dc4;
  /* 10b94d9c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10b94d9f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10b94da2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10b94da6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10b94da9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94dae jne 0x10b94dc2 */
  if (!C.zf) goto L_10b94dc2;
  /* 10b94db0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10b94db5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10b94db9 call 0x10b94dfe */
  push32(0x10b94dbeu); f_10b94dfe();
  /* 10b94dbe call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10b94dc2u);
L_10b94dc2:;
  /* 10b94dc2 jmp 0x10b94d87 */
  goto L_10b94d87;
L_10b94dc4:;
  /* 10b94dc4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10b94dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94dce pop edi */
  EDI = (pop32());
  /* 10b94dcf pop esi */
  ESI = (pop32());
  /* 10b94dd0 pop ebx */
  EBX = (pop32());
  /* 10b94dd1 ret  */
  ESPCHK(0x10b94d6au, _esp0);
  ESP += 4; return;
}

/* FUN_10004dfe @ 0x10b94dfe (24 bytes, 10 insns) */
void f_10b94dfe(void) {
  FTRACE(0x10b94dfeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94dfe push ebx */
  push32((uint32_t)(EBX));
  /* 10b94dff push ecx */
  push32((uint32_t)(ECX));
  /* 10b94e00 mov ebx, 0x10b967d0 */
  EBX = (0x10b967d0u);
  /* 10b94e05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10b94e08 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10b94e0b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10b94e0e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10b94e11 pop ecx */
  ECX = (pop32());
  /* 10b94e12 pop ebx */
  EBX = (pop32());
  /* 10b94e13 ret 4 */
  ESPCHK(0x10b94dfeu, _esp0);
  ESP += 8; return;
}

/* FUN_10004edd @ 0x10b94edd (27 bytes, 11 insns) */
void f_10b94edd(void) {
  FTRACE(0x10b94eddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94edd push ebp */
  push32((uint32_t)(EBP));
  /* 10b94ede mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10b94ee2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10b94ee4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10b94ee7 push eax */
  push32((uint32_t)(EAX));
  /* 10b94ee8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10b94eeb push eax */
  push32((uint32_t)(EAX));
  /* 10b94eec call 0x10b94d6a */
  push32(0x10b94ef1u); f_10b94d6a();
  /* 10b94ef1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10b94ef4 pop ebp */
  EBP = (pop32());
  /* 10b94ef5 ret 4 */
  ESPCHK(0x10b94eddu, _esp0);
  ESP += 8; return;
}

/* FUN_10004f00 @ 0x10b94f00 (47 bytes, 17 insns) */
void f_10b94f00(void) {
  FTRACE(0x10b94f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94f00 push ecx */
  push32((uint32_t)(ECX));
  /* 10b94f01 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94f06 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10b94f0a jb 0x10b94f20 */
  if (C.cf) goto L_10b94f20;
L_10b94f0c:;
  /* 10b94f0c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94f12 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94f17 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b94f19 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10b94f1e jae 0x10b94f0c */
  if (!C.cf) goto L_10b94f0c;
L_10b94f20:;
  /* 10b94f20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10b94f22 mov eax, esp */
  EAX = (ESP);
  /* 10b94f24 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10b94f26 mov esp, ecx */
  ESP = (ECX);
  /* 10b94f28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10b94f2a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10b94f2d push eax */
  push32((uint32_t)(EAX));
  /* 10b94f2e ret  */
  ESPCHK(0x10b94f00u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10b94f30 (6 bytes, 1 insns) */
void f_10b94f30(void) {
  FTRACE(0x10b94f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10b94f30 jmp dword ptr [0x10b95004] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10b95004)))); return;
}

